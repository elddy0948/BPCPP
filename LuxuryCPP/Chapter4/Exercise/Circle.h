#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle {
	
public:
	Circle() : Circle(0) {}
	Circle(int numberOfCircles);
	~Circle();

public:
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }

	void circleMain();
private:
	Circle* circles;
	int numberOfCircles;
	int radius;
};

#endif