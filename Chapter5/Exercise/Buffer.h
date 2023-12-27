#pragma once
#ifndef BUFFER_H
#define BUFFER_H

#include <string>
#include <iostream>

using namespace std;

class Buffer {
public:
	Buffer() = default;
	Buffer(string text) : text(text) {}
	~Buffer() = default;

public:
	void add(string next) { text += next; }
	void print() { cout << text << endl; }

private:
	string text;
};

Buffer& append(Buffer& buf, string s) {
	buf.add(s);
	return buf;
}

#endif /* !BUFFER_H */
