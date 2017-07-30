#include"NonMemberFunction.h"
#include<iostream>
using namespace std;


const Integer& operator+ (const Integer& a) {
	cout << " + Integer\n";
	return a;	//Unary + has no effect;
}

const Integer& operator- (const Integer& a) {
	cout << " - Integer\n";
	return Integer(-a.l);	
}

const Integer& operator~ (const Integer& a) {
	cout << " ~ Integer\n";
	return Integer(~a.l);
}

Integer* operator& (Integer& a) {
	cout << " & Integer\n";
	return a.This();
}

int	  operator! (const Integer& a) {
	cout << " ! Integer\n";
	return !a.l;
}

const Integer& operator++ (Integer& a) {
	cout << " ++ Integer\n";
	a.l++;
	return a;
}

const Integer& operator++ (Integer& a, int) {
	cout << " Integer ++\n";
	Integer past(a.l);
	a.l++;
	return past;
}

const Integer& operator-- (Integer& a) {
	cout << " -- Integer\n";
	a.l--;
	return a;
}

const Integer& operator-- (Integer& a, int) {
	cout << " Integer --\n";
	Integer past(a.l);
	a.l--;
	return past;
}