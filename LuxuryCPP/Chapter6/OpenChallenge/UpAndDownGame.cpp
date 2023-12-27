#include "UpAndDownGame.h"

int UpAndDownGame::target = 0;
int UpAndDownGame::lowerRange = 0;
int UpAndDownGame::higherRange = 99;
int UpAndDownGame::numberOfPlayers = 0;
Person* UpAndDownGame::players = nullptr;

UpAndDownGame::UpAndDownGame(int numberOfPlayers) {
	srand((unsigned)time(0));
	int n = rand();
	target = n % 100;
	players = new Person[numberOfPlayers];
	UpAndDownGame::numberOfPlayers = numberOfPlayers;
}
UpAndDownGame::~UpAndDownGame() {}

void UpAndDownGame::start() {
	cout << "Up & Down 게임을 시작합니다.\n";
	int i = 0;
	while (true) {
		cout << "답은 " << lowerRange << "과 " << higherRange << "사이에 있습니다.\n";
		int predict;
		cout << players[i].getName() << " >> ";
		cin >> predict;
		if (target < predict && higherRange > predict) { higherRange = predict; }
		else if (target > predict && lowerRange < predict) { lowerRange = predict; }
		else if (target == predict) {
			cout << players[i].getName() << "가 이겼습니다!!\n";
			break;
		}
		i++;
		i %= numberOfPlayers;
	}
}