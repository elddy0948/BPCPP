#pragma once
#ifndef CIRCLE_MANAGER_H
#define CIRCLE_MANAGER_H

#include <iostream>
#include <string>

using namespace std;

class Circle2 {
public:
	Circle2() : radius(0), name("") {}
	~Circle2() = default;

public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
	int getRadius() { return radius; }

private:
	int radius;
	string name;
};

class CircleManager {
	
public:
	CircleManager() = default;
	CircleManager(int size) : p(new Circle2[size]), size(size) {}
	~CircleManager();

public:
	void set(int index, Circle2 c);
	void searchByName(string name);
	void searchByArea(double area);

private:
	Circle2* p;
	int size;
};

inline void cmMain() {
	int circleCount = 0;

	cout << "���� ���� >> ";
	cin >> circleCount;

	CircleManager cm(circleCount);


	for (int i = 0; i < circleCount; ++i) {
		Circle2 c;
		string name;
		int rad;
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> rad;

		c.setCircle(name, rad);
		cm.set(i, c);
	}

	string nameToSearch;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> nameToSearch;
	cm.searchByName(nameToSearch);

	int minArea;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> minArea;
	cm.searchByArea(minArea);
}

#endif