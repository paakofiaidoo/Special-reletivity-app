#include <iostream>
#include <cmath>
#include "LorenzTransfrom.h"
using namespace std;


void LorenzTransfrom::lorenzPositionTransform()  {
    std::cout << "\n what are you transforming \n1) x \n2) t" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        {cout << "\ninput x` : ";
        cin >>x1;
        cout << "input t` : ";
        cin >> t1;
        cout << "input v : ";
        v = velocityF();
        x = gamma(v)*( x1 +( v*t1));
        cout << "the value of x with respect to S` is "<< x<<endl;
        break;}
    case 2:
        {cout << "\ninput x` : ";
        cin >>x1;
        cout << "input t` : ";
        cin >> t1;
        cout << "input v : ";
        v = velocityF();
        float temp = (v *x)/ pow(c(),2);
        t = gamma(v)*( temp +( t1));
        cout <<"the value of t with respect to S` is "<< t<<endl;
        break;}
    default:
        cout << "invalid input, try again";
        lorenzPositionTransform();
        break;
    }

}

void LorenzTransfrom::lorenzVelocityTransform() {
    cout << "to find the Ux(velocity of particle in the x direction) ";
    cout << "\ninput Ux` : ";
    cin >> ux1;
    cout << "input v : ";
    v = velocityF();
    float tem = 1 + (v / pow(c(),2)) * ux1;
    ux = (ux1 + v) / tem ;
    cout << "the value for Ux is : "<< ux<<endl;
}


void LorenzTransfrom::lorenzTransformations(){
    std::cout << "Assuming S and S` are two referece frames where (t, x, y, z) and (t' , x' , y' , z' ) are the coordinates of an event in two frames, where the S` is seen from the S as moving with speed v along the x-axis, c is the speed of light, and gamma is the Lorentz factor" << std::endl;
    std::cout << "What will you be calculating for \n1) Position transform \n2) Velocity transfrom" << std::endl;
    int data;
    cin >> data;
    switch (data)
    {
    case 1:
        lorenzPositionTransform();
        break;
    case 2:
        lorenzVelocityTransform();
        break;

    default:
        std::cout << "invalid input, try again " << std::endl;
        lorenzTransformations();
        break;
    }




}

