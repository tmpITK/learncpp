#include "pch.h"
#include "Fraction.h"
#include <stdexcept>


Fraction::Fraction()
{
}


Fraction::~Fraction()
{
}

std::ostream& operator<<(std::ostream & out, Fraction & f)
{
	out << f.m_numerator << "/" << f.m_denominator << "\n";
	return out;
}

std::istream & operator>>(std::istream & in, Fraction & f)
{
	std::cout << "Give me the numerator and the denominator.\n";
	int denom;
	in >> f.m_numerator >> denom;
	if (denom == 0) {
		throw std::runtime_error("Division by zero.");
	}
	else {
		f.m_denominator = denom;
	}
	return in;
}
