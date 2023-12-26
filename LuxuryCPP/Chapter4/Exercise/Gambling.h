#pragma once
#ifndef GAMBLING_H
#define GAMBLING_H

#include <string>
#include <iostream>

using namespace std;

class GamblingPlayer {
public:
	GamblingPlayer() = default;
	~GamblingPlayer();
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
private:
	string name;
};

class GamblingGame {
public:
	GamblingGame(int numberOfPlayers) : numberOfPlayers(numberOfPlayers), players(new GamblingPlayer[numberOfPlayers]) {}
	~GamblingGame();

public:
	void setupPlayers();
	void startGame();

private:
	GamblingPlayer* players;
	int numberOfPlayers;

};

#endif