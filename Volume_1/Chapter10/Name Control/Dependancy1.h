#pragma once

//This prject is to Make sure that initilization of static objects happens properly  
#include <iostream>

class Dependancy1 {
	bool init;
public:
	Dependancy1() : init(true) {
		std::cout << "Dependancy1 cTor \n";
	}
	void print() const {
		std::cout << "Dependancy1 init " << init << std::endl;
	}
};
