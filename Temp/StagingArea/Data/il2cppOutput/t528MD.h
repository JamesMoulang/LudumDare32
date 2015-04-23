#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t528;
struct t528_marshaled;
struct t28;

 bool m2905 (t528 * __this, t28 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2906 (t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2907 (t28 * __this, t528 * p0, t528 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t528_marshal(const t528& unmarshaled, t528_marshaled& marshaled);
void t528_marshal_back(const t528_marshaled& marshaled, t528& unmarshaled);
void t528_marshal_cleanup(t528_marshaled& marshaled);
