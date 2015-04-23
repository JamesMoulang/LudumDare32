#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t387;
struct t387_marshaled;

 void m1822 (t387 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t387_marshal(const t387& unmarshaled, t387_marshaled& marshaled);
void t387_marshal_back(const t387_marshaled& marshaled, t387& unmarshaled);
void t387_marshal_cleanup(t387_marshaled& marshaled);
