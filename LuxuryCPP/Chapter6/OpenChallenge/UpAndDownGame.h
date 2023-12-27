#pragma once
#ifndef UP_AND_DOWN_GAME_H
#define UP_AND_DOWN_GAME_H

#include "Person.h"

#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class UpAndDownGame {
public:
	UpAndDownGame(int numberOfPlayers);
	~UpAndDownGame();

public:
	void start();
	void setName(int index, string name) { players[index].setName(name); }

private:
	static int target;
	static int lowerRange;
	static int higherRange;
	static Person* players;
	static int numberOfPlayers;
};


#endif /* !UP_AND_DOWN_GAME_H */
