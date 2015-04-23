#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t457;
struct t457_marshaled;

 void m2701 (t457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t457_marshal(const t457& unmarshaled, t457_marshaled& marshaled);
void t457_marshal_back(const t457_marshaled& marshaled, t457& unmarshaled);
void t457_marshal_cleanup(t457_marshaled& marshaled);
