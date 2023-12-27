#pragma once
#ifndef PROBLEM_3_H
#define PROBLEM_3_H

#include <iostream>

namespace p3 {
	using namespace std;

	int big(int lhs, int rhs, int big = 100) {
		int max = (lhs >= rhs) ? lhs : rhs;
		max = (max > big) ? big : max;
		return max;
	}

	void p3Main() {
		int x = big(3, 5);
		int y = big(300, 60);
		int z = big(30, 60, 50);

		cout << x << ' ' << y << ' ' << z << endl;
	}
}



#endif /* !PROBLEM_3_H */
