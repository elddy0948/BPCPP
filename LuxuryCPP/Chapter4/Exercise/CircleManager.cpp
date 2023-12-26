#include "CircleManager.h"

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::set(int index, Circle2 c) {
	p[index].setCircle(c.getName(), c.getRadius());
}


void CircleManager::searchByName(string name) {
	for (int i = 0; i < size; ++i) {
		if (p[i].getName() == name) {
			cout << name << "의 면적은 " << p[i].getArea() << '\n';
		}
	}
}

void CircleManager::searchByArea(double area) {
	cout << area << "보다 큰 원을 검색합니다.\n";

	for (int i = 0; i < size; ++i) {
		if (p[i].getArea() >= area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << '\n';
		}
	}
}