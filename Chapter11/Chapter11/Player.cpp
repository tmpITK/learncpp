#include "pch.h"
#include "Player.h"


Player::Player() : Creature(" ", '@', 10, 1, 0), m_level(1)
{

}


Player::~Player()
{
}

bool Player::hasWon()
{
	return m_level == 20;
}

std::istream & operator>>(std::istream & is, Player & player)
{
	std::cout << "Please, enter your name.\n";
	return is >> player.m_name;
}
