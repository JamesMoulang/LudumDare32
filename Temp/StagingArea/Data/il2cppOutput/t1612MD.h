#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1612;
struct t43;
struct t43_marshaled;
struct t565;
struct t28;
struct t333;

 void m8018_gshared (t1612 * __this, t43 * p0, t565 * p1, t28 * p2, MethodInfo* method);
#define m8018(__this, p0, p1, p2, method) (void)m8018_gshared((t1612 *)__this, (t43 *)p0, (t565 *)p1, (t28 *)p2, method)
 void m8020_gshared (t1612 * __this, t333* p0, MethodInfo* method);
#define m8020(__this, p0, method) (void)m8020_gshared((t1612 *)__this, (t333*)p0, method)
