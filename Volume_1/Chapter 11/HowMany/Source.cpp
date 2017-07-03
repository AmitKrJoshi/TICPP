// A Class that counts it's Objects.

#include<fstream>
#include<iostream>
#include<string>
using namespace std;

#ifndef _DEBUG
ofstream out("HowMany.out");
#endif

#ifdef _DEBUG
#define out cout
#endif

class HowMany {
	string name;			// To identify Object
	static int ObjCount;
public:
	HowMany(const string& id = "") : name(id) {
		++ObjCount;
		Print("HowMany()");
	}

	~HowMany() {
		--ObjCount;
		Print("~HowMany()");
	}

	HowMany(const HowMany& cHowMany) : name(cHowMany.name) {
		name += " copy";
		++ObjCount;
		Print("HowMany(const HowMany&)");
	}
	void Print(const string& msg = "") const {
		if (msg.size() != 0)
			out << msg << endl;
		out << '\t' << name << ": " << "Object Count = " << ObjCount << endl;
	}
};

int HowMany::ObjCount = 0;

HowMany f(HowMany x) {
	x.Print("x argument inside f()");
	out << "Returning from f()" << endl;
	return x;
}

int main() {
	HowMany h("h");
	out << "Entering f()" << endl;
	HowMany h2 = f(h);
	h2.Print("h2 after call to f()");
	out << "Call f(), no return value" << endl;
	f(h);
	out << "After call to f()" << endl;
	system("pause");
}