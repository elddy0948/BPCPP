#pragma once
#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
#include <iostream>
using namespace std;

class Histogram {
public:
	Histogram(string src) : str(src) {}
	~Histogram() = default;

public:
	void put(string str) { this->str += str; }
	void putc(char c) { str += c; }
	void displayHistogram();

private:
	string str;
	int histGram[26] = {0};
};


#endif