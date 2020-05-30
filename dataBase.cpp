//#include "functions.h"
#include "dataBase.h"
#include <iostream>

using namespace std;

void Database::addToDatabase(string name, double num){
    //input in the name of the data you what to put in
    header.push_back(name);
    //input the value to the date you want to put in dtatbase
    data.push_back(num);
}

double Database::findInDatabase(string dataName){
    int index;
    bool indicator = false;
    for (int i = 0; i < data.size(); i++)
    {
        if (dataName == header[i]){
            index =i;
            indicator = true;
        }
    }
    if (indicator == true){
        return data[index];
    }

    return 0;
}
void Database::displayDatabase(){
    for (int i = 0; i < data.size(); i++)
    {
        cout <<i<<", "<< header[i] << " : " << data[i] << endl;
    }
    
}
void Database::displayData(int i){
    cout << i <<", "<< header[i] << " : " << data[i] << endl;
}







