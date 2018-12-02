#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
class Circle: public Shape
{
private:
	Point m_x;
	int m_r;
public:
	Circle(Point x, int r);
	~Circle();

	virtual std::ostream& print(std::ostream& out) const override;
	int getRadius() const;
};

