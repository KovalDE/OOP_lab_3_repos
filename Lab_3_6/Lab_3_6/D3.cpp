#include "D3.h"
D3::D3(int x, int y, int z, int j)
	: D1(x,y), D2(x,z),B2(j)
{
	d3 = j;
}
void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_B2();
	cout << "show_D3()" << endl
		<< "D2::d2 = " << d3 << endl << endl;
}