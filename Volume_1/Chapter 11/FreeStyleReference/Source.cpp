#include<iostream>
using namespace std;

//Ordinary Free standing reference

int y;
int& r = y;

const int& q = 12;

int x = 0;
int& a = x;

int main()
{
	cout << "X = " << x << " A = " << a << endl;
	a++;
	cout << "After \nX = " << x << " A = " << a << endl;
}