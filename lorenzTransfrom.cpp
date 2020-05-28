#include <iostream>
#include <cmath>
#include "functions.h"
#include "LorenzTransfrom.h"
using namespace std;


/*S and S` are two referece frames where (t, x, y, z) and (t', x', y', z') are the coordinates of an event in two frames, where the primed frame is seen from the unprimed frame as moving with speed v along the x-axis, c is the speed of light, and gamma is the Lorentz factor
*/
//lt at the end of each variable denote that the variable is for lorenz transform
//the values of cordinates of S` for lorenz transform



void LorenzTransfrom::lorenzPositionTransform()  {
    std::cout << "\n what are you transforming \n1) x \n2) t" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        {cout << "\ninput x` : ";
        cin >>x1lt;
        cout << "input t` : ";
        cin >> t1lt;
        cout << "input v : ";
        vlt = velocityF();
        xlt = gamma(vlt)*( x1lt +( vlt*t1lt));
        cout << "the value of x with respect to S` is "<< xlt<<endl;
        break;}
    case 2:
        {cout << "\ninput x` : ";
        cin >>x1lt;
        cout << "input t` : ";
        cin >> t1lt;
        cout << "input v : ";
        vlt = velocityF();
        float temp = (vlt *xlt)/ pow(c(),2);
        tlt = gamma(vlt)*( temp +( t1lt));
        cout <<"the value of t with respect to S` is "<< tlt<<endl;
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
    cin >> ux1lt;
    cout << "input v : ";
    vlt = velocityF();
    float tem = 1 + (vlt / pow(c(),2)) * ux1lt;
    uxlt = (ux1lt + vlt) / tem ;
    cout << "the value for Ux is : "<< uxlt<<endl;
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

