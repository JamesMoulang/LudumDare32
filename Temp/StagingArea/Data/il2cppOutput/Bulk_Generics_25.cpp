#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2727.h"
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
extern TypeInfo t2727_TI;
#include "t2727MD.h"

#include "t28.h"
#include "t727.h"
#include "t47.h"
#include "t18.h"
#include "t1287.h"
#include "t30.h"
#include "t29.h"
#include "t31.h"
extern TypeInfo t2727_TI;
extern TypeInfo t727_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
#include "t29MD.h"
extern MethodInfo m15532_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20794_MI;
struct t29;
#include "t1251.h"
 t727  m20794 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m20794_MI;


extern MethodInfo m15528_MI;
 void m15528 (t2727 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15529_MI;
 t28 * m15529 (t2727 * __this, MethodInfo* method){
	{
		t727  L_0 = m15532(__this, &m15532_MI);
		t727  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t727_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15530_MI;
 void m15530 (t2727 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15531_MI;
 bool m15531 (t2727 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		t29 * L_1 = (__this->f0);
		int32_t L_2 = m3839(L_1, &m3839_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->f1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern MethodInfo m15532_MI;
 t727  m15532 (t2727 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		t1287 * L_1 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7034(L_1, (t18*) &_stringLiteral378, &m7034_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		t1287 * L_3 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7034(L_3, (t18*) &_stringLiteral379, &m7034_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		t29 * L_4 = (__this->f0);
		t29 * L_5 = (__this->f0);
		int32_t L_6 = m3839(L_5, &m3839_MI);
		int32_t L_7 = (__this->f1);
		t727  L_8 = m20794(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m20794_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UIntPtr>
extern Il2CppType t29_0_0_1;
FieldInfo t2727_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2727_TI, offsetof(t2727, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2727_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2727_TI, offsetof(t2727, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2727_FIs[] =
{
	&t2727_f0_FieldInfo,
	&t2727_f1_FieldInfo,
	NULL
};
extern MethodInfo m15529_MI;
static PropertyInfo t2727____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2727_TI, "System.Collections.IEnumerator.Current", &m15529_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15532_MI;
static PropertyInfo t2727____Current_PropertyInfo = 
{
	&t2727_TI, "Current", &m15532_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2727_PIs[] =
{
	&t2727____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2727____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2727_m15528_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2727_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15528_MI = 
{
	".ctor", (methodPointerType)&m15528, &t2727_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2727_m15528_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2727_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15529_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15529, &t2727_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2727_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15530_MI = 
{
	"Dispose", (methodPointerType)&m15530, &t2727_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2727_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15531_MI = 
{
	"MoveNext", (methodPointerType)&m15531, &t2727_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2727_TI;
extern Il2CppType t727_0_0_0;
extern void* RuntimeInvoker_t727 (MethodInfo* method, void* obj, void** args);
MethodInfo m15532_MI = 
{
	"get_Current", (methodPointerType)&m15532, &t2727_TI, &t727_0_0_0, RuntimeInvoker_t727, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2727_MIs[] =
{
	&m15528_MI,
	&m15529_MI,
	&m15530_MI,
	&m15531_MI,
	&m15532_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15529_MI;
extern MethodInfo m15531_MI;
extern MethodInfo m15530_MI;
extern MethodInfo m15532_MI;
static MethodInfo* t2727_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15529_MI,
	&m15531_MI,
	&m15530_MI,
	&m15532_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3647_TI;
static TypeInfo* t2727_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3647_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3647_TI;
static Il2CppInterfaceOffsetPair t2727_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3647_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2727_0_0_0;
extern Il2CppType t2727_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2727_TI;
extern Il2CppGenericClass t2727_GC;
extern TypeInfo t29_TI;
TypeInfo t2727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2727_MIs, t2727_PIs, t2727_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2727_TI, t2727_ITIs, t2727_VT, &EmptyCustomAttributesCache, &t2727_TI, &t2727_0_0_0, &t2727_1_0_0, t2727_IOs, &t2727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2727)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4709_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.UIntPtr>
extern MethodInfo m27499_MI;
static PropertyInfo t4709____Count_PropertyInfo = 
{
	&t4709_TI, "Count", &m27499_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27500_MI;
static PropertyInfo t4709____IsReadOnly_PropertyInfo = 
{
	&t4709_TI, "IsReadOnly", &m27500_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4709_PIs[] =
{
	&t4709____Count_PropertyInfo,
	&t4709____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4709_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27499_MI = 
{
	"get_Count", NULL, &t4709_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4709_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27500_MI = 
{
	"get_IsReadOnly", NULL, &t4709_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t727_0_0_0;
static ParameterInfo t4709_m27501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m27501_MI = 
{
	"Add", NULL, &t4709_TI, &t30_0_0_0, RuntimeInvoker_t30_t49, t4709_m27501_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4709_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27502_MI = 
{
	"Clear", NULL, &t4709_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t727_0_0_0;
static ParameterInfo t4709_m27503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m27503_MI = 
{
	"Contains", NULL, &t4709_TI, &t31_0_0_0, RuntimeInvoker_t31_t49, t4709_m27503_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2998_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4709_m27504_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2998_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27504_MI = 
{
	"CopyTo", NULL, &t4709_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4709_m27504_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t727_0_0_0;
static ParameterInfo t4709_m27505_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
};
extern TypeInfo t4709_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m27505_MI = 
{
	"Remove", NULL, &t4709_TI, &t31_0_0_0, RuntimeInvoker_t31_t49, t4709_m27505_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4709_MIs[] =
{
	&m27499_MI,
	&m27500_MI,
	&m27501_MI,
	&m27502_MI,
	&m27503_MI,
	&m27504_MI,
	&m27505_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4711_TI;
static TypeInfo* t4709_ITIs[] = 
{
	&t611_TI,
	&t4711_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4709_0_0_0;
extern Il2CppType t4709_1_0_0;
struct t4709;
extern TypeInfo t4709_TI;
extern Il2CppGenericClass t4709_GC;
TypeInfo t4709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4709_MIs, t4709_PIs, NULL, NULL, NULL, NULL, NULL, &t4709_TI, t4709_ITIs, NULL, &EmptyCustomAttributesCache, &t4709_TI, &t4709_0_0_0, &t4709_1_0_0, NULL, &t4709_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4711_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UIntPtr>
extern TypeInfo t4711_TI;
extern Il2CppType t3647_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27506_MI = 
{
	"GetEnumerator", NULL, &t4711_TI, &t3647_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4711_MIs[] =
{
	&m27506_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4711_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4711_0_0_0;
extern Il2CppType t4711_1_0_0;
struct t4711;
extern TypeInfo t4711_TI;
extern Il2CppGenericClass t4711_GC;
TypeInfo t4711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4711_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4711_TI, t4711_ITIs, NULL, &EmptyCustomAttributesCache, &t4711_TI, &t4711_0_0_0, &t4711_1_0_0, NULL, &t4711_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4710_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.UIntPtr>
extern MethodInfo m27507_MI;
extern MethodInfo m27508_MI;
static PropertyInfo t4710____Item_PropertyInfo = 
{
	&t4710_TI, "Item", &m27507_MI, &m27508_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4710_PIs[] =
{
	&t4710____Item_PropertyInfo,
	NULL
};
extern Il2CppType t727_0_0_0;
static ParameterInfo t4710_m27509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m27509_MI = 
{
	"IndexOf", NULL, &t4710_TI, &t47_0_0_0, RuntimeInvoker_t47_t49, t4710_m27509_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t727_0_0_0;
static ParameterInfo t4710_m27510_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m27510_MI = 
{
	"Insert", NULL, &t4710_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t49, t4710_m27510_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4710_m27511_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27511_MI = 
{
	"RemoveAt", NULL, &t4710_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4710_m27511_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4710_m27507_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t727_0_0_0;
extern void* RuntimeInvoker_t727_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27507_MI = 
{
	"get_Item", NULL, &t4710_TI, &t727_0_0_0, RuntimeInvoker_t727_t47, t4710_m27507_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t727_0_0_0;
static ParameterInfo t4710_m27508_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t727_0_0_0},
};
extern TypeInfo t4710_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m27508_MI = 
{
	"set_Item", NULL, &t4710_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t49, t4710_m27508_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4710_MIs[] =
{
	&m27509_MI,
	&m27510_MI,
	&m27511_MI,
	&m27507_MI,
	&m27508_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4709_TI;
extern TypeInfo t4711_TI;
static TypeInfo* t4710_ITIs[] = 
{
	&t611_TI,
	&t4709_TI,
	&t4711_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4710_0_0_0;
extern Il2CppType t4710_1_0_0;
struct t4710;
extern TypeInfo t4710_TI;
extern Il2CppGenericClass t4710_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4710_MIs, t4710_PIs, NULL, NULL, NULL, NULL, NULL, &t4710_TI, t4710_ITIs, NULL, &t1418__CustomAttributeCache, &t4710_TI, &t4710_0_0_0, &t4710_1_0_0, NULL, &t4710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3648_TI;

#include "t365.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Delegate>
extern MethodInfo m27512_MI;
static PropertyInfo t3648____Current_PropertyInfo = 
{
	&t3648_TI, "Current", &m27512_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3648_PIs[] =
{
	&t3648____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3648_TI;
extern Il2CppType t365_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27512_MI = 
{
	"get_Current", NULL, &t3648_TI, &t365_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3648_MIs[] =
{
	&m27512_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3648_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3648_0_0_0;
extern Il2CppType t3648_1_0_0;
struct t3648;
extern TypeInfo t3648_TI;
extern Il2CppGenericClass t3648_GC;
TypeInfo t3648_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3648_MIs, t3648_PIs, NULL, NULL, NULL, NULL, NULL, &t3648_TI, t3648_ITIs, NULL, &EmptyCustomAttributesCache, &t3648_TI, &t3648_0_0_0, &t3648_1_0_0, NULL, &t3648_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2728.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2728_TI;
#include "t2728MD.h"

extern TypeInfo t2728_TI;
extern TypeInfo t365_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15537_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20805_MI;
struct t29;
struct t29;
 t28 * m16643_gshared (t29 * __this, int32_t p0, MethodInfo* method);
#define m16643(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
#define m20805(__this, p0, method) (t365 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20805_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Delegate>
extern Il2CppType t29_0_0_1;
FieldInfo t2728_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2728_TI, offsetof(t2728, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2728_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2728_TI, offsetof(t2728, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2728_FIs[] =
{
	&t2728_f0_FieldInfo,
	&t2728_f1_FieldInfo,
	NULL
};
extern MethodInfo m15534_MI;
static PropertyInfo t2728____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2728_TI, "System.Collections.IEnumerator.Current", &m15534_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15537_MI;
static PropertyInfo t2728____Current_PropertyInfo = 
{
	&t2728_TI, "Current", &m15537_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2728_PIs[] =
{
	&t2728____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2728____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2728_m15533_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2728_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15533_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2728_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2728_m15533_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2728_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15534_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2728_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2728_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15535_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2728_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2728_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15536_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2728_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2728_TI;
extern Il2CppType t365_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15537_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2728_TI, &t365_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2728_MIs[] =
{
	&m15533_MI,
	&m15534_MI,
	&m15535_MI,
	&m15536_MI,
	&m15537_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15534_MI;
extern MethodInfo m15536_MI;
extern MethodInfo m15535_MI;
extern MethodInfo m15537_MI;
static MethodInfo* t2728_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15534_MI,
	&m15536_MI,
	&m15535_MI,
	&m15537_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3648_TI;
static TypeInfo* t2728_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3648_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3648_TI;
static Il2CppInterfaceOffsetPair t2728_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3648_TI, 7},
};
extern MethodInfo m15537_MI;
extern TypeInfo t365_TI;
extern MethodInfo m20805_MI;
static void* t2728_RGCTXData[3] = 
{
	&m15537_MI,
	&t365_TI,
	&m20805_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2728_0_0_0;
extern Il2CppType t2728_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2728_TI;
extern Il2CppGenericClass t2728_GC;
extern TypeInfo t29_TI;
TypeInfo t2728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2728_MIs, t2728_PIs, t2728_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2728_TI, t2728_ITIs, t2728_VT, &EmptyCustomAttributesCache, &t2728_TI, &t2728_0_0_0, &t2728_1_0_0, t2728_IOs, &t2728_GC, NULL, NULL, NULL, t2728_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2728)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4712_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Delegate>
extern MethodInfo m27513_MI;
static PropertyInfo t4712____Count_PropertyInfo = 
{
	&t4712_TI, "Count", &m27513_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27514_MI;
static PropertyInfo t4712____IsReadOnly_PropertyInfo = 
{
	&t4712_TI, "IsReadOnly", &m27514_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4712_PIs[] =
{
	&t4712____Count_PropertyInfo,
	&t4712____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4712_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27513_MI = 
{
	"get_Count", NULL, &t4712_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4712_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27514_MI = 
{
	"get_IsReadOnly", NULL, &t4712_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t365_0_0_0;
static ParameterInfo t4712_m27515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27515_MI = 
{
	"Add", NULL, &t4712_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4712_m27515_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4712_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27516_MI = 
{
	"Clear", NULL, &t4712_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t365_0_0_0;
static ParameterInfo t4712_m27517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27517_MI = 
{
	"Contains", NULL, &t4712_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4712_m27517_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t728_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4712_m27518_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t728_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27518_MI = 
{
	"CopyTo", NULL, &t4712_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4712_m27518_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t365_0_0_0;
static ParameterInfo t4712_m27519_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t4712_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27519_MI = 
{
	"Remove", NULL, &t4712_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4712_m27519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4712_MIs[] =
{
	&m27513_MI,
	&m27514_MI,
	&m27515_MI,
	&m27516_MI,
	&m27517_MI,
	&m27518_MI,
	&m27519_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4714_TI;
static TypeInfo* t4712_ITIs[] = 
{
	&t611_TI,
	&t4714_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4712_0_0_0;
extern Il2CppType t4712_1_0_0;
struct t4712;
extern TypeInfo t4712_TI;
extern Il2CppGenericClass t4712_GC;
TypeInfo t4712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4712_MIs, t4712_PIs, NULL, NULL, NULL, NULL, NULL, &t4712_TI, t4712_ITIs, NULL, &EmptyCustomAttributesCache, &t4712_TI, &t4712_0_0_0, &t4712_1_0_0, NULL, &t4712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4714_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Delegate>
extern TypeInfo t4714_TI;
extern Il2CppType t3648_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27520_MI = 
{
	"GetEnumerator", NULL, &t4714_TI, &t3648_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4714_MIs[] =
{
	&m27520_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4714_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4714_0_0_0;
extern Il2CppType t4714_1_0_0;
struct t4714;
extern TypeInfo t4714_TI;
extern Il2CppGenericClass t4714_GC;
TypeInfo t4714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4714_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4714_TI, t4714_ITIs, NULL, &EmptyCustomAttributesCache, &t4714_TI, &t4714_0_0_0, &t4714_1_0_0, NULL, &t4714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4713_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Delegate>
extern MethodInfo m27521_MI;
extern MethodInfo m27522_MI;
static PropertyInfo t4713____Item_PropertyInfo = 
{
	&t4713_TI, "Item", &m27521_MI, &m27522_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4713_PIs[] =
{
	&t4713____Item_PropertyInfo,
	NULL
};
extern Il2CppType t365_0_0_0;
static ParameterInfo t4713_m27523_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27523_MI = 
{
	"IndexOf", NULL, &t4713_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4713_m27523_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t365_0_0_0;
static ParameterInfo t4713_m27524_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27524_MI = 
{
	"Insert", NULL, &t4713_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4713_m27524_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4713_m27525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27525_MI = 
{
	"RemoveAt", NULL, &t4713_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4713_m27525_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4713_m27521_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t365_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27521_MI = 
{
	"get_Item", NULL, &t4713_TI, &t365_0_0_0, RuntimeInvoker_t28_t47, t4713_m27521_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t365_0_0_0;
static ParameterInfo t4713_m27522_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t4713_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27522_MI = 
{
	"set_Item", NULL, &t4713_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4713_m27522_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4713_MIs[] =
{
	&m27523_MI,
	&m27524_MI,
	&m27525_MI,
	&m27521_MI,
	&m27522_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4712_TI;
extern TypeInfo t4714_TI;
static TypeInfo* t4713_ITIs[] = 
{
	&t611_TI,
	&t4712_TI,
	&t4714_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4713_0_0_0;
extern Il2CppType t4713_1_0_0;
struct t4713;
extern TypeInfo t4713_TI;
extern Il2CppGenericClass t4713_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4713_MIs, t4713_PIs, NULL, NULL, NULL, NULL, NULL, &t4713_TI, t4713_ITIs, NULL, &t1418__CustomAttributeCache, &t4713_TI, &t4713_0_0_0, &t4713_1_0_0, NULL, &t4713_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3649_TI;

#include "t317.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>
extern MethodInfo m27526_MI;
static PropertyInfo t3649____Current_PropertyInfo = 
{
	&t3649_TI, "Current", &m27526_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3649_PIs[] =
{
	&t3649____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3649_TI;
extern Il2CppType t317_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27526_MI = 
{
	"get_Current", NULL, &t3649_TI, &t317_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3649_MIs[] =
{
	&m27526_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3649_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3649_0_0_0;
extern Il2CppType t3649_1_0_0;
struct t3649;
extern TypeInfo t3649_TI;
extern Il2CppGenericClass t3649_GC;
TypeInfo t3649_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3649_MIs, t3649_PIs, NULL, NULL, NULL, NULL, NULL, &t3649_TI, t3649_ITIs, NULL, &EmptyCustomAttributesCache, &t3649_TI, &t3649_0_0_0, &t3649_1_0_0, NULL, &t3649_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2729_TI;
#include "t2729MD.h"

extern TypeInfo t2729_TI;
extern TypeInfo t317_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15542_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20816_MI;
struct t29;
#define m20816(__this, p0, method) (t317 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20816_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.FlagsAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2729_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2729_TI, offsetof(t2729, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2729_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2729_TI, offsetof(t2729, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2729_FIs[] =
{
	&t2729_f0_FieldInfo,
	&t2729_f1_FieldInfo,
	NULL
};
extern MethodInfo m15539_MI;
static PropertyInfo t2729____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2729_TI, "System.Collections.IEnumerator.Current", &m15539_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15542_MI;
static PropertyInfo t2729____Current_PropertyInfo = 
{
	&t2729_TI, "Current", &m15542_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2729_PIs[] =
{
	&t2729____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2729____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2729_m15538_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2729_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15538_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2729_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2729_m15538_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2729_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15539_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2729_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2729_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15540_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2729_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2729_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15541_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2729_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2729_TI;
extern Il2CppType t317_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15542_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2729_TI, &t317_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2729_MIs[] =
{
	&m15538_MI,
	&m15539_MI,
	&m15540_MI,
	&m15541_MI,
	&m15542_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15539_MI;
extern MethodInfo m15541_MI;
extern MethodInfo m15540_MI;
extern MethodInfo m15542_MI;
static MethodInfo* t2729_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15539_MI,
	&m15541_MI,
	&m15540_MI,
	&m15542_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3649_TI;
static TypeInfo* t2729_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3649_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3649_TI;
static Il2CppInterfaceOffsetPair t2729_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3649_TI, 7},
};
extern MethodInfo m15542_MI;
extern TypeInfo t317_TI;
extern MethodInfo m20816_MI;
static void* t2729_RGCTXData[3] = 
{
	&m15542_MI,
	&t317_TI,
	&m20816_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2729_0_0_0;
extern Il2CppType t2729_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2729_TI;
extern Il2CppGenericClass t2729_GC;
extern TypeInfo t29_TI;
TypeInfo t2729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2729_MIs, t2729_PIs, t2729_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2729_TI, t2729_ITIs, t2729_VT, &EmptyCustomAttributesCache, &t2729_TI, &t2729_0_0_0, &t2729_1_0_0, t2729_IOs, &t2729_GC, NULL, NULL, NULL, t2729_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2729)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4715_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.FlagsAttribute>
extern MethodInfo m27527_MI;
static PropertyInfo t4715____Count_PropertyInfo = 
{
	&t4715_TI, "Count", &m27527_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27528_MI;
static PropertyInfo t4715____IsReadOnly_PropertyInfo = 
{
	&t4715_TI, "IsReadOnly", &m27528_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4715_PIs[] =
{
	&t4715____Count_PropertyInfo,
	&t4715____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4715_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27527_MI = 
{
	"get_Count", NULL, &t4715_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4715_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27528_MI = 
{
	"get_IsReadOnly", NULL, &t4715_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4715_m27529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27529_MI = 
{
	"Add", NULL, &t4715_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4715_m27529_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4715_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27530_MI = 
{
	"Clear", NULL, &t4715_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4715_m27531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27531_MI = 
{
	"Contains", NULL, &t4715_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4715_m27531_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2999_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4715_m27532_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2999_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27532_MI = 
{
	"CopyTo", NULL, &t4715_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4715_m27532_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4715_m27533_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4715_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27533_MI = 
{
	"Remove", NULL, &t4715_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4715_m27533_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4715_MIs[] =
{
	&m27527_MI,
	&m27528_MI,
	&m27529_MI,
	&m27530_MI,
	&m27531_MI,
	&m27532_MI,
	&m27533_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4717_TI;
static TypeInfo* t4715_ITIs[] = 
{
	&t611_TI,
	&t4717_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4715_0_0_0;
extern Il2CppType t4715_1_0_0;
struct t4715;
extern TypeInfo t4715_TI;
extern Il2CppGenericClass t4715_GC;
TypeInfo t4715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4715_MIs, t4715_PIs, NULL, NULL, NULL, NULL, NULL, &t4715_TI, t4715_ITIs, NULL, &EmptyCustomAttributesCache, &t4715_TI, &t4715_0_0_0, &t4715_1_0_0, NULL, &t4715_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4717_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>
extern TypeInfo t4717_TI;
extern Il2CppType t3649_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27534_MI = 
{
	"GetEnumerator", NULL, &t4717_TI, &t3649_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4717_MIs[] =
{
	&m27534_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4717_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4717_0_0_0;
extern Il2CppType t4717_1_0_0;
struct t4717;
extern TypeInfo t4717_TI;
extern Il2CppGenericClass t4717_GC;
TypeInfo t4717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4717_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4717_TI, t4717_ITIs, NULL, &EmptyCustomAttributesCache, &t4717_TI, &t4717_0_0_0, &t4717_1_0_0, NULL, &t4717_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4716_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.FlagsAttribute>
extern MethodInfo m27535_MI;
extern MethodInfo m27536_MI;
static PropertyInfo t4716____Item_PropertyInfo = 
{
	&t4716_TI, "Item", &m27535_MI, &m27536_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4716_PIs[] =
{
	&t4716____Item_PropertyInfo,
	NULL
};
extern Il2CppType t317_0_0_0;
static ParameterInfo t4716_m27537_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27537_MI = 
{
	"IndexOf", NULL, &t4716_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4716_m27537_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t317_0_0_0;
static ParameterInfo t4716_m27538_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27538_MI = 
{
	"Insert", NULL, &t4716_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4716_m27538_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4716_m27539_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27539_MI = 
{
	"RemoveAt", NULL, &t4716_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4716_m27539_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4716_m27535_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t317_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27535_MI = 
{
	"get_Item", NULL, &t4716_TI, &t317_0_0_0, RuntimeInvoker_t28_t47, t4716_m27535_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t317_0_0_0;
static ParameterInfo t4716_m27536_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t317_0_0_0},
};
extern TypeInfo t4716_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27536_MI = 
{
	"set_Item", NULL, &t4716_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4716_m27536_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4716_MIs[] =
{
	&m27537_MI,
	&m27538_MI,
	&m27539_MI,
	&m27535_MI,
	&m27536_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4715_TI;
extern TypeInfo t4717_TI;
static TypeInfo* t4716_ITIs[] = 
{
	&t611_TI,
	&t4715_TI,
	&t4717_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4716_0_0_0;
extern Il2CppType t4716_1_0_0;
struct t4716;
extern TypeInfo t4716_TI;
extern Il2CppGenericClass t4716_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4716_MIs, t4716_PIs, NULL, NULL, NULL, NULL, NULL, &t4716_TI, t4716_ITIs, NULL, &t1418__CustomAttributeCache, &t4716_TI, &t4716_0_0_0, &t4716_1_0_0, NULL, &t4716_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3650_TI;

#include "t565.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
extern MethodInfo m27540_MI;
static PropertyInfo t3650____Current_PropertyInfo = 
{
	&t3650_TI, "Current", &m27540_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3650_PIs[] =
{
	&t3650____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3650_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27540_MI = 
{
	"get_Current", NULL, &t3650_TI, &t565_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3650_MIs[] =
{
	&m27540_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3650_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3650_0_0_0;
extern Il2CppType t3650_1_0_0;
struct t3650;
extern TypeInfo t3650_TI;
extern Il2CppGenericClass t3650_GC;
TypeInfo t3650_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3650_MIs, t3650_PIs, NULL, NULL, NULL, NULL, NULL, &t3650_TI, t3650_ITIs, NULL, &EmptyCustomAttributesCache, &t3650_TI, &t3650_0_0_0, &t3650_1_0_0, NULL, &t3650_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2730.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2730_TI;
#include "t2730MD.h"

extern TypeInfo t2730_TI;
extern TypeInfo t565_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15547_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20827_MI;
struct t29;
#define m20827(__this, p0, method) (t565 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20827_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
extern Il2CppType t29_0_0_1;
FieldInfo t2730_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2730_TI, offsetof(t2730, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2730_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2730_TI, offsetof(t2730, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2730_FIs[] =
{
	&t2730_f0_FieldInfo,
	&t2730_f1_FieldInfo,
	NULL
};
extern MethodInfo m15544_MI;
static PropertyInfo t2730____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2730_TI, "System.Collections.IEnumerator.Current", &m15544_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15547_MI;
static PropertyInfo t2730____Current_PropertyInfo = 
{
	&t2730_TI, "Current", &m15547_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2730_PIs[] =
{
	&t2730____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2730____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2730_m15543_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2730_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15543_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2730_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2730_m15543_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15544_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2730_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15545_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2730_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15546_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2730_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2730_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15547_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2730_TI, &t565_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2730_MIs[] =
{
	&m15543_MI,
	&m15544_MI,
	&m15545_MI,
	&m15546_MI,
	&m15547_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15544_MI;
extern MethodInfo m15546_MI;
extern MethodInfo m15545_MI;
extern MethodInfo m15547_MI;
static MethodInfo* t2730_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15544_MI,
	&m15546_MI,
	&m15545_MI,
	&m15547_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3650_TI;
static TypeInfo* t2730_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3650_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3650_TI;
static Il2CppInterfaceOffsetPair t2730_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3650_TI, 7},
};
extern MethodInfo m15547_MI;
extern TypeInfo t565_TI;
extern MethodInfo m20827_MI;
static void* t2730_RGCTXData[3] = 
{
	&m15547_MI,
	&t565_TI,
	&m20827_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2730_0_0_0;
extern Il2CppType t2730_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2730_TI;
extern Il2CppGenericClass t2730_GC;
extern TypeInfo t29_TI;
TypeInfo t2730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2730_MIs, t2730_PIs, t2730_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2730_TI, t2730_ITIs, t2730_VT, &EmptyCustomAttributesCache, &t2730_TI, &t2730_0_0_0, &t2730_1_0_0, t2730_IOs, &t2730_GC, NULL, NULL, NULL, t2730_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2730)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4718_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
extern MethodInfo m27541_MI;
static PropertyInfo t4718____Count_PropertyInfo = 
{
	&t4718_TI, "Count", &m27541_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27542_MI;
static PropertyInfo t4718____IsReadOnly_PropertyInfo = 
{
	&t4718_TI, "IsReadOnly", &m27542_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4718_PIs[] =
{
	&t4718____Count_PropertyInfo,
	&t4718____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4718_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27541_MI = 
{
	"get_Count", NULL, &t4718_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4718_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27542_MI = 
{
	"get_IsReadOnly", NULL, &t4718_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t565_0_0_0;
static ParameterInfo t4718_m27543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27543_MI = 
{
	"Add", NULL, &t4718_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4718_m27543_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4718_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27544_MI = 
{
	"Clear", NULL, &t4718_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t565_0_0_0;
static ParameterInfo t4718_m27545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27545_MI = 
{
	"Contains", NULL, &t4718_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4718_m27545_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t743_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4718_m27546_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t743_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27546_MI = 
{
	"CopyTo", NULL, &t4718_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4718_m27546_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t565_0_0_0;
static ParameterInfo t4718_m27547_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t4718_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27547_MI = 
{
	"Remove", NULL, &t4718_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4718_m27547_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4718_MIs[] =
{
	&m27541_MI,
	&m27542_MI,
	&m27543_MI,
	&m27544_MI,
	&m27545_MI,
	&m27546_MI,
	&m27547_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4720_TI;
static TypeInfo* t4718_ITIs[] = 
{
	&t611_TI,
	&t4720_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4718_0_0_0;
extern Il2CppType t4718_1_0_0;
struct t4718;
extern TypeInfo t4718_TI;
extern Il2CppGenericClass t4718_GC;
TypeInfo t4718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4718_MIs, t4718_PIs, NULL, NULL, NULL, NULL, NULL, &t4718_TI, t4718_ITIs, NULL, &EmptyCustomAttributesCache, &t4718_TI, &t4718_0_0_0, &t4718_1_0_0, NULL, &t4718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4720_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
extern TypeInfo t4720_TI;
extern Il2CppType t3650_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27548_MI = 
{
	"GetEnumerator", NULL, &t4720_TI, &t3650_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4720_MIs[] =
{
	&m27548_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4720_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4720_0_0_0;
extern Il2CppType t4720_1_0_0;
struct t4720;
extern TypeInfo t4720_TI;
extern Il2CppGenericClass t4720_GC;
TypeInfo t4720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4720_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4720_TI, t4720_ITIs, NULL, &EmptyCustomAttributesCache, &t4720_TI, &t4720_0_0_0, &t4720_1_0_0, NULL, &t4720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4719_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
extern MethodInfo m27549_MI;
extern MethodInfo m27550_MI;
static PropertyInfo t4719____Item_PropertyInfo = 
{
	&t4719_TI, "Item", &m27549_MI, &m27550_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4719_PIs[] =
{
	&t4719____Item_PropertyInfo,
	NULL
};
extern Il2CppType t565_0_0_0;
static ParameterInfo t4719_m27551_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27551_MI = 
{
	"IndexOf", NULL, &t4719_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4719_m27551_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t4719_m27552_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27552_MI = 
{
	"Insert", NULL, &t4719_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4719_m27552_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4719_m27553_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27553_MI = 
{
	"RemoveAt", NULL, &t4719_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4719_m27553_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4719_m27549_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27549_MI = 
{
	"get_Item", NULL, &t4719_TI, &t565_0_0_0, RuntimeInvoker_t28_t47, t4719_m27549_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t4719_m27550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t4719_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27550_MI = 
{
	"set_Item", NULL, &t4719_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4719_m27550_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4719_MIs[] =
{
	&m27551_MI,
	&m27552_MI,
	&m27553_MI,
	&m27549_MI,
	&m27550_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4718_TI;
extern TypeInfo t4720_TI;
static TypeInfo* t4719_ITIs[] = 
{
	&t611_TI,
	&t4718_TI,
	&t4720_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4719_0_0_0;
extern Il2CppType t4719_1_0_0;
struct t4719;
extern TypeInfo t4719_TI;
extern Il2CppGenericClass t4719_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4719_MIs, t4719_PIs, NULL, NULL, NULL, NULL, NULL, &t4719_TI, t4719_ITIs, NULL, &t1418__CustomAttributeCache, &t4719_TI, &t4719_0_0_0, &t4719_1_0_0, NULL, &t4719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4721_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo m27554_MI;
static PropertyInfo t4721____Count_PropertyInfo = 
{
	&t4721_TI, "Count", &m27554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27555_MI;
static PropertyInfo t4721____IsReadOnly_PropertyInfo = 
{
	&t4721_TI, "IsReadOnly", &m27555_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4721_PIs[] =
{
	&t4721____Count_PropertyInfo,
	&t4721____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4721_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27554_MI = 
{
	"get_Count", NULL, &t4721_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4721_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27555_MI = 
{
	"get_IsReadOnly", NULL, &t4721_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1518_0_0_0;
static ParameterInfo t4721_m27556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27556_MI = 
{
	"Add", NULL, &t4721_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4721_m27556_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4721_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27557_MI = 
{
	"Clear", NULL, &t4721_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1518_0_0_0;
static ParameterInfo t4721_m27558_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27558_MI = 
{
	"Contains", NULL, &t4721_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4721_m27558_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3000_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4721_m27559_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3000_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27559_MI = 
{
	"CopyTo", NULL, &t4721_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4721_m27559_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1518_0_0_0;
static ParameterInfo t4721_m27560_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern TypeInfo t4721_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27560_MI = 
{
	"Remove", NULL, &t4721_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4721_m27560_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4721_MIs[] =
{
	&m27554_MI,
	&m27555_MI,
	&m27556_MI,
	&m27557_MI,
	&m27558_MI,
	&m27559_MI,
	&m27560_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4723_TI;
static TypeInfo* t4721_ITIs[] = 
{
	&t611_TI,
	&t4723_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4721_0_0_0;
extern Il2CppType t4721_1_0_0;
struct t4721;
extern TypeInfo t4721_TI;
extern Il2CppGenericClass t4721_GC;
TypeInfo t4721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4721_MIs, t4721_PIs, NULL, NULL, NULL, NULL, NULL, &t4721_TI, t4721_ITIs, NULL, &EmptyCustomAttributesCache, &t4721_TI, &t4721_0_0_0, &t4721_1_0_0, NULL, &t4721_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4723_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>
extern TypeInfo t4723_TI;
extern Il2CppType t3651_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27561_MI = 
{
	"GetEnumerator", NULL, &t4723_TI, &t3651_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4723_MIs[] =
{
	&m27561_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4723_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4723_0_0_0;
extern Il2CppType t4723_1_0_0;
struct t4723;
extern TypeInfo t4723_TI;
extern Il2CppGenericClass t4723_GC;
TypeInfo t4723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4723_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4723_TI, t4723_ITIs, NULL, &EmptyCustomAttributesCache, &t4723_TI, &t4723_0_0_0, &t4723_1_0_0, NULL, &t4723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3651_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo m27562_MI;
static PropertyInfo t3651____Current_PropertyInfo = 
{
	&t3651_TI, "Current", &m27562_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3651_PIs[] =
{
	&t3651____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3651_TI;
extern Il2CppType t1518_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27562_MI = 
{
	"get_Current", NULL, &t3651_TI, &t1518_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3651_MIs[] =
{
	&m27562_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3651_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3651_0_0_0;
extern Il2CppType t3651_1_0_0;
struct t3651;
extern TypeInfo t3651_TI;
extern Il2CppGenericClass t3651_GC;
TypeInfo t3651_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3651_MIs, t3651_PIs, NULL, NULL, NULL, NULL, NULL, &t3651_TI, t3651_ITIs, NULL, &EmptyCustomAttributesCache, &t3651_TI, &t3651_0_0_0, &t3651_1_0_0, NULL, &t3651_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2731_TI;
#include "t2731MD.h"

extern TypeInfo t2731_TI;
extern TypeInfo t1518_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15552_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20838_MI;
struct t29;
#define m20838(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20838_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern Il2CppType t29_0_0_1;
FieldInfo t2731_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2731_TI, offsetof(t2731, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2731_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2731_TI, offsetof(t2731, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2731_FIs[] =
{
	&t2731_f0_FieldInfo,
	&t2731_f1_FieldInfo,
	NULL
};
extern MethodInfo m15549_MI;
static PropertyInfo t2731____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2731_TI, "System.Collections.IEnumerator.Current", &m15549_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15552_MI;
static PropertyInfo t2731____Current_PropertyInfo = 
{
	&t2731_TI, "Current", &m15552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2731_PIs[] =
{
	&t2731____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2731____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2731_m15548_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2731_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15548_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2731_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2731_m15548_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15549_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2731_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15550_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2731_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15551_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2731_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2731_TI;
extern Il2CppType t1518_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15552_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2731_TI, &t1518_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2731_MIs[] =
{
	&m15548_MI,
	&m15549_MI,
	&m15550_MI,
	&m15551_MI,
	&m15552_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15549_MI;
extern MethodInfo m15551_MI;
extern MethodInfo m15550_MI;
extern MethodInfo m15552_MI;
static MethodInfo* t2731_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15549_MI,
	&m15551_MI,
	&m15550_MI,
	&m15552_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3651_TI;
static TypeInfo* t2731_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3651_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3651_TI;
static Il2CppInterfaceOffsetPair t2731_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3651_TI, 7},
};
extern MethodInfo m15552_MI;
extern TypeInfo t1518_TI;
extern MethodInfo m20838_MI;
static void* t2731_RGCTXData[3] = 
{
	&m15552_MI,
	&t1518_TI,
	&m20838_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2731_0_0_0;
extern Il2CppType t2731_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2731_TI;
extern Il2CppGenericClass t2731_GC;
extern TypeInfo t29_TI;
TypeInfo t2731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2731_MIs, t2731_PIs, t2731_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2731_TI, t2731_ITIs, t2731_VT, &EmptyCustomAttributesCache, &t2731_TI, &t2731_0_0_0, &t2731_1_0_0, t2731_IOs, &t2731_GC, NULL, NULL, NULL, t2731_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2731)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4722_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo m27563_MI;
extern MethodInfo m27564_MI;
static PropertyInfo t4722____Item_PropertyInfo = 
{
	&t4722_TI, "Item", &m27563_MI, &m27564_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4722_PIs[] =
{
	&t4722____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1518_0_0_0;
static ParameterInfo t4722_m27565_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27565_MI = 
{
	"IndexOf", NULL, &t4722_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4722_m27565_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1518_0_0_0;
static ParameterInfo t4722_m27566_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27566_MI = 
{
	"Insert", NULL, &t4722_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4722_m27566_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4722_m27567_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27567_MI = 
{
	"RemoveAt", NULL, &t4722_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4722_m27567_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4722_m27563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t1518_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27563_MI = 
{
	"get_Item", NULL, &t4722_TI, &t1518_0_0_0, RuntimeInvoker_t28_t47, t4722_m27563_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1518_0_0_0;
static ParameterInfo t4722_m27564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1518_0_0_0},
};
extern TypeInfo t4722_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27564_MI = 
{
	"set_Item", NULL, &t4722_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4722_m27564_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4722_MIs[] =
{
	&m27565_MI,
	&m27566_MI,
	&m27567_MI,
	&m27563_MI,
	&m27564_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4721_TI;
extern TypeInfo t4723_TI;
static TypeInfo* t4722_ITIs[] = 
{
	&t611_TI,
	&t4721_TI,
	&t4723_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4722_0_0_0;
extern Il2CppType t4722_1_0_0;
struct t4722;
extern TypeInfo t4722_TI;
extern Il2CppGenericClass t4722_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4722_MIs, t4722_PIs, NULL, NULL, NULL, NULL, NULL, &t4722_TI, t4722_ITIs, NULL, &t1418__CustomAttributeCache, &t4722_TI, &t4722_0_0_0, &t4722_1_0_0, NULL, &t4722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4724_TI;

#include "t633.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>
extern MethodInfo m27568_MI;
static PropertyInfo t4724____Count_PropertyInfo = 
{
	&t4724_TI, "Count", &m27568_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27569_MI;
static PropertyInfo t4724____IsReadOnly_PropertyInfo = 
{
	&t4724_TI, "IsReadOnly", &m27569_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4724_PIs[] =
{
	&t4724____Count_PropertyInfo,
	&t4724____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4724_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27568_MI = 
{
	"get_Count", NULL, &t4724_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4724_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27569_MI = 
{
	"get_IsReadOnly", NULL, &t4724_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t633_0_0_0;
static ParameterInfo t4724_m27570_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t633_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27570_MI = 
{
	"Add", NULL, &t4724_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4724_m27570_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4724_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27571_MI = 
{
	"Clear", NULL, &t4724_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t633_0_0_0;
static ParameterInfo t4724_m27572_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t633_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27572_MI = 
{
	"Contains", NULL, &t4724_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4724_m27572_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t970_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4724_m27573_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t970_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27573_MI = 
{
	"CopyTo", NULL, &t4724_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4724_m27573_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t633_0_0_0;
static ParameterInfo t4724_m27574_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t633_0_0_0},
};
extern TypeInfo t4724_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27574_MI = 
{
	"Remove", NULL, &t4724_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4724_m27574_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4724_MIs[] =
{
	&m27568_MI,
	&m27569_MI,
	&m27570_MI,
	&m27571_MI,
	&m27572_MI,
	&m27573_MI,
	&m27574_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4726_TI;
static TypeInfo* t4724_ITIs[] = 
{
	&t611_TI,
	&t4726_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4724_0_0_0;
extern Il2CppType t4724_1_0_0;
struct t4724;
extern TypeInfo t4724_TI;
extern Il2CppGenericClass t4724_GC;
TypeInfo t4724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4724_MIs, t4724_PIs, NULL, NULL, NULL, NULL, NULL, &t4724_TI, t4724_ITIs, NULL, &EmptyCustomAttributesCache, &t4724_TI, &t4724_0_0_0, &t4724_1_0_0, NULL, &t4724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4726_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>
extern TypeInfo t4726_TI;
extern Il2CppType t3652_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27575_MI = 
{
	"GetEnumerator", NULL, &t4726_TI, &t3652_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4726_MIs[] =
{
	&m27575_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4726_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4726_0_0_0;
extern Il2CppType t4726_1_0_0;
struct t4726;
extern TypeInfo t4726_TI;
extern Il2CppGenericClass t4726_GC;
TypeInfo t4726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4726_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4726_TI, t4726_ITIs, NULL, &EmptyCustomAttributesCache, &t4726_TI, &t4726_0_0_0, &t4726_1_0_0, NULL, &t4726_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3652_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>
extern MethodInfo m27576_MI;
static PropertyInfo t3652____Current_PropertyInfo = 
{
	&t3652_TI, "Current", &m27576_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3652_PIs[] =
{
	&t3652____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3652_TI;
extern Il2CppType t633_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27576_MI = 
{
	"get_Current", NULL, &t3652_TI, &t633_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3652_MIs[] =
{
	&m27576_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3652_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3652_0_0_0;
extern Il2CppType t3652_1_0_0;
struct t3652;
extern TypeInfo t3652_TI;
extern Il2CppGenericClass t3652_GC;
TypeInfo t3652_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3652_MIs, t3652_PIs, NULL, NULL, NULL, NULL, NULL, &t3652_TI, t3652_ITIs, NULL, &EmptyCustomAttributesCache, &t3652_TI, &t3652_0_0_0, &t3652_1_0_0, NULL, &t3652_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2732.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2732_TI;
#include "t2732MD.h"

extern TypeInfo t2732_TI;
extern TypeInfo t633_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15557_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20849_MI;
struct t29;
#define m20849(__this, p0, method) (t633 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20849_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
extern Il2CppType t29_0_0_1;
FieldInfo t2732_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2732_TI, offsetof(t2732, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2732_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2732_TI, offsetof(t2732, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2732_FIs[] =
{
	&t2732_f0_FieldInfo,
	&t2732_f1_FieldInfo,
	NULL
};
extern MethodInfo m15554_MI;
static PropertyInfo t2732____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2732_TI, "System.Collections.IEnumerator.Current", &m15554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15557_MI;
static PropertyInfo t2732____Current_PropertyInfo = 
{
	&t2732_TI, "Current", &m15557_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2732_PIs[] =
{
	&t2732____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2732____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2732_m15553_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2732_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15553_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2732_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2732_m15553_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15554_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2732_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15555_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2732_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15556_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2732_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2732_TI;
extern Il2CppType t633_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15557_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2732_TI, &t633_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2732_MIs[] =
{
	&m15553_MI,
	&m15554_MI,
	&m15555_MI,
	&m15556_MI,
	&m15557_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15554_MI;
extern MethodInfo m15556_MI;
extern MethodInfo m15555_MI;
extern MethodInfo m15557_MI;
static MethodInfo* t2732_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15554_MI,
	&m15556_MI,
	&m15555_MI,
	&m15557_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3652_TI;
static TypeInfo* t2732_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3652_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3652_TI;
static Il2CppInterfaceOffsetPair t2732_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3652_TI, 7},
};
extern MethodInfo m15557_MI;
extern TypeInfo t633_TI;
extern MethodInfo m20849_MI;
static void* t2732_RGCTXData[3] = 
{
	&m15557_MI,
	&t633_TI,
	&m20849_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2732_0_0_0;
extern Il2CppType t2732_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2732_TI;
extern Il2CppGenericClass t2732_GC;
extern TypeInfo t29_TI;
TypeInfo t2732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2732_MIs, t2732_PIs, t2732_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2732_TI, t2732_ITIs, t2732_VT, &EmptyCustomAttributesCache, &t2732_TI, &t2732_0_0_0, &t2732_1_0_0, t2732_IOs, &t2732_GC, NULL, NULL, NULL, t2732_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2732)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4725_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodBase>
extern MethodInfo m27577_MI;
extern MethodInfo m27578_MI;
static PropertyInfo t4725____Item_PropertyInfo = 
{
	&t4725_TI, "Item", &m27577_MI, &m27578_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4725_PIs[] =
{
	&t4725____Item_PropertyInfo,
	NULL
};
extern Il2CppType t633_0_0_0;
static ParameterInfo t4725_m27579_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t633_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27579_MI = 
{
	"IndexOf", NULL, &t4725_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4725_m27579_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t633_0_0_0;
static ParameterInfo t4725_m27580_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t633_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27580_MI = 
{
	"Insert", NULL, &t4725_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4725_m27580_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4725_m27581_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27581_MI = 
{
	"RemoveAt", NULL, &t4725_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4725_m27581_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4725_m27577_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t633_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27577_MI = 
{
	"get_Item", NULL, &t4725_TI, &t633_0_0_0, RuntimeInvoker_t28_t47, t4725_m27577_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t633_0_0_0;
static ParameterInfo t4725_m27578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t633_0_0_0},
};
extern TypeInfo t4725_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27578_MI = 
{
	"set_Item", NULL, &t4725_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4725_m27578_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4725_MIs[] =
{
	&m27579_MI,
	&m27580_MI,
	&m27581_MI,
	&m27577_MI,
	&m27578_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4724_TI;
extern TypeInfo t4726_TI;
static TypeInfo* t4725_ITIs[] = 
{
	&t611_TI,
	&t4724_TI,
	&t4726_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4725_0_0_0;
extern Il2CppType t4725_1_0_0;
struct t4725;
extern TypeInfo t4725_TI;
extern Il2CppGenericClass t4725_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4725_MIs, t4725_PIs, NULL, NULL, NULL, NULL, NULL, &t4725_TI, t4725_ITIs, NULL, &t1418__CustomAttributeCache, &t4725_TI, &t4725_0_0_0, &t4725_1_0_0, NULL, &t4725_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4727_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m27582_MI;
static PropertyInfo t4727____Count_PropertyInfo = 
{
	&t4727_TI, "Count", &m27582_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27583_MI;
static PropertyInfo t4727____IsReadOnly_PropertyInfo = 
{
	&t4727_TI, "IsReadOnly", &m27583_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4727_PIs[] =
{
	&t4727____Count_PropertyInfo,
	&t4727____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4727_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27582_MI = 
{
	"get_Count", NULL, &t4727_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4727_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27583_MI = 
{
	"get_IsReadOnly", NULL, &t4727_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1513_0_0_0;
static ParameterInfo t4727_m27584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1513_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27584_MI = 
{
	"Add", NULL, &t4727_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4727_m27584_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4727_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27585_MI = 
{
	"Clear", NULL, &t4727_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1513_0_0_0;
static ParameterInfo t4727_m27586_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1513_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27586_MI = 
{
	"Contains", NULL, &t4727_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4727_m27586_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3001_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4727_m27587_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3001_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27587_MI = 
{
	"CopyTo", NULL, &t4727_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4727_m27587_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1513_0_0_0;
static ParameterInfo t4727_m27588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1513_0_0_0},
};
extern TypeInfo t4727_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27588_MI = 
{
	"Remove", NULL, &t4727_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4727_m27588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4727_MIs[] =
{
	&m27582_MI,
	&m27583_MI,
	&m27584_MI,
	&m27585_MI,
	&m27586_MI,
	&m27587_MI,
	&m27588_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4729_TI;
static TypeInfo* t4727_ITIs[] = 
{
	&t611_TI,
	&t4729_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4727_0_0_0;
extern Il2CppType t4727_1_0_0;
struct t4727;
extern TypeInfo t4727_TI;
extern Il2CppGenericClass t4727_GC;
TypeInfo t4727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4727_MIs, t4727_PIs, NULL, NULL, NULL, NULL, NULL, &t4727_TI, t4727_ITIs, NULL, &EmptyCustomAttributesCache, &t4727_TI, &t4727_0_0_0, &t4727_1_0_0, NULL, &t4727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4729_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>
extern TypeInfo t4729_TI;
extern Il2CppType t3653_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27589_MI = 
{
	"GetEnumerator", NULL, &t4729_TI, &t3653_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4729_MIs[] =
{
	&m27589_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4729_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4729_0_0_0;
extern Il2CppType t4729_1_0_0;
struct t4729;
extern TypeInfo t4729_TI;
extern Il2CppGenericClass t4729_GC;
TypeInfo t4729_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4729_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4729_TI, t4729_ITIs, NULL, &EmptyCustomAttributesCache, &t4729_TI, &t4729_0_0_0, &t4729_1_0_0, NULL, &t4729_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3653_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m27590_MI;
static PropertyInfo t3653____Current_PropertyInfo = 
{
	&t3653_TI, "Current", &m27590_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3653_PIs[] =
{
	&t3653____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3653_TI;
extern Il2CppType t1513_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27590_MI = 
{
	"get_Current", NULL, &t3653_TI, &t1513_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3653_MIs[] =
{
	&m27590_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3653_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3653_0_0_0;
extern Il2CppType t3653_1_0_0;
struct t3653;
extern TypeInfo t3653_TI;
extern Il2CppGenericClass t3653_GC;
TypeInfo t3653_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3653_MIs, t3653_PIs, NULL, NULL, NULL, NULL, NULL, &t3653_TI, t3653_ITIs, NULL, &EmptyCustomAttributesCache, &t3653_TI, &t3653_0_0_0, &t3653_1_0_0, NULL, &t3653_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2733_TI;
#include "t2733MD.h"

extern TypeInfo t2733_TI;
extern TypeInfo t1513_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15562_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20860_MI;
struct t29;
#define m20860(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20860_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType t29_0_0_1;
FieldInfo t2733_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2733_TI, offsetof(t2733, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2733_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2733_TI, offsetof(t2733, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2733_FIs[] =
{
	&t2733_f0_FieldInfo,
	&t2733_f1_FieldInfo,
	NULL
};
extern MethodInfo m15559_MI;
static PropertyInfo t2733____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2733_TI, "System.Collections.IEnumerator.Current", &m15559_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15562_MI;
static PropertyInfo t2733____Current_PropertyInfo = 
{
	&t2733_TI, "Current", &m15562_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2733_PIs[] =
{
	&t2733____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2733____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2733_m15558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2733_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15558_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2733_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2733_m15558_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15559_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2733_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15560_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2733_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15561_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2733_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2733_TI;
extern Il2CppType t1513_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15562_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2733_TI, &t1513_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2733_MIs[] =
{
	&m15558_MI,
	&m15559_MI,
	&m15560_MI,
	&m15561_MI,
	&m15562_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15559_MI;
extern MethodInfo m15561_MI;
extern MethodInfo m15560_MI;
extern MethodInfo m15562_MI;
static MethodInfo* t2733_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15559_MI,
	&m15561_MI,
	&m15560_MI,
	&m15562_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3653_TI;
static TypeInfo* t2733_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3653_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3653_TI;
static Il2CppInterfaceOffsetPair t2733_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3653_TI, 7},
};
extern MethodInfo m15562_MI;
extern TypeInfo t1513_TI;
extern MethodInfo m20860_MI;
static void* t2733_RGCTXData[3] = 
{
	&m15562_MI,
	&t1513_TI,
	&m20860_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2733_0_0_0;
extern Il2CppType t2733_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2733_TI;
extern Il2CppGenericClass t2733_GC;
extern TypeInfo t29_TI;
TypeInfo t2733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2733_MIs, t2733_PIs, t2733_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2733_TI, t2733_ITIs, t2733_VT, &EmptyCustomAttributesCache, &t2733_TI, &t2733_0_0_0, &t2733_1_0_0, t2733_IOs, &t2733_GC, NULL, NULL, NULL, t2733_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2733)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4728_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo m27591_MI;
extern MethodInfo m27592_MI;
static PropertyInfo t4728____Item_PropertyInfo = 
{
	&t4728_TI, "Item", &m27591_MI, &m27592_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4728_PIs[] =
{
	&t4728____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1513_0_0_0;
static ParameterInfo t4728_m27593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1513_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27593_MI = 
{
	"IndexOf", NULL, &t4728_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4728_m27593_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1513_0_0_0;
static ParameterInfo t4728_m27594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1513_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27594_MI = 
{
	"Insert", NULL, &t4728_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4728_m27594_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4728_m27595_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27595_MI = 
{
	"RemoveAt", NULL, &t4728_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4728_m27595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4728_m27591_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t1513_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27591_MI = 
{
	"get_Item", NULL, &t4728_TI, &t1513_0_0_0, RuntimeInvoker_t28_t47, t4728_m27591_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1513_0_0_0;
static ParameterInfo t4728_m27592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1513_0_0_0},
};
extern TypeInfo t4728_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27592_MI = 
{
	"set_Item", NULL, &t4728_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4728_m27592_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4728_MIs[] =
{
	&m27593_MI,
	&m27594_MI,
	&m27595_MI,
	&m27591_MI,
	&m27592_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4727_TI;
extern TypeInfo t4729_TI;
static TypeInfo* t4728_ITIs[] = 
{
	&t611_TI,
	&t4727_TI,
	&t4729_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4728_0_0_0;
extern Il2CppType t4728_1_0_0;
struct t4728;
extern TypeInfo t4728_TI;
extern Il2CppGenericClass t4728_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4728_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4728_MIs, t4728_PIs, NULL, NULL, NULL, NULL, NULL, &t4728_TI, t4728_ITIs, NULL, &t1418__CustomAttributeCache, &t4728_TI, &t4728_0_0_0, &t4728_1_0_0, NULL, &t4728_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3654_TI;

#include "t656.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>
extern MethodInfo m27596_MI;
static PropertyInfo t3654____Current_PropertyInfo = 
{
	&t3654_TI, "Current", &m27596_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3654_PIs[] =
{
	&t3654____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3654_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27596_MI = 
{
	"get_Current", NULL, &t3654_TI, &t656_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3654_MIs[] =
{
	&m27596_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3654_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3654_0_0_0;
extern Il2CppType t3654_1_0_0;
struct t3654;
extern TypeInfo t3654_TI;
extern Il2CppGenericClass t3654_GC;
TypeInfo t3654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3654_MIs, t3654_PIs, NULL, NULL, NULL, NULL, NULL, &t3654_TI, t3654_ITIs, NULL, &EmptyCustomAttributesCache, &t3654_TI, &t3654_0_0_0, &t3654_1_0_0, NULL, &t3654_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2734_TI;
#include "t2734MD.h"

extern TypeInfo t2734_TI;
extern TypeInfo t656_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15567_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20871_MI;
struct t29;
#define m20871(__this, p0, method) (t656 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20871_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
extern Il2CppType t29_0_0_1;
FieldInfo t2734_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2734_TI, offsetof(t2734, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2734_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2734_TI, offsetof(t2734, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2734_FIs[] =
{
	&t2734_f0_FieldInfo,
	&t2734_f1_FieldInfo,
	NULL
};
extern MethodInfo m15564_MI;
static PropertyInfo t2734____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2734_TI, "System.Collections.IEnumerator.Current", &m15564_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15567_MI;
static PropertyInfo t2734____Current_PropertyInfo = 
{
	&t2734_TI, "Current", &m15567_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2734_PIs[] =
{
	&t2734____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2734____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2734_m15563_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2734_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15563_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2734_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2734_m15563_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15564_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2734_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15565_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2734_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15566_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2734_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2734_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15567_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2734_TI, &t656_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2734_MIs[] =
{
	&m15563_MI,
	&m15564_MI,
	&m15565_MI,
	&m15566_MI,
	&m15567_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15564_MI;
extern MethodInfo m15566_MI;
extern MethodInfo m15565_MI;
extern MethodInfo m15567_MI;
static MethodInfo* t2734_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15564_MI,
	&m15566_MI,
	&m15565_MI,
	&m15567_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3654_TI;
static TypeInfo* t2734_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3654_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3654_TI;
static Il2CppInterfaceOffsetPair t2734_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3654_TI, 7},
};
extern MethodInfo m15567_MI;
extern TypeInfo t656_TI;
extern MethodInfo m20871_MI;
static void* t2734_RGCTXData[3] = 
{
	&m15567_MI,
	&t656_TI,
	&m20871_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2734_0_0_0;
extern Il2CppType t2734_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2734_TI;
extern Il2CppGenericClass t2734_GC;
extern TypeInfo t29_TI;
TypeInfo t2734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2734_MIs, t2734_PIs, t2734_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2734_TI, t2734_ITIs, t2734_VT, &EmptyCustomAttributesCache, &t2734_TI, &t2734_0_0_0, &t2734_1_0_0, t2734_IOs, &t2734_GC, NULL, NULL, NULL, t2734_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2734)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4730_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>
extern MethodInfo m27597_MI;
static PropertyInfo t4730____Count_PropertyInfo = 
{
	&t4730_TI, "Count", &m27597_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27598_MI;
static PropertyInfo t4730____IsReadOnly_PropertyInfo = 
{
	&t4730_TI, "IsReadOnly", &m27598_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4730_PIs[] =
{
	&t4730____Count_PropertyInfo,
	&t4730____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4730_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27597_MI = 
{
	"get_Count", NULL, &t4730_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4730_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27598_MI = 
{
	"get_IsReadOnly", NULL, &t4730_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t656_0_0_0;
static ParameterInfo t4730_m27599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27599_MI = 
{
	"Add", NULL, &t4730_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4730_m27599_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4730_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27600_MI = 
{
	"Clear", NULL, &t4730_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t656_0_0_0;
static ParameterInfo t4730_m27601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27601_MI = 
{
	"Contains", NULL, &t4730_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4730_m27601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t745_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4730_m27602_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t745_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27602_MI = 
{
	"CopyTo", NULL, &t4730_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4730_m27602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t656_0_0_0;
static ParameterInfo t4730_m27603_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t4730_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27603_MI = 
{
	"Remove", NULL, &t4730_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4730_m27603_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4730_MIs[] =
{
	&m27597_MI,
	&m27598_MI,
	&m27599_MI,
	&m27600_MI,
	&m27601_MI,
	&m27602_MI,
	&m27603_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4732_TI;
static TypeInfo* t4730_ITIs[] = 
{
	&t611_TI,
	&t4732_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4730_0_0_0;
extern Il2CppType t4730_1_0_0;
struct t4730;
extern TypeInfo t4730_TI;
extern Il2CppGenericClass t4730_GC;
TypeInfo t4730_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4730_MIs, t4730_PIs, NULL, NULL, NULL, NULL, NULL, &t4730_TI, t4730_ITIs, NULL, &EmptyCustomAttributesCache, &t4730_TI, &t4730_0_0_0, &t4730_1_0_0, NULL, &t4730_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4732_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
extern TypeInfo t4732_TI;
extern Il2CppType t3654_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27604_MI = 
{
	"GetEnumerator", NULL, &t4732_TI, &t3654_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4732_MIs[] =
{
	&m27604_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4732_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4732_0_0_0;
extern Il2CppType t4732_1_0_0;
struct t4732;
extern TypeInfo t4732_TI;
extern Il2CppGenericClass t4732_GC;
TypeInfo t4732_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4732_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4732_TI, t4732_ITIs, NULL, &EmptyCustomAttributesCache, &t4732_TI, &t4732_0_0_0, &t4732_1_0_0, NULL, &t4732_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4731_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>
extern MethodInfo m27605_MI;
extern MethodInfo m27606_MI;
static PropertyInfo t4731____Item_PropertyInfo = 
{
	&t4731_TI, "Item", &m27605_MI, &m27606_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4731_PIs[] =
{
	&t4731____Item_PropertyInfo,
	NULL
};
extern Il2CppType t656_0_0_0;
static ParameterInfo t4731_m27607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27607_MI = 
{
	"IndexOf", NULL, &t4731_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4731_m27607_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t656_0_0_0;
static ParameterInfo t4731_m27608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27608_MI = 
{
	"Insert", NULL, &t4731_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4731_m27608_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4731_m27609_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27609_MI = 
{
	"RemoveAt", NULL, &t4731_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4731_m27609_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4731_m27605_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t656_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27605_MI = 
{
	"get_Item", NULL, &t4731_TI, &t656_0_0_0, RuntimeInvoker_t28_t47, t4731_m27605_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t656_0_0_0;
static ParameterInfo t4731_m27606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t656_0_0_0},
};
extern TypeInfo t4731_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27606_MI = 
{
	"set_Item", NULL, &t4731_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4731_m27606_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4731_MIs[] =
{
	&m27607_MI,
	&m27608_MI,
	&m27609_MI,
	&m27605_MI,
	&m27606_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4730_TI;
extern TypeInfo t4732_TI;
static TypeInfo* t4731_ITIs[] = 
{
	&t611_TI,
	&t4730_TI,
	&t4732_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4731_0_0_0;
extern Il2CppType t4731_1_0_0;
struct t4731;
extern TypeInfo t4731_TI;
extern Il2CppGenericClass t4731_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4731_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4731_MIs, t4731_PIs, NULL, NULL, NULL, NULL, NULL, &t4731_TI, t4731_ITIs, NULL, &t1418__CustomAttributeCache, &t4731_TI, &t4731_0_0_0, &t4731_1_0_0, NULL, &t4731_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4733_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m27610_MI;
static PropertyInfo t4733____Count_PropertyInfo = 
{
	&t4733_TI, "Count", &m27610_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27611_MI;
static PropertyInfo t4733____IsReadOnly_PropertyInfo = 
{
	&t4733_TI, "IsReadOnly", &m27611_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4733_PIs[] =
{
	&t4733____Count_PropertyInfo,
	&t4733____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4733_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27610_MI = 
{
	"get_Count", NULL, &t4733_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4733_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27611_MI = 
{
	"get_IsReadOnly", NULL, &t4733_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1512_0_0_0;
static ParameterInfo t4733_m27612_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1512_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27612_MI = 
{
	"Add", NULL, &t4733_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4733_m27612_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4733_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27613_MI = 
{
	"Clear", NULL, &t4733_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1512_0_0_0;
static ParameterInfo t4733_m27614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1512_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27614_MI = 
{
	"Contains", NULL, &t4733_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4733_m27614_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3002_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4733_m27615_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3002_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27615_MI = 
{
	"CopyTo", NULL, &t4733_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4733_m27615_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1512_0_0_0;
static ParameterInfo t4733_m27616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1512_0_0_0},
};
extern TypeInfo t4733_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27616_MI = 
{
	"Remove", NULL, &t4733_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4733_m27616_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4733_MIs[] =
{
	&m27610_MI,
	&m27611_MI,
	&m27612_MI,
	&m27613_MI,
	&m27614_MI,
	&m27615_MI,
	&m27616_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4735_TI;
static TypeInfo* t4733_ITIs[] = 
{
	&t611_TI,
	&t4735_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4733_0_0_0;
extern Il2CppType t4733_1_0_0;
struct t4733;
extern TypeInfo t4733_TI;
extern Il2CppGenericClass t4733_GC;
TypeInfo t4733_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4733_MIs, t4733_PIs, NULL, NULL, NULL, NULL, NULL, &t4733_TI, t4733_ITIs, NULL, &EmptyCustomAttributesCache, &t4733_TI, &t4733_0_0_0, &t4733_1_0_0, NULL, &t4733_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4735_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>
extern TypeInfo t4735_TI;
extern Il2CppType t3655_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27617_MI = 
{
	"GetEnumerator", NULL, &t4735_TI, &t3655_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4735_MIs[] =
{
	&m27617_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4735_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4735_0_0_0;
extern Il2CppType t4735_1_0_0;
struct t4735;
extern TypeInfo t4735_TI;
extern Il2CppGenericClass t4735_GC;
TypeInfo t4735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4735_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4735_TI, t4735_ITIs, NULL, &EmptyCustomAttributesCache, &t4735_TI, &t4735_0_0_0, &t4735_1_0_0, NULL, &t4735_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3655_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m27618_MI;
static PropertyInfo t3655____Current_PropertyInfo = 
{
	&t3655_TI, "Current", &m27618_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3655_PIs[] =
{
	&t3655____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3655_TI;
extern Il2CppType t1512_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27618_MI = 
{
	"get_Current", NULL, &t3655_TI, &t1512_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3655_MIs[] =
{
	&m27618_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3655_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3655_0_0_0;
extern Il2CppType t3655_1_0_0;
struct t3655;
extern TypeInfo t3655_TI;
extern Il2CppGenericClass t3655_GC;
TypeInfo t3655_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3655_MIs, t3655_PIs, NULL, NULL, NULL, NULL, NULL, &t3655_TI, t3655_ITIs, NULL, &EmptyCustomAttributesCache, &t3655_TI, &t3655_0_0_0, &t3655_1_0_0, NULL, &t3655_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2735.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2735_TI;
#include "t2735MD.h"

extern TypeInfo t2735_TI;
extern TypeInfo t1512_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15572_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20882_MI;
struct t29;
#define m20882(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20882_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType t29_0_0_1;
FieldInfo t2735_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2735_TI, offsetof(t2735, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2735_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2735_TI, offsetof(t2735, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2735_FIs[] =
{
	&t2735_f0_FieldInfo,
	&t2735_f1_FieldInfo,
	NULL
};
extern MethodInfo m15569_MI;
static PropertyInfo t2735____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2735_TI, "System.Collections.IEnumerator.Current", &m15569_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15572_MI;
static PropertyInfo t2735____Current_PropertyInfo = 
{
	&t2735_TI, "Current", &m15572_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2735_PIs[] =
{
	&t2735____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2735____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2735_m15568_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2735_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15568_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2735_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2735_m15568_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15569_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2735_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15570_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2735_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15571_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2735_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2735_TI;
extern Il2CppType t1512_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15572_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2735_TI, &t1512_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2735_MIs[] =
{
	&m15568_MI,
	&m15569_MI,
	&m15570_MI,
	&m15571_MI,
	&m15572_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15569_MI;
extern MethodInfo m15571_MI;
extern MethodInfo m15570_MI;
extern MethodInfo m15572_MI;
static MethodInfo* t2735_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15569_MI,
	&m15571_MI,
	&m15570_MI,
	&m15572_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3655_TI;
static TypeInfo* t2735_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3655_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3655_TI;
static Il2CppInterfaceOffsetPair t2735_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3655_TI, 7},
};
extern MethodInfo m15572_MI;
extern TypeInfo t1512_TI;
extern MethodInfo m20882_MI;
static void* t2735_RGCTXData[3] = 
{
	&m15572_MI,
	&t1512_TI,
	&m20882_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2735_0_0_0;
extern Il2CppType t2735_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2735_TI;
extern Il2CppGenericClass t2735_GC;
extern TypeInfo t29_TI;
TypeInfo t2735_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2735_MIs, t2735_PIs, t2735_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2735_TI, t2735_ITIs, t2735_VT, &EmptyCustomAttributesCache, &t2735_TI, &t2735_0_0_0, &t2735_1_0_0, t2735_IOs, &t2735_GC, NULL, NULL, NULL, t2735_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2735)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4734_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo m27619_MI;
extern MethodInfo m27620_MI;
static PropertyInfo t4734____Item_PropertyInfo = 
{
	&t4734_TI, "Item", &m27619_MI, &m27620_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4734_PIs[] =
{
	&t4734____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1512_0_0_0;
static ParameterInfo t4734_m27621_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1512_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27621_MI = 
{
	"IndexOf", NULL, &t4734_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4734_m27621_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1512_0_0_0;
static ParameterInfo t4734_m27622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1512_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27622_MI = 
{
	"Insert", NULL, &t4734_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4734_m27622_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4734_m27623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27623_MI = 
{
	"RemoveAt", NULL, &t4734_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4734_m27623_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4734_m27619_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t1512_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27619_MI = 
{
	"get_Item", NULL, &t4734_TI, &t1512_0_0_0, RuntimeInvoker_t28_t47, t4734_m27619_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1512_0_0_0;
static ParameterInfo t4734_m27620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1512_0_0_0},
};
extern TypeInfo t4734_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27620_MI = 
{
	"set_Item", NULL, &t4734_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4734_m27620_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4734_MIs[] =
{
	&m27621_MI,
	&m27622_MI,
	&m27623_MI,
	&m27619_MI,
	&m27620_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4733_TI;
extern TypeInfo t4735_TI;
static TypeInfo* t4734_ITIs[] = 
{
	&t611_TI,
	&t4733_TI,
	&t4735_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4734_0_0_0;
extern Il2CppType t4734_1_0_0;
struct t4734;
extern TypeInfo t4734_TI;
extern Il2CppGenericClass t4734_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4734_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4734_MIs, t4734_PIs, NULL, NULL, NULL, NULL, NULL, &t4734_TI, t4734_ITIs, NULL, &t1418__CustomAttributeCache, &t4734_TI, &t4734_0_0_0, &t4734_1_0_0, NULL, &t4734_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3656_TI;

#include "t1298.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo m27624_MI;
static PropertyInfo t3656____Current_PropertyInfo = 
{
	&t3656_TI, "Current", &m27624_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3656_PIs[] =
{
	&t3656____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3656_TI;
extern Il2CppType t1298_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27624_MI = 
{
	"get_Current", NULL, &t3656_TI, &t1298_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3656_MIs[] =
{
	&m27624_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3656_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3656_0_0_0;
extern Il2CppType t3656_1_0_0;
struct t3656;
extern TypeInfo t3656_TI;
extern Il2CppGenericClass t3656_GC;
TypeInfo t3656_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3656_MIs, t3656_PIs, NULL, NULL, NULL, NULL, NULL, &t3656_TI, t3656_ITIs, NULL, &EmptyCustomAttributesCache, &t3656_TI, &t3656_0_0_0, &t3656_1_0_0, NULL, &t3656_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2736.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2736_TI;
#include "t2736MD.h"

extern TypeInfo t2736_TI;
extern TypeInfo t1298_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15577_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20893_MI;
struct t29;
#define m20893(__this, p0, method) (t1298 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20893_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType t29_0_0_1;
FieldInfo t2736_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2736_TI, offsetof(t2736, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2736_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2736_TI, offsetof(t2736, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2736_FIs[] =
{
	&t2736_f0_FieldInfo,
	&t2736_f1_FieldInfo,
	NULL
};
extern MethodInfo m15574_MI;
static PropertyInfo t2736____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2736_TI, "System.Collections.IEnumerator.Current", &m15574_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15577_MI;
static PropertyInfo t2736____Current_PropertyInfo = 
{
	&t2736_TI, "Current", &m15577_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2736_PIs[] =
{
	&t2736____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2736____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2736_m15573_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2736_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15573_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2736_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2736_m15573_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15574_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2736_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15575_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2736_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15576_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2736_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2736_TI;
extern Il2CppType t1298_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15577_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2736_TI, &t1298_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2736_MIs[] =
{
	&m15573_MI,
	&m15574_MI,
	&m15575_MI,
	&m15576_MI,
	&m15577_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15574_MI;
extern MethodInfo m15576_MI;
extern MethodInfo m15575_MI;
extern MethodInfo m15577_MI;
static MethodInfo* t2736_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15574_MI,
	&m15576_MI,
	&m15575_MI,
	&m15577_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3656_TI;
static TypeInfo* t2736_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3656_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3656_TI;
static Il2CppInterfaceOffsetPair t2736_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3656_TI, 7},
};
extern MethodInfo m15577_MI;
extern TypeInfo t1298_TI;
extern MethodInfo m20893_MI;
static void* t2736_RGCTXData[3] = 
{
	&m15577_MI,
	&t1298_TI,
	&m20893_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2736_0_0_0;
extern Il2CppType t2736_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2736_TI;
extern Il2CppGenericClass t2736_GC;
extern TypeInfo t29_TI;
TypeInfo t2736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2736_MIs, t2736_PIs, t2736_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2736_TI, t2736_ITIs, t2736_VT, &EmptyCustomAttributesCache, &t2736_TI, &t2736_0_0_0, &t2736_1_0_0, t2736_IOs, &t2736_GC, NULL, NULL, NULL, t2736_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2736)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4736_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo m27625_MI;
static PropertyInfo t4736____Count_PropertyInfo = 
{
	&t4736_TI, "Count", &m27625_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27626_MI;
static PropertyInfo t4736____IsReadOnly_PropertyInfo = 
{
	&t4736_TI, "IsReadOnly", &m27626_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4736_PIs[] =
{
	&t4736____Count_PropertyInfo,
	&t4736____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4736_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27625_MI = 
{
	"get_Count", NULL, &t4736_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4736_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27626_MI = 
{
	"get_IsReadOnly", NULL, &t4736_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1298_0_0_0;
static ParameterInfo t4736_m27627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1298_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27627_MI = 
{
	"Add", NULL, &t4736_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4736_m27627_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4736_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27628_MI = 
{
	"Clear", NULL, &t4736_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1298_0_0_0;
static ParameterInfo t4736_m27629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1298_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27629_MI = 
{
	"Contains", NULL, &t4736_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4736_m27629_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1550_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4736_m27630_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1550_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27630_MI = 
{
	"CopyTo", NULL, &t4736_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4736_m27630_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1298_0_0_0;
static ParameterInfo t4736_m27631_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1298_0_0_0},
};
extern TypeInfo t4736_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27631_MI = 
{
	"Remove", NULL, &t4736_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4736_m27631_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4736_MIs[] =
{
	&m27625_MI,
	&m27626_MI,
	&m27627_MI,
	&m27628_MI,
	&m27629_MI,
	&m27630_MI,
	&m27631_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4738_TI;
static TypeInfo* t4736_ITIs[] = 
{
	&t611_TI,
	&t4738_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4736_0_0_0;
extern Il2CppType t4736_1_0_0;
struct t4736;
extern TypeInfo t4736_TI;
extern Il2CppGenericClass t4736_GC;
TypeInfo t4736_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4736_MIs, t4736_PIs, NULL, NULL, NULL, NULL, NULL, &t4736_TI, t4736_ITIs, NULL, &EmptyCustomAttributesCache, &t4736_TI, &t4736_0_0_0, &t4736_1_0_0, NULL, &t4736_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4738_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern TypeInfo t4738_TI;
extern Il2CppType t3656_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27632_MI = 
{
	"GetEnumerator", NULL, &t4738_TI, &t3656_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4738_MIs[] =
{
	&m27632_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4738_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4738_0_0_0;
extern Il2CppType t4738_1_0_0;
struct t4738;
extern TypeInfo t4738_TI;
extern Il2CppGenericClass t4738_GC;
TypeInfo t4738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4738_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4738_TI, t4738_ITIs, NULL, &EmptyCustomAttributesCache, &t4738_TI, &t4738_0_0_0, &t4738_1_0_0, NULL, &t4738_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4737_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo m27633_MI;
extern MethodInfo m27634_MI;
static PropertyInfo t4737____Item_PropertyInfo = 
{
	&t4737_TI, "Item", &m27633_MI, &m27634_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4737_PIs[] =
{
	&t4737____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1298_0_0_0;
static ParameterInfo t4737_m27635_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1298_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27635_MI = 
{
	"IndexOf", NULL, &t4737_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4737_m27635_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1298_0_0_0;
static ParameterInfo t4737_m27636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1298_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27636_MI = 
{
	"Insert", NULL, &t4737_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4737_m27636_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4737_m27637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27637_MI = 
{
	"RemoveAt", NULL, &t4737_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4737_m27637_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4737_m27633_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t1298_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27633_MI = 
{
	"get_Item", NULL, &t4737_TI, &t1298_0_0_0, RuntimeInvoker_t28_t47, t4737_m27633_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1298_0_0_0;
static ParameterInfo t4737_m27634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1298_0_0_0},
};
extern TypeInfo t4737_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27634_MI = 
{
	"set_Item", NULL, &t4737_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4737_m27634_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4737_MIs[] =
{
	&m27635_MI,
	&m27636_MI,
	&m27637_MI,
	&m27633_MI,
	&m27634_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4736_TI;
extern TypeInfo t4738_TI;
static TypeInfo* t4737_ITIs[] = 
{
	&t611_TI,
	&t4736_TI,
	&t4738_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4737_0_0_0;
extern Il2CppType t4737_1_0_0;
struct t4737;
extern TypeInfo t4737_TI;
extern Il2CppGenericClass t4737_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4737_MIs, t4737_PIs, NULL, NULL, NULL, NULL, NULL, &t4737_TI, t4737_ITIs, NULL, &t1418__CustomAttributeCache, &t4737_TI, &t4737_0_0_0, &t4737_1_0_0, NULL, &t4737_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3657_TI;

#include "t403.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo m27638_MI;
static PropertyInfo t3657____Current_PropertyInfo = 
{
	&t3657_TI, "Current", &m27638_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3657_PIs[] =
{
	&t3657____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3657_TI;
extern Il2CppType t403_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27638_MI = 
{
	"get_Current", NULL, &t3657_TI, &t403_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3657_MIs[] =
{
	&m27638_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3657_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3657_0_0_0;
extern Il2CppType t3657_1_0_0;
struct t3657;
extern TypeInfo t3657_TI;
extern Il2CppGenericClass t3657_GC;
TypeInfo t3657_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3657_MIs, t3657_PIs, NULL, NULL, NULL, NULL, NULL, &t3657_TI, t3657_ITIs, NULL, &EmptyCustomAttributesCache, &t3657_TI, &t3657_0_0_0, &t3657_1_0_0, NULL, &t3657_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2737.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2737_TI;
#include "t2737MD.h"

extern TypeInfo t2737_TI;
extern TypeInfo t403_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15582_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20904_MI;
struct t29;
#define m20904(__this, p0, method) (t403 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20904_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2737_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2737_TI, offsetof(t2737, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2737_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2737_TI, offsetof(t2737, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2737_FIs[] =
{
	&t2737_f0_FieldInfo,
	&t2737_f1_FieldInfo,
	NULL
};
extern MethodInfo m15579_MI;
static PropertyInfo t2737____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2737_TI, "System.Collections.IEnumerator.Current", &m15579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15582_MI;
static PropertyInfo t2737____Current_PropertyInfo = 
{
	&t2737_TI, "Current", &m15582_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2737_PIs[] =
{
	&t2737____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2737____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2737_m15578_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2737_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15578_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2737_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2737_m15578_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15579_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2737_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15580_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2737_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15581_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2737_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2737_TI;
extern Il2CppType t403_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15582_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2737_TI, &t403_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2737_MIs[] =
{
	&m15578_MI,
	&m15579_MI,
	&m15580_MI,
	&m15581_MI,
	&m15582_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15579_MI;
extern MethodInfo m15581_MI;
extern MethodInfo m15580_MI;
extern MethodInfo m15582_MI;
static MethodInfo* t2737_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15579_MI,
	&m15581_MI,
	&m15580_MI,
	&m15582_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3657_TI;
static TypeInfo* t2737_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3657_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3657_TI;
static Il2CppInterfaceOffsetPair t2737_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3657_TI, 7},
};
extern MethodInfo m15582_MI;
extern TypeInfo t403_TI;
extern MethodInfo m20904_MI;
static void* t2737_RGCTXData[3] = 
{
	&m15582_MI,
	&t403_TI,
	&m20904_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2737_0_0_0;
extern Il2CppType t2737_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2737_TI;
extern Il2CppGenericClass t2737_GC;
extern TypeInfo t29_TI;
TypeInfo t2737_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2737_MIs, t2737_PIs, t2737_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2737_TI, t2737_ITIs, t2737_VT, &EmptyCustomAttributesCache, &t2737_TI, &t2737_0_0_0, &t2737_1_0_0, t2737_IOs, &t2737_GC, NULL, NULL, NULL, t2737_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2737)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4739_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo m27639_MI;
static PropertyInfo t4739____Count_PropertyInfo = 
{
	&t4739_TI, "Count", &m27639_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27640_MI;
static PropertyInfo t4739____IsReadOnly_PropertyInfo = 
{
	&t4739_TI, "IsReadOnly", &m27640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4739_PIs[] =
{
	&t4739____Count_PropertyInfo,
	&t4739____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4739_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27639_MI = 
{
	"get_Count", NULL, &t4739_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4739_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27640_MI = 
{
	"get_IsReadOnly", NULL, &t4739_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4739_m27641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27641_MI = 
{
	"Add", NULL, &t4739_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4739_m27641_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4739_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27642_MI = 
{
	"Clear", NULL, &t4739_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4739_m27643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27643_MI = 
{
	"Contains", NULL, &t4739_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4739_m27643_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3003_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4739_m27644_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3003_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27644_MI = 
{
	"CopyTo", NULL, &t4739_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4739_m27644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4739_m27645_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4739_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27645_MI = 
{
	"Remove", NULL, &t4739_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4739_m27645_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4739_MIs[] =
{
	&m27639_MI,
	&m27640_MI,
	&m27641_MI,
	&m27642_MI,
	&m27643_MI,
	&m27644_MI,
	&m27645_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4741_TI;
static TypeInfo* t4739_ITIs[] = 
{
	&t611_TI,
	&t4741_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4739_0_0_0;
extern Il2CppType t4739_1_0_0;
struct t4739;
extern TypeInfo t4739_TI;
extern Il2CppGenericClass t4739_GC;
TypeInfo t4739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4739_MIs, t4739_PIs, NULL, NULL, NULL, NULL, NULL, &t4739_TI, t4739_ITIs, NULL, &EmptyCustomAttributesCache, &t4739_TI, &t4739_0_0_0, &t4739_1_0_0, NULL, &t4739_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4741_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern TypeInfo t4741_TI;
extern Il2CppType t3657_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27646_MI = 
{
	"GetEnumerator", NULL, &t4741_TI, &t3657_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4741_MIs[] =
{
	&m27646_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4741_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4741_0_0_0;
extern Il2CppType t4741_1_0_0;
struct t4741;
extern TypeInfo t4741_TI;
extern Il2CppGenericClass t4741_GC;
TypeInfo t4741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4741_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4741_TI, t4741_ITIs, NULL, &EmptyCustomAttributesCache, &t4741_TI, &t4741_0_0_0, &t4741_1_0_0, NULL, &t4741_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4740_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo m27647_MI;
extern MethodInfo m27648_MI;
static PropertyInfo t4740____Item_PropertyInfo = 
{
	&t4740_TI, "Item", &m27647_MI, &m27648_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4740_PIs[] =
{
	&t4740____Item_PropertyInfo,
	NULL
};
extern Il2CppType t403_0_0_0;
static ParameterInfo t4740_m27649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27649_MI = 
{
	"IndexOf", NULL, &t4740_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4740_m27649_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t403_0_0_0;
static ParameterInfo t4740_m27650_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27650_MI = 
{
	"Insert", NULL, &t4740_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4740_m27650_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4740_m27651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27651_MI = 
{
	"RemoveAt", NULL, &t4740_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4740_m27651_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4740_m27647_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t403_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27647_MI = 
{
	"get_Item", NULL, &t4740_TI, &t403_0_0_0, RuntimeInvoker_t28_t47, t4740_m27647_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t403_0_0_0;
static ParameterInfo t4740_m27648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t403_0_0_0},
};
extern TypeInfo t4740_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27648_MI = 
{
	"set_Item", NULL, &t4740_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4740_m27648_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4740_MIs[] =
{
	&m27649_MI,
	&m27650_MI,
	&m27651_MI,
	&m27647_MI,
	&m27648_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4739_TI;
extern TypeInfo t4741_TI;
static TypeInfo* t4740_ITIs[] = 
{
	&t611_TI,
	&t4739_TI,
	&t4741_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4740_0_0_0;
extern Il2CppType t4740_1_0_0;
struct t4740;
extern TypeInfo t4740_TI;
extern Il2CppGenericClass t4740_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4740_MIs, t4740_PIs, NULL, NULL, NULL, NULL, NULL, &t4740_TI, t4740_ITIs, NULL, &t1418__CustomAttributeCache, &t4740_TI, &t4740_0_0_0, &t4740_1_0_0, NULL, &t4740_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3658_TI;

#include "t750.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m27652_MI;
static PropertyInfo t3658____Current_PropertyInfo = 
{
	&t3658_TI, "Current", &m27652_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3658_PIs[] =
{
	&t3658____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3658_TI;
extern Il2CppType t750_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27652_MI = 
{
	"get_Current", NULL, &t3658_TI, &t750_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3658_MIs[] =
{
	&m27652_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3658_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3658_0_0_0;
extern Il2CppType t3658_1_0_0;
struct t3658;
extern TypeInfo t3658_TI;
extern Il2CppGenericClass t3658_GC;
TypeInfo t3658_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3658_MIs, t3658_PIs, NULL, NULL, NULL, NULL, NULL, &t3658_TI, t3658_ITIs, NULL, &EmptyCustomAttributesCache, &t3658_TI, &t3658_0_0_0, &t3658_1_0_0, NULL, &t3658_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2738.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2738_TI;
#include "t2738MD.h"

extern TypeInfo t2738_TI;
extern TypeInfo t750_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15587_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20915_MI;
struct t29;
#define m20915(__this, p0, method) (t750 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20915_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2738_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2738_TI, offsetof(t2738, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2738_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2738_TI, offsetof(t2738, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2738_FIs[] =
{
	&t2738_f0_FieldInfo,
	&t2738_f1_FieldInfo,
	NULL
};
extern MethodInfo m15584_MI;
static PropertyInfo t2738____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2738_TI, "System.Collections.IEnumerator.Current", &m15584_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15587_MI;
static PropertyInfo t2738____Current_PropertyInfo = 
{
	&t2738_TI, "Current", &m15587_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2738_PIs[] =
{
	&t2738____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2738____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2738_m15583_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2738_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15583_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2738_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2738_m15583_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15584_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2738_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15585_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2738_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15586_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2738_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2738_TI;
extern Il2CppType t750_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15587_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2738_TI, &t750_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2738_MIs[] =
{
	&m15583_MI,
	&m15584_MI,
	&m15585_MI,
	&m15586_MI,
	&m15587_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15584_MI;
extern MethodInfo m15586_MI;
extern MethodInfo m15585_MI;
extern MethodInfo m15587_MI;
static MethodInfo* t2738_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15584_MI,
	&m15586_MI,
	&m15585_MI,
	&m15587_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3658_TI;
static TypeInfo* t2738_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3658_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3658_TI;
static Il2CppInterfaceOffsetPair t2738_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3658_TI, 7},
};
extern MethodInfo m15587_MI;
extern TypeInfo t750_TI;
extern MethodInfo m20915_MI;
static void* t2738_RGCTXData[3] = 
{
	&m15587_MI,
	&t750_TI,
	&m20915_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2738_0_0_0;
extern Il2CppType t2738_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2738_TI;
extern Il2CppGenericClass t2738_GC;
extern TypeInfo t29_TI;
TypeInfo t2738_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2738_MIs, t2738_PIs, t2738_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2738_TI, t2738_ITIs, t2738_VT, &EmptyCustomAttributesCache, &t2738_TI, &t2738_0_0_0, &t2738_1_0_0, t2738_IOs, &t2738_GC, NULL, NULL, NULL, t2738_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2738)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4742_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m27653_MI;
static PropertyInfo t4742____Count_PropertyInfo = 
{
	&t4742_TI, "Count", &m27653_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27654_MI;
static PropertyInfo t4742____IsReadOnly_PropertyInfo = 
{
	&t4742_TI, "IsReadOnly", &m27654_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4742_PIs[] =
{
	&t4742____Count_PropertyInfo,
	&t4742____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4742_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27653_MI = 
{
	"get_Count", NULL, &t4742_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4742_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27654_MI = 
{
	"get_IsReadOnly", NULL, &t4742_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t750_0_0_0;
static ParameterInfo t4742_m27655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t750_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27655_MI = 
{
	"Add", NULL, &t4742_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4742_m27655_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4742_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27656_MI = 
{
	"Clear", NULL, &t4742_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t750_0_0_0;
static ParameterInfo t4742_m27657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t750_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27657_MI = 
{
	"Contains", NULL, &t4742_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4742_m27657_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3004_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4742_m27658_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3004_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27658_MI = 
{
	"CopyTo", NULL, &t4742_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4742_m27658_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t750_0_0_0;
static ParameterInfo t4742_m27659_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t750_0_0_0},
};
extern TypeInfo t4742_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27659_MI = 
{
	"Remove", NULL, &t4742_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4742_m27659_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4742_MIs[] =
{
	&m27653_MI,
	&m27654_MI,
	&m27655_MI,
	&m27656_MI,
	&m27657_MI,
	&m27658_MI,
	&m27659_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4744_TI;
static TypeInfo* t4742_ITIs[] = 
{
	&t611_TI,
	&t4744_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4742_0_0_0;
extern Il2CppType t4742_1_0_0;
struct t4742;
extern TypeInfo t4742_TI;
extern Il2CppGenericClass t4742_GC;
TypeInfo t4742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4742_MIs, t4742_PIs, NULL, NULL, NULL, NULL, NULL, &t4742_TI, t4742_ITIs, NULL, &EmptyCustomAttributesCache, &t4742_TI, &t4742_0_0_0, &t4742_1_0_0, NULL, &t4742_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4744_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern TypeInfo t4744_TI;
extern Il2CppType t3658_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27660_MI = 
{
	"GetEnumerator", NULL, &t4744_TI, &t3658_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4744_MIs[] =
{
	&m27660_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4744_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4744_0_0_0;
extern Il2CppType t4744_1_0_0;
struct t4744;
extern TypeInfo t4744_TI;
extern Il2CppGenericClass t4744_GC;
TypeInfo t4744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4744_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4744_TI, t4744_ITIs, NULL, &EmptyCustomAttributesCache, &t4744_TI, &t4744_0_0_0, &t4744_1_0_0, NULL, &t4744_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4743_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo m27661_MI;
extern MethodInfo m27662_MI;
static PropertyInfo t4743____Item_PropertyInfo = 
{
	&t4743_TI, "Item", &m27661_MI, &m27662_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4743_PIs[] =
{
	&t4743____Item_PropertyInfo,
	NULL
};
extern Il2CppType t750_0_0_0;
static ParameterInfo t4743_m27663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t750_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27663_MI = 
{
	"IndexOf", NULL, &t4743_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4743_m27663_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t750_0_0_0;
static ParameterInfo t4743_m27664_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t750_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27664_MI = 
{
	"Insert", NULL, &t4743_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4743_m27664_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4743_m27665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27665_MI = 
{
	"RemoveAt", NULL, &t4743_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4743_m27665_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4743_m27661_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t750_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27661_MI = 
{
	"get_Item", NULL, &t4743_TI, &t750_0_0_0, RuntimeInvoker_t28_t47, t4743_m27661_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t750_0_0_0;
static ParameterInfo t4743_m27662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t750_0_0_0},
};
extern TypeInfo t4743_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27662_MI = 
{
	"set_Item", NULL, &t4743_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4743_m27662_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4743_MIs[] =
{
	&m27663_MI,
	&m27664_MI,
	&m27665_MI,
	&m27661_MI,
	&m27662_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4742_TI;
extern TypeInfo t4744_TI;
static TypeInfo* t4743_ITIs[] = 
{
	&t611_TI,
	&t4742_TI,
	&t4744_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4743_0_0_0;
extern Il2CppType t4743_1_0_0;
struct t4743;
extern TypeInfo t4743_TI;
extern Il2CppGenericClass t4743_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4743_MIs, t4743_PIs, NULL, NULL, NULL, NULL, NULL, &t4743_TI, t4743_ITIs, NULL, &t1418__CustomAttributeCache, &t4743_TI, &t4743_0_0_0, &t4743_1_0_0, NULL, &t4743_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3659_TI;

#include "t344.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo m27666_MI;
static PropertyInfo t3659____Current_PropertyInfo = 
{
	&t3659_TI, "Current", &m27666_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3659_PIs[] =
{
	&t3659____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3659_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27666_MI = 
{
	"get_Current", NULL, &t3659_TI, &t344_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3659_MIs[] =
{
	&m27666_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3659_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3659_0_0_0;
extern Il2CppType t3659_1_0_0;
struct t3659;
extern TypeInfo t3659_TI;
extern Il2CppGenericClass t3659_GC;
TypeInfo t3659_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3659_MIs, t3659_PIs, NULL, NULL, NULL, NULL, NULL, &t3659_TI, t3659_ITIs, NULL, &EmptyCustomAttributesCache, &t3659_TI, &t3659_0_0_0, &t3659_1_0_0, NULL, &t3659_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2739.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2739_TI;
#include "t2739MD.h"

extern TypeInfo t2739_TI;
extern TypeInfo t344_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15592_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20926_MI;
struct t29;
#define m20926(__this, p0, method) (t344 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20926_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2739_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2739_TI, offsetof(t2739, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2739_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2739_TI, offsetof(t2739, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2739_FIs[] =
{
	&t2739_f0_FieldInfo,
	&t2739_f1_FieldInfo,
	NULL
};
extern MethodInfo m15589_MI;
static PropertyInfo t2739____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2739_TI, "System.Collections.IEnumerator.Current", &m15589_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15592_MI;
static PropertyInfo t2739____Current_PropertyInfo = 
{
	&t2739_TI, "Current", &m15592_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2739_PIs[] =
{
	&t2739____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2739____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2739_m15588_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2739_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15588_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2739_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2739_m15588_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15589_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2739_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15590_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2739_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15591_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2739_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2739_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15592_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2739_TI, &t344_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2739_MIs[] =
{
	&m15588_MI,
	&m15589_MI,
	&m15590_MI,
	&m15591_MI,
	&m15592_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15589_MI;
extern MethodInfo m15591_MI;
extern MethodInfo m15590_MI;
extern MethodInfo m15592_MI;
static MethodInfo* t2739_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15589_MI,
	&m15591_MI,
	&m15590_MI,
	&m15592_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3659_TI;
static TypeInfo* t2739_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3659_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3659_TI;
static Il2CppInterfaceOffsetPair t2739_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3659_TI, 7},
};
extern MethodInfo m15592_MI;
extern TypeInfo t344_TI;
extern MethodInfo m20926_MI;
static void* t2739_RGCTXData[3] = 
{
	&m15592_MI,
	&t344_TI,
	&m20926_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2739_0_0_0;
extern Il2CppType t2739_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2739_TI;
extern Il2CppGenericClass t2739_GC;
extern TypeInfo t29_TI;
TypeInfo t2739_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2739_MIs, t2739_PIs, t2739_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2739_TI, t2739_ITIs, t2739_VT, &EmptyCustomAttributesCache, &t2739_TI, &t2739_0_0_0, &t2739_1_0_0, t2739_IOs, &t2739_GC, NULL, NULL, NULL, t2739_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2739)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4745_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>
extern MethodInfo m27667_MI;
static PropertyInfo t4745____Count_PropertyInfo = 
{
	&t4745_TI, "Count", &m27667_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27668_MI;
static PropertyInfo t4745____IsReadOnly_PropertyInfo = 
{
	&t4745_TI, "IsReadOnly", &m27668_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4745_PIs[] =
{
	&t4745____Count_PropertyInfo,
	&t4745____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4745_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27667_MI = 
{
	"get_Count", NULL, &t4745_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4745_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27668_MI = 
{
	"get_IsReadOnly", NULL, &t4745_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4745_m27669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27669_MI = 
{
	"Add", NULL, &t4745_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4745_m27669_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4745_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27670_MI = 
{
	"Clear", NULL, &t4745_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4745_m27671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27671_MI = 
{
	"Contains", NULL, &t4745_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4745_m27671_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3005_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4745_m27672_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3005_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27672_MI = 
{
	"CopyTo", NULL, &t4745_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4745_m27672_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4745_m27673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4745_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27673_MI = 
{
	"Remove", NULL, &t4745_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4745_m27673_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4745_MIs[] =
{
	&m27667_MI,
	&m27668_MI,
	&m27669_MI,
	&m27670_MI,
	&m27671_MI,
	&m27672_MI,
	&m27673_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4747_TI;
static TypeInfo* t4745_ITIs[] = 
{
	&t611_TI,
	&t4747_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4745_0_0_0;
extern Il2CppType t4745_1_0_0;
struct t4745;
extern TypeInfo t4745_TI;
extern Il2CppGenericClass t4745_GC;
TypeInfo t4745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4745_MIs, t4745_PIs, NULL, NULL, NULL, NULL, NULL, &t4745_TI, t4745_ITIs, NULL, &EmptyCustomAttributesCache, &t4745_TI, &t4745_0_0_0, &t4745_1_0_0, NULL, &t4745_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4747_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>
extern TypeInfo t4747_TI;
extern Il2CppType t3659_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27674_MI = 
{
	"GetEnumerator", NULL, &t4747_TI, &t3659_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4747_MIs[] =
{
	&m27674_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4747_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4747_0_0_0;
extern Il2CppType t4747_1_0_0;
struct t4747;
extern TypeInfo t4747_TI;
extern Il2CppGenericClass t4747_GC;
TypeInfo t4747_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4747_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4747_TI, t4747_ITIs, NULL, &EmptyCustomAttributesCache, &t4747_TI, &t4747_0_0_0, &t4747_1_0_0, NULL, &t4747_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4746_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.ObsoleteAttribute>
extern MethodInfo m27675_MI;
extern MethodInfo m27676_MI;
static PropertyInfo t4746____Item_PropertyInfo = 
{
	&t4746_TI, "Item", &m27675_MI, &m27676_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4746_PIs[] =
{
	&t4746____Item_PropertyInfo,
	NULL
};
extern Il2CppType t344_0_0_0;
static ParameterInfo t4746_m27677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27677_MI = 
{
	"IndexOf", NULL, &t4746_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4746_m27677_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t4746_m27678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27678_MI = 
{
	"Insert", NULL, &t4746_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4746_m27678_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4746_m27679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27679_MI = 
{
	"RemoveAt", NULL, &t4746_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4746_m27679_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4746_m27675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t344_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27675_MI = 
{
	"get_Item", NULL, &t4746_TI, &t344_0_0_0, RuntimeInvoker_t28_t47, t4746_m27675_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t344_0_0_0;
static ParameterInfo t4746_m27676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t344_0_0_0},
};
extern TypeInfo t4746_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27676_MI = 
{
	"set_Item", NULL, &t4746_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4746_m27676_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4746_MIs[] =
{
	&m27677_MI,
	&m27678_MI,
	&m27679_MI,
	&m27675_MI,
	&m27676_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4745_TI;
extern TypeInfo t4747_TI;
static TypeInfo* t4746_ITIs[] = 
{
	&t611_TI,
	&t4745_TI,
	&t4747_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4746_0_0_0;
extern Il2CppType t4746_1_0_0;
struct t4746;
extern TypeInfo t4746_TI;
extern Il2CppGenericClass t4746_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4746_MIs, t4746_PIs, NULL, NULL, NULL, NULL, NULL, &t4746_TI, t4746_ITIs, NULL, &t1418__CustomAttributeCache, &t4746_TI, &t4746_0_0_0, &t4746_1_0_0, NULL, &t4746_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3660_TI;

#include "t751.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m27680_MI;
static PropertyInfo t3660____Current_PropertyInfo = 
{
	&t3660_TI, "Current", &m27680_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3660_PIs[] =
{
	&t3660____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3660_TI;
extern Il2CppType t751_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27680_MI = 
{
	"get_Current", NULL, &t3660_TI, &t751_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3660_MIs[] =
{
	&m27680_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3660_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3660_0_0_0;
extern Il2CppType t3660_1_0_0;
struct t3660;
extern TypeInfo t3660_TI;
extern Il2CppGenericClass t3660_GC;
TypeInfo t3660_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3660_MIs, t3660_PIs, NULL, NULL, NULL, NULL, NULL, &t3660_TI, t3660_ITIs, NULL, &EmptyCustomAttributesCache, &t3660_TI, &t3660_0_0_0, &t3660_1_0_0, NULL, &t3660_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2740_TI;
#include "t2740MD.h"

extern TypeInfo t2740_TI;
extern TypeInfo t751_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15597_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20937_MI;
struct t29;
#define m20937(__this, p0, method) (t751 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20937_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2740_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2740_TI, offsetof(t2740, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2740_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2740_TI, offsetof(t2740, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2740_FIs[] =
{
	&t2740_f0_FieldInfo,
	&t2740_f1_FieldInfo,
	NULL
};
extern MethodInfo m15594_MI;
static PropertyInfo t2740____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2740_TI, "System.Collections.IEnumerator.Current", &m15594_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15597_MI;
static PropertyInfo t2740____Current_PropertyInfo = 
{
	&t2740_TI, "Current", &m15597_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2740_PIs[] =
{
	&t2740____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2740____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2740_m15593_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2740_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15593_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2740_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2740_m15593_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15594_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2740_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15595_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2740_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15596_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2740_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2740_TI;
extern Il2CppType t751_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15597_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2740_TI, &t751_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2740_MIs[] =
{
	&m15593_MI,
	&m15594_MI,
	&m15595_MI,
	&m15596_MI,
	&m15597_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15594_MI;
extern MethodInfo m15596_MI;
extern MethodInfo m15595_MI;
extern MethodInfo m15597_MI;
static MethodInfo* t2740_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15594_MI,
	&m15596_MI,
	&m15595_MI,
	&m15597_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3660_TI;
static TypeInfo* t2740_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3660_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3660_TI;
static Il2CppInterfaceOffsetPair t2740_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3660_TI, 7},
};
extern MethodInfo m15597_MI;
extern TypeInfo t751_TI;
extern MethodInfo m20937_MI;
static void* t2740_RGCTXData[3] = 
{
	&m15597_MI,
	&t751_TI,
	&m20937_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2740_0_0_0;
extern Il2CppType t2740_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2740_TI;
extern Il2CppGenericClass t2740_GC;
extern TypeInfo t29_TI;
TypeInfo t2740_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2740_MIs, t2740_PIs, t2740_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2740_TI, t2740_ITIs, t2740_VT, &EmptyCustomAttributesCache, &t2740_TI, &t2740_0_0_0, &t2740_1_0_0, t2740_IOs, &t2740_GC, NULL, NULL, NULL, t2740_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2740)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4748_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m27681_MI;
static PropertyInfo t4748____Count_PropertyInfo = 
{
	&t4748_TI, "Count", &m27681_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27682_MI;
static PropertyInfo t4748____IsReadOnly_PropertyInfo = 
{
	&t4748_TI, "IsReadOnly", &m27682_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4748_PIs[] =
{
	&t4748____Count_PropertyInfo,
	&t4748____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4748_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27681_MI = 
{
	"get_Count", NULL, &t4748_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4748_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27682_MI = 
{
	"get_IsReadOnly", NULL, &t4748_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t751_0_0_0;
static ParameterInfo t4748_m27683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t751_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27683_MI = 
{
	"Add", NULL, &t4748_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4748_m27683_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4748_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27684_MI = 
{
	"Clear", NULL, &t4748_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t751_0_0_0;
static ParameterInfo t4748_m27685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t751_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27685_MI = 
{
	"Contains", NULL, &t4748_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4748_m27685_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3006_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4748_m27686_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3006_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27686_MI = 
{
	"CopyTo", NULL, &t4748_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4748_m27686_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t751_0_0_0;
static ParameterInfo t4748_m27687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t751_0_0_0},
};
extern TypeInfo t4748_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27687_MI = 
{
	"Remove", NULL, &t4748_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4748_m27687_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4748_MIs[] =
{
	&m27681_MI,
	&m27682_MI,
	&m27683_MI,
	&m27684_MI,
	&m27685_MI,
	&m27686_MI,
	&m27687_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4750_TI;
static TypeInfo* t4748_ITIs[] = 
{
	&t611_TI,
	&t4750_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4748_0_0_0;
extern Il2CppType t4748_1_0_0;
struct t4748;
extern TypeInfo t4748_TI;
extern Il2CppGenericClass t4748_GC;
TypeInfo t4748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4748_MIs, t4748_PIs, NULL, NULL, NULL, NULL, NULL, &t4748_TI, t4748_ITIs, NULL, &EmptyCustomAttributesCache, &t4748_TI, &t4748_0_0_0, &t4748_1_0_0, NULL, &t4748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4750_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>
extern TypeInfo t4750_TI;
extern Il2CppType t3660_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27688_MI = 
{
	"GetEnumerator", NULL, &t4750_TI, &t3660_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4750_MIs[] =
{
	&m27688_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4750_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4750_0_0_0;
extern Il2CppType t4750_1_0_0;
struct t4750;
extern TypeInfo t4750_TI;
extern Il2CppGenericClass t4750_GC;
TypeInfo t4750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4750_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4750_TI, t4750_ITIs, NULL, &EmptyCustomAttributesCache, &t4750_TI, &t4750_0_0_0, &t4750_1_0_0, NULL, &t4750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4749_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo m27689_MI;
extern MethodInfo m27690_MI;
static PropertyInfo t4749____Item_PropertyInfo = 
{
	&t4749_TI, "Item", &m27689_MI, &m27690_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4749_PIs[] =
{
	&t4749____Item_PropertyInfo,
	NULL
};
extern Il2CppType t751_0_0_0;
static ParameterInfo t4749_m27691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t751_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27691_MI = 
{
	"IndexOf", NULL, &t4749_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4749_m27691_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t751_0_0_0;
static ParameterInfo t4749_m27692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t751_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27692_MI = 
{
	"Insert", NULL, &t4749_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4749_m27692_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4749_m27693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27693_MI = 
{
	"RemoveAt", NULL, &t4749_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4749_m27693_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4749_m27689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t751_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27689_MI = 
{
	"get_Item", NULL, &t4749_TI, &t751_0_0_0, RuntimeInvoker_t28_t47, t4749_m27689_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t751_0_0_0;
static ParameterInfo t4749_m27690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t751_0_0_0},
};
extern TypeInfo t4749_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27690_MI = 
{
	"set_Item", NULL, &t4749_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4749_m27690_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4749_MIs[] =
{
	&m27691_MI,
	&m27692_MI,
	&m27693_MI,
	&m27689_MI,
	&m27690_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4748_TI;
extern TypeInfo t4750_TI;
static TypeInfo* t4749_ITIs[] = 
{
	&t611_TI,
	&t4748_TI,
	&t4750_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4749_0_0_0;
extern Il2CppType t4749_1_0_0;
struct t4749;
extern TypeInfo t4749_TI;
extern Il2CppGenericClass t4749_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4749_MIs, t4749_PIs, NULL, NULL, NULL, NULL, NULL, &t4749_TI, t4749_ITIs, NULL, &t1418__CustomAttributeCache, &t4749_TI, &t4749_0_0_0, &t4749_1_0_0, NULL, &t4749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3661_TI;

#include "t754.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m27694_MI;
static PropertyInfo t3661____Current_PropertyInfo = 
{
	&t3661_TI, "Current", &m27694_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3661_PIs[] =
{
	&t3661____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3661_TI;
extern Il2CppType t754_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27694_MI = 
{
	"get_Current", NULL, &t3661_TI, &t754_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3661_MIs[] =
{
	&m27694_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3661_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3661_0_0_0;
extern Il2CppType t3661_1_0_0;
struct t3661;
extern TypeInfo t3661_TI;
extern Il2CppGenericClass t3661_GC;
TypeInfo t3661_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3661_MIs, t3661_PIs, NULL, NULL, NULL, NULL, NULL, &t3661_TI, t3661_ITIs, NULL, &EmptyCustomAttributesCache, &t3661_TI, &t3661_0_0_0, &t3661_1_0_0, NULL, &t3661_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2741_TI;
#include "t2741MD.h"

extern TypeInfo t2741_TI;
extern TypeInfo t754_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15602_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20948_MI;
struct t29;
#define m20948(__this, p0, method) (t754 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20948_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2741_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2741_TI, offsetof(t2741, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2741_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2741_TI, offsetof(t2741, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2741_FIs[] =
{
	&t2741_f0_FieldInfo,
	&t2741_f1_FieldInfo,
	NULL
};
extern MethodInfo m15599_MI;
static PropertyInfo t2741____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2741_TI, "System.Collections.IEnumerator.Current", &m15599_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15602_MI;
static PropertyInfo t2741____Current_PropertyInfo = 
{
	&t2741_TI, "Current", &m15602_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2741_PIs[] =
{
	&t2741____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2741____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2741_m15598_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2741_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15598_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2741_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2741_m15598_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15599_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2741_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15600_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2741_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15601_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2741_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2741_TI;
extern Il2CppType t754_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15602_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2741_TI, &t754_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2741_MIs[] =
{
	&m15598_MI,
	&m15599_MI,
	&m15600_MI,
	&m15601_MI,
	&m15602_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15599_MI;
extern MethodInfo m15601_MI;
extern MethodInfo m15600_MI;
extern MethodInfo m15602_MI;
static MethodInfo* t2741_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15599_MI,
	&m15601_MI,
	&m15600_MI,
	&m15602_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3661_TI;
static TypeInfo* t2741_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3661_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3661_TI;
static Il2CppInterfaceOffsetPair t2741_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3661_TI, 7},
};
extern MethodInfo m15602_MI;
extern TypeInfo t754_TI;
extern MethodInfo m20948_MI;
static void* t2741_RGCTXData[3] = 
{
	&m15602_MI,
	&t754_TI,
	&m20948_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2741_0_0_0;
extern Il2CppType t2741_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2741_TI;
extern Il2CppGenericClass t2741_GC;
extern TypeInfo t29_TI;
TypeInfo t2741_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2741_MIs, t2741_PIs, t2741_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2741_TI, t2741_ITIs, t2741_VT, &EmptyCustomAttributesCache, &t2741_TI, &t2741_0_0_0, &t2741_1_0_0, t2741_IOs, &t2741_GC, NULL, NULL, NULL, t2741_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2741)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4751_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m27695_MI;
static PropertyInfo t4751____Count_PropertyInfo = 
{
	&t4751_TI, "Count", &m27695_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27696_MI;
static PropertyInfo t4751____IsReadOnly_PropertyInfo = 
{
	&t4751_TI, "IsReadOnly", &m27696_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4751_PIs[] =
{
	&t4751____Count_PropertyInfo,
	&t4751____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4751_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27695_MI = 
{
	"get_Count", NULL, &t4751_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4751_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27696_MI = 
{
	"get_IsReadOnly", NULL, &t4751_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t754_0_0_0;
static ParameterInfo t4751_m27697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27697_MI = 
{
	"Add", NULL, &t4751_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4751_m27697_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4751_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27698_MI = 
{
	"Clear", NULL, &t4751_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t754_0_0_0;
static ParameterInfo t4751_m27699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27699_MI = 
{
	"Contains", NULL, &t4751_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4751_m27699_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3007_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4751_m27700_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3007_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27700_MI = 
{
	"CopyTo", NULL, &t4751_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4751_m27700_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t754_0_0_0;
static ParameterInfo t4751_m27701_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t4751_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27701_MI = 
{
	"Remove", NULL, &t4751_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4751_m27701_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4751_MIs[] =
{
	&m27695_MI,
	&m27696_MI,
	&m27697_MI,
	&m27698_MI,
	&m27699_MI,
	&m27700_MI,
	&m27701_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4753_TI;
static TypeInfo* t4751_ITIs[] = 
{
	&t611_TI,
	&t4753_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4751_0_0_0;
extern Il2CppType t4751_1_0_0;
struct t4751;
extern TypeInfo t4751_TI;
extern Il2CppGenericClass t4751_GC;
TypeInfo t4751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4751_MIs, t4751_PIs, NULL, NULL, NULL, NULL, NULL, &t4751_TI, t4751_ITIs, NULL, &EmptyCustomAttributesCache, &t4751_TI, &t4751_0_0_0, &t4751_1_0_0, NULL, &t4751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4753_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern TypeInfo t4753_TI;
extern Il2CppType t3661_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27702_MI = 
{
	"GetEnumerator", NULL, &t4753_TI, &t3661_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4753_MIs[] =
{
	&m27702_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4753_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4753_0_0_0;
extern Il2CppType t4753_1_0_0;
struct t4753;
extern TypeInfo t4753_TI;
extern Il2CppGenericClass t4753_GC;
TypeInfo t4753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4753_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4753_TI, t4753_ITIs, NULL, &EmptyCustomAttributesCache, &t4753_TI, &t4753_0_0_0, &t4753_1_0_0, NULL, &t4753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4752_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo m27703_MI;
extern MethodInfo m27704_MI;
static PropertyInfo t4752____Item_PropertyInfo = 
{
	&t4752_TI, "Item", &m27703_MI, &m27704_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4752_PIs[] =
{
	&t4752____Item_PropertyInfo,
	NULL
};
extern Il2CppType t754_0_0_0;
static ParameterInfo t4752_m27705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27705_MI = 
{
	"IndexOf", NULL, &t4752_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4752_m27705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t754_0_0_0;
static ParameterInfo t4752_m27706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27706_MI = 
{
	"Insert", NULL, &t4752_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4752_m27706_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4752_m27707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27707_MI = 
{
	"RemoveAt", NULL, &t4752_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4752_m27707_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4752_m27703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t754_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27703_MI = 
{
	"get_Item", NULL, &t4752_TI, &t754_0_0_0, RuntimeInvoker_t28_t47, t4752_m27703_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t754_0_0_0;
static ParameterInfo t4752_m27704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t754_0_0_0},
};
extern TypeInfo t4752_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27704_MI = 
{
	"set_Item", NULL, &t4752_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4752_m27704_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4752_MIs[] =
{
	&m27705_MI,
	&m27706_MI,
	&m27707_MI,
	&m27703_MI,
	&m27704_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4751_TI;
extern TypeInfo t4753_TI;
static TypeInfo* t4752_ITIs[] = 
{
	&t611_TI,
	&t4751_TI,
	&t4753_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4752_0_0_0;
extern Il2CppType t4752_1_0_0;
struct t4752;
extern TypeInfo t4752_TI;
extern Il2CppGenericClass t4752_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4752_MIs, t4752_PIs, NULL, NULL, NULL, NULL, NULL, &t4752_TI, t4752_ITIs, NULL, &t1418__CustomAttributeCache, &t4752_TI, &t4752_0_0_0, &t4752_1_0_0, NULL, &t4752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3662_TI;

#include "t756.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m27708_MI;
static PropertyInfo t3662____Current_PropertyInfo = 
{
	&t3662_TI, "Current", &m27708_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3662_PIs[] =
{
	&t3662____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3662_TI;
extern Il2CppType t756_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27708_MI = 
{
	"get_Current", NULL, &t3662_TI, &t756_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3662_MIs[] =
{
	&m27708_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3662_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3662_0_0_0;
extern Il2CppType t3662_1_0_0;
struct t3662;
extern TypeInfo t3662_TI;
extern Il2CppGenericClass t3662_GC;
TypeInfo t3662_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3662_MIs, t3662_PIs, NULL, NULL, NULL, NULL, NULL, &t3662_TI, t3662_ITIs, NULL, &EmptyCustomAttributesCache, &t3662_TI, &t3662_0_0_0, &t3662_1_0_0, NULL, &t3662_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2742_TI;
#include "t2742MD.h"

extern TypeInfo t2742_TI;
extern TypeInfo t756_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15607_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20959_MI;
struct t29;
#define m20959(__this, p0, method) (t756 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20959_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2742_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2742_TI, offsetof(t2742, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2742_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2742_TI, offsetof(t2742, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2742_FIs[] =
{
	&t2742_f0_FieldInfo,
	&t2742_f1_FieldInfo,
	NULL
};
extern MethodInfo m15604_MI;
static PropertyInfo t2742____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2742_TI, "System.Collections.IEnumerator.Current", &m15604_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15607_MI;
static PropertyInfo t2742____Current_PropertyInfo = 
{
	&t2742_TI, "Current", &m15607_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2742_PIs[] =
{
	&t2742____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2742____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2742_m15603_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2742_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15603_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2742_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2742_m15603_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15604_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2742_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15605_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2742_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15606_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2742_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2742_TI;
extern Il2CppType t756_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15607_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2742_TI, &t756_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2742_MIs[] =
{
	&m15603_MI,
	&m15604_MI,
	&m15605_MI,
	&m15606_MI,
	&m15607_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15604_MI;
extern MethodInfo m15606_MI;
extern MethodInfo m15605_MI;
extern MethodInfo m15607_MI;
static MethodInfo* t2742_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15604_MI,
	&m15606_MI,
	&m15605_MI,
	&m15607_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3662_TI;
static TypeInfo* t2742_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3662_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3662_TI;
static Il2CppInterfaceOffsetPair t2742_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3662_TI, 7},
};
extern MethodInfo m15607_MI;
extern TypeInfo t756_TI;
extern MethodInfo m20959_MI;
static void* t2742_RGCTXData[3] = 
{
	&m15607_MI,
	&t756_TI,
	&m20959_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2742_0_0_0;
extern Il2CppType t2742_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2742_TI;
extern Il2CppGenericClass t2742_GC;
extern TypeInfo t29_TI;
TypeInfo t2742_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2742_MIs, t2742_PIs, t2742_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2742_TI, t2742_ITIs, t2742_VT, &EmptyCustomAttributesCache, &t2742_TI, &t2742_0_0_0, &t2742_1_0_0, t2742_IOs, &t2742_GC, NULL, NULL, NULL, t2742_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2742)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4754_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m27709_MI;
static PropertyInfo t4754____Count_PropertyInfo = 
{
	&t4754_TI, "Count", &m27709_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27710_MI;
static PropertyInfo t4754____IsReadOnly_PropertyInfo = 
{
	&t4754_TI, "IsReadOnly", &m27710_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4754_PIs[] =
{
	&t4754____Count_PropertyInfo,
	&t4754____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4754_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27709_MI = 
{
	"get_Count", NULL, &t4754_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4754_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27710_MI = 
{
	"get_IsReadOnly", NULL, &t4754_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t756_0_0_0;
static ParameterInfo t4754_m27711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t756_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27711_MI = 
{
	"Add", NULL, &t4754_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4754_m27711_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4754_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27712_MI = 
{
	"Clear", NULL, &t4754_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t756_0_0_0;
static ParameterInfo t4754_m27713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t756_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27713_MI = 
{
	"Contains", NULL, &t4754_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4754_m27713_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3008_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4754_m27714_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3008_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27714_MI = 
{
	"CopyTo", NULL, &t4754_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4754_m27714_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t756_0_0_0;
static ParameterInfo t4754_m27715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t756_0_0_0},
};
extern TypeInfo t4754_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27715_MI = 
{
	"Remove", NULL, &t4754_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4754_m27715_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4754_MIs[] =
{
	&m27709_MI,
	&m27710_MI,
	&m27711_MI,
	&m27712_MI,
	&m27713_MI,
	&m27714_MI,
	&m27715_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4756_TI;
static TypeInfo* t4754_ITIs[] = 
{
	&t611_TI,
	&t4756_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4754_0_0_0;
extern Il2CppType t4754_1_0_0;
struct t4754;
extern TypeInfo t4754_TI;
extern Il2CppGenericClass t4754_GC;
TypeInfo t4754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4754_MIs, t4754_PIs, NULL, NULL, NULL, NULL, NULL, &t4754_TI, t4754_ITIs, NULL, &EmptyCustomAttributesCache, &t4754_TI, &t4754_0_0_0, &t4754_1_0_0, NULL, &t4754_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4756_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>
extern TypeInfo t4756_TI;
extern Il2CppType t3662_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27716_MI = 
{
	"GetEnumerator", NULL, &t4756_TI, &t3662_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4756_MIs[] =
{
	&m27716_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4756_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4756_0_0_0;
extern Il2CppType t4756_1_0_0;
struct t4756;
extern TypeInfo t4756_TI;
extern Il2CppGenericClass t4756_GC;
TypeInfo t4756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4756_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4756_TI, t4756_ITIs, NULL, &EmptyCustomAttributesCache, &t4756_TI, &t4756_0_0_0, &t4756_1_0_0, NULL, &t4756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4755_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo m27717_MI;
extern MethodInfo m27718_MI;
static PropertyInfo t4755____Item_PropertyInfo = 
{
	&t4755_TI, "Item", &m27717_MI, &m27718_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4755_PIs[] =
{
	&t4755____Item_PropertyInfo,
	NULL
};
extern Il2CppType t756_0_0_0;
static ParameterInfo t4755_m27719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t756_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27719_MI = 
{
	"IndexOf", NULL, &t4755_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4755_m27719_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t756_0_0_0;
static ParameterInfo t4755_m27720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t756_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27720_MI = 
{
	"Insert", NULL, &t4755_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4755_m27720_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4755_m27721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27721_MI = 
{
	"RemoveAt", NULL, &t4755_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4755_m27721_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4755_m27717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t756_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27717_MI = 
{
	"get_Item", NULL, &t4755_TI, &t756_0_0_0, RuntimeInvoker_t28_t47, t4755_m27717_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t756_0_0_0;
static ParameterInfo t4755_m27718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t756_0_0_0},
};
extern TypeInfo t4755_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27718_MI = 
{
	"set_Item", NULL, &t4755_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4755_m27718_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4755_MIs[] =
{
	&m27719_MI,
	&m27720_MI,
	&m27721_MI,
	&m27717_MI,
	&m27718_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4754_TI;
extern TypeInfo t4756_TI;
static TypeInfo* t4755_ITIs[] = 
{
	&t611_TI,
	&t4754_TI,
	&t4756_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4755_0_0_0;
extern Il2CppType t4755_1_0_0;
struct t4755;
extern TypeInfo t4755_TI;
extern Il2CppGenericClass t4755_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4755_MIs, t4755_PIs, NULL, NULL, NULL, NULL, NULL, &t4755_TI, t4755_ITIs, NULL, &t1418__CustomAttributeCache, &t4755_TI, &t4755_0_0_0, &t4755_1_0_0, NULL, &t4755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3663_TI;

#include "t445.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m27722_MI;
static PropertyInfo t3663____Current_PropertyInfo = 
{
	&t3663_TI, "Current", &m27722_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3663_PIs[] =
{
	&t3663____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3663_TI;
extern Il2CppType t445_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27722_MI = 
{
	"get_Current", NULL, &t3663_TI, &t445_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3663_MIs[] =
{
	&m27722_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3663_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3663_0_0_0;
extern Il2CppType t3663_1_0_0;
struct t3663;
extern TypeInfo t3663_TI;
extern Il2CppGenericClass t3663_GC;
TypeInfo t3663_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3663_MIs, t3663_PIs, NULL, NULL, NULL, NULL, NULL, &t3663_TI, t3663_ITIs, NULL, &EmptyCustomAttributesCache, &t3663_TI, &t3663_0_0_0, &t3663_1_0_0, NULL, &t3663_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2743_TI;
#include "t2743MD.h"

extern TypeInfo t2743_TI;
extern TypeInfo t445_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15612_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20970_MI;
struct t29;
#define m20970(__this, p0, method) (t445 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20970_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2743_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2743_TI, offsetof(t2743, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2743_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2743_TI, offsetof(t2743, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2743_FIs[] =
{
	&t2743_f0_FieldInfo,
	&t2743_f1_FieldInfo,
	NULL
};
extern MethodInfo m15609_MI;
static PropertyInfo t2743____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2743_TI, "System.Collections.IEnumerator.Current", &m15609_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15612_MI;
static PropertyInfo t2743____Current_PropertyInfo = 
{
	&t2743_TI, "Current", &m15612_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2743_PIs[] =
{
	&t2743____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2743____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2743_m15608_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2743_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15608_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2743_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2743_m15608_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15609_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2743_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15610_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2743_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15611_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2743_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2743_TI;
extern Il2CppType t445_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15612_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2743_TI, &t445_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2743_MIs[] =
{
	&m15608_MI,
	&m15609_MI,
	&m15610_MI,
	&m15611_MI,
	&m15612_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15609_MI;
extern MethodInfo m15611_MI;
extern MethodInfo m15610_MI;
extern MethodInfo m15612_MI;
static MethodInfo* t2743_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15609_MI,
	&m15611_MI,
	&m15610_MI,
	&m15612_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3663_TI;
static TypeInfo* t2743_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3663_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3663_TI;
static Il2CppInterfaceOffsetPair t2743_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3663_TI, 7},
};
extern MethodInfo m15612_MI;
extern TypeInfo t445_TI;
extern MethodInfo m20970_MI;
static void* t2743_RGCTXData[3] = 
{
	&m15612_MI,
	&t445_TI,
	&m20970_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2743_0_0_0;
extern Il2CppType t2743_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2743_TI;
extern Il2CppGenericClass t2743_GC;
extern TypeInfo t29_TI;
TypeInfo t2743_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2743_MIs, t2743_PIs, t2743_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2743_TI, t2743_ITIs, t2743_VT, &EmptyCustomAttributesCache, &t2743_TI, &t2743_0_0_0, &t2743_1_0_0, t2743_IOs, &t2743_GC, NULL, NULL, NULL, t2743_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2743)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4757_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m27723_MI;
static PropertyInfo t4757____Count_PropertyInfo = 
{
	&t4757_TI, "Count", &m27723_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27724_MI;
static PropertyInfo t4757____IsReadOnly_PropertyInfo = 
{
	&t4757_TI, "IsReadOnly", &m27724_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4757_PIs[] =
{
	&t4757____Count_PropertyInfo,
	&t4757____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4757_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27723_MI = 
{
	"get_Count", NULL, &t4757_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4757_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27724_MI = 
{
	"get_IsReadOnly", NULL, &t4757_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t445_0_0_0;
static ParameterInfo t4757_m27725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t445_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27725_MI = 
{
	"Add", NULL, &t4757_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4757_m27725_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4757_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27726_MI = 
{
	"Clear", NULL, &t4757_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t445_0_0_0;
static ParameterInfo t4757_m27727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t445_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27727_MI = 
{
	"Contains", NULL, &t4757_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4757_m27727_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3009_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4757_m27728_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3009_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27728_MI = 
{
	"CopyTo", NULL, &t4757_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4757_m27728_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t445_0_0_0;
static ParameterInfo t4757_m27729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t445_0_0_0},
};
extern TypeInfo t4757_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27729_MI = 
{
	"Remove", NULL, &t4757_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4757_m27729_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4757_MIs[] =
{
	&m27723_MI,
	&m27724_MI,
	&m27725_MI,
	&m27726_MI,
	&m27727_MI,
	&m27728_MI,
	&m27729_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4759_TI;
static TypeInfo* t4757_ITIs[] = 
{
	&t611_TI,
	&t4759_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4757_0_0_0;
extern Il2CppType t4757_1_0_0;
struct t4757;
extern TypeInfo t4757_TI;
extern Il2CppGenericClass t4757_GC;
TypeInfo t4757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4757_MIs, t4757_PIs, NULL, NULL, NULL, NULL, NULL, &t4757_TI, t4757_ITIs, NULL, &EmptyCustomAttributesCache, &t4757_TI, &t4757_0_0_0, &t4757_1_0_0, NULL, &t4757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4759_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>
extern TypeInfo t4759_TI;
extern Il2CppType t3663_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27730_MI = 
{
	"GetEnumerator", NULL, &t4759_TI, &t3663_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4759_MIs[] =
{
	&m27730_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4759_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4759_0_0_0;
extern Il2CppType t4759_1_0_0;
struct t4759;
extern TypeInfo t4759_TI;
extern Il2CppGenericClass t4759_GC;
TypeInfo t4759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4759_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4759_TI, t4759_ITIs, NULL, &EmptyCustomAttributesCache, &t4759_TI, &t4759_0_0_0, &t4759_1_0_0, NULL, &t4759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4758_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo m27731_MI;
extern MethodInfo m27732_MI;
static PropertyInfo t4758____Item_PropertyInfo = 
{
	&t4758_TI, "Item", &m27731_MI, &m27732_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4758_PIs[] =
{
	&t4758____Item_PropertyInfo,
	NULL
};
extern Il2CppType t445_0_0_0;
static ParameterInfo t4758_m27733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t445_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27733_MI = 
{
	"IndexOf", NULL, &t4758_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4758_m27733_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t445_0_0_0;
static ParameterInfo t4758_m27734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t445_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27734_MI = 
{
	"Insert", NULL, &t4758_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4758_m27734_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4758_m27735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27735_MI = 
{
	"RemoveAt", NULL, &t4758_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4758_m27735_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4758_m27731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t445_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27731_MI = 
{
	"get_Item", NULL, &t4758_TI, &t445_0_0_0, RuntimeInvoker_t28_t47, t4758_m27731_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t445_0_0_0;
static ParameterInfo t4758_m27732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t445_0_0_0},
};
extern TypeInfo t4758_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27732_MI = 
{
	"set_Item", NULL, &t4758_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4758_m27732_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4758_MIs[] =
{
	&m27733_MI,
	&m27734_MI,
	&m27735_MI,
	&m27731_MI,
	&m27732_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4757_TI;
extern TypeInfo t4759_TI;
static TypeInfo* t4758_ITIs[] = 
{
	&t611_TI,
	&t4757_TI,
	&t4759_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4758_0_0_0;
extern Il2CppType t4758_1_0_0;
struct t4758;
extern TypeInfo t4758_TI;
extern Il2CppGenericClass t4758_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4758_MIs, t4758_PIs, NULL, NULL, NULL, NULL, NULL, &t4758_TI, t4758_ITIs, NULL, &t1418__CustomAttributeCache, &t4758_TI, &t4758_0_0_0, &t4758_1_0_0, NULL, &t4758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3664_TI;

#include "t757.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo m27736_MI;
static PropertyInfo t3664____Current_PropertyInfo = 
{
	&t3664_TI, "Current", &m27736_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3664_PIs[] =
{
	&t3664____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3664_TI;
extern Il2CppType t757_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27736_MI = 
{
	"get_Current", NULL, &t3664_TI, &t757_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3664_MIs[] =
{
	&m27736_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3664_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3664_0_0_0;
extern Il2CppType t3664_1_0_0;
struct t3664;
extern TypeInfo t3664_TI;
extern Il2CppGenericClass t3664_GC;
TypeInfo t3664_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3664_MIs, t3664_PIs, NULL, NULL, NULL, NULL, NULL, &t3664_TI, t3664_ITIs, NULL, &EmptyCustomAttributesCache, &t3664_TI, &t3664_0_0_0, &t3664_1_0_0, NULL, &t3664_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2744.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2744_TI;
#include "t2744MD.h"

extern TypeInfo t2744_TI;
extern TypeInfo t757_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15617_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20981_MI;
struct t29;
#define m20981(__this, p0, method) (t757 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20981_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2744_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2744_TI, offsetof(t2744, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2744_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2744_TI, offsetof(t2744, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2744_FIs[] =
{
	&t2744_f0_FieldInfo,
	&t2744_f1_FieldInfo,
	NULL
};
extern MethodInfo m15614_MI;
static PropertyInfo t2744____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2744_TI, "System.Collections.IEnumerator.Current", &m15614_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15617_MI;
static PropertyInfo t2744____Current_PropertyInfo = 
{
	&t2744_TI, "Current", &m15617_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2744_PIs[] =
{
	&t2744____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2744____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2744_m15613_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2744_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15613_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2744_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2744_m15613_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15614_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2744_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15615_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2744_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15616_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2744_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2744_TI;
extern Il2CppType t757_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15617_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2744_TI, &t757_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2744_MIs[] =
{
	&m15613_MI,
	&m15614_MI,
	&m15615_MI,
	&m15616_MI,
	&m15617_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15614_MI;
extern MethodInfo m15616_MI;
extern MethodInfo m15615_MI;
extern MethodInfo m15617_MI;
static MethodInfo* t2744_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15614_MI,
	&m15616_MI,
	&m15615_MI,
	&m15617_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3664_TI;
static TypeInfo* t2744_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3664_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3664_TI;
static Il2CppInterfaceOffsetPair t2744_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3664_TI, 7},
};
extern MethodInfo m15617_MI;
extern TypeInfo t757_TI;
extern MethodInfo m20981_MI;
static void* t2744_RGCTXData[3] = 
{
	&m15617_MI,
	&t757_TI,
	&m20981_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2744_0_0_0;
extern Il2CppType t2744_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2744_TI;
extern Il2CppGenericClass t2744_GC;
extern TypeInfo t29_TI;
TypeInfo t2744_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2744_MIs, t2744_PIs, t2744_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2744_TI, t2744_ITIs, t2744_VT, &EmptyCustomAttributesCache, &t2744_TI, &t2744_0_0_0, &t2744_1_0_0, t2744_IOs, &t2744_GC, NULL, NULL, NULL, t2744_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2744)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4760_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo m27737_MI;
static PropertyInfo t4760____Count_PropertyInfo = 
{
	&t4760_TI, "Count", &m27737_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27738_MI;
static PropertyInfo t4760____IsReadOnly_PropertyInfo = 
{
	&t4760_TI, "IsReadOnly", &m27738_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4760_PIs[] =
{
	&t4760____Count_PropertyInfo,
	&t4760____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4760_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27737_MI = 
{
	"get_Count", NULL, &t4760_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4760_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27738_MI = 
{
	"get_IsReadOnly", NULL, &t4760_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t757_0_0_0;
static ParameterInfo t4760_m27739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27739_MI = 
{
	"Add", NULL, &t4760_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4760_m27739_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4760_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27740_MI = 
{
	"Clear", NULL, &t4760_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t757_0_0_0;
static ParameterInfo t4760_m27741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27741_MI = 
{
	"Contains", NULL, &t4760_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4760_m27741_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3010_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4760_m27742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3010_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27742_MI = 
{
	"CopyTo", NULL, &t4760_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4760_m27742_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t757_0_0_0;
static ParameterInfo t4760_m27743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t4760_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27743_MI = 
{
	"Remove", NULL, &t4760_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4760_m27743_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4760_MIs[] =
{
	&m27737_MI,
	&m27738_MI,
	&m27739_MI,
	&m27740_MI,
	&m27741_MI,
	&m27742_MI,
	&m27743_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4762_TI;
static TypeInfo* t4760_ITIs[] = 
{
	&t611_TI,
	&t4762_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4760_0_0_0;
extern Il2CppType t4760_1_0_0;
struct t4760;
extern TypeInfo t4760_TI;
extern Il2CppGenericClass t4760_GC;
TypeInfo t4760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4760_MIs, t4760_PIs, NULL, NULL, NULL, NULL, NULL, &t4760_TI, t4760_ITIs, NULL, &EmptyCustomAttributesCache, &t4760_TI, &t4760_0_0_0, &t4760_1_0_0, NULL, &t4760_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4762_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>
extern TypeInfo t4762_TI;
extern Il2CppType t3664_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27744_MI = 
{
	"GetEnumerator", NULL, &t4762_TI, &t3664_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4762_MIs[] =
{
	&m27744_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4762_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4762_0_0_0;
extern Il2CppType t4762_1_0_0;
struct t4762;
extern TypeInfo t4762_TI;
extern Il2CppGenericClass t4762_GC;
TypeInfo t4762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4762_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4762_TI, t4762_ITIs, NULL, &EmptyCustomAttributesCache, &t4762_TI, &t4762_0_0_0, &t4762_1_0_0, NULL, &t4762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4761_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo m27745_MI;
extern MethodInfo m27746_MI;
static PropertyInfo t4761____Item_PropertyInfo = 
{
	&t4761_TI, "Item", &m27745_MI, &m27746_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4761_PIs[] =
{
	&t4761____Item_PropertyInfo,
	NULL
};
extern Il2CppType t757_0_0_0;
static ParameterInfo t4761_m27747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27747_MI = 
{
	"IndexOf", NULL, &t4761_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4761_m27747_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t757_0_0_0;
static ParameterInfo t4761_m27748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27748_MI = 
{
	"Insert", NULL, &t4761_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4761_m27748_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4761_m27749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27749_MI = 
{
	"RemoveAt", NULL, &t4761_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4761_m27749_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4761_m27745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t757_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27745_MI = 
{
	"get_Item", NULL, &t4761_TI, &t757_0_0_0, RuntimeInvoker_t28_t47, t4761_m27745_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t757_0_0_0;
static ParameterInfo t4761_m27746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t757_0_0_0},
};
extern TypeInfo t4761_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27746_MI = 
{
	"set_Item", NULL, &t4761_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4761_m27746_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4761_MIs[] =
{
	&m27747_MI,
	&m27748_MI,
	&m27749_MI,
	&m27745_MI,
	&m27746_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4760_TI;
extern TypeInfo t4762_TI;
static TypeInfo* t4761_ITIs[] = 
{
	&t611_TI,
	&t4760_TI,
	&t4762_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4761_0_0_0;
extern Il2CppType t4761_1_0_0;
struct t4761;
extern TypeInfo t4761_TI;
extern Il2CppGenericClass t4761_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4761_MIs, t4761_PIs, NULL, NULL, NULL, NULL, NULL, &t4761_TI, t4761_ITIs, NULL, &t1418__CustomAttributeCache, &t4761_TI, &t4761_0_0_0, &t4761_1_0_0, NULL, &t4761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3665_TI;

#include "t758.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo m27750_MI;
static PropertyInfo t3665____Current_PropertyInfo = 
{
	&t3665_TI, "Current", &m27750_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3665_PIs[] =
{
	&t3665____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3665_TI;
extern Il2CppType t758_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27750_MI = 
{
	"get_Current", NULL, &t3665_TI, &t758_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3665_MIs[] =
{
	&m27750_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3665_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3665_0_0_0;
extern Il2CppType t3665_1_0_0;
struct t3665;
extern TypeInfo t3665_TI;
extern Il2CppGenericClass t3665_GC;
TypeInfo t3665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3665_MIs, t3665_PIs, NULL, NULL, NULL, NULL, NULL, &t3665_TI, t3665_ITIs, NULL, &EmptyCustomAttributesCache, &t3665_TI, &t3665_0_0_0, &t3665_1_0_0, NULL, &t3665_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2745.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2745_TI;
#include "t2745MD.h"

extern TypeInfo t2745_TI;
extern TypeInfo t758_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15622_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m20992_MI;
struct t29;
#define m20992(__this, p0, method) (t758 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m20992_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2745_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2745_TI, offsetof(t2745, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2745_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2745_TI, offsetof(t2745, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2745_FIs[] =
{
	&t2745_f0_FieldInfo,
	&t2745_f1_FieldInfo,
	NULL
};
extern MethodInfo m15619_MI;
static PropertyInfo t2745____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2745_TI, "System.Collections.IEnumerator.Current", &m15619_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15622_MI;
static PropertyInfo t2745____Current_PropertyInfo = 
{
	&t2745_TI, "Current", &m15622_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2745_PIs[] =
{
	&t2745____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2745____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2745_m15618_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2745_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15618_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2745_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2745_m15618_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15619_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2745_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15620_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2745_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15621_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2745_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2745_TI;
extern Il2CppType t758_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15622_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2745_TI, &t758_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2745_MIs[] =
{
	&m15618_MI,
	&m15619_MI,
	&m15620_MI,
	&m15621_MI,
	&m15622_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15619_MI;
extern MethodInfo m15621_MI;
extern MethodInfo m15620_MI;
extern MethodInfo m15622_MI;
static MethodInfo* t2745_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15619_MI,
	&m15621_MI,
	&m15620_MI,
	&m15622_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3665_TI;
static TypeInfo* t2745_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3665_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3665_TI;
static Il2CppInterfaceOffsetPair t2745_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3665_TI, 7},
};
extern MethodInfo m15622_MI;
extern TypeInfo t758_TI;
extern MethodInfo m20992_MI;
static void* t2745_RGCTXData[3] = 
{
	&m15622_MI,
	&t758_TI,
	&m20992_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2745_0_0_0;
extern Il2CppType t2745_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2745_TI;
extern Il2CppGenericClass t2745_GC;
extern TypeInfo t29_TI;
TypeInfo t2745_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2745_MIs, t2745_PIs, t2745_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2745_TI, t2745_ITIs, t2745_VT, &EmptyCustomAttributesCache, &t2745_TI, &t2745_0_0_0, &t2745_1_0_0, t2745_IOs, &t2745_GC, NULL, NULL, NULL, t2745_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2745)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4763_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo m27751_MI;
static PropertyInfo t4763____Count_PropertyInfo = 
{
	&t4763_TI, "Count", &m27751_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27752_MI;
static PropertyInfo t4763____IsReadOnly_PropertyInfo = 
{
	&t4763_TI, "IsReadOnly", &m27752_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4763_PIs[] =
{
	&t4763____Count_PropertyInfo,
	&t4763____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4763_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27751_MI = 
{
	"get_Count", NULL, &t4763_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4763_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27752_MI = 
{
	"get_IsReadOnly", NULL, &t4763_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t758_0_0_0;
static ParameterInfo t4763_m27753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t758_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27753_MI = 
{
	"Add", NULL, &t4763_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4763_m27753_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4763_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27754_MI = 
{
	"Clear", NULL, &t4763_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t758_0_0_0;
static ParameterInfo t4763_m27755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t758_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27755_MI = 
{
	"Contains", NULL, &t4763_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4763_m27755_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3011_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4763_m27756_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3011_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27756_MI = 
{
	"CopyTo", NULL, &t4763_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4763_m27756_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t758_0_0_0;
static ParameterInfo t4763_m27757_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t758_0_0_0},
};
extern TypeInfo t4763_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27757_MI = 
{
	"Remove", NULL, &t4763_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4763_m27757_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4763_MIs[] =
{
	&m27751_MI,
	&m27752_MI,
	&m27753_MI,
	&m27754_MI,
	&m27755_MI,
	&m27756_MI,
	&m27757_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4765_TI;
static TypeInfo* t4763_ITIs[] = 
{
	&t611_TI,
	&t4765_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4763_0_0_0;
extern Il2CppType t4763_1_0_0;
struct t4763;
extern TypeInfo t4763_TI;
extern Il2CppGenericClass t4763_GC;
TypeInfo t4763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4763_MIs, t4763_PIs, NULL, NULL, NULL, NULL, NULL, &t4763_TI, t4763_ITIs, NULL, &EmptyCustomAttributesCache, &t4763_TI, &t4763_0_0_0, &t4763_1_0_0, NULL, &t4763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4765_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>
extern TypeInfo t4765_TI;
extern Il2CppType t3665_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27758_MI = 
{
	"GetEnumerator", NULL, &t4765_TI, &t3665_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4765_MIs[] =
{
	&m27758_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4765_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4765_0_0_0;
extern Il2CppType t4765_1_0_0;
struct t4765;
extern TypeInfo t4765_TI;
extern Il2CppGenericClass t4765_GC;
TypeInfo t4765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4765_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4765_TI, t4765_ITIs, NULL, &EmptyCustomAttributesCache, &t4765_TI, &t4765_0_0_0, &t4765_1_0_0, NULL, &t4765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4764_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo m27759_MI;
extern MethodInfo m27760_MI;
static PropertyInfo t4764____Item_PropertyInfo = 
{
	&t4764_TI, "Item", &m27759_MI, &m27760_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4764_PIs[] =
{
	&t4764____Item_PropertyInfo,
	NULL
};
extern Il2CppType t758_0_0_0;
static ParameterInfo t4764_m27761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t758_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27761_MI = 
{
	"IndexOf", NULL, &t4764_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4764_m27761_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t758_0_0_0;
static ParameterInfo t4764_m27762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t758_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27762_MI = 
{
	"Insert", NULL, &t4764_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4764_m27762_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4764_m27763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27763_MI = 
{
	"RemoveAt", NULL, &t4764_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4764_m27763_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4764_m27759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t758_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27759_MI = 
{
	"get_Item", NULL, &t4764_TI, &t758_0_0_0, RuntimeInvoker_t28_t47, t4764_m27759_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t758_0_0_0;
static ParameterInfo t4764_m27760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t758_0_0_0},
};
extern TypeInfo t4764_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27760_MI = 
{
	"set_Item", NULL, &t4764_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4764_m27760_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4764_MIs[] =
{
	&m27761_MI,
	&m27762_MI,
	&m27763_MI,
	&m27759_MI,
	&m27760_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4763_TI;
extern TypeInfo t4765_TI;
static TypeInfo* t4764_ITIs[] = 
{
	&t611_TI,
	&t4763_TI,
	&t4765_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4764_0_0_0;
extern Il2CppType t4764_1_0_0;
struct t4764;
extern TypeInfo t4764_TI;
extern Il2CppGenericClass t4764_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4764_MIs, t4764_PIs, NULL, NULL, NULL, NULL, NULL, &t4764_TI, t4764_ITIs, NULL, &t1418__CustomAttributeCache, &t4764_TI, &t4764_0_0_0, &t4764_1_0_0, NULL, &t4764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3666_TI;

#include "t68.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo m27764_MI;
static PropertyInfo t3666____Current_PropertyInfo = 
{
	&t3666_TI, "Current", &m27764_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3666_PIs[] =
{
	&t3666____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3666_TI;
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27764_MI = 
{
	"get_Current", NULL, &t3666_TI, &t68_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3666_MIs[] =
{
	&m27764_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3666_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3666_0_0_0;
extern Il2CppType t3666_1_0_0;
struct t3666;
extern TypeInfo t3666_TI;
extern Il2CppGenericClass t3666_GC;
TypeInfo t3666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3666_MIs, t3666_PIs, NULL, NULL, NULL, NULL, NULL, &t3666_TI, t3666_ITIs, NULL, &EmptyCustomAttributesCache, &t3666_TI, &t3666_0_0_0, &t3666_1_0_0, NULL, &t3666_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2746_TI;
#include "t2746MD.h"

extern TypeInfo t2746_TI;
extern TypeInfo t68_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15627_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21003_MI;
struct t29;
#define m21003(__this, p0, method) (t68 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21003_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2746_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2746_TI, offsetof(t2746, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2746_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2746_TI, offsetof(t2746, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2746_FIs[] =
{
	&t2746_f0_FieldInfo,
	&t2746_f1_FieldInfo,
	NULL
};
extern MethodInfo m15624_MI;
static PropertyInfo t2746____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2746_TI, "System.Collections.IEnumerator.Current", &m15624_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15627_MI;
static PropertyInfo t2746____Current_PropertyInfo = 
{
	&t2746_TI, "Current", &m15627_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2746_PIs[] =
{
	&t2746____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2746____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2746_m15623_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2746_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15623_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2746_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2746_m15623_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15624_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2746_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15625_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2746_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15626_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2746_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2746_TI;
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15627_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2746_TI, &t68_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2746_MIs[] =
{
	&m15623_MI,
	&m15624_MI,
	&m15625_MI,
	&m15626_MI,
	&m15627_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15624_MI;
extern MethodInfo m15626_MI;
extern MethodInfo m15625_MI;
extern MethodInfo m15627_MI;
static MethodInfo* t2746_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15624_MI,
	&m15626_MI,
	&m15625_MI,
	&m15627_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3666_TI;
static TypeInfo* t2746_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3666_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3666_TI;
static Il2CppInterfaceOffsetPair t2746_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3666_TI, 7},
};
extern MethodInfo m15627_MI;
extern TypeInfo t68_TI;
extern MethodInfo m21003_MI;
static void* t2746_RGCTXData[3] = 
{
	&m15627_MI,
	&t68_TI,
	&m21003_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2746_0_0_0;
extern Il2CppType t2746_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2746_TI;
extern Il2CppGenericClass t2746_GC;
extern TypeInfo t29_TI;
TypeInfo t2746_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2746_MIs, t2746_PIs, t2746_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2746_TI, t2746_ITIs, t2746_VT, &EmptyCustomAttributesCache, &t2746_TI, &t2746_0_0_0, &t2746_1_0_0, t2746_IOs, &t2746_GC, NULL, NULL, NULL, t2746_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2746)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4766_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo m27765_MI;
static PropertyInfo t4766____Count_PropertyInfo = 
{
	&t4766_TI, "Count", &m27765_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m27766_MI;
static PropertyInfo t4766____IsReadOnly_PropertyInfo = 
{
	&t4766_TI, "IsReadOnly", &m27766_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4766_PIs[] =
{
	&t4766____Count_PropertyInfo,
	&t4766____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4766_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27765_MI = 
{
	"get_Count", NULL, &t4766_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4766_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m27766_MI = 
{
	"get_IsReadOnly", NULL, &t4766_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4766_m27767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27767_MI = 
{
	"Add", NULL, &t4766_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4766_m27767_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4766_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27768_MI = 
{
	"Clear", NULL, &t4766_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4766_m27769_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27769_MI = 
{
	"Contains", NULL, &t4766_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4766_m27769_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3012_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4766_m27770_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3012_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27770_MI = 
{
	"CopyTo", NULL, &t4766_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4766_m27770_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4766_m27771_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4766_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27771_MI = 
{
	"Remove", NULL, &t4766_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4766_m27771_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4766_MIs[] =
{
	&m27765_MI,
	&m27766_MI,
	&m27767_MI,
	&m27768_MI,
	&m27769_MI,
	&m27770_MI,
	&m27771_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4768_TI;
static TypeInfo* t4766_ITIs[] = 
{
	&t611_TI,
	&t4768_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4766_0_0_0;
extern Il2CppType t4766_1_0_0;
struct t4766;
extern TypeInfo t4766_TI;
extern Il2CppGenericClass t4766_GC;
TypeInfo t4766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4766_MIs, t4766_PIs, NULL, NULL, NULL, NULL, NULL, &t4766_TI, t4766_ITIs, NULL, &EmptyCustomAttributesCache, &t4766_TI, &t4766_0_0_0, &t4766_1_0_0, NULL, &t4766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4768_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern TypeInfo t4768_TI;
extern Il2CppType t3666_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27772_MI = 
{
	"GetEnumerator", NULL, &t4768_TI, &t3666_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4768_MIs[] =
{
	&m27772_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4768_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4768_0_0_0;
extern Il2CppType t4768_1_0_0;
struct t4768;
extern TypeInfo t4768_TI;
extern Il2CppGenericClass t4768_GC;
TypeInfo t4768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4768_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4768_TI, t4768_ITIs, NULL, &EmptyCustomAttributesCache, &t4768_TI, &t4768_0_0_0, &t4768_1_0_0, NULL, &t4768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4767_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo m27773_MI;
extern MethodInfo m27774_MI;
static PropertyInfo t4767____Item_PropertyInfo = 
{
	&t4767_TI, "Item", &m27773_MI, &m27774_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4767_PIs[] =
{
	&t4767____Item_PropertyInfo,
	NULL
};
extern Il2CppType t68_0_0_0;
static ParameterInfo t4767_m27775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27775_MI = 
{
	"IndexOf", NULL, &t4767_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4767_m27775_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t68_0_0_0;
static ParameterInfo t4767_m27776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27776_MI = 
{
	"Insert", NULL, &t4767_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4767_m27776_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4767_m27777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27777_MI = 
{
	"RemoveAt", NULL, &t4767_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4767_m27777_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4767_m27773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m27773_MI = 
{
	"get_Item", NULL, &t4767_TI, &t68_0_0_0, RuntimeInvoker_t28_t47, t4767_m27773_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t68_0_0_0;
static ParameterInfo t4767_m27774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern TypeInfo t4767_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27774_MI = 
{
	"set_Item", NULL, &t4767_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4767_m27774_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4767_MIs[] =
{
	&m27775_MI,
	&m27776_MI,
	&m27777_MI,
	&m27773_MI,
	&m27774_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4766_TI;
extern TypeInfo t4768_TI;
static TypeInfo* t4767_ITIs[] = 
{
	&t611_TI,
	&t4766_TI,
	&t4768_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4767_0_0_0;
extern Il2CppType t4767_1_0_0;
struct t4767;
extern TypeInfo t4767_TI;
extern Il2CppGenericClass t4767_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4767_MIs, t4767_PIs, NULL, NULL, NULL, NULL, NULL, &t4767_TI, t4767_ITIs, NULL, &t1418__CustomAttributeCache, &t4767_TI, &t4767_0_0_0, &t4767_1_0_0, NULL, &t4767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3667_TI;

#include "t672.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo m27778_MI;
static PropertyInfo t3667____Current_PropertyInfo = 
{
	&t3667_TI, "Current", &m27778_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3667_PIs[] =
{
	&t3667____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3667_TI;
extern Il2CppType t672_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m27778_MI = 
{
	"get_Current", NULL, &t3667_TI, &t672_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3667_MIs[] =
{
	&m27778_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3667_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3667_0_0_0;
extern Il2CppType t3667_1_0_0;
struct t3667;
extern TypeInfo t3667_TI;
extern Il2CppGenericClass t3667_GC;
TypeInfo t3667_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3667_MIs, t3667_PIs, NULL, NULL, NULL, NULL, NULL, &t3667_TI, t3667_ITIs, NULL, &EmptyCustomAttributesCache, &t3667_TI, &t3667_0_0_0, &t3667_1_0_0, NULL, &t3667_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
