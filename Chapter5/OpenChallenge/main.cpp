#include "Morse.h"

#include <iostream>

int main(void) {
	using namespace std;

	Morse m;
	string key = "";
	string morseText = "";
	string englishText = "";

	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다.\n";
	getline(cin, key);

	m.text2Morse(key, morseText);

	cout << morseText << '\n';

	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다.\n";

	if (m.morse2Text(morseText, englishText)) {
		cout << englishText << '\n';
	}
	else {
		cout << "무슨말임 ㅋㅋ\n";
	}

	return 0;
}