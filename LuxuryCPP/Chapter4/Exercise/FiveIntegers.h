#pragma once
#ifndef FIVE_INTEGERS_H
#define FIVE_INTEGERS_H

#include <iostream>

using namespace std;

void run()
{
	int* intArr = new int[5];
	int sum = 0;

	cout << "정수 5개 입력 >> ";
	for (int i = 0; i < 5; ++i)
	{
		cin >> intArr[i];
		sum += intArr[i];
	}

	cout << "평균 : " << (float)sum / 5;

	delete[] intArr;
}

#endif