#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t3496_TI;

#include "t283.h"

#include "t29.h"

// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.GridLayoutGroup/Constraint>
extern MethodInfo m25306_MI;
static PropertyInfo t3496____Current_PropertyInfo = 
{
	&t3496_TI, "Current", &m25306_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3496_PIs[] =
{
	&t3496____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3496_TI;
extern Il2CppType t283_0_0_0;
extern void* RuntimeInvoker_t283 (MethodInfo* method, void* obj, void** args);
MethodInfo m25306_MI = 
{
	"get_Current", NULL, &t3496_TI, &t283_0_0_0, RuntimeInvoker_t283, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3496_MIs[] =
{
	&m25306_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3496_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3496_0_0_0;
extern Il2CppType t3496_1_0_0;
struct t3496;
extern TypeInfo t3496_TI;
extern Il2CppGenericClass t3496_GC;
TypeInfo t3496_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3496_MIs, t3496_PIs, NULL, NULL, NULL, NULL, NULL, &t3496_TI, t3496_ITIs, NULL, &EmptyCustomAttributesCache, &t3496_TI, &t3496_0_0_0, &t3496_1_0_0, NULL, &t3496_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2269.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2269_TI;
#include "t2269MD.h"

#include "t28.h"
#include "t47.h"
#include "t18.h"
#include "t1287.h"
#include "t30.h"
#include "t31.h"
extern TypeInfo t2269_TI;
extern TypeInfo t283_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
#include "t29MD.h"
extern MethodInfo m12826_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18949_MI;
struct t29;
#include "t1251.h"
 int32_t m18949 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18949_MI;


extern MethodInfo m12822_MI;
 void m12822 (t2269 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12823_MI;
 t28 * m12823 (t2269 * __this, MethodInfo* method){
	{
		int32_t L_0 = m12826(__this, &m12826_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t283_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m12824_MI;
 void m12824 (t2269 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m12825_MI;
 bool m12825 (t2269 * __this, MethodInfo* method){
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
extern MethodInfo m12826_MI;
 int32_t m12826 (t2269 * __this, MethodInfo* method){
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
		int32_t L_8 = m18949(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18949_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.GridLayoutGroup/Constraint>
extern Il2CppType t29_0_0_1;
FieldInfo t2269_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2269_TI, offsetof(t2269, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2269_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2269_TI, offsetof(t2269, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2269_FIs[] =
{
	&t2269_f0_FieldInfo,
	&t2269_f1_FieldInfo,
	NULL
};
extern MethodInfo m12823_MI;
static PropertyInfo t2269____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2269_TI, "System.Collections.IEnumerator.Current", &m12823_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12826_MI;
static PropertyInfo t2269____Current_PropertyInfo = 
{
	&t2269_TI, "Current", &m12826_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2269_PIs[] =
{
	&t2269____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2269____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2269_m12822_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2269_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12822_MI = 
{
	".ctor", (methodPointerType)&m12822, &t2269_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2269_m12822_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2269_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12823_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m12823, &t2269_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2269_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12824_MI = 
{
	"Dispose", (methodPointerType)&m12824, &t2269_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2269_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12825_MI = 
{
	"MoveNext", (methodPointerType)&m12825, &t2269_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2269_TI;
extern Il2CppType t283_0_0_0;
extern void* RuntimeInvoker_t283 (MethodInfo* method, void* obj, void** args);
MethodInfo m12826_MI = 
{
	"get_Current", (methodPointerType)&m12826, &t2269_TI, &t283_0_0_0, RuntimeInvoker_t283, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2269_MIs[] =
{
	&m12822_MI,
	&m12823_MI,
	&m12824_MI,
	&m12825_MI,
	&m12826_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12823_MI;
extern MethodInfo m12825_MI;
extern MethodInfo m12824_MI;
extern MethodInfo m12826_MI;
static MethodInfo* t2269_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12823_MI,
	&m12825_MI,
	&m12824_MI,
	&m12826_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3496_TI;
static TypeInfo* t2269_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3496_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3496_TI;
static Il2CppInterfaceOffsetPair t2269_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3496_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2269_0_0_0;
extern Il2CppType t2269_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2269_TI;
extern Il2CppGenericClass t2269_GC;
extern TypeInfo t29_TI;
TypeInfo t2269_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2269_MIs, t2269_PIs, t2269_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2269_TI, t2269_ITIs, t2269_VT, &EmptyCustomAttributesCache, &t2269_TI, &t2269_0_0_0, &t2269_1_0_0, t2269_IOs, &t2269_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2269)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4271_TI;

#include "UnityEngine.UI_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.GridLayoutGroup/Constraint>
extern MethodInfo m25307_MI;
static PropertyInfo t4271____Count_PropertyInfo = 
{
	&t4271_TI, "Count", &m25307_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25308_MI;
static PropertyInfo t4271____IsReadOnly_PropertyInfo = 
{
	&t4271_TI, "IsReadOnly", &m25308_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4271_PIs[] =
{
	&t4271____Count_PropertyInfo,
	&t4271____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4271_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25307_MI = 
{
	"get_Count", NULL, &t4271_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4271_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25308_MI = 
{
	"get_IsReadOnly", NULL, &t4271_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t283_0_0_0;
static ParameterInfo t4271_m25309_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t4271_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25309_MI = 
{
	"Add", NULL, &t4271_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4271_m25309_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4271_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25310_MI = 
{
	"Clear", NULL, &t4271_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t283_0_0_0;
static ParameterInfo t4271_m25311_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t4271_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25311_MI = 
{
	"Contains", NULL, &t4271_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t4271_m25311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3306_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4271_m25312_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3306_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4271_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25312_MI = 
{
	"CopyTo", NULL, &t4271_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4271_m25312_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t283_0_0_0;
static ParameterInfo t4271_m25313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t4271_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25313_MI = 
{
	"Remove", NULL, &t4271_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t4271_m25313_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4271_MIs[] =
{
	&m25307_MI,
	&m25308_MI,
	&m25309_MI,
	&m25310_MI,
	&m25311_MI,
	&m25312_MI,
	&m25313_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4273_TI;
static TypeInfo* t4271_ITIs[] = 
{
	&t611_TI,
	&t4273_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4271_0_0_0;
extern Il2CppType t4271_1_0_0;
struct t4271;
extern TypeInfo t4271_TI;
extern Il2CppGenericClass t4271_GC;
TypeInfo t4271_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4271_MIs, t4271_PIs, NULL, NULL, NULL, NULL, NULL, &t4271_TI, t4271_ITIs, NULL, &EmptyCustomAttributesCache, &t4271_TI, &t4271_0_0_0, &t4271_1_0_0, NULL, &t4271_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4273_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.GridLayoutGroup/Constraint>
extern TypeInfo t4273_TI;
extern Il2CppType t3496_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25314_MI = 
{
	"GetEnumerator", NULL, &t4273_TI, &t3496_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4273_MIs[] =
{
	&m25314_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4273_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4273_0_0_0;
extern Il2CppType t4273_1_0_0;
struct t4273;
extern TypeInfo t4273_TI;
extern Il2CppGenericClass t4273_GC;
TypeInfo t4273_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4273_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4273_TI, t4273_ITIs, NULL, &EmptyCustomAttributesCache, &t4273_TI, &t4273_0_0_0, &t4273_1_0_0, NULL, &t4273_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4272_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.GridLayoutGroup/Constraint>
extern MethodInfo m25315_MI;
extern MethodInfo m25316_MI;
static PropertyInfo t4272____Item_PropertyInfo = 
{
	&t4272_TI, "Item", &m25315_MI, &m25316_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4272_PIs[] =
{
	&t4272____Item_PropertyInfo,
	NULL
};
extern Il2CppType t283_0_0_0;
static ParameterInfo t4272_m25317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t4272_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25317_MI = 
{
	"IndexOf", NULL, &t4272_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t4272_m25317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t283_0_0_0;
static ParameterInfo t4272_m25318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t4272_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25318_MI = 
{
	"Insert", NULL, &t4272_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t4272_m25318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4272_m25319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4272_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25319_MI = 
{
	"RemoveAt", NULL, &t4272_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4272_m25319_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4272_m25315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4272_TI;
extern Il2CppType t283_0_0_0;
extern void* RuntimeInvoker_t283_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25315_MI = 
{
	"get_Item", NULL, &t4272_TI, &t283_0_0_0, RuntimeInvoker_t283_t47, t4272_m25315_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t283_0_0_0;
static ParameterInfo t4272_m25316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t283_0_0_0},
};
extern TypeInfo t4272_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25316_MI = 
{
	"set_Item", NULL, &t4272_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t4272_m25316_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4272_MIs[] =
{
	&m25317_MI,
	&m25318_MI,
	&m25319_MI,
	&m25315_MI,
	&m25316_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4271_TI;
extern TypeInfo t4273_TI;
static TypeInfo* t4272_ITIs[] = 
{
	&t611_TI,
	&t4271_TI,
	&t4273_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4272_0_0_0;
extern Il2CppType t4272_1_0_0;
struct t4272;
extern TypeInfo t4272_TI;
extern Il2CppGenericClass t4272_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4272_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4272_MIs, t4272_PIs, NULL, NULL, NULL, NULL, NULL, &t4272_TI, t4272_ITIs, NULL, &t1418__CustomAttributeCache, &t4272_TI, &t4272_0_0_0, &t4272_1_0_0, NULL, &t4272_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3497_TI;

#include "t286.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.HorizontalLayoutGroup>
extern MethodInfo m25320_MI;
static PropertyInfo t3497____Current_PropertyInfo = 
{
	&t3497_TI, "Current", &m25320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3497_PIs[] =
{
	&t3497____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3497_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25320_MI = 
{
	"get_Current", NULL, &t3497_TI, &t286_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3497_MIs[] =
{
	&m25320_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3497_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3497_0_0_0;
extern Il2CppType t3497_1_0_0;
struct t3497;
extern TypeInfo t3497_TI;
extern Il2CppGenericClass t3497_GC;
TypeInfo t3497_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3497_MIs, t3497_PIs, NULL, NULL, NULL, NULL, NULL, &t3497_TI, t3497_ITIs, NULL, &EmptyCustomAttributesCache, &t3497_TI, &t3497_0_0_0, &t3497_1_0_0, NULL, &t3497_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2270.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2270_TI;
#include "t2270MD.h"

extern TypeInfo t2270_TI;
extern TypeInfo t286_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12831_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18960_MI;
struct t29;
struct t29;
 t28 * m16643_gshared (t29 * __this, int32_t p0, MethodInfo* method);
#define m16643(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
#define m18960(__this, p0, method) (t286 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18960_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.HorizontalLayoutGroup>
extern Il2CppType t29_0_0_1;
FieldInfo t2270_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2270_TI, offsetof(t2270, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2270_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2270_TI, offsetof(t2270, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2270_FIs[] =
{
	&t2270_f0_FieldInfo,
	&t2270_f1_FieldInfo,
	NULL
};
extern MethodInfo m12828_MI;
static PropertyInfo t2270____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2270_TI, "System.Collections.IEnumerator.Current", &m12828_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12831_MI;
static PropertyInfo t2270____Current_PropertyInfo = 
{
	&t2270_TI, "Current", &m12831_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2270_PIs[] =
{
	&t2270____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2270____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2270_m12827_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2270_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12827_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2270_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2270_m12827_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2270_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12828_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2270_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2270_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12829_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2270_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2270_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12830_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2270_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2270_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12831_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2270_TI, &t286_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2270_MIs[] =
{
	&m12827_MI,
	&m12828_MI,
	&m12829_MI,
	&m12830_MI,
	&m12831_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12828_MI;
extern MethodInfo m12830_MI;
extern MethodInfo m12829_MI;
extern MethodInfo m12831_MI;
static MethodInfo* t2270_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12828_MI,
	&m12830_MI,
	&m12829_MI,
	&m12831_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3497_TI;
static TypeInfo* t2270_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3497_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3497_TI;
static Il2CppInterfaceOffsetPair t2270_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3497_TI, 7},
};
extern MethodInfo m12831_MI;
extern TypeInfo t286_TI;
extern MethodInfo m18960_MI;
static void* t2270_RGCTXData[3] = 
{
	&m12831_MI,
	&t286_TI,
	&m18960_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2270_0_0_0;
extern Il2CppType t2270_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2270_TI;
extern Il2CppGenericClass t2270_GC;
extern TypeInfo t29_TI;
TypeInfo t2270_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2270_MIs, t2270_PIs, t2270_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2270_TI, t2270_ITIs, t2270_VT, &EmptyCustomAttributesCache, &t2270_TI, &t2270_0_0_0, &t2270_1_0_0, t2270_IOs, &t2270_GC, NULL, NULL, NULL, t2270_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2270)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4274_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.HorizontalLayoutGroup>
extern MethodInfo m25321_MI;
static PropertyInfo t4274____Count_PropertyInfo = 
{
	&t4274_TI, "Count", &m25321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25322_MI;
static PropertyInfo t4274____IsReadOnly_PropertyInfo = 
{
	&t4274_TI, "IsReadOnly", &m25322_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4274_PIs[] =
{
	&t4274____Count_PropertyInfo,
	&t4274____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4274_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25321_MI = 
{
	"get_Count", NULL, &t4274_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4274_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25322_MI = 
{
	"get_IsReadOnly", NULL, &t4274_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t4274_m25323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t4274_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25323_MI = 
{
	"Add", NULL, &t4274_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4274_m25323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4274_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25324_MI = 
{
	"Clear", NULL, &t4274_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t4274_m25325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t4274_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25325_MI = 
{
	"Contains", NULL, &t4274_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4274_m25325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3307_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4274_m25326_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3307_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4274_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25326_MI = 
{
	"CopyTo", NULL, &t4274_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4274_m25326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t4274_m25327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t4274_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25327_MI = 
{
	"Remove", NULL, &t4274_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4274_m25327_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4274_MIs[] =
{
	&m25321_MI,
	&m25322_MI,
	&m25323_MI,
	&m25324_MI,
	&m25325_MI,
	&m25326_MI,
	&m25327_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4276_TI;
static TypeInfo* t4274_ITIs[] = 
{
	&t611_TI,
	&t4276_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4274_0_0_0;
extern Il2CppType t4274_1_0_0;
struct t4274;
extern TypeInfo t4274_TI;
extern Il2CppGenericClass t4274_GC;
TypeInfo t4274_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4274_MIs, t4274_PIs, NULL, NULL, NULL, NULL, NULL, &t4274_TI, t4274_ITIs, NULL, &EmptyCustomAttributesCache, &t4274_TI, &t4274_0_0_0, &t4274_1_0_0, NULL, &t4274_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4276_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.HorizontalLayoutGroup>
extern TypeInfo t4276_TI;
extern Il2CppType t3497_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25328_MI = 
{
	"GetEnumerator", NULL, &t4276_TI, &t3497_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4276_MIs[] =
{
	&m25328_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4276_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4276_0_0_0;
extern Il2CppType t4276_1_0_0;
struct t4276;
extern TypeInfo t4276_TI;
extern Il2CppGenericClass t4276_GC;
TypeInfo t4276_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4276_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4276_TI, t4276_ITIs, NULL, &EmptyCustomAttributesCache, &t4276_TI, &t4276_0_0_0, &t4276_1_0_0, NULL, &t4276_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4275_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.HorizontalLayoutGroup>
extern MethodInfo m25329_MI;
extern MethodInfo m25330_MI;
static PropertyInfo t4275____Item_PropertyInfo = 
{
	&t4275_TI, "Item", &m25329_MI, &m25330_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4275_PIs[] =
{
	&t4275____Item_PropertyInfo,
	NULL
};
extern Il2CppType t286_0_0_0;
static ParameterInfo t4275_m25331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t4275_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25331_MI = 
{
	"IndexOf", NULL, &t4275_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4275_m25331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t4275_m25332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t4275_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25332_MI = 
{
	"Insert", NULL, &t4275_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4275_m25332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4275_m25333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4275_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25333_MI = 
{
	"RemoveAt", NULL, &t4275_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4275_m25333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4275_m25329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4275_TI;
extern Il2CppType t286_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25329_MI = 
{
	"get_Item", NULL, &t4275_TI, &t286_0_0_0, RuntimeInvoker_t28_t47, t4275_m25329_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t4275_m25330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t4275_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25330_MI = 
{
	"set_Item", NULL, &t4275_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4275_m25330_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4275_MIs[] =
{
	&m25331_MI,
	&m25332_MI,
	&m25333_MI,
	&m25329_MI,
	&m25330_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4274_TI;
extern TypeInfo t4276_TI;
static TypeInfo* t4275_ITIs[] = 
{
	&t611_TI,
	&t4274_TI,
	&t4276_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4275_0_0_0;
extern Il2CppType t4275_1_0_0;
struct t4275;
extern TypeInfo t4275_TI;
extern Il2CppGenericClass t4275_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4275_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4275_MIs, t4275_PIs, NULL, NULL, NULL, NULL, NULL, &t4275_TI, t4275_ITIs, NULL, &t1418__CustomAttributeCache, &t4275_TI, &t4275_0_0_0, &t4275_1_0_0, NULL, &t4275_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4277_TI;

#include "t287.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern MethodInfo m25334_MI;
static PropertyInfo t4277____Count_PropertyInfo = 
{
	&t4277_TI, "Count", &m25334_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25335_MI;
static PropertyInfo t4277____IsReadOnly_PropertyInfo = 
{
	&t4277_TI, "IsReadOnly", &m25335_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4277_PIs[] =
{
	&t4277____Count_PropertyInfo,
	&t4277____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4277_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25334_MI = 
{
	"get_Count", NULL, &t4277_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4277_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25335_MI = 
{
	"get_IsReadOnly", NULL, &t4277_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t287_0_0_0;
static ParameterInfo t4277_m25336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t4277_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25336_MI = 
{
	"Add", NULL, &t4277_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4277_m25336_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4277_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25337_MI = 
{
	"Clear", NULL, &t4277_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t287_0_0_0;
static ParameterInfo t4277_m25338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t4277_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25338_MI = 
{
	"Contains", NULL, &t4277_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4277_m25338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3308_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4277_m25339_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3308_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4277_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25339_MI = 
{
	"CopyTo", NULL, &t4277_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4277_m25339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t287_0_0_0;
static ParameterInfo t4277_m25340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t4277_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25340_MI = 
{
	"Remove", NULL, &t4277_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4277_m25340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4277_MIs[] =
{
	&m25334_MI,
	&m25335_MI,
	&m25336_MI,
	&m25337_MI,
	&m25338_MI,
	&m25339_MI,
	&m25340_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4279_TI;
static TypeInfo* t4277_ITIs[] = 
{
	&t611_TI,
	&t4279_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4277_0_0_0;
extern Il2CppType t4277_1_0_0;
struct t4277;
extern TypeInfo t4277_TI;
extern Il2CppGenericClass t4277_GC;
TypeInfo t4277_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4277_MIs, t4277_PIs, NULL, NULL, NULL, NULL, NULL, &t4277_TI, t4277_ITIs, NULL, &EmptyCustomAttributesCache, &t4277_TI, &t4277_0_0_0, &t4277_1_0_0, NULL, &t4277_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4279_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern TypeInfo t4279_TI;
extern Il2CppType t3498_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25341_MI = 
{
	"GetEnumerator", NULL, &t4279_TI, &t3498_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4279_MIs[] =
{
	&m25341_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4279_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4279_0_0_0;
extern Il2CppType t4279_1_0_0;
struct t4279;
extern TypeInfo t4279_TI;
extern Il2CppGenericClass t4279_GC;
TypeInfo t4279_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4279_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4279_TI, t4279_ITIs, NULL, &EmptyCustomAttributesCache, &t4279_TI, &t4279_0_0_0, &t4279_1_0_0, NULL, &t4279_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3498_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern MethodInfo m25342_MI;
static PropertyInfo t3498____Current_PropertyInfo = 
{
	&t3498_TI, "Current", &m25342_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3498_PIs[] =
{
	&t3498____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3498_TI;
extern Il2CppType t287_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25342_MI = 
{
	"get_Current", NULL, &t3498_TI, &t287_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3498_MIs[] =
{
	&m25342_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3498_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3498_0_0_0;
extern Il2CppType t3498_1_0_0;
struct t3498;
extern TypeInfo t3498_TI;
extern Il2CppGenericClass t3498_GC;
TypeInfo t3498_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3498_MIs, t3498_PIs, NULL, NULL, NULL, NULL, NULL, &t3498_TI, t3498_ITIs, NULL, &EmptyCustomAttributesCache, &t3498_TI, &t3498_0_0_0, &t3498_1_0_0, NULL, &t3498_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2271.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2271_TI;
#include "t2271MD.h"

extern TypeInfo t2271_TI;
extern TypeInfo t287_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12836_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18971_MI;
struct t29;
#define m18971(__this, p0, method) (t287 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18971_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern Il2CppType t29_0_0_1;
FieldInfo t2271_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2271_TI, offsetof(t2271, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2271_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2271_TI, offsetof(t2271, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2271_FIs[] =
{
	&t2271_f0_FieldInfo,
	&t2271_f1_FieldInfo,
	NULL
};
extern MethodInfo m12833_MI;
static PropertyInfo t2271____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2271_TI, "System.Collections.IEnumerator.Current", &m12833_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12836_MI;
static PropertyInfo t2271____Current_PropertyInfo = 
{
	&t2271_TI, "Current", &m12836_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2271_PIs[] =
{
	&t2271____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2271____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2271_m12832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2271_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12832_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2271_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2271_m12832_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2271_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12833_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2271_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2271_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12834_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2271_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2271_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12835_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2271_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2271_TI;
extern Il2CppType t287_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12836_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2271_TI, &t287_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2271_MIs[] =
{
	&m12832_MI,
	&m12833_MI,
	&m12834_MI,
	&m12835_MI,
	&m12836_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12833_MI;
extern MethodInfo m12835_MI;
extern MethodInfo m12834_MI;
extern MethodInfo m12836_MI;
static MethodInfo* t2271_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12833_MI,
	&m12835_MI,
	&m12834_MI,
	&m12836_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3498_TI;
static TypeInfo* t2271_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3498_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3498_TI;
static Il2CppInterfaceOffsetPair t2271_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3498_TI, 7},
};
extern MethodInfo m12836_MI;
extern TypeInfo t287_TI;
extern MethodInfo m18971_MI;
static void* t2271_RGCTXData[3] = 
{
	&m12836_MI,
	&t287_TI,
	&m18971_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2271_0_0_0;
extern Il2CppType t2271_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2271_TI;
extern Il2CppGenericClass t2271_GC;
extern TypeInfo t29_TI;
TypeInfo t2271_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2271_MIs, t2271_PIs, t2271_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2271_TI, t2271_ITIs, t2271_VT, &EmptyCustomAttributesCache, &t2271_TI, &t2271_0_0_0, &t2271_1_0_0, t2271_IOs, &t2271_GC, NULL, NULL, NULL, t2271_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2271)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4278_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern MethodInfo m25343_MI;
extern MethodInfo m25344_MI;
static PropertyInfo t4278____Item_PropertyInfo = 
{
	&t4278_TI, "Item", &m25343_MI, &m25344_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4278_PIs[] =
{
	&t4278____Item_PropertyInfo,
	NULL
};
extern Il2CppType t287_0_0_0;
static ParameterInfo t4278_m25345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t4278_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25345_MI = 
{
	"IndexOf", NULL, &t4278_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4278_m25345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t287_0_0_0;
static ParameterInfo t4278_m25346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t4278_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25346_MI = 
{
	"Insert", NULL, &t4278_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4278_m25346_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4278_m25347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4278_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25347_MI = 
{
	"RemoveAt", NULL, &t4278_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4278_m25347_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4278_m25343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4278_TI;
extern Il2CppType t287_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25343_MI = 
{
	"get_Item", NULL, &t4278_TI, &t287_0_0_0, RuntimeInvoker_t28_t47, t4278_m25343_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t287_0_0_0;
static ParameterInfo t4278_m25344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t4278_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25344_MI = 
{
	"set_Item", NULL, &t4278_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4278_m25344_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4278_MIs[] =
{
	&m25345_MI,
	&m25346_MI,
	&m25347_MI,
	&m25343_MI,
	&m25344_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4277_TI;
extern TypeInfo t4279_TI;
static TypeInfo* t4278_ITIs[] = 
{
	&t611_TI,
	&t4277_TI,
	&t4279_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4278_0_0_0;
extern Il2CppType t4278_1_0_0;
struct t4278;
extern TypeInfo t4278_TI;
extern Il2CppGenericClass t4278_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4278_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4278_MIs, t4278_PIs, NULL, NULL, NULL, NULL, NULL, &t4278_TI, t4278_ITIs, NULL, &t1418__CustomAttributeCache, &t4278_TI, &t4278_0_0_0, &t4278_1_0_0, NULL, &t4278_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2272.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2272_TI;
#include "t2272MD.h"

#include "t43.h"
#include "t565.h"
#include "mscorlib_ArrayTypes.h"
#include "t2273.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2272_TI;
extern TypeInfo t286_TI;
extern TypeInfo t2273_TI;
extern TypeInfo t30_TI;
#include "t2273MD.h"
extern MethodInfo m12839_MI;
extern MethodInfo m12841_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.HorizontalLayoutGroup>
extern Il2CppType t333_0_0_33;
FieldInfo t2272_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2272_TI, offsetof(t2272, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2272_FIs[] =
{
	&t2272_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t286_0_0_0;
static ParameterInfo t2272_m12837_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2272_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12837_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2272_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2272_m12837_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2272_m12838_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2272_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12838_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2272_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2272_m12838_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2272_MIs[] =
{
	&m12837_MI,
	&m12838_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12838_MI;
extern MethodInfo m12842_MI;
static MethodInfo* t2272_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12838_MI,
	&m12842_MI,
};
extern Il2CppType t2274_0_0_0;
extern TypeInfo t2274_TI;
extern MethodInfo m18981_MI;
extern TypeInfo t286_TI;
extern MethodInfo m12844_MI;
extern MethodInfo m12839_MI;
extern TypeInfo t286_TI;
extern MethodInfo m12841_MI;
static void* t2272_RGCTXData[8] = 
{
	(void*)&t2274_0_0_0,
	&t2274_TI,
	&m18981_MI,
	&t286_TI,
	&m12844_MI,
	&m12839_MI,
	&t286_TI,
	&m12841_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2272_0_0_0;
extern Il2CppType t2272_1_0_0;
extern TypeInfo t2273_TI;
struct t2272;
extern TypeInfo t2272_TI;
extern Il2CppGenericClass t2272_GC;
TypeInfo t2272_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2272_MIs, NULL, t2272_FIs, NULL, &t2273_TI, NULL, NULL, &t2272_TI, NULL, t2272_VT, &EmptyCustomAttributesCache, &t2272_TI, &t2272_0_0_0, &t2272_1_0_0, NULL, &t2272_GC, NULL, NULL, NULL, t2272_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2272), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2273_TI;

#include "t2274.h"
#include "t36.h"
#include "t37.h"
#include "t365.h"
#include "t331.h"
extern TypeInfo t2273_TI;
extern TypeInfo t2274_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t286_TI;
extern TypeInfo t30_TI;
#include "t564MD.h"
#include "t36MD.h"
#include "t365MD.h"
#include "t331MD.h"
#include "t2274MD.h"
extern Il2CppType t2274_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m18981_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m12844_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#include "t564.h"
struct t564;
 void m16708_gshared (t28 * __this, t28 * p0, MethodInfo* method);
#define m16708(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
#define m18981(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m18981_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.HorizontalLayoutGroup>
extern Il2CppType t2274_0_0_1;
FieldInfo t2273_f0_FieldInfo = 
{
	"Delegate", &t2274_0_0_1, &t2273_TI, offsetof(t2273, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2273_FIs[] =
{
	&t2273_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2273_m12839_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2273_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12839_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2273_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2273_m12839_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2274_0_0_0;
static ParameterInfo t2273_m12840_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2274_0_0_0},
};
extern TypeInfo t2273_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12840_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2273_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2273_m12840_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2273_m12841_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2273_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12841_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2273_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2273_m12841_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2273_m12842_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2273_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12842_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2273_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2273_m12842_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2273_MIs[] =
{
	&m12839_MI,
	&m12840_MI,
	&m12841_MI,
	&m12842_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12841_MI;
extern MethodInfo m12842_MI;
static MethodInfo* t2273_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12841_MI,
	&m12842_MI,
};
extern Il2CppType t2274_0_0_0;
extern TypeInfo t2274_TI;
extern MethodInfo m18981_MI;
extern TypeInfo t286_TI;
extern MethodInfo m12844_MI;
static void* t2273_RGCTXData[5] = 
{
	(void*)&t2274_0_0_0,
	&t2274_TI,
	&m18981_MI,
	&t286_TI,
	&m12844_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2273_0_0_0;
extern Il2CppType t2273_1_0_0;
extern TypeInfo t564_TI;
struct t2273;
extern TypeInfo t2273_TI;
extern Il2CppGenericClass t2273_GC;
TypeInfo t2273_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2273_MIs, NULL, t2273_FIs, NULL, &t564_TI, NULL, NULL, &t2273_TI, NULL, t2273_VT, &EmptyCustomAttributesCache, &t2273_TI, &t2273_0_0_0, &t2273_1_0_0, NULL, &t2273_GC, NULL, NULL, NULL, t2273_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2273), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2274_TI;

#include "t49.h"
#include "t91.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.HorizontalLayoutGroup>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2274_m12843_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2274_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m12843_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2274_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2274_m12843_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
static ParameterInfo t2274_m12844_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
};
extern TypeInfo t2274_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12844_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2274_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2274_m12844_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t286_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2274_m12845_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t286_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2274_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12845_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2274_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2274_m12845_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2274_m12846_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2274_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12846_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2274_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2274_m12846_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2274_MIs[] =
{
	&m12843_MI,
	&m12844_MI,
	&m12845_MI,
	&m12846_MI,
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
extern MethodInfo m12844_MI;
extern MethodInfo m12845_MI;
extern MethodInfo m12846_MI;
static MethodInfo* t2274_VT[] =
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
	&m12844_MI,
	&m12845_MI,
	&m12846_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2274_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2274_0_0_0;
extern Il2CppType t2274_1_0_0;
extern TypeInfo t221_TI;
struct t2274;
extern TypeInfo t2274_TI;
extern Il2CppGenericClass t2274_GC;
TypeInfo t2274_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2274_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2274_TI, NULL, t2274_VT, &EmptyCustomAttributesCache, &t2274_TI, &t2274_0_0_0, &t2274_1_0_0, t2274_IOs, &t2274_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2274), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2275.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2275_TI;
#include "t2275MD.h"

#include "t2276.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2275_TI;
extern TypeInfo t287_TI;
extern TypeInfo t2276_TI;
extern TypeInfo t30_TI;
#include "t2276MD.h"
extern MethodInfo m12849_MI;
extern MethodInfo m12851_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern Il2CppType t333_0_0_33;
FieldInfo t2275_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2275_TI, offsetof(t2275, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2275_FIs[] =
{
	&t2275_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t287_0_0_0;
static ParameterInfo t2275_m12847_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t2275_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12847_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2275_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2275_m12847_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2275_m12848_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2275_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12848_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2275_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2275_m12848_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2275_MIs[] =
{
	&m12847_MI,
	&m12848_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12848_MI;
extern MethodInfo m12852_MI;
static MethodInfo* t2275_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12848_MI,
	&m12852_MI,
};
extern Il2CppType t2277_0_0_0;
extern TypeInfo t2277_TI;
extern MethodInfo m18982_MI;
extern TypeInfo t287_TI;
extern MethodInfo m12854_MI;
extern MethodInfo m12849_MI;
extern TypeInfo t287_TI;
extern MethodInfo m12851_MI;
static void* t2275_RGCTXData[8] = 
{
	(void*)&t2277_0_0_0,
	&t2277_TI,
	&m18982_MI,
	&t287_TI,
	&m12854_MI,
	&m12849_MI,
	&t287_TI,
	&m12851_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2275_0_0_0;
extern Il2CppType t2275_1_0_0;
extern TypeInfo t2276_TI;
struct t2275;
extern TypeInfo t2275_TI;
extern Il2CppGenericClass t2275_GC;
TypeInfo t2275_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2275_MIs, NULL, t2275_FIs, NULL, &t2276_TI, NULL, NULL, &t2275_TI, NULL, t2275_VT, &EmptyCustomAttributesCache, &t2275_TI, &t2275_0_0_0, &t2275_1_0_0, NULL, &t2275_GC, NULL, NULL, NULL, t2275_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2275), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2276_TI;

#include "t2277.h"
extern TypeInfo t2276_TI;
extern TypeInfo t2277_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t287_TI;
extern TypeInfo t30_TI;
#include "t2277MD.h"
extern Il2CppType t2277_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m18982_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m12854_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#define m18982(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m18982_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern Il2CppType t2277_0_0_1;
FieldInfo t2276_f0_FieldInfo = 
{
	"Delegate", &t2277_0_0_1, &t2276_TI, offsetof(t2276, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2276_FIs[] =
{
	&t2276_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2276_m12849_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2276_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12849_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2276_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2276_m12849_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2277_0_0_0;
static ParameterInfo t2276_m12850_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2277_0_0_0},
};
extern TypeInfo t2276_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12850_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2276_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2276_m12850_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2276_m12851_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2276_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12851_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2276_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2276_m12851_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2276_m12852_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2276_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12852_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2276_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2276_m12852_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2276_MIs[] =
{
	&m12849_MI,
	&m12850_MI,
	&m12851_MI,
	&m12852_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12851_MI;
extern MethodInfo m12852_MI;
static MethodInfo* t2276_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12851_MI,
	&m12852_MI,
};
extern Il2CppType t2277_0_0_0;
extern TypeInfo t2277_TI;
extern MethodInfo m18982_MI;
extern TypeInfo t287_TI;
extern MethodInfo m12854_MI;
static void* t2276_RGCTXData[5] = 
{
	(void*)&t2277_0_0_0,
	&t2277_TI,
	&m18982_MI,
	&t287_TI,
	&m12854_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2276_0_0_0;
extern Il2CppType t2276_1_0_0;
extern TypeInfo t564_TI;
struct t2276;
extern TypeInfo t2276_TI;
extern Il2CppGenericClass t2276_GC;
TypeInfo t2276_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2276_MIs, NULL, t2276_FIs, NULL, &t564_TI, NULL, NULL, &t2276_TI, NULL, t2276_VT, &EmptyCustomAttributesCache, &t2276_TI, &t2276_0_0_0, &t2276_1_0_0, NULL, &t2276_GC, NULL, NULL, NULL, t2276_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2276), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2277_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.HorizontalOrVerticalLayoutGroup>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2277_m12853_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2277_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m12853_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2277_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2277_m12853_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t287_0_0_0;
static ParameterInfo t2277_m12854_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
};
extern TypeInfo t2277_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12854_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2277_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2277_m12854_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t287_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2277_m12855_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t287_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2277_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12855_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2277_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2277_m12855_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2277_m12856_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2277_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12856_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2277_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2277_m12856_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2277_MIs[] =
{
	&m12853_MI,
	&m12854_MI,
	&m12855_MI,
	&m12856_MI,
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
extern MethodInfo m12854_MI;
extern MethodInfo m12855_MI;
extern MethodInfo m12856_MI;
static MethodInfo* t2277_VT[] =
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
	&m12854_MI,
	&m12855_MI,
	&m12856_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2277_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2277_0_0_0;
extern Il2CppType t2277_1_0_0;
extern TypeInfo t221_TI;
struct t2277;
extern TypeInfo t2277_TI;
extern Il2CppGenericClass t2277_GC;
TypeInfo t2277_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2277_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2277_TI, NULL, t2277_VT, &EmptyCustomAttributesCache, &t2277_TI, &t2277_0_0_0, &t2277_1_0_0, t2277_IOs, &t2277_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2277), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3499_TI;

#include "t288.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.LayoutElement>
extern MethodInfo m25348_MI;
static PropertyInfo t3499____Current_PropertyInfo = 
{
	&t3499_TI, "Current", &m25348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3499_PIs[] =
{
	&t3499____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3499_TI;
extern Il2CppType t288_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25348_MI = 
{
	"get_Current", NULL, &t3499_TI, &t288_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3499_MIs[] =
{
	&m25348_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3499_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3499_0_0_0;
extern Il2CppType t3499_1_0_0;
struct t3499;
extern TypeInfo t3499_TI;
extern Il2CppGenericClass t3499_GC;
TypeInfo t3499_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3499_MIs, t3499_PIs, NULL, NULL, NULL, NULL, NULL, &t3499_TI, t3499_ITIs, NULL, &EmptyCustomAttributesCache, &t3499_TI, &t3499_0_0_0, &t3499_1_0_0, NULL, &t3499_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2278.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2278_TI;
#include "t2278MD.h"

extern TypeInfo t2278_TI;
extern TypeInfo t288_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12861_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18984_MI;
struct t29;
#define m18984(__this, p0, method) (t288 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18984_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.LayoutElement>
extern Il2CppType t29_0_0_1;
FieldInfo t2278_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2278_TI, offsetof(t2278, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2278_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2278_TI, offsetof(t2278, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2278_FIs[] =
{
	&t2278_f0_FieldInfo,
	&t2278_f1_FieldInfo,
	NULL
};
extern MethodInfo m12858_MI;
static PropertyInfo t2278____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2278_TI, "System.Collections.IEnumerator.Current", &m12858_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12861_MI;
static PropertyInfo t2278____Current_PropertyInfo = 
{
	&t2278_TI, "Current", &m12861_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2278_PIs[] =
{
	&t2278____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2278____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2278_m12857_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2278_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12857_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2278_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2278_m12857_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2278_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12858_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2278_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2278_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12859_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2278_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2278_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12860_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2278_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2278_TI;
extern Il2CppType t288_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12861_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2278_TI, &t288_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2278_MIs[] =
{
	&m12857_MI,
	&m12858_MI,
	&m12859_MI,
	&m12860_MI,
	&m12861_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12858_MI;
extern MethodInfo m12860_MI;
extern MethodInfo m12859_MI;
extern MethodInfo m12861_MI;
static MethodInfo* t2278_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12858_MI,
	&m12860_MI,
	&m12859_MI,
	&m12861_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3499_TI;
static TypeInfo* t2278_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3499_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3499_TI;
static Il2CppInterfaceOffsetPair t2278_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3499_TI, 7},
};
extern MethodInfo m12861_MI;
extern TypeInfo t288_TI;
extern MethodInfo m18984_MI;
static void* t2278_RGCTXData[3] = 
{
	&m12861_MI,
	&t288_TI,
	&m18984_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2278_0_0_0;
extern Il2CppType t2278_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2278_TI;
extern Il2CppGenericClass t2278_GC;
extern TypeInfo t29_TI;
TypeInfo t2278_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2278_MIs, t2278_PIs, t2278_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2278_TI, t2278_ITIs, t2278_VT, &EmptyCustomAttributesCache, &t2278_TI, &t2278_0_0_0, &t2278_1_0_0, t2278_IOs, &t2278_GC, NULL, NULL, NULL, t2278_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2278)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4280_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.LayoutElement>
extern MethodInfo m25349_MI;
static PropertyInfo t4280____Count_PropertyInfo = 
{
	&t4280_TI, "Count", &m25349_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25350_MI;
static PropertyInfo t4280____IsReadOnly_PropertyInfo = 
{
	&t4280_TI, "IsReadOnly", &m25350_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4280_PIs[] =
{
	&t4280____Count_PropertyInfo,
	&t4280____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4280_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25349_MI = 
{
	"get_Count", NULL, &t4280_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4280_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25350_MI = 
{
	"get_IsReadOnly", NULL, &t4280_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t4280_m25351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4280_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25351_MI = 
{
	"Add", NULL, &t4280_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4280_m25351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4280_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25352_MI = 
{
	"Clear", NULL, &t4280_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t4280_m25353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4280_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25353_MI = 
{
	"Contains", NULL, &t4280_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4280_m25353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3309_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4280_m25354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3309_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4280_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25354_MI = 
{
	"CopyTo", NULL, &t4280_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4280_m25354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t4280_m25355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4280_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25355_MI = 
{
	"Remove", NULL, &t4280_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4280_m25355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4280_MIs[] =
{
	&m25349_MI,
	&m25350_MI,
	&m25351_MI,
	&m25352_MI,
	&m25353_MI,
	&m25354_MI,
	&m25355_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4282_TI;
static TypeInfo* t4280_ITIs[] = 
{
	&t611_TI,
	&t4282_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4280_0_0_0;
extern Il2CppType t4280_1_0_0;
struct t4280;
extern TypeInfo t4280_TI;
extern Il2CppGenericClass t4280_GC;
TypeInfo t4280_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4280_MIs, t4280_PIs, NULL, NULL, NULL, NULL, NULL, &t4280_TI, t4280_ITIs, NULL, &EmptyCustomAttributesCache, &t4280_TI, &t4280_0_0_0, &t4280_1_0_0, NULL, &t4280_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4282_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.LayoutElement>
extern TypeInfo t4282_TI;
extern Il2CppType t3499_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25356_MI = 
{
	"GetEnumerator", NULL, &t4282_TI, &t3499_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4282_MIs[] =
{
	&m25356_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4282_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4282_0_0_0;
extern Il2CppType t4282_1_0_0;
struct t4282;
extern TypeInfo t4282_TI;
extern Il2CppGenericClass t4282_GC;
TypeInfo t4282_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4282_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4282_TI, t4282_ITIs, NULL, &EmptyCustomAttributesCache, &t4282_TI, &t4282_0_0_0, &t4282_1_0_0, NULL, &t4282_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4281_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.LayoutElement>
extern MethodInfo m25357_MI;
extern MethodInfo m25358_MI;
static PropertyInfo t4281____Item_PropertyInfo = 
{
	&t4281_TI, "Item", &m25357_MI, &m25358_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4281_PIs[] =
{
	&t4281____Item_PropertyInfo,
	NULL
};
extern Il2CppType t288_0_0_0;
static ParameterInfo t4281_m25359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4281_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25359_MI = 
{
	"IndexOf", NULL, &t4281_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4281_m25359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t4281_m25360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4281_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25360_MI = 
{
	"Insert", NULL, &t4281_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4281_m25360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4281_m25361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4281_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25361_MI = 
{
	"RemoveAt", NULL, &t4281_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4281_m25361_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4281_m25357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4281_TI;
extern Il2CppType t288_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25357_MI = 
{
	"get_Item", NULL, &t4281_TI, &t288_0_0_0, RuntimeInvoker_t28_t47, t4281_m25357_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t4281_m25358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t4281_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25358_MI = 
{
	"set_Item", NULL, &t4281_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4281_m25358_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4281_MIs[] =
{
	&m25359_MI,
	&m25360_MI,
	&m25361_MI,
	&m25357_MI,
	&m25358_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4280_TI;
extern TypeInfo t4282_TI;
static TypeInfo* t4281_ITIs[] = 
{
	&t611_TI,
	&t4280_TI,
	&t4282_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4281_0_0_0;
extern Il2CppType t4281_1_0_0;
struct t4281;
extern TypeInfo t4281_TI;
extern Il2CppGenericClass t4281_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4281_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4281_MIs, t4281_PIs, NULL, NULL, NULL, NULL, NULL, &t4281_TI, t4281_ITIs, NULL, &t1418__CustomAttributeCache, &t4281_TI, &t4281_0_0_0, &t4281_1_0_0, NULL, &t4281_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4283_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutIgnorer>
extern MethodInfo m25362_MI;
static PropertyInfo t4283____Count_PropertyInfo = 
{
	&t4283_TI, "Count", &m25362_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25363_MI;
static PropertyInfo t4283____IsReadOnly_PropertyInfo = 
{
	&t4283_TI, "IsReadOnly", &m25363_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4283_PIs[] =
{
	&t4283____Count_PropertyInfo,
	&t4283____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4283_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25362_MI = 
{
	"get_Count", NULL, &t4283_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4283_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25363_MI = 
{
	"get_IsReadOnly", NULL, &t4283_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t422_0_0_0;
static ParameterInfo t4283_m25364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t422_0_0_0},
};
extern TypeInfo t4283_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25364_MI = 
{
	"Add", NULL, &t4283_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4283_m25364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4283_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25365_MI = 
{
	"Clear", NULL, &t4283_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t422_0_0_0;
static ParameterInfo t4283_m25366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t422_0_0_0},
};
extern TypeInfo t4283_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25366_MI = 
{
	"Contains", NULL, &t4283_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4283_m25366_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3310_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4283_m25367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3310_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4283_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25367_MI = 
{
	"CopyTo", NULL, &t4283_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4283_m25367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t422_0_0_0;
static ParameterInfo t4283_m25368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t422_0_0_0},
};
extern TypeInfo t4283_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25368_MI = 
{
	"Remove", NULL, &t4283_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4283_m25368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4283_MIs[] =
{
	&m25362_MI,
	&m25363_MI,
	&m25364_MI,
	&m25365_MI,
	&m25366_MI,
	&m25367_MI,
	&m25368_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4285_TI;
static TypeInfo* t4283_ITIs[] = 
{
	&t611_TI,
	&t4285_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4283_0_0_0;
extern Il2CppType t4283_1_0_0;
struct t4283;
extern TypeInfo t4283_TI;
extern Il2CppGenericClass t4283_GC;
TypeInfo t4283_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4283_MIs, t4283_PIs, NULL, NULL, NULL, NULL, NULL, &t4283_TI, t4283_ITIs, NULL, &EmptyCustomAttributesCache, &t4283_TI, &t4283_0_0_0, &t4283_1_0_0, NULL, &t4283_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4285_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutIgnorer>
extern TypeInfo t4285_TI;
extern Il2CppType t3500_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25369_MI = 
{
	"GetEnumerator", NULL, &t4285_TI, &t3500_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4285_MIs[] =
{
	&m25369_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4285_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4285_0_0_0;
extern Il2CppType t4285_1_0_0;
struct t4285;
extern TypeInfo t4285_TI;
extern Il2CppGenericClass t4285_GC;
TypeInfo t4285_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4285_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4285_TI, t4285_ITIs, NULL, &EmptyCustomAttributesCache, &t4285_TI, &t4285_0_0_0, &t4285_1_0_0, NULL, &t4285_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3500_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutIgnorer>
extern MethodInfo m25370_MI;
static PropertyInfo t3500____Current_PropertyInfo = 
{
	&t3500_TI, "Current", &m25370_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3500_PIs[] =
{
	&t3500____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3500_TI;
extern Il2CppType t422_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25370_MI = 
{
	"get_Current", NULL, &t3500_TI, &t422_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3500_MIs[] =
{
	&m25370_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3500_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3500_0_0_0;
extern Il2CppType t3500_1_0_0;
struct t3500;
extern TypeInfo t3500_TI;
extern Il2CppGenericClass t3500_GC;
TypeInfo t3500_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3500_MIs, t3500_PIs, NULL, NULL, NULL, NULL, NULL, &t3500_TI, t3500_ITIs, NULL, &EmptyCustomAttributesCache, &t3500_TI, &t3500_0_0_0, &t3500_1_0_0, NULL, &t3500_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2279.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2279_TI;
#include "t2279MD.h"

extern TypeInfo t2279_TI;
extern TypeInfo t422_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12866_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18995_MI;
struct t29;
#define m18995(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18995_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutIgnorer>
extern Il2CppType t29_0_0_1;
FieldInfo t2279_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2279_TI, offsetof(t2279, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2279_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2279_TI, offsetof(t2279, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2279_FIs[] =
{
	&t2279_f0_FieldInfo,
	&t2279_f1_FieldInfo,
	NULL
};
extern MethodInfo m12863_MI;
static PropertyInfo t2279____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2279_TI, "System.Collections.IEnumerator.Current", &m12863_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12866_MI;
static PropertyInfo t2279____Current_PropertyInfo = 
{
	&t2279_TI, "Current", &m12866_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2279_PIs[] =
{
	&t2279____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2279____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2279_m12862_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2279_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12862_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2279_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2279_m12862_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2279_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12863_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2279_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2279_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12864_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2279_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2279_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12865_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2279_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2279_TI;
extern Il2CppType t422_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12866_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2279_TI, &t422_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2279_MIs[] =
{
	&m12862_MI,
	&m12863_MI,
	&m12864_MI,
	&m12865_MI,
	&m12866_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12863_MI;
extern MethodInfo m12865_MI;
extern MethodInfo m12864_MI;
extern MethodInfo m12866_MI;
static MethodInfo* t2279_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12863_MI,
	&m12865_MI,
	&m12864_MI,
	&m12866_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3500_TI;
static TypeInfo* t2279_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3500_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3500_TI;
static Il2CppInterfaceOffsetPair t2279_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3500_TI, 7},
};
extern MethodInfo m12866_MI;
extern TypeInfo t422_TI;
extern MethodInfo m18995_MI;
static void* t2279_RGCTXData[3] = 
{
	&m12866_MI,
	&t422_TI,
	&m18995_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2279_0_0_0;
extern Il2CppType t2279_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2279_TI;
extern Il2CppGenericClass t2279_GC;
extern TypeInfo t29_TI;
TypeInfo t2279_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2279_MIs, t2279_PIs, t2279_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2279_TI, t2279_ITIs, t2279_VT, &EmptyCustomAttributesCache, &t2279_TI, &t2279_0_0_0, &t2279_1_0_0, t2279_IOs, &t2279_GC, NULL, NULL, NULL, t2279_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2279)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4284_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutIgnorer>
extern MethodInfo m25371_MI;
extern MethodInfo m25372_MI;
static PropertyInfo t4284____Item_PropertyInfo = 
{
	&t4284_TI, "Item", &m25371_MI, &m25372_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4284_PIs[] =
{
	&t4284____Item_PropertyInfo,
	NULL
};
extern Il2CppType t422_0_0_0;
static ParameterInfo t4284_m25373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t422_0_0_0},
};
extern TypeInfo t4284_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25373_MI = 
{
	"IndexOf", NULL, &t4284_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4284_m25373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t422_0_0_0;
static ParameterInfo t4284_m25374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t422_0_0_0},
};
extern TypeInfo t4284_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25374_MI = 
{
	"Insert", NULL, &t4284_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4284_m25374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4284_m25375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4284_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25375_MI = 
{
	"RemoveAt", NULL, &t4284_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4284_m25375_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4284_m25371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4284_TI;
extern Il2CppType t422_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25371_MI = 
{
	"get_Item", NULL, &t4284_TI, &t422_0_0_0, RuntimeInvoker_t28_t47, t4284_m25371_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t422_0_0_0;
static ParameterInfo t4284_m25372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t422_0_0_0},
};
extern TypeInfo t4284_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25372_MI = 
{
	"set_Item", NULL, &t4284_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4284_m25372_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4284_MIs[] =
{
	&m25373_MI,
	&m25374_MI,
	&m25375_MI,
	&m25371_MI,
	&m25372_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4283_TI;
extern TypeInfo t4285_TI;
static TypeInfo* t4284_ITIs[] = 
{
	&t611_TI,
	&t4283_TI,
	&t4285_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4284_0_0_0;
extern Il2CppType t4284_1_0_0;
struct t4284;
extern TypeInfo t4284_TI;
extern Il2CppGenericClass t4284_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4284_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4284_MIs, t4284_PIs, NULL, NULL, NULL, NULL, NULL, &t4284_TI, t4284_ITIs, NULL, &t1418__CustomAttributeCache, &t4284_TI, &t4284_0_0_0, &t4284_1_0_0, NULL, &t4284_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2280.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2280_TI;
#include "t2280MD.h"

#include "t2281.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2280_TI;
extern TypeInfo t288_TI;
extern TypeInfo t2281_TI;
extern TypeInfo t30_TI;
#include "t2281MD.h"
extern MethodInfo m12869_MI;
extern MethodInfo m12871_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.LayoutElement>
extern Il2CppType t333_0_0_33;
FieldInfo t2280_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2280_TI, offsetof(t2280, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2280_FIs[] =
{
	&t2280_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t288_0_0_0;
static ParameterInfo t2280_m12867_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t2280_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12867_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2280_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2280_m12867_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2280_m12868_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2280_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12868_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2280_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2280_m12868_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2280_MIs[] =
{
	&m12867_MI,
	&m12868_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12868_MI;
extern MethodInfo m12872_MI;
static MethodInfo* t2280_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12868_MI,
	&m12872_MI,
};
extern Il2CppType t2282_0_0_0;
extern TypeInfo t2282_TI;
extern MethodInfo m19005_MI;
extern TypeInfo t288_TI;
extern MethodInfo m12874_MI;
extern MethodInfo m12869_MI;
extern TypeInfo t288_TI;
extern MethodInfo m12871_MI;
static void* t2280_RGCTXData[8] = 
{
	(void*)&t2282_0_0_0,
	&t2282_TI,
	&m19005_MI,
	&t288_TI,
	&m12874_MI,
	&m12869_MI,
	&t288_TI,
	&m12871_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2280_0_0_0;
extern Il2CppType t2280_1_0_0;
extern TypeInfo t2281_TI;
struct t2280;
extern TypeInfo t2280_TI;
extern Il2CppGenericClass t2280_GC;
TypeInfo t2280_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2280_MIs, NULL, t2280_FIs, NULL, &t2281_TI, NULL, NULL, &t2280_TI, NULL, t2280_VT, &EmptyCustomAttributesCache, &t2280_TI, &t2280_0_0_0, &t2280_1_0_0, NULL, &t2280_GC, NULL, NULL, NULL, t2280_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2280), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2281_TI;

#include "t2282.h"
extern TypeInfo t2281_TI;
extern TypeInfo t2282_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t288_TI;
extern TypeInfo t30_TI;
#include "t2282MD.h"
extern Il2CppType t2282_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m19005_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m12874_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#define m19005(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m19005_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.LayoutElement>
extern Il2CppType t2282_0_0_1;
FieldInfo t2281_f0_FieldInfo = 
{
	"Delegate", &t2282_0_0_1, &t2281_TI, offsetof(t2281, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2281_FIs[] =
{
	&t2281_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2281_m12869_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2281_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12869_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2281_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2281_m12869_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2282_0_0_0;
static ParameterInfo t2281_m12870_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2282_0_0_0},
};
extern TypeInfo t2281_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12870_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2281_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2281_m12870_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2281_m12871_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2281_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12871_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2281_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2281_m12871_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2281_m12872_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2281_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12872_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2281_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2281_m12872_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2281_MIs[] =
{
	&m12869_MI,
	&m12870_MI,
	&m12871_MI,
	&m12872_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12871_MI;
extern MethodInfo m12872_MI;
static MethodInfo* t2281_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12871_MI,
	&m12872_MI,
};
extern Il2CppType t2282_0_0_0;
extern TypeInfo t2282_TI;
extern MethodInfo m19005_MI;
extern TypeInfo t288_TI;
extern MethodInfo m12874_MI;
static void* t2281_RGCTXData[5] = 
{
	(void*)&t2282_0_0_0,
	&t2282_TI,
	&m19005_MI,
	&t288_TI,
	&m12874_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2281_0_0_0;
extern Il2CppType t2281_1_0_0;
extern TypeInfo t564_TI;
struct t2281;
extern TypeInfo t2281_TI;
extern Il2CppGenericClass t2281_GC;
TypeInfo t2281_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2281_MIs, NULL, t2281_FIs, NULL, &t564_TI, NULL, NULL, &t2281_TI, NULL, t2281_VT, &EmptyCustomAttributesCache, &t2281_TI, &t2281_0_0_0, &t2281_1_0_0, NULL, &t2281_GC, NULL, NULL, NULL, t2281_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2281), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2282_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.LayoutElement>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2282_m12873_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2282_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m12873_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2282_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2282_m12873_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
static ParameterInfo t2282_m12874_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
};
extern TypeInfo t2282_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12874_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2282_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2282_m12874_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t288_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2282_m12875_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t288_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2282_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12875_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2282_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2282_m12875_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2282_m12876_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2282_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12876_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2282_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2282_m12876_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2282_MIs[] =
{
	&m12873_MI,
	&m12874_MI,
	&m12875_MI,
	&m12876_MI,
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
extern MethodInfo m12874_MI;
extern MethodInfo m12875_MI;
extern MethodInfo m12876_MI;
static MethodInfo* t2282_VT[] =
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
	&m12874_MI,
	&m12875_MI,
	&m12876_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2282_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2282_0_0_0;
extern Il2CppType t2282_1_0_0;
extern TypeInfo t221_TI;
struct t2282;
extern TypeInfo t2282_TI;
extern Il2CppGenericClass t2282_GC;
TypeInfo t2282_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2282_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2282_TI, NULL, t2282_VT, &EmptyCustomAttributesCache, &t2282_TI, &t2282_0_0_0, &t2282_1_0_0, t2282_IOs, &t2282_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2282), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2283.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2283_TI;
#include "t2283MD.h"

#include "t285.h"
#include "t2284.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2283_TI;
extern TypeInfo t285_TI;
extern TypeInfo t2284_TI;
extern TypeInfo t30_TI;
#include "t2284MD.h"
extern MethodInfo m12879_MI;
extern MethodInfo m12881_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.LayoutGroup>
extern Il2CppType t333_0_0_33;
FieldInfo t2283_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2283_TI, offsetof(t2283, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2283_FIs[] =
{
	&t2283_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t285_0_0_0;
static ParameterInfo t2283_m12877_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t285_0_0_0},
};
extern TypeInfo t2283_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12877_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2283_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2283_m12877_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2283_m12878_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2283_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12878_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2283_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2283_m12878_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2283_MIs[] =
{
	&m12877_MI,
	&m12878_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12878_MI;
extern MethodInfo m12882_MI;
static MethodInfo* t2283_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12878_MI,
	&m12882_MI,
};
extern Il2CppType t2285_0_0_0;
extern TypeInfo t2285_TI;
extern MethodInfo m19006_MI;
extern TypeInfo t285_TI;
extern MethodInfo m12884_MI;
extern MethodInfo m12879_MI;
extern TypeInfo t285_TI;
extern MethodInfo m12881_MI;
static void* t2283_RGCTXData[8] = 
{
	(void*)&t2285_0_0_0,
	&t2285_TI,
	&m19006_MI,
	&t285_TI,
	&m12884_MI,
	&m12879_MI,
	&t285_TI,
	&m12881_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2283_0_0_0;
extern Il2CppType t2283_1_0_0;
extern TypeInfo t2284_TI;
struct t2283;
extern TypeInfo t2283_TI;
extern Il2CppGenericClass t2283_GC;
TypeInfo t2283_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2283_MIs, NULL, t2283_FIs, NULL, &t2284_TI, NULL, NULL, &t2283_TI, NULL, t2283_VT, &EmptyCustomAttributesCache, &t2283_TI, &t2283_0_0_0, &t2283_1_0_0, NULL, &t2283_GC, NULL, NULL, NULL, t2283_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2283), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2284_TI;

#include "t2285.h"
extern TypeInfo t2284_TI;
extern TypeInfo t2285_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t285_TI;
extern TypeInfo t30_TI;
#include "t2285MD.h"
extern Il2CppType t2285_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m19006_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m12884_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#define m19006(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m19006_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.LayoutGroup>
extern Il2CppType t2285_0_0_1;
FieldInfo t2284_f0_FieldInfo = 
{
	"Delegate", &t2285_0_0_1, &t2284_TI, offsetof(t2284, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2284_FIs[] =
{
	&t2284_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2284_m12879_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2284_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12879_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2284_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2284_m12879_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2285_0_0_0;
static ParameterInfo t2284_m12880_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2285_0_0_0},
};
extern TypeInfo t2284_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12880_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2284_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2284_m12880_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2284_m12881_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2284_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12881_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2284_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2284_m12881_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2284_m12882_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2284_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12882_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2284_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2284_m12882_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2284_MIs[] =
{
	&m12879_MI,
	&m12880_MI,
	&m12881_MI,
	&m12882_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12881_MI;
extern MethodInfo m12882_MI;
static MethodInfo* t2284_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12881_MI,
	&m12882_MI,
};
extern Il2CppType t2285_0_0_0;
extern TypeInfo t2285_TI;
extern MethodInfo m19006_MI;
extern TypeInfo t285_TI;
extern MethodInfo m12884_MI;
static void* t2284_RGCTXData[5] = 
{
	(void*)&t2285_0_0_0,
	&t2285_TI,
	&m19006_MI,
	&t285_TI,
	&m12884_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2284_0_0_0;
extern Il2CppType t2284_1_0_0;
extern TypeInfo t564_TI;
struct t2284;
extern TypeInfo t2284_TI;
extern Il2CppGenericClass t2284_GC;
TypeInfo t2284_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2284_MIs, NULL, t2284_FIs, NULL, &t564_TI, NULL, NULL, &t2284_TI, NULL, t2284_VT, &EmptyCustomAttributesCache, &t2284_TI, &t2284_0_0_0, &t2284_1_0_0, NULL, &t2284_GC, NULL, NULL, NULL, t2284_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2284), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2285_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.LayoutGroup>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2285_m12883_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2285_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m12883_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2285_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2285_m12883_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t285_0_0_0;
static ParameterInfo t2285_m12884_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t285_0_0_0},
};
extern TypeInfo t2285_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12884_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2285_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2285_m12884_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t285_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2285_m12885_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t285_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2285_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12885_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2285_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2285_m12885_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2285_m12886_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2285_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12886_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2285_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2285_m12886_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2285_MIs[] =
{
	&m12883_MI,
	&m12884_MI,
	&m12885_MI,
	&m12886_MI,
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
extern MethodInfo m12884_MI;
extern MethodInfo m12885_MI;
extern MethodInfo m12886_MI;
static MethodInfo* t2285_VT[] =
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
	&m12884_MI,
	&m12885_MI,
	&m12886_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2285_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2285_0_0_0;
extern Il2CppType t2285_1_0_0;
extern TypeInfo t221_TI;
struct t2285;
extern TypeInfo t2285_TI;
extern Il2CppGenericClass t2285_GC;
TypeInfo t2285_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2285_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2285_TI, NULL, t2285_VT, &EmptyCustomAttributesCache, &t2285_TI, &t2285_0_0_0, &t2285_1_0_0, t2285_IOs, &t2285_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2285), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t425_TI;

#include "t291.h"


// Metadata Definition System.IEquatable`1<UnityEngine.UI.LayoutRebuilder>
extern Il2CppType t291_0_0_0;
static ParameterInfo t425_m25376_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t291_0_0_0},
};
extern TypeInfo t425_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t291 (MethodInfo* method, void* obj, void** args);
MethodInfo m25376_MI = 
{
	"Equals", NULL, &t425_TI, &t31_0_0_0, RuntimeInvoker_t31_t291, t425_m25376_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t425_MIs[] =
{
	&m25376_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t425_0_0_0;
extern Il2CppType t425_1_0_0;
struct t425;
extern TypeInfo t425_TI;
extern Il2CppGenericClass t425_GC;
TypeInfo t425_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t425_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t425_TI, NULL, NULL, &EmptyCustomAttributesCache, &t425_TI, &t425_0_0_0, &t425_1_0_0, NULL, &t425_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t292.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t292_TI;
#include "t292MD.h"

#include "t35.h"


// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Component>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t292_m2106_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2106_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t292_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t292_m2106_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
static ParameterInfo t292_m2109_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
};
extern TypeInfo t292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2109_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t292_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t292_m2109_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t35_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t292_m12887_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t35_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t292_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12887_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t292_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t292_m12887_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t292_m12888_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12888_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t292_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t292_m12888_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t292_MIs[] =
{
	&m2106_MI,
	&m2109_MI,
	&m12887_MI,
	&m12888_MI,
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
extern MethodInfo m2109_MI;
extern MethodInfo m12887_MI;
extern MethodInfo m12888_MI;
static MethodInfo* t292_VT[] =
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
	&m2109_MI,
	&m12887_MI,
	&m12888_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t292_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t292_0_0_0;
extern Il2CppType t292_1_0_0;
extern TypeInfo t221_TI;
struct t292;
extern TypeInfo t292_TI;
extern Il2CppGenericClass t292_GC;
TypeInfo t292_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t292_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t292_TI, NULL, t292_VT, &EmptyCustomAttributesCache, &t292_TI, &t292_0_0_0, &t292_1_0_0, t292_IOs, &t292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t292), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t296.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t296_TI;
#include "t296MD.h"

#include "t33.h"


extern MethodInfo m2110_MI;
 void m2110 (t296 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m2111_MI;
 float m2111 (t296 * __this, t28 * p0, MethodInfo* method){
	typedef  float (*FunctionPointerType) (t28 * __this, t28 * p0, MethodInfo* method);
	if (__this->f9)
		m2111((t296 *)__this->f9,  p0, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m12889_MI;
 t28 * m12889 (t296 * __this, t28 * p0, t91 * p1, t28 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m12890_MI;
 float m12890 (t296 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t296_m2110_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2110_MI = 
{
	".ctor", (methodPointerType)&m2110, &t296_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t296_m2110_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t297_0_0_0;
static ParameterInfo t296_m2111_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t296_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2111_MI = 
{
	"Invoke", (methodPointerType)&m2111, &t296_TI, &t33_0_0_0, RuntimeInvoker_t33_t28, t296_m2111_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t297_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t296_m12889_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t296_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12889_MI = 
{
	"BeginInvoke", (methodPointerType)&m12889, &t296_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t296_m12889_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t296_m12890_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t296_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12890_MI = 
{
	"EndInvoke", (methodPointerType)&m12890, &t296_TI, &t33_0_0_0, RuntimeInvoker_t33_t28, t296_m12890_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t296_MIs[] =
{
	&m2110_MI,
	&m2111_MI,
	&m12889_MI,
	&m12890_MI,
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
extern MethodInfo m2111_MI;
extern MethodInfo m12889_MI;
extern MethodInfo m12890_MI;
static MethodInfo* t296_VT[] =
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
	&m2111_MI,
	&m12889_MI,
	&m12890_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t296_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType t296_0_0_0;
extern Il2CppType t296_1_0_0;
extern TypeInfo t221_TI;
struct t296;
extern TypeInfo t296_TI;
extern Il2CppGenericClass t296_GC;
TypeInfo t296_TI = 
{
	&g_System_Core_dll_Image, NULL, "Func`2", "System", t296_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t296_TI, NULL, t296_VT, &EmptyCustomAttributesCache, &t296_TI, &t296_0_0_0, &t296_1_0_0, t296_IOs, &t296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t296), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3501_TI;

#include "t298.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.VerticalLayoutGroup>
extern MethodInfo m25377_MI;
static PropertyInfo t3501____Current_PropertyInfo = 
{
	&t3501_TI, "Current", &m25377_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3501_PIs[] =
{
	&t3501____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3501_TI;
extern Il2CppType t298_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25377_MI = 
{
	"get_Current", NULL, &t3501_TI, &t298_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3501_MIs[] =
{
	&m25377_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3501_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3501_0_0_0;
extern Il2CppType t3501_1_0_0;
struct t3501;
extern TypeInfo t3501_TI;
extern Il2CppGenericClass t3501_GC;
TypeInfo t3501_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3501_MIs, t3501_PIs, NULL, NULL, NULL, NULL, NULL, &t3501_TI, t3501_ITIs, NULL, &EmptyCustomAttributesCache, &t3501_TI, &t3501_0_0_0, &t3501_1_0_0, NULL, &t3501_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2286.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2286_TI;
#include "t2286MD.h"

extern TypeInfo t2286_TI;
extern TypeInfo t298_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12895_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19008_MI;
struct t29;
#define m19008(__this, p0, method) (t298 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19008_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.VerticalLayoutGroup>
extern Il2CppType t29_0_0_1;
FieldInfo t2286_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2286_TI, offsetof(t2286, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2286_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2286_TI, offsetof(t2286, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2286_FIs[] =
{
	&t2286_f0_FieldInfo,
	&t2286_f1_FieldInfo,
	NULL
};
extern MethodInfo m12892_MI;
static PropertyInfo t2286____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2286_TI, "System.Collections.IEnumerator.Current", &m12892_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12895_MI;
static PropertyInfo t2286____Current_PropertyInfo = 
{
	&t2286_TI, "Current", &m12895_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2286_PIs[] =
{
	&t2286____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2286____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2286_m12891_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2286_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12891_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2286_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2286_m12891_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2286_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12892_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2286_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2286_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12893_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2286_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2286_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12894_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2286_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2286_TI;
extern Il2CppType t298_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12895_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2286_TI, &t298_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2286_MIs[] =
{
	&m12891_MI,
	&m12892_MI,
	&m12893_MI,
	&m12894_MI,
	&m12895_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12892_MI;
extern MethodInfo m12894_MI;
extern MethodInfo m12893_MI;
extern MethodInfo m12895_MI;
static MethodInfo* t2286_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12892_MI,
	&m12894_MI,
	&m12893_MI,
	&m12895_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3501_TI;
static TypeInfo* t2286_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3501_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3501_TI;
static Il2CppInterfaceOffsetPair t2286_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3501_TI, 7},
};
extern MethodInfo m12895_MI;
extern TypeInfo t298_TI;
extern MethodInfo m19008_MI;
static void* t2286_RGCTXData[3] = 
{
	&m12895_MI,
	&t298_TI,
	&m19008_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2286_0_0_0;
extern Il2CppType t2286_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2286_TI;
extern Il2CppGenericClass t2286_GC;
extern TypeInfo t29_TI;
TypeInfo t2286_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2286_MIs, t2286_PIs, t2286_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2286_TI, t2286_ITIs, t2286_VT, &EmptyCustomAttributesCache, &t2286_TI, &t2286_0_0_0, &t2286_1_0_0, t2286_IOs, &t2286_GC, NULL, NULL, NULL, t2286_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2286)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4286_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.VerticalLayoutGroup>
extern MethodInfo m25378_MI;
static PropertyInfo t4286____Count_PropertyInfo = 
{
	&t4286_TI, "Count", &m25378_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25379_MI;
static PropertyInfo t4286____IsReadOnly_PropertyInfo = 
{
	&t4286_TI, "IsReadOnly", &m25379_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4286_PIs[] =
{
	&t4286____Count_PropertyInfo,
	&t4286____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4286_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25378_MI = 
{
	"get_Count", NULL, &t4286_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4286_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25379_MI = 
{
	"get_IsReadOnly", NULL, &t4286_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t298_0_0_0;
static ParameterInfo t4286_m25380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t4286_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25380_MI = 
{
	"Add", NULL, &t4286_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4286_m25380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4286_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25381_MI = 
{
	"Clear", NULL, &t4286_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t298_0_0_0;
static ParameterInfo t4286_m25382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t4286_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25382_MI = 
{
	"Contains", NULL, &t4286_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4286_m25382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3311_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4286_m25383_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3311_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4286_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25383_MI = 
{
	"CopyTo", NULL, &t4286_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4286_m25383_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t298_0_0_0;
static ParameterInfo t4286_m25384_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t4286_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25384_MI = 
{
	"Remove", NULL, &t4286_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4286_m25384_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4286_MIs[] =
{
	&m25378_MI,
	&m25379_MI,
	&m25380_MI,
	&m25381_MI,
	&m25382_MI,
	&m25383_MI,
	&m25384_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4288_TI;
static TypeInfo* t4286_ITIs[] = 
{
	&t611_TI,
	&t4288_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4286_0_0_0;
extern Il2CppType t4286_1_0_0;
struct t4286;
extern TypeInfo t4286_TI;
extern Il2CppGenericClass t4286_GC;
TypeInfo t4286_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4286_MIs, t4286_PIs, NULL, NULL, NULL, NULL, NULL, &t4286_TI, t4286_ITIs, NULL, &EmptyCustomAttributesCache, &t4286_TI, &t4286_0_0_0, &t4286_1_0_0, NULL, &t4286_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4288_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.VerticalLayoutGroup>
extern TypeInfo t4288_TI;
extern Il2CppType t3501_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25385_MI = 
{
	"GetEnumerator", NULL, &t4288_TI, &t3501_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4288_MIs[] =
{
	&m25385_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4288_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4288_0_0_0;
extern Il2CppType t4288_1_0_0;
struct t4288;
extern TypeInfo t4288_TI;
extern Il2CppGenericClass t4288_GC;
TypeInfo t4288_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4288_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4288_TI, t4288_ITIs, NULL, &EmptyCustomAttributesCache, &t4288_TI, &t4288_0_0_0, &t4288_1_0_0, NULL, &t4288_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4287_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.VerticalLayoutGroup>
extern MethodInfo m25386_MI;
extern MethodInfo m25387_MI;
static PropertyInfo t4287____Item_PropertyInfo = 
{
	&t4287_TI, "Item", &m25386_MI, &m25387_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4287_PIs[] =
{
	&t4287____Item_PropertyInfo,
	NULL
};
extern Il2CppType t298_0_0_0;
static ParameterInfo t4287_m25388_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t4287_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25388_MI = 
{
	"IndexOf", NULL, &t4287_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4287_m25388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t298_0_0_0;
static ParameterInfo t4287_m25389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t4287_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25389_MI = 
{
	"Insert", NULL, &t4287_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4287_m25389_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4287_m25390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4287_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25390_MI = 
{
	"RemoveAt", NULL, &t4287_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4287_m25390_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4287_m25386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4287_TI;
extern Il2CppType t298_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25386_MI = 
{
	"get_Item", NULL, &t4287_TI, &t298_0_0_0, RuntimeInvoker_t28_t47, t4287_m25386_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t298_0_0_0;
static ParameterInfo t4287_m25387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t4287_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25387_MI = 
{
	"set_Item", NULL, &t4287_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4287_m25387_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4287_MIs[] =
{
	&m25388_MI,
	&m25389_MI,
	&m25390_MI,
	&m25386_MI,
	&m25387_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4286_TI;
extern TypeInfo t4288_TI;
static TypeInfo* t4287_ITIs[] = 
{
	&t611_TI,
	&t4286_TI,
	&t4288_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4287_0_0_0;
extern Il2CppType t4287_1_0_0;
struct t4287;
extern TypeInfo t4287_TI;
extern Il2CppGenericClass t4287_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4287_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4287_MIs, t4287_PIs, NULL, NULL, NULL, NULL, NULL, &t4287_TI, t4287_ITIs, NULL, &t1418__CustomAttributeCache, &t4287_TI, &t4287_0_0_0, &t4287_1_0_0, NULL, &t4287_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2287.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2287_TI;
#include "t2287MD.h"

#include "t2288.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2287_TI;
extern TypeInfo t298_TI;
extern TypeInfo t2288_TI;
extern TypeInfo t30_TI;
#include "t2288MD.h"
extern MethodInfo m12898_MI;
extern MethodInfo m12900_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.VerticalLayoutGroup>
extern Il2CppType t333_0_0_33;
FieldInfo t2287_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2287_TI, offsetof(t2287, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2287_FIs[] =
{
	&t2287_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t298_0_0_0;
static ParameterInfo t2287_m12896_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t2287_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12896_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2287_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2287_m12896_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2287_m12897_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2287_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12897_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2287_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2287_m12897_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2287_MIs[] =
{
	&m12896_MI,
	&m12897_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12897_MI;
extern MethodInfo m12901_MI;
static MethodInfo* t2287_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12897_MI,
	&m12901_MI,
};
extern Il2CppType t2289_0_0_0;
extern TypeInfo t2289_TI;
extern MethodInfo m19018_MI;
extern TypeInfo t298_TI;
extern MethodInfo m12903_MI;
extern MethodInfo m12898_MI;
extern TypeInfo t298_TI;
extern MethodInfo m12900_MI;
static void* t2287_RGCTXData[8] = 
{
	(void*)&t2289_0_0_0,
	&t2289_TI,
	&m19018_MI,
	&t298_TI,
	&m12903_MI,
	&m12898_MI,
	&t298_TI,
	&m12900_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2287_0_0_0;
extern Il2CppType t2287_1_0_0;
extern TypeInfo t2288_TI;
struct t2287;
extern TypeInfo t2287_TI;
extern Il2CppGenericClass t2287_GC;
TypeInfo t2287_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2287_MIs, NULL, t2287_FIs, NULL, &t2288_TI, NULL, NULL, &t2287_TI, NULL, t2287_VT, &EmptyCustomAttributesCache, &t2287_TI, &t2287_0_0_0, &t2287_1_0_0, NULL, &t2287_GC, NULL, NULL, NULL, t2287_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2287), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2288_TI;

#include "t2289.h"
extern TypeInfo t2288_TI;
extern TypeInfo t2289_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t298_TI;
extern TypeInfo t30_TI;
#include "t2289MD.h"
extern Il2CppType t2289_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m19018_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m12903_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#define m19018(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m19018_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.VerticalLayoutGroup>
extern Il2CppType t2289_0_0_1;
FieldInfo t2288_f0_FieldInfo = 
{
	"Delegate", &t2289_0_0_1, &t2288_TI, offsetof(t2288, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2288_FIs[] =
{
	&t2288_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2288_m12898_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2288_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12898_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2288_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2288_m12898_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2289_0_0_0;
static ParameterInfo t2288_m12899_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2289_0_0_0},
};
extern TypeInfo t2288_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12899_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2288_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2288_m12899_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2288_m12900_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2288_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12900_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2288_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2288_m12900_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2288_m12901_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2288_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12901_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2288_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2288_m12901_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2288_MIs[] =
{
	&m12898_MI,
	&m12899_MI,
	&m12900_MI,
	&m12901_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12900_MI;
extern MethodInfo m12901_MI;
static MethodInfo* t2288_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12900_MI,
	&m12901_MI,
};
extern Il2CppType t2289_0_0_0;
extern TypeInfo t2289_TI;
extern MethodInfo m19018_MI;
extern TypeInfo t298_TI;
extern MethodInfo m12903_MI;
static void* t2288_RGCTXData[5] = 
{
	(void*)&t2289_0_0_0,
	&t2289_TI,
	&m19018_MI,
	&t298_TI,
	&m12903_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2288_0_0_0;
extern Il2CppType t2288_1_0_0;
extern TypeInfo t564_TI;
struct t2288;
extern TypeInfo t2288_TI;
extern Il2CppGenericClass t2288_GC;
TypeInfo t2288_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2288_MIs, NULL, t2288_FIs, NULL, &t564_TI, NULL, NULL, &t2288_TI, NULL, t2288_VT, &EmptyCustomAttributesCache, &t2288_TI, &t2288_0_0_0, &t2288_1_0_0, NULL, &t2288_GC, NULL, NULL, NULL, t2288_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2288), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2289_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.VerticalLayoutGroup>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2289_m12902_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2289_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m12902_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2289_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2289_m12902_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t298_0_0_0;
static ParameterInfo t2289_m12903_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
};
extern TypeInfo t2289_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12903_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2289_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2289_m12903_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t298_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2289_m12904_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t298_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2289_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12904_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2289_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2289_m12904_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2289_m12905_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2289_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12905_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2289_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2289_m12905_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2289_MIs[] =
{
	&m12902_MI,
	&m12903_MI,
	&m12904_MI,
	&m12905_MI,
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
extern MethodInfo m12903_MI;
extern MethodInfo m12904_MI;
extern MethodInfo m12905_MI;
static MethodInfo* t2289_VT[] =
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
	&m12903_MI,
	&m12904_MI,
	&m12905_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2289_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2289_0_0_0;
extern Il2CppType t2289_1_0_0;
extern TypeInfo t221_TI;
struct t2289;
extern TypeInfo t2289_TI;
extern Il2CppGenericClass t2289_GC;
TypeInfo t2289_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2289_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2289_TI, NULL, t2289_VT, &EmptyCustomAttributesCache, &t2289_TI, &t2289_0_0_0, &t2289_1_0_0, t2289_IOs, &t2289_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2289), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3502_TI;

#include "t299.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Mask>
extern MethodInfo m25391_MI;
static PropertyInfo t3502____Current_PropertyInfo = 
{
	&t3502_TI, "Current", &m25391_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3502_PIs[] =
{
	&t3502____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3502_TI;
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25391_MI = 
{
	"get_Current", NULL, &t3502_TI, &t299_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3502_MIs[] =
{
	&m25391_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3502_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3502_0_0_0;
extern Il2CppType t3502_1_0_0;
struct t3502;
extern TypeInfo t3502_TI;
extern Il2CppGenericClass t3502_GC;
TypeInfo t3502_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3502_MIs, t3502_PIs, NULL, NULL, NULL, NULL, NULL, &t3502_TI, t3502_ITIs, NULL, &EmptyCustomAttributesCache, &t3502_TI, &t3502_0_0_0, &t3502_1_0_0, NULL, &t3502_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2290.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2290_TI;
#include "t2290MD.h"

extern TypeInfo t2290_TI;
extern TypeInfo t299_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12910_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19020_MI;
struct t29;
#define m19020(__this, p0, method) (t299 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19020_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Mask>
extern Il2CppType t29_0_0_1;
FieldInfo t2290_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2290_TI, offsetof(t2290, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2290_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2290_TI, offsetof(t2290, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2290_FIs[] =
{
	&t2290_f0_FieldInfo,
	&t2290_f1_FieldInfo,
	NULL
};
extern MethodInfo m12907_MI;
static PropertyInfo t2290____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2290_TI, "System.Collections.IEnumerator.Current", &m12907_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12910_MI;
static PropertyInfo t2290____Current_PropertyInfo = 
{
	&t2290_TI, "Current", &m12910_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2290_PIs[] =
{
	&t2290____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2290____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2290_m12906_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2290_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12906_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2290_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2290_m12906_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2290_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12907_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2290_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2290_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12908_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2290_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2290_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12909_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2290_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2290_TI;
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12910_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2290_TI, &t299_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2290_MIs[] =
{
	&m12906_MI,
	&m12907_MI,
	&m12908_MI,
	&m12909_MI,
	&m12910_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12907_MI;
extern MethodInfo m12909_MI;
extern MethodInfo m12908_MI;
extern MethodInfo m12910_MI;
static MethodInfo* t2290_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12907_MI,
	&m12909_MI,
	&m12908_MI,
	&m12910_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3502_TI;
static TypeInfo* t2290_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3502_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3502_TI;
static Il2CppInterfaceOffsetPair t2290_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3502_TI, 7},
};
extern MethodInfo m12910_MI;
extern TypeInfo t299_TI;
extern MethodInfo m19020_MI;
static void* t2290_RGCTXData[3] = 
{
	&m12910_MI,
	&t299_TI,
	&m19020_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2290_0_0_0;
extern Il2CppType t2290_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2290_TI;
extern Il2CppGenericClass t2290_GC;
extern TypeInfo t29_TI;
TypeInfo t2290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2290_MIs, t2290_PIs, t2290_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2290_TI, t2290_ITIs, t2290_VT, &EmptyCustomAttributesCache, &t2290_TI, &t2290_0_0_0, &t2290_1_0_0, t2290_IOs, &t2290_GC, NULL, NULL, NULL, t2290_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2290)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4289_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Mask>
extern MethodInfo m25392_MI;
static PropertyInfo t4289____Count_PropertyInfo = 
{
	&t4289_TI, "Count", &m25392_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25393_MI;
static PropertyInfo t4289____IsReadOnly_PropertyInfo = 
{
	&t4289_TI, "IsReadOnly", &m25393_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4289_PIs[] =
{
	&t4289____Count_PropertyInfo,
	&t4289____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4289_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25392_MI = 
{
	"get_Count", NULL, &t4289_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4289_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25393_MI = 
{
	"get_IsReadOnly", NULL, &t4289_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4289_m25394_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4289_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25394_MI = 
{
	"Add", NULL, &t4289_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4289_m25394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4289_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25395_MI = 
{
	"Clear", NULL, &t4289_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4289_m25396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4289_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25396_MI = 
{
	"Contains", NULL, &t4289_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4289_m25396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3312_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4289_m25397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3312_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4289_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25397_MI = 
{
	"CopyTo", NULL, &t4289_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4289_m25397_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4289_m25398_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4289_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25398_MI = 
{
	"Remove", NULL, &t4289_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4289_m25398_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4289_MIs[] =
{
	&m25392_MI,
	&m25393_MI,
	&m25394_MI,
	&m25395_MI,
	&m25396_MI,
	&m25397_MI,
	&m25398_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4291_TI;
static TypeInfo* t4289_ITIs[] = 
{
	&t611_TI,
	&t4291_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4289_0_0_0;
extern Il2CppType t4289_1_0_0;
struct t4289;
extern TypeInfo t4289_TI;
extern Il2CppGenericClass t4289_GC;
TypeInfo t4289_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4289_MIs, t4289_PIs, NULL, NULL, NULL, NULL, NULL, &t4289_TI, t4289_ITIs, NULL, &EmptyCustomAttributesCache, &t4289_TI, &t4289_0_0_0, &t4289_1_0_0, NULL, &t4289_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4291_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Mask>
extern TypeInfo t4291_TI;
extern Il2CppType t3502_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25399_MI = 
{
	"GetEnumerator", NULL, &t4291_TI, &t3502_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4291_MIs[] =
{
	&m25399_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4291_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4291_0_0_0;
extern Il2CppType t4291_1_0_0;
struct t4291;
extern TypeInfo t4291_TI;
extern Il2CppGenericClass t4291_GC;
TypeInfo t4291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4291_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4291_TI, t4291_ITIs, NULL, &EmptyCustomAttributesCache, &t4291_TI, &t4291_0_0_0, &t4291_1_0_0, NULL, &t4291_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4290_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Mask>
extern MethodInfo m25400_MI;
extern MethodInfo m25401_MI;
static PropertyInfo t4290____Item_PropertyInfo = 
{
	&t4290_TI, "Item", &m25400_MI, &m25401_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4290_PIs[] =
{
	&t4290____Item_PropertyInfo,
	NULL
};
extern Il2CppType t299_0_0_0;
static ParameterInfo t4290_m25402_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4290_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25402_MI = 
{
	"IndexOf", NULL, &t4290_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4290_m25402_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t4290_m25403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4290_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25403_MI = 
{
	"Insert", NULL, &t4290_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4290_m25403_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4290_m25404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4290_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25404_MI = 
{
	"RemoveAt", NULL, &t4290_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4290_m25404_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4290_m25400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4290_TI;
extern Il2CppType t299_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25400_MI = 
{
	"get_Item", NULL, &t4290_TI, &t299_0_0_0, RuntimeInvoker_t28_t47, t4290_m25400_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t4290_m25401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t4290_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25401_MI = 
{
	"set_Item", NULL, &t4290_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4290_m25401_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4290_MIs[] =
{
	&m25402_MI,
	&m25403_MI,
	&m25404_MI,
	&m25400_MI,
	&m25401_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4289_TI;
extern TypeInfo t4291_TI;
static TypeInfo* t4290_ITIs[] = 
{
	&t611_TI,
	&t4289_TI,
	&t4291_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4290_0_0_0;
extern Il2CppType t4290_1_0_0;
struct t4290;
extern TypeInfo t4290_TI;
extern Il2CppGenericClass t4290_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4290_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4290_MIs, t4290_PIs, NULL, NULL, NULL, NULL, NULL, &t4290_TI, t4290_ITIs, NULL, &t1418__CustomAttributeCache, &t4290_TI, &t4290_0_0_0, &t4290_1_0_0, NULL, &t4290_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4292_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IGraphicEnabledDisabled>
extern MethodInfo m25405_MI;
static PropertyInfo t4292____Count_PropertyInfo = 
{
	&t4292_TI, "Count", &m25405_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25406_MI;
static PropertyInfo t4292____IsReadOnly_PropertyInfo = 
{
	&t4292_TI, "IsReadOnly", &m25406_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4292_PIs[] =
{
	&t4292____Count_PropertyInfo,
	&t4292____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4292_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25405_MI = 
{
	"get_Count", NULL, &t4292_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4292_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25406_MI = 
{
	"get_IsReadOnly", NULL, &t4292_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t367_0_0_0;
static ParameterInfo t4292_m25407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t367_0_0_0},
};
extern TypeInfo t4292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25407_MI = 
{
	"Add", NULL, &t4292_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4292_m25407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25408_MI = 
{
	"Clear", NULL, &t4292_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t367_0_0_0;
static ParameterInfo t4292_m25409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t367_0_0_0},
};
extern TypeInfo t4292_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25409_MI = 
{
	"Contains", NULL, &t4292_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4292_m25409_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3313_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4292_m25410_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3313_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25410_MI = 
{
	"CopyTo", NULL, &t4292_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4292_m25410_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t367_0_0_0;
static ParameterInfo t4292_m25411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t367_0_0_0},
};
extern TypeInfo t4292_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25411_MI = 
{
	"Remove", NULL, &t4292_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4292_m25411_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4292_MIs[] =
{
	&m25405_MI,
	&m25406_MI,
	&m25407_MI,
	&m25408_MI,
	&m25409_MI,
	&m25410_MI,
	&m25411_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4294_TI;
static TypeInfo* t4292_ITIs[] = 
{
	&t611_TI,
	&t4294_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4292_0_0_0;
extern Il2CppType t4292_1_0_0;
struct t4292;
extern TypeInfo t4292_TI;
extern Il2CppGenericClass t4292_GC;
TypeInfo t4292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4292_MIs, t4292_PIs, NULL, NULL, NULL, NULL, NULL, &t4292_TI, t4292_ITIs, NULL, &EmptyCustomAttributesCache, &t4292_TI, &t4292_0_0_0, &t4292_1_0_0, NULL, &t4292_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4294_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IGraphicEnabledDisabled>
extern TypeInfo t4294_TI;
extern Il2CppType t3503_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25412_MI = 
{
	"GetEnumerator", NULL, &t4294_TI, &t3503_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4294_MIs[] =
{
	&m25412_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4294_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4294_0_0_0;
extern Il2CppType t4294_1_0_0;
struct t4294;
extern TypeInfo t4294_TI;
extern Il2CppGenericClass t4294_GC;
TypeInfo t4294_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4294_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4294_TI, t4294_ITIs, NULL, &EmptyCustomAttributesCache, &t4294_TI, &t4294_0_0_0, &t4294_1_0_0, NULL, &t4294_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3503_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IGraphicEnabledDisabled>
extern MethodInfo m25413_MI;
static PropertyInfo t3503____Current_PropertyInfo = 
{
	&t3503_TI, "Current", &m25413_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3503_PIs[] =
{
	&t3503____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3503_TI;
extern Il2CppType t367_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25413_MI = 
{
	"get_Current", NULL, &t3503_TI, &t367_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3503_MIs[] =
{
	&m25413_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3503_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3503_0_0_0;
extern Il2CppType t3503_1_0_0;
struct t3503;
extern TypeInfo t3503_TI;
extern Il2CppGenericClass t3503_GC;
TypeInfo t3503_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3503_MIs, t3503_PIs, NULL, NULL, NULL, NULL, NULL, &t3503_TI, t3503_ITIs, NULL, &EmptyCustomAttributesCache, &t3503_TI, &t3503_0_0_0, &t3503_1_0_0, NULL, &t3503_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2291.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2291_TI;
#include "t2291MD.h"

extern TypeInfo t2291_TI;
extern TypeInfo t367_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12915_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19031_MI;
struct t29;
#define m19031(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19031_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IGraphicEnabledDisabled>
extern Il2CppType t29_0_0_1;
FieldInfo t2291_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2291_TI, offsetof(t2291, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2291_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2291_TI, offsetof(t2291, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2291_FIs[] =
{
	&t2291_f0_FieldInfo,
	&t2291_f1_FieldInfo,
	NULL
};
extern MethodInfo m12912_MI;
static PropertyInfo t2291____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2291_TI, "System.Collections.IEnumerator.Current", &m12912_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12915_MI;
static PropertyInfo t2291____Current_PropertyInfo = 
{
	&t2291_TI, "Current", &m12915_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2291_PIs[] =
{
	&t2291____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2291____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2291_m12911_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2291_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12911_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2291_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2291_m12911_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2291_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12912_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2291_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2291_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12913_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2291_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2291_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12914_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2291_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2291_TI;
extern Il2CppType t367_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12915_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2291_TI, &t367_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2291_MIs[] =
{
	&m12911_MI,
	&m12912_MI,
	&m12913_MI,
	&m12914_MI,
	&m12915_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12912_MI;
extern MethodInfo m12914_MI;
extern MethodInfo m12913_MI;
extern MethodInfo m12915_MI;
static MethodInfo* t2291_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12912_MI,
	&m12914_MI,
	&m12913_MI,
	&m12915_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3503_TI;
static TypeInfo* t2291_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3503_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3503_TI;
static Il2CppInterfaceOffsetPair t2291_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3503_TI, 7},
};
extern MethodInfo m12915_MI;
extern TypeInfo t367_TI;
extern MethodInfo m19031_MI;
static void* t2291_RGCTXData[3] = 
{
	&m12915_MI,
	&t367_TI,
	&m19031_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2291_0_0_0;
extern Il2CppType t2291_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2291_TI;
extern Il2CppGenericClass t2291_GC;
extern TypeInfo t29_TI;
TypeInfo t2291_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2291_MIs, t2291_PIs, t2291_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2291_TI, t2291_ITIs, t2291_VT, &EmptyCustomAttributesCache, &t2291_TI, &t2291_0_0_0, &t2291_1_0_0, t2291_IOs, &t2291_GC, NULL, NULL, NULL, t2291_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2291)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4293_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IGraphicEnabledDisabled>
extern MethodInfo m25414_MI;
extern MethodInfo m25415_MI;
static PropertyInfo t4293____Item_PropertyInfo = 
{
	&t4293_TI, "Item", &m25414_MI, &m25415_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4293_PIs[] =
{
	&t4293____Item_PropertyInfo,
	NULL
};
extern Il2CppType t367_0_0_0;
static ParameterInfo t4293_m25416_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t367_0_0_0},
};
extern TypeInfo t4293_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25416_MI = 
{
	"IndexOf", NULL, &t4293_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4293_m25416_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t367_0_0_0;
static ParameterInfo t4293_m25417_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t367_0_0_0},
};
extern TypeInfo t4293_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25417_MI = 
{
	"Insert", NULL, &t4293_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4293_m25417_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4293_m25418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4293_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25418_MI = 
{
	"RemoveAt", NULL, &t4293_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4293_m25418_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4293_m25414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4293_TI;
extern Il2CppType t367_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25414_MI = 
{
	"get_Item", NULL, &t4293_TI, &t367_0_0_0, RuntimeInvoker_t28_t47, t4293_m25414_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t367_0_0_0;
static ParameterInfo t4293_m25415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t367_0_0_0},
};
extern TypeInfo t4293_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25415_MI = 
{
	"set_Item", NULL, &t4293_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4293_m25415_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4293_MIs[] =
{
	&m25416_MI,
	&m25417_MI,
	&m25418_MI,
	&m25414_MI,
	&m25415_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4292_TI;
extern TypeInfo t4294_TI;
static TypeInfo* t4293_ITIs[] = 
{
	&t611_TI,
	&t4292_TI,
	&t4294_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4293_0_0_0;
extern Il2CppType t4293_1_0_0;
struct t4293;
extern TypeInfo t4293_TI;
extern Il2CppGenericClass t4293_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4293_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4293_MIs, t4293_PIs, NULL, NULL, NULL, NULL, NULL, &t4293_TI, t4293_ITIs, NULL, &t1418__CustomAttributeCache, &t4293_TI, &t4293_0_0_0, &t4293_1_0_0, NULL, &t4293_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4295_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IMask>
extern MethodInfo m25419_MI;
static PropertyInfo t4295____Count_PropertyInfo = 
{
	&t4295_TI, "Count", &m25419_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25420_MI;
static PropertyInfo t4295____IsReadOnly_PropertyInfo = 
{
	&t4295_TI, "IsReadOnly", &m25420_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4295_PIs[] =
{
	&t4295____Count_PropertyInfo,
	&t4295____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4295_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25419_MI = 
{
	"get_Count", NULL, &t4295_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4295_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25420_MI = 
{
	"get_IsReadOnly", NULL, &t4295_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t382_0_0_0;
static ParameterInfo t4295_m25421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t382_0_0_0},
};
extern TypeInfo t4295_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25421_MI = 
{
	"Add", NULL, &t4295_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4295_m25421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4295_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25422_MI = 
{
	"Clear", NULL, &t4295_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t382_0_0_0;
static ParameterInfo t4295_m25423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t382_0_0_0},
};
extern TypeInfo t4295_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25423_MI = 
{
	"Contains", NULL, &t4295_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4295_m25423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3314_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4295_m25424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3314_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4295_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25424_MI = 
{
	"CopyTo", NULL, &t4295_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4295_m25424_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t382_0_0_0;
static ParameterInfo t4295_m25425_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t382_0_0_0},
};
extern TypeInfo t4295_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25425_MI = 
{
	"Remove", NULL, &t4295_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4295_m25425_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4295_MIs[] =
{
	&m25419_MI,
	&m25420_MI,
	&m25421_MI,
	&m25422_MI,
	&m25423_MI,
	&m25424_MI,
	&m25425_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4297_TI;
static TypeInfo* t4295_ITIs[] = 
{
	&t611_TI,
	&t4297_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4295_0_0_0;
extern Il2CppType t4295_1_0_0;
struct t4295;
extern TypeInfo t4295_TI;
extern Il2CppGenericClass t4295_GC;
TypeInfo t4295_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4295_MIs, t4295_PIs, NULL, NULL, NULL, NULL, NULL, &t4295_TI, t4295_ITIs, NULL, &EmptyCustomAttributesCache, &t4295_TI, &t4295_0_0_0, &t4295_1_0_0, NULL, &t4295_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4297_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMask>
extern TypeInfo t4297_TI;
extern Il2CppType t3504_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25426_MI = 
{
	"GetEnumerator", NULL, &t4297_TI, &t3504_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4297_MIs[] =
{
	&m25426_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4297_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4297_0_0_0;
extern Il2CppType t4297_1_0_0;
struct t4297;
extern TypeInfo t4297_TI;
extern Il2CppGenericClass t4297_GC;
TypeInfo t4297_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4297_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4297_TI, t4297_ITIs, NULL, &EmptyCustomAttributesCache, &t4297_TI, &t4297_0_0_0, &t4297_1_0_0, NULL, &t4297_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3504_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMask>
extern MethodInfo m25427_MI;
static PropertyInfo t3504____Current_PropertyInfo = 
{
	&t3504_TI, "Current", &m25427_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3504_PIs[] =
{
	&t3504____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3504_TI;
extern Il2CppType t382_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25427_MI = 
{
	"get_Current", NULL, &t3504_TI, &t382_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3504_MIs[] =
{
	&m25427_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3504_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3504_0_0_0;
extern Il2CppType t3504_1_0_0;
struct t3504;
extern TypeInfo t3504_TI;
extern Il2CppGenericClass t3504_GC;
TypeInfo t3504_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3504_MIs, t3504_PIs, NULL, NULL, NULL, NULL, NULL, &t3504_TI, t3504_ITIs, NULL, &EmptyCustomAttributesCache, &t3504_TI, &t3504_0_0_0, &t3504_1_0_0, NULL, &t3504_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2292.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2292_TI;
#include "t2292MD.h"

extern TypeInfo t2292_TI;
extern TypeInfo t382_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12920_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19042_MI;
struct t29;
#define m19042(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19042_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IMask>
extern Il2CppType t29_0_0_1;
FieldInfo t2292_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2292_TI, offsetof(t2292, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2292_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2292_TI, offsetof(t2292, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2292_FIs[] =
{
	&t2292_f0_FieldInfo,
	&t2292_f1_FieldInfo,
	NULL
};
extern MethodInfo m12917_MI;
static PropertyInfo t2292____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2292_TI, "System.Collections.IEnumerator.Current", &m12917_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12920_MI;
static PropertyInfo t2292____Current_PropertyInfo = 
{
	&t2292_TI, "Current", &m12920_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2292_PIs[] =
{
	&t2292____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2292____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2292_m12916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12916_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2292_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2292_m12916_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2292_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12917_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2292_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2292_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12918_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2292_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2292_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12919_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2292_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2292_TI;
extern Il2CppType t382_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12920_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2292_TI, &t382_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2292_MIs[] =
{
	&m12916_MI,
	&m12917_MI,
	&m12918_MI,
	&m12919_MI,
	&m12920_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12917_MI;
extern MethodInfo m12919_MI;
extern MethodInfo m12918_MI;
extern MethodInfo m12920_MI;
static MethodInfo* t2292_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12917_MI,
	&m12919_MI,
	&m12918_MI,
	&m12920_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3504_TI;
static TypeInfo* t2292_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3504_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3504_TI;
static Il2CppInterfaceOffsetPair t2292_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3504_TI, 7},
};
extern MethodInfo m12920_MI;
extern TypeInfo t382_TI;
extern MethodInfo m19042_MI;
static void* t2292_RGCTXData[3] = 
{
	&m12920_MI,
	&t382_TI,
	&m19042_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2292_0_0_0;
extern Il2CppType t2292_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2292_TI;
extern Il2CppGenericClass t2292_GC;
extern TypeInfo t29_TI;
TypeInfo t2292_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2292_MIs, t2292_PIs, t2292_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2292_TI, t2292_ITIs, t2292_VT, &EmptyCustomAttributesCache, &t2292_TI, &t2292_0_0_0, &t2292_1_0_0, t2292_IOs, &t2292_GC, NULL, NULL, NULL, t2292_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2292)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4296_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IMask>
extern MethodInfo m25428_MI;
extern MethodInfo m25429_MI;
static PropertyInfo t4296____Item_PropertyInfo = 
{
	&t4296_TI, "Item", &m25428_MI, &m25429_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4296_PIs[] =
{
	&t4296____Item_PropertyInfo,
	NULL
};
extern Il2CppType t382_0_0_0;
static ParameterInfo t4296_m25430_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t382_0_0_0},
};
extern TypeInfo t4296_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25430_MI = 
{
	"IndexOf", NULL, &t4296_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4296_m25430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t382_0_0_0;
static ParameterInfo t4296_m25431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t382_0_0_0},
};
extern TypeInfo t4296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25431_MI = 
{
	"Insert", NULL, &t4296_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4296_m25431_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4296_m25432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25432_MI = 
{
	"RemoveAt", NULL, &t4296_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4296_m25432_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4296_m25428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4296_TI;
extern Il2CppType t382_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25428_MI = 
{
	"get_Item", NULL, &t4296_TI, &t382_0_0_0, RuntimeInvoker_t28_t47, t4296_m25428_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t382_0_0_0;
static ParameterInfo t4296_m25429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t382_0_0_0},
};
extern TypeInfo t4296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25429_MI = 
{
	"set_Item", NULL, &t4296_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4296_m25429_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4296_MIs[] =
{
	&m25430_MI,
	&m25431_MI,
	&m25432_MI,
	&m25428_MI,
	&m25429_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4295_TI;
extern TypeInfo t4297_TI;
static TypeInfo* t4296_ITIs[] = 
{
	&t611_TI,
	&t4295_TI,
	&t4297_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4296_0_0_0;
extern Il2CppType t4296_1_0_0;
struct t4296;
extern TypeInfo t4296_TI;
extern Il2CppGenericClass t4296_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4296_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4296_MIs, t4296_PIs, NULL, NULL, NULL, NULL, NULL, &t4296_TI, t4296_ITIs, NULL, &t1418__CustomAttributeCache, &t4296_TI, &t4296_0_0_0, &t4296_1_0_0, NULL, &t4296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4298_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaterialModifier>
extern MethodInfo m25433_MI;
static PropertyInfo t4298____Count_PropertyInfo = 
{
	&t4298_TI, "Count", &m25433_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25434_MI;
static PropertyInfo t4298____IsReadOnly_PropertyInfo = 
{
	&t4298_TI, "IsReadOnly", &m25434_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4298_PIs[] =
{
	&t4298____Count_PropertyInfo,
	&t4298____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4298_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25433_MI = 
{
	"get_Count", NULL, &t4298_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4298_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25434_MI = 
{
	"get_IsReadOnly", NULL, &t4298_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4298_m25435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4298_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25435_MI = 
{
	"Add", NULL, &t4298_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4298_m25435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4298_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25436_MI = 
{
	"Clear", NULL, &t4298_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4298_m25437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4298_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25437_MI = 
{
	"Contains", NULL, &t4298_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4298_m25437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3315_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4298_m25438_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3315_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4298_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25438_MI = 
{
	"CopyTo", NULL, &t4298_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4298_m25438_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4298_m25439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4298_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25439_MI = 
{
	"Remove", NULL, &t4298_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4298_m25439_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4298_MIs[] =
{
	&m25433_MI,
	&m25434_MI,
	&m25435_MI,
	&m25436_MI,
	&m25437_MI,
	&m25438_MI,
	&m25439_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4300_TI;
static TypeInfo* t4298_ITIs[] = 
{
	&t611_TI,
	&t4300_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4298_0_0_0;
extern Il2CppType t4298_1_0_0;
struct t4298;
extern TypeInfo t4298_TI;
extern Il2CppGenericClass t4298_GC;
TypeInfo t4298_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4298_MIs, t4298_PIs, NULL, NULL, NULL, NULL, NULL, &t4298_TI, t4298_ITIs, NULL, &EmptyCustomAttributesCache, &t4298_TI, &t4298_0_0_0, &t4298_1_0_0, NULL, &t4298_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4300_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaterialModifier>
extern TypeInfo t4300_TI;
extern Il2CppType t3505_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25440_MI = 
{
	"GetEnumerator", NULL, &t4300_TI, &t3505_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4300_MIs[] =
{
	&m25440_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4300_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4300_0_0_0;
extern Il2CppType t4300_1_0_0;
struct t4300;
extern TypeInfo t4300_TI;
extern Il2CppGenericClass t4300_GC;
TypeInfo t4300_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4300_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4300_TI, t4300_ITIs, NULL, &EmptyCustomAttributesCache, &t4300_TI, &t4300_0_0_0, &t4300_1_0_0, NULL, &t4300_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3505_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaterialModifier>
extern MethodInfo m25441_MI;
static PropertyInfo t3505____Current_PropertyInfo = 
{
	&t3505_TI, "Current", &m25441_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3505_PIs[] =
{
	&t3505____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3505_TI;
extern Il2CppType t366_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25441_MI = 
{
	"get_Current", NULL, &t3505_TI, &t366_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3505_MIs[] =
{
	&m25441_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3505_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3505_0_0_0;
extern Il2CppType t3505_1_0_0;
struct t3505;
extern TypeInfo t3505_TI;
extern Il2CppGenericClass t3505_GC;
TypeInfo t3505_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3505_MIs, t3505_PIs, NULL, NULL, NULL, NULL, NULL, &t3505_TI, t3505_ITIs, NULL, &EmptyCustomAttributesCache, &t3505_TI, &t3505_0_0_0, &t3505_1_0_0, NULL, &t3505_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2293.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2293_TI;
#include "t2293MD.h"

extern TypeInfo t2293_TI;
extern TypeInfo t366_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12925_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19053_MI;
struct t29;
#define m19053(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19053_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IMaterialModifier>
extern Il2CppType t29_0_0_1;
FieldInfo t2293_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2293_TI, offsetof(t2293, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2293_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2293_TI, offsetof(t2293, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2293_FIs[] =
{
	&t2293_f0_FieldInfo,
	&t2293_f1_FieldInfo,
	NULL
};
extern MethodInfo m12922_MI;
static PropertyInfo t2293____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2293_TI, "System.Collections.IEnumerator.Current", &m12922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12925_MI;
static PropertyInfo t2293____Current_PropertyInfo = 
{
	&t2293_TI, "Current", &m12925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2293_PIs[] =
{
	&t2293____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2293____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2293_m12921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2293_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12921_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2293_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2293_m12921_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2293_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12922_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2293_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2293_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12923_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2293_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2293_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12924_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2293_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2293_TI;
extern Il2CppType t366_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12925_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2293_TI, &t366_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2293_MIs[] =
{
	&m12921_MI,
	&m12922_MI,
	&m12923_MI,
	&m12924_MI,
	&m12925_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12922_MI;
extern MethodInfo m12924_MI;
extern MethodInfo m12923_MI;
extern MethodInfo m12925_MI;
static MethodInfo* t2293_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12922_MI,
	&m12924_MI,
	&m12923_MI,
	&m12925_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3505_TI;
static TypeInfo* t2293_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3505_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3505_TI;
static Il2CppInterfaceOffsetPair t2293_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3505_TI, 7},
};
extern MethodInfo m12925_MI;
extern TypeInfo t366_TI;
extern MethodInfo m19053_MI;
static void* t2293_RGCTXData[3] = 
{
	&m12925_MI,
	&t366_TI,
	&m19053_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2293_0_0_0;
extern Il2CppType t2293_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2293_TI;
extern Il2CppGenericClass t2293_GC;
extern TypeInfo t29_TI;
TypeInfo t2293_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2293_MIs, t2293_PIs, t2293_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2293_TI, t2293_ITIs, t2293_VT, &EmptyCustomAttributesCache, &t2293_TI, &t2293_0_0_0, &t2293_1_0_0, t2293_IOs, &t2293_GC, NULL, NULL, NULL, t2293_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2293)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4299_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IMaterialModifier>
extern MethodInfo m25442_MI;
extern MethodInfo m25443_MI;
static PropertyInfo t4299____Item_PropertyInfo = 
{
	&t4299_TI, "Item", &m25442_MI, &m25443_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4299_PIs[] =
{
	&t4299____Item_PropertyInfo,
	NULL
};
extern Il2CppType t366_0_0_0;
static ParameterInfo t4299_m25444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4299_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25444_MI = 
{
	"IndexOf", NULL, &t4299_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4299_m25444_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t366_0_0_0;
static ParameterInfo t4299_m25445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4299_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25445_MI = 
{
	"Insert", NULL, &t4299_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4299_m25445_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4299_m25446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4299_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25446_MI = 
{
	"RemoveAt", NULL, &t4299_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4299_m25446_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4299_m25442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4299_TI;
extern Il2CppType t366_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25442_MI = 
{
	"get_Item", NULL, &t4299_TI, &t366_0_0_0, RuntimeInvoker_t28_t47, t4299_m25442_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t366_0_0_0;
static ParameterInfo t4299_m25443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t366_0_0_0},
};
extern TypeInfo t4299_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25443_MI = 
{
	"set_Item", NULL, &t4299_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4299_m25443_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4299_MIs[] =
{
	&m25444_MI,
	&m25445_MI,
	&m25446_MI,
	&m25442_MI,
	&m25443_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4298_TI;
extern TypeInfo t4300_TI;
static TypeInfo* t4299_ITIs[] = 
{
	&t611_TI,
	&t4298_TI,
	&t4300_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4299_0_0_0;
extern Il2CppType t4299_1_0_0;
struct t4299;
extern TypeInfo t4299_TI;
extern Il2CppGenericClass t4299_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4299_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4299_MIs, t4299_PIs, NULL, NULL, NULL, NULL, NULL, &t4299_TI, t4299_ITIs, NULL, &t1418__CustomAttributeCache, &t4299_TI, &t4299_0_0_0, &t4299_1_0_0, NULL, &t4299_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2294.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2294_TI;
#include "t2294MD.h"

#include "t2295.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2294_TI;
extern TypeInfo t299_TI;
extern TypeInfo t2295_TI;
extern TypeInfo t30_TI;
#include "t2295MD.h"
extern MethodInfo m12928_MI;
extern MethodInfo m12930_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Mask>
extern Il2CppType t333_0_0_33;
FieldInfo t2294_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2294_TI, offsetof(t2294, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2294_FIs[] =
{
	&t2294_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t299_0_0_0;
static ParameterInfo t2294_m12926_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t2294_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12926_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2294_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2294_m12926_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2294_m12927_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2294_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12927_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2294_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2294_m12927_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2294_MIs[] =
{
	&m12926_MI,
	&m12927_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12927_MI;
extern MethodInfo m12931_MI;
static MethodInfo* t2294_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12927_MI,
	&m12931_MI,
};
extern Il2CppType t2296_0_0_0;
extern TypeInfo t2296_TI;
extern MethodInfo m19063_MI;
extern TypeInfo t299_TI;
extern MethodInfo m12933_MI;
extern MethodInfo m12928_MI;
extern TypeInfo t299_TI;
extern MethodInfo m12930_MI;
static void* t2294_RGCTXData[8] = 
{
	(void*)&t2296_0_0_0,
	&t2296_TI,
	&m19063_MI,
	&t299_TI,
	&m12933_MI,
	&m12928_MI,
	&t299_TI,
	&m12930_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2294_0_0_0;
extern Il2CppType t2294_1_0_0;
extern TypeInfo t2295_TI;
struct t2294;
extern TypeInfo t2294_TI;
extern Il2CppGenericClass t2294_GC;
TypeInfo t2294_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2294_MIs, NULL, t2294_FIs, NULL, &t2295_TI, NULL, NULL, &t2294_TI, NULL, t2294_VT, &EmptyCustomAttributesCache, &t2294_TI, &t2294_0_0_0, &t2294_1_0_0, NULL, &t2294_GC, NULL, NULL, NULL, t2294_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2294), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2295_TI;

#include "t2296.h"
extern TypeInfo t2295_TI;
extern TypeInfo t2296_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t299_TI;
extern TypeInfo t30_TI;
#include "t2296MD.h"
extern Il2CppType t2296_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m19063_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m12933_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#define m19063(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m19063_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Mask>
extern Il2CppType t2296_0_0_1;
FieldInfo t2295_f0_FieldInfo = 
{
	"Delegate", &t2296_0_0_1, &t2295_TI, offsetof(t2295, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2295_FIs[] =
{
	&t2295_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2295_m12928_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2295_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12928_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2295_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2295_m12928_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2296_0_0_0;
static ParameterInfo t2295_m12929_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2296_0_0_0},
};
extern TypeInfo t2295_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12929_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2295_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2295_m12929_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2295_m12930_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2295_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12930_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2295_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2295_m12930_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2295_m12931_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2295_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12931_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2295_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2295_m12931_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2295_MIs[] =
{
	&m12928_MI,
	&m12929_MI,
	&m12930_MI,
	&m12931_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12930_MI;
extern MethodInfo m12931_MI;
static MethodInfo* t2295_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12930_MI,
	&m12931_MI,
};
extern Il2CppType t2296_0_0_0;
extern TypeInfo t2296_TI;
extern MethodInfo m19063_MI;
extern TypeInfo t299_TI;
extern MethodInfo m12933_MI;
static void* t2295_RGCTXData[5] = 
{
	(void*)&t2296_0_0_0,
	&t2296_TI,
	&m19063_MI,
	&t299_TI,
	&m12933_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2295_0_0_0;
extern Il2CppType t2295_1_0_0;
extern TypeInfo t564_TI;
struct t2295;
extern TypeInfo t2295_TI;
extern Il2CppGenericClass t2295_GC;
TypeInfo t2295_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2295_MIs, NULL, t2295_FIs, NULL, &t564_TI, NULL, NULL, &t2295_TI, NULL, t2295_VT, &EmptyCustomAttributesCache, &t2295_TI, &t2295_0_0_0, &t2295_1_0_0, NULL, &t2295_GC, NULL, NULL, NULL, t2295_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2295), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2296_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Mask>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2296_m12932_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m12932_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2296_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2296_m12932_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
static ParameterInfo t2296_m12933_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
};
extern TypeInfo t2296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12933_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2296_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2296_m12933_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t299_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2296_m12934_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t299_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2296_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12934_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2296_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2296_m12934_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2296_m12935_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2296_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12935_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2296_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2296_m12935_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2296_MIs[] =
{
	&m12932_MI,
	&m12933_MI,
	&m12934_MI,
	&m12935_MI,
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
extern MethodInfo m12933_MI;
extern MethodInfo m12934_MI;
extern MethodInfo m12935_MI;
static MethodInfo* t2296_VT[] =
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
	&m12933_MI,
	&m12934_MI,
	&m12935_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2296_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2296_0_0_0;
extern Il2CppType t2296_1_0_0;
extern TypeInfo t221_TI;
struct t2296;
extern TypeInfo t2296_TI;
extern Il2CppGenericClass t2296_GC;
TypeInfo t2296_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2296_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2296_TI, NULL, t2296_VT, &EmptyCustomAttributesCache, &t2296_TI, &t2296_0_0_0, &t2296_1_0_0, t2296_IOs, &t2296_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2296), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t302.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t302_TI;
#include "t302MD.h"

#include "t2297.h"
#include "t303.h"
#include "t304.h"
extern TypeInfo t302_TI;
extern TypeInfo t2297_TI;
extern TypeInfo t47_TI;
extern TypeInfo t304_TI;
extern TypeInfo t303_TI;
extern TypeInfo t30_TI;
#include "t2297MD.h"
#include "t28MD.h"
#include "t1240MD.h"
#include "t303MD.h"
#include "t44MD.h"
extern MethodInfo m12936_MI;
extern MethodInfo m12939_MI;
extern MethodInfo m12949_MI;
extern MethodInfo m12940_MI;
extern MethodInfo m203_MI;
extern MethodInfo m19081_MI;
extern MethodInfo m12937_MI;
extern MethodInfo m12947_MI;
extern MethodInfo m12961_MI;
extern MethodInfo m12946_MI;
extern MethodInfo m2992_MI;
extern MethodInfo m1436_MI;
extern MethodInfo m12948_MI;
struct t1240;
#include "t1240.h"
struct t1240;
 t28 * m17219_gshared (t28 * __this, MethodInfo* method);
#define m17219(__this, method) (t28 *)m17219_gshared((t28 *)__this, method)
#define m19081(__this, method) (t304 *)m17219_gshared((t28 *)__this, method)
extern MethodInfo m19081_MI;


// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern Il2CppType t2297_0_0_33;
FieldInfo t302_f0_FieldInfo = 
{
	"m_Stack", &t2297_0_0_33, &t302_TI, offsetof(t302, f0), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_33;
FieldInfo t302_f1_FieldInfo = 
{
	"m_ActionOnGet", &t303_0_0_33, &t302_TI, offsetof(t302, f1), &EmptyCustomAttributesCache};
extern Il2CppType t303_0_0_33;
FieldInfo t302_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t303_0_0_33, &t302_TI, offsetof(t302, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
extern CustomAttributesCache t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t302_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t47_0_0_1, &t302_TI, offsetof(t302, f3), &t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t302_FIs[] =
{
	&t302_f0_FieldInfo,
	&t302_f1_FieldInfo,
	&t302_f2_FieldInfo,
	&t302_f3_FieldInfo,
	NULL
};
extern MethodInfo m12936_MI;
extern MethodInfo m12937_MI;
static PropertyInfo t302____countAll_PropertyInfo = 
{
	&t302_TI, "countAll", &m12936_MI, &m12937_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12938_MI;
static PropertyInfo t302____countActive_PropertyInfo = 
{
	&t302_TI, "countActive", &m12938_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12939_MI;
static PropertyInfo t302____countInactive_PropertyInfo = 
{
	&t302_TI, "countInactive", &m12939_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t302_PIs[] =
{
	&t302____countAll_PropertyInfo,
	&t302____countActive_PropertyInfo,
	&t302____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_0_0_0;
static ParameterInfo t302_m2134_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t303_0_0_0},
};
extern TypeInfo t302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2134_MI = 
{
	".ctor", (methodPointerType)&m8806_gshared, &t302_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t302_m2134_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t302_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t308__CustomAttributeCache_m2144;
MethodInfo m12936_MI = 
{
	"get_countAll", (methodPointerType)&m8808_gshared, &t302_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t308__CustomAttributeCache_m2144, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t302_m12937_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t308__CustomAttributeCache_m2145;
MethodInfo m12937_MI = 
{
	"set_countAll", (methodPointerType)&m8810_gshared, &t302_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t302_m12937_ParameterInfos, &t308__CustomAttributeCache_m2145, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t302_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12938_MI = 
{
	"get_countActive", (methodPointerType)&m8812_gshared, &t302_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t302_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12939_MI = 
{
	"get_countInactive", (methodPointerType)&m8814_gshared, &t302_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t302_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2135_MI = 
{
	"Get", (methodPointerType)&m8816_gshared, &t302_TI, &t304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
static ParameterInfo t302_m2136_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2136_MI = 
{
	"Release", (methodPointerType)&m8818_gshared, &t302_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t302_m2136_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t302_MIs[] =
{
	&m2134_MI,
	&m12936_MI,
	&m12937_MI,
	&m12938_MI,
	&m12939_MI,
	&m2135_MI,
	&m2136_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t302_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t2297_TI;
extern MethodInfo m12940_MI;
extern MethodInfo m12936_MI;
extern MethodInfo m12939_MI;
extern MethodInfo m12949_MI;
extern TypeInfo t304_TI;
extern MethodInfo m19081_MI;
extern MethodInfo m12937_MI;
extern MethodInfo m12947_MI;
extern MethodInfo m12961_MI;
extern MethodInfo m12946_MI;
extern MethodInfo m12948_MI;
static void* t302_RGCTXData[12] = 
{
	&t2297_TI,
	&m12940_MI,
	&m12936_MI,
	&m12939_MI,
	&m12949_MI,
	&t304_TI,
	&m19081_MI,
	&m12937_MI,
	&m12947_MI,
	&m12961_MI,
	&m12946_MI,
	&m12948_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t302_0_0_0;
extern Il2CppType t302_1_0_0;
extern TypeInfo t28_TI;
struct t302;
extern TypeInfo t302_TI;
extern Il2CppGenericClass t302_GC;
extern CustomAttributesCache t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t308__CustomAttributeCache_m2144;
extern CustomAttributesCache t308__CustomAttributeCache_m2145;
TypeInfo t302_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t302_MIs, t302_PIs, t302_FIs, NULL, &t28_TI, NULL, NULL, &t302_TI, NULL, t302_VT, &EmptyCustomAttributesCache, &t302_TI, &t302_0_0_0, &t302_1_0_0, NULL, &t302_GC, NULL, NULL, NULL, t302_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t302), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2297_TI;

#include "t2300.h"
extern TypeInfo t2297_TI;
extern TypeInfo t29_TI;
extern TypeInfo t30_TI;
extern TypeInfo t47_TI;
extern TypeInfo t331_TI;
extern TypeInfo t1253_TI;
extern TypeInfo t2300_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t304_TI;
#include "t2300MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m3920_MI;
extern MethodInfo m3900_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m12950_MI;
extern MethodInfo m7033_MI;
extern MethodInfo m19080_MI;
extern MethodInfo m12956_MI;
struct t29;
struct t29;
 void m17021_gshared (t28 * __this, t333** p0, int32_t p1, MethodInfo* method);
#define m17021(__this, p0, p1, method) (void)m17021_gshared((t28 *)__this, (t333**)p0, (int32_t)p1, method)
#define m19080(__this, p0, p1, method) (void)m17021_gshared((t28 *)__this, (t333**)p0, (int32_t)p1, method)
extern MethodInfo m19080_MI;


extern MethodInfo m12950_MI;
 t2300  m12950 (t2297 * __this, MethodInfo* method){
	{
		t2300  L_0 = {0};
		m12956(&L_0, __this, &m12956_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern Il2CppType t47_0_0_32849;
FieldInfo t2297_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t47_0_0_32849, &t2297_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2298_0_0_1;
FieldInfo t2297_f1_FieldInfo = 
{
	"_array", &t2298_0_0_1, &t2297_TI, offsetof(t2297, f1), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2297_f2_FieldInfo = 
{
	"_size", &t47_0_0_1, &t2297_TI, offsetof(t2297, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2297_f3_FieldInfo = 
{
	"_version", &t47_0_0_1, &t2297_TI, offsetof(t2297, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2297_FIs[] =
{
	&t2297_f0_FieldInfo,
	&t2297_f1_FieldInfo,
	&t2297_f2_FieldInfo,
	&t2297_f3_FieldInfo,
	NULL
};
static const int32_t t2297_f0_DefaultValueData = 16;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t2297_f0_DefaultValue = 
{
	&t2297_f0_FieldInfo, { (char*)&t2297_f0_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2297_FDVs[] = 
{
	&t2297_f0_DefaultValue,
	NULL
};
extern MethodInfo m12941_MI;
static PropertyInfo t2297____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2297_TI, "System.Collections.ICollection.IsSynchronized", &m12941_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12942_MI;
static PropertyInfo t2297____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2297_TI, "System.Collections.ICollection.SyncRoot", &m12942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12949_MI;
static PropertyInfo t2297____Count_PropertyInfo = 
{
	&t2297_TI, "Count", &m12949_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2297_PIs[] =
{
	&t2297____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2297____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2297____Count_PropertyInfo,
	NULL
};
extern TypeInfo t2297_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12940_MI = 
{
	".ctor", (methodPointerType)&m8819_gshared, &t2297_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12941_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8820_gshared, &t2297_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12942_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8821_gshared, &t2297_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t2297_m12943_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t2297_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12943_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8822_gshared, &t2297_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t2297_m12943_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t2299_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12944_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8823_gshared, &t2297_TI, &t2299_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12945_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8824_gshared, &t2297_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12946_MI = 
{
	"Peek", (methodPointerType)&m8825_gshared, &t2297_TI, &t304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12947_MI = 
{
	"Pop", (methodPointerType)&m8826_gshared, &t2297_TI, &t304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
static ParameterInfo t2297_m12948_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t2297_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12948_MI = 
{
	"Push", (methodPointerType)&m8827_gshared, &t2297_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2297_m12948_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12949_MI = 
{
	"get_Count", (methodPointerType)&m8828_gshared, &t2297_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2297_TI;
extern Il2CppType t2300_0_0_0;
extern void* RuntimeInvoker_t2300 (MethodInfo* method, void* obj, void** args);
MethodInfo m12950_MI = 
{
	"GetEnumerator", (methodPointerType)&m12950, &t2297_TI, &t2300_0_0_0, RuntimeInvoker_t2300, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2297_MIs[] =
{
	&m12940_MI,
	&m12941_MI,
	&m12942_MI,
	&m12943_MI,
	&m12944_MI,
	&m12945_MI,
	&m12946_MI,
	&m12947_MI,
	&m12948_MI,
	&m12949_MI,
	&m12950_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12949_MI;
extern MethodInfo m12941_MI;
extern MethodInfo m12942_MI;
extern MethodInfo m12943_MI;
extern MethodInfo m12945_MI;
extern MethodInfo m12944_MI;
static MethodInfo* t2297_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12949_MI,
	&m12941_MI,
	&m12942_MI,
	&m12943_MI,
	&m12945_MI,
	&m12944_MI,
};
extern TypeInfo t661_TI;
extern TypeInfo t611_TI;
extern TypeInfo t4303_TI;
static TypeInfo* t2297_ITIs[] = 
{
	&t661_TI,
	&t611_TI,
	&t4303_TI,
};
extern TypeInfo t661_TI;
extern TypeInfo t611_TI;
extern TypeInfo t4303_TI;
static Il2CppInterfaceOffsetPair t2297_IOs[] = 
{
	{ &t661_TI, 4},
	{ &t611_TI, 8},
	{ &t4303_TI, 9},
};
extern MethodInfo m12950_MI;
extern TypeInfo t2300_TI;
extern MethodInfo m19080_MI;
extern MethodInfo m12956_MI;
static void* t2297_RGCTXData[4] = 
{
	&m12950_MI,
	&t2300_TI,
	&m19080_MI,
	&m12956_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2297_0_0_0;
extern Il2CppType t2297_1_0_0;
extern TypeInfo t28_TI;
struct t2297;
extern TypeInfo t2297_TI;
extern Il2CppGenericClass t2297_GC;
extern CustomAttributesCache t699__CustomAttributeCache;
TypeInfo t2297_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t2297_MIs, t2297_PIs, t2297_FIs, NULL, &t28_TI, NULL, NULL, &t2297_TI, t2297_ITIs, t2297_VT, &t699__CustomAttributeCache, &t2297_TI, &t2297_0_0_0, &t2297_1_0_0, t2297_IOs, &t2297_GC, NULL, t2297_FDVs, NULL, t2297_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2297), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4303_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern TypeInfo t4303_TI;
extern Il2CppType t2299_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25447_MI = 
{
	"GetEnumerator", NULL, &t4303_TI, &t2299_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4303_MIs[] =
{
	&m25447_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4303_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4303_0_0_0;
extern Il2CppType t4303_1_0_0;
struct t4303;
extern TypeInfo t4303_TI;
extern Il2CppGenericClass t4303_GC;
TypeInfo t4303_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4303_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4303_TI, t4303_ITIs, NULL, &EmptyCustomAttributesCache, &t4303_TI, &t4303_0_0_0, &t4303_1_0_0, NULL, &t4303_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2299_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern MethodInfo m25448_MI;
static PropertyInfo t2299____Current_PropertyInfo = 
{
	&t2299_TI, "Current", &m25448_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2299_PIs[] =
{
	&t2299____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2299_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25448_MI = 
{
	"get_Current", NULL, &t2299_TI, &t304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2299_MIs[] =
{
	&m25448_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t2299_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2299_0_0_0;
extern Il2CppType t2299_1_0_0;
struct t2299;
extern TypeInfo t2299_TI;
extern Il2CppGenericClass t2299_GC;
TypeInfo t2299_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2299_MIs, t2299_PIs, NULL, NULL, NULL, NULL, NULL, &t2299_TI, t2299_ITIs, NULL, &EmptyCustomAttributesCache, &t2299_TI, &t2299_0_0_0, &t2299_1_0_0, NULL, &t2299_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2301.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2301_TI;
#include "t2301MD.h"

extern TypeInfo t2301_TI;
extern TypeInfo t304_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12955_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19069_MI;
struct t29;
#define m19069(__this, p0, method) (t304 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19069_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern Il2CppType t29_0_0_1;
FieldInfo t2301_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2301_TI, offsetof(t2301, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2301_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2301_TI, offsetof(t2301, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2301_FIs[] =
{
	&t2301_f0_FieldInfo,
	&t2301_f1_FieldInfo,
	NULL
};
extern MethodInfo m12952_MI;
static PropertyInfo t2301____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2301_TI, "System.Collections.IEnumerator.Current", &m12952_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12955_MI;
static PropertyInfo t2301____Current_PropertyInfo = 
{
	&t2301_TI, "Current", &m12955_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2301_PIs[] =
{
	&t2301____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2301____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2301_m12951_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2301_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12951_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2301_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2301_m12951_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2301_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12952_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2301_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2301_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12953_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2301_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2301_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12954_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2301_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2301_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12955_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2301_TI, &t304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2301_MIs[] =
{
	&m12951_MI,
	&m12952_MI,
	&m12953_MI,
	&m12954_MI,
	&m12955_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12952_MI;
extern MethodInfo m12954_MI;
extern MethodInfo m12953_MI;
extern MethodInfo m12955_MI;
static MethodInfo* t2301_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12952_MI,
	&m12954_MI,
	&m12953_MI,
	&m12955_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2299_TI;
static TypeInfo* t2301_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2299_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2299_TI;
static Il2CppInterfaceOffsetPair t2301_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2299_TI, 7},
};
extern MethodInfo m12955_MI;
extern TypeInfo t304_TI;
extern MethodInfo m19069_MI;
static void* t2301_RGCTXData[3] = 
{
	&m12955_MI,
	&t304_TI,
	&m19069_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2301_0_0_0;
extern Il2CppType t2301_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2301_TI;
extern Il2CppGenericClass t2301_GC;
extern TypeInfo t29_TI;
TypeInfo t2301_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2301_MIs, t2301_PIs, t2301_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2301_TI, t2301_ITIs, t2301_VT, &EmptyCustomAttributesCache, &t2301_TI, &t2301_0_0_0, &t2301_1_0_0, t2301_IOs, &t2301_GC, NULL, NULL, NULL, t2301_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2301)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4301_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern MethodInfo m25449_MI;
static PropertyInfo t4301____Count_PropertyInfo = 
{
	&t4301_TI, "Count", &m25449_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25450_MI;
static PropertyInfo t4301____IsReadOnly_PropertyInfo = 
{
	&t4301_TI, "IsReadOnly", &m25450_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4301_PIs[] =
{
	&t4301____Count_PropertyInfo,
	&t4301____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4301_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25449_MI = 
{
	"get_Count", NULL, &t4301_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4301_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25450_MI = 
{
	"get_IsReadOnly", NULL, &t4301_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
static ParameterInfo t4301_m25451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t4301_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25451_MI = 
{
	"Add", NULL, &t4301_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4301_m25451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4301_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25452_MI = 
{
	"Clear", NULL, &t4301_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
static ParameterInfo t4301_m25453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t4301_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25453_MI = 
{
	"Contains", NULL, &t4301_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4301_m25453_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2298_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4301_m25454_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2298_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4301_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25454_MI = 
{
	"CopyTo", NULL, &t4301_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4301_m25454_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
static ParameterInfo t4301_m25455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t4301_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25455_MI = 
{
	"Remove", NULL, &t4301_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4301_m25455_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4301_MIs[] =
{
	&m25449_MI,
	&m25450_MI,
	&m25451_MI,
	&m25452_MI,
	&m25453_MI,
	&m25454_MI,
	&m25455_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4303_TI;
static TypeInfo* t4301_ITIs[] = 
{
	&t611_TI,
	&t4303_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4301_0_0_0;
extern Il2CppType t4301_1_0_0;
struct t4301;
extern TypeInfo t4301_TI;
extern Il2CppGenericClass t4301_GC;
TypeInfo t4301_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4301_MIs, t4301_PIs, NULL, NULL, NULL, NULL, NULL, &t4301_TI, t4301_ITIs, NULL, &EmptyCustomAttributesCache, &t4301_TI, &t4301_0_0_0, &t4301_1_0_0, NULL, &t4301_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4302_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern MethodInfo m25456_MI;
extern MethodInfo m25457_MI;
static PropertyInfo t4302____Item_PropertyInfo = 
{
	&t4302_TI, "Item", &m25456_MI, &m25457_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4302_PIs[] =
{
	&t4302____Item_PropertyInfo,
	NULL
};
extern Il2CppType t304_0_0_0;
static ParameterInfo t4302_m25458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t4302_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25458_MI = 
{
	"IndexOf", NULL, &t4302_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4302_m25458_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t304_0_0_0;
static ParameterInfo t4302_m25459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t4302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25459_MI = 
{
	"Insert", NULL, &t4302_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4302_m25459_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4302_m25460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25460_MI = 
{
	"RemoveAt", NULL, &t4302_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4302_m25460_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4302_m25456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4302_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25456_MI = 
{
	"get_Item", NULL, &t4302_TI, &t304_0_0_0, RuntimeInvoker_t28_t47, t4302_m25456_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t304_0_0_0;
static ParameterInfo t4302_m25457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t4302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25457_MI = 
{
	"set_Item", NULL, &t4302_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4302_m25457_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4302_MIs[] =
{
	&m25458_MI,
	&m25459_MI,
	&m25460_MI,
	&m25456_MI,
	&m25457_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4301_TI;
extern TypeInfo t4303_TI;
static TypeInfo* t4302_ITIs[] = 
{
	&t611_TI,
	&t4301_TI,
	&t4303_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4302_0_0_0;
extern Il2CppType t4302_1_0_0;
struct t4302;
extern TypeInfo t4302_TI;
extern Il2CppGenericClass t4302_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4302_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4302_MIs, t4302_PIs, NULL, NULL, NULL, NULL, NULL, &t4302_TI, t4302_ITIs, NULL, &t1418__CustomAttributeCache, &t4302_TI, &t4302_0_0_0, &t4302_1_0_0, NULL, &t4302_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2300_TI;

extern TypeInfo t2300_TI;
extern TypeInfo t304_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t2297_TI;
extern MethodInfo m12960_MI;
extern MethodInfo m7033_MI;


// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern Il2CppType t2297_0_0_1;
FieldInfo t2300_f0_FieldInfo = 
{
	"parent", &t2297_0_0_1, &t2300_TI, offsetof(t2300, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2300_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2300_TI, offsetof(t2300, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2300_f2_FieldInfo = 
{
	"_version", &t47_0_0_1, &t2300_TI, offsetof(t2300, f2) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2300_FIs[] =
{
	&t2300_f0_FieldInfo,
	&t2300_f1_FieldInfo,
	&t2300_f2_FieldInfo,
	NULL
};
extern MethodInfo m12957_MI;
static PropertyInfo t2300____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2300_TI, "System.Collections.IEnumerator.Current", &m12957_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12960_MI;
static PropertyInfo t2300____Current_PropertyInfo = 
{
	&t2300_TI, "Current", &m12960_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2300_PIs[] =
{
	&t2300____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2300____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2297_0_0_0;
static ParameterInfo t2300_m12956_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t2297_0_0_0},
};
extern TypeInfo t2300_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12956_MI = 
{
	".ctor", (methodPointerType)&m8830_gshared, &t2300_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2300_m12956_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2300_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12957_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8831_gshared, &t2300_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2300_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12958_MI = 
{
	"Dispose", (methodPointerType)&m8832_gshared, &t2300_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2300_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12959_MI = 
{
	"MoveNext", (methodPointerType)&m8833_gshared, &t2300_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2300_TI;
extern Il2CppType t304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12960_MI = 
{
	"get_Current", (methodPointerType)&m8834_gshared, &t2300_TI, &t304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2300_MIs[] =
{
	&m12956_MI,
	&m12957_MI,
	&m12958_MI,
	&m12959_MI,
	&m12960_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12957_MI;
extern MethodInfo m12959_MI;
extern MethodInfo m12958_MI;
extern MethodInfo m12960_MI;
static MethodInfo* t2300_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12957_MI,
	&m12959_MI,
	&m12958_MI,
	&m12960_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2299_TI;
static TypeInfo* t2300_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2299_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2299_TI;
static Il2CppInterfaceOffsetPair t2300_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2299_TI, 7},
};
extern MethodInfo m12960_MI;
extern TypeInfo t304_TI;
static void* t2300_RGCTXData[2] = 
{
	&m12960_MI,
	&t304_TI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2300_0_0_0;
extern Il2CppType t2300_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2300_TI;
extern Il2CppGenericClass t2300_GC;
extern TypeInfo t699_TI;
TypeInfo t2300_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2300_MIs, t2300_PIs, t2300_FIs, NULL, &t26_TI, NULL, &t699_TI, &t2300_TI, t2300_ITIs, t2300_VT, &EmptyCustomAttributesCache, &t2300_TI, &t2300_0_0_0, &t2300_1_0_0, t2300_IOs, &t2300_GC, NULL, NULL, NULL, t2300_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2300)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t303_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t303_m2133_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t303_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2133_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t303_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t303_m2133_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
static ParameterInfo t303_m12961_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
};
extern TypeInfo t303_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12961_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t303_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t303_m12961_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t304_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t303_m12962_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t304_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t303_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12962_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t303_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t303_m12962_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t303_m12963_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t303_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12963_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t303_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t303_m12963_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t303_MIs[] =
{
	&m2133_MI,
	&m12961_MI,
	&m12962_MI,
	&m12963_MI,
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
extern MethodInfo m12961_MI;
extern MethodInfo m12962_MI;
extern MethodInfo m12963_MI;
static MethodInfo* t303_VT[] =
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
	&m12961_MI,
	&m12962_MI,
	&m12963_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t303_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t303_0_0_0;
extern Il2CppType t303_1_0_0;
extern TypeInfo t221_TI;
struct t303;
extern TypeInfo t303_TI;
extern Il2CppGenericClass t303_GC;
TypeInfo t303_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t303_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t303_TI, NULL, t303_VT, &EmptyCustomAttributesCache, &t303_TI, &t303_0_0_0, &t303_1_0_0, t303_IOs, &t303_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t303), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t306.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t306_TI;
#include "t306MD.h"

#include "t2302.h"
#include "t307.h"
#include "t294.h"
extern TypeInfo t306_TI;
extern TypeInfo t2302_TI;
extern TypeInfo t47_TI;
extern TypeInfo t294_TI;
extern TypeInfo t307_TI;
extern TypeInfo t30_TI;
#include "t2302MD.h"
#include "t307MD.h"
extern MethodInfo m12964_MI;
extern MethodInfo m12967_MI;
extern MethodInfo m12977_MI;
extern MethodInfo m12968_MI;
extern MethodInfo m203_MI;
extern MethodInfo m19095_MI;
extern MethodInfo m12965_MI;
extern MethodInfo m12975_MI;
extern MethodInfo m12989_MI;
extern MethodInfo m12974_MI;
extern MethodInfo m2992_MI;
extern MethodInfo m1436_MI;
extern MethodInfo m12976_MI;
struct t1240;
#define m19095(__this, method) (t294 *)m17219_gshared((t28 *)__this, method)
extern MethodInfo m19095_MI;


// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern Il2CppType t2302_0_0_33;
FieldInfo t306_f0_FieldInfo = 
{
	"m_Stack", &t2302_0_0_33, &t306_TI, offsetof(t306, f0), &EmptyCustomAttributesCache};
extern Il2CppType t307_0_0_33;
FieldInfo t306_f1_FieldInfo = 
{
	"m_ActionOnGet", &t307_0_0_33, &t306_TI, offsetof(t306, f1), &EmptyCustomAttributesCache};
extern Il2CppType t307_0_0_33;
FieldInfo t306_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t307_0_0_33, &t306_TI, offsetof(t306, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
extern CustomAttributesCache t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t306_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t47_0_0_1, &t306_TI, offsetof(t306, f3), &t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t306_FIs[] =
{
	&t306_f0_FieldInfo,
	&t306_f1_FieldInfo,
	&t306_f2_FieldInfo,
	&t306_f3_FieldInfo,
	NULL
};
extern MethodInfo m12964_MI;
extern MethodInfo m12965_MI;
static PropertyInfo t306____countAll_PropertyInfo = 
{
	&t306_TI, "countAll", &m12964_MI, &m12965_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12966_MI;
static PropertyInfo t306____countActive_PropertyInfo = 
{
	&t306_TI, "countActive", &m12966_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12967_MI;
static PropertyInfo t306____countInactive_PropertyInfo = 
{
	&t306_TI, "countInactive", &m12967_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t306_PIs[] =
{
	&t306____countAll_PropertyInfo,
	&t306____countActive_PropertyInfo,
	&t306____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t307_0_0_0;
extern Il2CppType t307_0_0_0;
static ParameterInfo t306_m2139_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t307_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t307_0_0_0},
};
extern TypeInfo t306_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2139_MI = 
{
	".ctor", (methodPointerType)&m8806_gshared, &t306_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t306_m2139_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t306_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t308__CustomAttributeCache_m2144;
MethodInfo m12964_MI = 
{
	"get_countAll", (methodPointerType)&m8808_gshared, &t306_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t308__CustomAttributeCache_m2144, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t306_m12965_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t306_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t308__CustomAttributeCache_m2145;
MethodInfo m12965_MI = 
{
	"set_countAll", (methodPointerType)&m8810_gshared, &t306_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t306_m12965_ParameterInfos, &t308__CustomAttributeCache_m2145, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t306_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12966_MI = 
{
	"get_countActive", (methodPointerType)&m8812_gshared, &t306_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t306_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12967_MI = 
{
	"get_countInactive", (methodPointerType)&m8814_gshared, &t306_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t306_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2140_MI = 
{
	"Get", (methodPointerType)&m8816_gshared, &t306_TI, &t294_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t306_m2141_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t306_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2141_MI = 
{
	"Release", (methodPointerType)&m8818_gshared, &t306_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t306_m2141_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t306_MIs[] =
{
	&m2139_MI,
	&m12964_MI,
	&m12965_MI,
	&m12966_MI,
	&m12967_MI,
	&m2140_MI,
	&m2141_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t306_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t2302_TI;
extern MethodInfo m12968_MI;
extern MethodInfo m12964_MI;
extern MethodInfo m12967_MI;
extern MethodInfo m12977_MI;
extern TypeInfo t294_TI;
extern MethodInfo m19095_MI;
extern MethodInfo m12965_MI;
extern MethodInfo m12975_MI;
extern MethodInfo m12989_MI;
extern MethodInfo m12974_MI;
extern MethodInfo m12976_MI;
static void* t306_RGCTXData[12] = 
{
	&t2302_TI,
	&m12968_MI,
	&m12964_MI,
	&m12967_MI,
	&m12977_MI,
	&t294_TI,
	&m19095_MI,
	&m12965_MI,
	&m12975_MI,
	&m12989_MI,
	&m12974_MI,
	&m12976_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t306_0_0_0;
extern Il2CppType t306_1_0_0;
extern TypeInfo t28_TI;
struct t306;
extern TypeInfo t306_TI;
extern Il2CppGenericClass t306_GC;
extern CustomAttributesCache t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t308__CustomAttributeCache_m2144;
extern CustomAttributesCache t308__CustomAttributeCache_m2145;
TypeInfo t306_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t306_MIs, t306_PIs, t306_FIs, NULL, &t28_TI, NULL, NULL, &t306_TI, NULL, t306_VT, &EmptyCustomAttributesCache, &t306_TI, &t306_0_0_0, &t306_1_0_0, NULL, &t306_GC, NULL, NULL, NULL, t306_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t306), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2302_TI;

#include "t2305.h"
extern TypeInfo t2302_TI;
extern TypeInfo t29_TI;
extern TypeInfo t30_TI;
extern TypeInfo t47_TI;
extern TypeInfo t331_TI;
extern TypeInfo t1253_TI;
extern TypeInfo t2305_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t294_TI;
#include "t2305MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m3920_MI;
extern MethodInfo m3900_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m12978_MI;
extern MethodInfo m7033_MI;
extern MethodInfo m19094_MI;
extern MethodInfo m12984_MI;
struct t29;
#define m19094(__this, p0, p1, method) (void)m17021_gshared((t28 *)__this, (t333**)p0, (int32_t)p1, method)
extern MethodInfo m19094_MI;


extern MethodInfo m12978_MI;
 t2305  m12978 (t2302 * __this, MethodInfo* method){
	{
		t2305  L_0 = {0};
		m12984(&L_0, __this, &m12984_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern Il2CppType t47_0_0_32849;
FieldInfo t2302_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t47_0_0_32849, &t2302_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2303_0_0_1;
FieldInfo t2302_f1_FieldInfo = 
{
	"_array", &t2303_0_0_1, &t2302_TI, offsetof(t2302, f1), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2302_f2_FieldInfo = 
{
	"_size", &t47_0_0_1, &t2302_TI, offsetof(t2302, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2302_f3_FieldInfo = 
{
	"_version", &t47_0_0_1, &t2302_TI, offsetof(t2302, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2302_FIs[] =
{
	&t2302_f0_FieldInfo,
	&t2302_f1_FieldInfo,
	&t2302_f2_FieldInfo,
	&t2302_f3_FieldInfo,
	NULL
};
static const int32_t t2302_f0_DefaultValueData = 16;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t2302_f0_DefaultValue = 
{
	&t2302_f0_FieldInfo, { (char*)&t2302_f0_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2302_FDVs[] = 
{
	&t2302_f0_DefaultValue,
	NULL
};
extern MethodInfo m12969_MI;
static PropertyInfo t2302____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2302_TI, "System.Collections.ICollection.IsSynchronized", &m12969_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12970_MI;
static PropertyInfo t2302____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2302_TI, "System.Collections.ICollection.SyncRoot", &m12970_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12977_MI;
static PropertyInfo t2302____Count_PropertyInfo = 
{
	&t2302_TI, "Count", &m12977_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2302_PIs[] =
{
	&t2302____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2302____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2302____Count_PropertyInfo,
	NULL
};
extern TypeInfo t2302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12968_MI = 
{
	".ctor", (methodPointerType)&m8819_gshared, &t2302_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12969_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8820_gshared, &t2302_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12970_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8821_gshared, &t2302_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t2302_m12971_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t2302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12971_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8822_gshared, &t2302_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t2302_m12971_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t2304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12972_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8823_gshared, &t2302_TI, &t2304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12973_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8824_gshared, &t2302_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12974_MI = 
{
	"Peek", (methodPointerType)&m8825_gshared, &t2302_TI, &t294_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12975_MI = 
{
	"Pop", (methodPointerType)&m8826_gshared, &t2302_TI, &t294_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t2302_m12976_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t2302_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12976_MI = 
{
	"Push", (methodPointerType)&m8827_gshared, &t2302_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2302_m12976_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m12977_MI = 
{
	"get_Count", (methodPointerType)&m8828_gshared, &t2302_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2302_TI;
extern Il2CppType t2305_0_0_0;
extern void* RuntimeInvoker_t2305 (MethodInfo* method, void* obj, void** args);
MethodInfo m12978_MI = 
{
	"GetEnumerator", (methodPointerType)&m12978, &t2302_TI, &t2305_0_0_0, RuntimeInvoker_t2305, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2302_MIs[] =
{
	&m12968_MI,
	&m12969_MI,
	&m12970_MI,
	&m12971_MI,
	&m12972_MI,
	&m12973_MI,
	&m12974_MI,
	&m12975_MI,
	&m12976_MI,
	&m12977_MI,
	&m12978_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m12977_MI;
extern MethodInfo m12969_MI;
extern MethodInfo m12970_MI;
extern MethodInfo m12971_MI;
extern MethodInfo m12973_MI;
extern MethodInfo m12972_MI;
static MethodInfo* t2302_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m12977_MI,
	&m12969_MI,
	&m12970_MI,
	&m12971_MI,
	&m12973_MI,
	&m12972_MI,
};
extern TypeInfo t661_TI;
extern TypeInfo t611_TI;
extern TypeInfo t4306_TI;
static TypeInfo* t2302_ITIs[] = 
{
	&t661_TI,
	&t611_TI,
	&t4306_TI,
};
extern TypeInfo t661_TI;
extern TypeInfo t611_TI;
extern TypeInfo t4306_TI;
static Il2CppInterfaceOffsetPair t2302_IOs[] = 
{
	{ &t661_TI, 4},
	{ &t611_TI, 8},
	{ &t4306_TI, 9},
};
extern MethodInfo m12978_MI;
extern TypeInfo t2305_TI;
extern MethodInfo m19094_MI;
extern MethodInfo m12984_MI;
static void* t2302_RGCTXData[4] = 
{
	&m12978_MI,
	&t2305_TI,
	&m19094_MI,
	&m12984_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2302_0_0_0;
extern Il2CppType t2302_1_0_0;
extern TypeInfo t28_TI;
struct t2302;
extern TypeInfo t2302_TI;
extern Il2CppGenericClass t2302_GC;
extern CustomAttributesCache t699__CustomAttributeCache;
TypeInfo t2302_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t2302_MIs, t2302_PIs, t2302_FIs, NULL, &t28_TI, NULL, NULL, &t2302_TI, t2302_ITIs, t2302_VT, &t699__CustomAttributeCache, &t2302_TI, &t2302_0_0_0, &t2302_1_0_0, t2302_IOs, &t2302_GC, NULL, t2302_FDVs, NULL, t2302_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2302), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4306_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern TypeInfo t4306_TI;
extern Il2CppType t2304_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25461_MI = 
{
	"GetEnumerator", NULL, &t4306_TI, &t2304_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4306_MIs[] =
{
	&m25461_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4306_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4306_0_0_0;
extern Il2CppType t4306_1_0_0;
struct t4306;
extern TypeInfo t4306_TI;
extern Il2CppGenericClass t4306_GC;
TypeInfo t4306_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4306_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4306_TI, t4306_ITIs, NULL, &EmptyCustomAttributesCache, &t4306_TI, &t4306_0_0_0, &t4306_1_0_0, NULL, &t4306_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2304_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern MethodInfo m25462_MI;
static PropertyInfo t2304____Current_PropertyInfo = 
{
	&t2304_TI, "Current", &m25462_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2304_PIs[] =
{
	&t2304____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2304_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25462_MI = 
{
	"get_Current", NULL, &t2304_TI, &t294_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2304_MIs[] =
{
	&m25462_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t2304_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2304_0_0_0;
extern Il2CppType t2304_1_0_0;
struct t2304;
extern TypeInfo t2304_TI;
extern Il2CppGenericClass t2304_GC;
TypeInfo t2304_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2304_MIs, t2304_PIs, NULL, NULL, NULL, NULL, NULL, &t2304_TI, t2304_ITIs, NULL, &EmptyCustomAttributesCache, &t2304_TI, &t2304_0_0_0, &t2304_1_0_0, NULL, &t2304_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2306.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2306_TI;
#include "t2306MD.h"

extern TypeInfo t2306_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12983_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19083_MI;
struct t29;
#define m19083(__this, p0, method) (t294 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19083_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern Il2CppType t29_0_0_1;
FieldInfo t2306_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2306_TI, offsetof(t2306, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2306_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2306_TI, offsetof(t2306, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2306_FIs[] =
{
	&t2306_f0_FieldInfo,
	&t2306_f1_FieldInfo,
	NULL
};
extern MethodInfo m12980_MI;
static PropertyInfo t2306____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2306_TI, "System.Collections.IEnumerator.Current", &m12980_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12983_MI;
static PropertyInfo t2306____Current_PropertyInfo = 
{
	&t2306_TI, "Current", &m12983_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2306_PIs[] =
{
	&t2306____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2306____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2306_m12979_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2306_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12979_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2306_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2306_m12979_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2306_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12980_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2306_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2306_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12981_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2306_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2306_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12982_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2306_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2306_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12983_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2306_TI, &t294_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2306_MIs[] =
{
	&m12979_MI,
	&m12980_MI,
	&m12981_MI,
	&m12982_MI,
	&m12983_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12980_MI;
extern MethodInfo m12982_MI;
extern MethodInfo m12981_MI;
extern MethodInfo m12983_MI;
static MethodInfo* t2306_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12980_MI,
	&m12982_MI,
	&m12981_MI,
	&m12983_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2304_TI;
static TypeInfo* t2306_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2304_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2304_TI;
static Il2CppInterfaceOffsetPair t2306_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2304_TI, 7},
};
extern MethodInfo m12983_MI;
extern TypeInfo t294_TI;
extern MethodInfo m19083_MI;
static void* t2306_RGCTXData[3] = 
{
	&m12983_MI,
	&t294_TI,
	&m19083_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2306_0_0_0;
extern Il2CppType t2306_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2306_TI;
extern Il2CppGenericClass t2306_GC;
extern TypeInfo t29_TI;
TypeInfo t2306_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2306_MIs, t2306_PIs, t2306_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2306_TI, t2306_ITIs, t2306_VT, &EmptyCustomAttributesCache, &t2306_TI, &t2306_0_0_0, &t2306_1_0_0, t2306_IOs, &t2306_GC, NULL, NULL, NULL, t2306_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2306)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4304_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern MethodInfo m25463_MI;
static PropertyInfo t4304____Count_PropertyInfo = 
{
	&t4304_TI, "Count", &m25463_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25464_MI;
static PropertyInfo t4304____IsReadOnly_PropertyInfo = 
{
	&t4304_TI, "IsReadOnly", &m25464_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4304_PIs[] =
{
	&t4304____Count_PropertyInfo,
	&t4304____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4304_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25463_MI = 
{
	"get_Count", NULL, &t4304_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4304_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25464_MI = 
{
	"get_IsReadOnly", NULL, &t4304_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t4304_m25465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t4304_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25465_MI = 
{
	"Add", NULL, &t4304_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4304_m25465_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4304_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25466_MI = 
{
	"Clear", NULL, &t4304_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t4304_m25467_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t4304_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25467_MI = 
{
	"Contains", NULL, &t4304_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4304_m25467_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2303_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4304_m25468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2303_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4304_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25468_MI = 
{
	"CopyTo", NULL, &t4304_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4304_m25468_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t4304_m25469_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t4304_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25469_MI = 
{
	"Remove", NULL, &t4304_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4304_m25469_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4304_MIs[] =
{
	&m25463_MI,
	&m25464_MI,
	&m25465_MI,
	&m25466_MI,
	&m25467_MI,
	&m25468_MI,
	&m25469_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4306_TI;
static TypeInfo* t4304_ITIs[] = 
{
	&t611_TI,
	&t4306_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4304_0_0_0;
extern Il2CppType t4304_1_0_0;
struct t4304;
extern TypeInfo t4304_TI;
extern Il2CppGenericClass t4304_GC;
TypeInfo t4304_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4304_MIs, t4304_PIs, NULL, NULL, NULL, NULL, NULL, &t4304_TI, t4304_ITIs, NULL, &EmptyCustomAttributesCache, &t4304_TI, &t4304_0_0_0, &t4304_1_0_0, NULL, &t4304_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4305_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern MethodInfo m25470_MI;
extern MethodInfo m25471_MI;
static PropertyInfo t4305____Item_PropertyInfo = 
{
	&t4305_TI, "Item", &m25470_MI, &m25471_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4305_PIs[] =
{
	&t4305____Item_PropertyInfo,
	NULL
};
extern Il2CppType t294_0_0_0;
static ParameterInfo t4305_m25472_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t4305_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25472_MI = 
{
	"IndexOf", NULL, &t4305_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4305_m25472_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t4305_m25473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t4305_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25473_MI = 
{
	"Insert", NULL, &t4305_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4305_m25473_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4305_m25474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4305_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25474_MI = 
{
	"RemoveAt", NULL, &t4305_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4305_m25474_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4305_m25470_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4305_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25470_MI = 
{
	"get_Item", NULL, &t4305_TI, &t294_0_0_0, RuntimeInvoker_t28_t47, t4305_m25470_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t4305_m25471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t4305_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25471_MI = 
{
	"set_Item", NULL, &t4305_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4305_m25471_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4305_MIs[] =
{
	&m25472_MI,
	&m25473_MI,
	&m25474_MI,
	&m25470_MI,
	&m25471_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4304_TI;
extern TypeInfo t4306_TI;
static TypeInfo* t4305_ITIs[] = 
{
	&t611_TI,
	&t4304_TI,
	&t4306_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4305_0_0_0;
extern Il2CppType t4305_1_0_0;
struct t4305;
extern TypeInfo t4305_TI;
extern Il2CppGenericClass t4305_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4305_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4305_MIs, t4305_PIs, NULL, NULL, NULL, NULL, NULL, &t4305_TI, t4305_ITIs, NULL, &t1418__CustomAttributeCache, &t4305_TI, &t4305_0_0_0, &t4305_1_0_0, NULL, &t4305_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2305_TI;

extern TypeInfo t2305_TI;
extern TypeInfo t294_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t2302_TI;
extern MethodInfo m12988_MI;
extern MethodInfo m7033_MI;


// Metadata Definition System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>
extern Il2CppType t2302_0_0_1;
FieldInfo t2305_f0_FieldInfo = 
{
	"parent", &t2302_0_0_1, &t2305_TI, offsetof(t2305, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2305_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2305_TI, offsetof(t2305, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2305_f2_FieldInfo = 
{
	"_version", &t47_0_0_1, &t2305_TI, offsetof(t2305, f2) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2305_FIs[] =
{
	&t2305_f0_FieldInfo,
	&t2305_f1_FieldInfo,
	&t2305_f2_FieldInfo,
	NULL
};
extern MethodInfo m12985_MI;
static PropertyInfo t2305____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2305_TI, "System.Collections.IEnumerator.Current", &m12985_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12988_MI;
static PropertyInfo t2305____Current_PropertyInfo = 
{
	&t2305_TI, "Current", &m12988_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2305_PIs[] =
{
	&t2305____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2305____Current_PropertyInfo,
	NULL
};
extern Il2CppType t2302_0_0_0;
static ParameterInfo t2305_m12984_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t2302_0_0_0},
};
extern TypeInfo t2305_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12984_MI = 
{
	".ctor", (methodPointerType)&m8830_gshared, &t2305_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2305_m12984_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2305_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12985_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8831_gshared, &t2305_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2305_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12986_MI = 
{
	"Dispose", (methodPointerType)&m8832_gshared, &t2305_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2305_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12987_MI = 
{
	"MoveNext", (methodPointerType)&m8833_gshared, &t2305_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2305_TI;
extern Il2CppType t294_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12988_MI = 
{
	"get_Current", (methodPointerType)&m8834_gshared, &t2305_TI, &t294_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2305_MIs[] =
{
	&m12984_MI,
	&m12985_MI,
	&m12986_MI,
	&m12987_MI,
	&m12988_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12985_MI;
extern MethodInfo m12987_MI;
extern MethodInfo m12986_MI;
extern MethodInfo m12988_MI;
static MethodInfo* t2305_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12985_MI,
	&m12987_MI,
	&m12986_MI,
	&m12988_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2304_TI;
static TypeInfo* t2305_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2304_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2304_TI;
static Il2CppInterfaceOffsetPair t2305_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2304_TI, 7},
};
extern MethodInfo m12988_MI;
extern TypeInfo t294_TI;
static void* t2305_RGCTXData[2] = 
{
	&m12988_MI,
	&t294_TI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2305_0_0_0;
extern Il2CppType t2305_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2305_TI;
extern Il2CppGenericClass t2305_GC;
extern TypeInfo t699_TI;
TypeInfo t2305_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t2305_MIs, t2305_PIs, t2305_FIs, NULL, &t26_TI, NULL, &t699_TI, &t2305_TI, t2305_ITIs, t2305_VT, &EmptyCustomAttributesCache, &t2305_TI, &t2305_0_0_0, &t2305_1_0_0, t2305_IOs, &t2305_GC, NULL, NULL, NULL, t2305_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2305)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t307_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t307_m2138_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2138_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t307_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t307_m2138_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
static ParameterInfo t307_m12989_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12989_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t307_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t307_m12989_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t294_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t307_m12990_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t294_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t307_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12990_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t307_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t307_m12990_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t307_m12991_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12991_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t307_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t307_m12991_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t307_MIs[] =
{
	&m2138_MI,
	&m12989_MI,
	&m12990_MI,
	&m12991_MI,
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
extern MethodInfo m12989_MI;
extern MethodInfo m12990_MI;
extern MethodInfo m12991_MI;
static MethodInfo* t307_VT[] =
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
	&m12989_MI,
	&m12990_MI,
	&m12991_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t307_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t307_0_0_0;
extern Il2CppType t307_1_0_0;
extern TypeInfo t221_TI;
struct t307;
extern TypeInfo t307_TI;
extern Il2CppGenericClass t307_GC;
TypeInfo t307_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t307_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t307_TI, NULL, t307_VT, &EmptyCustomAttributesCache, &t307_TI, &t307_0_0_0, &t307_1_0_0, t307_IOs, &t307_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t307), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3506_TI;

#include "t309.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.BaseVertexEffect>
extern MethodInfo m25475_MI;
static PropertyInfo t3506____Current_PropertyInfo = 
{
	&t3506_TI, "Current", &m25475_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3506_PIs[] =
{
	&t3506____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3506_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25475_MI = 
{
	"get_Current", NULL, &t3506_TI, &t309_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3506_MIs[] =
{
	&m25475_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3506_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3506_0_0_0;
extern Il2CppType t3506_1_0_0;
struct t3506;
extern TypeInfo t3506_TI;
extern Il2CppGenericClass t3506_GC;
TypeInfo t3506_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3506_MIs, t3506_PIs, NULL, NULL, NULL, NULL, NULL, &t3506_TI, t3506_ITIs, NULL, &EmptyCustomAttributesCache, &t3506_TI, &t3506_0_0_0, &t3506_1_0_0, NULL, &t3506_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2307.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2307_TI;
#include "t2307MD.h"

extern TypeInfo t2307_TI;
extern TypeInfo t309_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m12996_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19097_MI;
struct t29;
#define m19097(__this, p0, method) (t309 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19097_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.BaseVertexEffect>
extern Il2CppType t29_0_0_1;
FieldInfo t2307_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2307_TI, offsetof(t2307, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2307_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2307_TI, offsetof(t2307, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2307_FIs[] =
{
	&t2307_f0_FieldInfo,
	&t2307_f1_FieldInfo,
	NULL
};
extern MethodInfo m12993_MI;
static PropertyInfo t2307____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2307_TI, "System.Collections.IEnumerator.Current", &m12993_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m12996_MI;
static PropertyInfo t2307____Current_PropertyInfo = 
{
	&t2307_TI, "Current", &m12996_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2307_PIs[] =
{
	&t2307____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2307____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2307_m12992_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12992_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2307_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2307_m12992_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2307_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12993_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2307_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12994_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2307_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2307_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m12995_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2307_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2307_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12996_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2307_TI, &t309_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2307_MIs[] =
{
	&m12992_MI,
	&m12993_MI,
	&m12994_MI,
	&m12995_MI,
	&m12996_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12993_MI;
extern MethodInfo m12995_MI;
extern MethodInfo m12994_MI;
extern MethodInfo m12996_MI;
static MethodInfo* t2307_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12993_MI,
	&m12995_MI,
	&m12994_MI,
	&m12996_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3506_TI;
static TypeInfo* t2307_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3506_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3506_TI;
static Il2CppInterfaceOffsetPair t2307_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3506_TI, 7},
};
extern MethodInfo m12996_MI;
extern TypeInfo t309_TI;
extern MethodInfo m19097_MI;
static void* t2307_RGCTXData[3] = 
{
	&m12996_MI,
	&t309_TI,
	&m19097_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2307_0_0_0;
extern Il2CppType t2307_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2307_TI;
extern Il2CppGenericClass t2307_GC;
extern TypeInfo t29_TI;
TypeInfo t2307_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2307_MIs, t2307_PIs, t2307_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2307_TI, t2307_ITIs, t2307_VT, &EmptyCustomAttributesCache, &t2307_TI, &t2307_0_0_0, &t2307_1_0_0, t2307_IOs, &t2307_GC, NULL, NULL, NULL, t2307_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2307)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4307_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.BaseVertexEffect>
extern MethodInfo m25476_MI;
static PropertyInfo t4307____Count_PropertyInfo = 
{
	&t4307_TI, "Count", &m25476_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25477_MI;
static PropertyInfo t4307____IsReadOnly_PropertyInfo = 
{
	&t4307_TI, "IsReadOnly", &m25477_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4307_PIs[] =
{
	&t4307____Count_PropertyInfo,
	&t4307____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4307_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25476_MI = 
{
	"get_Count", NULL, &t4307_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4307_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25477_MI = 
{
	"get_IsReadOnly", NULL, &t4307_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t4307_m25478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t4307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25478_MI = 
{
	"Add", NULL, &t4307_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4307_m25478_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25479_MI = 
{
	"Clear", NULL, &t4307_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t4307_m25480_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t4307_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25480_MI = 
{
	"Contains", NULL, &t4307_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4307_m25480_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3316_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4307_m25481_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3316_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4307_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25481_MI = 
{
	"CopyTo", NULL, &t4307_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4307_m25481_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t309_0_0_0;
static ParameterInfo t4307_m25482_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t4307_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25482_MI = 
{
	"Remove", NULL, &t4307_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4307_m25482_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4307_MIs[] =
{
	&m25476_MI,
	&m25477_MI,
	&m25478_MI,
	&m25479_MI,
	&m25480_MI,
	&m25481_MI,
	&m25482_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4309_TI;
static TypeInfo* t4307_ITIs[] = 
{
	&t611_TI,
	&t4309_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4307_0_0_0;
extern Il2CppType t4307_1_0_0;
struct t4307;
extern TypeInfo t4307_TI;
extern Il2CppGenericClass t4307_GC;
TypeInfo t4307_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4307_MIs, t4307_PIs, NULL, NULL, NULL, NULL, NULL, &t4307_TI, t4307_ITIs, NULL, &EmptyCustomAttributesCache, &t4307_TI, &t4307_0_0_0, &t4307_1_0_0, NULL, &t4307_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4309_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.BaseVertexEffect>
extern TypeInfo t4309_TI;
extern Il2CppType t3506_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25483_MI = 
{
	"GetEnumerator", NULL, &t4309_TI, &t3506_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4309_MIs[] =
{
	&m25483_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4309_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4309_0_0_0;
extern Il2CppType t4309_1_0_0;
struct t4309;
extern TypeInfo t4309_TI;
extern Il2CppGenericClass t4309_GC;
TypeInfo t4309_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4309_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4309_TI, t4309_ITIs, NULL, &EmptyCustomAttributesCache, &t4309_TI, &t4309_0_0_0, &t4309_1_0_0, NULL, &t4309_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4308_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.BaseVertexEffect>
extern MethodInfo m25484_MI;
extern MethodInfo m25485_MI;
static PropertyInfo t4308____Item_PropertyInfo = 
{
	&t4308_TI, "Item", &m25484_MI, &m25485_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4308_PIs[] =
{
	&t4308____Item_PropertyInfo,
	NULL
};
extern Il2CppType t309_0_0_0;
static ParameterInfo t4308_m25486_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t4308_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25486_MI = 
{
	"IndexOf", NULL, &t4308_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4308_m25486_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t4308_m25487_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t4308_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25487_MI = 
{
	"Insert", NULL, &t4308_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4308_m25487_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4308_m25488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4308_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25488_MI = 
{
	"RemoveAt", NULL, &t4308_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4308_m25488_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4308_m25484_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4308_TI;
extern Il2CppType t309_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25484_MI = 
{
	"get_Item", NULL, &t4308_TI, &t309_0_0_0, RuntimeInvoker_t28_t47, t4308_m25484_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t4308_m25485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t4308_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25485_MI = 
{
	"set_Item", NULL, &t4308_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4308_m25485_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4308_MIs[] =
{
	&m25486_MI,
	&m25487_MI,
	&m25488_MI,
	&m25484_MI,
	&m25485_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4307_TI;
extern TypeInfo t4309_TI;
static TypeInfo* t4308_ITIs[] = 
{
	&t611_TI,
	&t4307_TI,
	&t4309_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4308_0_0_0;
extern Il2CppType t4308_1_0_0;
struct t4308;
extern TypeInfo t4308_TI;
extern Il2CppGenericClass t4308_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4308_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4308_MIs, t4308_PIs, NULL, NULL, NULL, NULL, NULL, &t4308_TI, t4308_ITIs, NULL, &t1418__CustomAttributeCache, &t4308_TI, &t4308_0_0_0, &t4308_1_0_0, NULL, &t4308_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4310_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IVertexModifier>
extern MethodInfo m25489_MI;
static PropertyInfo t4310____Count_PropertyInfo = 
{
	&t4310_TI, "Count", &m25489_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m25490_MI;
static PropertyInfo t4310____IsReadOnly_PropertyInfo = 
{
	&t4310_TI, "IsReadOnly", &m25490_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4310_PIs[] =
{
	&t4310____Count_PropertyInfo,
	&t4310____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4310_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25489_MI = 
{
	"get_Count", NULL, &t4310_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4310_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m25490_MI = 
{
	"get_IsReadOnly", NULL, &t4310_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4310_m25491_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4310_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25491_MI = 
{
	"Add", NULL, &t4310_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4310_m25491_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4310_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25492_MI = 
{
	"Clear", NULL, &t4310_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4310_m25493_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4310_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25493_MI = 
{
	"Contains", NULL, &t4310_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4310_m25493_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3317_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4310_m25494_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3317_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4310_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25494_MI = 
{
	"CopyTo", NULL, &t4310_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4310_m25494_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4310_m25495_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4310_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25495_MI = 
{
	"Remove", NULL, &t4310_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4310_m25495_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4310_MIs[] =
{
	&m25489_MI,
	&m25490_MI,
	&m25491_MI,
	&m25492_MI,
	&m25493_MI,
	&m25494_MI,
	&m25495_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4312_TI;
static TypeInfo* t4310_ITIs[] = 
{
	&t611_TI,
	&t4312_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4310_0_0_0;
extern Il2CppType t4310_1_0_0;
struct t4310;
extern TypeInfo t4310_TI;
extern Il2CppGenericClass t4310_GC;
TypeInfo t4310_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4310_MIs, t4310_PIs, NULL, NULL, NULL, NULL, NULL, &t4310_TI, t4310_ITIs, NULL, &EmptyCustomAttributesCache, &t4310_TI, &t4310_0_0_0, &t4310_1_0_0, NULL, &t4310_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4312_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IVertexModifier>
extern TypeInfo t4312_TI;
extern Il2CppType t3507_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25496_MI = 
{
	"GetEnumerator", NULL, &t4312_TI, &t3507_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4312_MIs[] =
{
	&m25496_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4312_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4312_0_0_0;
extern Il2CppType t4312_1_0_0;
struct t4312;
extern TypeInfo t4312_TI;
extern Il2CppGenericClass t4312_GC;
TypeInfo t4312_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4312_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4312_TI, t4312_ITIs, NULL, &EmptyCustomAttributesCache, &t4312_TI, &t4312_0_0_0, &t4312_1_0_0, NULL, &t4312_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3507_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IVertexModifier>
extern MethodInfo m25497_MI;
static PropertyInfo t3507____Current_PropertyInfo = 
{
	&t3507_TI, "Current", &m25497_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3507_PIs[] =
{
	&t3507____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3507_TI;
extern Il2CppType t368_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25497_MI = 
{
	"get_Current", NULL, &t3507_TI, &t368_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3507_MIs[] =
{
	&m25497_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3507_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3507_0_0_0;
extern Il2CppType t3507_1_0_0;
struct t3507;
extern TypeInfo t3507_TI;
extern Il2CppGenericClass t3507_GC;
TypeInfo t3507_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3507_MIs, t3507_PIs, NULL, NULL, NULL, NULL, NULL, &t3507_TI, t3507_ITIs, NULL, &EmptyCustomAttributesCache, &t3507_TI, &t3507_0_0_0, &t3507_1_0_0, NULL, &t3507_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2308.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2308_TI;
#include "t2308MD.h"

extern TypeInfo t2308_TI;
extern TypeInfo t368_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m13001_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m19108_MI;
struct t29;
#define m19108(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m19108_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IVertexModifier>
extern Il2CppType t29_0_0_1;
FieldInfo t2308_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2308_TI, offsetof(t2308, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2308_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2308_TI, offsetof(t2308, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2308_FIs[] =
{
	&t2308_f0_FieldInfo,
	&t2308_f1_FieldInfo,
	NULL
};
extern MethodInfo m12998_MI;
static PropertyInfo t2308____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2308_TI, "System.Collections.IEnumerator.Current", &m12998_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m13001_MI;
static PropertyInfo t2308____Current_PropertyInfo = 
{
	&t2308_TI, "Current", &m13001_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2308_PIs[] =
{
	&t2308____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2308____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2308_m12997_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2308_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12997_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2308_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2308_m12997_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2308_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12998_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2308_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2308_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m12999_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2308_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2308_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m13000_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2308_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2308_TI;
extern Il2CppType t368_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m13001_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2308_TI, &t368_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2308_MIs[] =
{
	&m12997_MI,
	&m12998_MI,
	&m12999_MI,
	&m13000_MI,
	&m13001_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m12998_MI;
extern MethodInfo m13000_MI;
extern MethodInfo m12999_MI;
extern MethodInfo m13001_MI;
static MethodInfo* t2308_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m12998_MI,
	&m13000_MI,
	&m12999_MI,
	&m13001_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3507_TI;
static TypeInfo* t2308_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3507_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3507_TI;
static Il2CppInterfaceOffsetPair t2308_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3507_TI, 7},
};
extern MethodInfo m13001_MI;
extern TypeInfo t368_TI;
extern MethodInfo m19108_MI;
static void* t2308_RGCTXData[3] = 
{
	&m13001_MI,
	&t368_TI,
	&m19108_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2308_0_0_0;
extern Il2CppType t2308_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2308_TI;
extern Il2CppGenericClass t2308_GC;
extern TypeInfo t29_TI;
TypeInfo t2308_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2308_MIs, t2308_PIs, t2308_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2308_TI, t2308_ITIs, t2308_VT, &EmptyCustomAttributesCache, &t2308_TI, &t2308_0_0_0, &t2308_1_0_0, t2308_IOs, &t2308_GC, NULL, NULL, NULL, t2308_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2308)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4311_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IVertexModifier>
extern MethodInfo m25498_MI;
extern MethodInfo m25499_MI;
static PropertyInfo t4311____Item_PropertyInfo = 
{
	&t4311_TI, "Item", &m25498_MI, &m25499_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4311_PIs[] =
{
	&t4311____Item_PropertyInfo,
	NULL
};
extern Il2CppType t368_0_0_0;
static ParameterInfo t4311_m25500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4311_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25500_MI = 
{
	"IndexOf", NULL, &t4311_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4311_m25500_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t368_0_0_0;
static ParameterInfo t4311_m25501_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4311_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25501_MI = 
{
	"Insert", NULL, &t4311_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4311_m25501_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4311_m25502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4311_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25502_MI = 
{
	"RemoveAt", NULL, &t4311_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4311_m25502_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4311_m25498_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4311_TI;
extern Il2CppType t368_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m25498_MI = 
{
	"get_Item", NULL, &t4311_TI, &t368_0_0_0, RuntimeInvoker_t28_t47, t4311_m25498_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t368_0_0_0;
static ParameterInfo t4311_m25499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t368_0_0_0},
};
extern TypeInfo t4311_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m25499_MI = 
{
	"set_Item", NULL, &t4311_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4311_m25499_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4311_MIs[] =
{
	&m25500_MI,
	&m25501_MI,
	&m25502_MI,
	&m25498_MI,
	&m25499_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4310_TI;
extern TypeInfo t4312_TI;
static TypeInfo* t4311_ITIs[] = 
{
	&t611_TI,
	&t4310_TI,
	&t4312_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4311_0_0_0;
extern Il2CppType t4311_1_0_0;
struct t4311;
extern TypeInfo t4311_TI;
extern Il2CppGenericClass t4311_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4311_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4311_MIs, t4311_PIs, NULL, NULL, NULL, NULL, NULL, &t4311_TI, t4311_ITIs, NULL, &t1418__CustomAttributeCache, &t4311_TI, &t4311_0_0_0, &t4311_1_0_0, NULL, &t4311_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#include "t2309.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2309_TI;
#include "t2309MD.h"

#include "t2310.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2309_TI;
extern TypeInfo t309_TI;
extern TypeInfo t2310_TI;
extern TypeInfo t30_TI;
#include "t2310MD.h"
extern MethodInfo m13004_MI;
extern MethodInfo m13006_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.BaseVertexEffect>
extern Il2CppType t333_0_0_33;
FieldInfo t2309_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2309_TI, offsetof(t2309, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2309_FIs[] =
{
	&t2309_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t309_0_0_0;
static ParameterInfo t2309_m13002_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t309_0_0_0},
};
extern TypeInfo t2309_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m13002_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2309_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2309_m13002_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2309_m13003_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2309_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m13003_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2309_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2309_m13003_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2309_MIs[] =
{
	&m13002_MI,
	&m13003_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m13003_MI;
extern MethodInfo m13007_MI;
static MethodInfo* t2309_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m13003_MI,
	&m13007_MI,
};
extern Il2CppType t2311_0_0_0;
extern TypeInfo t2311_TI;
extern MethodInfo m19118_MI;
extern TypeInfo t309_TI;
extern MethodInfo m13009_MI;
extern MethodInfo m13004_MI;
extern TypeInfo t309_TI;
extern MethodInfo m13006_MI;
static void* t2309_RGCTXData[8] = 
{
	(void*)&t2311_0_0_0,
	&t2311_TI,
	&m19118_MI,
	&t309_TI,
	&m13009_MI,
	&m13004_MI,
	&t309_TI,
	&m13006_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2309_0_0_0;
extern Il2CppType t2309_1_0_0;
extern TypeInfo t2310_TI;
struct t2309;
extern TypeInfo t2309_TI;
extern Il2CppGenericClass t2309_GC;
TypeInfo t2309_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2309_MIs, NULL, t2309_FIs, NULL, &t2310_TI, NULL, NULL, &t2309_TI, NULL, t2309_VT, &EmptyCustomAttributesCache, &t2309_TI, &t2309_0_0_0, &t2309_1_0_0, NULL, &t2309_GC, NULL, NULL, NULL, t2309_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2309), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
