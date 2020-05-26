#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
//#include "functions.h"

using namespace std;

class dataBase
{
private:
    vector <double> data;
    vector <string> header;
public:
    void addToDatabase(string name, double num){
        //input in the name of the data you what to put in
        header.push_back(name);
        //input the value to the date you want to put in dtatbase
        data.push_back(num);
    }

    double findInDatabase(string dataName){
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
    void displayDatabase(){
        for (int i = 0; i < data.size(); i++)
        {
            std::cout <<i<<", "<< header[i] << " : " << data[i] << std::endl;
        }
        
    }
    void displayData(int i){
        
    	std::cout <<i<<", "<< header[i] << " : " << data[i] << std::endl;

        
    }
};





/*int main() {
    dataBase mainData;
    mainData.addToDatabase("ma", 123);
    mainData.addToDatabase("ma", 34);
    mainData.addToDatabase("ma", 4);
    mainData.addToDatabase("ma", 153);
    mainData.displayDatabase();
    cout << mainData.findInDatabase("ma");
    return 0;
}*/
