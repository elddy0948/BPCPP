#include "Morse.h"

void Morse::text2Morse(string text, string& morse) {
	for (const auto& t : text) {
		morse += translate(tolower(t));
		morse += ' ';
	}
}

bool Morse::morse2Text(string morse, string& text) {
	string tmp = "";
	bool spaceFlag = false;
	for (const auto& m : morse) {
		if (m == ' ') {
			if (spaceFlag) {
				text += ' ';
				spaceFlag = false;
				continue;
			}
			spaceFlag = true;
			if (tmp == "") { continue; }
			char t = findText(tmp);
			if (t == ' ') { return false; }
			text += t;
			tmp = "";
		}
		else {
			spaceFlag = false;
			tmp += m;
		}
	}

	return true;
}

inline string Morse::translate(const char c) {
	if (c == ' ') { return " "; }
	if (isalpha(c)) { return alphabet[c - 'a']; }
	else if (isdigit(c)) { return digit[c - '0']; }
	else {
		switch (c) {
		case '/':
			return slash;
		case '?':
			return question;
		case ',':
			return comma;
		case '.':
			return period;
		case '+':
			return plus;
		case '=':
			return equal;
		default:
			return  "";
		}
	}
}

inline char Morse::findText(string c) {
	const int alphabetSize = sizeof(alphabet) / sizeof(string);
	const int digitSize = sizeof(digit) / sizeof(string);

	for (int i = 0; i < alphabetSize; ++i) {
		if (alphabet[i] == c) { return ('a' + i); }
	}

	for (int i = 0; i < digitSize; ++i) {
		if (digit[i] == c) { return ('0' + i); }
	}

	if (c == slash) { return '/'; }
	else if (c == question) { return '?'; }
	else if (c == comma) { return ','; }
	else if (c == period) { return '.'; }
	else if (c == plus) { return '+'; }
	else if (c == equal) { return '='; }

	return ' ';
}