#include <iostream>
#include "../fundamental.h"

using namespace std;

//time of stationary observer(t)
float t;
//time for observer in motion/proper time (to)
float to;
//velocity of the moving body
double v;

float findT();
int main(){
    std::cout << "what are you calculating for : " << std::endl;
    std::cout << "1. time of stationary observer\n2. proper time / time for observer in motion\n3. velocity of motion" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        findT();
        break;

    default:
        std::cout << "invalid input, try again: " << std::endl;
        main();
        break;
    }
    return 0;
}

float findT(){
    cout << "input the value for to(proper time/time for observer in motion) : ";
    cin >> to;
    cout << "input the value for v(velocity of the body) : ";
    v = velocityF();
    t = to * gamma(v);
    cout << "\n The time for stationary observer is "<< t<<endl;
    


}
float findTo(){}
float findV(){}
