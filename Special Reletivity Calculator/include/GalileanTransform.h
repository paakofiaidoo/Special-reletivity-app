#ifndef GALILEANTRANSFORM_H
#define GALILEANTRANSFORM_H

#include "Fundamentals.h"


class GalileanTransform : private Fundamentals
{
    public:
        void galileanTransform();

    private:
		float x, x1;
		//velocity of the v(vG) of S` with respect to S
		double v;
		//time of the frames after the event t because t = t`,
		float t;
		//velocity of the  frames
		float u, u1;
		// function to resolve the position using galilean transform
		void galileanPositionTransform();
		//function to resolve the velocity using galilean transform
		void galileanVelocityTransform();
};

#endif // GALILEANTRANSFORM_H
