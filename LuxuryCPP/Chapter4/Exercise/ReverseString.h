#pragma once
#ifndef REVERSE_STRING_H
#define REVERSE_STRING_H

#include <string>
#include <iostream>
using namespace std;

void run()
{
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)\n";

	while (true)
	{
		cout << ">> ";
		string str;
		getline(cin, str);
		if (str == "exit") { break; }
		int index = str.length();

		//reverse(str.begin(), str.end());
		
		while (index--)
		{
			cout << str[index];
		}
		cout << '\n';
	}
}

#endif