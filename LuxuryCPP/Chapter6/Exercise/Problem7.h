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
		cout << "1부터 100까지 랜덤한 정수 10개를 출력합니다.\n";
		for (int i = 0; i < 10; ++i) {
			cout << Random::nextInt(1, 100) << ' ';
		}
		cout << endl;

		cout << "알파벳을 랜덤하게 10개를 출력합니다.\n";
		for (int i = 0; i < 10; ++i) {
			cout << Random::nextAlphabet() << ' ';
		}
		cout << endl;

		cout << "랜덤한 실수 10개를 출력합니다.\n";
		for (int i = 0; i < 10; ++i) {
			cout << Random::nextDouble() << ' ';
		}
		cout << endl;
	}
}

#endif /* !PROBLEM_7_H */
