#include "pch.h"
#include "IntArray.h"


IntArray::IntArray(int s) : m_size(s)
{
	m_arr = new int[m_size]{ 0 };
}

IntArray::~IntArray()
{
	if(m_arr) delete[] m_arr;
}

IntArray::IntArray(const IntArray &a) :
	m_size(a.m_size)
{
	m_arr = new int[m_size];

	for (int i = 0; i < a.m_size; i++) {
		m_arr[i] = a.m_arr[i];
	}
		
}

IntArray& IntArray::operator=(const IntArray& a)
{
	if (this == &a) return *this;
	if (m_arr) delete[] m_arr;
	m_size = a.m_size;

	m_arr = new int[m_size];

	for (int i = 0; i < m_size; i++) {
		m_arr[i] = a.m_arr[i];
	}

	return *this;
}

int& IntArray::operator[](const int index) {
	return m_arr[index];
}

std::ostream& operator<<(std::ostream& os, IntArray& a) {
	for (int i = 0; i < a.m_size; i++) {
		os << a.m_arr[i] << " ";
	}
	return os << std::endl;
}
