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
    std::cout << "for a moving object let us calculate its " << std::endl;
    std::cout << "1. total Energy" << std::endl;
    std::cout << "2. rest Energy(energy when object is not in motion)" << std::endl;
    std::cout << "3. Energy when object is massless" << std::endl;
    std::cout << "Energy when kinetic Eneryg and mass is given" << std::endl;
    char option;
    cin >> option;
    switch (option)
    {
    case '1':
        std::cout << "input momentum :  " << std::endl;
        cin >> P;
        E = findEnergy(P, massFunc());
        break;
    case '2':
        E = findEnergyAtRest(massFunc());
        break;
    case '3':
        std::cout << "input momentum :  " << std::endl;
        cin >> P;
        E = findEnergyNoMass(P);
        break;
    case '4':
        std::cout << "input Kinetic Energy :  " << std::endl;
        cin >> KE;
        E = findEnergyWithKineticEnergy(KE, massFunc());
        break;
    default:
        std::cout << "invalid input , try again" << std::endl;
        reletiviticEnergyUI();
        break;
    }
    std::cout << "therefor energy of the object is "<< E << "J" << std::endl;
    energyConv(E,"J","eV");
    energyConv(E,"J","MeV");
}
