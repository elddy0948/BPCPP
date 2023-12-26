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
		std::cout << "참가자의 이름을 입력하세요. 빈칸 없이 >> ";
		std::string name;
		std::cin >> name;
		participants[i].setName(name);
	}
}

void WordGame::start()
{
	bool endFlag = false;

	std::cout << "시작하는 단어는 " << prevWord << " 입니다.\n";

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