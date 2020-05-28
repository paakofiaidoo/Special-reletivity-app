#ifndef LENGHTCONTRACTION_H
#define LENGHTCONTRACTION_H
#include "Fundamentals.h"

class LenghtContraction: public Fundamentals
{	
	private:
		//lenght for observer in motion (l)
		float l;
		//lenght observed by stationary observer/proper lenght (lo)
		float lo;
		//velocity of the moving body
		double v;
		// function to find L
		void findL();
		//function to find Lo
		void findLo();
		//function to find v
		void findV();
	public:
		//main function
		void lenghtContraction();
	
};

#endif
