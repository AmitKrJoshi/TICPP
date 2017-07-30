#include"MemberFunction.h"
#include<iostream>

//No side effects: const Memeber function

const Byte Byte::operator+(const Byte & right) const
{
	return Byte(b + right.b);
}

const Byte Byte::operator-(const Byte & right) const
{
	return Byte(b - right.b);
}

const Byte Byte::operator*(const Byte & right) const
{
	return Byte(b * right.b);
}

const Byte Byte::operator/(const Byte & right) const
{
	if(right.b != 0)
		return Byte(b / right.b);
}

const Byte Byte::operator%(const Byte & right) const
{
	if (right.b != 0)
		return Byte(b % right.b);
}

const Byte Byte::operator^(const Byte & right) const
{
	return Byte(b ^ right.b);
}

const Byte Byte::operator&(const Byte & right) const
{
	return Byte(b & right.b);
}

const Byte Byte::operator|(const Byte & right) const
{
	return Byte(b | right.b);
}

const Byte Byte::operator<<(const Byte & right) const
{
	return Byte(b << right.b);
}

const Byte Byte::operator>>(const Byte & right) const
{
	return Byte(b >> right.b);
}

//Assignments Modify & return "lvalue"
Byte & Byte::operator=(const Byte & right)
{
	if (this == &right)
		return *this;
	b = right.b;
	return *this;
}

Byte & Byte::operator+=(const Byte & right)
{
	if (this == &right)
		return *this;
	b += right.b;
	return *this;
}

Byte & Byte::operator-=(const Byte & right)
{
	if (this == &right)
		return *this;
	b -= right.b;
	return *this;
}

Byte & Byte::operator*=(const Byte & right)
{
	if (this == &right)
		return *this;
	b *= right.b;
	return *this;
}

Byte & Byte::operator/=(const Byte & right)
{
	if (right.b != 0)
	{
		if (this == &right)
			return *this;
		b /= right.b;
		return *this;
	}
}

Byte & Byte::operator%=(const Byte & right)
{
	if (right.b != 0)
	{
		if (this == &right)
			return *this;
		b %= right.b;
		return *this;
	}
}

Byte & Byte::operator^=(const Byte & right)
{
	if (this == &right)
		return *this;
	b ^= right.b;
	return *this;
}

Byte & Byte::operator&=(const Byte & right)
{
	if (this == &right)
		return *this;
	b &= right.b;
	return *this;
}

Byte & Byte::operator|=(const Byte & right)
{
	if (this == &right)
		return *this;
	b |= right.b;
	return *this;
}

Byte & Byte::operator<<=(const Byte & right)
{
	if (this == &right)
		return *this;
	b <<= right.b;
	return *this;
}

Byte & Byte::operator>>=(const Byte & right)
{
	if (this == &right)
		return *this;
	b >>= right.b;
	return *this;
}

//Conditional Operators return true/false
int Byte::operator==(const Byte& right) const
{
	return b == right.b;
}

int Byte::operator!=(const Byte& right) const
{
	return b != right.b;
}

int Byte::operator<(const Byte& right) const
{
	return b < right.b;
}

int Byte::operator>(const Byte& right) const
{
	return b > right.b;
}

int Byte::operator<=(const Byte& right) const
{
	return b <= right.b;
}

int Byte::operator>=(const Byte& right) const
{
	return b >= right.b;
}

int Byte::operator&&(const Byte& right) const
{
	return b && right.b;
}

int Byte::operator||(const Byte& right) const
{
	return b || right.b;
}

void Byte::print() const {
	std::cout << "0x" << std::hex << int(b) ;
}