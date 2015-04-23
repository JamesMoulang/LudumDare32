#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t823;
struct t823_marshaled;

void t823_marshal(const t823& unmarshaled, t823_marshaled& marshaled);
void t823_marshal_back(const t823_marshaled& marshaled, t823& unmarshaled);
void t823_marshal_cleanup(t823_marshaled& marshaled);
