#pragma once
#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

class Accumulator {
public:
	Accumulator() = default;
	Accumulator(int value);
	~Accumulator();

public:
	Accumulator& add(int n);
	int get();

private:
	int value;
};

#endif /* !ACCUMULATOR_H */
