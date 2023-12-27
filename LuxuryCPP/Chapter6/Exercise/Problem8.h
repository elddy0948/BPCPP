#pragma once
#ifndef PROBLEM_8_H
#define PROBLEM_8_H

#include <string>
#include <cstring>
#include <iostream>

namespace p8 {
	using namespace std;
	class Trace {
	public:
		Trace() {}
		~Trace() {
			delete[] logs; 
		}

	public:
		static void put(string tag, string log) {
			string tmp = tag + ":" + log;

			if (Trace::logs == nullptr) {
				Trace::logs = new string[1];
				Trace::logs[Trace::size] = tmp;
				Trace::size++;
				return;
			}

			string* logTmp = new string[Trace::size + 1];
			memcpy(logTmp, Trace::logs, Trace::size * sizeof(string));
			logTmp[Trace::size] = tmp;

			Trace::size++;

			Trace::logs = new string[Trace::size];
			memcpy(Trace::logs, logTmp, Trace::size * sizeof(string));
		}

		static void print(string tag = "") {
			if (tag == "") {
				cout << "----- 모든 Trace 정보를 출력합니다. -----\n";
				for (int i = 0; i < Trace::size; ++i) {
					cout << Trace::logs[i] << '\n';
				}
				cout << '\n';
			}
			else {
				cout << "-----" << tag <<" 의 Trace 정보를 출력합니다. ----- \n";

				for (int i = 0; i < Trace::size; ++i) {
					string tmp;
					for (int j = 0; Trace::logs[i][j] != ':'; ++j) {
						tmp += Trace::logs[i][j];
					}
					if (tmp == tag) {
						cout << Trace::logs[i] << '\n';
					}
				}
			}
		}

	private:
		static string* logs;
		static int size;
	};

	string* Trace::logs = nullptr;

	int Trace::size = 0;

	void f() {
		int a, b, c;
		cout << "두 개의 정수를 입력하세요 >> ";
		cin >> a >> b;
		Trace::put("f()", "정수를 입력 받았음.");
		c = a + b;
		Trace::put("f()", "합 계산.");
		cout << "합은 " << c << endl;
	}

	void p8Main() {
		Trace::put("main()", "프로그램 시작합니다.");
		f();
		Trace::put("main()", "종료");

		Trace::print("f()");
		Trace::print();
	}
}
#endif /* !PROBLEM_8_H */
