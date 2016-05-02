//C03: VoidPointer.cpp
#include<iostream>
using namespace std;

int main() {
	void *vp;
	char c = 'A';
	int i = 5;
	float f = 5.123456789f;
	double d = 5.123456789;

	vp = &c;
	//cout << *vp << endl;	//Can not dereference a void Pointer - Compile error
	//Must cast back to char
	cout << (*(char*)vp) << endl;
	//Integer
	vp = &i;
	cout << (*(int*)vp) << endl;

	vp = &f;
	cout << (*(float*)vp) << endl;

	vp = &d;
	cout << (*(double*)vp) << endl;
	system("pause");
}