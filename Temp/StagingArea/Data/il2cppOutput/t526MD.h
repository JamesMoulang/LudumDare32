#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t526;
struct t526_marshaled;
struct t527;

 void m2766 (t526 * __this, t527* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2767 (t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2768 (t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2769 (t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2770 (t526 * __this, t527* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t526_marshal(const t526& unmarshaled, t526_marshaled& marshaled);
void t526_marshal_back(const t526_marshaled& marshaled, t526& unmarshaled);
void t526_marshal_cleanup(t526_marshaled& marshaled);
