#pragma once
//****************NON MEMBER FUNCTION****************
#include<iostream>
class Integer {
	long i;
public:
	Integer(long ii = 0):i(ii){}
	//Operator that create New, Modified Values
	friend const Integer operator+(const Integer& left, const Integer& right);
	friend const Integer operator-(const Integer& left, const Integer& right);
	friend const Integer operator*(const Integer& left, const Integer& right);
	friend const Integer operator/(const Integer& left, const Integer& right);
	friend const Integer operator%(const Integer& left, const Integer& right);
	friend const Integer operator^(const Integer& left, const Integer& right);
	friend const Integer operator&(const Integer& left, const Integer& right);
	friend const Integer operator|(const Integer& left, const Integer& right);
	friend const Integer operator<<(const Integer& left, const Integer& right);
	friend const Integer operator>>(const Integer& left, const Integer& right);

	//Assignments Modify & return "lvalue"
	friend Integer& operator+=(Integer& left, const Integer& right);
	friend Integer& operator-=(Integer& left, const Integer& right);
	friend Integer& operator*=(Integer& left, const Integer& right);
	friend Integer& operator/=(Integer& left, const Integer& right);
	friend Integer& operator%=(Integer& left, const Integer& right);
	friend Integer& operator^=(Integer& left, const Integer& right);
	friend Integer& operator&=(Integer& left, const Integer& right);
	friend Integer& operator|=(Integer& left, const Integer& right);
	friend Integer& operator>>=(Integer& left, const Integer& right);
	friend Integer& operator<<=(Integer& left, const Integer& right);

	//Conditional Operators return true/false
	friend int operator==(const Integer& left, const Integer& right);
	friend int operator!=(const Integer& left, const Integer& right);
	friend int operator<(const Integer& left, const Integer& right);
	friend int operator>(const Integer& left, const Integer& right);
	friend int operator<=(const Integer& left, const Integer& right);
	friend int operator>=(const Integer& left, const Integer& right);
	friend int operator&&(const Integer& left, const Integer& right);
	friend int operator||(const Integer& left, const Integer& right);

	void print() const {
		std::cout<< i;
	}
};