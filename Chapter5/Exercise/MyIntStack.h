#pragma once
#ifndef MY_INT_STACK_H
#define MY_INT_STACK_H

#include <cstring>

class MyIntStack {
public:
	MyIntStack() = default;
	MyIntStack(int size) : size(size), p(new int[size]), topOfStack(0) {}
	MyIntStack(const MyIntStack& rhs);
	~MyIntStack();

public:
	bool push(int n) {
		if (topOfStack == size - 1) { return false; }
		p[++topOfStack] = n;
		return true;
	}

	bool pop(int& n) {
		if (size > 0) {
			n = p[topOfStack--];
			size--;
			return true;
		}
		return false;
	}

private:
	int* p;
	int size;
	int topOfStack;
};

#endif /* !MY_INT_STACK_H */
