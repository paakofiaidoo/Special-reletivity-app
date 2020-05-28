#ifndef SPECIALRELETIVITY_H
#define SPECIALRELETIVITY_H
#include "TimeDilation.h"
#include "lorenzTransfrom.h"
#include "LenghtContraction.h"
#include "GalileanTransform.h"
#include "Fundamentals.h"



class SpecialReletivity :  public TimeDilation, public LorenzTransfrom , public LenghtContraction, public GalileanTransform
{
	public:
		 SpecialReletivity();
	protected:
};

#endif
