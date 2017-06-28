#include "Dependency1StatFun.h"

Dependancy1& d1() {
	static Dependancy1 dep1;
	return dep1;
}