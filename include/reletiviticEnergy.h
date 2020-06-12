#ifndef RELETIVITICENERGY_H
#define RELETIVITICENERGY_H

#include "Fundamentals.h"


class reletiviticEnergy : private Fundamentals
{
    public:
        void reletiviticEnergyUI();
        float findEnergy(float momentum, float mass);
        float findEnergyAtRest(float mass);
        float findEnergyNoMass(float momentum);
        float findEnergyWithKineticEnergy(float kineticEnergy, float mass);
        float findMass(float energy, float momentum);
    private:
        float KE;
        float E;
        float P;
        float m;

};

#endif // RELETIVITICENERGY_H
