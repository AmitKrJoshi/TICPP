#include<iostream>
#include<string>
using namespace std;

class WithCC { //Class with Copy ctor
public:
	WithCC() {}
	WithCC(const WithCC&){
		cout << "WithCC(WithCC&)\n";
	}
};

class WithOutCC { //Class with Copy ctor
	string id;
public:
	WithOutCC(const string name = "") : id(name) {}
	void print(const string msg = "") const {
		if (msg.size() != 0)
			cout << msg << ": " << endl;

		cout << id << endl;
	}
};

class Composite {
	WithCC withCC;				// Objects are being created here
	WithOutCC woCC;
public:
	Composite() : woCC("Composite()"){}
	void print(const string msg = "") const {
		woCC.print(msg);
	}
};

int main() {
	Composite C;
	C.print("1st Composite");
	cout << "---------\n";
	Composite C2 = C;
	C2.print("2nd Composite");
	system("pause");
}