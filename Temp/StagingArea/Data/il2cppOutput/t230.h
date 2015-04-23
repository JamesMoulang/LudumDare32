#pragma once
#include <stdint.h>
struct t230;
struct t230_marshaled;
struct t494;
#include "t28.h"
#include "t49.h"
struct t230  : public t28
{
	t49 f0;
};
struct t230_SFs{
	t230 * f1;
	t230 * f2;
	t494 * f3;
};
// Native definition for marshalling of: UnityEngine.Event
struct t230_marshaled
{
	t49 f0;
};
