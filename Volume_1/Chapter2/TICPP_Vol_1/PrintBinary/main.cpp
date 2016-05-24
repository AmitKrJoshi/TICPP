#include "printBinary.h"
#include <iostream>
using namespace std;

#define PR(STR, EXPR) \
	cout << STR; printBinary(EXPR); cout << endl;

int main() {
	unsigned int getval;
	unsigned char a, b;

	cout << "Enter a no b/w 0 and 255 :";
	cin >> getval;
	a = getval;
	printBinary(a);
	//PR("a in binary: ", a);
	//cout << "Enter another no b/w 0 and 255 :";
	//cin >> getval;
	//b = getval;
	//PR("b in binary: ", b);
	system("pause");
}