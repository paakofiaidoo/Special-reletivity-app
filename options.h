#include <iostream>
#include "timeDile.h"
#include "fundamental.h"

void options(string input){
    switch (input)
    {
    case 1:
        timeDile();
        break;
    case 2:
        lenghtContraction();
        break;
    case 3:
        GallianTransformations();
        break;
    case 4:
        LorentzTransformations();
        break;
    case 5:
        dopplerEffect();
        break;
    case 6:
        ReletiviticMomentum();
        break;
    case 7:
        ReletiviticEnergy();
        break;
    case 8:
        ReletiviticMass();
        break;
    case 9:
        std::cout << "Input the velocity" << std::endl;
        gamma();
        break;
    case 10:
        beta();
        break;
    default:
        cout << "invalid input try again"
        break;
    }
}