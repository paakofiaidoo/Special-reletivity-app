#ifndef VECTORDATABASE_H
#define VECTORDATABASE_H
#include <vector>
#include <string>

class VectorDatabase
{
	private:
	    std::vector <double> data;
	    std::vector <std::string> header;
	public:
	    void addToDatabase(std::string name, double num);
	    double findInDatabase(std::string dataName);
	    void displayDatabase();
	    void displayData(int i);
};

#endif

