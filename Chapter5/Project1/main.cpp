#include <iostream>

using namespace std;

class Circle {
public:
	Circle() : radius(1) {}
	Circle(int radius) : radius(radius) {}

public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }

private:
	int radius;
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main() {
	Circle c;

	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;

	return 0;
}