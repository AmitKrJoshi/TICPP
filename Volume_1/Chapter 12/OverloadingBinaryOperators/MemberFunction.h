#pragma once
//**************** MEMBER FUNCTION****************
class Byte {
	unsigned char b;
public:
	Byte(unsigned char bb = 0) : b(bb) {}

	//No side effects: const Memeber function
	const Byte operator+(const Byte& right) const;
	const Byte operator-(const Byte& right) const;
	const Byte operator*(const Byte& right) const;
	const Byte operator/(const Byte& right) const;
	const Byte operator%(const Byte& right) const;
	const Byte operator^(const Byte& right) const;
	const Byte operator&(const Byte& right) const;
	const Byte operator|(const Byte& right) const;
	const Byte operator<<(const Byte& right) const;
	const Byte operator>>(const Byte& right) const;

	//Assignments Modify & return "lvalue"
	Byte& operator= (const Byte& right);
	Byte& operator+=(const Byte& right);
	Byte& operator-=(const Byte& right);
	Byte& operator*=(const Byte& right);
	Byte& operator/=(const Byte& right);
	Byte& operator%=(const Byte& right);
	Byte& operator^=(const Byte& right);
	Byte& operator&=(const Byte& right);
	Byte& operator|=(const Byte& right);
	Byte& operator>>=(const Byte& right);
	Byte& operator<<=(const Byte& right);

	//Conditional Operators return true/false
	int operator==(const Byte& right) const;
	int operator!=(const Byte& right) const;
	int operator< (const Byte& right) const;
	int operator> (const Byte& right) const;
	int operator<=(const Byte& right) const;
	int operator>=(const Byte& right) const;
	int operator&&(const Byte& right) const;
	int operator||(const Byte& right) const;

	void print() const;
};
