#include <iostream>
#include <cmath>
#include "fundamental.h"

using namespace std;

//time of stationary observer(t)
float f,fo;
//time for observer in motion/proper time (to)
float w, wo;
// B for beta so c() dont run twice but once
float B;
//velocity of the moving body
double vD;

// function to find  t
void receding(); b
//function to find to
void approching();


//function to find v
void frequencyAproching();
//main function
void dopplerEffect();

void dopplerEffect(){
    std::cout << "what are you calculating for : " << std::endl;
    std::cout << "1. source and receiver approaching\n2. source and receiver receding \nNB: each of the option can be done for frquency and wavelenght" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        approching();
        break;
    case 2:
        receding();
        break;
    default:
        std::cout << "invalid input, try again: " << std::endl;
        dopplerEffect();
        break;
    }
}

void receding(){
    cout << "what property of light will you be calculating this effect for \n1) frequency \n2) wavelenght: ";
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        frequencyAproching();
        break;
    case 2:
        cout << "input the value of f* "<<endl;
        cin >>fo;
        cout << "input the value for velocity of the ";
        vD = velocityF();
        B = beta(vD)
        float temp = (1-B)/(1+B);
        f = temp * fo;
        cout<< "the frequency of the light as the source and observer are receding form eachother is : " << f<<endl;
        break;

    default:
        break;
    }
    cout << "input the value for v(velocity of the body) : ";
    vT = velocityF();
    t = to * gamma(vT);
    cout << "\n The time for stationary observer is "<< t<< " sec"<<endl;
}

void approching(){
    cout << "input the value for t(time for stationary observer) : ";
    cin >> t;
    cout << "\ninput the value for v(velocity of the body) : "<<endl;
    vT = velocityF();
    t = to / gamma(vT);
    cout << "\n The proper time/time for observer in motion, to = "<< t << " sec"<<endl;

}

void frequencyAproching(){
    int inp;
    std::cout << "What will you be finding \n1)f \n2)f* \n3) v" << std::endl;
    cin << inp;
    switch (inp)
    {
    case 1:
        cout << "input the value of f* "<<endl;
        cin >>fo;
        cout << "input the value for velocity of the ";
        vD = velocityF();
        B = beta(vD);
        float temp = (1-B)/(1+B);
        f = sqrt(temp) * fo;
        cout<< "the frequency of the light as the source and observer are receding form eachother is : " << f<<endl;
        break;
    case 2:
        cout << "input the value of f "<<endl;
        cin >>f;
        cout << "input the value for velocity of the ";
        vD = velocityF();
        B = beta(vD)
        float temp = (1-B)/(1+B);
        f = sqrt(temp) * fo;
        cout<< "the frequency of the light as the source and observer are receding form eachother is : " << f<<endl;
    default:
        break;
    }


}
