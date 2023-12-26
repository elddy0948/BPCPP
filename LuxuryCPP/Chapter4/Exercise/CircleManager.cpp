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
			cout << name << "�� ������ " << p[i].getArea() << '\n';
		}
	}
}

void CircleManager::searchByArea(double area) {
	cout << area << "���� ū ���� �˻��մϴ�.\n";

	for (int i = 0; i < size; ++i) {
		if (p[i].getArea() >= area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << '\n';
		}
	}
}