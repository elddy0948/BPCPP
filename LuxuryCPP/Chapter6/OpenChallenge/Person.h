#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
public:
	Person() = default;
	Person(string name) : name(name) {}

public:
	string getName() { return name; }
	void setName(string name) { this->name = name; }
private:
	string name;
};

#endif /* !PERSON_H */
