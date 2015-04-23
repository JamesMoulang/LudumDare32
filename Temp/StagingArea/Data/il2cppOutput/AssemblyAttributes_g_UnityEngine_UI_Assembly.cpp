#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t438_TI;
#include "t438.h"
#include "t438MD.h"
extern MethodInfo m2154_MI;
extern TypeInfo t439_TI;
#include "t439.h"
#include "t439MD.h"
extern MethodInfo m2155_MI;
extern TypeInfo t440_TI;
#include "t440.h"
#include "t440MD.h"
extern MethodInfo m2156_MI;
extern TypeInfo t441_TI;
#include "t441.h"
#include "t441MD.h"
extern MethodInfo m2157_MI;
extern TypeInfo t442_TI;
#include "t442.h"
#include "t442MD.h"
extern MethodInfo m2158_MI;
extern TypeInfo t443_TI;
#include "t443.h"
#include "t443MD.h"
extern MethodInfo m2159_MI;
extern TypeInfo t69_TI;
#include "t69.h"
#include "t69MD.h"
extern MethodInfo m208_MI;
extern TypeInfo t444_TI;
#include "t444.h"
#include "t444MD.h"
extern MethodInfo m2160_MI;
extern TypeInfo t445_TI;
#include "t445.h"
#include "t445MD.h"
extern MethodInfo m2161_MI;
extern TypeInfo t446_TI;
#include "t446.h"
#include "t446MD.h"
extern MethodInfo m2162_MI;
extern TypeInfo t447_TI;
#include "t447.h"
#include "t447MD.h"
extern MethodInfo m2163_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (&t438_TI);
		m2154(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2154_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t439 * tmp;
		tmp = (t439 *)il2cpp_codegen_object_new (&t439_TI);
		m2155(tmp, il2cpp_codegen_string_new_wrapper(""), &m2155_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t440 * tmp;
		tmp = (t440 *)il2cpp_codegen_object_new (&t440_TI);
		m2156(tmp, il2cpp_codegen_string_new_wrapper(""), &m2156_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t441 * tmp;
		tmp = (t441 *)il2cpp_codegen_object_new (&t441_TI);
		m2157(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2157_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t442 * tmp;
		tmp = (t442 *)il2cpp_codegen_object_new (&t442_TI);
		m2158(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2158_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t443 * tmp;
		tmp = (t443 *)il2cpp_codegen_object_new (&t443_TI);
		m2159(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2159_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t69 * tmp;
		tmp = (t69 *)il2cpp_codegen_object_new (&t69_TI);
		m208(tmp, &m208_MI);
		extern MethodInfo m209_MI;
		m209(tmp, true, &m209_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t444 * tmp;
		tmp = (t444 *)il2cpp_codegen_object_new (&t444_TI);
		m2160(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2160_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t445 * tmp;
		tmp = (t445 *)il2cpp_codegen_object_new (&t445_TI);
		m2161(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2161_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m2162(tmp, false, &m2162_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t447 * tmp;
		tmp = (t447 *)il2cpp_codegen_object_new (&t447_TI);
		m2163(tmp, il2cpp_codegen_string_new_wrapper(""), &m2163_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
