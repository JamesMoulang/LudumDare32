#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t672_TI;
#include "t672.h"
#include "t672MD.h"
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t69_TI;
#include "t69.h"
#include "t69MD.h"
extern MethodInfo m208_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t673_TI;
#include "t673.h"
#include "t673MD.h"
extern MethodInfo m3166_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
extern TypeInfo t672_TI;
extern MethodInfo m3165_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3165_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3165_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3165_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3165_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3165_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3165_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3165_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t69 * tmp;
		tmp = (t69 *)il2cpp_codegen_object_new (&t69_TI);
		m208(tmp, &m208_MI);
		extern MethodInfo m209_MI;
		m209(tmp, true, &m209_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3165_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3166(tmp, &m3166_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3165_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3165_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3165_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3165_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
