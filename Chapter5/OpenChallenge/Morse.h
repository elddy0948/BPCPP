#pragma once
#ifndef MORSE_H
#define MORSE_H

#include <string>

using namespace std;

class Morse {
public:
	Morse() = default;
	~Morse() = default;

public:
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
	inline string translate(char c);
	inline char findText(string c);

private:
	const string alphabet[26] = { 
		".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
		".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
		"...", "-", "..-", "...-", ".--", "-..-", "-.-", "--.."
	};
	const string digit[10] = {
		"-----", ".----", "..---", "...--", "....-", ".....", "-....",
		"--...", "----..", "----."
	};

	const string slash = "-..-.";
	const string question = "..--..";
	const string comma = "--..--";
	const string period = ".-.-.-";
	const string plus = ".-.-.";
	const string equal = "-...-";
};

#endif