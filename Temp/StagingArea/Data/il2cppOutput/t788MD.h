#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t788;
struct t788_marshaled;

 void m4066 (t788 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t788_marshal(const t788& unmarshaled, t788_marshaled& marshaled);
void t788_marshal_back(const t788_marshaled& marshaled, t788& unmarshaled);
void t788_marshal_cleanup(t788_marshaled& marshaled);
