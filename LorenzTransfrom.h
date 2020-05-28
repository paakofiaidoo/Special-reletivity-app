#ifndef LORENZTRANSFROM_H
#define LORENZTRANSFROM_H
#include "Fundamentals.h"

class LorenzTransfrom: public Fundamentals
{
	private:
		float x1lt, t1lt, vlt;
		float xlt, tlt;
		float uxlt, ux1lt, uzlt;
		void lorenzPositionTransform();
		void lorenzVelocityTransform();
		
	public:
		void lorenzTransformations();
};

#endif
