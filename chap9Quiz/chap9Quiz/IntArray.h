#pragma once
#include <iostream>
class IntArray
{
private: 
	int m_size = 0;
	int* m_arr = nullptr;
public:
	IntArray(int s);
	IntArray(const IntArray &a);
	~IntArray();

	IntArray& operator=(const IntArray &a);
	int& operator[](const int index);
	friend std::ostream& operator<<(std::ostream& os, IntArray& a);
};

