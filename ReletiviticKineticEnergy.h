#ifndef RELETIVITICKINETICENERGY_H
#define RELETIVITICKINETICENERGY_H

#include "Fundamentals.h"


class ReletiviticKineticEnergy : private Fundamentals
{
    public:
        float findKineticEnergy(float mass, float velocity);
        float findMass(float kineticEnergy, float velocity);
        float findVelocity(float kineticEnergy, float mass);
        void reletiviticKineticEnergyUI();

    private:
        float KE;
        float m;
        float v;
};

#endif // RELETIVITICKINETICENERGY_H
