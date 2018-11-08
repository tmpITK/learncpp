#include "pch.h"
#include "Monster.h"
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()


Monster::Monster(Type type)
	: Creature(monsterData[type].name, monsterData[type].symbol,
		monsterData[type].health, monsterData[type].damage, monsterData[type].gold)
{
}


Monster::~Monster()
{
}

Monster Monster::getRandomMonster()
{
	Monster::Type random_type = static_cast<Monster::Type>(getRandomNumber(0, MAX_TYPES - 1));
	return Monster(random_type);

}

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}