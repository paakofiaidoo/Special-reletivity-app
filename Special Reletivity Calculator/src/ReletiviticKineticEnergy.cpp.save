#include "ReletiviticKineticEnergy.h"
#include <cmath>
#include <iostream>

using namespace std;

float ReletiviticKineticEnergy::findKineticEnergy(float mass, float velocity){
    float temp = (gamma(velocity)-1);
    KE = temp * mass * pow(c(),2);
    return KE;
}
float ReletiviticKineticEnergy::findMass(float kineticEnergy, float velocity){
    float temp = (gamma(velocity)-1);
    temp = temp * pow(c(),2);
    m = kineticEnergy / temp;
    return m;
}
float ReletiviticKineticEnergy::findVelocity(float kineticEnergy, float mass){
    float temp1 = pow(c(),2);
    float temp2 = mass * temp1;
    float temp3 = kineticEnergy + temp2;
    temp2 = temp2 / temp3;
    temp2 = 1 - temp2;
    v = temp1 *temp2;
    v = sqrt(v);
    return v;
}
void ReletiviticKineticEnergy::reletiviticKineticEnergyUI(){
    cout << "for an object moving in your reference frame, what property of it kinetic energy do you want to find "<<endl;
    cout << "1.Relativistic Kinetic Energy \n2.rest mass \n3.velocity"<<endl;
    char option;
    cin >> option;
    if (option == '1')
    {
        KE = findKineticEnergy(massFunc(), velocityF());
        cout << "the kinetic energy of the object is "<< KE<<" J"<<endl;
        cout << "do you want to convert energy to any other unit \n1.eV \n2.MeV"<<endl;
        cin >> option;
        switch (option)
        {
        case '1':
            energyConv(KE, "J", "eV");
            break;
        case '2':
            energyConv(KE, "J", "MeV");
            break;
        default:
            return;
            break;
        }
    }else if (option == '2')
    {
        m = findMass(energyFunc(), velocityF());
        cout << "the rest mass of the object is "<< m <<" Kg"<<endl;
    }else if (option == '3')
    {
        v = findVelocity(energyFunc(),massFunc());
        cout << "the velocity of the object is "<< v <<" Kg"<<endl;
    }else{
        cout << "invalid input try again"<<endl;
        reletiviticKineticEnergyUI();
    }


}
