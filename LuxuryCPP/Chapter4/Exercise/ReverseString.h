#pragma once
#ifndef REVERSE_STRING_H
#define REVERSE_STRING_H

#include <string>
#include <iostream>
using namespace std;

void run()
{
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)\n";

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