#include "Dependency2StatFun.h"
#include "Dependency1StatFun.h"

Dependancy2& d2() {
	static Dependancy2 dep2(d1());
	return dep2;
}