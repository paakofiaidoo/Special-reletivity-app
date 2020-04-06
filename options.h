#include <iostream>
#include "timeDile.h"
#include "fundamental.h"

void options(string input){
    switch (input)
    {
    case 1:
        timeDile();
        break;
    case 9:
        std::cout << "Input the velocity" << std::endl;
        gamma();
    default:
        break;
    }
}