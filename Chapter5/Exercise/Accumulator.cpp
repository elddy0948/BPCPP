#include "Accumulator.h"

Accumulator::Accumulator(int value) : value(value) {}
Accumulator::~Accumulator() {}

Accumulator& Accumulator::add(int n) {
	this->value += n;
	return *this;
}

int Accumulator::get() {
	return this->value;
}