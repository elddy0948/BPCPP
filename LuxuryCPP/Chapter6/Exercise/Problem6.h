#pragma once
#ifndef PROBLEM_6_H
#define PROBLEM_6_H

#include <cstring>
#include <iostream>

namespace p6 {
	using namespace std;
	class ArrayUtility2 {
	public:
		static int* concat(int s1[], int s2[], int size);
		static int* remove(int s1[], int s2[], int size, int& retSize);
	};

	int* ArrayUtility2::concat(int s1[], int s2[], int size) {
		int* retArray = new int[2 * size];

		for (int i = 0; i < size; ++i) { retArray[i] = s1[i]; }
		for (int i = size; i < 2 * size; ++i) { retArray[i] = s2[i - size]; }

		return retArray;
	}

	int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
		int* diffs = new int[size];
		int sameCount = 0;
		bool sameFlag = false;

		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if (s1[i] == s2[j]) {
					sameFlag = true;
					break;
				}
			}
			if (!sameFlag) {
				diffs[sameCount++] = s1[i];
			}
			sameFlag = false;
		}
		retSize = sameCount;
		if (sameCount == 0) { return nullptr; }
		return diffs;
	}

	void p6Main() {
		int x[5] = {};
		int y[5] = {};

		cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ� >> ";
		for (int i = 0; i < 5; ++i) { cin >> x[i]; }

		cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ� >> ";
		for (int i = 0; i < 5; ++i) { cin >> y[i]; }


		cout << "��ģ ���� �迭�� ����Ѵ�.\n";
		int* sumArr = ArrayUtility2::concat(x, y, 5);
		for (int i = 0; i < 5 * 2; ++i) { cout << sumArr[i] << ' '; }
		cout << '\n';

		int retSize = 0;

		int* removeArr = ArrayUtility2::remove(x, y, 5, retSize);
		cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << '\n';
		for (int i = 0; i < retSize; ++i) { cout << removeArr[i] << ' '; }
	}
}

#endif /* !PROBLEM_6_H */
