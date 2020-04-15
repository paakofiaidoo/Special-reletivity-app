#include <iostream>
#include"home-ui.h"
#include "TimeDilation.h"
#include "lenghtContraction.h"
#include "galileanTransform.h"
#include "lorenzTransform.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//this is the the ui
	homeUI();
	//float speedOfLight = c();
	string option;
	cin >> option;

    if(option =="1"){
        timeDilation();
    }
    else if(option =="2"){
        lenghtContraction();
    }
    else if(option =="3"){
        galileanTransform();
    }
    else if(option =="4"){
        lorenzTransformations();
    }
    else if(option =="5"){
        //dopplerEffect();
    }
    else if(option =="6"){
        //ReletiviticMomentum();
    }
    else if(option =="7"){
        //ReletiviticEnergy();
    }
    else if(option =="8"){
        //ReletiviticMass();
    }
    else if(option =="9"){
        std::cout << "Input the velocity" << std::endl;
        //gamma()};
	}
    else if(option =="10"){
        //beta();
        }
    else{
		cout << "invalid input try again";
		main();
	}

    system("PAUSE");
	return 0;
}
