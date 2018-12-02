#pragma once
#include "Shape.h"
#include "Point.h"
class Triangle : public Shape
{
private:
	Point m_a, m_b, m_c;
public:
	Triangle(const Point& a, const Point& b, const Point& c);
	~Triangle();


	virtual std::ostream& print(std::ostream& out) const override;
};

