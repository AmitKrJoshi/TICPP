//C02: Scopy.cpp
// Copy one file to another, a line at a time
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream in("Scopy.cpp");	//Open for reading
	ofstream out("Scopy_copied.txt");	//Open for Writing
	string s;
	while(getline(in, s))	//Discard newline char
		out << s << "\n";

	system("pause");
}