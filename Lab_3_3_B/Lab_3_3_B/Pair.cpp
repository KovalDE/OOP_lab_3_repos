#include "Pair.h"

#include <sstream>
#include <string>
#include <cmath>

Pair::Pair()
{
	gr = 0;
	cop = 0;
}

Pair::Pair(long x, int y)
{
	gr = x;
	cop = y;
}

Pair::Pair(const Pair& x)
{
	gr = x.gr;
	cop = x.cop;
}

Pair::~Pair() {}

Pair& Pair::operator = (const Pair& x)
{
	gr = x.gr;
	cop = x.cop;

	return *this;
}

ostream& operator << (ostream& out, const Pair& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Pair& x)
{
	cout << "grivnas  = "; in >> x.gr;
	cout << "copiikas = "; in >> x.cop;
	return in;
}

Pair::operator string () const
{
	stringstream sout;
	sout << " grivnas = " << gr << '.' << cop << endl;

	return sout.str();
}


bool operator ==(const Pair& t1, const Pair& t2)
{
	return t1.GetGr() == t2.GetGr() && t1.GetCop() == t2.GetCop();
}
bool operator >(const Pair& t1, const Pair& t2)
{
	return t1.GetGr() > t2.GetGr() && t1.GetGr() == t2.GetGr() && t1.GetCop() > t2.GetCop();
}
bool operator <(const Pair& t1, const Pair& t2)
{
	return t1.GetGr() < t2.GetGr() && t1.GetGr() == t2.GetGr() && t1.GetCop() < t2.GetCop();
}

bool operator >=(const Pair& t1, const Pair& t2)
{
	return !(t1 < t2);
}
bool operator <=(const Pair& t1, const Pair& t2)
{
	return !(t1 > t2);
}
bool operator !=(const Pair& t1, const Pair& t2)
{
	return !(t1 == t2);
}



