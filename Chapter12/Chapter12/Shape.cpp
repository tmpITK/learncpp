#include "pch.h"
#include "Shape.h"


Shape::Shape()
{
}


Shape::~Shape()
{
}

std::ostream & operator<<(std::ostream& out, const Shape& s)
{
	return s.print(out);
}
