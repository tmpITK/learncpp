#pragma once
#include <iostream>
#include <stdint.h>
class FixedPoint2
{
private:
	int16_t m_base;
	int8_t m_decimal;

public:
	FixedPoint2(int16_t a=0, int8_t b=0);
	FixedPoint2(double d=0.0);
	~FixedPoint2();
	operator double();
	FixedPoint2 operator-();
	friend FixedPoint2 operator+(FixedPoint2& f1, FixedPoint2& f2);
	friend std::ostream& operator<<(std::ostream& os, FixedPoint2& f);
	friend std::istream& operator>>(std::istream& is, FixedPoint2& f);
};

bool operator==(FixedPoint2& f1, FixedPoint2& f2);
