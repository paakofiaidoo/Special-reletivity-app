#include <iostream>
#include "fundamental.h"

using namespace std;
//NB: the G in the variable names are to indicated that variable is related to galilean trans...
//position in the x-aixs of the two reference frames x(xG) and x`(x1G)
float xG, x1G;
//velocity of the v(vG) of S` with respect to S
double vG;
//time of the frames after the event t because t = t`,
float tG;
//velocity of the  frames
float uG, u1G;



// function to resolve the position using galilean transform 
void galileanPositionTransform();
//function to resolve the velocity using galilean transform 
void galileanVelocityTransform();
//function to find v
//void findVLenght();
//main function
void galileanTransform();

void galileanTransform(){
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

void galileanPositionTransform(){
    std::cout << "\nWhat will you be solving for \n1) x\n,2)x`\n3) t\n4) v" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        cout << "Input the value for x` : ";
        cin >> x1G;
        cout << "input the value for v : ";
        vG = velocityF();
        cout << "Input the value for t : ";
        cin >> tG;
        xG = x1G +(vG*tG);
        cout << "\n The position on x-aixs in S is x = "<< xG <<endl;
        break;
    case 2:
        cout << "Input the value for x : ";
        cin >> xG;
        cout << "input the value for v : ";
        vG = velocityF();
        cout << "Input the value for t : ";
        cin >> tG;
        x1G = xG - (vG*tG);
        cout << "\n The position on x-aixs in S` is x = "<< x1G <<endl;
        break;
    case 3:
        cout << "Input the value for x : ";
        cin >> xG;
        cout << "input the value for x` : ";
        cin >> x1G;
        cout << "Input the value for v : ";
        vG = velocityF();
        tG = (x1G-xG) / vG;
        cout << "\n The time after the event t = "<< tG <<endl;
        break;
    case 4:
        cout << "Input the value for x : ";
        cin >> xG;
        cout << "input the value for x` : ";
        cin >> x1G;
        cout << "Input the value for t : ";
        cin >> tG;
        vG = (x1G-xG) / tG;
        cout << "\n The velocity, v = "<< vG <<endl;
        break;
    default:
        std::cout << "Invalid input, try again " << std::endl;
        galileanPositionTransform();
        break;
    }
    
}

void galileanVelocityTransform(){
    std::cout << "\nWhat will you be solving for \n1) Ux\n,2)x`\n3) v" << std::endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 1:
        cout << "Input the value for Ux` : ";
        cin >> u1G;
        cout << "input the value for v : ";
        vG = velocityF();
        uG = u1G + vG;
        cout << "\n The velocity Ux = "<< uG <<endl;
        break;
    case 2:
        cout << "Input the value for Ux : ";
        cin >> uG;
        cout << "input the value for v : ";
        vG = velocityF();
        u1G = uG - vG;
        cout << "\n The velocity Ux` = "<< u1G <<endl;
        break;
    case 3:
        cout << "Input the value for Ux : ";
        cin >> uG;
        cout << "input the value for Ux` : ";
        cin >> u1G;
        vG = uG - u1G;
        cout << "\n The time after the event t = "<< vG <<endl;
        break;
    default:
        std::cout << "Invalid input, try again " << std::endl;
        galileanPositionTransform();
        break;
    }
    
}