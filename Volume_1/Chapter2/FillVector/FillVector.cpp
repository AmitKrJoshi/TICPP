//C02 : Fillvector.cpp
//Copy an entire file into a vector of string

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("FillVector.cpp");
	string line;
	while(getline(in, line)) {
		v.push_back(line);
	}

	//Add line number
	for(int i=0; i< v.size(); i++) {
		cout << i << ": " << v[i] << endl;
	}
	system("pause");
}