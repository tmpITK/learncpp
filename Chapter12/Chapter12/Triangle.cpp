#include "pch.h"
#include "Triangle.h"


Triangle::Triangle(const Point& a, const Point& b, const Point& c)
	: m_a(a), m_b(b), m_c(c)
{
}


Triangle::~Triangle()
{
}

std::ostream & Triangle::print(std::ostream & out) const
{
	out<<"Triangle("<<m_a << ", " << m_b << ", " << m_c << ")";
	return out;
}
