#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pair
{
	long gr;
	unsigned int cop;
public:
	Pair();
	Pair(long, int);
	Pair(const Pair&);
	~Pair();

	double GetGr() const { return gr; }
	double GetCop() const { return cop; }
	void SetGR(long value) { gr = value; }
	void SetCop(unsigned int value) { cop = value; }

	Pair& operator = (const Pair&);
	operator string() const;

	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);

	friend bool operator == (Pair& x, Pair& y);
};

