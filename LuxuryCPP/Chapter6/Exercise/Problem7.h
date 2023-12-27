#pragma once
#ifndef PROBLEM_7_H
#define PROBLEM_7_H

#include <cstdlib>
#include <ctime>
#include <iostream>

namespace p7 {
	using namespace std;
	class Random {
	public:
		static void seed() { srand((unsigned)time(0)); }
		static int nextInt(int min = 0, int max = 32767);
		static char nextAlphabet();
		static double nextDouble();
	};

	int Random::nextInt(int min, int max) {
		int n = rand() % (max - min) + min;
		return n;
	}

	char Random::nextAlphabet() {
		return (char)nextInt(0, 26) + 'a';
	}

	double Random::nextDouble() {
		return (double)nextInt() / 32767;
	}

	void p7Main() {
		Random::seed();
		cout << "1���� 100���� ������ ���� 10���� ����մϴ�.\n";
		for (int i = 0; i < 10; ++i) {
			cout << Random::nextInt(1, 100) << ' ';
		}
		cout << endl;

		cout << "���ĺ��� �����ϰ� 10���� ����մϴ�.\n";
		for (int i = 0; i < 10; ++i) {
			cout << Random::nextAlphabet() << ' ';
		}
		cout << endl;

		cout << "������ �Ǽ� 10���� ����մϴ�.\n";
		for (int i = 0; i < 10; ++i) {
			cout << Random::nextDouble() << ' ';
		}
		cout << endl;
	}
}

#endif /* !PROBLEM_7_H */
