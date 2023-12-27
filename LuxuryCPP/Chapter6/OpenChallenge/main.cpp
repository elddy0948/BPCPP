#include "UpAndDownGame.h"

int main() {
	UpAndDownGame udg(2);

	udg.setName(0, "김인수");
	udg.setName(1, "오은경");

	udg.start();

	return 0;

}