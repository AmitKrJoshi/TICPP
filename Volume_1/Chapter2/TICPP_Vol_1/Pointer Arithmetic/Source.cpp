//Here we are introducing concept of STRINGZING
#include<iostream>
using namespace std;

#define P(EX) cout<< #EX << ": " << EX << endl;

int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = i;
	}
	int* ip = a;
	P(ip);
	P(*ip);
	P(++ip);
	P(*ip);
	P(*++ip);
	system("pause");
}