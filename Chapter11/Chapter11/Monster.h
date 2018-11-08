#pragma once
#include "Creature.h"

class Monster : public Creature
{
public:

	enum Type
	{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	};

	struct MonsterData{
		const char* name;
		char symbol;
		int health;
		int damage;
		int gold;
	};


	static MonsterData monsterData[MAX_TYPES];

	Monster(Type type);
	~Monster();

	static Monster getRandomMonster();
};


int getRandomNumber(int min, int max);
