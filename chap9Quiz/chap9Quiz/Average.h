#pragma once
#include <stdint.h>
#include <iostream>

class Average
{
private:
	int32_t sum;
	int8_t num;

public:
	Average(int32_t a=0, int8_t b=0);
	~Average();
	Average& operator+=(int a);
	friend std::ostream& operator<<(std::ostream& os, Average& a);
};

