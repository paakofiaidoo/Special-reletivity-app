#include "Fundamentals.h"
#include <iostream>
#include <Cmath>
#include "VectorDatabase.h"

using namespace std;
//use a do while loop
VectorDatabase mainDataBase;
float Fundamentals::c(){
    int inp;
    float sol;
    if (mainDataBase.findInDatabase("speed of light") != 0){
        return mainDataBase.findInDatabase("speed of light");
    }
    cout << "\nwhat constant will you use for the speed of light"<<endl;
    cout << "1) 3x10^8 m/s \n2) 299 792 458 m / s"<<endl;
    cin >> inp;

    if (inp == 0){inp = 1;}

    if (inp == 1){sol = 3.0e8;}
    else if (inp == 2){sol = 2.99792458e8;}
    else if(inp != 1 || inp != 2){
       cout << "invalid input, try again" << endl;
       c();
    }

    cout << "Therefore the speed of light, c = "<< sol << " m/s" <<endl;
    mainDataBase.addToDatabase("speed of light", sol);
    return sol;
}

float Fundamentals::velocityF(){
    cout << "\n what form of input are you giving for the velocity: \n1) x *10^8 m/s \n2) x m/s  \n3)x*c\n" << endl;

    float sol, x, velocity;
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
            sol = c();
            velocity = x * sol;
            }

    else if(x != '\n')
        {
            cout << "invalid input, try again " << endl;
            velocityF();
        }

    try
    {
        int err = 1;
        if(velocity > 3e8 )
            throw err;
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
    float beta;
    beta = v / c();
    cout << "speed ratio , beta = "<< beta<<endl;
    return beta;
}

float Fundamentals::beta(){
    int inp = 1;
    while (inp)
    {
        float beta;
        float velo;
        cout << "what will you like to determine \n1) beta \n2) velocity"<<endl;
        cin >> inp;
        if(inp ==1){
            velo = velocityF();
            beta = velo / c();
            cout << "\nspeed ratio , beta = "<< beta<<endl;
            inp = 0;
        }
        else if (inp == 2)
        {
            cout << "\ninput Beta(speed ratio) : " ;
            cin >> beta;
            velo = beta * c();
            cout << "\nfor a speed ratio , beta = "<< beta<<endl;
            cout << "the velocity of the particle is "<< velo << endl;
            inp = 0;
        }
        else{
            inp = 1;
        }
    }

    
    
}

float Fundamentals::gamma(double velocity){
    float gamma;
    gamma = 1 / (sqrt(1 - pow(beta(velocity),2)));
    return gamma;
}

float Fundamentals::gamma(){
    float gamma;
    float velo = velocityF();
    gamma = 1 / (sqrt(1 - pow(beta(velo),2)));
    cout << "lorentz factor , gamma = "<< gamma<<endl;
    return gamma;
}


