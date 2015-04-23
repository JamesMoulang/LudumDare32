#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t468;
struct t468_marshaled;

 void m2224 (t468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2225 (t468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2226 (t468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2227 (t468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t468_marshal(const t468& unmarshaled, t468_marshaled& marshaled);
void t468_marshal_back(const t468_marshaled& marshaled, t468& unmarshaled);
void t468_marshal_cleanup(t468_marshaled& marshaled);
