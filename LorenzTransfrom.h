#ifndef LORENZTRANSFROM_H
#define LORENZTRANSFROM_H
#include "Fundamentals.h"

/*S and S` are two referece frames where (t, x, y, z) and (t', x', y', z') are the coordinates of an event in two frames, where the primed frame is seen from the unprimed frame as moving with speed v along the x-axis, c is the speed of light, and gamma is the Lorentz factor
*/

class LorenzTransfrom: private Fundamentals
{
	private:
		float x1, t1, v;
		float x, t;
		float ux, ux1, uz;
		void lorenzPositionTransform();
		void lorenzVelocityTransform();
		
	public:
		void lorenzTransformations();
};

#endif
