#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t43;
struct t43_marshaled;
struct t18;
struct t28;
#include "t396.h"
#include "t11.h"
#include "t50.h"
#include "t49.h"

 void m2662 (t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t43 * m2663 (t28 * __this, t43 * p0, t11  p1, t50  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t43 * m2664 (t28 * __this, t43 * p0, t11 * p1, t50 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2665 (t28 * __this, t43 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m136 (t28 * __this, t43 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2666 (t28 * __this, t43 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m189 (t28 * __this, t43 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t18* m1512 (t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2017 (t43 * __this, t18* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1891 (t43 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t18* m99 (t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m96 (t43 * __this, t28 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m98 (t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2667 (t28 * __this, t43 * p0, t43 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2668 (t28 * __this, t43 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2669 (t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t49 m2670 (t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t43 * m152 (t28 * __this, t43 * p0, t11  p1, t50  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2671 (t28 * __this, t28 * p0, t18* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1433 (t28 * __this, t43 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m147 (t28 * __this, t43 * p0, t43 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m138 (t28 * __this, t43 * p0, t43 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t43_marshal(const t43& unmarshaled, t43_marshaled& marshaled);
void t43_marshal_back(const t43_marshaled& marshaled, t43& unmarshaled);
void t43_marshal_cleanup(t43_marshaled& marshaled);
