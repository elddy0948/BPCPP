#include "Morse.h"

#include <iostream>

int main(void) {
	using namespace std;

	Morse m;
	string key = "";
	string morseText = "";
	string englishText = "";

	cout << "�Ʒ��� ���� �ؽ�Ʈ�� �Է��ϼ���. �� ��ȣ�� �ٲߴϴ�.\n";
	getline(cin, key);

	m.text2Morse(key, morseText);

	cout << morseText << '\n';

	cout << "�� ��ȣ�� �ٽ� ���� �ؽ�Ʈ�� �ٲߴϴ�.\n";

	if (m.morse2Text(morseText, englishText)) {
		cout << englishText << '\n';
	}
	else {
		cout << "�������� ����\n";
	}

	return 0;
}