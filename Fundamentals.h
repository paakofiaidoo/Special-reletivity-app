#ifndef FUNDAMENTALS_H
#define FUNDAMENTALS_H

#include "VectorDatabase.h"
class Fundamentals
{
	private:
		VectorDatabase FundaDataBase;
	public:
		float velocityF();
		float c();
		float beta(double v);
		float beta();
		float gamma(double velocity);
		float gamma();
};

#endif