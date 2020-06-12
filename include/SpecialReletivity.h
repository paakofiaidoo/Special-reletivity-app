#ifndef SPECIALRELETIVITY_H
#define SPECIALRELETIVITY_H

#include "TimeDilation.h"
#include "lorenzTransfrom.h"
#include "LenghtContraction.h"
#include "GalileanTransform.h"
#include "DopplerEffect.h"
#include "RelativisticMomentum.h"
#include "ReletiviticKineticEnergy.h"
#include "reletiviticEnergy.h"
//#include "Fundamentals.h"

class SpecialReletivity : public TimeDilation, public LorenzTransfrom ,
public LenghtContraction, public GalileanTransform,
public DopplerEffect, public RelativisticMomentum, public ReletiviticKineticEnergy, public reletiviticEnergy{
    public:
        SpecialReletivity();

};

#endif // SPECIALRELETIVITY_H
