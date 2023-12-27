#pragma once
#ifndef CIRCLE_h
#define CIRCLE_h

#include <iostream>
using namespace std;

namespace Problem5 {
	class Circle {
	public:
		Circle(int radius) : radius(radius) {}
		
	public:
		int getRadius() { return radius; }
		void setRadius(int radius) { this->radius = radius; }
		void show() { cout << "반지름이 " << radius << " 인 원 " << endl; }

	private:
		int radius;
	};

	void increaseBy(Circle& lhs, Circle rhs) {
		int r = lhs.getRadius() + rhs.getRadius();
		lhs.setRadius(r);
	}
}

#endif /* !CIRCLE_h */
