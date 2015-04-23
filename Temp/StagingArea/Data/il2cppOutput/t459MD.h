#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t459;
struct t459_marshaled;
struct t18;
struct t36;

 void m2181 (t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2182 (t28 * __this, t459 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t459 * m2183 (t28 * __this, t18* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t459 * m2184 (t28 * __this, t36 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t459 * m2185 (t28 * __this, t36 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t459_marshal(const t459& unmarshaled, t459_marshaled& marshaled);
void t459_marshal_back(const t459_marshaled& marshaled, t459& unmarshaled);
void t459_marshal_cleanup(t459_marshaled& marshaled);
