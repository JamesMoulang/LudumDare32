#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t674.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo t674_TI;
#include "t674MD.h"


#include "t29.h"

// Metadata Definition <Module>
static MethodInfo* t674_MIs[] =
{
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t674_0_0_0;
extern Il2CppType t674_1_0_0;
struct t674;
extern TypeInfo t674_TI;
TypeInfo t674_TI = 
{
	&g_System_Core_dll_Image, NULL, "<Module>", "", t674_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t674_TI, NULL, NULL, &EmptyCustomAttributesCache, &t674_TI, &t674_0_0_0, &t674_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t674), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t673_TI;
#include "t673MD.h"

#include "t30.h"
#include "t498MD.h"
extern MethodInfo m3007_MI;


extern MethodInfo m3166_MI;
 void m3166 (t673 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.ExtensionAttribute
extern TypeInfo t673_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m3166_MI = 
{
	".ctor", (methodPointerType)&m3166, &t673_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
static MethodInfo* t673_MIs[] =
{
	&m3166_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t673_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t673_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
#include "t626.h"
#include "t626MD.h"
extern MethodInfo m3039_MI;
void t673_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 69, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t673__CustomAttributeCache = {
1,
NULL,
&t673_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t673_0_0_0;
extern Il2CppType t673_1_0_0;
extern TypeInfo t498_TI;
struct t673;
extern TypeInfo t673_TI;
extern CustomAttributesCache t673__CustomAttributeCache;
TypeInfo t673_TI = 
{
	&g_System_Core_dll_Image, NULL, "ExtensionAttribute", "System.Runtime.CompilerServices", t673_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t673_TI, NULL, t673_VT, &t673__CustomAttributeCache, &t673_TI, &t673_0_0_0, &t673_1_0_0, t673_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t673), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t675_TI;
#include "t675MD.h"

#include "t28.h"
#include "t18.h"
#include "t350.h"
extern TypeInfo t350_TI;
#include "t350MD.h"
extern MethodInfo m3074_MI;


extern MethodInfo m3167_MI;
 void m3167 (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t350 * L_0 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_0, (t18*) &_stringLiteral200, &m3074_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		if (p1)
		{
			goto IL_0022;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral201, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0022:
	{
		return;
	}
}
// Metadata Definition System.Linq.Check
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t675_m3167_ParameterInfos[] = 
{
	{"source", 0, 134217729, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"predicate", 1, 134217730, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t675_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3167_MI = 
{
	"SourceAndPredicate", (methodPointerType)&m3167, &t675_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t675_m3167_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 2, NULL, (methodPointerType)NULL};
static MethodInfo* t675_MIs[] =
{
	&m3167_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t675_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t675_0_0_0;
extern Il2CppType t675_1_0_0;
extern TypeInfo t28_TI;
struct t675;
extern TypeInfo t675_TI;
TypeInfo t675_TI = 
{
	&g_System_Core_dll_Image, NULL, "Check", "System.Linq", t675_MIs, NULL, NULL, NULL, &t28_TI, NULL, NULL, &t675_TI, NULL, t675_VT, &EmptyCustomAttributesCache, &t675_TI, &t675_0_0_0, &t675_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t675), 0, -1, 0, 0, -1, 1048960, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t676.h"
extern Il2CppGenericContainer t676_IGC;
extern TypeInfo t676_gp_TSource_0_TI;
Il2CppGenericParamFull t676_gp_TSource_0_TI_GenericParamFull = { { &t676_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* t676_IGPA[1] = 
{
	&t676_gp_TSource_0_TI_GenericParamFull,
};
extern TypeInfo t676_TI;
Il2CppGenericContainer t676_IGC = { { NULL, NULL }, NULL, &t676_TI, 1, 0, t676_IGPA };
extern TypeInfo t676_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3170_MI = 
{
	".ctor", NULL, &t676_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t676_gp_0_0_0_0;
extern CustomAttributesCache t676__CustomAttributeCache_m3171;
MethodInfo m3171_MI = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current", NULL, &t676_TI, &t676_gp_0_0_0_0, NULL, NULL, &t676__CustomAttributeCache_m3171, 2529, 0, 9, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t28_0_0_0;
extern CustomAttributesCache t676__CustomAttributeCache_m3172;
MethodInfo m3172_MI = 
{
	"System.Collections.IEnumerator.get_Current", NULL, &t676_TI, &t28_0_0_0, NULL, NULL, &t676__CustomAttributeCache_m3172, 2529, 0, 4, 0, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t158_0_0_0;
extern CustomAttributesCache t676__CustomAttributeCache_m3173;
MethodInfo m3173_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", NULL, &t676_TI, &t158_0_0_0, NULL, NULL, &t676__CustomAttributeCache_m3173, 481, 0, 7, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t679_0_0_0;
extern CustomAttributesCache t676__CustomAttributeCache_m3174;
MethodInfo m3174_MI = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", NULL, &t676_TI, &t679_0_0_0, NULL, NULL, &t676__CustomAttributeCache_m3174, 481, 0, 8, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t31_0_0_0;
MethodInfo m3175_MI = 
{
	"MoveNext", NULL, &t676_TI, &t31_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern TypeInfo t676_TI;
extern Il2CppType t30_0_0_0;
extern CustomAttributesCache t676__CustomAttributeCache_m3176;
MethodInfo m3176_MI = 
{
	"Dispose", NULL, &t676_TI, &t30_0_0_0, NULL, NULL, &t676__CustomAttributeCache_m3176, 486, 0, 6, 0, false, false, 11, NULL, (methodPointerType)NULL};
static MethodInfo* t676_MIs[] =
{
	&m3170_MI,
	&m3171_MI,
	&m3172_MI,
	&m3173_MI,
	&m3174_MI,
	&m3175_MI,
	&m3176_MI,
	NULL
};
extern MethodInfo m3171_MI;
static PropertyInfo t676____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&t676_TI, "System.Collections.Generic.IEnumerator<TSource>.Current", &m3171_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m3172_MI;
static PropertyInfo t676____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t676_TI, "System.Collections.IEnumerator.Current", &m3172_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t676_PIs[] =
{
	&t676____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&t676____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType t680_0_0_3;
FieldInfo t676_f0_FieldInfo = 
{
	"source", &t680_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t679_0_0_3;
FieldInfo t676_f1_FieldInfo = 
{
	"<$s_92>__0", &t679_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t676_gp_0_0_0_3;
FieldInfo t676_f2_FieldInfo = 
{
	"<element>__1", &t676_gp_0_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t681_0_0_3;
FieldInfo t676_f3_FieldInfo = 
{
	"predicate", &t681_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_3;
FieldInfo t676_f4_FieldInfo = 
{
	"$PC", &t47_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t676_gp_0_0_0_3;
FieldInfo t676_f5_FieldInfo = 
{
	"$current", &t676_gp_0_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t680_0_0_3;
FieldInfo t676_f6_FieldInfo = 
{
	"<$>source", &t680_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
extern Il2CppType t681_0_0_3;
FieldInfo t676_f7_FieldInfo = 
{
	"<$>predicate", &t681_0_0_3, &t676_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t676_FIs[] =
{
	&t676_f0_FieldInfo,
	&t676_f1_FieldInfo,
	&t676_f2_FieldInfo,
	&t676_f3_FieldInfo,
	&t676_f4_FieldInfo,
	&t676_f5_FieldInfo,
	&t676_f6_FieldInfo,
	&t676_f7_FieldInfo,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t676_0_0_0;
extern Il2CppType t676_1_0_0;
struct t676;
extern TypeInfo t676_TI;
extern TypeInfo t416_TI;
TypeInfo t676_TI = 
{
	&g_System_Core_dll_Image, NULL, "<CreateWhereIterator>c__Iterator1D`1", "", t676_MIs, t676_PIs, t676_FIs, NULL, NULL, NULL, &t416_TI, &t676_TI, NULL, NULL, NULL, NULL, &t676_0_0_0, &t676_1_0_0, NULL, NULL, &t676_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 8, 0, 0, 0, 0, 0};
extern TypeInfo t68_TI;
#include "t68.h"
#include "t68MD.h"
extern MethodInfo m207_MI;
void t676_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t68 * tmp;
		tmp = (t68 *)il2cpp_codegen_object_new (&t68_TI);
		m207(tmp, &m207_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t354_TI;
#include "t354.h"
#include "t354MD.h"
extern MethodInfo m1625_MI;
void t676_CustomAttributesCacheGenerator_m3171(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t354 * tmp;
		tmp = (t354 *)il2cpp_codegen_object_new (&t354_TI);
		m1625(tmp, &m1625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t354_TI;
extern MethodInfo m1625_MI;
void t676_CustomAttributesCacheGenerator_m3172(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t354 * tmp;
		tmp = (t354 *)il2cpp_codegen_object_new (&t354_TI);
		m1625(tmp, &m1625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t354_TI;
extern MethodInfo m1625_MI;
void t676_CustomAttributesCacheGenerator_m3173(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t354 * tmp;
		tmp = (t354 *)il2cpp_codegen_object_new (&t354_TI);
		m1625(tmp, &m1625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t354_TI;
extern MethodInfo m1625_MI;
void t676_CustomAttributesCacheGenerator_m3174(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t354 * tmp;
		tmp = (t354 *)il2cpp_codegen_object_new (&t354_TI);
		m1625(tmp, &m1625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t354_TI;
extern MethodInfo m1625_MI;
void t676_CustomAttributesCacheGenerator_m3176(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t354 * tmp;
		tmp = (t354 *)il2cpp_codegen_object_new (&t354_TI);
		m1625(tmp, &m1625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t676__CustomAttributeCache = {
1,
NULL,
&t676_CustomAttributesCacheGenerator
};
CustomAttributesCache t676__CustomAttributeCache_m3171 = {
1,
NULL,
&t676_CustomAttributesCacheGenerator_m3171
};
CustomAttributesCache t676__CustomAttributeCache_m3172 = {
1,
NULL,
&t676_CustomAttributesCacheGenerator_m3172
};
CustomAttributesCache t676__CustomAttributeCache_m3173 = {
1,
NULL,
&t676_CustomAttributesCacheGenerator_m3173
};
CustomAttributesCache t676__CustomAttributeCache_m3174 = {
1,
NULL,
&t676_CustomAttributesCacheGenerator_m3174
};
CustomAttributesCache t676__CustomAttributeCache_m3176 = {
1,
NULL,
&t676_CustomAttributesCacheGenerator_m3176
};
#include "t416.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t416_TI;
#include "t416MD.h"



// Metadata Definition System.Linq.Enumerable
extern TypeInfo t416_TI;
extern Il2CppType t682_0_0_0;
extern Il2CppGenericContainer m3177_IGC;
extern TypeInfo m3177_gp_TSource_0_TI;
Il2CppGenericParamFull m3177_gp_TSource_0_TI_GenericParamFull = { { &m3177_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3177_IGPA[1] = 
{
	&m3177_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3177_MI;
Il2CppGenericContainer m3177_IGC = { { NULL, NULL }, NULL, &m3177_MI, 1, 1, m3177_IGPA };
extern CustomAttributesCache t416__CustomAttributeCache_m3177;
MethodInfo m3177_MI = 
{
	"Where", NULL, &t416_TI, &t682_0_0_0, NULL, NULL, &t416__CustomAttributeCache_m3177, 150, 0, 255, 0, true, false, 3, NULL, (methodPointerType)NULL};
extern TypeInfo t416_TI;
extern Il2CppType t684_0_0_0;
extern Il2CppGenericContainer m3178_IGC;
extern TypeInfo m3178_gp_TSource_0_TI;
Il2CppGenericParamFull m3178_gp_TSource_0_TI_GenericParamFull = { { &m3178_IGC, 0}, {NULL, "TSource", 0, 0, NULL} };
static Il2CppGenericParamFull* m3178_IGPA[1] = 
{
	&m3178_gp_TSource_0_TI_GenericParamFull,
};
extern MethodInfo m3178_MI;
Il2CppGenericContainer m3178_IGC = { { NULL, NULL }, NULL, &m3178_MI, 1, 1, m3178_IGPA };
extern CustomAttributesCache t416__CustomAttributeCache_m3178;
MethodInfo m3178_MI = 
{
	"CreateWhereIterator", NULL, &t416_TI, &t684_0_0_0, NULL, NULL, &t416__CustomAttributeCache_m3178, 145, 0, 255, 0, true, false, 4, NULL, (methodPointerType)NULL};
static MethodInfo* t416_MIs[] =
{
	&m3177_MI,
	&m3178_MI,
	NULL
};
extern TypeInfo t676_TI;
static TypeInfo* t416_TI__nestedTypes[2] =
{
	&t676_TI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t416_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t673_TI;
extern MethodInfo m3166_MI;
void t416_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3166(tmp, &m3166_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t673_TI;
extern MethodInfo m3166_MI;
void t416_CustomAttributesCacheGenerator_m3177(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t673 * tmp;
		tmp = (t673 *)il2cpp_codegen_object_new (&t673_TI);
		m3166(tmp, &m3166_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t354_TI;
extern MethodInfo m1625_MI;
void t416_CustomAttributesCacheGenerator_m3178(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t354 * tmp;
		tmp = (t354 *)il2cpp_codegen_object_new (&t354_TI);
		m1625(tmp, &m1625_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t416__CustomAttributeCache = {
1,
NULL,
&t416_CustomAttributesCacheGenerator
};
CustomAttributesCache t416__CustomAttributeCache_m3177 = {
1,
NULL,
&t416_CustomAttributesCacheGenerator_m3177
};
CustomAttributesCache t416__CustomAttributeCache_m3178 = {
1,
NULL,
&t416_CustomAttributesCacheGenerator_m3178
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t416_0_0_0;
extern Il2CppType t416_1_0_0;
extern TypeInfo t28_TI;
struct t416;
extern TypeInfo t416_TI;
extern CustomAttributesCache t416__CustomAttributeCache;
extern CustomAttributesCache t416__CustomAttributeCache_m3177;
extern CustomAttributesCache t416__CustomAttributeCache_m3178;
TypeInfo t416_TI = 
{
	&g_System_Core_dll_Image, NULL, "Enumerable", "System.Linq", t416_MIs, NULL, NULL, NULL, &t28_TI, t416_TI__nestedTypes, NULL, &t416_TI, NULL, t416_VT, &t416__CustomAttributeCache, &t416_TI, &t416_0_0_0, &t416_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t416), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 1, 4, 0, 0};
#include "t13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t13_TI;
#include "t13MD.h"

#include "t49.h"
#include "t91.h"


extern MethodInfo m150_MI;
 void m150 (t13 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m153_MI;
 void m153 (t13 * __this, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t28 * __this, MethodInfo* method);
	if (__this->f9)
		m153((t13 *)__this->f9 , method);
	((FunctionPointerType)__this->f0)(__this->f2, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t13(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3168_MI;
 t28 * m3168 (t13 * __this, t91 * p0, t28 * p1, MethodInfo* method){
	void *__d_args[1] = {0};
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3169_MI;
 void m3169 (t13 * __this, t28 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Action
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t13_m150_ParameterInfos[] = 
{
	{"object", 0, 134217735, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217736, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t13_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m150_MI = 
{
	".ctor", (methodPointerType)&m150, &t13_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t13_m150_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 12, NULL, (methodPointerType)NULL};
extern TypeInfo t13_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m153_MI = 
{
	"Invoke", (methodPointerType)&m153, &t13_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t13_m3168_ParameterInfos[] = 
{
	{"callback", 0, 134217737, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 1, 134217738, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t13_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3168_MI = 
{
	"BeginInvoke", (methodPointerType)&m3168, &t13_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28, t13_m3168_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t13_m3169_ParameterInfos[] = 
{
	{"result", 0, 134217739, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t13_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3169_MI = 
{
	"EndInvoke", (methodPointerType)&m3169, &t13_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t13_m3169_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t13_MIs[] =
{
	&m150_MI,
	&m153_MI,
	&m3168_MI,
	&m3169_MI,
	NULL
};
extern MethodInfo m1813_MI;
extern MethodInfo m97_MI;
extern MethodInfo m1814_MI;
extern MethodInfo m206_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1816_MI;
extern MethodInfo m1815_MI;
extern MethodInfo m1817_MI;
extern MethodInfo m1818_MI;
extern MethodInfo m1819_MI;
extern MethodInfo m153_MI;
extern MethodInfo m3168_MI;
extern MethodInfo m3169_MI;
static MethodInfo* t13_VT[] =
{
	&m1813_MI,
	&m97_MI,
	&m1814_MI,
	&m206_MI,
	&m1815_MI,
	&m1816_MI,
	&m1815_MI,
	&m1817_MI,
	&m1818_MI,
	&m1819_MI,
	&m153_MI,
	&m3168_MI,
	&m3169_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t13_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_1_0_0;
extern TypeInfo t221_TI;
struct t13;
extern TypeInfo t13_TI;
TypeInfo t13_TI = 
{
	&g_System_Core_dll_Image, NULL, "Action", "System", t13_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t13_TI, NULL, t13_VT, &EmptyCustomAttributesCache, &t13_TI, &t13_0_0_0, &t13_1_0_0, t13_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t13, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t13), 0, sizeof(methodPointerType), 0, 0, -1, 257, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t677.h"
extern Il2CppGenericContainer t677_IGC;
extern TypeInfo t677_gp_T_0_TI;
Il2CppGenericParamFull t677_gp_T_0_TI_GenericParamFull = { { &t677_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t677_gp_TResult_1_TI;
Il2CppGenericParamFull t677_gp_TResult_1_TI_GenericParamFull = { { &t677_IGC, 1}, {NULL, "TResult", 0, 0, NULL} };
static Il2CppGenericParamFull* t677_IGPA[2] = 
{
	&t677_gp_T_0_TI_GenericParamFull,
	&t677_gp_TResult_1_TI_GenericParamFull,
};
extern TypeInfo t677_TI;
Il2CppGenericContainer t677_IGC = { { NULL, NULL }, NULL, &t677_TI, 2, 0, t677_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t677_m3179_ParameterInfos[] = 
{
	{"object", 0, 134217740, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217741, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t677_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3179_MI = 
{
	".ctor", NULL, &t677_TI, &t30_0_0_0, NULL, t677_m3179_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 16, NULL, (methodPointerType)NULL};
extern Il2CppType t677_gp_0_0_0_0;
static ParameterInfo t677_m3180_ParameterInfos[] = 
{
	{"arg1", 0, 134217742, &EmptyCustomAttributesCache, &t677_gp_0_0_0_0},
};
extern TypeInfo t677_TI;
extern Il2CppType t677_gp_1_0_0_0;
MethodInfo m3180_MI = 
{
	"Invoke", NULL, &t677_TI, &t677_gp_1_0_0_0, NULL, t677_m3180_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 17, NULL, (methodPointerType)NULL};
extern Il2CppType t677_gp_0_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t677_m3181_ParameterInfos[] = 
{
	{"arg1", 0, 134217743, &EmptyCustomAttributesCache, &t677_gp_0_0_0_0},
	{"callback", 1, 134217744, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217745, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t677_TI;
extern Il2CppType t90_0_0_0;
MethodInfo m3181_MI = 
{
	"BeginInvoke", NULL, &t677_TI, &t90_0_0_0, NULL, t677_m3181_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 18, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t677_m3182_ParameterInfos[] = 
{
	{"result", 0, 134217746, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t677_TI;
extern Il2CppType t677_gp_1_0_0_0;
MethodInfo m3182_MI = 
{
	"EndInvoke", NULL, &t677_TI, &t677_gp_1_0_0_0, NULL, t677_m3182_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 19, NULL, (methodPointerType)NULL};
static MethodInfo* t677_MIs[] =
{
	&m3179_MI,
	&m3180_MI,
	&m3181_MI,
	&m3182_MI,
	NULL
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t677_0_0_0;
extern Il2CppType t677_1_0_0;
struct t677;
extern TypeInfo t677_TI;
TypeInfo t677_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t677_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t677_TI, NULL, NULL, NULL, NULL, &t677_0_0_0, &t677_1_0_0, NULL, NULL, &t677_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
