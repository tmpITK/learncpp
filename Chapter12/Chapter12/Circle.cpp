#include "pch.h"
#include "Circle.h"


Circle::Circle(Point x, int r) 
	: m_x(x), m_r(r)
{
}


Circle::~Circle()
{
}

int Circle::getRadius() const{
	return m_r;
}

std::ostream & Circle::print(std::ostream & out) const
{
	out << "Circle(" << m_x << ", radius " << m_r << ")";
	return out;
}
