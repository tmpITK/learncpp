#include "pch.h"
#include <iostream>
#include "Creature.h"


Creature::Creature(std::string name, char symbol, int health, int damage, int gold)
	: m_name(name), m_health(health), m_damage(damage), m_gold(gold), m_symbol(symbol)
{

}


Creature::~Creature()
{
}

std::string Creature::getName()
{
	return m_name;
}

const int Creature::getHealth()
{
	return m_health;
}

const int Creature::getDamage()
{
	return m_damage;
}

const int Creature::getGold()
{
	return m_gold;
}

const char Creature::getSymbol()
{
	return m_symbol;
}

void Creature::reduceHealth(int damage)
{
	m_health -= damage;
}

bool Creature::isDead()
{
	return m_health == 0;
}

void Creature::addGold(int amount)
{
	m_gold += amount;
}
