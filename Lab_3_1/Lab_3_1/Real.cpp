#include "Real.h"
#include <iostream>
#include<sstream>
#include<string>

using namespace std;

Real Real::Sqrt(int n)
{
	double k = pow(getDouble(), (1.0 / n));
	Real t(k);
	return t;
}

Real Real::PiPower(int n)
{
	double pi = atan(1) * 4;
	Real t(pow(pi, n));
	return t;
}

Real::Real(const double a)
	: Number(a)
{}
Real::Real(const Real& s)
	:Number(s)
{

}
Real& Real::operator =(const Real& s)
	
{
	Number::operator = (s);
	return *this;
}

Real::operator string () const
{
	stringstream sout;
	sout << " summa = " << getDouble() << endl;
	return sout.str();
}

ostream& operator <<(ostream& out, const Real& s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Real& s)
{
	double a;
	cout << endl;
	cout << "number = ? "; in >> a;
	s.setDouble(a);
	return in;
}

Real& Real::operator ++ () {
	setDouble(getDouble()+1);
	return	*this;
}
Real& Real::operator -- () {
	setDouble(getDouble() - 1);
	return *this;
}
Real Real::operator ++(int)
{
	Real s(*this);
	s.setDouble(s.getDouble()+1);
	return s;
}
Real Real::operator --(int)
{
	Real s(*this);
	s.setDouble(s.getDouble() - 1);
	return s;
}
Real::~Real(void)
{}

