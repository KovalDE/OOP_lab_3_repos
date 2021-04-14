#include <iostream>
#include <string>
#include "Real.h"

using namespace std;

int main()
{
	Object j;
	Real s(9);
	int n;
	cout << "N: "; cin >> n;
	cout << "SQRT : ";
	cout << s.Sqrt(n);
	cout << endl;
	cout << "Pi in power of number : ";
	cout << s.PiPower(n);
	cout << endl;
	Real l, r;
	cout <<endl<<"Count = "<< Object::Count()<<endl;
	cin >> l;
	cin >> r;
	cout << endl;
	Real res;
	res = l * r;
	cout << "Result of multiplier   = " << res.getDouble() << endl;
	res = l - r;
	cout << "Result of substraction = " << res.getDouble() << endl;

	cout <<endl<<"Count = "<< Object::Count();
	return 0;
}