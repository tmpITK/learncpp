// chap9Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Average.h"
#include "IntArray.h"
#include "FixedPoint2.h"

void testAverage() {

	Average avg;

	avg += 4;
	std::cout << avg << '\n'; // 4 / 1 = 4

	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6

	avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

	Average copy = avg;
	std::cout << copy << '\n';

}

IntArray fillArray()
{
	IntArray a(5);
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 3;
	a[4] = 6;

	return a;
}

void testIntArray() {
	IntArray a = fillArray();
	std::cout << a << '\n';

	IntArray b(1);
	a = a;
	b = a;

	std::cout << b << '\n';

}

void testAddition()
{
	// h/t to reader Sharjeel Safdar for this function
	std::cout << std::boolalpha;
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.23) == FixedPoint2(1.98)) << '\n'; // both positive, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.50) == FixedPoint2(2.25)) << '\n'; // both positive, with decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.23) == FixedPoint2(-1.98)) << '\n'; // both negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.50) == FixedPoint2(-2.25)) << '\n'; // both negative, with decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.23) == FixedPoint2(-0.48)) << '\n'; // second negative, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.50) == FixedPoint2(-0.75)) << '\n'; // second negative, possible decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.23) == FixedPoint2(0.48)) << '\n'; // first negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.50) == FixedPoint2(0.75)) << '\n'; // first negative, possible decimal overflow
}

void testFixedPoint2() {
	FixedPoint2 a(34, 56);
	std::cout << a << '\n';

	FixedPoint2 b(-2, 8);
	std::cout << b << '\n';

	FixedPoint2 c(2, -8);
	std::cout << c << '\n';

	FixedPoint2 d(-2, -8);
	std::cout << d << '\n';

	FixedPoint2 e(0, -5);
	std::cout << e << '\n';

	std::cout << static_cast<double>(e) << '\n';

	FixedPoint2 a2(0.01);
	std::cout << a2 << '\n';

	FixedPoint2 b2(-0.01);
	std::cout << b2 << '\n';

	FixedPoint2 c2(5.01); // stored as 5.0099999... so we'll need to round this
	std::cout << c2 << '\n';

	FixedPoint2 d2(-5.01); // stored as -5.0099999... so we'll need to round this
	std::cout << d2 << '\n';

	testAddition();

	FixedPoint2 a3(-0.48);
	std::cout << a3 << '\n';

	std::cout << -a3 << '\n';

	std::cout << "Enter a number: "; // enter 5.678
	std::cin >> a3;

	std::cout << "You entered: " << a3 << '\n';
}


int main()
{
	//testAverage();

	//testIntArray();

	testFixedPoint2();

	return 0;
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
