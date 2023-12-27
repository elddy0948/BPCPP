#include "MyIntStack.h"

MyIntStack::MyIntStack(const MyIntStack& rhs) {
	// shallow copy
	//this->p = rhs.p;
	
	// deep copy
	this->p = new int[rhs.size];
	memcpy(this->p, rhs.p, rhs.size);

	this->size = rhs.size;
	this->topOfStack = rhs.topOfStack;
}

MyIntStack::~MyIntStack() {
	delete[] p;
}