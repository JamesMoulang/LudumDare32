#pragma once
#include <stdint.h>
struct t28;
struct t565;
struct t729;
#include "t28.h"
#include "t49.h"
struct t365  : public t28
{
	void (*f0)();
	t49 f1;
	t28 * f2;
	t49 f3;
	t49 f4;
	t49 f5;
	t565 * f6;
	t565 * f7;
	t729 * f8;
};
