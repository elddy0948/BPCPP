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

	cout << "이름과 전화번호를 입력해 주세요.\n";
	int size = sizeof(p) / sizeof(p[0]);
	for (int i = 0; i < size; ++i)
	{
		string name, tel;
		cout << "사람" << i + 1 << " >> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < size; ++i)
	{
		cout << p[i].getName() << ' ';
	}
	cout << '\n';

	cout << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
	
	string name;
	cin >> name;
	
	for (int i = 0; i < size; ++i) {
		if (name == p[i].getName()) {
			cout << "전화번호는 " << p[i].getTel();
		}
	}
}

#endif