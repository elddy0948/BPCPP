#pragma once
#ifndef CIRCLE_SWAP_H
#define CIRCLE_SWAP_H

#include <iostream>

using namespace std;

class Circle {
public:
	Circle() = default;
	Circle(int radius) : radius(radius) {}
	~Circle() = default;

public:
	int getRadius() { return radius; }
private:
	int radius;
};

void CircleSwap(Circle& lhs, Circle& rhs) {
	Circle tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

inline void circleMain(void) {
	Circle c(5);
	Circle c2(6);

	cout << c.getRadius() << ' ' << c2.getRadius() << endl;
	CircleSwap(c, c2);
	cout << c.getRadius() << ' ' << c2.getRadius() << endl;
}

#endif