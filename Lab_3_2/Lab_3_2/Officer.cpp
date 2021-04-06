#include "Officer.h"

Officer::Officer()
	:dembel(0),Man()
{
}
Officer::Officer(int dembel1,int age1,string name1)
	: dembel(dembel1),Man(name1,age1)
{

}
Officer::Officer(const Officer& r)
	:Man(r)
{
	dembel = r.dembel;
}

Officer& Officer::operator =(const Officer& m)
{
	this->dembel = m.dembel;
	this->setName(m.getName());
	this->setAge(m.getAge());
    // Man::operator = (m);
	return *this;
}

Officer::operator string() const
{
	stringstream ss;
	ss << "Years to demobilization = " << dembel << endl;
	//ss << "name = " << getName() << endl << "age  = " << getAge() << endl;
	return Man::operator string () + ss.str();
}

ostream& operator << (ostream& out, const Officer& r)
{
	out << string(r) << endl;
	return out;
}

istream& operator >> (istream& in, Officer& r)
{
	string name1;
	int age1;
	cout << "demobilization = "; in >> r.dembel;
	cout << " name = "; in >> name1;
	r.setName(name1);
	cout << " age  = "; in >> age1;
	r.setAge(age1);
	return in;
}
