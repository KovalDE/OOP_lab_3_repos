#pragma once
#include "B1.h"

class D2 
	: private B1
{
 int d2;
public:
	D2(int x, int y);
	void show_D2();
};