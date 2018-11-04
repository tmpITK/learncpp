#include "pch.h"
#include "Monster.h"
#include <iostream>


Monster::Monster(std::string name, std::string roar, int hitPoints, Monster::MonsterType type)
	: m_Name(name),
	m_Roar(roar),
	m_HitPoints(hitPoints),
	m_Type(type)
{
}


Monster::~Monster()
{
}

void Monster::print() {
	std::cout << m_Name << " the " << Monster::getType() << " has " << m_HitPoints << " point(s) and says " << m_Roar << std::endl;
}
std::string Monster::getType() {
	switch (m_Type) {
	case(Monster::DRAGON): return "dragon";
	case(Monster::GOBLIN): return "goblin";
	case(Monster::OGRE): return "ogre";
	case(Monster::ORC): return "orc";
	case(Monster::SKELETON): return "skeleton";
	case(Monster::TROLL): return "troll";
	case(Monster::VAMPIRE): return "vampire";
	case(Monster::ZOMBIE): return "zombie";
	default: return "... whatever this is";
	}
}
