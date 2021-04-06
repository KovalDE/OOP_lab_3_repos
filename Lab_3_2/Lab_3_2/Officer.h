#pragma once
#include "Man.h"

class Officer
	:public Man
{
private:
	int dembel;
public:
	int getDembel() const { return dembel; }
	void setDembel(int dembel1) { dembel = dembel1; }

	Officer();
	Officer(int,int,string);
	Officer(const Officer&);

	Officer& operator =(const Officer& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const Officer& r);
	friend istream& operator >> (istream& in, Officer& r);
};

