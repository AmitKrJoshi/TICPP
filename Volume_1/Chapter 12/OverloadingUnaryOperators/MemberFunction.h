#pragma once
//****************MEMBER FUNCTION****************
class Byte {
	unsigned char b;
public:
	Byte(unsigned char bb = 0) :b(bb) {}

	//Const Member functions ... No side effects
	const Byte& operator+() const;
	const Byte& operator-() const;
	const Byte& operator~() const;
	Byte& operator!() const;
	Byte* operator&();

	//Non Const Member functions ... Side effects
	const Byte& operator++();	//Prefix
	const Byte& operator--();	//Prefix
	const Byte& operator++(int);	//Postfix	
	const Byte& operator--(int);	//Postfix
};
