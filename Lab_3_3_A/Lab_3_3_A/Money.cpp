#include "Money.h"
#include <sstream>
#include <string>
#include <cmath>

Money::Money()
{
	gr = 0;
	cop = 0;
}

Money::Money(long x, int y)
{
	gr = x;
	cop = y;
}

Money::Money(const Money& x)
{
	gr = x.gr;
	cop = x.cop;
}

Money::~Money() {}

Money& Money::operator = (const Money& x)
{
	gr = x.gr;
	cop = x.cop;

	return *this;
}

ostream& operator << (ostream& out, const Money& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Money& x)
{
	cout << "grivnas  = "; in >> x.gr;
	cout << "copiikas = "; in >> x.cop;
	return in;
}

Money::operator string () const
{
	stringstream sout;
	sout << " grivnas = " << gr << '.' << cop << endl;

	return sout.str();
}



