#pragma once
#ifndef STRING_RAND_H
#define STRING_RAND_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const string alpha = "abcdefghijklmnopqrstuvwxyz";

void run()
{
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)\n";
	while (true)
	{
		string str;
		getline(cin, str);
		if (str == "exit") { break; }
		srand((unsigned)time(0));

		int n = rand() % alpha.size();

		int target = rand() % str.size();
		while (str[target] == ' ') { target = rand() % str.size(); }

		str[target] = alpha[n];

		cout << ">> " << str << '\n';
	}
}

#endif