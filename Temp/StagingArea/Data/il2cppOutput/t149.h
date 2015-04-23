#pragma once
#include <stdint.h>
struct t38;
struct t150;
#include "t135.h"
#include "t51.h"
struct t149  : public t135
{
	t38 * f3;
	t51  f4;
};
struct t149_SFs{
	int32_t f2;
	t150 * f5;
};
