#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t501;
struct t501_marshaled;

void t501_marshal(const t501& unmarshaled, t501_marshaled& marshaled);
void t501_marshal_back(const t501_marshaled& marshaled, t501& unmarshaled);
void t501_marshal_cleanup(t501_marshaled& marshaled);
