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
}
void ReletiviticKineticEnergy::reletiviticKineticEnergyUI(){}
