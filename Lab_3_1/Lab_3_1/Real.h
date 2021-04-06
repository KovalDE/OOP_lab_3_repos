#pragma once
#include "Number.h"

class Real
	:public Number
{
	
public:
	Real(const double a = 0);
	Real(const Real& s);

	Real& operator = (const Real& s);

	friend ostream& operator << (ostream& out, const Real& s);
	friend istream& operator >> (istream& in, Real& s);

	Real& operator ++ ();
	Real& operator -- ();
	Real operator ++ (int);
	Real operator -- (int);

	operator string () const;

	~Real();

	Real Sqrt(int n);
	static Real PiPower(int n);
};

