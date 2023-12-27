#pragma once
#ifndef HALF_H
#define HALF_H

#include <iostream>
using namespace std;

void half(double& d) { d /= 2.0; }

inline void halfMain() {
	double n = 20;
	cout << n << '\n';
	half(n);
	cout << n;
}

#endif // !HALF_H

