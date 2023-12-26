#include "WordGame.h"

using namespace std;

int main(void)
{
	int numberOfPeople;

	cout << "끝말 잇기 게임을 시작합니다.\n";
	
	cout << "게임에 참가하는 인원은 몇명입니까? >> ";
	cin >> numberOfPeople;

	WordGame wg = WordGame(numberOfPeople, "아버지");

	wg.getPartipants();

	wg.start();

	return 0;
}