#pragma once
#ifndef FIND_h
#define FIND_h

#include <iostream>

using namespace std;

namespace Problem6 {
	char& find(char a[], char c, bool& success) {
		for (int i = 0; a[i]; ++i) {
			if (a[i] == c) {
				success = true;
				return a[i];
			}
		}

		success = false;
		return a[0];
	}

	inline void findMain() {
		char s[] = "Mike";
		bool b = false;
		char& loc = find(s, 'M', b);
		if (b == false) { cout << "M을 발견할 수 없다." << endl; return; }
		loc = 'm';
		cout << s << endl;

	}
}

#endif /* !FIND_h */
