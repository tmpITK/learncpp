#include "pch.h"
#include "Fruits.h"

Fruit::Fruit(std::string n, std::string c) : name(n), color(c) {};

const std::string Fruit::getName(){
	return name;

}const std::string Fruit::getColor(){
	return color;
}

Apple::Apple(std::string n, std::string c) : Fruit(n, c) {};

Banana::Banana(std::string n, std::string c) : Fruit(n, c) {};

GrannySmith::GrannySmith() : Apple("granny smith") {};