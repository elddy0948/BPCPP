#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
	Player();
	~Player();

public:
	void setName(std::string name) { this->name = name; }
	std::string getName() { return name; }

private:
	std::string name;
};

#endif