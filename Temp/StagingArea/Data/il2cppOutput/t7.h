#pragma once
#include <stdint.h>
struct t5;
#include "t3.h"
#include "t11.h"
struct t7  : public t3
{
	t5 * f3;
	t11  f4;
	t11  f5;
	t11  f6;
	t11  f7;
	bool f8;
	bool f9;
	t11  f10;
};
