#include<iostream>
using namespace std;

int globe;
void func();

int main() {
	globe = 12;
	cout << __FILE__ <<"\t"<< __FUNCTION__ << "\t"<<globe << endl;
	func();
	cout << __FILE__ << "\t"<<__FUNCTION__ << "\t"<<globe << endl;
	system("pause");
}