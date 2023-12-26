#include "WordGame.h"

WordGame::WordGame(int numberOfParticipants, std::string startWord)
	: numberOfParticipants(numberOfParticipants),
	participants(new Player[numberOfParticipants]),
	prevWord(startWord)
{
}

WordGame::~WordGame()
{
	delete[] participants;
}

void WordGame::getPartipants()
{
	for (int i = 0; i < numberOfParticipants; ++i)
	{
		std::cout << "�������� �̸��� �Է��ϼ���. ��ĭ ���� >> ";
		std::string name;
		std::cin >> name;
		participants[i].setName(name);
	}
}

void WordGame::start()
{
	bool endFlag = false;

	std::cout << "�����ϴ� �ܾ�� " << prevWord << " �Դϴ�.\n";

	while (1)
	{
		if (endFlag) { break; }

		for (int i = 0; i < numberOfParticipants; ++i)
		{
			std::string word;
			std::cout << participants[i].getName() << " >> ";
			std::cin >> word;
			if (word.at(0) != prevWord.at(prevWord.size() - 2)
				&& word.at(1) != prevWord.at(prevWord.size() - 1))
			{
				endFlag = true;
				break;
			}

			prevWord = word;
		}
	}
}