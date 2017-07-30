#include"NonMemberFunction.h"

//****************NON MEMBER FUNCTION****************

const Integer operator+(const Integer & left, const Integer& right)
{
	return Integer(left.i + right.i);
}

const Integer operator-(const Integer& left, const Integer& right) {
	return Integer(left.i - right.i);
}

const Integer operator*(const Integer& left, const Integer& right) {
	return Integer(left.i * right.i);
}

const Integer operator/(const Integer& left, const Integer& right) {
	if (right.i != 0)
		return Integer(left.i / right.i);
	else {
		std::cout << "Divide by Zero\n";
		return errno;
	}
}

const Integer operator%(const Integer& left, const Integer& right) {
	if (right.i != 0)
		return Integer(left.i % right.i);
	else {
		std::cout << "Modulo by Zero\n";
		return errno;
	}
}

const Integer operator^(const Integer& left, const Integer& right) {
	return Integer(left.i ^ right.i);
}

const Integer operator&(const Integer& left, const Integer& right) {
	return Integer(left.i & right.i);
}

const Integer operator|(const Integer& left, const Integer& right) {
	return Integer(left.i | right.i);
}

const Integer operator<<(const Integer& left, const Integer& right) {
	return Integer(left.i << right.i);
}

const Integer operator>>(const Integer& left, const Integer& right) {
	return Integer(left.i >> right.i);
}

//***********Assignment
Integer& operator+=(Integer& left, const Integer& right)
{
	if(&left == &right){}
	left.i += right.i;
	return left;
}

Integer& operator-=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i -= right.i;
	return left;
}

Integer& operator*=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i *= right.i;
	return left;
}

Integer& operator/=(Integer& left, const Integer& right)
{
	if (right.i != 0) {
		if (&left == &right) {}
		left.i /= right.i;
		return left;
	}
}

Integer& operator%=(Integer& left, const Integer& right)
{
	if (right.i != 0) {
		if (&left == &right) {}
		left.i %= right.i;
		return left;
	}
}

Integer& operator^=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i ^= right.i;
	return left;
}

Integer& operator&=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i &= right.i;
	return left;
}

Integer& operator|=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i |= right.i;
	return left;
}

Integer& operator>>=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i >>= right.i;
	return left;
}

Integer& operator<<=(Integer& left, const Integer& right)
{
	if (&left == &right) {}
	left.i <<= right.i;
	return left;
}

//Conditional
int operator==(const Integer& left, const Integer& right)
{
	return left.i == right.i;
}

int operator!=(const Integer& left, const Integer& right)
{
	return left.i != right.i;
}

int operator<(const Integer& left, const Integer& right)
{
	return left.i < right.i;
}

int operator>(const Integer& left, const Integer& right)
{
	return left.i > right.i;
}

int operator<=(const Integer& left, const Integer& right)
{
	return left.i <= right.i;
}

int operator>=(const Integer& left, const Integer& right)
{
	return left.i >= right.i;
}

int operator&&(const Integer& left, const Integer& right)
{
	return left.i && right.i;
}

int operator||(const Integer& left, const Integer& right)
{
	return left.i || right.i;
}