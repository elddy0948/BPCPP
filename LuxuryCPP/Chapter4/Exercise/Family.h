#pragma once
#ifndef FAMILY_H
#define FAMILY_H

#include "Person.h"

class Family {
public:
	Family() = default;
	Family(string name, int size) : name(name), size(size), p(new Person[size]) {}
	~Family();

public:
	void setName(int index, string name);
	void show();

private:
	Person* p;
	int size;
	string name;
};

inline void problem10() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");

	simpson->show();

	delete simpson;
}

#endif