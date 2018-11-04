#include "pch.h"
#include "FixedPoint2.h"
#include <cmath>


FixedPoint2::FixedPoint2(int16_t a, int8_t b) : m_base(a), m_decimal(b)
{
	if (m_base < 0 || m_decimal < 0) {
		m_base = m_base > 0 ? -m_base : m_base;
		m_decimal = m_decimal > 0 ? -m_decimal : m_decimal;
	}
}

FixedPoint2::FixedPoint2(double d) {
	m_base = static_cast<int16_t>(d);
	m_decimal = static_cast<int8_t>(round((d - m_base)*100));
	
}


FixedPoint2::~FixedPoint2()
{
}

FixedPoint2::operator double() {
	return m_base + static_cast<double>(m_decimal) / 100;
}

FixedPoint2 FixedPoint2::operator-() {
	return FixedPoint2(-m_base, -m_decimal);
}

FixedPoint2 operator+(FixedPoint2& f1, FixedPoint2& f2) {
	return FixedPoint2(f1.m_base + f2.m_base, f1.m_decimal + f2.m_decimal);
}

std::ostream& operator<<(std::ostream& os, FixedPoint2& f) {
	return os << double(f) << std::endl;
}
std::istream& operator>>(std::istream& is, FixedPoint2& f) {
	double a;
	is >> a;
	f = FixedPoint2(a);
	return is;
}

bool operator==(FixedPoint2& f1, FixedPoint2& f2) {
	return double(f1) == double(f2);
}
