#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t446_TI;
#include "t446.h"
#include "t446MD.h"
extern MethodInfo m2162_MI;
extern TypeInfo t69_TI;
#include "t69.h"
#include "t69MD.h"
extern MethodInfo m208_MI;
extern TypeInfo t672_TI;
#include "t672.h"
#include "t672MD.h"
extern MethodInfo m3165_MI;
extern TypeInfo t694_TI;
#include "t694.h"
#include "t694MD.h"
extern MethodInfo m3189_MI;
extern TypeInfo t695_TI;
#include "t695.h"
#include "t695MD.h"
extern MethodInfo m3190_MI;
extern TypeInfo t443_TI;
#include "t443.h"
#include "t443MD.h"
extern MethodInfo m2159_MI;
extern TypeInfo t441_TI;
#include "t441.h"
#include "t441MD.h"
extern MethodInfo m2157_MI;
extern TypeInfo t691_TI;
#include "t691.h"
#include "t691MD.h"
extern MethodInfo m3186_MI;
extern TypeInfo t438_TI;
#include "t438.h"
#include "t438MD.h"
extern MethodInfo m2154_MI;
extern TypeInfo t442_TI;
#include "t442.h"
#include "t442MD.h"
extern MethodInfo m2158_MI;
extern TypeInfo t439_TI;
#include "t439.h"
#include "t439MD.h"
extern MethodInfo m2155_MI;
extern TypeInfo t690_TI;
#include "t690.h"
#include "t690MD.h"
extern MethodInfo m3185_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m2162(tmp, false, &m2162_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t69 * tmp;
		tmp = (t69 *)il2cpp_codegen_object_new (&t69_TI);
		m208(tmp, &m208_MI);
		extern MethodInfo m209_MI;
		m209(tmp, true, &m209_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t672 * tmp;
		tmp = (t672 *)il2cpp_codegen_object_new (&t672_TI);
		m3165(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3165_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t694 * tmp;
		tmp = (t694 *)il2cpp_codegen_object_new (&t694_TI);
		m3189(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3189_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t695 * tmp;
		tmp = (t695 *)il2cpp_codegen_object_new (&t695_TI);
		m3190(tmp, true, &m3190_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t443 * tmp;
		tmp = (t443 *)il2cpp_codegen_object_new (&t443_TI);
		m2159(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2159_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t441 * tmp;
		tmp = (t441 *)il2cpp_codegen_object_new (&t441_TI);
		m2157(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2157_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t691 * tmp;
		tmp = (t691 *)il2cpp_codegen_object_new (&t691_TI);
		m3186(tmp, true, &m3186_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (&t438_TI);
		m2154(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2154_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t442 * tmp;
		tmp = (t442 *)il2cpp_codegen_object_new (&t442_TI);
		m2158(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2158_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t439 * tmp;
		tmp = (t439 *)il2cpp_codegen_object_new (&t439_TI);
		m2155(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2155_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t690 * tmp;
		tmp = (t690 *)il2cpp_codegen_object_new (&t690_TI);
		m3185(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3185_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
