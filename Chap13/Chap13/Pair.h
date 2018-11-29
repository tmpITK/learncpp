#pragma once
template <class T1, class T2>
class Pair
{
private:
	T1 m_p1;
	T2 m_p2;
public:
	Pair(const T1& p1, const T2& p2) : m_p1(p1), m_p2(p2) {}
	~Pair() {}

	const T1& first() { return m_p1; }
	const T1& first() const { return m_p1; }
	const T2& second() { return m_p2; }
	const T2& second() const { return m_p2; }
};
