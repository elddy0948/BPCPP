#include "Gambling.h"

GamblingPlayer::~GamblingPlayer() {}

GamblingGame::~GamblingGame() {
	delete[] players;
}

void GamblingGame::setupPlayers() {
	for (int i = 0; i < numberOfPlayers; ++i) {
		string name;
		cout << i + 1 << "번째 선수 이름 >> ";
		cin >> name;
		players[i].setName(name);
	}
}

void GamblingGame::startGame() {
	cin.ignore();
	while (true) {
		for (int i = 0; i < numberOfPlayers; ++i) {
			string enterTemp;

			cout << players[i].getName() << ": <Enter>";
			getline(cin, enterTemp);

			int sameCount = 0;
			int temp;
			for (int j = 0; j < 3; ++j) {
				int randNum = rand() % 3;
				cout << randNum << '\t';
				if (j == 0) { 
					temp = randNum; 
					sameCount++;
					continue;
				}
				if (randNum == temp) {
					sameCount++;
				}
				temp = randNum;
			}

			if (sameCount == 3) {
				cout << players[i].getName() << "님 승리!!\n";
				return;
			}
			else {
				cout << "아쉽군요!\n";
			}
		}
	}
}