#include "Fundamentals.h"
#include <iostream>
#include <Cmath>
#include <string>


using namespace std;
//use a do while loop

float Fundamentals::c(){
    float sol;
    if (FundaDataBase.findInDatabase("speed of light") != 0){
        return FundaDataBase.findInDatabase("speed of light");
    }
    cout << "\nwhat constant will you use for the speed of light"<<endl;
    cout << "1) 3x10^8 m/s \n2) 299 792 458 m / s"<<endl;
    int inp;
    cin >> inp;
    if (inp == 0 ){inp = 1;}
    if (inp == 1){sol = 3.0e8;}
    else if (inp == 2){sol = 2.99792458e8;}
    else if(inp != 1 || inp != 2){
       cout << "invalid input, try again" << endl;
       c();
    }

    cout << "Therefore the speed of light, c = "<< sol << " m/s" <<endl;
    FundaDataBase.addToDatabase("speed of light", sol);
    return sol;
}

float Fundamentals::velocityF(){
    cout << "\n what form of input are you giving for the velocity: \n1) x *10^8 m/s \n2) x m/s  \n3)x*c\n" << endl;

    float x;
    cin >> x;
     if(x == 1)
        {
            cout<< "input the value of v : ";
            cin >> x ;
            velocity = x * 1e8;
        }
    else if(x == 2)
        {
            cout<< "input the value of v : ";
            cin >> x ;
            velocity = x;
        }
    else if(x == 3)
        {
            cout<< "input the value of v : ";
            cin >> x;
            velocity = x * c();
            }

    else if(x != '\n')
        {
            cout << "invalid input, try again " << endl;
            velocityF();
        }

    try
    {
        int err = 1;
        if(velocity > 3e8 ){throw err;}
        cout << "Therefore velocity, v = "<< velocity<< "m/s"<<endl;
        return velocity;
    }
    catch(int e)
    {
        cout << "the velocity is greater that the speed of light breaking the theory of relativity" << endl;
        velocityF();
    }
    return velocity;
}

float Fundamentals::beta(double v){
    float betatemp;
    betatemp = v / c();
    cout << "speed ratio , beta = "<< betatemp<<endl;
    return betatemp;
}

float Fundamentals::betaUI(){
    int inp = 1;
    float betatemp;
    while (inp)
    {
        cout << "what will you like to determine \n1) beta \n2) velocity"<<endl;
        cin >> inp;
        if(inp ==1){
            velocity = velocityF();
            betatemp = velocity / c();
            cout << "\nspeed ratio , beta = "<< betatemp<<endl;
            inp = 0;
        }
        else if (inp == 2)
        {
            cout << "\ninput Beta(speed ratio) : " ;
            cin >> betatemp;
            velocity = betatemp * c();
            cout << "\nfor a speed ratio , beta = "<< betatemp<<endl;
            cout << "the velocity of the particle is "<< velocity << endl;
            inp = 0;
        }
        else{
            inp = 1;
        }
    }


    return betatemp;
}

float Fundamentals::gamma(double velocity){
    float gammatemp;
    gammatemp = 1 / (sqrt(1 - pow(beta(velocity),2)));
    return gammatemp;
}

float Fundamentals::gamma(){
    float gammatemp;
    float velocity = velocityF();
    gammatemp = 1 / (sqrt(1 - pow(beta(velocity),2)));
    cout << "lorentz factor , gamma = "<< gammatemp<<endl;
    return gammatemp;
}

float Fundamentals::massFunc(){
    cout << "what form of input will will you be giving for mass\n 1)Kg \n2)U"<<endl;
    float mass;
    char option;
    cin >> option;
    if(option == '1'){
        cout << "Input your mass in Kg (NB:if mass in in the form x*10^-27 type it in the form xe-27): ";
        cin >> mass;
    }else if(option == '2'){
        cout << "input your mass in atomic mass unit U : ";
        cin >> mass;
        mass = mass * 1.6605e-27;
    }else{
        cout << "Invalid option input try again\n"<<endl;
        massFunc();
    }
    cout << "mass is therefore "<< mass << " Kg"<<endl;
    return mass;
}

float Fundamentals::energyFunc(){
    cout << "what form of input will will you be giving for energy\n 1)J \n2)eV \n3)MeV"<<endl;
    float energy;
    char option;
    cin >> option;
    if(option == '1'){
        cout << "Input your energy in J (NB:if energy in in the form x*10^27 type it in the form xe27): ";
        cin >> energy;
    }else if(option == '2'){
        cout << "input your energy eV : ";
        cin >> energy;
        energy = energy * 1.6022e-19;
    }else if(option == '3'){
        cout << "input your energy MeV : ";
        cin >> energy;
        energy = energy * 1.6022e-19 * 1e6;
    }else{
        cout << "Invalid option input try again\n"<<endl;
        energyFunc();
    }
    cout << "energy is therefore "<< energy << " J"<<endl;
    return energy;
}

float Fundamentals::energyConv(double value, string from, string to){
    if(from == "J"){
        if (to == "J")
        {
            cout << "value of " << value;
            std::cout << " from J to J is " << value <<" J"<< std::endl;
            return value;
        }else if (to == "eV")
        {
            cout << "value of " << value;
            value = value / 1.6022e-19;
            std::cout << " from J to eV is " << value <<" eV"<< std::endl;
            return value;
        }else if(to == "MeV")
        {
            cout << "value of " << value;
            value = value / (1.6022e-19 * 1e6);
            std::cout << " from J to MeV is " << value <<" MeV"<< std::endl;
            return value;
        }else
        {
            cout << "i don't know what i am converting to"<<endl;
        }
    }else if(from == "eV"){
        if (to == "J")
        {
            cout << "value of " << value;
            value = value * 1.6022e-19;
            std::cout << " from eV to J is " << value <<" J"<< std::endl;
            return value;
        }else if (to == "eV")
        {
            cout << "value of " << value;
            std::cout << " from eV to eV is " << value <<" eV"<< std::endl;
            return value;
        }else if(to == "MeV")
        {
            cout << "value of " << value;
            value = value  * 1e-6;
            std::cout << " from eV to MeV is " << value <<" MeV"<< std::endl;
            return value;
        }else
        {
            cout << "i don't know what i am converting to"<<endl;
        }
    }else if(from == "MeV"){
        if (to == "J")
        {
            cout << "value of " << value;
            value = value * 1.6022e-19 *1e6;
            std::cout << " from MeV to J is " << value <<" J"<< std::endl;
            return value;
        }else if (to == "eV")
        {
            cout << "value of " << value;
            value = value *1e6;
            std::cout << " from MeV to eV is " << value <<" eV"<< std::endl;
            return value;
        }else if(to == "MeV")
        {
            cout << "value of " << value;
            std::cout << " from MeV to MeV is " << value <<" MeV"<< std::endl;
            return value;
        }else
        {
            cout << "i don't know what i am converting to"<<endl;
        }
    }else
    {
        cout << "i don't know what i am converting from so i will be converting from J "<<endl;
        energyConv(value, "J", to);
    }
    return value;
}
