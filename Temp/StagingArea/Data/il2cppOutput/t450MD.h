#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t450;
struct t450_marshaled;

 void m2590 (t450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2591 (t450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2592 (t450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t450_marshal(const t450& unmarshaled, t450_marshaled& marshaled);
void t450_marshal_back(const t450_marshaled& marshaled, t450& unmarshaled);
void t450_marshal_cleanup(t450_marshaled& marshaled);
