#pragma once
//****************NON MEMBER FUNCTION****************

class Integer {
	long l;
	Integer* This() { return this; }
public:
	Integer(long ll = 2) : l(ll) {}
	friend const Integer& operator+ (const Integer& a);
	friend const Integer& operator- (const Integer& a);
	friend const Integer& operator~ (const Integer& a);
	friend		 Integer* operator& (Integer& a);
	friend		 int	  operator! (const Integer& a);

	friend const Integer& operator++ (Integer& a);
	friend const Integer& operator++ (Integer& a, int);	// Post

	friend const Integer& operator-- (Integer& a);
	friend const Integer& operator-- (Integer& a, int);
};