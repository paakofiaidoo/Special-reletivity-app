#ifndef FUNDAMENTALS_H
#define FUNDAMENTALS_H

#include "VectorDatabase.h"


class Fundamentals
{
    public:
        //function to input velocity
        float velocityF();
		float c();
		//velocity ratio function the one with parameter v(velocity) is for calculation
		float beta(double velocity );
		//this overload is for display calculation in main.cpp
		float betaUI();
		//this function is calculation of gamma in other functions
		float gamma(double velocity);
		//this function is for display calculation in main.cpp
		float gamma();
    private:
        VectorDatabase FundaDataBase;
        float velocity;
};

#endif // FUNDAMENTALS_H
