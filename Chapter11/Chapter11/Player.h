#pragma once
#include "Creature.h"
#include <iostream>
class Player : public Creature
{
private:
	int m_level;
public:
	Player();
	~Player();

	bool hasWon();
	
	friend std::istream& operator>>(std::istream& is, Player& player);
};

