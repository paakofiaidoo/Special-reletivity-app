#include <iostream>
#include "SpecialReletivity.h"
#include "VectorDatabase.h"
#include "Fundamentals.h"
#include "TimeDilation.cpp"
#include "lorenzTransfrom.cpp"
#include "LenghtContraction.cpp"
#include "GalileanTransform.cpp"
#include "Fundamentals.cpp"
#include "VectorDatabase.cpp"
#include "SpecialReletivity.cpp"

VectorDatabase th;
using namespace std;

int main() {
	th.displayDatabase();

	string option;


    do{
        // ui is a construtor for the class
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
            //dopplerEffect();
            cout << "under development";
        }
        else if(option =="6"){
            //ReletiviticMomentum();
            cout << "under development";
        }
        else if(option =="7"){
            //ReletiviticEnergy();
            cout << "under development";
        }
        else if(option =="8"){
            //ReletiviticMass();
            cout << "under development";
        }
        else if(option =="9"){
        	Fundamentals Motion;
            Motion.gamma();
        }
        else if(option =="10"){
            Fundamentals Motion;
            Motion.beta();
            }
        else{
            cout << "invalid input try again";
            main();
        }

        std::cout << "do you want to perform another calculation press Y/N" << std::endl;
        cin >> option;

    }while(option == "y" || option =="Y");
   //system("pause");
	return 0;
}
