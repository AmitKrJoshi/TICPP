#pragma once
#include "Dependancy1.h"

class Dependancy2 {
	Dependancy1 d1;
public:
	Dependancy2(const Dependancy1& dep1) : d1(dep1) {
		std::cout << "Dependancy2 cTor \n";
		print();
	}
	void print() const {
		d1.print();
	}
};