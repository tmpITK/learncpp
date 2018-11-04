#include "pch.h"
#include "Average.h"



Average::Average(int32_t a, int8_t b): sum(a), num(b)
{
}


Average::~Average()
{
}

Average& Average::operator+=(int a) {
	sum += a;
	num++;
	return *this;
}

std::ostream& operator<<(std::ostream& os, Average& a) {
	return os << static_cast<double>(a.sum) / a.num;
}
