#pragma once
#include <string>
class Fruit {
private:
	std::string name, color;
public:
	Fruit(std::string n, std::string c);
	const std::string getName();
	const std::string getColor();
};

class Apple : public Fruit {
public:
	Apple(std::string n="apple", std::string c="green");
};

class Banana : public Fruit {
public:
	Banana(std::string n="banana", std::string c="yellow");
};


class GrannySmith : public Apple {
public:
	GrannySmith();
};