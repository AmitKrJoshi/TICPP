#include"MemberFunction.h"
#include<iostream>
using namespace std;

const Byte& Byte::operator+() const {
	cout << "+Byte\n";
	return *this;
}

const Byte& Byte::operator-() const {
	cout << "-Byte\n";
	return Byte(-b);
}

const Byte& Byte::operator~() const {
	cout << "~Byte\n";
	return Byte(~b);
}

Byte& Byte::operator!() const {
	cout << "!Byte\n";
	return Byte(!b);
}

Byte* Byte::operator&() {
	cout << "&Byte\n";
	return this;
}

const Byte& Byte::operator++() {
	cout << "++Byte\n";
	++b;
	return *this;
}

const Byte& Byte::operator--() {
	cout << "--Byte\n";
	return Byte(--b);
}

const Byte& Byte::operator++(int) {
	cout << "Byte++\n";
	Byte Before(b);
	b++;
	return Before;
}

const Byte& Byte::operator--(int) {
	cout << "Byte--\n";
	Byte Before(b);
	b--;
	return Before;
}