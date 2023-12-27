#pragma once
#ifndef PROBLEM_4_H
#define PROBLEM_4_H

namespace p4 {
	class MyVector {
	public:
		MyVector(int n = 100, int val = 0) {
			mem = new int[n];
			size = n;
			for (int i = 0; i < size; ++i) { mem[i] = val; }
		}
		~MyVector() { delete[] mem; }

	private:
		int* mem;
		int size;
	};
}

#endif /* !PROBLEM_4_H */
