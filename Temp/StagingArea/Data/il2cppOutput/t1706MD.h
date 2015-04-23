#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1706;
struct t28;

 void m8514_gshared (t1706 * __this, MethodInfo* method);
#define m8514(__this, method) (void)m8514_gshared((t1706 *)__this, method)
 int32_t m8515_gshared (t1706 * __this, t28 * p0, t28 * p1, MethodInfo* method);
#define m8515(__this, p0, p1, method) (int32_t)m8515_gshared((t1706 *)__this, (t28 *)p0, (t28 *)p1, method)
