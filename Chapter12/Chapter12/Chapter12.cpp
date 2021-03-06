// Chapter12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include <vector>

int getLargestRadius(std::vector<Shape*>& v) {
	int max = 0;
	for (auto const &elem : v) {
		auto n_elem = dynamic_cast<Circle*>(elem);
		if (n_elem) {
			if (max < n_elem->getRadius()) {
				max = n_elem->getRadius();
			}
		}
	}
	return max;
}

int main()
{
	std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 2));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
	v.push_back(new Circle(Point(4, 5, 6), 3));
	std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';

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
