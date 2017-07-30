#include"MemberFunction.h"
#include"NonMemberFunction.h"
#include<iostream>
using namespace std;

void f(Integer a) {
	+a;
	-a;
	~a;
	Integer  *ip = &a;
	!a;
	a++;
	++a;
	a--;
	--a;
}

void g(Byte b) {
	+b;
	-b;
	~b;
	Byte* bp = &b;
	!b;
	++b;
	--b;
	b++;
	b--;
}

int main() {
	Integer a;
	cout << "****************NON MEMBER FUNCTION****************\n";
	f(a);
	Byte b;
	cout << "****************MEMBER FUNCTION****************\n";
	g(b);
	system("pause");
}