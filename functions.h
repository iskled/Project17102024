#pragma once
#include <string>
#include <vector>

using namespace std;

struct Books {
	string title{};
	string author{};
	string publisher{};
	string subject{};
	string ISBN{};
	string WorldCat{};
	double DeweyDecimal{};
	int pubYear{};
	int acqYear{};
	int currStock{};
};

Books& inPopulate(Books& bookTemplate); //Should be able to use one for both DNRY, with medium being a parameter
Books& populate(Books& bookTemplate);
string getNextLine(ifstream& inFile);