#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Man
{
	string name;
	int age;
public:
	string getName() const { return name; }
	void setName(string name1) {  name = name1; }
	int getAge() const { return age; }
	void setAge(int age1) { age = age1; }

	Man();
	Man(string, int);
	Man(const Man&);
	~Man();

	Man& operator =(const Man& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const Man& r);
	friend istream& operator >> (istream& in, Man& r);

};

