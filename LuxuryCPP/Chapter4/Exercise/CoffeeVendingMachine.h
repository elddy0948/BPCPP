#pragma once

#ifndef COFFEE_VENDING_MACHINE_H
#define COFFEE_VENDING_MACHINE_H

#include <iostream>
using namespace std;

class Container {
public:
	Container() : size(10) {}
public:
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
private:
	int size;
};

class CoffeeVendingMachine {
public:
	CoffeeVendingMachine() = default;
	~CoffeeVendingMachine() = default;

public:
	void fill();
	bool selectEspresso();
	bool selectAmericano();
	bool selectSugarCoffee();
	void show();

	void run();

private:
	Container tong[3];
};

#endif