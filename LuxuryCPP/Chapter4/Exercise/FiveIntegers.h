#pragma once
#ifndef FIVE_INTEGERS_H
#define FIVE_INTEGERS_H

#include <iostream>

using namespace std;

void run()
{
	int* intArr = new int[5];
	int sum = 0;

	cout << "���� 5�� �Է� >> ";
	for (int i = 0; i < 5; ++i)
	{
		cin >> intArr[i];
		sum += intArr[i];
	}

	cout << "��� : " << (float)sum / 5;

	delete[] intArr;
}

#endif