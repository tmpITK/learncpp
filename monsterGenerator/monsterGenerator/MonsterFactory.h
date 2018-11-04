#pragma once
#include "Monster.h"
class MonsterFactory
{
public:
	MonsterFactory();
	~MonsterFactory();
	static Monster generateMonster();
	static int getRandomNumber(int max, int min);
};

