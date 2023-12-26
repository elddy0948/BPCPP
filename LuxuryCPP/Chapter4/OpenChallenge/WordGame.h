#pragma once
#ifndef WORD_GAME_H
#define WORD_GAME_H

#include "Player.h"
#include <string>
#include <iostream>

class WordGame
{
public:
	WordGame() = default;
	WordGame(int numberOfParticipants, std::string startWord);
	~WordGame();

public:
	void getPartipants();
	void start();

private:
	int numberOfParticipants;
	Player* participants;

	std::string prevWord;
};

#endif