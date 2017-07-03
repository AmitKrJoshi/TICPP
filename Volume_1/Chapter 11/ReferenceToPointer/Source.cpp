#include<iostream>
using namespace std;

void increment(int&);
void incrementR(int*&);

int main() {
	int i = 1;
	int* j = &i;
	cout << "i = " << i << endl;
	cout << "*j = " << *j << endl;
	increment(i);
	incrementR(j);
	cout << "i = " << i << endl;
	cout << "*j = " << *j << endl;
}

void increment(int& i)
{
	i++;
}

void incrementR(int*& i)
{
	i++;
}