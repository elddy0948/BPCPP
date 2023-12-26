#pragma once
#ifndef FIVE_A_H
#define FIVE_A_H

#include <iostream>
#include <string>

using namespace std;

void run()
{
	string str;
	cout << "문자열 입력 >> ";
	getline(cin, str);

	int aCountWithFor = 0;

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == 'a') { aCountWithFor++; }
	}

	int aCountWithFind = 0;
	int found = 0;
	while (true)
	{
		found = str.find('a', found);
		if (found < 0) { break; }
		found++;
		aCountWithFind++;
	}

	cout << "With for : " << aCountWithFor << endl;
	cout << "With find : " << aCountWithFind << endl;
}

#endif /* FIVE_A_H */
