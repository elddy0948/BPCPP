#include "Histogram.h"

void Histogram::displayHistogram() {
	int alpCount = 0;

	for (int i = 0; i < str.size(); ++i) {
		if (isalpha(str[i])) {
			alpCount++;
			char alpha = tolower(str[i]);
			int pos = (int)(alpha - 'a');
			histGram[pos] += 1;
		}
	}

	cout << "ÃÑ ¾ËÆÄºª ¼ö " << alpCount << '\n';

	for (int i = 0; i < 26; ++i) {
		cout << (char)(i + 'a') << '(' << histGram[i] << ")\t:";
		for (int j = 0; j < histGram[i]; ++j) { cout << '*'; }
		cout << '\n';
	}
}
