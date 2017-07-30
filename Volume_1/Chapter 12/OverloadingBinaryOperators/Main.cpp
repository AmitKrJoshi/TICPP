#include"NonMemberFunction.h"
#include"MemberFunction.h"
#include <fstream>
using namespace std;

//For Non Member
void NonMember(Integer& c1, Integer& c2) {
	c1 += c1 * c2 + c2 % c1;

#define TRY(OP) \
	cout << "c1 = "; \
	c1.print(); \
	cout << ", c2 = "; \
	c2.print(); \
	cout << "; c1 " #OP " c2 produces "; \
	(c1 OP c2).print(); \
	cout << endl;

	TRY(+) TRY(-) TRY(*) TRY(/ ) TRY(%) TRY(^) TRY(&) TRY(| ) TRY(<< ) TRY(>> )
	TRY(+= ) TRY(-= ) TRY(*= ) TRY(/= ) TRY(%= ) TRY(^= ) TRY(&= ) TRY(|= ) TRY(>>= ) TRY(<<= )

#define TRYC(OP) \
	cout << "c1 = "; \
	c1.print(); \
	cout << ", c2 = "; \
	c2.print(); \
	cout << "; c1 " #OP " c2 produces "; \
	cout << (c1 OP c2); \
	cout << endl;

	TRYC(<) TRYC(>) TRYC(==) TRYC(!=) TRYC(<=) TRYC(>=) TRYC(&&) TRYC(||)
}

// For Member 
void Member(Byte& c1, Byte& c2) {
	c1 += c1 * c2 + c2 % c1;

#define TRY(OP) \
	cout << "c1 = "; \
	c1.print(); \
	cout << ", c2 = "; \
	c2.print(); \
	cout << "; c1 " #OP " c2 produces "; \
	(c1 OP c2).print(); \
	cout << endl;

	c1 = 9; 
	c2 = 47;
	TRY(+) TRY(-) TRY(*) TRY(/ ) TRY(%) TRY(^) TRY(&) TRY(| ) TRY(<< ) TRY(>> )
	TRY(+= ) TRY(-= ) TRY(*= ) TRY(/= ) TRY(%= ) TRY(^= ) TRY(&= ) TRY(|= ) TRY(>>= ) TRY(<<= )

#define TRYC(OP) \
	cout << "c1 = "; \
	c1.print(); \
	cout << ", c2 = "; \
	c2.print(); \
	cout << "; c1 " #OP " c2 produces "; \
	cout << (c1 OP c2); \
	cout << endl;

	c1 = 9;
	c2 = 47;
	TRYC(< ) TRYC(> ) TRYC(== ) TRYC(!= ) TRYC(<= ) TRYC(>= ) TRYC(&&) TRYC(|| )

	//Chained Assignment
	Byte b = 92;
	c1 = c2 = b;
}
int main() {
	cout << "**********Non Member Function**********\n";
	Integer c1(47), c2(49);
	NonMember(c1, c2);

	cout << "**********Member Function**********\n";
	Byte b1(47), b2(9);
	Member(b1, b2);
	system("pause");
}