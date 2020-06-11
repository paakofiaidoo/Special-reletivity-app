#include "TimeDilation.h"

#include <iostream>
#include <cmath>


using namespace std;


void TimeDilation::timeDilation(){
    cout << "what are you calculating for : " << endl;
    cout << "1. time of stationary observer\n2. proper time / time for observer in motion\n3. velocity of motion" << endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        findT();
        break;
    case 2:
        findT0();
        break;
    case 3:
        findV();
        break;

    default:
        cout << "invalid input, try again: " << endl;
        timeDilation();
        break;
    }
}

void TimeDilation::findT(){
    cout << "input the value for to(proper time/time for observer in motion) : ";
    cin >> t0;
    cout << "input the value for v(velocity of the body) : ";
    v = velocityF();
    t = t0 * gamma(v);
    cout << "\n The time for stationary observer is "<< t<< " sec"<<endl;
}

void TimeDilation::findT0(){
    cout << "input the value for t(time for stationary observer) : ";
    cin >> t;
    cout << "\ninput the value for v(velocity of the body) : "<<endl;
    v = velocityF();
    t = t0 / gamma(v);
    cout << "\n The proper time/time for observer in motion, to = "<< t << " sec"<<endl;

}

void TimeDilation::findV(){
    cout << "input the value for t(time for stationary observer) : ";
    cin >> t;
    cout << "\ninput the value for to(proper time/time for observer in motion) : ";
    cin >> t0;
    float com = t0/t;
    v = c() * (sqrt(1 - pow(com,2)));
    cout << "\n The velocity of the body, v = "<< v <<endl;

}
