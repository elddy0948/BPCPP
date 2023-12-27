#pragma once
#ifndef COMBINE_h
#define COMBINE_h

#include <iostream>
#include <string>

using namespace std;

void combine(const string s1, const string s2, string& s3) {
	s3 = (s1 + " " + s2);
}

inline void combineMain() {
	string text1("I love you"), text2("very much");
	string text3;

	combine(text1, text2, text3);

	cout << text3;
}

#endif // !COMBINE_h
