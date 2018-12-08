#pragma once
#include <iostream>
class Fraction
{
private:
	int m_numerator, m_denominator;
public:
	Fraction();
	~Fraction();

	friend std::ostream& operator<<(std::ostream& out, Fraction& f);

	friend std::istream& operator>>(std::istream& in, Fraction& f);
};



