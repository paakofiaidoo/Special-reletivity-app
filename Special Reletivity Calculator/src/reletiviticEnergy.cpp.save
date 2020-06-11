#include "reletiviticEnergy.h"
#include <iostream>
#include <cmath>
using namespace std;

float reletiviticEnergy::findEnergy(float momentum, float mass){
    E = pow(findEnergyNoMass(momentum),2) + pow(findEnergyAtRest(mass),2);
    return sqrt(E);
}
float reletiviticEnergy::findEnergyAtRest(float mass){
    return mass *pow(c(),2);
}
float reletiviticEnergy::findEnergyNoMass(float momentum){
    return momentum * c();
}
float reletiviticEnergy::findEnergyWithKineticEnergy(float kineticEnergy, float mass){
    return kineticEnergy + (mass * pow(c(),2));
}
void reletiviticEnergy::reletiviticEnergyUI(){
    cout << "for a moving object let us calculate its " << endl;
    cout << "1. total Energy" << endl;
    cout << "2. rest Energy(energy when object is not in motion)" << endl;
    cout << "3. Energy when object is massless" << endl;
    cout << "Energy when kinetic Eneryg and mass is given" << endl;
    char option;
    cin >> option;
    switch (option)
    {
    case '1':
        cout << "input momentum :  " << endl;
        cin >> P;
        E = findEnergy(P, massFunc());
        break;
    case '2':
        E = findEnergyAtRest(massFunc());
        break;
    case '3':
        cout << "input momentum :  " << endl;
        cin >> P;
        E = findEnergyNoMass(P);
        break;
    case '4':
        cout << "input Kinetic Energy :  " << endl;
        cin >> KE;
        E = findEnergyWithKineticEnergy(KE, massFunc());
        break;
    default:
        cout << "invalid input , try again" << endl;
        reletiviticEnergyUI();
        break;
    }
    cout << "therefor energy of the object is "<< E << "J" << endl;
    energyConv(E,"J","eV");
    energyConv(E,"J","MeV");
}
