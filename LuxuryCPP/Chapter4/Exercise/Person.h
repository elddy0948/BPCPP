#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {
	
public:
	Person() = default;
	Person(string name) : name(name) {}

public:
	string getName() { return name; }
	string getTel() { return tel; }

	void set(string name, string tel) { this->name = name; this->tel = tel; }

private:
	string name;
	string tel;
};

inline void problem9() {
	Person p[3];

	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���.\n";
	int size = sizeof(p) / sizeof(p[0]);
	for (int i = 0; i < size; ++i)
	{
		string name, tel;
		cout << "���" << i + 1 << " >> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < size; ++i)
	{
		cout << p[i].getName() << ' ';
	}
	cout << '\n';

	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
	
	string name;
	cin >> name;
	
	for (int i = 0; i < size; ++i) {
		if (name == p[i].getName()) {
			cout << "��ȭ��ȣ�� " << p[i].getTel();
		}
	}
}

#endif