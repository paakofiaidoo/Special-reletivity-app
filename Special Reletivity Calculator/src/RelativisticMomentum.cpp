#include "RelativisticMomentum.h"
#include <cmath>
#include <iostream>

using namespace std;

void RelativisticMomentum::relativisticMomentumUI()
{
    cout << "For an object moving in your reference frame what property of relativistic momentum do you want to find :"<<endl;
    cout << "1)Momentum \n2)mass from momentum \n3)velocity from momentum"<<endl;
    char option;
    cin >> option;
    if(option == '1'){
        P = findMomentum(massFunc(), velocityF());
        cout << "The momentum of the object in motion is : " << P <<" Kg*m/s"<<endl;
    }else if (option == '2'){
        cout << "input momentum of the object in Kg*m/s"<<endl;
        cin >>  P;
        m = findMass(P, velocityF());
        cout << "The mass of the body is : "<< m << "Kg"<<endl;
    }else if (option == '3'){
        cout << "input momentum of the object in Kg*m/s"<<endl;
        cin >>  P;
        v = findVelocity(massFunc(), P);
        cout << "The velocity of the body is : "<< v << "m/s"<<endl;
    }

}

float RelativisticMomentum::findVelocity(float mass, float momentum){
    momentum = pow(momentum,2);
    mass = pow(mass,2);
    v = pow(c(),2);
    float nomerator = momentum * v;
    float denominator = ((mass*v)+ momentum);
    v = nomerator / denominator;
    v = sqrt(v);
    return v;
}

float RelativisticMomentum::findMass(float momentum, float velocity){
    m = momentum /(velocity * gamma(velocity));
    return m;
}

float RelativisticMomentum::findMomentum(float mass, float velocity){
    P = mass * velocity * gamma(velocity);
    return P;
}
