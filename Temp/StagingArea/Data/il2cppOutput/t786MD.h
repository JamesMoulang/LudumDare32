#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t786;
struct t786_marshaled;
#include "t787.h"

 void m4065 (t786 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t786_marshal(const t786& unmarshaled, t786_marshaled& marshaled);
void t786_marshal_back(const t786_marshaled& marshaled, t786& unmarshaled);
void t786_marshal_cleanup(t786_marshaled& marshaled);
