#pragma once 
#include "config.h"

#ifdef HAVE_LUA52_H
#include <lua5.2/lua.h>
#include <lua5.2/lauxlib.h>
#include <lua5.2/lualib.h>
#elif defined(HAVE_LUA_H)
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#else
#error "Lua headers not found!"
#endif
