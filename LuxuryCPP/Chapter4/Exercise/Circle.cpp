#include "Circle.h"

Circle::Circle(int numberOfCircles)
	: circles(new Circle[numberOfCircles]),
	numberOfCircles(numberOfCircles),
	radius(0) {}

Circle::~Circle() {
	delete[] circles;
}

void Circle::circleMain() {
	for (int i = 0; i < numberOfCircles; ++i)
	{
		int r = 0;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circles[i].setRadius(r);
	}

	int baseArea = 100;
	int answerCount = 0;

	for (int i = 0; i < numberOfCircles; ++i)
	{
		if (circles[i].getArea() > 100) { answerCount++; }
	}

	cout << "������ 100���� ū ���� " << answerCount << "�� �Դϴ�.\n";
}