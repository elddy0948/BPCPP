#pragma once
#ifndef PROBLEM_1_h
#define PROBLEM_1_h

#include <iostream>

namespace p1 {
	using namespace std;
	int add(int* a, int size, int* b = nullptr) {
		int sum = 0;
		if (b == nullptr) {
			for (int i = 0; i < size; ++i) {
				sum += a[i];
			}
			return sum;
		}

		for (int i = 0; i < size; ++i) {
			sum += (a[i] + b[i]);
		}
		return sum;
	}

	void addMain() {
		int a[] = { 1, 2, 3, 4, 5 };
		int b[] = { 6, 7, 8, 9, 10 };
		int c = add(a, 5);
		int d = add(a, 5, b);
		cout << c << endl;
		cout << d << endl;
	}
}

#endif /* !PROBLEM_1_h */
