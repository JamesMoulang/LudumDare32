#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1613;
struct t28;
struct t565;
struct t1614;
struct t333;

 void m8021_gshared (t1613 * __this, t28 * p0, t565 * p1, MethodInfo* method);
#define m8021(__this, p0, p1, method) (void)m8021_gshared((t1613 *)__this, (t28 *)p0, (t565 *)p1, method)
 void m8022_gshared (t1613 * __this, t1614 * p0, MethodInfo* method);
#define m8022(__this, p0, method) (void)m8022_gshared((t1613 *)__this, (t1614 *)p0, method)
 void m8023_gshared (t1613 * __this, t333* p0, MethodInfo* method);
#define m8023(__this, p0, method) (void)m8023_gshared((t1613 *)__this, (t333*)p0, method)
 bool m8024_gshared (t1613 * __this, t28 * p0, t565 * p1, MethodInfo* method);
#define m8024(__this, p0, p1, method) (bool)m8024_gshared((t1613 *)__this, (t28 *)p0, (t565 *)p1, method)
