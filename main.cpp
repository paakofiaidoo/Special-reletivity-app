#include <iostream>
#include"home-ui.h"
#include "TimeDilation.h"
#include "lenghtContraction.h"
#include "galileanTransform.h"
#include "lorenzTransfrom.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//this is the the ui

	//float speedOfLight = c();
	string option, end;

    do{
        homeUI();
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
            gamma();
        }
        else if(option =="10"){
            beta();
            }
        else{
            cout << "invalid input try again";
            main();
        }

        std::cout << "do you want to perform another calculation press Y/N" << std::endl;
        cin >> end;

    }while(end == "y" || end =="Y");
   //system("pause");
	return 0;
}
