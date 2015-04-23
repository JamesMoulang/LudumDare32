#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t924;
struct t924_marshaled;

void t924_marshal(const t924& unmarshaled, t924_marshaled& marshaled);
void t924_marshal_back(const t924_marshaled& marshaled, t924& unmarshaled);
void t924_marshal_cleanup(t924_marshaled& marshaled);
