#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t532;
struct t532_marshaled;
struct t18;

 t18* m2792 (t532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2793 (t532 * __this, t18* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t18* m2794 (t532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2795 (t532 * __this, t18* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t532_marshal(const t532& unmarshaled, t532_marshaled& marshaled);
void t532_marshal_back(const t532_marshaled& marshaled, t532& unmarshaled);
void t532_marshal_cleanup(t532_marshaled& marshaled);
