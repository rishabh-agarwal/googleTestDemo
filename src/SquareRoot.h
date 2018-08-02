#ifndef SQUAREROOT_H
#define SQUAREROOT_H
#include<math.h>

class SquareRoot{
public:
	double squareroot(double num) {
		double ans;
		ans = pow(num,0.5);
		return ans;
	}
};

#endif
