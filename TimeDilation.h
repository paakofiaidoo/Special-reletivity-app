#ifndef TIMEDILATION_H
#define TIMEDILATION_H
#include "Fundamentals.h"

class TimeDilation: public Fundamentals{//time of stationary observer(t)
private :
    float t;
    //time for observer in motion/proper time (to)
    float to;
    //velocity of the moving body
    double vT;
	void findT();
	
	void findTo();
	
	void findVTime();

public:
	void timeDilation();

};


#endif
