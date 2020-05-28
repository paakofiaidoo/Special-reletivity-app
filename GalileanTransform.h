#ifndef GALILEANTRANSFORM_H
#define GALILEANTRANSFORM_H
#include "Fundamentals.h"
class GalileanTransform: public Fundamentals
{	
	private:
		float xG, x1G;
		//velocity of the v(vG) of S` with respect to S
		double vG;
		//time of the frames after the event t because t = t`,
		float tG;
		//velocity of the  frames
		float uG, u1G;
		// function to resolve the position using galilean transform 
		void galileanPositionTransform();
		//function to resolve the velocity using galilean transform 
		void galileanVelocityTransform();
		//function to find v
		//void findVLenght();
		//main function
	public:
		void galileanTransform();
	protected:
};

#endif
