#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t816;
struct t816_marshaled;

void t816_marshal(const t816& unmarshaled, t816_marshaled& marshaled);
void t816_marshal_back(const t816_marshaled& marshaled, t816& unmarshaled);
void t816_marshal_cleanup(t816_marshaled& marshaled);
