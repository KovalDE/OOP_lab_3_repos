#include "Man.h"

Man::Man()
	:name(""), age(0)
{
}
Man::Man(string name1, int age1)
	:name(name1),age(age1)
{
}
Man::Man(const Man& r)
{
	name = r.name;
	age = r.age;
}

Man::~Man()
{
}

Man& Man::operator =(const Man& m)
{
	this->name = m.name;
	this->age = m.age;
	return *this;
}

Man::operator string() const
{
	stringstream ss;
	ss << "name = " << name << endl << "age   = " << age << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Man& r)
{
	out << string(r) << endl;
	return out;
}

istream& operator >> (istream& in, Man& r)
{
	cout << "name = "; in >> r.name;
	cout << "age = "; in >> r.age;
	return in;
}