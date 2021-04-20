#pragma once
#include "B2.h"
#include "D1.h"
#include "D2.h"
class D3
	:public D1, D2,private B2
{
	int d3;
public:
	D3(int x, int y,int z,int j);
	void show_D3();
};

