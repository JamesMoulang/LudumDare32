#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t229;
struct t229_marshaled;

 void m2178 (t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2179 (t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2180 (t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t229_marshal(const t229& unmarshaled, t229_marshaled& marshaled);
void t229_marshal_back(const t229_marshaled& marshaled, t229& unmarshaled);
void t229_marshal_cleanup(t229_marshaled& marshaled);
