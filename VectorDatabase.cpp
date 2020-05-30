#include "VectorDatabase.h"
#include <iostream>

using namespace std;

void VectorDatabase::addToDatabase(string name, double num){
    //input in the name of the data you what to put in
    header.push_back(name);
    //input the value to the date you want to put in dtatbase
    data.push_back(num);
}

double VectorDatabase::findInDatabase(string dataName){
    int index;
    bool indicator = false;
    for (unsigned int i = 0; i < data.size(); i++)
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
void VectorDatabase::displayDatabase(){
    for (unsigned int i = 0; i < data.size(); i++)
    {
        cout <<i<<", "<< header[i] << " : " << data[i] << endl;
    }

}
void VectorDatabase::displayData(int i){
    cout << i <<", "<< header[i] << " : " << data[i] << endl;
}






/*int main() {
    Database mainData;
    mainData.addToDatabase("ma", 123);
    mainData.addToDatabase("ma", 34);
    mainData.addToDatabase("ma", 4);
    mainData.addToDatabase("ma", 153);
    mainData.displayDatabase();
    cout << mainData.findInDatabase("ma");
    return 0;
}
*/


