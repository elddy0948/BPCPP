#pragma once
#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
using namespace std;

class Sample
{
public:
	Sample(int n) : size(n), p(new int[n]) {}
	~Sample();

public:
	void read();
	void write();
	int big();

private:
	int* p;
	int size;
};

#endif /* SAMPLE_H */