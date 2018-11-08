#pragma once
#include <string>

class Creature
{
protected:
	std::string m_name;
	int m_health, m_damage, m_gold;
	char m_symbol;
public:
	Creature(std::string name, char symbol, int health, int damage, int gold);
	~Creature();

	std::string getName();
	const int getHealth();
	const int getDamage();
	const int getGold();
	const char getSymbol();

	void reduceHealth(int damage);
	bool isDead();
	void addGold(int amount);
};

