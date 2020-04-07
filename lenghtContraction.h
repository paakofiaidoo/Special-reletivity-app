#include <iostream>
#include "fundamental.h"

using namespace std;

//lenght for observer in motion (l)
float l;
//lenght observed by stationary observer/proper lenght (lo)
float lo;
//velocity of the moving body
double v;

// function to find L
void findL();
//function to find Lo
void findLo();
//function to find v
void findVLenght();
//main function
void lenghtContraction();

void lenghtContraction(){
    cout << "what are you calculating for : " << endl;
    cout << "1. lenght l for observer in motion\n2. lenght, lo observed by stationary observer/proper lenght\n3. velocity of motion" << endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        findL();
        break;
    case 2:
        findLo();
        break;
    case 3:
        findVLenght();
        break;

    default:
        cout << "invalid input, try again: " << endl;
        lenghtContraction();
        break;
    }
}

void findL(){
    cout << "input the value for lo (lenght observed by stationary observer/proper lenght) : ";
    cin >> lo;
    cout << "input the value for v(velocity of the body) : ";
    v = velocityF();
    l = lo / gamma(v);
    cout << "\n The lenght for observer in motion is "<< l<< " m"<<endl;
}

void findLo(){
    cout << "input the value for l(lenght for observer in motion) : ";
    cin >> l;
    cout << "\ninput the value for v(velocity of the body) : "<<endl;
    v = velocityF();
    lo = l * gamma(v);
    cout << "\n The proper lenght/lenght observed by stationary observer, lo = "<< lo << " m"<<endl;

}

void findVLenght(){
    cout << "input the value for l(lenght for observer in motion) : ";
    cin >> l;
    cout << "\ninput the value for lo (lenght observed by stationary observer/proper lenght) : ";
    cin >> lo;
    float com = l/lo;
    v = c() * (sqrt(1 - pow(com,2)));
    cout << "\n The velocity of the body, v = "<< v <<endl;

}
