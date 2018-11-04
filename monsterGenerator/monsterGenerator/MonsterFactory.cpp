#include "pch.h"
#include "MonsterFactory.h"


MonsterFactory::MonsterFactory()
{
}


MonsterFactory::~MonsterFactory()
{
}

Monster MonsterFactory::generateMonster() {
	static const std::string names[6]{"Abra", "Kablam", "Stink", "Pulp", "Fhlump", "Meo" };;
	static const std::string sounds[6]{"WOOSH", "Hey, Vsauce! Michael here!", "BLEEEEERG", "boo", "Roar", "squeeesh"};

	auto name = names[MonsterFactory::getRandomNumber(1,6)];
	auto roar = sounds[MonsterFactory::getRandomNumber(1, 6)];
	auto hitPoint = getRandomNumber(1, 100);
	auto type = static_cast<Monster::MonsterType>(getRandomNumber(1, Monster::MAX_MONSTER_TYPES));

	return Monster(name, roar, hitPoint, type);
}

int MonsterFactory::getRandomNumber(int max, int min) {
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);

}
