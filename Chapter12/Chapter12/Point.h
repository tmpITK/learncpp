#pragma once
#include <iostream>
class Point
{
private:
	int m_x, m_y, m_z;
public:
	Point(int x, int y, int z);
	~Point();

	friend std::ostream& operator<<(std::ostream& out, const Point& p);
};

