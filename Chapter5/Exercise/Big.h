#pragma once
#ifndef BIG_H
#define BIG_H

#include <iostream>
using namespace std;

bool bigger(const int a, const int b, int& big) {
	if (a == b) { return true; }
	(a > b) ? big = a : big = b;
	return false;
}

inline void bigMain() {
	int a = 5;
	int b = 2;

	int big = 0;

	if (bigger(a, b, big)) {
		cout << "Same" << '\n';
	}
	else {
		cout << big << '\n';
	}
}


#endif // !BIG_H
