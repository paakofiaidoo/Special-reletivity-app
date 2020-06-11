#include "GalileanTransform.h"
#include <iostream>


using namespace std;




void GalileanTransform::galileanTransform(){
    std::cout << "Asuming S and S` are two inertial frames of reference. S' which is moving with respect to S at the constant velocity v in the direction of X axis which begain at a time to=0s and event was recored at time t = t`" << std::endl;
    cout << "what are you calculating for : " << endl;
    cout << "1. Galilean Position Transform\n2. Galilean Velocity Transform" << endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        galileanPositionTransform();
        break;
    case 2:
        galileanVelocityTransform();
        break;

    default:
        cout << "invalid input, try again: " << endl;
        galileanTransform();
        break;
    }
}

void GalileanTransform::galileanPositionTransform(){
    std::cout << "\nWhat will you be solving for \n1) x\n,2)x`\n3) t\n4) v" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        cout << "Input the value for x` : ";
        cin >> x1;
        cout << "input the value for v : ";
        v = velocityF();
        cout << "Input the value for t : ";
        cin >> t;
        x = x1 +(v*t);
        cout << "\n The position on x-aixs in S is x = "<< x <<endl;
        break;
    case 2:
        cout << "Input the value for x : ";
        cin >> x;
        cout << "input the value for v : ";
        v = velocityF();
        cout << "Input the value for t : ";
        cin >> t;
        x1 = x - (v*t);
        cout << "\n The position on x-aixs in S` is x = "<< x1 <<endl;
        break;
    case 3:
        cout << "Input the value for x : ";
        cin >> x;
        cout << "input the value for x` : ";
        cin >> x1;
        cout << "Input the value for v : ";
        v = velocityF();
        t = (x1-x) / v;
        cout << "\n The time after the event t = "<< t <<endl;
        break;
    case 4:
        cout << "Input the value for x : ";
        cin >> x;
        cout << "input the value for x` : ";
        cin >> x1;
        cout << "Input the value for t : ";
        cin >> t;
        v = (x1-x) / t;
        cout << "\n The velocity, v = "<< v <<endl;
        break;
    default:
        std::cout << "Invalid input, try again " << std::endl;
        galileanPositionTransform();
        break;
    }

}

void GalileanTransform::galileanVelocityTransform(){
    std::cout << "\nWhat will you be solving for \n1) Ux\n,2)x`\n3) v" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        cout << "Input the value for Ux` : ";
        cin >> u1;
        cout << "input the value for v : ";
        v = velocityF();
        u = u1 + v;
        cout << "\n The velocity Ux = "<< u <<endl;
        break;
    case 2:
        cout << "Input the value for Ux : ";
        cin >> u;
        cout << "input the value for v : ";
        v = velocityF();
        u1 = u - v;
        cout << "\n The velocity Ux` = "<< u1 <<endl;
        break;
    case 3:
        cout << "Input the value for Ux : ";
        cin >> u;
        cout << "input the value for Ux` : ";
        cin >> u1;
        v = u - u1;
        cout << "\n The time after the event t = "<< v <<endl;
        break;
    default:
        std::cout << "Invalid input, try again " << std::endl;
        galileanPositionTransform();
        break;
    }

}

