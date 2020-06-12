#ifndef TIMEDILATION_H
#define TIMEDILATION_H

#include "Fundamentals.h"


class TimeDilation : private Fundamentals
{
    public:
        //this is the display function for main.cpp
        void timeDilation();
    private:
        //time of stationary observer(t)
        float t;
        //time for observer in motion/proper time (to)
        float t0;
        //velocity of the moving body
        float v;
        void findT();
        void findT0();
        void findV();
};

#endif // TIMEDILATION_H
