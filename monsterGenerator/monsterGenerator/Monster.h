#pragma once
#include <string>
class Monster
{
public:
	static enum MonsterType {
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};
private:
	std::string m_Name, m_Roar;
	int m_HitPoints;
	MonsterType m_Type;
public:
	Monster(std::string name="Bob", std::string roar="Rawr xD", int hitPoints=1, Monster::MonsterType type=VAMPIRE);
	~Monster();
	void print();
	std::string getType();
};

