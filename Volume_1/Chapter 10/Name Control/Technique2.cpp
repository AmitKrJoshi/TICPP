#include"Dependancy2.h"
using namespace std;

int separator() {	// Returning a value so that it can be called as a GLOBAL INITILIZER
	cout << "------------------------------" << endl;
	return 1;
}

// Simulating the dependancy problem
extern Dependancy1 dep1;
Dependancy2 dep2(dep1);
Dependancy1 dep1;
int x = separator();

//But if it happen as in below than it works ok
Dependancy1 dep1B;
Dependancy2 dep2B(dep1B);
int x2 = separator();

Dependancy1& d1() {
	static Dependancy1 dep1;
	return dep1;
}

Dependancy2& d2() {
	static Dependancy2 dep2(d1());
	return dep2;
}

int main() {
	Dependancy2& dep2 = d2();
	system("pause");
}