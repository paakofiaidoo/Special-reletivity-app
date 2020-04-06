#include <iostream>
#include "fundamental.h"

using namespace std;

//time of stationary observer(t)
float t;
//time for observer in motion/proper time (to)
float to;
//velocity of the moving body
double v;

// function to find  t
void findT();
//function to find to
void findTo();
//function to find v
void findV();
//main function
void timeDilation();

void timeDilation(){
    std::cout << "what are you calculating for : " << std::endl;
    std::cout << "1. time of stationary observer\n2. proper time / time for observer in motion\n3. velocity of motion" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        findT();
        break;
    case 2:
        findTo();
        break;
    case 3:
        findV();
        break;

    default:
        std::cout << "invalid input, try again: " << std::endl;
        timeDilation();
        break;
    }
}

void findT(){
    cout << "input the value for to(proper time/time for observer in motion) : ";
    cin >> to;
    cout << "input the value for v(velocity of the body) : ";
    v = velocityF();
    t = to * gamma(v);
    cout << "\n The time for stationary observer is "<< t<< " sec"<<endl;
}

void findTo(){
    cout << "input the value for t(time for stationary observer) : ";
    cin >> t;
    cout << "\ninput the value for v(velocity of the body) : "<<endl;
    v = velocityF();
    t = to / gamma(v);
    cout << "\n The proper time/time for observer in motion, to = "<< t << " sec"<<endl;

}

void findV(){
    cout << "input the value for t(time for stationary observer) : ";
    cin >> t;
    cout << "\ninput the value for to(proper time/time for observer in motion) : ";
    cin >> to;
    float com = to/t;
    v = c() * (sqrt(1 - pow(com,2)));
    cout << "\n The velocity of the body, v = "<< v <<endl;

}
