#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2827.h"
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
extern TypeInfo t2827_TI;
#include "t2827MD.h"

#include "t28.h"
#include "t968.h"
#include "t47.h"
#include "t18.h"
#include "t1287.h"
#include "t30.h"
#include "t29.h"
#include "t31.h"
extern TypeInfo t2827_TI;
extern TypeInfo t968_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
#include "t29MD.h"
extern MethodInfo m16032_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21894_MI;
struct t29;
#include "t1251.h"
 int32_t m21894 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21894_MI;


extern MethodInfo m16028_MI;
 void m16028 (t2827 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16029_MI;
 t28 * m16029 (t2827 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16032(__this, &m16032_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t968_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16030_MI;
 void m16030 (t2827 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16031_MI;
 bool m16031 (t2827 * __this, MethodInfo* method){
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
extern MethodInfo m16032_MI;
 int32_t m16032 (t2827 * __this, MethodInfo* method){
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
		int32_t L_8 = m21894(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21894_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType t29_0_0_1;
FieldInfo t2827_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2827_TI, offsetof(t2827, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2827_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2827_TI, offsetof(t2827, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2827_FIs[] =
{
	&t2827_f0_FieldInfo,
	&t2827_f1_FieldInfo,
	NULL
};
extern MethodInfo m16029_MI;
static PropertyInfo t2827____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2827_TI, "System.Collections.IEnumerator.Current", &m16029_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16032_MI;
static PropertyInfo t2827____Current_PropertyInfo = 
{
	&t2827_TI, "Current", &m16032_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2827_PIs[] =
{
	&t2827____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2827____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2827_m16028_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2827_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16028_MI = 
{
	".ctor", (methodPointerType)&m16028, &t2827_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2827_m16028_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16029_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16029, &t2827_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16030_MI = 
{
	"Dispose", (methodPointerType)&m16030, &t2827_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16031_MI = 
{
	"MoveNext", (methodPointerType)&m16031, &t2827_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2827_TI;
extern Il2CppType t968_0_0_0;
extern void* RuntimeInvoker_t968 (MethodInfo* method, void* obj, void** args);
MethodInfo m16032_MI = 
{
	"get_Current", (methodPointerType)&m16032, &t2827_TI, &t968_0_0_0, RuntimeInvoker_t968, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2827_MIs[] =
{
	&m16028_MI,
	&m16029_MI,
	&m16030_MI,
	&m16031_MI,
	&m16032_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16029_MI;
extern MethodInfo m16031_MI;
extern MethodInfo m16030_MI;
extern MethodInfo m16032_MI;
static MethodInfo* t2827_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16029_MI,
	&m16031_MI,
	&m16030_MI,
	&m16032_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3747_TI;
static TypeInfo* t2827_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3747_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3747_TI;
static Il2CppInterfaceOffsetPair t2827_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3747_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2827_0_0_0;
extern Il2CppType t2827_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2827_TI;
extern Il2CppGenericClass t2827_GC;
extern TypeInfo t29_TI;
TypeInfo t2827_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2827_MIs, t2827_PIs, t2827_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2827_TI, t2827_ITIs, t2827_VT, &EmptyCustomAttributesCache, &t2827_TI, &t2827_0_0_0, &t2827_1_0_0, t2827_IOs, &t2827_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2827)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5009_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo m28899_MI;
static PropertyInfo t5009____Count_PropertyInfo = 
{
	&t5009_TI, "Count", &m28899_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28900_MI;
static PropertyInfo t5009____IsReadOnly_PropertyInfo = 
{
	&t5009_TI, "IsReadOnly", &m28900_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5009_PIs[] =
{
	&t5009____Count_PropertyInfo,
	&t5009____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5009_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28899_MI = 
{
	"get_Count", NULL, &t5009_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5009_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28900_MI = 
{
	"get_IsReadOnly", NULL, &t5009_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t968_0_0_0;
static ParameterInfo t5009_m28901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t968_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28901_MI = 
{
	"Add", NULL, &t5009_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5009_m28901_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5009_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28902_MI = 
{
	"Clear", NULL, &t5009_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t968_0_0_0;
static ParameterInfo t5009_m28903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t968_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28903_MI = 
{
	"Contains", NULL, &t5009_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5009_m28903_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3076_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5009_m28904_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3076_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28904_MI = 
{
	"CopyTo", NULL, &t5009_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5009_m28904_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t968_0_0_0;
static ParameterInfo t5009_m28905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t968_0_0_0},
};
extern TypeInfo t5009_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28905_MI = 
{
	"Remove", NULL, &t5009_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5009_m28905_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5009_MIs[] =
{
	&m28899_MI,
	&m28900_MI,
	&m28901_MI,
	&m28902_MI,
	&m28903_MI,
	&m28904_MI,
	&m28905_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5011_TI;
static TypeInfo* t5009_ITIs[] = 
{
	&t611_TI,
	&t5011_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5009_0_0_0;
extern Il2CppType t5009_1_0_0;
struct t5009;
extern TypeInfo t5009_TI;
extern Il2CppGenericClass t5009_GC;
TypeInfo t5009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5009_MIs, t5009_PIs, NULL, NULL, NULL, NULL, NULL, &t5009_TI, t5009_ITIs, NULL, &EmptyCustomAttributesCache, &t5009_TI, &t5009_0_0_0, &t5009_1_0_0, NULL, &t5009_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5011_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>
extern TypeInfo t5011_TI;
extern Il2CppType t3747_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28906_MI = 
{
	"GetEnumerator", NULL, &t5011_TI, &t3747_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5011_MIs[] =
{
	&m28906_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5011_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5011_0_0_0;
extern Il2CppType t5011_1_0_0;
struct t5011;
extern TypeInfo t5011_TI;
extern Il2CppGenericClass t5011_GC;
TypeInfo t5011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5011_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5011_TI, t5011_ITIs, NULL, &EmptyCustomAttributesCache, &t5011_TI, &t5011_0_0_0, &t5011_1_0_0, NULL, &t5011_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5010_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo m28907_MI;
extern MethodInfo m28908_MI;
static PropertyInfo t5010____Item_PropertyInfo = 
{
	&t5010_TI, "Item", &m28907_MI, &m28908_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5010_PIs[] =
{
	&t5010____Item_PropertyInfo,
	NULL
};
extern Il2CppType t968_0_0_0;
static ParameterInfo t5010_m28909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t968_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28909_MI = 
{
	"IndexOf", NULL, &t5010_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5010_m28909_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t968_0_0_0;
static ParameterInfo t5010_m28910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t968_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28910_MI = 
{
	"Insert", NULL, &t5010_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5010_m28910_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5010_m28911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28911_MI = 
{
	"RemoveAt", NULL, &t5010_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5010_m28911_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5010_m28907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t968_0_0_0;
extern void* RuntimeInvoker_t968_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28907_MI = 
{
	"get_Item", NULL, &t5010_TI, &t968_0_0_0, RuntimeInvoker_t968_t47, t5010_m28907_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t968_0_0_0;
static ParameterInfo t5010_m28908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t968_0_0_0},
};
extern TypeInfo t5010_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28908_MI = 
{
	"set_Item", NULL, &t5010_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5010_m28908_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5010_MIs[] =
{
	&m28909_MI,
	&m28910_MI,
	&m28911_MI,
	&m28907_MI,
	&m28908_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5009_TI;
extern TypeInfo t5011_TI;
static TypeInfo* t5010_ITIs[] = 
{
	&t611_TI,
	&t5009_TI,
	&t5011_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5010_0_0_0;
extern Il2CppType t5010_1_0_0;
struct t5010;
extern TypeInfo t5010_TI;
extern Il2CppGenericClass t5010_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5010_MIs, t5010_PIs, NULL, NULL, NULL, NULL, NULL, &t5010_TI, t5010_ITIs, NULL, &t1418__CustomAttributeCache, &t5010_TI, &t5010_0_0_0, &t5010_1_0_0, NULL, &t5010_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3748_TI;

#include "t987.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>
extern MethodInfo m28912_MI;
static PropertyInfo t3748____Current_PropertyInfo = 
{
	&t3748_TI, "Current", &m28912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3748_PIs[] =
{
	&t3748____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3748_TI;
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t987 (MethodInfo* method, void* obj, void** args);
MethodInfo m28912_MI = 
{
	"get_Current", NULL, &t3748_TI, &t987_0_0_0, RuntimeInvoker_t987, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3748_MIs[] =
{
	&m28912_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3748_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3748_0_0_0;
extern Il2CppType t3748_1_0_0;
struct t3748;
extern TypeInfo t3748_TI;
extern Il2CppGenericClass t3748_GC;
TypeInfo t3748_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3748_MIs, t3748_PIs, NULL, NULL, NULL, NULL, NULL, &t3748_TI, t3748_ITIs, NULL, &EmptyCustomAttributesCache, &t3748_TI, &t3748_0_0_0, &t3748_1_0_0, NULL, &t3748_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2828_TI;
#include "t2828MD.h"

extern TypeInfo t2828_TI;
extern TypeInfo t987_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16037_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21905_MI;
struct t29;
 int32_t m21905 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21905_MI;


extern MethodInfo m16033_MI;
 void m16033 (t2828 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16034_MI;
 t28 * m16034 (t2828 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16037(__this, &m16037_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t987_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16035_MI;
 void m16035 (t2828 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16036_MI;
 bool m16036 (t2828 * __this, MethodInfo* method){
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
extern MethodInfo m16037_MI;
 int32_t m16037 (t2828 * __this, MethodInfo* method){
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
		int32_t L_8 = m21905(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21905_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
extern Il2CppType t29_0_0_1;
FieldInfo t2828_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2828_TI, offsetof(t2828, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2828_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2828_TI, offsetof(t2828, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2828_FIs[] =
{
	&t2828_f0_FieldInfo,
	&t2828_f1_FieldInfo,
	NULL
};
extern MethodInfo m16034_MI;
static PropertyInfo t2828____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2828_TI, "System.Collections.IEnumerator.Current", &m16034_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16037_MI;
static PropertyInfo t2828____Current_PropertyInfo = 
{
	&t2828_TI, "Current", &m16037_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2828_PIs[] =
{
	&t2828____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2828____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2828_m16033_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2828_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16033_MI = 
{
	".ctor", (methodPointerType)&m16033, &t2828_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2828_m16033_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16034_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16034, &t2828_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16035_MI = 
{
	"Dispose", (methodPointerType)&m16035, &t2828_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16036_MI = 
{
	"MoveNext", (methodPointerType)&m16036, &t2828_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2828_TI;
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t987 (MethodInfo* method, void* obj, void** args);
MethodInfo m16037_MI = 
{
	"get_Current", (methodPointerType)&m16037, &t2828_TI, &t987_0_0_0, RuntimeInvoker_t987, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2828_MIs[] =
{
	&m16033_MI,
	&m16034_MI,
	&m16035_MI,
	&m16036_MI,
	&m16037_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16034_MI;
extern MethodInfo m16036_MI;
extern MethodInfo m16035_MI;
extern MethodInfo m16037_MI;
static MethodInfo* t2828_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16034_MI,
	&m16036_MI,
	&m16035_MI,
	&m16037_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3748_TI;
static TypeInfo* t2828_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3748_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3748_TI;
static Il2CppInterfaceOffsetPair t2828_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3748_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2828_0_0_0;
extern Il2CppType t2828_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2828_TI;
extern Il2CppGenericClass t2828_GC;
extern TypeInfo t29_TI;
TypeInfo t2828_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2828_MIs, t2828_PIs, t2828_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2828_TI, t2828_ITIs, t2828_VT, &EmptyCustomAttributesCache, &t2828_TI, &t2828_0_0_0, &t2828_1_0_0, t2828_IOs, &t2828_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2828)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5012_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>
extern MethodInfo m28913_MI;
static PropertyInfo t5012____Count_PropertyInfo = 
{
	&t5012_TI, "Count", &m28913_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28914_MI;
static PropertyInfo t5012____IsReadOnly_PropertyInfo = 
{
	&t5012_TI, "IsReadOnly", &m28914_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5012_PIs[] =
{
	&t5012____Count_PropertyInfo,
	&t5012____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5012_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28913_MI = 
{
	"get_Count", NULL, &t5012_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5012_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28914_MI = 
{
	"get_IsReadOnly", NULL, &t5012_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5012_m28915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28915_MI = 
{
	"Add", NULL, &t5012_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5012_m28915_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5012_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28916_MI = 
{
	"Clear", NULL, &t5012_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5012_m28917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28917_MI = 
{
	"Contains", NULL, &t5012_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5012_m28917_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3077_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5012_m28918_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3077_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28918_MI = 
{
	"CopyTo", NULL, &t5012_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5012_m28918_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5012_m28919_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5012_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28919_MI = 
{
	"Remove", NULL, &t5012_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5012_m28919_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5012_MIs[] =
{
	&m28913_MI,
	&m28914_MI,
	&m28915_MI,
	&m28916_MI,
	&m28917_MI,
	&m28918_MI,
	&m28919_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5014_TI;
static TypeInfo* t5012_ITIs[] = 
{
	&t611_TI,
	&t5014_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5012_0_0_0;
extern Il2CppType t5012_1_0_0;
struct t5012;
extern TypeInfo t5012_TI;
extern Il2CppGenericClass t5012_GC;
TypeInfo t5012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5012_MIs, t5012_PIs, NULL, NULL, NULL, NULL, NULL, &t5012_TI, t5012_ITIs, NULL, &EmptyCustomAttributesCache, &t5012_TI, &t5012_0_0_0, &t5012_1_0_0, NULL, &t5012_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5014_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>
extern TypeInfo t5014_TI;
extern Il2CppType t3748_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28920_MI = 
{
	"GetEnumerator", NULL, &t5014_TI, &t3748_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5014_MIs[] =
{
	&m28920_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5014_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5014_0_0_0;
extern Il2CppType t5014_1_0_0;
struct t5014;
extern TypeInfo t5014_TI;
extern Il2CppGenericClass t5014_GC;
TypeInfo t5014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5014_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5014_TI, t5014_ITIs, NULL, &EmptyCustomAttributesCache, &t5014_TI, &t5014_0_0_0, &t5014_1_0_0, NULL, &t5014_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5013_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>
extern MethodInfo m28921_MI;
extern MethodInfo m28922_MI;
static PropertyInfo t5013____Item_PropertyInfo = 
{
	&t5013_TI, "Item", &m28921_MI, &m28922_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5013_PIs[] =
{
	&t5013____Item_PropertyInfo,
	NULL
};
extern Il2CppType t987_0_0_0;
static ParameterInfo t5013_m28923_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28923_MI = 
{
	"IndexOf", NULL, &t5013_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5013_m28923_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t987_0_0_0;
static ParameterInfo t5013_m28924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28924_MI = 
{
	"Insert", NULL, &t5013_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5013_m28924_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5013_m28925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28925_MI = 
{
	"RemoveAt", NULL, &t5013_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5013_m28925_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5013_m28921_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t987_0_0_0;
extern void* RuntimeInvoker_t987_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28921_MI = 
{
	"get_Item", NULL, &t5013_TI, &t987_0_0_0, RuntimeInvoker_t987_t47, t5013_m28921_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t987_0_0_0;
static ParameterInfo t5013_m28922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t987_0_0_0},
};
extern TypeInfo t5013_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28922_MI = 
{
	"set_Item", NULL, &t5013_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5013_m28922_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5013_MIs[] =
{
	&m28923_MI,
	&m28924_MI,
	&m28925_MI,
	&m28921_MI,
	&m28922_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5012_TI;
extern TypeInfo t5014_TI;
static TypeInfo* t5013_ITIs[] = 
{
	&t611_TI,
	&t5012_TI,
	&t5014_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5013_0_0_0;
extern Il2CppType t5013_1_0_0;
struct t5013;
extern TypeInfo t5013_TI;
extern Il2CppGenericClass t5013_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5013_MIs, t5013_PIs, NULL, NULL, NULL, NULL, NULL, &t5013_TI, t5013_ITIs, NULL, &t1418__CustomAttributeCache, &t5013_TI, &t5013_0_0_0, &t5013_1_0_0, NULL, &t5013_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3749_TI;

#include "t746.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>
extern MethodInfo m28926_MI;
static PropertyInfo t3749____Current_PropertyInfo = 
{
	&t3749_TI, "Current", &m28926_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3749_PIs[] =
{
	&t3749____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3749_TI;
extern Il2CppType t746_0_0_0;
extern void* RuntimeInvoker_t746 (MethodInfo* method, void* obj, void** args);
MethodInfo m28926_MI = 
{
	"get_Current", NULL, &t3749_TI, &t746_0_0_0, RuntimeInvoker_t746, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3749_MIs[] =
{
	&m28926_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3749_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3749_0_0_0;
extern Il2CppType t3749_1_0_0;
struct t3749;
extern TypeInfo t3749_TI;
extern Il2CppGenericClass t3749_GC;
TypeInfo t3749_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3749_MIs, t3749_PIs, NULL, NULL, NULL, NULL, NULL, &t3749_TI, t3749_ITIs, NULL, &EmptyCustomAttributesCache, &t3749_TI, &t3749_0_0_0, &t3749_1_0_0, NULL, &t3749_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2829_TI;
#include "t2829MD.h"

extern TypeInfo t2829_TI;
extern TypeInfo t746_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16042_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21916_MI;
struct t29;
 int32_t m21916 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21916_MI;


extern MethodInfo m16038_MI;
 void m16038 (t2829 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16039_MI;
 t28 * m16039 (t2829 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16042(__this, &m16042_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t746_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16040_MI;
 void m16040 (t2829 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16041_MI;
 bool m16041 (t2829 * __this, MethodInfo* method){
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
extern MethodInfo m16042_MI;
 int32_t m16042 (t2829 * __this, MethodInfo* method){
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
		int32_t L_8 = m21916(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21916_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
extern Il2CppType t29_0_0_1;
FieldInfo t2829_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2829_TI, offsetof(t2829, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2829_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2829_TI, offsetof(t2829, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2829_FIs[] =
{
	&t2829_f0_FieldInfo,
	&t2829_f1_FieldInfo,
	NULL
};
extern MethodInfo m16039_MI;
static PropertyInfo t2829____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2829_TI, "System.Collections.IEnumerator.Current", &m16039_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16042_MI;
static PropertyInfo t2829____Current_PropertyInfo = 
{
	&t2829_TI, "Current", &m16042_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2829_PIs[] =
{
	&t2829____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2829____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2829_m16038_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2829_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16038_MI = 
{
	".ctor", (methodPointerType)&m16038, &t2829_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2829_m16038_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16039_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16039, &t2829_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16040_MI = 
{
	"Dispose", (methodPointerType)&m16040, &t2829_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16041_MI = 
{
	"MoveNext", (methodPointerType)&m16041, &t2829_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2829_TI;
extern Il2CppType t746_0_0_0;
extern void* RuntimeInvoker_t746 (MethodInfo* method, void* obj, void** args);
MethodInfo m16042_MI = 
{
	"get_Current", (methodPointerType)&m16042, &t2829_TI, &t746_0_0_0, RuntimeInvoker_t746, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2829_MIs[] =
{
	&m16038_MI,
	&m16039_MI,
	&m16040_MI,
	&m16041_MI,
	&m16042_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16039_MI;
extern MethodInfo m16041_MI;
extern MethodInfo m16040_MI;
extern MethodInfo m16042_MI;
static MethodInfo* t2829_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16039_MI,
	&m16041_MI,
	&m16040_MI,
	&m16042_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3749_TI;
static TypeInfo* t2829_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3749_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3749_TI;
static Il2CppInterfaceOffsetPair t2829_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3749_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2829_0_0_0;
extern Il2CppType t2829_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2829_TI;
extern Il2CppGenericClass t2829_GC;
extern TypeInfo t29_TI;
TypeInfo t2829_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2829_MIs, t2829_PIs, t2829_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2829_TI, t2829_ITIs, t2829_VT, &EmptyCustomAttributesCache, &t2829_TI, &t2829_0_0_0, &t2829_1_0_0, t2829_IOs, &t2829_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2829)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5015_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>
extern MethodInfo m28927_MI;
static PropertyInfo t5015____Count_PropertyInfo = 
{
	&t5015_TI, "Count", &m28927_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28928_MI;
static PropertyInfo t5015____IsReadOnly_PropertyInfo = 
{
	&t5015_TI, "IsReadOnly", &m28928_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5015_PIs[] =
{
	&t5015____Count_PropertyInfo,
	&t5015____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5015_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28927_MI = 
{
	"get_Count", NULL, &t5015_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5015_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28928_MI = 
{
	"get_IsReadOnly", NULL, &t5015_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t746_0_0_0;
static ParameterInfo t5015_m28929_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t746_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28929_MI = 
{
	"Add", NULL, &t5015_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5015_m28929_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5015_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28930_MI = 
{
	"Clear", NULL, &t5015_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t746_0_0_0;
static ParameterInfo t5015_m28931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t746_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28931_MI = 
{
	"Contains", NULL, &t5015_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5015_m28931_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3078_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5015_m28932_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3078_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28932_MI = 
{
	"CopyTo", NULL, &t5015_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5015_m28932_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t746_0_0_0;
static ParameterInfo t5015_m28933_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t746_0_0_0},
};
extern TypeInfo t5015_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28933_MI = 
{
	"Remove", NULL, &t5015_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5015_m28933_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5015_MIs[] =
{
	&m28927_MI,
	&m28928_MI,
	&m28929_MI,
	&m28930_MI,
	&m28931_MI,
	&m28932_MI,
	&m28933_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5017_TI;
static TypeInfo* t5015_ITIs[] = 
{
	&t611_TI,
	&t5017_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5015_0_0_0;
extern Il2CppType t5015_1_0_0;
struct t5015;
extern TypeInfo t5015_TI;
extern Il2CppGenericClass t5015_GC;
TypeInfo t5015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5015_MIs, t5015_PIs, NULL, NULL, NULL, NULL, NULL, &t5015_TI, t5015_ITIs, NULL, &EmptyCustomAttributesCache, &t5015_TI, &t5015_0_0_0, &t5015_1_0_0, NULL, &t5015_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5017_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>
extern TypeInfo t5017_TI;
extern Il2CppType t3749_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28934_MI = 
{
	"GetEnumerator", NULL, &t5017_TI, &t3749_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5017_MIs[] =
{
	&m28934_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5017_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5017_0_0_0;
extern Il2CppType t5017_1_0_0;
struct t5017;
extern TypeInfo t5017_TI;
extern Il2CppGenericClass t5017_GC;
TypeInfo t5017_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5017_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5017_TI, t5017_ITIs, NULL, &EmptyCustomAttributesCache, &t5017_TI, &t5017_0_0_0, &t5017_1_0_0, NULL, &t5017_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5016_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>
extern MethodInfo m28935_MI;
extern MethodInfo m28936_MI;
static PropertyInfo t5016____Item_PropertyInfo = 
{
	&t5016_TI, "Item", &m28935_MI, &m28936_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5016_PIs[] =
{
	&t5016____Item_PropertyInfo,
	NULL
};
extern Il2CppType t746_0_0_0;
static ParameterInfo t5016_m28937_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t746_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28937_MI = 
{
	"IndexOf", NULL, &t5016_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5016_m28937_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t746_0_0_0;
static ParameterInfo t5016_m28938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t746_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28938_MI = 
{
	"Insert", NULL, &t5016_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5016_m28938_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5016_m28939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28939_MI = 
{
	"RemoveAt", NULL, &t5016_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5016_m28939_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5016_m28935_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t746_0_0_0;
extern void* RuntimeInvoker_t746_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28935_MI = 
{
	"get_Item", NULL, &t5016_TI, &t746_0_0_0, RuntimeInvoker_t746_t47, t5016_m28935_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t746_0_0_0;
static ParameterInfo t5016_m28936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t746_0_0_0},
};
extern TypeInfo t5016_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28936_MI = 
{
	"set_Item", NULL, &t5016_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5016_m28936_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5016_MIs[] =
{
	&m28937_MI,
	&m28938_MI,
	&m28939_MI,
	&m28935_MI,
	&m28936_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5015_TI;
extern TypeInfo t5017_TI;
static TypeInfo* t5016_ITIs[] = 
{
	&t611_TI,
	&t5015_TI,
	&t5017_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5016_0_0_0;
extern Il2CppType t5016_1_0_0;
struct t5016;
extern TypeInfo t5016_TI;
extern Il2CppGenericClass t5016_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5016_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5016_MIs, t5016_PIs, NULL, NULL, NULL, NULL, NULL, &t5016_TI, t5016_ITIs, NULL, &t1418__CustomAttributeCache, &t5016_TI, &t5016_0_0_0, &t5016_1_0_0, NULL, &t5016_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3750_TI;

#include "t690.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo m28940_MI;
static PropertyInfo t3750____Current_PropertyInfo = 
{
	&t3750_TI, "Current", &m28940_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3750_PIs[] =
{
	&t3750____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3750_TI;
extern Il2CppType t690_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28940_MI = 
{
	"get_Current", NULL, &t3750_TI, &t690_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3750_MIs[] =
{
	&m28940_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3750_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3750_0_0_0;
extern Il2CppType t3750_1_0_0;
struct t3750;
extern TypeInfo t3750_TI;
extern Il2CppGenericClass t3750_GC;
TypeInfo t3750_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3750_MIs, t3750_PIs, NULL, NULL, NULL, NULL, NULL, &t3750_TI, t3750_ITIs, NULL, &EmptyCustomAttributesCache, &t3750_TI, &t3750_0_0_0, &t3750_1_0_0, NULL, &t3750_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2830_TI;
#include "t2830MD.h"

extern TypeInfo t2830_TI;
extern TypeInfo t690_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16047_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21927_MI;
struct t29;
struct t29;
 t28 * m16643_gshared (t29 * __this, int32_t p0, MethodInfo* method);
#define m16643(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
#define m21927(__this, p0, method) (t690 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21927_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2830_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2830_TI, offsetof(t2830, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2830_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2830_TI, offsetof(t2830, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2830_FIs[] =
{
	&t2830_f0_FieldInfo,
	&t2830_f1_FieldInfo,
	NULL
};
extern MethodInfo m16044_MI;
static PropertyInfo t2830____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2830_TI, "System.Collections.IEnumerator.Current", &m16044_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16047_MI;
static PropertyInfo t2830____Current_PropertyInfo = 
{
	&t2830_TI, "Current", &m16047_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2830_PIs[] =
{
	&t2830____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2830____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2830_m16043_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2830_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16043_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2830_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2830_m16043_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16044_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2830_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16045_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2830_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16046_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2830_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2830_TI;
extern Il2CppType t690_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16047_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2830_TI, &t690_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2830_MIs[] =
{
	&m16043_MI,
	&m16044_MI,
	&m16045_MI,
	&m16046_MI,
	&m16047_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16044_MI;
extern MethodInfo m16046_MI;
extern MethodInfo m16045_MI;
extern MethodInfo m16047_MI;
static MethodInfo* t2830_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16044_MI,
	&m16046_MI,
	&m16045_MI,
	&m16047_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3750_TI;
static TypeInfo* t2830_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3750_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3750_TI;
static Il2CppInterfaceOffsetPair t2830_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3750_TI, 7},
};
extern MethodInfo m16047_MI;
extern TypeInfo t690_TI;
extern MethodInfo m21927_MI;
static void* t2830_RGCTXData[3] = 
{
	&m16047_MI,
	&t690_TI,
	&m21927_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2830_0_0_0;
extern Il2CppType t2830_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2830_TI;
extern Il2CppGenericClass t2830_GC;
extern TypeInfo t29_TI;
TypeInfo t2830_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2830_MIs, t2830_PIs, t2830_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2830_TI, t2830_ITIs, t2830_VT, &EmptyCustomAttributesCache, &t2830_TI, &t2830_0_0_0, &t2830_1_0_0, t2830_IOs, &t2830_GC, NULL, NULL, NULL, t2830_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2830)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5018_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo m28941_MI;
static PropertyInfo t5018____Count_PropertyInfo = 
{
	&t5018_TI, "Count", &m28941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28942_MI;
static PropertyInfo t5018____IsReadOnly_PropertyInfo = 
{
	&t5018_TI, "IsReadOnly", &m28942_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5018_PIs[] =
{
	&t5018____Count_PropertyInfo,
	&t5018____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5018_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28941_MI = 
{
	"get_Count", NULL, &t5018_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5018_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28942_MI = 
{
	"get_IsReadOnly", NULL, &t5018_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t690_0_0_0;
static ParameterInfo t5018_m28943_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t690_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28943_MI = 
{
	"Add", NULL, &t5018_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5018_m28943_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5018_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28944_MI = 
{
	"Clear", NULL, &t5018_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t690_0_0_0;
static ParameterInfo t5018_m28945_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t690_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28945_MI = 
{
	"Contains", NULL, &t5018_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5018_m28945_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3079_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5018_m28946_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28946_MI = 
{
	"CopyTo", NULL, &t5018_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5018_m28946_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t690_0_0_0;
static ParameterInfo t5018_m28947_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t690_0_0_0},
};
extern TypeInfo t5018_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28947_MI = 
{
	"Remove", NULL, &t5018_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5018_m28947_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5018_MIs[] =
{
	&m28941_MI,
	&m28942_MI,
	&m28943_MI,
	&m28944_MI,
	&m28945_MI,
	&m28946_MI,
	&m28947_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5020_TI;
static TypeInfo* t5018_ITIs[] = 
{
	&t611_TI,
	&t5020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5018_0_0_0;
extern Il2CppType t5018_1_0_0;
struct t5018;
extern TypeInfo t5018_TI;
extern Il2CppGenericClass t5018_GC;
TypeInfo t5018_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5018_MIs, t5018_PIs, NULL, NULL, NULL, NULL, NULL, &t5018_TI, t5018_ITIs, NULL, &EmptyCustomAttributesCache, &t5018_TI, &t5018_0_0_0, &t5018_1_0_0, NULL, &t5018_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5020_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>
extern TypeInfo t5020_TI;
extern Il2CppType t3750_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28948_MI = 
{
	"GetEnumerator", NULL, &t5020_TI, &t3750_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5020_MIs[] =
{
	&m28948_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5020_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5020_0_0_0;
extern Il2CppType t5020_1_0_0;
struct t5020;
extern TypeInfo t5020_TI;
extern Il2CppGenericClass t5020_GC;
TypeInfo t5020_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5020_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5020_TI, t5020_ITIs, NULL, &EmptyCustomAttributesCache, &t5020_TI, &t5020_0_0_0, &t5020_1_0_0, NULL, &t5020_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5019_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo m28949_MI;
extern MethodInfo m28950_MI;
static PropertyInfo t5019____Item_PropertyInfo = 
{
	&t5019_TI, "Item", &m28949_MI, &m28950_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5019_PIs[] =
{
	&t5019____Item_PropertyInfo,
	NULL
};
extern Il2CppType t690_0_0_0;
static ParameterInfo t5019_m28951_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t690_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28951_MI = 
{
	"IndexOf", NULL, &t5019_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5019_m28951_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t690_0_0_0;
static ParameterInfo t5019_m28952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t690_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28952_MI = 
{
	"Insert", NULL, &t5019_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5019_m28952_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5019_m28953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28953_MI = 
{
	"RemoveAt", NULL, &t5019_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5019_m28953_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5019_m28949_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t690_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28949_MI = 
{
	"get_Item", NULL, &t5019_TI, &t690_0_0_0, RuntimeInvoker_t28_t47, t5019_m28949_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t690_0_0_0;
static ParameterInfo t5019_m28950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t690_0_0_0},
};
extern TypeInfo t5019_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28950_MI = 
{
	"set_Item", NULL, &t5019_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5019_m28950_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5019_MIs[] =
{
	&m28951_MI,
	&m28952_MI,
	&m28953_MI,
	&m28949_MI,
	&m28950_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5018_TI;
extern TypeInfo t5020_TI;
static TypeInfo* t5019_ITIs[] = 
{
	&t611_TI,
	&t5018_TI,
	&t5020_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5019_0_0_0;
extern Il2CppType t5019_1_0_0;
struct t5019;
extern TypeInfo t5019_TI;
extern Il2CppGenericClass t5019_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5019_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5019_MIs, t5019_PIs, NULL, NULL, NULL, NULL, NULL, &t5019_TI, t5019_ITIs, NULL, &t1418__CustomAttributeCache, &t5019_TI, &t5019_0_0_0, &t5019_1_0_0, NULL, &t5019_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3751_TI;

#include "t688.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo m28954_MI;
static PropertyInfo t3751____Current_PropertyInfo = 
{
	&t3751_TI, "Current", &m28954_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3751_PIs[] =
{
	&t3751____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3751_TI;
extern Il2CppType t688_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28954_MI = 
{
	"get_Current", NULL, &t3751_TI, &t688_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3751_MIs[] =
{
	&m28954_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3751_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3751_0_0_0;
extern Il2CppType t3751_1_0_0;
struct t3751;
extern TypeInfo t3751_TI;
extern Il2CppGenericClass t3751_GC;
TypeInfo t3751_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3751_MIs, t3751_PIs, NULL, NULL, NULL, NULL, NULL, &t3751_TI, t3751_ITIs, NULL, &EmptyCustomAttributesCache, &t3751_TI, &t3751_0_0_0, &t3751_1_0_0, NULL, &t3751_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2831.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2831_TI;
#include "t2831MD.h"

extern TypeInfo t2831_TI;
extern TypeInfo t688_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16052_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21938_MI;
struct t29;
#define m21938(__this, p0, method) (t688 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21938_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2831_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2831_TI, offsetof(t2831, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2831_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2831_TI, offsetof(t2831, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2831_FIs[] =
{
	&t2831_f0_FieldInfo,
	&t2831_f1_FieldInfo,
	NULL
};
extern MethodInfo m16049_MI;
static PropertyInfo t2831____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2831_TI, "System.Collections.IEnumerator.Current", &m16049_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16052_MI;
static PropertyInfo t2831____Current_PropertyInfo = 
{
	&t2831_TI, "Current", &m16052_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2831_PIs[] =
{
	&t2831____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2831____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2831_m16048_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2831_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16048_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2831_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2831_m16048_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16049_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2831_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16050_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2831_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16051_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2831_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2831_TI;
extern Il2CppType t688_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16052_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2831_TI, &t688_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2831_MIs[] =
{
	&m16048_MI,
	&m16049_MI,
	&m16050_MI,
	&m16051_MI,
	&m16052_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16049_MI;
extern MethodInfo m16051_MI;
extern MethodInfo m16050_MI;
extern MethodInfo m16052_MI;
static MethodInfo* t2831_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16049_MI,
	&m16051_MI,
	&m16050_MI,
	&m16052_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3751_TI;
static TypeInfo* t2831_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3751_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3751_TI;
static Il2CppInterfaceOffsetPair t2831_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3751_TI, 7},
};
extern MethodInfo m16052_MI;
extern TypeInfo t688_TI;
extern MethodInfo m21938_MI;
static void* t2831_RGCTXData[3] = 
{
	&m16052_MI,
	&t688_TI,
	&m21938_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2831_0_0_0;
extern Il2CppType t2831_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2831_TI;
extern Il2CppGenericClass t2831_GC;
extern TypeInfo t29_TI;
TypeInfo t2831_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2831_MIs, t2831_PIs, t2831_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2831_TI, t2831_ITIs, t2831_VT, &EmptyCustomAttributesCache, &t2831_TI, &t2831_0_0_0, &t2831_1_0_0, t2831_IOs, &t2831_GC, NULL, NULL, NULL, t2831_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2831)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5021_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo m28955_MI;
static PropertyInfo t5021____Count_PropertyInfo = 
{
	&t5021_TI, "Count", &m28955_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28956_MI;
static PropertyInfo t5021____IsReadOnly_PropertyInfo = 
{
	&t5021_TI, "IsReadOnly", &m28956_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5021_PIs[] =
{
	&t5021____Count_PropertyInfo,
	&t5021____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5021_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28955_MI = 
{
	"get_Count", NULL, &t5021_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5021_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28956_MI = 
{
	"get_IsReadOnly", NULL, &t5021_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t688_0_0_0;
static ParameterInfo t5021_m28957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t688_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28957_MI = 
{
	"Add", NULL, &t5021_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5021_m28957_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5021_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28958_MI = 
{
	"Clear", NULL, &t5021_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t688_0_0_0;
static ParameterInfo t5021_m28959_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t688_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28959_MI = 
{
	"Contains", NULL, &t5021_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5021_m28959_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3080_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5021_m28960_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3080_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28960_MI = 
{
	"CopyTo", NULL, &t5021_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5021_m28960_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t688_0_0_0;
static ParameterInfo t5021_m28961_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t688_0_0_0},
};
extern TypeInfo t5021_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28961_MI = 
{
	"Remove", NULL, &t5021_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5021_m28961_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5021_MIs[] =
{
	&m28955_MI,
	&m28956_MI,
	&m28957_MI,
	&m28958_MI,
	&m28959_MI,
	&m28960_MI,
	&m28961_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5023_TI;
static TypeInfo* t5021_ITIs[] = 
{
	&t611_TI,
	&t5023_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5021_0_0_0;
extern Il2CppType t5021_1_0_0;
struct t5021;
extern TypeInfo t5021_TI;
extern Il2CppGenericClass t5021_GC;
TypeInfo t5021_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5021_MIs, t5021_PIs, NULL, NULL, NULL, NULL, NULL, &t5021_TI, t5021_ITIs, NULL, &EmptyCustomAttributesCache, &t5021_TI, &t5021_0_0_0, &t5021_1_0_0, NULL, &t5021_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5023_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>
extern TypeInfo t5023_TI;
extern Il2CppType t3751_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28962_MI = 
{
	"GetEnumerator", NULL, &t5023_TI, &t3751_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5023_MIs[] =
{
	&m28962_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5023_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5023_0_0_0;
extern Il2CppType t5023_1_0_0;
struct t5023;
extern TypeInfo t5023_TI;
extern Il2CppGenericClass t5023_GC;
TypeInfo t5023_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5023_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5023_TI, t5023_ITIs, NULL, &EmptyCustomAttributesCache, &t5023_TI, &t5023_0_0_0, &t5023_1_0_0, NULL, &t5023_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5022_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo m28963_MI;
extern MethodInfo m28964_MI;
static PropertyInfo t5022____Item_PropertyInfo = 
{
	&t5022_TI, "Item", &m28963_MI, &m28964_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5022_PIs[] =
{
	&t5022____Item_PropertyInfo,
	NULL
};
extern Il2CppType t688_0_0_0;
static ParameterInfo t5022_m28965_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t688_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28965_MI = 
{
	"IndexOf", NULL, &t5022_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5022_m28965_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t688_0_0_0;
static ParameterInfo t5022_m28966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t688_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28966_MI = 
{
	"Insert", NULL, &t5022_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5022_m28966_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5022_m28967_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28967_MI = 
{
	"RemoveAt", NULL, &t5022_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5022_m28967_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5022_m28963_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t688_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28963_MI = 
{
	"get_Item", NULL, &t5022_TI, &t688_0_0_0, RuntimeInvoker_t28_t47, t5022_m28963_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t688_0_0_0;
static ParameterInfo t5022_m28964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t688_0_0_0},
};
extern TypeInfo t5022_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28964_MI = 
{
	"set_Item", NULL, &t5022_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5022_m28964_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5022_MIs[] =
{
	&m28965_MI,
	&m28966_MI,
	&m28967_MI,
	&m28963_MI,
	&m28964_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5021_TI;
extern TypeInfo t5023_TI;
static TypeInfo* t5022_ITIs[] = 
{
	&t611_TI,
	&t5021_TI,
	&t5023_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5022_0_0_0;
extern Il2CppType t5022_1_0_0;
struct t5022;
extern TypeInfo t5022_TI;
extern Il2CppGenericClass t5022_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5022_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5022_MIs, t5022_PIs, NULL, NULL, NULL, NULL, NULL, &t5022_TI, t5022_ITIs, NULL, &t1418__CustomAttributeCache, &t5022_TI, &t5022_0_0_0, &t5022_1_0_0, NULL, &t5022_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3752_TI;

#include "t996.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo m28968_MI;
static PropertyInfo t3752____Current_PropertyInfo = 
{
	&t3752_TI, "Current", &m28968_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3752_PIs[] =
{
	&t3752____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3752_TI;
extern Il2CppType t996_0_0_0;
extern void* RuntimeInvoker_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m28968_MI = 
{
	"get_Current", NULL, &t3752_TI, &t996_0_0_0, RuntimeInvoker_t996, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3752_MIs[] =
{
	&m28968_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3752_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3752_0_0_0;
extern Il2CppType t3752_1_0_0;
struct t3752;
extern TypeInfo t3752_TI;
extern Il2CppGenericClass t3752_GC;
TypeInfo t3752_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3752_MIs, t3752_PIs, NULL, NULL, NULL, NULL, NULL, &t3752_TI, t3752_ITIs, NULL, &EmptyCustomAttributesCache, &t3752_TI, &t3752_0_0_0, &t3752_1_0_0, NULL, &t3752_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2832_TI;
#include "t2832MD.h"

extern TypeInfo t2832_TI;
extern TypeInfo t996_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16057_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21949_MI;
struct t29;
 int32_t m21949 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21949_MI;


extern MethodInfo m16053_MI;
 void m16053 (t2832 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16054_MI;
 t28 * m16054 (t2832 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16057(__this, &m16057_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t996_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16055_MI;
 void m16055 (t2832 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16056_MI;
 bool m16056 (t2832 * __this, MethodInfo* method){
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
extern MethodInfo m16057_MI;
 int32_t m16057 (t2832 * __this, MethodInfo* method){
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
		int32_t L_8 = m21949(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21949_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType t29_0_0_1;
FieldInfo t2832_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2832_TI, offsetof(t2832, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2832_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2832_TI, offsetof(t2832, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2832_FIs[] =
{
	&t2832_f0_FieldInfo,
	&t2832_f1_FieldInfo,
	NULL
};
extern MethodInfo m16054_MI;
static PropertyInfo t2832____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2832_TI, "System.Collections.IEnumerator.Current", &m16054_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16057_MI;
static PropertyInfo t2832____Current_PropertyInfo = 
{
	&t2832_TI, "Current", &m16057_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2832_PIs[] =
{
	&t2832____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2832____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2832_m16053_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2832_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16053_MI = 
{
	".ctor", (methodPointerType)&m16053, &t2832_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2832_m16053_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16054_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16054, &t2832_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16055_MI = 
{
	"Dispose", (methodPointerType)&m16055, &t2832_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16056_MI = 
{
	"MoveNext", (methodPointerType)&m16056, &t2832_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2832_TI;
extern Il2CppType t996_0_0_0;
extern void* RuntimeInvoker_t996 (MethodInfo* method, void* obj, void** args);
MethodInfo m16057_MI = 
{
	"get_Current", (methodPointerType)&m16057, &t2832_TI, &t996_0_0_0, RuntimeInvoker_t996, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2832_MIs[] =
{
	&m16053_MI,
	&m16054_MI,
	&m16055_MI,
	&m16056_MI,
	&m16057_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16054_MI;
extern MethodInfo m16056_MI;
extern MethodInfo m16055_MI;
extern MethodInfo m16057_MI;
static MethodInfo* t2832_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16054_MI,
	&m16056_MI,
	&m16055_MI,
	&m16057_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3752_TI;
static TypeInfo* t2832_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3752_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3752_TI;
static Il2CppInterfaceOffsetPair t2832_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3752_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2832_0_0_0;
extern Il2CppType t2832_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2832_TI;
extern Il2CppGenericClass t2832_GC;
extern TypeInfo t29_TI;
TypeInfo t2832_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2832_MIs, t2832_PIs, t2832_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2832_TI, t2832_ITIs, t2832_VT, &EmptyCustomAttributesCache, &t2832_TI, &t2832_0_0_0, &t2832_1_0_0, t2832_IOs, &t2832_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2832)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5024_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo m28969_MI;
static PropertyInfo t5024____Count_PropertyInfo = 
{
	&t5024_TI, "Count", &m28969_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28970_MI;
static PropertyInfo t5024____IsReadOnly_PropertyInfo = 
{
	&t5024_TI, "IsReadOnly", &m28970_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5024_PIs[] =
{
	&t5024____Count_PropertyInfo,
	&t5024____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5024_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28969_MI = 
{
	"get_Count", NULL, &t5024_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5024_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28970_MI = 
{
	"get_IsReadOnly", NULL, &t5024_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t5024_m28971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28971_MI = 
{
	"Add", NULL, &t5024_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5024_m28971_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5024_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28972_MI = 
{
	"Clear", NULL, &t5024_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t5024_m28973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28973_MI = 
{
	"Contains", NULL, &t5024_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5024_m28973_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3081_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5024_m28974_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3081_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28974_MI = 
{
	"CopyTo", NULL, &t5024_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5024_m28974_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t996_0_0_0;
static ParameterInfo t5024_m28975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5024_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28975_MI = 
{
	"Remove", NULL, &t5024_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5024_m28975_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5024_MIs[] =
{
	&m28969_MI,
	&m28970_MI,
	&m28971_MI,
	&m28972_MI,
	&m28973_MI,
	&m28974_MI,
	&m28975_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5026_TI;
static TypeInfo* t5024_ITIs[] = 
{
	&t611_TI,
	&t5026_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5024_0_0_0;
extern Il2CppType t5024_1_0_0;
struct t5024;
extern TypeInfo t5024_TI;
extern Il2CppGenericClass t5024_GC;
TypeInfo t5024_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5024_MIs, t5024_PIs, NULL, NULL, NULL, NULL, NULL, &t5024_TI, t5024_ITIs, NULL, &EmptyCustomAttributesCache, &t5024_TI, &t5024_0_0_0, &t5024_1_0_0, NULL, &t5024_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5026_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern TypeInfo t5026_TI;
extern Il2CppType t3752_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28976_MI = 
{
	"GetEnumerator", NULL, &t5026_TI, &t3752_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5026_MIs[] =
{
	&m28976_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5026_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5026_0_0_0;
extern Il2CppType t5026_1_0_0;
struct t5026;
extern TypeInfo t5026_TI;
extern Il2CppGenericClass t5026_GC;
TypeInfo t5026_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5026_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5026_TI, t5026_ITIs, NULL, &EmptyCustomAttributesCache, &t5026_TI, &t5026_0_0_0, &t5026_1_0_0, NULL, &t5026_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5025_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo m28977_MI;
extern MethodInfo m28978_MI;
static PropertyInfo t5025____Item_PropertyInfo = 
{
	&t5025_TI, "Item", &m28977_MI, &m28978_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5025_PIs[] =
{
	&t5025____Item_PropertyInfo,
	NULL
};
extern Il2CppType t996_0_0_0;
static ParameterInfo t5025_m28979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28979_MI = 
{
	"IndexOf", NULL, &t5025_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5025_m28979_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t5025_m28980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28980_MI = 
{
	"Insert", NULL, &t5025_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5025_m28980_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5025_m28981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28981_MI = 
{
	"RemoveAt", NULL, &t5025_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5025_m28981_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5025_m28977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t996_0_0_0;
extern void* RuntimeInvoker_t996_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28977_MI = 
{
	"get_Item", NULL, &t5025_TI, &t996_0_0_0, RuntimeInvoker_t996_t47, t5025_m28977_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t5025_m28978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern TypeInfo t5025_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28978_MI = 
{
	"set_Item", NULL, &t5025_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5025_m28978_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5025_MIs[] =
{
	&m28979_MI,
	&m28980_MI,
	&m28981_MI,
	&m28977_MI,
	&m28978_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5024_TI;
extern TypeInfo t5026_TI;
static TypeInfo* t5025_ITIs[] = 
{
	&t611_TI,
	&t5024_TI,
	&t5026_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5025_0_0_0;
extern Il2CppType t5025_1_0_0;
struct t5025;
extern TypeInfo t5025_TI;
extern Il2CppGenericClass t5025_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5025_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5025_MIs, t5025_PIs, NULL, NULL, NULL, NULL, NULL, &t5025_TI, t5025_ITIs, NULL, &t1418__CustomAttributeCache, &t5025_TI, &t5025_0_0_0, &t5025_1_0_0, NULL, &t5025_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3753_TI;

#include "t693.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo m28982_MI;
static PropertyInfo t3753____Current_PropertyInfo = 
{
	&t3753_TI, "Current", &m28982_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3753_PIs[] =
{
	&t3753____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3753_TI;
extern Il2CppType t693_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28982_MI = 
{
	"get_Current", NULL, &t3753_TI, &t693_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3753_MIs[] =
{
	&m28982_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3753_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3753_0_0_0;
extern Il2CppType t3753_1_0_0;
struct t3753;
extern TypeInfo t3753_TI;
extern Il2CppGenericClass t3753_GC;
TypeInfo t3753_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3753_MIs, t3753_PIs, NULL, NULL, NULL, NULL, NULL, &t3753_TI, t3753_ITIs, NULL, &EmptyCustomAttributesCache, &t3753_TI, &t3753_0_0_0, &t3753_1_0_0, NULL, &t3753_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2833_TI;
#include "t2833MD.h"

extern TypeInfo t2833_TI;
extern TypeInfo t693_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16062_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21960_MI;
struct t29;
#define m21960(__this, p0, method) (t693 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21960_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2833_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2833_TI, offsetof(t2833, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2833_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2833_TI, offsetof(t2833, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2833_FIs[] =
{
	&t2833_f0_FieldInfo,
	&t2833_f1_FieldInfo,
	NULL
};
extern MethodInfo m16059_MI;
static PropertyInfo t2833____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2833_TI, "System.Collections.IEnumerator.Current", &m16059_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16062_MI;
static PropertyInfo t2833____Current_PropertyInfo = 
{
	&t2833_TI, "Current", &m16062_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2833_PIs[] =
{
	&t2833____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2833____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2833_m16058_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2833_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16058_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2833_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2833_m16058_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16059_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2833_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16060_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2833_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16061_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2833_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2833_TI;
extern Il2CppType t693_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16062_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2833_TI, &t693_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2833_MIs[] =
{
	&m16058_MI,
	&m16059_MI,
	&m16060_MI,
	&m16061_MI,
	&m16062_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16059_MI;
extern MethodInfo m16061_MI;
extern MethodInfo m16060_MI;
extern MethodInfo m16062_MI;
static MethodInfo* t2833_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16059_MI,
	&m16061_MI,
	&m16060_MI,
	&m16062_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3753_TI;
static TypeInfo* t2833_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3753_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3753_TI;
static Il2CppInterfaceOffsetPair t2833_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3753_TI, 7},
};
extern MethodInfo m16062_MI;
extern TypeInfo t693_TI;
extern MethodInfo m21960_MI;
static void* t2833_RGCTXData[3] = 
{
	&m16062_MI,
	&t693_TI,
	&m21960_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2833_0_0_0;
extern Il2CppType t2833_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2833_TI;
extern Il2CppGenericClass t2833_GC;
extern TypeInfo t29_TI;
TypeInfo t2833_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2833_MIs, t2833_PIs, t2833_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2833_TI, t2833_ITIs, t2833_VT, &EmptyCustomAttributesCache, &t2833_TI, &t2833_0_0_0, &t2833_1_0_0, t2833_IOs, &t2833_GC, NULL, NULL, NULL, t2833_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2833)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5027_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo m28983_MI;
static PropertyInfo t5027____Count_PropertyInfo = 
{
	&t5027_TI, "Count", &m28983_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28984_MI;
static PropertyInfo t5027____IsReadOnly_PropertyInfo = 
{
	&t5027_TI, "IsReadOnly", &m28984_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5027_PIs[] =
{
	&t5027____Count_PropertyInfo,
	&t5027____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5027_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28983_MI = 
{
	"get_Count", NULL, &t5027_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5027_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28984_MI = 
{
	"get_IsReadOnly", NULL, &t5027_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t693_0_0_0;
static ParameterInfo t5027_m28985_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t693_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28985_MI = 
{
	"Add", NULL, &t5027_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5027_m28985_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5027_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28986_MI = 
{
	"Clear", NULL, &t5027_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t693_0_0_0;
static ParameterInfo t5027_m28987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t693_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28987_MI = 
{
	"Contains", NULL, &t5027_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5027_m28987_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3082_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5027_m28988_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3082_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28988_MI = 
{
	"CopyTo", NULL, &t5027_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5027_m28988_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t693_0_0_0;
static ParameterInfo t5027_m28989_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t693_0_0_0},
};
extern TypeInfo t5027_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28989_MI = 
{
	"Remove", NULL, &t5027_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5027_m28989_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5027_MIs[] =
{
	&m28983_MI,
	&m28984_MI,
	&m28985_MI,
	&m28986_MI,
	&m28987_MI,
	&m28988_MI,
	&m28989_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5029_TI;
static TypeInfo* t5027_ITIs[] = 
{
	&t611_TI,
	&t5029_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5027_0_0_0;
extern Il2CppType t5027_1_0_0;
struct t5027;
extern TypeInfo t5027_TI;
extern Il2CppGenericClass t5027_GC;
TypeInfo t5027_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5027_MIs, t5027_PIs, NULL, NULL, NULL, NULL, NULL, &t5027_TI, t5027_ITIs, NULL, &EmptyCustomAttributesCache, &t5027_TI, &t5027_0_0_0, &t5027_1_0_0, NULL, &t5027_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5029_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern TypeInfo t5029_TI;
extern Il2CppType t3753_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28990_MI = 
{
	"GetEnumerator", NULL, &t5029_TI, &t3753_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5029_MIs[] =
{
	&m28990_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5029_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5029_0_0_0;
extern Il2CppType t5029_1_0_0;
struct t5029;
extern TypeInfo t5029_TI;
extern Il2CppGenericClass t5029_GC;
TypeInfo t5029_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5029_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5029_TI, t5029_ITIs, NULL, &EmptyCustomAttributesCache, &t5029_TI, &t5029_0_0_0, &t5029_1_0_0, NULL, &t5029_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5028_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo m28991_MI;
extern MethodInfo m28992_MI;
static PropertyInfo t5028____Item_PropertyInfo = 
{
	&t5028_TI, "Item", &m28991_MI, &m28992_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5028_PIs[] =
{
	&t5028____Item_PropertyInfo,
	NULL
};
extern Il2CppType t693_0_0_0;
static ParameterInfo t5028_m28993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t693_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28993_MI = 
{
	"IndexOf", NULL, &t5028_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5028_m28993_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t693_0_0_0;
static ParameterInfo t5028_m28994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t693_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28994_MI = 
{
	"Insert", NULL, &t5028_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5028_m28994_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5028_m28995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28995_MI = 
{
	"RemoveAt", NULL, &t5028_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5028_m28995_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5028_m28991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t693_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28991_MI = 
{
	"get_Item", NULL, &t5028_TI, &t693_0_0_0, RuntimeInvoker_t28_t47, t5028_m28991_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t693_0_0_0;
static ParameterInfo t5028_m28992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t693_0_0_0},
};
extern TypeInfo t5028_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28992_MI = 
{
	"set_Item", NULL, &t5028_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5028_m28992_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5028_MIs[] =
{
	&m28993_MI,
	&m28994_MI,
	&m28995_MI,
	&m28991_MI,
	&m28992_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5027_TI;
extern TypeInfo t5029_TI;
static TypeInfo* t5028_ITIs[] = 
{
	&t611_TI,
	&t5027_TI,
	&t5029_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5028_0_0_0;
extern Il2CppType t5028_1_0_0;
struct t5028;
extern TypeInfo t5028_TI;
extern Il2CppGenericClass t5028_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5028_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5028_MIs, t5028_PIs, NULL, NULL, NULL, NULL, NULL, &t5028_TI, t5028_ITIs, NULL, &t1418__CustomAttributeCache, &t5028_TI, &t5028_0_0_0, &t5028_1_0_0, NULL, &t5028_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3754_TI;

#include "t997.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo m28996_MI;
static PropertyInfo t3754____Current_PropertyInfo = 
{
	&t3754_TI, "Current", &m28996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3754_PIs[] =
{
	&t3754____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3754_TI;
extern Il2CppType t997_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28996_MI = 
{
	"get_Current", NULL, &t3754_TI, &t997_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3754_MIs[] =
{
	&m28996_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3754_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3754_0_0_0;
extern Il2CppType t3754_1_0_0;
struct t3754;
extern TypeInfo t3754_TI;
extern Il2CppGenericClass t3754_GC;
TypeInfo t3754_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3754_MIs, t3754_PIs, NULL, NULL, NULL, NULL, NULL, &t3754_TI, t3754_ITIs, NULL, &EmptyCustomAttributesCache, &t3754_TI, &t3754_0_0_0, &t3754_1_0_0, NULL, &t3754_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2834_TI;
#include "t2834MD.h"

extern TypeInfo t2834_TI;
extern TypeInfo t997_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16067_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21971_MI;
struct t29;
#define m21971(__this, p0, method) (t997 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21971_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2834_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2834_TI, offsetof(t2834, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2834_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2834_TI, offsetof(t2834, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2834_FIs[] =
{
	&t2834_f0_FieldInfo,
	&t2834_f1_FieldInfo,
	NULL
};
extern MethodInfo m16064_MI;
static PropertyInfo t2834____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2834_TI, "System.Collections.IEnumerator.Current", &m16064_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16067_MI;
static PropertyInfo t2834____Current_PropertyInfo = 
{
	&t2834_TI, "Current", &m16067_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2834_PIs[] =
{
	&t2834____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2834____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2834_m16063_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2834_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16063_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2834_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2834_m16063_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16064_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2834_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16065_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2834_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16066_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2834_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2834_TI;
extern Il2CppType t997_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16067_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2834_TI, &t997_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2834_MIs[] =
{
	&m16063_MI,
	&m16064_MI,
	&m16065_MI,
	&m16066_MI,
	&m16067_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16064_MI;
extern MethodInfo m16066_MI;
extern MethodInfo m16065_MI;
extern MethodInfo m16067_MI;
static MethodInfo* t2834_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16064_MI,
	&m16066_MI,
	&m16065_MI,
	&m16067_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3754_TI;
static TypeInfo* t2834_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3754_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3754_TI;
static Il2CppInterfaceOffsetPair t2834_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3754_TI, 7},
};
extern MethodInfo m16067_MI;
extern TypeInfo t997_TI;
extern MethodInfo m21971_MI;
static void* t2834_RGCTXData[3] = 
{
	&m16067_MI,
	&t997_TI,
	&m21971_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2834_0_0_0;
extern Il2CppType t2834_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2834_TI;
extern Il2CppGenericClass t2834_GC;
extern TypeInfo t29_TI;
TypeInfo t2834_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2834_MIs, t2834_PIs, t2834_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2834_TI, t2834_ITIs, t2834_VT, &EmptyCustomAttributesCache, &t2834_TI, &t2834_0_0_0, &t2834_1_0_0, t2834_IOs, &t2834_GC, NULL, NULL, NULL, t2834_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2834)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5030_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo m28997_MI;
static PropertyInfo t5030____Count_PropertyInfo = 
{
	&t5030_TI, "Count", &m28997_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28998_MI;
static PropertyInfo t5030____IsReadOnly_PropertyInfo = 
{
	&t5030_TI, "IsReadOnly", &m28998_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5030_PIs[] =
{
	&t5030____Count_PropertyInfo,
	&t5030____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5030_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28997_MI = 
{
	"get_Count", NULL, &t5030_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5030_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28998_MI = 
{
	"get_IsReadOnly", NULL, &t5030_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t997_0_0_0;
static ParameterInfo t5030_m28999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t997_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28999_MI = 
{
	"Add", NULL, &t5030_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5030_m28999_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5030_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29000_MI = 
{
	"Clear", NULL, &t5030_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t997_0_0_0;
static ParameterInfo t5030_m29001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t997_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29001_MI = 
{
	"Contains", NULL, &t5030_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5030_m29001_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3083_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5030_m29002_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3083_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29002_MI = 
{
	"CopyTo", NULL, &t5030_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5030_m29002_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t997_0_0_0;
static ParameterInfo t5030_m29003_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t997_0_0_0},
};
extern TypeInfo t5030_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29003_MI = 
{
	"Remove", NULL, &t5030_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5030_m29003_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5030_MIs[] =
{
	&m28997_MI,
	&m28998_MI,
	&m28999_MI,
	&m29000_MI,
	&m29001_MI,
	&m29002_MI,
	&m29003_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5032_TI;
static TypeInfo* t5030_ITIs[] = 
{
	&t611_TI,
	&t5032_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5030_0_0_0;
extern Il2CppType t5030_1_0_0;
struct t5030;
extern TypeInfo t5030_TI;
extern Il2CppGenericClass t5030_GC;
TypeInfo t5030_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5030_MIs, t5030_PIs, NULL, NULL, NULL, NULL, NULL, &t5030_TI, t5030_ITIs, NULL, &EmptyCustomAttributesCache, &t5030_TI, &t5030_0_0_0, &t5030_1_0_0, NULL, &t5030_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5032_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern TypeInfo t5032_TI;
extern Il2CppType t3754_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29004_MI = 
{
	"GetEnumerator", NULL, &t5032_TI, &t3754_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5032_MIs[] =
{
	&m29004_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5032_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5032_0_0_0;
extern Il2CppType t5032_1_0_0;
struct t5032;
extern TypeInfo t5032_TI;
extern Il2CppGenericClass t5032_GC;
TypeInfo t5032_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5032_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5032_TI, t5032_ITIs, NULL, &EmptyCustomAttributesCache, &t5032_TI, &t5032_0_0_0, &t5032_1_0_0, NULL, &t5032_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5031_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo m29005_MI;
extern MethodInfo m29006_MI;
static PropertyInfo t5031____Item_PropertyInfo = 
{
	&t5031_TI, "Item", &m29005_MI, &m29006_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5031_PIs[] =
{
	&t5031____Item_PropertyInfo,
	NULL
};
extern Il2CppType t997_0_0_0;
static ParameterInfo t5031_m29007_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t997_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29007_MI = 
{
	"IndexOf", NULL, &t5031_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5031_m29007_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t997_0_0_0;
static ParameterInfo t5031_m29008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t997_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29008_MI = 
{
	"Insert", NULL, &t5031_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5031_m29008_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5031_m29009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29009_MI = 
{
	"RemoveAt", NULL, &t5031_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5031_m29009_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5031_m29005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t997_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29005_MI = 
{
	"get_Item", NULL, &t5031_TI, &t997_0_0_0, RuntimeInvoker_t28_t47, t5031_m29005_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t997_0_0_0;
static ParameterInfo t5031_m29006_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t997_0_0_0},
};
extern TypeInfo t5031_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29006_MI = 
{
	"set_Item", NULL, &t5031_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5031_m29006_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5031_MIs[] =
{
	&m29007_MI,
	&m29008_MI,
	&m29009_MI,
	&m29005_MI,
	&m29006_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5030_TI;
extern TypeInfo t5032_TI;
static TypeInfo* t5031_ITIs[] = 
{
	&t611_TI,
	&t5030_TI,
	&t5032_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5031_0_0_0;
extern Il2CppType t5031_1_0_0;
struct t5031;
extern TypeInfo t5031_TI;
extern Il2CppGenericClass t5031_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5031_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5031_MIs, t5031_PIs, NULL, NULL, NULL, NULL, NULL, &t5031_TI, t5031_ITIs, NULL, &t1418__CustomAttributeCache, &t5031_TI, &t5031_0_0_0, &t5031_1_0_0, NULL, &t5031_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3755_TI;

#include "t998.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m29010_MI;
static PropertyInfo t3755____Current_PropertyInfo = 
{
	&t3755_TI, "Current", &m29010_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3755_PIs[] =
{
	&t3755____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3755_TI;
extern Il2CppType t998_0_0_0;
extern void* RuntimeInvoker_t998 (MethodInfo* method, void* obj, void** args);
MethodInfo m29010_MI = 
{
	"get_Current", NULL, &t3755_TI, &t998_0_0_0, RuntimeInvoker_t998, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3755_MIs[] =
{
	&m29010_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3755_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3755_0_0_0;
extern Il2CppType t3755_1_0_0;
struct t3755;
extern TypeInfo t3755_TI;
extern Il2CppGenericClass t3755_GC;
TypeInfo t3755_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3755_MIs, t3755_PIs, NULL, NULL, NULL, NULL, NULL, &t3755_TI, t3755_ITIs, NULL, &EmptyCustomAttributesCache, &t3755_TI, &t3755_0_0_0, &t3755_1_0_0, NULL, &t3755_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2835_TI;
#include "t2835MD.h"

extern TypeInfo t2835_TI;
extern TypeInfo t998_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16072_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21982_MI;
struct t29;
 int32_t m21982 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21982_MI;


extern MethodInfo m16068_MI;
 void m16068 (t2835 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16069_MI;
 t28 * m16069 (t2835 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16072(__this, &m16072_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t998_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16070_MI;
 void m16070 (t2835 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16071_MI;
 bool m16071 (t2835 * __this, MethodInfo* method){
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
extern MethodInfo m16072_MI;
 int32_t m16072 (t2835 * __this, MethodInfo* method){
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
		int32_t L_8 = m21982(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21982_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType t29_0_0_1;
FieldInfo t2835_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2835_TI, offsetof(t2835, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2835_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2835_TI, offsetof(t2835, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2835_FIs[] =
{
	&t2835_f0_FieldInfo,
	&t2835_f1_FieldInfo,
	NULL
};
extern MethodInfo m16069_MI;
static PropertyInfo t2835____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2835_TI, "System.Collections.IEnumerator.Current", &m16069_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16072_MI;
static PropertyInfo t2835____Current_PropertyInfo = 
{
	&t2835_TI, "Current", &m16072_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2835_PIs[] =
{
	&t2835____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2835____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2835_m16068_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2835_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16068_MI = 
{
	".ctor", (methodPointerType)&m16068, &t2835_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2835_m16068_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16069_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16069, &t2835_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16070_MI = 
{
	"Dispose", (methodPointerType)&m16070, &t2835_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16071_MI = 
{
	"MoveNext", (methodPointerType)&m16071, &t2835_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2835_TI;
extern Il2CppType t998_0_0_0;
extern void* RuntimeInvoker_t998 (MethodInfo* method, void* obj, void** args);
MethodInfo m16072_MI = 
{
	"get_Current", (methodPointerType)&m16072, &t2835_TI, &t998_0_0_0, RuntimeInvoker_t998, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2835_MIs[] =
{
	&m16068_MI,
	&m16069_MI,
	&m16070_MI,
	&m16071_MI,
	&m16072_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16069_MI;
extern MethodInfo m16071_MI;
extern MethodInfo m16070_MI;
extern MethodInfo m16072_MI;
static MethodInfo* t2835_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16069_MI,
	&m16071_MI,
	&m16070_MI,
	&m16072_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3755_TI;
static TypeInfo* t2835_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3755_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3755_TI;
static Il2CppInterfaceOffsetPair t2835_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3755_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2835_0_0_0;
extern Il2CppType t2835_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2835_TI;
extern Il2CppGenericClass t2835_GC;
extern TypeInfo t29_TI;
TypeInfo t2835_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2835_MIs, t2835_PIs, t2835_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2835_TI, t2835_ITIs, t2835_VT, &EmptyCustomAttributesCache, &t2835_TI, &t2835_0_0_0, &t2835_1_0_0, t2835_IOs, &t2835_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2835)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5033_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m29011_MI;
static PropertyInfo t5033____Count_PropertyInfo = 
{
	&t5033_TI, "Count", &m29011_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29012_MI;
static PropertyInfo t5033____IsReadOnly_PropertyInfo = 
{
	&t5033_TI, "IsReadOnly", &m29012_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5033_PIs[] =
{
	&t5033____Count_PropertyInfo,
	&t5033____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5033_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29011_MI = 
{
	"get_Count", NULL, &t5033_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5033_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29012_MI = 
{
	"get_IsReadOnly", NULL, &t5033_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t998_0_0_0;
static ParameterInfo t5033_m29013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29013_MI = 
{
	"Add", NULL, &t5033_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5033_m29013_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5033_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29014_MI = 
{
	"Clear", NULL, &t5033_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t998_0_0_0;
static ParameterInfo t5033_m29015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29015_MI = 
{
	"Contains", NULL, &t5033_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5033_m29015_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3084_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5033_m29016_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29016_MI = 
{
	"CopyTo", NULL, &t5033_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5033_m29016_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t998_0_0_0;
static ParameterInfo t5033_m29017_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern TypeInfo t5033_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29017_MI = 
{
	"Remove", NULL, &t5033_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5033_m29017_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5033_MIs[] =
{
	&m29011_MI,
	&m29012_MI,
	&m29013_MI,
	&m29014_MI,
	&m29015_MI,
	&m29016_MI,
	&m29017_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5035_TI;
static TypeInfo* t5033_ITIs[] = 
{
	&t611_TI,
	&t5035_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5033_0_0_0;
extern Il2CppType t5033_1_0_0;
struct t5033;
extern TypeInfo t5033_TI;
extern Il2CppGenericClass t5033_GC;
TypeInfo t5033_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5033_MIs, t5033_PIs, NULL, NULL, NULL, NULL, NULL, &t5033_TI, t5033_ITIs, NULL, &EmptyCustomAttributesCache, &t5033_TI, &t5033_0_0_0, &t5033_1_0_0, NULL, &t5033_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5035_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>
extern TypeInfo t5035_TI;
extern Il2CppType t3755_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29018_MI = 
{
	"GetEnumerator", NULL, &t5035_TI, &t3755_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5035_MIs[] =
{
	&m29018_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5035_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5035_0_0_0;
extern Il2CppType t5035_1_0_0;
struct t5035;
extern TypeInfo t5035_TI;
extern Il2CppGenericClass t5035_GC;
TypeInfo t5035_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5035_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5035_TI, t5035_ITIs, NULL, &EmptyCustomAttributesCache, &t5035_TI, &t5035_0_0_0, &t5035_1_0_0, NULL, &t5035_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5034_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo m29019_MI;
extern MethodInfo m29020_MI;
static PropertyInfo t5034____Item_PropertyInfo = 
{
	&t5034_TI, "Item", &m29019_MI, &m29020_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5034_PIs[] =
{
	&t5034____Item_PropertyInfo,
	NULL
};
extern Il2CppType t998_0_0_0;
static ParameterInfo t5034_m29021_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29021_MI = 
{
	"IndexOf", NULL, &t5034_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5034_m29021_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t998_0_0_0;
static ParameterInfo t5034_m29022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29022_MI = 
{
	"Insert", NULL, &t5034_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5034_m29022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5034_m29023_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29023_MI = 
{
	"RemoveAt", NULL, &t5034_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5034_m29023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5034_m29019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t998_0_0_0;
extern void* RuntimeInvoker_t998_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29019_MI = 
{
	"get_Item", NULL, &t5034_TI, &t998_0_0_0, RuntimeInvoker_t998_t47, t5034_m29019_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t998_0_0_0;
static ParameterInfo t5034_m29020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t998_0_0_0},
};
extern TypeInfo t5034_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29020_MI = 
{
	"set_Item", NULL, &t5034_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5034_m29020_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5034_MIs[] =
{
	&m29021_MI,
	&m29022_MI,
	&m29023_MI,
	&m29019_MI,
	&m29020_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5033_TI;
extern TypeInfo t5035_TI;
static TypeInfo* t5034_ITIs[] = 
{
	&t611_TI,
	&t5033_TI,
	&t5035_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5034_0_0_0;
extern Il2CppType t5034_1_0_0;
struct t5034;
extern TypeInfo t5034_TI;
extern Il2CppGenericClass t5034_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5034_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5034_MIs, t5034_PIs, NULL, NULL, NULL, NULL, NULL, &t5034_TI, t5034_ITIs, NULL, &t1418__CustomAttributeCache, &t5034_TI, &t5034_0_0_0, &t5034_1_0_0, NULL, &t5034_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3756_TI;

#include "t1000.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m29024_MI;
static PropertyInfo t3756____Current_PropertyInfo = 
{
	&t3756_TI, "Current", &m29024_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3756_PIs[] =
{
	&t3756____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3756_TI;
extern Il2CppType t1000_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29024_MI = 
{
	"get_Current", NULL, &t3756_TI, &t1000_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3756_MIs[] =
{
	&m29024_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3756_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3756_0_0_0;
extern Il2CppType t3756_1_0_0;
struct t3756;
extern TypeInfo t3756_TI;
extern Il2CppGenericClass t3756_GC;
TypeInfo t3756_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3756_MIs, t3756_PIs, NULL, NULL, NULL, NULL, NULL, &t3756_TI, t3756_ITIs, NULL, &EmptyCustomAttributesCache, &t3756_TI, &t3756_0_0_0, &t3756_1_0_0, NULL, &t3756_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2836.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2836_TI;
#include "t2836MD.h"

extern TypeInfo t2836_TI;
extern TypeInfo t1000_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16077_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21993_MI;
struct t29;
#define m21993(__this, p0, method) (t1000 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21993_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2836_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2836_TI, offsetof(t2836, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2836_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2836_TI, offsetof(t2836, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2836_FIs[] =
{
	&t2836_f0_FieldInfo,
	&t2836_f1_FieldInfo,
	NULL
};
extern MethodInfo m16074_MI;
static PropertyInfo t2836____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2836_TI, "System.Collections.IEnumerator.Current", &m16074_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16077_MI;
static PropertyInfo t2836____Current_PropertyInfo = 
{
	&t2836_TI, "Current", &m16077_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2836_PIs[] =
{
	&t2836____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2836____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2836_m16073_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2836_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16073_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2836_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2836_m16073_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16074_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2836_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16075_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2836_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16076_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2836_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2836_TI;
extern Il2CppType t1000_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16077_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2836_TI, &t1000_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2836_MIs[] =
{
	&m16073_MI,
	&m16074_MI,
	&m16075_MI,
	&m16076_MI,
	&m16077_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16074_MI;
extern MethodInfo m16076_MI;
extern MethodInfo m16075_MI;
extern MethodInfo m16077_MI;
static MethodInfo* t2836_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16074_MI,
	&m16076_MI,
	&m16075_MI,
	&m16077_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3756_TI;
static TypeInfo* t2836_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3756_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3756_TI;
static Il2CppInterfaceOffsetPair t2836_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3756_TI, 7},
};
extern MethodInfo m16077_MI;
extern TypeInfo t1000_TI;
extern MethodInfo m21993_MI;
static void* t2836_RGCTXData[3] = 
{
	&m16077_MI,
	&t1000_TI,
	&m21993_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2836_0_0_0;
extern Il2CppType t2836_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2836_TI;
extern Il2CppGenericClass t2836_GC;
extern TypeInfo t29_TI;
TypeInfo t2836_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2836_MIs, t2836_PIs, t2836_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2836_TI, t2836_ITIs, t2836_VT, &EmptyCustomAttributesCache, &t2836_TI, &t2836_0_0_0, &t2836_1_0_0, t2836_IOs, &t2836_GC, NULL, NULL, NULL, t2836_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2836)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5036_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m29025_MI;
static PropertyInfo t5036____Count_PropertyInfo = 
{
	&t5036_TI, "Count", &m29025_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29026_MI;
static PropertyInfo t5036____IsReadOnly_PropertyInfo = 
{
	&t5036_TI, "IsReadOnly", &m29026_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5036_PIs[] =
{
	&t5036____Count_PropertyInfo,
	&t5036____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5036_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29025_MI = 
{
	"get_Count", NULL, &t5036_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5036_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29026_MI = 
{
	"get_IsReadOnly", NULL, &t5036_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t5036_m29027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29027_MI = 
{
	"Add", NULL, &t5036_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5036_m29027_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5036_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29028_MI = 
{
	"Clear", NULL, &t5036_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t5036_m29029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29029_MI = 
{
	"Contains", NULL, &t5036_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5036_m29029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3085_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5036_m29030_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3085_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29030_MI = 
{
	"CopyTo", NULL, &t5036_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5036_m29030_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t5036_m29031_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern TypeInfo t5036_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29031_MI = 
{
	"Remove", NULL, &t5036_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5036_m29031_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5036_MIs[] =
{
	&m29025_MI,
	&m29026_MI,
	&m29027_MI,
	&m29028_MI,
	&m29029_MI,
	&m29030_MI,
	&m29031_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5038_TI;
static TypeInfo* t5036_ITIs[] = 
{
	&t611_TI,
	&t5038_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5036_0_0_0;
extern Il2CppType t5036_1_0_0;
struct t5036;
extern TypeInfo t5036_TI;
extern Il2CppGenericClass t5036_GC;
TypeInfo t5036_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5036_MIs, t5036_PIs, NULL, NULL, NULL, NULL, NULL, &t5036_TI, t5036_ITIs, NULL, &EmptyCustomAttributesCache, &t5036_TI, &t5036_0_0_0, &t5036_1_0_0, NULL, &t5036_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5038_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern TypeInfo t5038_TI;
extern Il2CppType t3756_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29032_MI = 
{
	"GetEnumerator", NULL, &t5038_TI, &t3756_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5038_MIs[] =
{
	&m29032_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5038_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5038_0_0_0;
extern Il2CppType t5038_1_0_0;
struct t5038;
extern TypeInfo t5038_TI;
extern Il2CppGenericClass t5038_GC;
TypeInfo t5038_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5038_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5038_TI, t5038_ITIs, NULL, &EmptyCustomAttributesCache, &t5038_TI, &t5038_0_0_0, &t5038_1_0_0, NULL, &t5038_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5037_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo m29033_MI;
extern MethodInfo m29034_MI;
static PropertyInfo t5037____Item_PropertyInfo = 
{
	&t5037_TI, "Item", &m29033_MI, &m29034_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5037_PIs[] =
{
	&t5037____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1000_0_0_0;
static ParameterInfo t5037_m29035_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29035_MI = 
{
	"IndexOf", NULL, &t5037_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5037_m29035_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1000_0_0_0;
static ParameterInfo t5037_m29036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29036_MI = 
{
	"Insert", NULL, &t5037_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5037_m29036_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5037_m29037_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29037_MI = 
{
	"RemoveAt", NULL, &t5037_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5037_m29037_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5037_m29033_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t1000_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29033_MI = 
{
	"get_Item", NULL, &t5037_TI, &t1000_0_0_0, RuntimeInvoker_t28_t47, t5037_m29033_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1000_0_0_0;
static ParameterInfo t5037_m29034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1000_0_0_0},
};
extern TypeInfo t5037_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29034_MI = 
{
	"set_Item", NULL, &t5037_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5037_m29034_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5037_MIs[] =
{
	&m29035_MI,
	&m29036_MI,
	&m29037_MI,
	&m29033_MI,
	&m29034_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5036_TI;
extern TypeInfo t5038_TI;
static TypeInfo* t5037_ITIs[] = 
{
	&t611_TI,
	&t5036_TI,
	&t5038_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5037_0_0_0;
extern Il2CppType t5037_1_0_0;
struct t5037;
extern TypeInfo t5037_TI;
extern Il2CppGenericClass t5037_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5037_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5037_MIs, t5037_PIs, NULL, NULL, NULL, NULL, NULL, &t5037_TI, t5037_ITIs, NULL, &t1418__CustomAttributeCache, &t5037_TI, &t5037_0_0_0, &t5037_1_0_0, NULL, &t5037_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3757_TI;

#include "t1001.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m29038_MI;
static PropertyInfo t3757____Current_PropertyInfo = 
{
	&t3757_TI, "Current", &m29038_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3757_PIs[] =
{
	&t3757____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3757_TI;
extern Il2CppType t1001_0_0_0;
extern void* RuntimeInvoker_t1001 (MethodInfo* method, void* obj, void** args);
MethodInfo m29038_MI = 
{
	"get_Current", NULL, &t3757_TI, &t1001_0_0_0, RuntimeInvoker_t1001, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3757_MIs[] =
{
	&m29038_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3757_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3757_0_0_0;
extern Il2CppType t3757_1_0_0;
struct t3757;
extern TypeInfo t3757_TI;
extern Il2CppGenericClass t3757_GC;
TypeInfo t3757_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3757_MIs, t3757_PIs, NULL, NULL, NULL, NULL, NULL, &t3757_TI, t3757_ITIs, NULL, &EmptyCustomAttributesCache, &t3757_TI, &t3757_0_0_0, &t3757_1_0_0, NULL, &t3757_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2837.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2837_TI;
#include "t2837MD.h"

extern TypeInfo t2837_TI;
extern TypeInfo t1001_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16082_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22004_MI;
struct t29;
 int32_t m22004 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22004_MI;


extern MethodInfo m16078_MI;
 void m16078 (t2837 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16079_MI;
 t28 * m16079 (t2837 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16082(__this, &m16082_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1001_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16080_MI;
 void m16080 (t2837 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16081_MI;
 bool m16081 (t2837 * __this, MethodInfo* method){
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
extern MethodInfo m16082_MI;
 int32_t m16082 (t2837 * __this, MethodInfo* method){
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
		int32_t L_8 = m22004(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22004_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType t29_0_0_1;
FieldInfo t2837_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2837_TI, offsetof(t2837, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2837_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2837_TI, offsetof(t2837, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2837_FIs[] =
{
	&t2837_f0_FieldInfo,
	&t2837_f1_FieldInfo,
	NULL
};
extern MethodInfo m16079_MI;
static PropertyInfo t2837____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2837_TI, "System.Collections.IEnumerator.Current", &m16079_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16082_MI;
static PropertyInfo t2837____Current_PropertyInfo = 
{
	&t2837_TI, "Current", &m16082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2837_PIs[] =
{
	&t2837____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2837____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2837_m16078_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2837_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16078_MI = 
{
	".ctor", (methodPointerType)&m16078, &t2837_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2837_m16078_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16079_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16079, &t2837_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16080_MI = 
{
	"Dispose", (methodPointerType)&m16080, &t2837_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16081_MI = 
{
	"MoveNext", (methodPointerType)&m16081, &t2837_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2837_TI;
extern Il2CppType t1001_0_0_0;
extern void* RuntimeInvoker_t1001 (MethodInfo* method, void* obj, void** args);
MethodInfo m16082_MI = 
{
	"get_Current", (methodPointerType)&m16082, &t2837_TI, &t1001_0_0_0, RuntimeInvoker_t1001, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2837_MIs[] =
{
	&m16078_MI,
	&m16079_MI,
	&m16080_MI,
	&m16081_MI,
	&m16082_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16079_MI;
extern MethodInfo m16081_MI;
extern MethodInfo m16080_MI;
extern MethodInfo m16082_MI;
static MethodInfo* t2837_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16079_MI,
	&m16081_MI,
	&m16080_MI,
	&m16082_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3757_TI;
static TypeInfo* t2837_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3757_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3757_TI;
static Il2CppInterfaceOffsetPair t2837_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3757_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2837_0_0_0;
extern Il2CppType t2837_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2837_TI;
extern Il2CppGenericClass t2837_GC;
extern TypeInfo t29_TI;
TypeInfo t2837_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2837_MIs, t2837_PIs, t2837_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2837_TI, t2837_ITIs, t2837_VT, &EmptyCustomAttributesCache, &t2837_TI, &t2837_0_0_0, &t2837_1_0_0, t2837_IOs, &t2837_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2837)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5039_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m29039_MI;
static PropertyInfo t5039____Count_PropertyInfo = 
{
	&t5039_TI, "Count", &m29039_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29040_MI;
static PropertyInfo t5039____IsReadOnly_PropertyInfo = 
{
	&t5039_TI, "IsReadOnly", &m29040_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5039_PIs[] =
{
	&t5039____Count_PropertyInfo,
	&t5039____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5039_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29039_MI = 
{
	"get_Count", NULL, &t5039_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5039_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29040_MI = 
{
	"get_IsReadOnly", NULL, &t5039_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t5039_m29041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29041_MI = 
{
	"Add", NULL, &t5039_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5039_m29041_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5039_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29042_MI = 
{
	"Clear", NULL, &t5039_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t5039_m29043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29043_MI = 
{
	"Contains", NULL, &t5039_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5039_m29043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3086_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5039_m29044_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3086_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29044_MI = 
{
	"CopyTo", NULL, &t5039_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5039_m29044_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t5039_m29045_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t5039_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29045_MI = 
{
	"Remove", NULL, &t5039_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5039_m29045_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5039_MIs[] =
{
	&m29039_MI,
	&m29040_MI,
	&m29041_MI,
	&m29042_MI,
	&m29043_MI,
	&m29044_MI,
	&m29045_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5041_TI;
static TypeInfo* t5039_ITIs[] = 
{
	&t611_TI,
	&t5041_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5039_0_0_0;
extern Il2CppType t5039_1_0_0;
struct t5039;
extern TypeInfo t5039_TI;
extern Il2CppGenericClass t5039_GC;
TypeInfo t5039_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5039_MIs, t5039_PIs, NULL, NULL, NULL, NULL, NULL, &t5039_TI, t5039_ITIs, NULL, &EmptyCustomAttributesCache, &t5039_TI, &t5039_0_0_0, &t5039_1_0_0, NULL, &t5039_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5041_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern TypeInfo t5041_TI;
extern Il2CppType t3757_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29046_MI = 
{
	"GetEnumerator", NULL, &t5041_TI, &t3757_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5041_MIs[] =
{
	&m29046_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5041_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5041_0_0_0;
extern Il2CppType t5041_1_0_0;
struct t5041;
extern TypeInfo t5041_TI;
extern Il2CppGenericClass t5041_GC;
TypeInfo t5041_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5041_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5041_TI, t5041_ITIs, NULL, &EmptyCustomAttributesCache, &t5041_TI, &t5041_0_0_0, &t5041_1_0_0, NULL, &t5041_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5040_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo m29047_MI;
extern MethodInfo m29048_MI;
static PropertyInfo t5040____Item_PropertyInfo = 
{
	&t5040_TI, "Item", &m29047_MI, &m29048_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5040_PIs[] =
{
	&t5040____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1001_0_0_0;
static ParameterInfo t5040_m29049_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29049_MI = 
{
	"IndexOf", NULL, &t5040_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5040_m29049_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1001_0_0_0;
static ParameterInfo t5040_m29050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29050_MI = 
{
	"Insert", NULL, &t5040_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5040_m29050_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5040_m29051_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29051_MI = 
{
	"RemoveAt", NULL, &t5040_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5040_m29051_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5040_m29047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t1001_0_0_0;
extern void* RuntimeInvoker_t1001_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29047_MI = 
{
	"get_Item", NULL, &t5040_TI, &t1001_0_0_0, RuntimeInvoker_t1001_t47, t5040_m29047_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1001_0_0_0;
static ParameterInfo t5040_m29048_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1001_0_0_0},
};
extern TypeInfo t5040_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29048_MI = 
{
	"set_Item", NULL, &t5040_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5040_m29048_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5040_MIs[] =
{
	&m29049_MI,
	&m29050_MI,
	&m29051_MI,
	&m29047_MI,
	&m29048_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5039_TI;
extern TypeInfo t5041_TI;
static TypeInfo* t5040_ITIs[] = 
{
	&t611_TI,
	&t5039_TI,
	&t5041_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5040_0_0_0;
extern Il2CppType t5040_1_0_0;
struct t5040;
extern TypeInfo t5040_TI;
extern Il2CppGenericClass t5040_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5040_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5040_MIs, t5040_PIs, NULL, NULL, NULL, NULL, NULL, &t5040_TI, t5040_ITIs, NULL, &t1418__CustomAttributeCache, &t5040_TI, &t5040_0_0_0, &t5040_1_0_0, NULL, &t5040_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3758_TI;

#include "t1002.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m29052_MI;
static PropertyInfo t3758____Current_PropertyInfo = 
{
	&t3758_TI, "Current", &m29052_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3758_PIs[] =
{
	&t3758____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3758_TI;
extern Il2CppType t1002_0_0_0;
extern void* RuntimeInvoker_t1002 (MethodInfo* method, void* obj, void** args);
MethodInfo m29052_MI = 
{
	"get_Current", NULL, &t3758_TI, &t1002_0_0_0, RuntimeInvoker_t1002, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3758_MIs[] =
{
	&m29052_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3758_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3758_0_0_0;
extern Il2CppType t3758_1_0_0;
struct t3758;
extern TypeInfo t3758_TI;
extern Il2CppGenericClass t3758_GC;
TypeInfo t3758_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3758_MIs, t3758_PIs, NULL, NULL, NULL, NULL, NULL, &t3758_TI, t3758_ITIs, NULL, &EmptyCustomAttributesCache, &t3758_TI, &t3758_0_0_0, &t3758_1_0_0, NULL, &t3758_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2838_TI;
#include "t2838MD.h"

extern TypeInfo t2838_TI;
extern TypeInfo t1002_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16087_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22015_MI;
struct t29;
 int32_t m22015 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22015_MI;


extern MethodInfo m16083_MI;
 void m16083 (t2838 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16084_MI;
 t28 * m16084 (t2838 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16087(__this, &m16087_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1002_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16085_MI;
 void m16085 (t2838 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16086_MI;
 bool m16086 (t2838 * __this, MethodInfo* method){
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
extern MethodInfo m16087_MI;
 int32_t m16087 (t2838 * __this, MethodInfo* method){
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
		int32_t L_8 = m22015(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22015_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType t29_0_0_1;
FieldInfo t2838_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2838_TI, offsetof(t2838, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2838_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2838_TI, offsetof(t2838, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2838_FIs[] =
{
	&t2838_f0_FieldInfo,
	&t2838_f1_FieldInfo,
	NULL
};
extern MethodInfo m16084_MI;
static PropertyInfo t2838____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2838_TI, "System.Collections.IEnumerator.Current", &m16084_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16087_MI;
static PropertyInfo t2838____Current_PropertyInfo = 
{
	&t2838_TI, "Current", &m16087_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2838_PIs[] =
{
	&t2838____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2838____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2838_m16083_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2838_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16083_MI = 
{
	".ctor", (methodPointerType)&m16083, &t2838_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2838_m16083_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16084_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16084, &t2838_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16085_MI = 
{
	"Dispose", (methodPointerType)&m16085, &t2838_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16086_MI = 
{
	"MoveNext", (methodPointerType)&m16086, &t2838_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2838_TI;
extern Il2CppType t1002_0_0_0;
extern void* RuntimeInvoker_t1002 (MethodInfo* method, void* obj, void** args);
MethodInfo m16087_MI = 
{
	"get_Current", (methodPointerType)&m16087, &t2838_TI, &t1002_0_0_0, RuntimeInvoker_t1002, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2838_MIs[] =
{
	&m16083_MI,
	&m16084_MI,
	&m16085_MI,
	&m16086_MI,
	&m16087_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16084_MI;
extern MethodInfo m16086_MI;
extern MethodInfo m16085_MI;
extern MethodInfo m16087_MI;
static MethodInfo* t2838_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16084_MI,
	&m16086_MI,
	&m16085_MI,
	&m16087_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3758_TI;
static TypeInfo* t2838_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3758_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3758_TI;
static Il2CppInterfaceOffsetPair t2838_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3758_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2838_0_0_0;
extern Il2CppType t2838_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2838_TI;
extern Il2CppGenericClass t2838_GC;
extern TypeInfo t29_TI;
TypeInfo t2838_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2838_MIs, t2838_PIs, t2838_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2838_TI, t2838_ITIs, t2838_VT, &EmptyCustomAttributesCache, &t2838_TI, &t2838_0_0_0, &t2838_1_0_0, t2838_IOs, &t2838_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2838)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5042_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m29053_MI;
static PropertyInfo t5042____Count_PropertyInfo = 
{
	&t5042_TI, "Count", &m29053_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29054_MI;
static PropertyInfo t5042____IsReadOnly_PropertyInfo = 
{
	&t5042_TI, "IsReadOnly", &m29054_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5042_PIs[] =
{
	&t5042____Count_PropertyInfo,
	&t5042____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5042_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29053_MI = 
{
	"get_Count", NULL, &t5042_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5042_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29054_MI = 
{
	"get_IsReadOnly", NULL, &t5042_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t5042_m29055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29055_MI = 
{
	"Add", NULL, &t5042_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5042_m29055_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5042_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29056_MI = 
{
	"Clear", NULL, &t5042_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t5042_m29057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29057_MI = 
{
	"Contains", NULL, &t5042_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5042_m29057_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3087_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5042_m29058_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3087_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29058_MI = 
{
	"CopyTo", NULL, &t5042_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5042_m29058_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t5042_m29059_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t5042_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29059_MI = 
{
	"Remove", NULL, &t5042_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5042_m29059_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5042_MIs[] =
{
	&m29053_MI,
	&m29054_MI,
	&m29055_MI,
	&m29056_MI,
	&m29057_MI,
	&m29058_MI,
	&m29059_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5044_TI;
static TypeInfo* t5042_ITIs[] = 
{
	&t611_TI,
	&t5044_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5042_0_0_0;
extern Il2CppType t5042_1_0_0;
struct t5042;
extern TypeInfo t5042_TI;
extern Il2CppGenericClass t5042_GC;
TypeInfo t5042_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5042_MIs, t5042_PIs, NULL, NULL, NULL, NULL, NULL, &t5042_TI, t5042_ITIs, NULL, &EmptyCustomAttributesCache, &t5042_TI, &t5042_0_0_0, &t5042_1_0_0, NULL, &t5042_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5044_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern TypeInfo t5044_TI;
extern Il2CppType t3758_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29060_MI = 
{
	"GetEnumerator", NULL, &t5044_TI, &t3758_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5044_MIs[] =
{
	&m29060_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5044_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5044_0_0_0;
extern Il2CppType t5044_1_0_0;
struct t5044;
extern TypeInfo t5044_TI;
extern Il2CppGenericClass t5044_GC;
TypeInfo t5044_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5044_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5044_TI, t5044_ITIs, NULL, &EmptyCustomAttributesCache, &t5044_TI, &t5044_0_0_0, &t5044_1_0_0, NULL, &t5044_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5043_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo m29061_MI;
extern MethodInfo m29062_MI;
static PropertyInfo t5043____Item_PropertyInfo = 
{
	&t5043_TI, "Item", &m29061_MI, &m29062_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5043_PIs[] =
{
	&t5043____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1002_0_0_0;
static ParameterInfo t5043_m29063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29063_MI = 
{
	"IndexOf", NULL, &t5043_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5043_m29063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1002_0_0_0;
static ParameterInfo t5043_m29064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29064_MI = 
{
	"Insert", NULL, &t5043_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5043_m29064_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5043_m29065_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29065_MI = 
{
	"RemoveAt", NULL, &t5043_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5043_m29065_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5043_m29061_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t1002_0_0_0;
extern void* RuntimeInvoker_t1002_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29061_MI = 
{
	"get_Item", NULL, &t5043_TI, &t1002_0_0_0, RuntimeInvoker_t1002_t47, t5043_m29061_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1002_0_0_0;
static ParameterInfo t5043_m29062_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1002_0_0_0},
};
extern TypeInfo t5043_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29062_MI = 
{
	"set_Item", NULL, &t5043_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5043_m29062_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5043_MIs[] =
{
	&m29063_MI,
	&m29064_MI,
	&m29065_MI,
	&m29061_MI,
	&m29062_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5042_TI;
extern TypeInfo t5044_TI;
static TypeInfo* t5043_ITIs[] = 
{
	&t611_TI,
	&t5042_TI,
	&t5044_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5043_0_0_0;
extern Il2CppType t5043_1_0_0;
struct t5043;
extern TypeInfo t5043_TI;
extern Il2CppGenericClass t5043_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5043_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5043_MIs, t5043_PIs, NULL, NULL, NULL, NULL, NULL, &t5043_TI, t5043_ITIs, NULL, &t1418__CustomAttributeCache, &t5043_TI, &t5043_0_0_0, &t5043_1_0_0, NULL, &t5043_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3759_TI;

#include "t1004.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m29066_MI;
static PropertyInfo t3759____Current_PropertyInfo = 
{
	&t3759_TI, "Current", &m29066_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3759_PIs[] =
{
	&t3759____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3759_TI;
extern Il2CppType t1004_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29066_MI = 
{
	"get_Current", NULL, &t3759_TI, &t1004_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3759_MIs[] =
{
	&m29066_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3759_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3759_0_0_0;
extern Il2CppType t3759_1_0_0;
struct t3759;
extern TypeInfo t3759_TI;
extern Il2CppGenericClass t3759_GC;
TypeInfo t3759_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3759_MIs, t3759_PIs, NULL, NULL, NULL, NULL, NULL, &t3759_TI, t3759_ITIs, NULL, &EmptyCustomAttributesCache, &t3759_TI, &t3759_0_0_0, &t3759_1_0_0, NULL, &t3759_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2839.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2839_TI;
#include "t2839MD.h"

extern TypeInfo t2839_TI;
extern TypeInfo t1004_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16092_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22026_MI;
struct t29;
#define m22026(__this, p0, method) (t1004 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22026_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2839_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2839_TI, offsetof(t2839, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2839_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2839_TI, offsetof(t2839, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2839_FIs[] =
{
	&t2839_f0_FieldInfo,
	&t2839_f1_FieldInfo,
	NULL
};
extern MethodInfo m16089_MI;
static PropertyInfo t2839____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2839_TI, "System.Collections.IEnumerator.Current", &m16089_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16092_MI;
static PropertyInfo t2839____Current_PropertyInfo = 
{
	&t2839_TI, "Current", &m16092_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2839_PIs[] =
{
	&t2839____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2839____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2839_m16088_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2839_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16088_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2839_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2839_m16088_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16089_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2839_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16090_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2839_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16091_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2839_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2839_TI;
extern Il2CppType t1004_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16092_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2839_TI, &t1004_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2839_MIs[] =
{
	&m16088_MI,
	&m16089_MI,
	&m16090_MI,
	&m16091_MI,
	&m16092_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16089_MI;
extern MethodInfo m16091_MI;
extern MethodInfo m16090_MI;
extern MethodInfo m16092_MI;
static MethodInfo* t2839_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16089_MI,
	&m16091_MI,
	&m16090_MI,
	&m16092_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3759_TI;
static TypeInfo* t2839_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3759_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3759_TI;
static Il2CppInterfaceOffsetPair t2839_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3759_TI, 7},
};
extern MethodInfo m16092_MI;
extern TypeInfo t1004_TI;
extern MethodInfo m22026_MI;
static void* t2839_RGCTXData[3] = 
{
	&m16092_MI,
	&t1004_TI,
	&m22026_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2839_0_0_0;
extern Il2CppType t2839_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2839_TI;
extern Il2CppGenericClass t2839_GC;
extern TypeInfo t29_TI;
TypeInfo t2839_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2839_MIs, t2839_PIs, t2839_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2839_TI, t2839_ITIs, t2839_VT, &EmptyCustomAttributesCache, &t2839_TI, &t2839_0_0_0, &t2839_1_0_0, t2839_IOs, &t2839_GC, NULL, NULL, NULL, t2839_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2839)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5045_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m29067_MI;
static PropertyInfo t5045____Count_PropertyInfo = 
{
	&t5045_TI, "Count", &m29067_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29068_MI;
static PropertyInfo t5045____IsReadOnly_PropertyInfo = 
{
	&t5045_TI, "IsReadOnly", &m29068_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5045_PIs[] =
{
	&t5045____Count_PropertyInfo,
	&t5045____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5045_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29067_MI = 
{
	"get_Count", NULL, &t5045_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5045_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29068_MI = 
{
	"get_IsReadOnly", NULL, &t5045_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t5045_m29069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29069_MI = 
{
	"Add", NULL, &t5045_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5045_m29069_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5045_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29070_MI = 
{
	"Clear", NULL, &t5045_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t5045_m29071_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29071_MI = 
{
	"Contains", NULL, &t5045_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5045_m29071_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3088_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5045_m29072_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3088_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29072_MI = 
{
	"CopyTo", NULL, &t5045_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5045_m29072_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t5045_m29073_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern TypeInfo t5045_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29073_MI = 
{
	"Remove", NULL, &t5045_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5045_m29073_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5045_MIs[] =
{
	&m29067_MI,
	&m29068_MI,
	&m29069_MI,
	&m29070_MI,
	&m29071_MI,
	&m29072_MI,
	&m29073_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5047_TI;
static TypeInfo* t5045_ITIs[] = 
{
	&t611_TI,
	&t5047_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5045_0_0_0;
extern Il2CppType t5045_1_0_0;
struct t5045;
extern TypeInfo t5045_TI;
extern Il2CppGenericClass t5045_GC;
TypeInfo t5045_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5045_MIs, t5045_PIs, NULL, NULL, NULL, NULL, NULL, &t5045_TI, t5045_ITIs, NULL, &EmptyCustomAttributesCache, &t5045_TI, &t5045_0_0_0, &t5045_1_0_0, NULL, &t5045_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5047_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern TypeInfo t5047_TI;
extern Il2CppType t3759_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29074_MI = 
{
	"GetEnumerator", NULL, &t5047_TI, &t3759_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5047_MIs[] =
{
	&m29074_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5047_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5047_0_0_0;
extern Il2CppType t5047_1_0_0;
struct t5047;
extern TypeInfo t5047_TI;
extern Il2CppGenericClass t5047_GC;
TypeInfo t5047_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5047_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5047_TI, t5047_ITIs, NULL, &EmptyCustomAttributesCache, &t5047_TI, &t5047_0_0_0, &t5047_1_0_0, NULL, &t5047_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5046_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo m29075_MI;
extern MethodInfo m29076_MI;
static PropertyInfo t5046____Item_PropertyInfo = 
{
	&t5046_TI, "Item", &m29075_MI, &m29076_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5046_PIs[] =
{
	&t5046____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1004_0_0_0;
static ParameterInfo t5046_m29077_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29077_MI = 
{
	"IndexOf", NULL, &t5046_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5046_m29077_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1004_0_0_0;
static ParameterInfo t5046_m29078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29078_MI = 
{
	"Insert", NULL, &t5046_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5046_m29078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5046_m29079_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29079_MI = 
{
	"RemoveAt", NULL, &t5046_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5046_m29079_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5046_m29075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t1004_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29075_MI = 
{
	"get_Item", NULL, &t5046_TI, &t1004_0_0_0, RuntimeInvoker_t28_t47, t5046_m29075_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1004_0_0_0;
static ParameterInfo t5046_m29076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern TypeInfo t5046_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29076_MI = 
{
	"set_Item", NULL, &t5046_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5046_m29076_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5046_MIs[] =
{
	&m29077_MI,
	&m29078_MI,
	&m29079_MI,
	&m29075_MI,
	&m29076_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5045_TI;
extern TypeInfo t5047_TI;
static TypeInfo* t5046_ITIs[] = 
{
	&t611_TI,
	&t5045_TI,
	&t5047_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5046_0_0_0;
extern Il2CppType t5046_1_0_0;
struct t5046;
extern TypeInfo t5046_TI;
extern Il2CppGenericClass t5046_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5046_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5046_MIs, t5046_PIs, NULL, NULL, NULL, NULL, NULL, &t5046_TI, t5046_ITIs, NULL, &t1418__CustomAttributeCache, &t5046_TI, &t5046_0_0_0, &t5046_1_0_0, NULL, &t5046_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3760_TI;

#include "t752.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m29080_MI;
static PropertyInfo t3760____Current_PropertyInfo = 
{
	&t3760_TI, "Current", &m29080_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3760_PIs[] =
{
	&t3760____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3760_TI;
extern Il2CppType t752_0_0_0;
extern void* RuntimeInvoker_t752 (MethodInfo* method, void* obj, void** args);
MethodInfo m29080_MI = 
{
	"get_Current", NULL, &t3760_TI, &t752_0_0_0, RuntimeInvoker_t752, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3760_MIs[] =
{
	&m29080_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3760_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3760_0_0_0;
extern Il2CppType t3760_1_0_0;
struct t3760;
extern TypeInfo t3760_TI;
extern Il2CppGenericClass t3760_GC;
TypeInfo t3760_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3760_MIs, t3760_PIs, NULL, NULL, NULL, NULL, NULL, &t3760_TI, t3760_ITIs, NULL, &EmptyCustomAttributesCache, &t3760_TI, &t3760_0_0_0, &t3760_1_0_0, NULL, &t3760_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2840_TI;
#include "t2840MD.h"

extern TypeInfo t2840_TI;
extern TypeInfo t752_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16097_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22037_MI;
struct t29;
 int32_t m22037 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22037_MI;


extern MethodInfo m16093_MI;
 void m16093 (t2840 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16094_MI;
 t28 * m16094 (t2840 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16097(__this, &m16097_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t752_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16095_MI;
 void m16095 (t2840 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16096_MI;
 bool m16096 (t2840 * __this, MethodInfo* method){
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
extern MethodInfo m16097_MI;
 int32_t m16097 (t2840 * __this, MethodInfo* method){
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
		int32_t L_8 = m22037(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22037_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType t29_0_0_1;
FieldInfo t2840_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2840_TI, offsetof(t2840, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2840_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2840_TI, offsetof(t2840, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2840_FIs[] =
{
	&t2840_f0_FieldInfo,
	&t2840_f1_FieldInfo,
	NULL
};
extern MethodInfo m16094_MI;
static PropertyInfo t2840____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2840_TI, "System.Collections.IEnumerator.Current", &m16094_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16097_MI;
static PropertyInfo t2840____Current_PropertyInfo = 
{
	&t2840_TI, "Current", &m16097_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2840_PIs[] =
{
	&t2840____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2840____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2840_m16093_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2840_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16093_MI = 
{
	".ctor", (methodPointerType)&m16093, &t2840_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2840_m16093_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16094_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16094, &t2840_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16095_MI = 
{
	"Dispose", (methodPointerType)&m16095, &t2840_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16096_MI = 
{
	"MoveNext", (methodPointerType)&m16096, &t2840_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2840_TI;
extern Il2CppType t752_0_0_0;
extern void* RuntimeInvoker_t752 (MethodInfo* method, void* obj, void** args);
MethodInfo m16097_MI = 
{
	"get_Current", (methodPointerType)&m16097, &t2840_TI, &t752_0_0_0, RuntimeInvoker_t752, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2840_MIs[] =
{
	&m16093_MI,
	&m16094_MI,
	&m16095_MI,
	&m16096_MI,
	&m16097_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16094_MI;
extern MethodInfo m16096_MI;
extern MethodInfo m16095_MI;
extern MethodInfo m16097_MI;
static MethodInfo* t2840_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16094_MI,
	&m16096_MI,
	&m16095_MI,
	&m16097_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3760_TI;
static TypeInfo* t2840_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3760_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3760_TI;
static Il2CppInterfaceOffsetPair t2840_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3760_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2840_0_0_0;
extern Il2CppType t2840_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2840_TI;
extern Il2CppGenericClass t2840_GC;
extern TypeInfo t29_TI;
TypeInfo t2840_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2840_MIs, t2840_PIs, t2840_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2840_TI, t2840_ITIs, t2840_VT, &EmptyCustomAttributesCache, &t2840_TI, &t2840_0_0_0, &t2840_1_0_0, t2840_IOs, &t2840_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2840)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5048_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m29081_MI;
static PropertyInfo t5048____Count_PropertyInfo = 
{
	&t5048_TI, "Count", &m29081_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29082_MI;
static PropertyInfo t5048____IsReadOnly_PropertyInfo = 
{
	&t5048_TI, "IsReadOnly", &m29082_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5048_PIs[] =
{
	&t5048____Count_PropertyInfo,
	&t5048____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5048_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29081_MI = 
{
	"get_Count", NULL, &t5048_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5048_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29082_MI = 
{
	"get_IsReadOnly", NULL, &t5048_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t752_0_0_0;
static ParameterInfo t5048_m29083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29083_MI = 
{
	"Add", NULL, &t5048_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5048_m29083_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5048_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29084_MI = 
{
	"Clear", NULL, &t5048_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t752_0_0_0;
static ParameterInfo t5048_m29085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29085_MI = 
{
	"Contains", NULL, &t5048_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5048_m29085_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3089_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5048_m29086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3089_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29086_MI = 
{
	"CopyTo", NULL, &t5048_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5048_m29086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t752_0_0_0;
static ParameterInfo t5048_m29087_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t5048_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29087_MI = 
{
	"Remove", NULL, &t5048_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5048_m29087_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5048_MIs[] =
{
	&m29081_MI,
	&m29082_MI,
	&m29083_MI,
	&m29084_MI,
	&m29085_MI,
	&m29086_MI,
	&m29087_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5050_TI;
static TypeInfo* t5048_ITIs[] = 
{
	&t611_TI,
	&t5050_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5048_0_0_0;
extern Il2CppType t5048_1_0_0;
struct t5048;
extern TypeInfo t5048_TI;
extern Il2CppGenericClass t5048_GC;
TypeInfo t5048_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5048_MIs, t5048_PIs, NULL, NULL, NULL, NULL, NULL, &t5048_TI, t5048_ITIs, NULL, &EmptyCustomAttributesCache, &t5048_TI, &t5048_0_0_0, &t5048_1_0_0, NULL, &t5048_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5050_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern TypeInfo t5050_TI;
extern Il2CppType t3760_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29088_MI = 
{
	"GetEnumerator", NULL, &t5050_TI, &t3760_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5050_MIs[] =
{
	&m29088_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5050_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5050_0_0_0;
extern Il2CppType t5050_1_0_0;
struct t5050;
extern TypeInfo t5050_TI;
extern Il2CppGenericClass t5050_GC;
TypeInfo t5050_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5050_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5050_TI, t5050_ITIs, NULL, &EmptyCustomAttributesCache, &t5050_TI, &t5050_0_0_0, &t5050_1_0_0, NULL, &t5050_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5049_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo m29089_MI;
extern MethodInfo m29090_MI;
static PropertyInfo t5049____Item_PropertyInfo = 
{
	&t5049_TI, "Item", &m29089_MI, &m29090_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5049_PIs[] =
{
	&t5049____Item_PropertyInfo,
	NULL
};
extern Il2CppType t752_0_0_0;
static ParameterInfo t5049_m29091_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29091_MI = 
{
	"IndexOf", NULL, &t5049_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5049_m29091_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t5049_m29092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29092_MI = 
{
	"Insert", NULL, &t5049_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5049_m29092_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5049_m29093_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29093_MI = 
{
	"RemoveAt", NULL, &t5049_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5049_m29093_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5049_m29089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t752_0_0_0;
extern void* RuntimeInvoker_t752_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29089_MI = 
{
	"get_Item", NULL, &t5049_TI, &t752_0_0_0, RuntimeInvoker_t752_t47, t5049_m29089_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t752_0_0_0;
static ParameterInfo t5049_m29090_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t752_0_0_0},
};
extern TypeInfo t5049_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29090_MI = 
{
	"set_Item", NULL, &t5049_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5049_m29090_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5049_MIs[] =
{
	&m29091_MI,
	&m29092_MI,
	&m29093_MI,
	&m29089_MI,
	&m29090_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5048_TI;
extern TypeInfo t5050_TI;
static TypeInfo* t5049_ITIs[] = 
{
	&t611_TI,
	&t5048_TI,
	&t5050_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5049_0_0_0;
extern Il2CppType t5049_1_0_0;
struct t5049;
extern TypeInfo t5049_TI;
extern Il2CppGenericClass t5049_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5049_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5049_MIs, t5049_PIs, NULL, NULL, NULL, NULL, NULL, &t5049_TI, t5049_ITIs, NULL, &t1418__CustomAttributeCache, &t5049_TI, &t5049_0_0_0, &t5049_1_0_0, NULL, &t5049_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3761_TI;

#include "t753.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m29094_MI;
static PropertyInfo t3761____Current_PropertyInfo = 
{
	&t3761_TI, "Current", &m29094_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3761_PIs[] =
{
	&t3761____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3761_TI;
extern Il2CppType t753_0_0_0;
extern void* RuntimeInvoker_t753 (MethodInfo* method, void* obj, void** args);
MethodInfo m29094_MI = 
{
	"get_Current", NULL, &t3761_TI, &t753_0_0_0, RuntimeInvoker_t753, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3761_MIs[] =
{
	&m29094_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3761_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3761_0_0_0;
extern Il2CppType t3761_1_0_0;
struct t3761;
extern TypeInfo t3761_TI;
extern Il2CppGenericClass t3761_GC;
TypeInfo t3761_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3761_MIs, t3761_PIs, NULL, NULL, NULL, NULL, NULL, &t3761_TI, t3761_ITIs, NULL, &EmptyCustomAttributesCache, &t3761_TI, &t3761_0_0_0, &t3761_1_0_0, NULL, &t3761_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2841_TI;
#include "t2841MD.h"

extern TypeInfo t2841_TI;
extern TypeInfo t753_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16102_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22048_MI;
struct t29;
 int32_t m22048 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22048_MI;


extern MethodInfo m16098_MI;
 void m16098 (t2841 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16099_MI;
 t28 * m16099 (t2841 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16102(__this, &m16102_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t753_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16100_MI;
 void m16100 (t2841 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16101_MI;
 bool m16101 (t2841 * __this, MethodInfo* method){
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
extern MethodInfo m16102_MI;
 int32_t m16102 (t2841 * __this, MethodInfo* method){
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
		int32_t L_8 = m22048(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22048_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType t29_0_0_1;
FieldInfo t2841_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2841_TI, offsetof(t2841, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2841_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2841_TI, offsetof(t2841, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2841_FIs[] =
{
	&t2841_f0_FieldInfo,
	&t2841_f1_FieldInfo,
	NULL
};
extern MethodInfo m16099_MI;
static PropertyInfo t2841____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2841_TI, "System.Collections.IEnumerator.Current", &m16099_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16102_MI;
static PropertyInfo t2841____Current_PropertyInfo = 
{
	&t2841_TI, "Current", &m16102_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2841_PIs[] =
{
	&t2841____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2841____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2841_m16098_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2841_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16098_MI = 
{
	".ctor", (methodPointerType)&m16098, &t2841_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2841_m16098_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16099_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16099, &t2841_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16100_MI = 
{
	"Dispose", (methodPointerType)&m16100, &t2841_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16101_MI = 
{
	"MoveNext", (methodPointerType)&m16101, &t2841_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2841_TI;
extern Il2CppType t753_0_0_0;
extern void* RuntimeInvoker_t753 (MethodInfo* method, void* obj, void** args);
MethodInfo m16102_MI = 
{
	"get_Current", (methodPointerType)&m16102, &t2841_TI, &t753_0_0_0, RuntimeInvoker_t753, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2841_MIs[] =
{
	&m16098_MI,
	&m16099_MI,
	&m16100_MI,
	&m16101_MI,
	&m16102_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16099_MI;
extern MethodInfo m16101_MI;
extern MethodInfo m16100_MI;
extern MethodInfo m16102_MI;
static MethodInfo* t2841_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16099_MI,
	&m16101_MI,
	&m16100_MI,
	&m16102_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3761_TI;
static TypeInfo* t2841_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3761_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3761_TI;
static Il2CppInterfaceOffsetPair t2841_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3761_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2841_0_0_0;
extern Il2CppType t2841_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2841_TI;
extern Il2CppGenericClass t2841_GC;
extern TypeInfo t29_TI;
TypeInfo t2841_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2841_MIs, t2841_PIs, t2841_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2841_TI, t2841_ITIs, t2841_VT, &EmptyCustomAttributesCache, &t2841_TI, &t2841_0_0_0, &t2841_1_0_0, t2841_IOs, &t2841_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2841)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5051_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m29095_MI;
static PropertyInfo t5051____Count_PropertyInfo = 
{
	&t5051_TI, "Count", &m29095_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29096_MI;
static PropertyInfo t5051____IsReadOnly_PropertyInfo = 
{
	&t5051_TI, "IsReadOnly", &m29096_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5051_PIs[] =
{
	&t5051____Count_PropertyInfo,
	&t5051____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5051_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29095_MI = 
{
	"get_Count", NULL, &t5051_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5051_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29096_MI = 
{
	"get_IsReadOnly", NULL, &t5051_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t753_0_0_0;
static ParameterInfo t5051_m29097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t753_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29097_MI = 
{
	"Add", NULL, &t5051_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5051_m29097_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5051_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29098_MI = 
{
	"Clear", NULL, &t5051_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t753_0_0_0;
static ParameterInfo t5051_m29099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t753_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29099_MI = 
{
	"Contains", NULL, &t5051_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5051_m29099_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3090_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5051_m29100_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3090_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29100_MI = 
{
	"CopyTo", NULL, &t5051_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5051_m29100_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t753_0_0_0;
static ParameterInfo t5051_m29101_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t753_0_0_0},
};
extern TypeInfo t5051_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29101_MI = 
{
	"Remove", NULL, &t5051_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5051_m29101_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5051_MIs[] =
{
	&m29095_MI,
	&m29096_MI,
	&m29097_MI,
	&m29098_MI,
	&m29099_MI,
	&m29100_MI,
	&m29101_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5053_TI;
static TypeInfo* t5051_ITIs[] = 
{
	&t611_TI,
	&t5053_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5051_0_0_0;
extern Il2CppType t5051_1_0_0;
struct t5051;
extern TypeInfo t5051_TI;
extern Il2CppGenericClass t5051_GC;
TypeInfo t5051_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5051_MIs, t5051_PIs, NULL, NULL, NULL, NULL, NULL, &t5051_TI, t5051_ITIs, NULL, &EmptyCustomAttributesCache, &t5051_TI, &t5051_0_0_0, &t5051_1_0_0, NULL, &t5051_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5053_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern TypeInfo t5053_TI;
extern Il2CppType t3761_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29102_MI = 
{
	"GetEnumerator", NULL, &t5053_TI, &t3761_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5053_MIs[] =
{
	&m29102_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5053_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5053_0_0_0;
extern Il2CppType t5053_1_0_0;
struct t5053;
extern TypeInfo t5053_TI;
extern Il2CppGenericClass t5053_GC;
TypeInfo t5053_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5053_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5053_TI, t5053_ITIs, NULL, &EmptyCustomAttributesCache, &t5053_TI, &t5053_0_0_0, &t5053_1_0_0, NULL, &t5053_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5052_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo m29103_MI;
extern MethodInfo m29104_MI;
static PropertyInfo t5052____Item_PropertyInfo = 
{
	&t5052_TI, "Item", &m29103_MI, &m29104_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5052_PIs[] =
{
	&t5052____Item_PropertyInfo,
	NULL
};
extern Il2CppType t753_0_0_0;
static ParameterInfo t5052_m29105_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t753_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29105_MI = 
{
	"IndexOf", NULL, &t5052_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5052_m29105_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t753_0_0_0;
static ParameterInfo t5052_m29106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t753_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29106_MI = 
{
	"Insert", NULL, &t5052_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5052_m29106_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5052_m29107_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29107_MI = 
{
	"RemoveAt", NULL, &t5052_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5052_m29107_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5052_m29103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t753_0_0_0;
extern void* RuntimeInvoker_t753_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29103_MI = 
{
	"get_Item", NULL, &t5052_TI, &t753_0_0_0, RuntimeInvoker_t753_t47, t5052_m29103_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t753_0_0_0;
static ParameterInfo t5052_m29104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t753_0_0_0},
};
extern TypeInfo t5052_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29104_MI = 
{
	"set_Item", NULL, &t5052_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5052_m29104_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5052_MIs[] =
{
	&m29105_MI,
	&m29106_MI,
	&m29107_MI,
	&m29103_MI,
	&m29104_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5051_TI;
extern TypeInfo t5053_TI;
static TypeInfo* t5052_ITIs[] = 
{
	&t611_TI,
	&t5051_TI,
	&t5053_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5052_0_0_0;
extern Il2CppType t5052_1_0_0;
struct t5052;
extern TypeInfo t5052_TI;
extern Il2CppGenericClass t5052_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5052_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5052_MIs, t5052_PIs, NULL, NULL, NULL, NULL, NULL, &t5052_TI, t5052_ITIs, NULL, &t1418__CustomAttributeCache, &t5052_TI, &t5052_0_0_0, &t5052_1_0_0, NULL, &t5052_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3762_TI;

#include "t1006.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m29108_MI;
static PropertyInfo t3762____Current_PropertyInfo = 
{
	&t3762_TI, "Current", &m29108_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3762_PIs[] =
{
	&t3762____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3762_TI;
extern Il2CppType t1006_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29108_MI = 
{
	"get_Current", NULL, &t3762_TI, &t1006_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3762_MIs[] =
{
	&m29108_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3762_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3762_0_0_0;
extern Il2CppType t3762_1_0_0;
struct t3762;
extern TypeInfo t3762_TI;
extern Il2CppGenericClass t3762_GC;
TypeInfo t3762_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3762_MIs, t3762_PIs, NULL, NULL, NULL, NULL, NULL, &t3762_TI, t3762_ITIs, NULL, &EmptyCustomAttributesCache, &t3762_TI, &t3762_0_0_0, &t3762_1_0_0, NULL, &t3762_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2842_TI;
#include "t2842MD.h"

extern TypeInfo t2842_TI;
extern TypeInfo t1006_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16107_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22059_MI;
struct t29;
#define m22059(__this, p0, method) (t1006 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22059_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2842_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2842_TI, offsetof(t2842, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2842_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2842_TI, offsetof(t2842, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2842_FIs[] =
{
	&t2842_f0_FieldInfo,
	&t2842_f1_FieldInfo,
	NULL
};
extern MethodInfo m16104_MI;
static PropertyInfo t2842____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2842_TI, "System.Collections.IEnumerator.Current", &m16104_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16107_MI;
static PropertyInfo t2842____Current_PropertyInfo = 
{
	&t2842_TI, "Current", &m16107_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2842_PIs[] =
{
	&t2842____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2842____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2842_m16103_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2842_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16103_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2842_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2842_m16103_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16104_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2842_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16105_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2842_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16106_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2842_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2842_TI;
extern Il2CppType t1006_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16107_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2842_TI, &t1006_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2842_MIs[] =
{
	&m16103_MI,
	&m16104_MI,
	&m16105_MI,
	&m16106_MI,
	&m16107_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16104_MI;
extern MethodInfo m16106_MI;
extern MethodInfo m16105_MI;
extern MethodInfo m16107_MI;
static MethodInfo* t2842_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16104_MI,
	&m16106_MI,
	&m16105_MI,
	&m16107_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3762_TI;
static TypeInfo* t2842_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3762_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3762_TI;
static Il2CppInterfaceOffsetPair t2842_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3762_TI, 7},
};
extern MethodInfo m16107_MI;
extern TypeInfo t1006_TI;
extern MethodInfo m22059_MI;
static void* t2842_RGCTXData[3] = 
{
	&m16107_MI,
	&t1006_TI,
	&m22059_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2842_0_0_0;
extern Il2CppType t2842_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2842_TI;
extern Il2CppGenericClass t2842_GC;
extern TypeInfo t29_TI;
TypeInfo t2842_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2842_MIs, t2842_PIs, t2842_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2842_TI, t2842_ITIs, t2842_VT, &EmptyCustomAttributesCache, &t2842_TI, &t2842_0_0_0, &t2842_1_0_0, t2842_IOs, &t2842_GC, NULL, NULL, NULL, t2842_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2842)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5054_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m29109_MI;
static PropertyInfo t5054____Count_PropertyInfo = 
{
	&t5054_TI, "Count", &m29109_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29110_MI;
static PropertyInfo t5054____IsReadOnly_PropertyInfo = 
{
	&t5054_TI, "IsReadOnly", &m29110_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5054_PIs[] =
{
	&t5054____Count_PropertyInfo,
	&t5054____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5054_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29109_MI = 
{
	"get_Count", NULL, &t5054_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5054_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29110_MI = 
{
	"get_IsReadOnly", NULL, &t5054_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1006_0_0_0;
static ParameterInfo t5054_m29111_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1006_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29111_MI = 
{
	"Add", NULL, &t5054_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5054_m29111_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5054_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29112_MI = 
{
	"Clear", NULL, &t5054_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1006_0_0_0;
static ParameterInfo t5054_m29113_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1006_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29113_MI = 
{
	"Contains", NULL, &t5054_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5054_m29113_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3091_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5054_m29114_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3091_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29114_MI = 
{
	"CopyTo", NULL, &t5054_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5054_m29114_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1006_0_0_0;
static ParameterInfo t5054_m29115_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1006_0_0_0},
};
extern TypeInfo t5054_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29115_MI = 
{
	"Remove", NULL, &t5054_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5054_m29115_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5054_MIs[] =
{
	&m29109_MI,
	&m29110_MI,
	&m29111_MI,
	&m29112_MI,
	&m29113_MI,
	&m29114_MI,
	&m29115_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5056_TI;
static TypeInfo* t5054_ITIs[] = 
{
	&t611_TI,
	&t5056_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5054_0_0_0;
extern Il2CppType t5054_1_0_0;
struct t5054;
extern TypeInfo t5054_TI;
extern Il2CppGenericClass t5054_GC;
TypeInfo t5054_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5054_MIs, t5054_PIs, NULL, NULL, NULL, NULL, NULL, &t5054_TI, t5054_ITIs, NULL, &EmptyCustomAttributesCache, &t5054_TI, &t5054_0_0_0, &t5054_1_0_0, NULL, &t5054_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5056_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern TypeInfo t5056_TI;
extern Il2CppType t3762_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29116_MI = 
{
	"GetEnumerator", NULL, &t5056_TI, &t3762_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5056_MIs[] =
{
	&m29116_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5056_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5056_0_0_0;
extern Il2CppType t5056_1_0_0;
struct t5056;
extern TypeInfo t5056_TI;
extern Il2CppGenericClass t5056_GC;
TypeInfo t5056_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5056_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5056_TI, t5056_ITIs, NULL, &EmptyCustomAttributesCache, &t5056_TI, &t5056_0_0_0, &t5056_1_0_0, NULL, &t5056_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5055_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo m29117_MI;
extern MethodInfo m29118_MI;
static PropertyInfo t5055____Item_PropertyInfo = 
{
	&t5055_TI, "Item", &m29117_MI, &m29118_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5055_PIs[] =
{
	&t5055____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1006_0_0_0;
static ParameterInfo t5055_m29119_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1006_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29119_MI = 
{
	"IndexOf", NULL, &t5055_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5055_m29119_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1006_0_0_0;
static ParameterInfo t5055_m29120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1006_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29120_MI = 
{
	"Insert", NULL, &t5055_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5055_m29120_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5055_m29121_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29121_MI = 
{
	"RemoveAt", NULL, &t5055_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5055_m29121_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5055_m29117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t1006_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29117_MI = 
{
	"get_Item", NULL, &t5055_TI, &t1006_0_0_0, RuntimeInvoker_t28_t47, t5055_m29117_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1006_0_0_0;
static ParameterInfo t5055_m29118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1006_0_0_0},
};
extern TypeInfo t5055_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29118_MI = 
{
	"set_Item", NULL, &t5055_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5055_m29118_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5055_MIs[] =
{
	&m29119_MI,
	&m29120_MI,
	&m29121_MI,
	&m29117_MI,
	&m29118_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5054_TI;
extern TypeInfo t5056_TI;
static TypeInfo* t5055_ITIs[] = 
{
	&t611_TI,
	&t5054_TI,
	&t5056_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5055_0_0_0;
extern Il2CppType t5055_1_0_0;
struct t5055;
extern TypeInfo t5055_TI;
extern Il2CppGenericClass t5055_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5055_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5055_MIs, t5055_PIs, NULL, NULL, NULL, NULL, NULL, &t5055_TI, t5055_ITIs, NULL, &t1418__CustomAttributeCache, &t5055_TI, &t5055_0_0_0, &t5055_1_0_0, NULL, &t5055_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3763_TI;

#include "t1007.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m29122_MI;
static PropertyInfo t3763____Current_PropertyInfo = 
{
	&t3763_TI, "Current", &m29122_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3763_PIs[] =
{
	&t3763____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3763_TI;
extern Il2CppType t1007_0_0_0;
extern void* RuntimeInvoker_t1007 (MethodInfo* method, void* obj, void** args);
MethodInfo m29122_MI = 
{
	"get_Current", NULL, &t3763_TI, &t1007_0_0_0, RuntimeInvoker_t1007, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3763_MIs[] =
{
	&m29122_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3763_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3763_0_0_0;
extern Il2CppType t3763_1_0_0;
struct t3763;
extern TypeInfo t3763_TI;
extern Il2CppGenericClass t3763_GC;
TypeInfo t3763_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3763_MIs, t3763_PIs, NULL, NULL, NULL, NULL, NULL, &t3763_TI, t3763_ITIs, NULL, &EmptyCustomAttributesCache, &t3763_TI, &t3763_0_0_0, &t3763_1_0_0, NULL, &t3763_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2843_TI;
#include "t2843MD.h"

extern TypeInfo t2843_TI;
extern TypeInfo t1007_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16112_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22070_MI;
struct t29;
 int32_t m22070 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22070_MI;


extern MethodInfo m16108_MI;
 void m16108 (t2843 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16109_MI;
 t28 * m16109 (t2843 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16112(__this, &m16112_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1007_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16110_MI;
 void m16110 (t2843 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16111_MI;
 bool m16111 (t2843 * __this, MethodInfo* method){
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
extern MethodInfo m16112_MI;
 int32_t m16112 (t2843 * __this, MethodInfo* method){
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
		int32_t L_8 = m22070(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22070_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType t29_0_0_1;
FieldInfo t2843_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2843_TI, offsetof(t2843, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2843_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2843_TI, offsetof(t2843, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2843_FIs[] =
{
	&t2843_f0_FieldInfo,
	&t2843_f1_FieldInfo,
	NULL
};
extern MethodInfo m16109_MI;
static PropertyInfo t2843____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2843_TI, "System.Collections.IEnumerator.Current", &m16109_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16112_MI;
static PropertyInfo t2843____Current_PropertyInfo = 
{
	&t2843_TI, "Current", &m16112_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2843_PIs[] =
{
	&t2843____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2843____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2843_m16108_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2843_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16108_MI = 
{
	".ctor", (methodPointerType)&m16108, &t2843_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2843_m16108_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16109_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16109, &t2843_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16110_MI = 
{
	"Dispose", (methodPointerType)&m16110, &t2843_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16111_MI = 
{
	"MoveNext", (methodPointerType)&m16111, &t2843_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2843_TI;
extern Il2CppType t1007_0_0_0;
extern void* RuntimeInvoker_t1007 (MethodInfo* method, void* obj, void** args);
MethodInfo m16112_MI = 
{
	"get_Current", (methodPointerType)&m16112, &t2843_TI, &t1007_0_0_0, RuntimeInvoker_t1007, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2843_MIs[] =
{
	&m16108_MI,
	&m16109_MI,
	&m16110_MI,
	&m16111_MI,
	&m16112_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16109_MI;
extern MethodInfo m16111_MI;
extern MethodInfo m16110_MI;
extern MethodInfo m16112_MI;
static MethodInfo* t2843_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16109_MI,
	&m16111_MI,
	&m16110_MI,
	&m16112_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3763_TI;
static TypeInfo* t2843_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3763_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3763_TI;
static Il2CppInterfaceOffsetPair t2843_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3763_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2843_0_0_0;
extern Il2CppType t2843_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2843_TI;
extern Il2CppGenericClass t2843_GC;
extern TypeInfo t29_TI;
TypeInfo t2843_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2843_MIs, t2843_PIs, t2843_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2843_TI, t2843_ITIs, t2843_VT, &EmptyCustomAttributesCache, &t2843_TI, &t2843_0_0_0, &t2843_1_0_0, t2843_IOs, &t2843_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2843)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5057_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m29123_MI;
static PropertyInfo t5057____Count_PropertyInfo = 
{
	&t5057_TI, "Count", &m29123_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29124_MI;
static PropertyInfo t5057____IsReadOnly_PropertyInfo = 
{
	&t5057_TI, "IsReadOnly", &m29124_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5057_PIs[] =
{
	&t5057____Count_PropertyInfo,
	&t5057____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5057_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29123_MI = 
{
	"get_Count", NULL, &t5057_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5057_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29124_MI = 
{
	"get_IsReadOnly", NULL, &t5057_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1007_0_0_0;
static ParameterInfo t5057_m29125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1007_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29125_MI = 
{
	"Add", NULL, &t5057_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5057_m29125_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5057_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29126_MI = 
{
	"Clear", NULL, &t5057_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1007_0_0_0;
static ParameterInfo t5057_m29127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1007_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29127_MI = 
{
	"Contains", NULL, &t5057_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5057_m29127_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3092_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5057_m29128_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3092_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29128_MI = 
{
	"CopyTo", NULL, &t5057_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5057_m29128_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1007_0_0_0;
static ParameterInfo t5057_m29129_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1007_0_0_0},
};
extern TypeInfo t5057_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29129_MI = 
{
	"Remove", NULL, &t5057_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5057_m29129_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5057_MIs[] =
{
	&m29123_MI,
	&m29124_MI,
	&m29125_MI,
	&m29126_MI,
	&m29127_MI,
	&m29128_MI,
	&m29129_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5059_TI;
static TypeInfo* t5057_ITIs[] = 
{
	&t611_TI,
	&t5059_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5057_0_0_0;
extern Il2CppType t5057_1_0_0;
struct t5057;
extern TypeInfo t5057_TI;
extern Il2CppGenericClass t5057_GC;
TypeInfo t5057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5057_MIs, t5057_PIs, NULL, NULL, NULL, NULL, NULL, &t5057_TI, t5057_ITIs, NULL, &EmptyCustomAttributesCache, &t5057_TI, &t5057_0_0_0, &t5057_1_0_0, NULL, &t5057_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5059_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern TypeInfo t5059_TI;
extern Il2CppType t3763_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29130_MI = 
{
	"GetEnumerator", NULL, &t5059_TI, &t3763_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5059_MIs[] =
{
	&m29130_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5059_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5059_0_0_0;
extern Il2CppType t5059_1_0_0;
struct t5059;
extern TypeInfo t5059_TI;
extern Il2CppGenericClass t5059_GC;
TypeInfo t5059_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5059_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5059_TI, t5059_ITIs, NULL, &EmptyCustomAttributesCache, &t5059_TI, &t5059_0_0_0, &t5059_1_0_0, NULL, &t5059_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5058_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo m29131_MI;
extern MethodInfo m29132_MI;
static PropertyInfo t5058____Item_PropertyInfo = 
{
	&t5058_TI, "Item", &m29131_MI, &m29132_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5058_PIs[] =
{
	&t5058____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1007_0_0_0;
static ParameterInfo t5058_m29133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1007_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29133_MI = 
{
	"IndexOf", NULL, &t5058_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5058_m29133_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1007_0_0_0;
static ParameterInfo t5058_m29134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1007_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29134_MI = 
{
	"Insert", NULL, &t5058_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5058_m29134_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5058_m29135_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29135_MI = 
{
	"RemoveAt", NULL, &t5058_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5058_m29135_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5058_m29131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t1007_0_0_0;
extern void* RuntimeInvoker_t1007_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29131_MI = 
{
	"get_Item", NULL, &t5058_TI, &t1007_0_0_0, RuntimeInvoker_t1007_t47, t5058_m29131_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1007_0_0_0;
static ParameterInfo t5058_m29132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1007_0_0_0},
};
extern TypeInfo t5058_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29132_MI = 
{
	"set_Item", NULL, &t5058_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5058_m29132_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5058_MIs[] =
{
	&m29133_MI,
	&m29134_MI,
	&m29135_MI,
	&m29131_MI,
	&m29132_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5057_TI;
extern TypeInfo t5059_TI;
static TypeInfo* t5058_ITIs[] = 
{
	&t611_TI,
	&t5057_TI,
	&t5059_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5058_0_0_0;
extern Il2CppType t5058_1_0_0;
struct t5058;
extern TypeInfo t5058_TI;
extern Il2CppGenericClass t5058_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5058_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5058_MIs, t5058_PIs, NULL, NULL, NULL, NULL, NULL, &t5058_TI, t5058_ITIs, NULL, &t1418__CustomAttributeCache, &t5058_TI, &t5058_0_0_0, &t5058_1_0_0, NULL, &t5058_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3764_TI;

#include "t1008.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m29136_MI;
static PropertyInfo t3764____Current_PropertyInfo = 
{
	&t3764_TI, "Current", &m29136_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3764_PIs[] =
{
	&t3764____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3764_TI;
extern Il2CppType t1008_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29136_MI = 
{
	"get_Current", NULL, &t3764_TI, &t1008_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3764_MIs[] =
{
	&m29136_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3764_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3764_0_0_0;
extern Il2CppType t3764_1_0_0;
struct t3764;
extern TypeInfo t3764_TI;
extern Il2CppGenericClass t3764_GC;
TypeInfo t3764_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3764_MIs, t3764_PIs, NULL, NULL, NULL, NULL, NULL, &t3764_TI, t3764_ITIs, NULL, &EmptyCustomAttributesCache, &t3764_TI, &t3764_0_0_0, &t3764_1_0_0, NULL, &t3764_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2844_TI;
#include "t2844MD.h"

extern TypeInfo t2844_TI;
extern TypeInfo t1008_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16117_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22081_MI;
struct t29;
#define m22081(__this, p0, method) (t1008 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22081_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2844_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2844_TI, offsetof(t2844, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2844_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2844_TI, offsetof(t2844, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2844_FIs[] =
{
	&t2844_f0_FieldInfo,
	&t2844_f1_FieldInfo,
	NULL
};
extern MethodInfo m16114_MI;
static PropertyInfo t2844____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2844_TI, "System.Collections.IEnumerator.Current", &m16114_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16117_MI;
static PropertyInfo t2844____Current_PropertyInfo = 
{
	&t2844_TI, "Current", &m16117_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2844_PIs[] =
{
	&t2844____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2844____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2844_m16113_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2844_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16113_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2844_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2844_m16113_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16114_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2844_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16115_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2844_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16116_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2844_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2844_TI;
extern Il2CppType t1008_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16117_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2844_TI, &t1008_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2844_MIs[] =
{
	&m16113_MI,
	&m16114_MI,
	&m16115_MI,
	&m16116_MI,
	&m16117_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16114_MI;
extern MethodInfo m16116_MI;
extern MethodInfo m16115_MI;
extern MethodInfo m16117_MI;
static MethodInfo* t2844_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16114_MI,
	&m16116_MI,
	&m16115_MI,
	&m16117_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3764_TI;
static TypeInfo* t2844_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3764_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3764_TI;
static Il2CppInterfaceOffsetPair t2844_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3764_TI, 7},
};
extern MethodInfo m16117_MI;
extern TypeInfo t1008_TI;
extern MethodInfo m22081_MI;
static void* t2844_RGCTXData[3] = 
{
	&m16117_MI,
	&t1008_TI,
	&m22081_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2844_0_0_0;
extern Il2CppType t2844_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2844_TI;
extern Il2CppGenericClass t2844_GC;
extern TypeInfo t29_TI;
TypeInfo t2844_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2844_MIs, t2844_PIs, t2844_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2844_TI, t2844_ITIs, t2844_VT, &EmptyCustomAttributesCache, &t2844_TI, &t2844_0_0_0, &t2844_1_0_0, t2844_IOs, &t2844_GC, NULL, NULL, NULL, t2844_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2844)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5060_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m29137_MI;
static PropertyInfo t5060____Count_PropertyInfo = 
{
	&t5060_TI, "Count", &m29137_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29138_MI;
static PropertyInfo t5060____IsReadOnly_PropertyInfo = 
{
	&t5060_TI, "IsReadOnly", &m29138_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5060_PIs[] =
{
	&t5060____Count_PropertyInfo,
	&t5060____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5060_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29137_MI = 
{
	"get_Count", NULL, &t5060_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5060_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29138_MI = 
{
	"get_IsReadOnly", NULL, &t5060_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t5060_m29139_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29139_MI = 
{
	"Add", NULL, &t5060_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5060_m29139_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5060_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29140_MI = 
{
	"Clear", NULL, &t5060_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t5060_m29141_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29141_MI = 
{
	"Contains", NULL, &t5060_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5060_m29141_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3093_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5060_m29142_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3093_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29142_MI = 
{
	"CopyTo", NULL, &t5060_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5060_m29142_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t5060_m29143_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern TypeInfo t5060_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29143_MI = 
{
	"Remove", NULL, &t5060_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5060_m29143_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5060_MIs[] =
{
	&m29137_MI,
	&m29138_MI,
	&m29139_MI,
	&m29140_MI,
	&m29141_MI,
	&m29142_MI,
	&m29143_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5062_TI;
static TypeInfo* t5060_ITIs[] = 
{
	&t611_TI,
	&t5062_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5060_0_0_0;
extern Il2CppType t5060_1_0_0;
struct t5060;
extern TypeInfo t5060_TI;
extern Il2CppGenericClass t5060_GC;
TypeInfo t5060_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5060_MIs, t5060_PIs, NULL, NULL, NULL, NULL, NULL, &t5060_TI, t5060_ITIs, NULL, &EmptyCustomAttributesCache, &t5060_TI, &t5060_0_0_0, &t5060_1_0_0, NULL, &t5060_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5062_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern TypeInfo t5062_TI;
extern Il2CppType t3764_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29144_MI = 
{
	"GetEnumerator", NULL, &t5062_TI, &t3764_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5062_MIs[] =
{
	&m29144_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5062_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5062_0_0_0;
extern Il2CppType t5062_1_0_0;
struct t5062;
extern TypeInfo t5062_TI;
extern Il2CppGenericClass t5062_GC;
TypeInfo t5062_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5062_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5062_TI, t5062_ITIs, NULL, &EmptyCustomAttributesCache, &t5062_TI, &t5062_0_0_0, &t5062_1_0_0, NULL, &t5062_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5061_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo m29145_MI;
extern MethodInfo m29146_MI;
static PropertyInfo t5061____Item_PropertyInfo = 
{
	&t5061_TI, "Item", &m29145_MI, &m29146_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5061_PIs[] =
{
	&t5061____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1008_0_0_0;
static ParameterInfo t5061_m29147_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29147_MI = 
{
	"IndexOf", NULL, &t5061_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5061_m29147_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1008_0_0_0;
static ParameterInfo t5061_m29148_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29148_MI = 
{
	"Insert", NULL, &t5061_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5061_m29148_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5061_m29149_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29149_MI = 
{
	"RemoveAt", NULL, &t5061_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5061_m29149_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5061_m29145_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t1008_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29145_MI = 
{
	"get_Item", NULL, &t5061_TI, &t1008_0_0_0, RuntimeInvoker_t28_t47, t5061_m29145_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1008_0_0_0;
static ParameterInfo t5061_m29146_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1008_0_0_0},
};
extern TypeInfo t5061_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29146_MI = 
{
	"set_Item", NULL, &t5061_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5061_m29146_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5061_MIs[] =
{
	&m29147_MI,
	&m29148_MI,
	&m29149_MI,
	&m29145_MI,
	&m29146_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5060_TI;
extern TypeInfo t5062_TI;
static TypeInfo* t5061_ITIs[] = 
{
	&t611_TI,
	&t5060_TI,
	&t5062_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5061_0_0_0;
extern Il2CppType t5061_1_0_0;
struct t5061;
extern TypeInfo t5061_TI;
extern Il2CppGenericClass t5061_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5061_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5061_MIs, t5061_PIs, NULL, NULL, NULL, NULL, NULL, &t5061_TI, t5061_ITIs, NULL, &t1418__CustomAttributeCache, &t5061_TI, &t5061_0_0_0, &t5061_1_0_0, NULL, &t5061_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3765_TI;

#include "t1009.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m29150_MI;
static PropertyInfo t3765____Current_PropertyInfo = 
{
	&t3765_TI, "Current", &m29150_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3765_PIs[] =
{
	&t3765____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3765_TI;
extern Il2CppType t1009_0_0_0;
extern void* RuntimeInvoker_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m29150_MI = 
{
	"get_Current", NULL, &t3765_TI, &t1009_0_0_0, RuntimeInvoker_t1009, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3765_MIs[] =
{
	&m29150_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3765_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3765_0_0_0;
extern Il2CppType t3765_1_0_0;
struct t3765;
extern TypeInfo t3765_TI;
extern Il2CppGenericClass t3765_GC;
TypeInfo t3765_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3765_MIs, t3765_PIs, NULL, NULL, NULL, NULL, NULL, &t3765_TI, t3765_ITIs, NULL, &EmptyCustomAttributesCache, &t3765_TI, &t3765_0_0_0, &t3765_1_0_0, NULL, &t3765_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2845.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2845_TI;
#include "t2845MD.h"

extern TypeInfo t2845_TI;
extern TypeInfo t1009_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16122_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22092_MI;
struct t29;
 int32_t m22092 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22092_MI;


extern MethodInfo m16118_MI;
 void m16118 (t2845 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16119_MI;
 t28 * m16119 (t2845 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16122(__this, &m16122_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1009_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16120_MI;
 void m16120 (t2845 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16121_MI;
 bool m16121 (t2845 * __this, MethodInfo* method){
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
extern MethodInfo m16122_MI;
 int32_t m16122 (t2845 * __this, MethodInfo* method){
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
		int32_t L_8 = m22092(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22092_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType t29_0_0_1;
FieldInfo t2845_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2845_TI, offsetof(t2845, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2845_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2845_TI, offsetof(t2845, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2845_FIs[] =
{
	&t2845_f0_FieldInfo,
	&t2845_f1_FieldInfo,
	NULL
};
extern MethodInfo m16119_MI;
static PropertyInfo t2845____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2845_TI, "System.Collections.IEnumerator.Current", &m16119_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16122_MI;
static PropertyInfo t2845____Current_PropertyInfo = 
{
	&t2845_TI, "Current", &m16122_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2845_PIs[] =
{
	&t2845____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2845____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2845_m16118_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2845_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16118_MI = 
{
	".ctor", (methodPointerType)&m16118, &t2845_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2845_m16118_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16119_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16119, &t2845_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16120_MI = 
{
	"Dispose", (methodPointerType)&m16120, &t2845_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16121_MI = 
{
	"MoveNext", (methodPointerType)&m16121, &t2845_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2845_TI;
extern Il2CppType t1009_0_0_0;
extern void* RuntimeInvoker_t1009 (MethodInfo* method, void* obj, void** args);
MethodInfo m16122_MI = 
{
	"get_Current", (methodPointerType)&m16122, &t2845_TI, &t1009_0_0_0, RuntimeInvoker_t1009, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2845_MIs[] =
{
	&m16118_MI,
	&m16119_MI,
	&m16120_MI,
	&m16121_MI,
	&m16122_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16119_MI;
extern MethodInfo m16121_MI;
extern MethodInfo m16120_MI;
extern MethodInfo m16122_MI;
static MethodInfo* t2845_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16119_MI,
	&m16121_MI,
	&m16120_MI,
	&m16122_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3765_TI;
static TypeInfo* t2845_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3765_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3765_TI;
static Il2CppInterfaceOffsetPair t2845_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3765_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2845_0_0_0;
extern Il2CppType t2845_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2845_TI;
extern Il2CppGenericClass t2845_GC;
extern TypeInfo t29_TI;
TypeInfo t2845_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2845_MIs, t2845_PIs, t2845_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2845_TI, t2845_ITIs, t2845_VT, &EmptyCustomAttributesCache, &t2845_TI, &t2845_0_0_0, &t2845_1_0_0, t2845_IOs, &t2845_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2845)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5063_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m29151_MI;
static PropertyInfo t5063____Count_PropertyInfo = 
{
	&t5063_TI, "Count", &m29151_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29152_MI;
static PropertyInfo t5063____IsReadOnly_PropertyInfo = 
{
	&t5063_TI, "IsReadOnly", &m29152_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5063_PIs[] =
{
	&t5063____Count_PropertyInfo,
	&t5063____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5063_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29151_MI = 
{
	"get_Count", NULL, &t5063_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5063_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29152_MI = 
{
	"get_IsReadOnly", NULL, &t5063_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1009_0_0_0;
static ParameterInfo t5063_m29153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1009_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29153_MI = 
{
	"Add", NULL, &t5063_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5063_m29153_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5063_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29154_MI = 
{
	"Clear", NULL, &t5063_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1009_0_0_0;
static ParameterInfo t5063_m29155_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1009_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29155_MI = 
{
	"Contains", NULL, &t5063_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5063_m29155_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3094_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5063_m29156_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3094_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29156_MI = 
{
	"CopyTo", NULL, &t5063_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5063_m29156_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1009_0_0_0;
static ParameterInfo t5063_m29157_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1009_0_0_0},
};
extern TypeInfo t5063_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29157_MI = 
{
	"Remove", NULL, &t5063_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5063_m29157_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5063_MIs[] =
{
	&m29151_MI,
	&m29152_MI,
	&m29153_MI,
	&m29154_MI,
	&m29155_MI,
	&m29156_MI,
	&m29157_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5065_TI;
static TypeInfo* t5063_ITIs[] = 
{
	&t611_TI,
	&t5065_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5063_0_0_0;
extern Il2CppType t5063_1_0_0;
struct t5063;
extern TypeInfo t5063_TI;
extern Il2CppGenericClass t5063_GC;
TypeInfo t5063_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5063_MIs, t5063_PIs, NULL, NULL, NULL, NULL, NULL, &t5063_TI, t5063_ITIs, NULL, &EmptyCustomAttributesCache, &t5063_TI, &t5063_0_0_0, &t5063_1_0_0, NULL, &t5063_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5065_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>
extern TypeInfo t5065_TI;
extern Il2CppType t3765_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29158_MI = 
{
	"GetEnumerator", NULL, &t5065_TI, &t3765_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5065_MIs[] =
{
	&m29158_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5065_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5065_0_0_0;
extern Il2CppType t5065_1_0_0;
struct t5065;
extern TypeInfo t5065_TI;
extern Il2CppGenericClass t5065_GC;
TypeInfo t5065_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5065_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5065_TI, t5065_ITIs, NULL, &EmptyCustomAttributesCache, &t5065_TI, &t5065_0_0_0, &t5065_1_0_0, NULL, &t5065_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5064_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo m29159_MI;
extern MethodInfo m29160_MI;
static PropertyInfo t5064____Item_PropertyInfo = 
{
	&t5064_TI, "Item", &m29159_MI, &m29160_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5064_PIs[] =
{
	&t5064____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1009_0_0_0;
static ParameterInfo t5064_m29161_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1009_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29161_MI = 
{
	"IndexOf", NULL, &t5064_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5064_m29161_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1009_0_0_0;
static ParameterInfo t5064_m29162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1009_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29162_MI = 
{
	"Insert", NULL, &t5064_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5064_m29162_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5064_m29163_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29163_MI = 
{
	"RemoveAt", NULL, &t5064_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5064_m29163_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5064_m29159_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t1009_0_0_0;
extern void* RuntimeInvoker_t1009_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29159_MI = 
{
	"get_Item", NULL, &t5064_TI, &t1009_0_0_0, RuntimeInvoker_t1009_t47, t5064_m29159_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1009_0_0_0;
static ParameterInfo t5064_m29160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1009_0_0_0},
};
extern TypeInfo t5064_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29160_MI = 
{
	"set_Item", NULL, &t5064_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5064_m29160_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5064_MIs[] =
{
	&m29161_MI,
	&m29162_MI,
	&m29163_MI,
	&m29159_MI,
	&m29160_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5063_TI;
extern TypeInfo t5065_TI;
static TypeInfo* t5064_ITIs[] = 
{
	&t611_TI,
	&t5063_TI,
	&t5065_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5064_0_0_0;
extern Il2CppType t5064_1_0_0;
struct t5064;
extern TypeInfo t5064_TI;
extern Il2CppGenericClass t5064_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5064_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5064_MIs, t5064_PIs, NULL, NULL, NULL, NULL, NULL, &t5064_TI, t5064_ITIs, NULL, &t1418__CustomAttributeCache, &t5064_TI, &t5064_0_0_0, &t5064_1_0_0, NULL, &t5064_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3766_TI;

#include "t1010.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m29164_MI;
static PropertyInfo t3766____Current_PropertyInfo = 
{
	&t3766_TI, "Current", &m29164_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3766_PIs[] =
{
	&t3766____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3766_TI;
extern Il2CppType t1010_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29164_MI = 
{
	"get_Current", NULL, &t3766_TI, &t1010_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3766_MIs[] =
{
	&m29164_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3766_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3766_0_0_0;
extern Il2CppType t3766_1_0_0;
struct t3766;
extern TypeInfo t3766_TI;
extern Il2CppGenericClass t3766_GC;
TypeInfo t3766_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3766_MIs, t3766_PIs, NULL, NULL, NULL, NULL, NULL, &t3766_TI, t3766_ITIs, NULL, &EmptyCustomAttributesCache, &t3766_TI, &t3766_0_0_0, &t3766_1_0_0, NULL, &t3766_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2846.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2846_TI;
#include "t2846MD.h"

extern TypeInfo t2846_TI;
extern TypeInfo t1010_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16127_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22103_MI;
struct t29;
#define m22103(__this, p0, method) (t1010 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22103_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2846_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2846_TI, offsetof(t2846, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2846_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2846_TI, offsetof(t2846, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2846_FIs[] =
{
	&t2846_f0_FieldInfo,
	&t2846_f1_FieldInfo,
	NULL
};
extern MethodInfo m16124_MI;
static PropertyInfo t2846____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2846_TI, "System.Collections.IEnumerator.Current", &m16124_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16127_MI;
static PropertyInfo t2846____Current_PropertyInfo = 
{
	&t2846_TI, "Current", &m16127_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2846_PIs[] =
{
	&t2846____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2846____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2846_m16123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2846_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16123_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2846_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2846_m16123_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16124_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2846_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16125_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2846_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16126_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2846_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2846_TI;
extern Il2CppType t1010_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16127_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2846_TI, &t1010_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2846_MIs[] =
{
	&m16123_MI,
	&m16124_MI,
	&m16125_MI,
	&m16126_MI,
	&m16127_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16124_MI;
extern MethodInfo m16126_MI;
extern MethodInfo m16125_MI;
extern MethodInfo m16127_MI;
static MethodInfo* t2846_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16124_MI,
	&m16126_MI,
	&m16125_MI,
	&m16127_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3766_TI;
static TypeInfo* t2846_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3766_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3766_TI;
static Il2CppInterfaceOffsetPair t2846_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3766_TI, 7},
};
extern MethodInfo m16127_MI;
extern TypeInfo t1010_TI;
extern MethodInfo m22103_MI;
static void* t2846_RGCTXData[3] = 
{
	&m16127_MI,
	&t1010_TI,
	&m22103_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2846_0_0_0;
extern Il2CppType t2846_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2846_TI;
extern Il2CppGenericClass t2846_GC;
extern TypeInfo t29_TI;
TypeInfo t2846_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2846_MIs, t2846_PIs, t2846_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2846_TI, t2846_ITIs, t2846_VT, &EmptyCustomAttributesCache, &t2846_TI, &t2846_0_0_0, &t2846_1_0_0, t2846_IOs, &t2846_GC, NULL, NULL, NULL, t2846_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2846)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5066_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m29165_MI;
static PropertyInfo t5066____Count_PropertyInfo = 
{
	&t5066_TI, "Count", &m29165_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29166_MI;
static PropertyInfo t5066____IsReadOnly_PropertyInfo = 
{
	&t5066_TI, "IsReadOnly", &m29166_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5066_PIs[] =
{
	&t5066____Count_PropertyInfo,
	&t5066____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5066_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29165_MI = 
{
	"get_Count", NULL, &t5066_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5066_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29166_MI = 
{
	"get_IsReadOnly", NULL, &t5066_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5066_m29167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29167_MI = 
{
	"Add", NULL, &t5066_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5066_m29167_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5066_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29168_MI = 
{
	"Clear", NULL, &t5066_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5066_m29169_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29169_MI = 
{
	"Contains", NULL, &t5066_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5066_m29169_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3095_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5066_m29170_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3095_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29170_MI = 
{
	"CopyTo", NULL, &t5066_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5066_m29170_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5066_m29171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5066_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29171_MI = 
{
	"Remove", NULL, &t5066_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5066_m29171_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5066_MIs[] =
{
	&m29165_MI,
	&m29166_MI,
	&m29167_MI,
	&m29168_MI,
	&m29169_MI,
	&m29170_MI,
	&m29171_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5068_TI;
static TypeInfo* t5066_ITIs[] = 
{
	&t611_TI,
	&t5068_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5066_0_0_0;
extern Il2CppType t5066_1_0_0;
struct t5066;
extern TypeInfo t5066_TI;
extern Il2CppGenericClass t5066_GC;
TypeInfo t5066_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5066_MIs, t5066_PIs, NULL, NULL, NULL, NULL, NULL, &t5066_TI, t5066_ITIs, NULL, &EmptyCustomAttributesCache, &t5066_TI, &t5066_0_0_0, &t5066_1_0_0, NULL, &t5066_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5068_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>
extern TypeInfo t5068_TI;
extern Il2CppType t3766_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29172_MI = 
{
	"GetEnumerator", NULL, &t5068_TI, &t3766_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5068_MIs[] =
{
	&m29172_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5068_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5068_0_0_0;
extern Il2CppType t5068_1_0_0;
struct t5068;
extern TypeInfo t5068_TI;
extern Il2CppGenericClass t5068_GC;
TypeInfo t5068_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5068_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5068_TI, t5068_ITIs, NULL, &EmptyCustomAttributesCache, &t5068_TI, &t5068_0_0_0, &t5068_1_0_0, NULL, &t5068_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5067_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo m29173_MI;
extern MethodInfo m29174_MI;
static PropertyInfo t5067____Item_PropertyInfo = 
{
	&t5067_TI, "Item", &m29173_MI, &m29174_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5067_PIs[] =
{
	&t5067____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5067_m29175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29175_MI = 
{
	"IndexOf", NULL, &t5067_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5067_m29175_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5067_m29176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29176_MI = 
{
	"Insert", NULL, &t5067_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5067_m29176_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5067_m29177_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29177_MI = 
{
	"RemoveAt", NULL, &t5067_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5067_m29177_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5067_m29173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t1010_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29173_MI = 
{
	"get_Item", NULL, &t5067_TI, &t1010_0_0_0, RuntimeInvoker_t28_t47, t5067_m29173_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1010_0_0_0;
static ParameterInfo t5067_m29174_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1010_0_0_0},
};
extern TypeInfo t5067_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29174_MI = 
{
	"set_Item", NULL, &t5067_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5067_m29174_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5067_MIs[] =
{
	&m29175_MI,
	&m29176_MI,
	&m29177_MI,
	&m29173_MI,
	&m29174_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5066_TI;
extern TypeInfo t5068_TI;
static TypeInfo* t5067_ITIs[] = 
{
	&t611_TI,
	&t5066_TI,
	&t5068_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5067_0_0_0;
extern Il2CppType t5067_1_0_0;
struct t5067;
extern TypeInfo t5067_TI;
extern Il2CppGenericClass t5067_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5067_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5067_MIs, t5067_PIs, NULL, NULL, NULL, NULL, NULL, &t5067_TI, t5067_ITIs, NULL, &t1418__CustomAttributeCache, &t5067_TI, &t5067_0_0_0, &t5067_1_0_0, NULL, &t5067_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3767_TI;

#include "t1012.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m29178_MI;
static PropertyInfo t3767____Current_PropertyInfo = 
{
	&t3767_TI, "Current", &m29178_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3767_PIs[] =
{
	&t3767____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3767_TI;
extern Il2CppType t1012_0_0_0;
extern void* RuntimeInvoker_t1012 (MethodInfo* method, void* obj, void** args);
MethodInfo m29178_MI = 
{
	"get_Current", NULL, &t3767_TI, &t1012_0_0_0, RuntimeInvoker_t1012, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3767_MIs[] =
{
	&m29178_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3767_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3767_0_0_0;
extern Il2CppType t3767_1_0_0;
struct t3767;
extern TypeInfo t3767_TI;
extern Il2CppGenericClass t3767_GC;
TypeInfo t3767_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3767_MIs, t3767_PIs, NULL, NULL, NULL, NULL, NULL, &t3767_TI, t3767_ITIs, NULL, &EmptyCustomAttributesCache, &t3767_TI, &t3767_0_0_0, &t3767_1_0_0, NULL, &t3767_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
