#include "WordGame.h"

using namespace std;

int main(void)
{
	int numberOfPeople;

	cout << "���� �ձ� ������ �����մϴ�.\n";
	
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? >> ";
	cin >> numberOfPeople;

	WordGame wg = WordGame(numberOfPeople, "�ƹ���");

	wg.getPartipants();

	wg.start();

	return 0;
}