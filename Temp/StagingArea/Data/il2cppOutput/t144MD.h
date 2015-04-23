#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t144;
struct t144_marshaled;
#include "t59.h"
#include "t336.h"

 int32_t m1535 (t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t59  m1537 (t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m1536 (t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t144_marshal(const t144& unmarshaled, t144_marshaled& marshaled);
void t144_marshal_back(const t144_marshaled& marshaled, t144& unmarshaled);
void t144_marshal_cleanup(t144_marshaled& marshaled);
