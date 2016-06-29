#include "../include/sqrt.hpp"
#include <math.h>

int mysqrt(int x)
{
	if (x >= 0) {
		return sqrt(x);
	} else {
		return 0;
	}
}