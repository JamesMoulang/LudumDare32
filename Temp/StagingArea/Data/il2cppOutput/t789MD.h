#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t789;
struct t789_marshaled;

void t789_marshal(const t789& unmarshaled, t789_marshaled& marshaled);
void t789_marshal_back(const t789_marshaled& marshaled, t789& unmarshaled);
void t789_marshal_cleanup(t789_marshaled& marshaled);
