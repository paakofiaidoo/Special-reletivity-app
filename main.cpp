#include <iostream>
#include "SpecialReletivity.h"
#include "SpecialReletivity.cpp"
#include "VectorDatabase.cpp"
#include "Fundamentals.h"
#include "Fundamentals.cpp"
#include "TimeDilation.cpp"
#include "lorenzTransfrom.cpp"
#include "LenghtContraction.cpp"
#include "GalileanTransform.cpp"
#include "DopplerEffect.cpp"
#include "RelativisticMomentum.cpp"
#include "ReletiviticKineticEnergy.cpp"
#include "reletiviticEnergy.cpp"

using namespace std;

int main() {
    Fundamentals test;
	string option;

    do{
        // ui is a constructor for the class
    	SpecialReletivity Object;

        cin >> option;
        if(option =="1"){
            Object.timeDilation();
        }
        else if(option =="2"){
            Object.lenghtContraction();
        }
        else if(option =="3"){
           Object.galileanTransform();
        }
        else if(option =="4"){
           Object.lorenzTransformations();
        }
        else if(option =="5"){
            Object.dopplerEffectUI();
        }
        else if(option =="6"){
            Object.relativisticMomentumUI();

        }
        else if(option =="7"){
            Object.reletiviticKineticEnergyUI();
        }
        else if(option =="8"){
            Object.reletiviticEnergyUI();
        }
        else if(option =="9"){
        	Fundamentals Motion;
            Motion.gamma();
        }
        else if(option =="10"){
            Fundamentals Motion;
            Motion.betaUI();
            }
        else{
            cout << "invalid input try again"<<endl;
            main();
        }

        std::cout << "do you want to perform another calculation press Y/N" << std::endl;
        cin >> option;

    }while(option == "y" || option =="Y");
   //system("pause");
	return 0;
}
