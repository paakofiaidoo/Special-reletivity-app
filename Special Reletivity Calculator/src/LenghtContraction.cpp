#include <iostream>
#include <cmath>
#include "LenghtContraction.h"

using namespace std;


void LenghtContraction::lenghtContraction(){
    cout << "what are you calculating for : " << endl;
    cout << "1. length l for observer in motion\n2. length, lo observed by stationary observer/proper length\n3. velocity of motion" << endl;
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
                findV();
                break;

            default:
                cout << "invalid input, try again: " << endl;
                lenghtContraction();
                break;
        }
    }

void LenghtContraction::findL(){
    cout << "input the value for lo (length observed by stationary observer/proper length) : ";
    cin >> lo;
    cout << "input the value for v(velocity of the body) : ";
    v = velocityF();
    l = lo / gamma(v);
    cout << "\n The length for observer in motion is "<< l<< " m"<<endl;
}

void LenghtContraction::findLo(){
    cout << "input the value for l(length for observer in motion) : ";
    cin >> l;
    cout << "\ninput the value for v(velocity of the body) : "<<endl;
    v = velocityF();
    lo = l * gamma(v);
    cout << "\n The proper length/length observed by stationary observer, lo = "<< lo << " m"<<endl;

}

void LenghtContraction::findV(){
    cout << "input the value for l(length for observer in motion) : ";
    cin >> l;
    cout << "\ninput the value for lo (length observed by stationary observer/proper length) : ";
    cin >> lo;
    float com = l/lo;
    v = c() * (sqrt(1 - pow(com,2)));
    cout << "\n The velocity of the body, v = "<< v <<endl;

}
