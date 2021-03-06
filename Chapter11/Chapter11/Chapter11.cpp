// Chapter11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Player.h"
#include "Monster.h"
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void fight(Player& player, Monster& m) {

}

void playGame(Player& player) {
	
	while (player.isDead() == false && player.hasWon() == false) {
		char choice;
		Monster m = Monster::getRandomMonster();
		std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ").\n";
		std::cout << "(R)un or (F)ight: ";
		std::cin >> choice;

		if (choice == 'r') {
			bool escaped = static_cast<bool>(getRandomNumber(0, 1));
			if (escaped) {
				continue;
			}
			player.reduceHealth(m.getDamage());
		}
		else {
			fight(player, m);
		}
	}
}

void fight() {

}

int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // get rid of first result

	Player p;
	std::cout << "Enter your name: ";
	std::cin >> p;
	std::cout << "Welcome, " << p.getName() << '\n';


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
