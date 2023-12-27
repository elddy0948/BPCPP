#pragma once
#ifndef DEPT_H
#define DEPT_H

#include <cstring>
#include <iostream>

using namespace std;

class Dept {
public:
	Dept() = default;
	Dept(int size) : size(size), scores(new int[size]) {}
	Dept(const Dept& dept);
	~Dept();

public:
	int getSize() { return size; }
	void read();
	bool isOver60(int index);

private:
	int size;
	int* scores;
};



#endif /* !DEPT_H */
