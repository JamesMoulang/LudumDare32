#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2847.h"
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
extern TypeInfo t2847_TI;
#include "t2847MD.h"

#include "t28.h"
#include "t1012.h"
#include "t47.h"
#include "t18.h"
#include "t1287.h"
#include "t30.h"
#include "t29.h"
#include "t31.h"
extern TypeInfo t2847_TI;
extern TypeInfo t1012_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
#include "t29MD.h"
extern MethodInfo m16132_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22114_MI;
struct t29;
#include "t1251.h"
 int32_t m22114 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22114_MI;


extern MethodInfo m16128_MI;
 void m16128 (t2847 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16129_MI;
 t28 * m16129 (t2847 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16132(__this, &m16132_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1012_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16130_MI;
 void m16130 (t2847 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16131_MI;
 bool m16131 (t2847 * __this, MethodInfo* method){
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
extern MethodInfo m16132_MI;
 int32_t m16132 (t2847 * __this, MethodInfo* method){
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
		int32_t L_8 = m22114(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22114_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType t29_0_0_1;
FieldInfo t2847_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2847_TI, offsetof(t2847, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2847_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2847_TI, offsetof(t2847, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2847_FIs[] =
{
	&t2847_f0_FieldInfo,
	&t2847_f1_FieldInfo,
	NULL
};
extern MethodInfo m16129_MI;
static PropertyInfo t2847____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2847_TI, "System.Collections.IEnumerator.Current", &m16129_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16132_MI;
static PropertyInfo t2847____Current_PropertyInfo = 
{
	&t2847_TI, "Current", &m16132_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2847_PIs[] =
{
	&t2847____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2847____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2847_m16128_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2847_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16128_MI = 
{
	".ctor", (methodPointerType)&m16128, &t2847_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2847_m16128_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16129_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16129, &t2847_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16130_MI = 
{
	"Dispose", (methodPointerType)&m16130, &t2847_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16131_MI = 
{
	"MoveNext", (methodPointerType)&m16131, &t2847_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2847_TI;
extern Il2CppType t1012_0_0_0;
extern void* RuntimeInvoker_t1012 (MethodInfo* method, void* obj, void** args);
MethodInfo m16132_MI = 
{
	"get_Current", (methodPointerType)&m16132, &t2847_TI, &t1012_0_0_0, RuntimeInvoker_t1012, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2847_MIs[] =
{
	&m16128_MI,
	&m16129_MI,
	&m16130_MI,
	&m16131_MI,
	&m16132_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16129_MI;
extern MethodInfo m16131_MI;
extern MethodInfo m16130_MI;
extern MethodInfo m16132_MI;
static MethodInfo* t2847_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16129_MI,
	&m16131_MI,
	&m16130_MI,
	&m16132_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3767_TI;
static TypeInfo* t2847_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3767_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3767_TI;
static Il2CppInterfaceOffsetPair t2847_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3767_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2847_0_0_0;
extern Il2CppType t2847_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2847_TI;
extern Il2CppGenericClass t2847_GC;
extern TypeInfo t29_TI;
TypeInfo t2847_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2847_MIs, t2847_PIs, t2847_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2847_TI, t2847_ITIs, t2847_VT, &EmptyCustomAttributesCache, &t2847_TI, &t2847_0_0_0, &t2847_1_0_0, t2847_IOs, &t2847_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2847)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5069_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m29179_MI;
static PropertyInfo t5069____Count_PropertyInfo = 
{
	&t5069_TI, "Count", &m29179_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29180_MI;
static PropertyInfo t5069____IsReadOnly_PropertyInfo = 
{
	&t5069_TI, "IsReadOnly", &m29180_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5069_PIs[] =
{
	&t5069____Count_PropertyInfo,
	&t5069____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5069_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29179_MI = 
{
	"get_Count", NULL, &t5069_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5069_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29180_MI = 
{
	"get_IsReadOnly", NULL, &t5069_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1012_0_0_0;
static ParameterInfo t5069_m29181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1012_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29181_MI = 
{
	"Add", NULL, &t5069_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5069_m29181_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5069_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29182_MI = 
{
	"Clear", NULL, &t5069_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1012_0_0_0;
static ParameterInfo t5069_m29183_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1012_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29183_MI = 
{
	"Contains", NULL, &t5069_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5069_m29183_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3096_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5069_m29184_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3096_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29184_MI = 
{
	"CopyTo", NULL, &t5069_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5069_m29184_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1012_0_0_0;
static ParameterInfo t5069_m29185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1012_0_0_0},
};
extern TypeInfo t5069_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29185_MI = 
{
	"Remove", NULL, &t5069_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5069_m29185_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5069_MIs[] =
{
	&m29179_MI,
	&m29180_MI,
	&m29181_MI,
	&m29182_MI,
	&m29183_MI,
	&m29184_MI,
	&m29185_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5071_TI;
static TypeInfo* t5069_ITIs[] = 
{
	&t611_TI,
	&t5071_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5069_0_0_0;
extern Il2CppType t5069_1_0_0;
struct t5069;
extern TypeInfo t5069_TI;
extern Il2CppGenericClass t5069_GC;
TypeInfo t5069_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5069_MIs, t5069_PIs, NULL, NULL, NULL, NULL, NULL, &t5069_TI, t5069_ITIs, NULL, &EmptyCustomAttributesCache, &t5069_TI, &t5069_0_0_0, &t5069_1_0_0, NULL, &t5069_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5071_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>
extern TypeInfo t5071_TI;
extern Il2CppType t3767_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29186_MI = 
{
	"GetEnumerator", NULL, &t5071_TI, &t3767_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5071_MIs[] =
{
	&m29186_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5071_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5071_0_0_0;
extern Il2CppType t5071_1_0_0;
struct t5071;
extern TypeInfo t5071_TI;
extern Il2CppGenericClass t5071_GC;
TypeInfo t5071_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5071_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5071_TI, t5071_ITIs, NULL, &EmptyCustomAttributesCache, &t5071_TI, &t5071_0_0_0, &t5071_1_0_0, NULL, &t5071_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5070_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo m29187_MI;
extern MethodInfo m29188_MI;
static PropertyInfo t5070____Item_PropertyInfo = 
{
	&t5070_TI, "Item", &m29187_MI, &m29188_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5070_PIs[] =
{
	&t5070____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1012_0_0_0;
static ParameterInfo t5070_m29189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1012_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29189_MI = 
{
	"IndexOf", NULL, &t5070_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5070_m29189_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1012_0_0_0;
static ParameterInfo t5070_m29190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1012_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29190_MI = 
{
	"Insert", NULL, &t5070_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5070_m29190_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5070_m29191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29191_MI = 
{
	"RemoveAt", NULL, &t5070_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5070_m29191_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5070_m29187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t1012_0_0_0;
extern void* RuntimeInvoker_t1012_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29187_MI = 
{
	"get_Item", NULL, &t5070_TI, &t1012_0_0_0, RuntimeInvoker_t1012_t47, t5070_m29187_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1012_0_0_0;
static ParameterInfo t5070_m29188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1012_0_0_0},
};
extern TypeInfo t5070_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29188_MI = 
{
	"set_Item", NULL, &t5070_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5070_m29188_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5070_MIs[] =
{
	&m29189_MI,
	&m29190_MI,
	&m29191_MI,
	&m29187_MI,
	&m29188_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5069_TI;
extern TypeInfo t5071_TI;
static TypeInfo* t5070_ITIs[] = 
{
	&t611_TI,
	&t5069_TI,
	&t5071_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5070_0_0_0;
extern Il2CppType t5070_1_0_0;
struct t5070;
extern TypeInfo t5070_TI;
extern Il2CppGenericClass t5070_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5070_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5070_MIs, t5070_PIs, NULL, NULL, NULL, NULL, NULL, &t5070_TI, t5070_ITIs, NULL, &t1418__CustomAttributeCache, &t5070_TI, &t5070_0_0_0, &t5070_1_0_0, NULL, &t5070_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3768_TI;

#include "t1013.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m29192_MI;
static PropertyInfo t3768____Current_PropertyInfo = 
{
	&t3768_TI, "Current", &m29192_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3768_PIs[] =
{
	&t3768____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3768_TI;
extern Il2CppType t1013_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29192_MI = 
{
	"get_Current", NULL, &t3768_TI, &t1013_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3768_MIs[] =
{
	&m29192_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3768_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3768_0_0_0;
extern Il2CppType t3768_1_0_0;
struct t3768;
extern TypeInfo t3768_TI;
extern Il2CppGenericClass t3768_GC;
TypeInfo t3768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3768_MIs, t3768_PIs, NULL, NULL, NULL, NULL, NULL, &t3768_TI, t3768_ITIs, NULL, &EmptyCustomAttributesCache, &t3768_TI, &t3768_0_0_0, &t3768_1_0_0, NULL, &t3768_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2848_TI;
#include "t2848MD.h"

extern TypeInfo t2848_TI;
extern TypeInfo t1013_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16137_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22125_MI;
struct t29;
struct t29;
 t28 * m16643_gshared (t29 * __this, int32_t p0, MethodInfo* method);
#define m16643(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
#define m22125(__this, p0, method) (t1013 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22125_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2848_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2848_TI, offsetof(t2848, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2848_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2848_TI, offsetof(t2848, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2848_FIs[] =
{
	&t2848_f0_FieldInfo,
	&t2848_f1_FieldInfo,
	NULL
};
extern MethodInfo m16134_MI;
static PropertyInfo t2848____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2848_TI, "System.Collections.IEnumerator.Current", &m16134_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16137_MI;
static PropertyInfo t2848____Current_PropertyInfo = 
{
	&t2848_TI, "Current", &m16137_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2848_PIs[] =
{
	&t2848____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2848____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2848_m16133_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2848_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16133_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2848_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2848_m16133_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16134_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2848_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16135_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2848_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16136_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2848_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2848_TI;
extern Il2CppType t1013_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16137_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2848_TI, &t1013_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2848_MIs[] =
{
	&m16133_MI,
	&m16134_MI,
	&m16135_MI,
	&m16136_MI,
	&m16137_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16134_MI;
extern MethodInfo m16136_MI;
extern MethodInfo m16135_MI;
extern MethodInfo m16137_MI;
static MethodInfo* t2848_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16134_MI,
	&m16136_MI,
	&m16135_MI,
	&m16137_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3768_TI;
static TypeInfo* t2848_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3768_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3768_TI;
static Il2CppInterfaceOffsetPair t2848_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3768_TI, 7},
};
extern MethodInfo m16137_MI;
extern TypeInfo t1013_TI;
extern MethodInfo m22125_MI;
static void* t2848_RGCTXData[3] = 
{
	&m16137_MI,
	&t1013_TI,
	&m22125_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2848_0_0_0;
extern Il2CppType t2848_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2848_TI;
extern Il2CppGenericClass t2848_GC;
extern TypeInfo t29_TI;
TypeInfo t2848_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2848_MIs, t2848_PIs, t2848_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2848_TI, t2848_ITIs, t2848_VT, &EmptyCustomAttributesCache, &t2848_TI, &t2848_0_0_0, &t2848_1_0_0, t2848_IOs, &t2848_GC, NULL, NULL, NULL, t2848_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2848)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5072_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m29193_MI;
static PropertyInfo t5072____Count_PropertyInfo = 
{
	&t5072_TI, "Count", &m29193_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29194_MI;
static PropertyInfo t5072____IsReadOnly_PropertyInfo = 
{
	&t5072_TI, "IsReadOnly", &m29194_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5072_PIs[] =
{
	&t5072____Count_PropertyInfo,
	&t5072____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5072_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29193_MI = 
{
	"get_Count", NULL, &t5072_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5072_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29194_MI = 
{
	"get_IsReadOnly", NULL, &t5072_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5072_m29195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29195_MI = 
{
	"Add", NULL, &t5072_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5072_m29195_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5072_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29196_MI = 
{
	"Clear", NULL, &t5072_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5072_m29197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29197_MI = 
{
	"Contains", NULL, &t5072_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5072_m29197_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3097_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5072_m29198_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3097_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29198_MI = 
{
	"CopyTo", NULL, &t5072_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5072_m29198_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5072_m29199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5072_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29199_MI = 
{
	"Remove", NULL, &t5072_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5072_m29199_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5072_MIs[] =
{
	&m29193_MI,
	&m29194_MI,
	&m29195_MI,
	&m29196_MI,
	&m29197_MI,
	&m29198_MI,
	&m29199_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5074_TI;
static TypeInfo* t5072_ITIs[] = 
{
	&t611_TI,
	&t5074_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5072_0_0_0;
extern Il2CppType t5072_1_0_0;
struct t5072;
extern TypeInfo t5072_TI;
extern Il2CppGenericClass t5072_GC;
TypeInfo t5072_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5072_MIs, t5072_PIs, NULL, NULL, NULL, NULL, NULL, &t5072_TI, t5072_ITIs, NULL, &EmptyCustomAttributesCache, &t5072_TI, &t5072_0_0_0, &t5072_1_0_0, NULL, &t5072_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5074_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern TypeInfo t5074_TI;
extern Il2CppType t3768_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29200_MI = 
{
	"GetEnumerator", NULL, &t5074_TI, &t3768_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5074_MIs[] =
{
	&m29200_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5074_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5074_0_0_0;
extern Il2CppType t5074_1_0_0;
struct t5074;
extern TypeInfo t5074_TI;
extern Il2CppGenericClass t5074_GC;
TypeInfo t5074_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5074_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5074_TI, t5074_ITIs, NULL, &EmptyCustomAttributesCache, &t5074_TI, &t5074_0_0_0, &t5074_1_0_0, NULL, &t5074_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5073_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo m29201_MI;
extern MethodInfo m29202_MI;
static PropertyInfo t5073____Item_PropertyInfo = 
{
	&t5073_TI, "Item", &m29201_MI, &m29202_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5073_PIs[] =
{
	&t5073____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5073_m29203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29203_MI = 
{
	"IndexOf", NULL, &t5073_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5073_m29203_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5073_m29204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29204_MI = 
{
	"Insert", NULL, &t5073_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5073_m29204_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5073_m29205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29205_MI = 
{
	"RemoveAt", NULL, &t5073_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5073_m29205_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5073_m29201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t1013_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29201_MI = 
{
	"get_Item", NULL, &t5073_TI, &t1013_0_0_0, RuntimeInvoker_t28_t47, t5073_m29201_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1013_0_0_0;
static ParameterInfo t5073_m29202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1013_0_0_0},
};
extern TypeInfo t5073_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29202_MI = 
{
	"set_Item", NULL, &t5073_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5073_m29202_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5073_MIs[] =
{
	&m29203_MI,
	&m29204_MI,
	&m29205_MI,
	&m29201_MI,
	&m29202_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5072_TI;
extern TypeInfo t5074_TI;
static TypeInfo* t5073_ITIs[] = 
{
	&t611_TI,
	&t5072_TI,
	&t5074_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5073_0_0_0;
extern Il2CppType t5073_1_0_0;
struct t5073;
extern TypeInfo t5073_TI;
extern Il2CppGenericClass t5073_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5073_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5073_MIs, t5073_PIs, NULL, NULL, NULL, NULL, NULL, &t5073_TI, t5073_ITIs, NULL, &t1418__CustomAttributeCache, &t5073_TI, &t5073_0_0_0, &t5073_1_0_0, NULL, &t5073_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3769_TI;

#include "t1015.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m29206_MI;
static PropertyInfo t3769____Current_PropertyInfo = 
{
	&t3769_TI, "Current", &m29206_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3769_PIs[] =
{
	&t3769____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3769_TI;
extern Il2CppType t1015_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29206_MI = 
{
	"get_Current", NULL, &t3769_TI, &t1015_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3769_MIs[] =
{
	&m29206_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3769_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3769_0_0_0;
extern Il2CppType t3769_1_0_0;
struct t3769;
extern TypeInfo t3769_TI;
extern Il2CppGenericClass t3769_GC;
TypeInfo t3769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3769_MIs, t3769_PIs, NULL, NULL, NULL, NULL, NULL, &t3769_TI, t3769_ITIs, NULL, &EmptyCustomAttributesCache, &t3769_TI, &t3769_0_0_0, &t3769_1_0_0, NULL, &t3769_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2849.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2849_TI;
#include "t2849MD.h"

extern TypeInfo t2849_TI;
extern TypeInfo t1015_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16142_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22136_MI;
struct t29;
#define m22136(__this, p0, method) (t1015 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22136_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2849_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2849_TI, offsetof(t2849, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2849_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2849_TI, offsetof(t2849, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2849_FIs[] =
{
	&t2849_f0_FieldInfo,
	&t2849_f1_FieldInfo,
	NULL
};
extern MethodInfo m16139_MI;
static PropertyInfo t2849____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2849_TI, "System.Collections.IEnumerator.Current", &m16139_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16142_MI;
static PropertyInfo t2849____Current_PropertyInfo = 
{
	&t2849_TI, "Current", &m16142_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2849_PIs[] =
{
	&t2849____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2849____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2849_m16138_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2849_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16138_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2849_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2849_m16138_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16139_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2849_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16140_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2849_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16141_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2849_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2849_TI;
extern Il2CppType t1015_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16142_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2849_TI, &t1015_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2849_MIs[] =
{
	&m16138_MI,
	&m16139_MI,
	&m16140_MI,
	&m16141_MI,
	&m16142_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16139_MI;
extern MethodInfo m16141_MI;
extern MethodInfo m16140_MI;
extern MethodInfo m16142_MI;
static MethodInfo* t2849_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16139_MI,
	&m16141_MI,
	&m16140_MI,
	&m16142_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3769_TI;
static TypeInfo* t2849_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3769_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3769_TI;
static Il2CppInterfaceOffsetPair t2849_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3769_TI, 7},
};
extern MethodInfo m16142_MI;
extern TypeInfo t1015_TI;
extern MethodInfo m22136_MI;
static void* t2849_RGCTXData[3] = 
{
	&m16142_MI,
	&t1015_TI,
	&m22136_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2849_0_0_0;
extern Il2CppType t2849_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2849_TI;
extern Il2CppGenericClass t2849_GC;
extern TypeInfo t29_TI;
TypeInfo t2849_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2849_MIs, t2849_PIs, t2849_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2849_TI, t2849_ITIs, t2849_VT, &EmptyCustomAttributesCache, &t2849_TI, &t2849_0_0_0, &t2849_1_0_0, t2849_IOs, &t2849_GC, NULL, NULL, NULL, t2849_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2849)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5075_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m29207_MI;
static PropertyInfo t5075____Count_PropertyInfo = 
{
	&t5075_TI, "Count", &m29207_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29208_MI;
static PropertyInfo t5075____IsReadOnly_PropertyInfo = 
{
	&t5075_TI, "IsReadOnly", &m29208_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5075_PIs[] =
{
	&t5075____Count_PropertyInfo,
	&t5075____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5075_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29207_MI = 
{
	"get_Count", NULL, &t5075_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5075_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29208_MI = 
{
	"get_IsReadOnly", NULL, &t5075_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5075_m29209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29209_MI = 
{
	"Add", NULL, &t5075_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5075_m29209_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5075_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29210_MI = 
{
	"Clear", NULL, &t5075_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5075_m29211_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29211_MI = 
{
	"Contains", NULL, &t5075_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5075_m29211_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3098_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5075_m29212_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3098_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29212_MI = 
{
	"CopyTo", NULL, &t5075_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5075_m29212_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5075_m29213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5075_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29213_MI = 
{
	"Remove", NULL, &t5075_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5075_m29213_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5075_MIs[] =
{
	&m29207_MI,
	&m29208_MI,
	&m29209_MI,
	&m29210_MI,
	&m29211_MI,
	&m29212_MI,
	&m29213_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5077_TI;
static TypeInfo* t5075_ITIs[] = 
{
	&t611_TI,
	&t5077_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5075_0_0_0;
extern Il2CppType t5075_1_0_0;
struct t5075;
extern TypeInfo t5075_TI;
extern Il2CppGenericClass t5075_GC;
TypeInfo t5075_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5075_MIs, t5075_PIs, NULL, NULL, NULL, NULL, NULL, &t5075_TI, t5075_ITIs, NULL, &EmptyCustomAttributesCache, &t5075_TI, &t5075_0_0_0, &t5075_1_0_0, NULL, &t5075_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5077_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern TypeInfo t5077_TI;
extern Il2CppType t3769_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29214_MI = 
{
	"GetEnumerator", NULL, &t5077_TI, &t3769_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5077_MIs[] =
{
	&m29214_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5077_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5077_0_0_0;
extern Il2CppType t5077_1_0_0;
struct t5077;
extern TypeInfo t5077_TI;
extern Il2CppGenericClass t5077_GC;
TypeInfo t5077_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5077_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5077_TI, t5077_ITIs, NULL, &EmptyCustomAttributesCache, &t5077_TI, &t5077_0_0_0, &t5077_1_0_0, NULL, &t5077_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5076_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo m29215_MI;
extern MethodInfo m29216_MI;
static PropertyInfo t5076____Item_PropertyInfo = 
{
	&t5076_TI, "Item", &m29215_MI, &m29216_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5076_PIs[] =
{
	&t5076____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5076_m29217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29217_MI = 
{
	"IndexOf", NULL, &t5076_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5076_m29217_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5076_m29218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29218_MI = 
{
	"Insert", NULL, &t5076_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5076_m29218_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5076_m29219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29219_MI = 
{
	"RemoveAt", NULL, &t5076_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5076_m29219_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5076_m29215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t1015_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29215_MI = 
{
	"get_Item", NULL, &t5076_TI, &t1015_0_0_0, RuntimeInvoker_t28_t47, t5076_m29215_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1015_0_0_0;
static ParameterInfo t5076_m29216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1015_0_0_0},
};
extern TypeInfo t5076_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29216_MI = 
{
	"set_Item", NULL, &t5076_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5076_m29216_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5076_MIs[] =
{
	&m29217_MI,
	&m29218_MI,
	&m29219_MI,
	&m29215_MI,
	&m29216_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5075_TI;
extern TypeInfo t5077_TI;
static TypeInfo* t5076_ITIs[] = 
{
	&t611_TI,
	&t5075_TI,
	&t5077_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5076_0_0_0;
extern Il2CppType t5076_1_0_0;
struct t5076;
extern TypeInfo t5076_TI;
extern Il2CppGenericClass t5076_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5076_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5076_MIs, t5076_PIs, NULL, NULL, NULL, NULL, NULL, &t5076_TI, t5076_ITIs, NULL, &t1418__CustomAttributeCache, &t5076_TI, &t5076_0_0_0, &t5076_1_0_0, NULL, &t5076_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3770_TI;

#include "t1016.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m29220_MI;
static PropertyInfo t3770____Current_PropertyInfo = 
{
	&t3770_TI, "Current", &m29220_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3770_PIs[] =
{
	&t3770____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3770_TI;
extern Il2CppType t1016_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29220_MI = 
{
	"get_Current", NULL, &t3770_TI, &t1016_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3770_MIs[] =
{
	&m29220_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3770_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3770_0_0_0;
extern Il2CppType t3770_1_0_0;
struct t3770;
extern TypeInfo t3770_TI;
extern Il2CppGenericClass t3770_GC;
TypeInfo t3770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3770_MIs, t3770_PIs, NULL, NULL, NULL, NULL, NULL, &t3770_TI, t3770_ITIs, NULL, &EmptyCustomAttributesCache, &t3770_TI, &t3770_0_0_0, &t3770_1_0_0, NULL, &t3770_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2850_TI;
#include "t2850MD.h"

extern TypeInfo t2850_TI;
extern TypeInfo t1016_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16147_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22147_MI;
struct t29;
#define m22147(__this, p0, method) (t1016 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22147_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2850_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2850_TI, offsetof(t2850, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2850_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2850_TI, offsetof(t2850, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2850_FIs[] =
{
	&t2850_f0_FieldInfo,
	&t2850_f1_FieldInfo,
	NULL
};
extern MethodInfo m16144_MI;
static PropertyInfo t2850____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2850_TI, "System.Collections.IEnumerator.Current", &m16144_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16147_MI;
static PropertyInfo t2850____Current_PropertyInfo = 
{
	&t2850_TI, "Current", &m16147_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2850_PIs[] =
{
	&t2850____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2850____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2850_m16143_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2850_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16143_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2850_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2850_m16143_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16144_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2850_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16145_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2850_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16146_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2850_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2850_TI;
extern Il2CppType t1016_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16147_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2850_TI, &t1016_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2850_MIs[] =
{
	&m16143_MI,
	&m16144_MI,
	&m16145_MI,
	&m16146_MI,
	&m16147_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16144_MI;
extern MethodInfo m16146_MI;
extern MethodInfo m16145_MI;
extern MethodInfo m16147_MI;
static MethodInfo* t2850_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16144_MI,
	&m16146_MI,
	&m16145_MI,
	&m16147_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3770_TI;
static TypeInfo* t2850_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3770_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3770_TI;
static Il2CppInterfaceOffsetPair t2850_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3770_TI, 7},
};
extern MethodInfo m16147_MI;
extern TypeInfo t1016_TI;
extern MethodInfo m22147_MI;
static void* t2850_RGCTXData[3] = 
{
	&m16147_MI,
	&t1016_TI,
	&m22147_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2850_0_0_0;
extern Il2CppType t2850_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2850_TI;
extern Il2CppGenericClass t2850_GC;
extern TypeInfo t29_TI;
TypeInfo t2850_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2850_MIs, t2850_PIs, t2850_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2850_TI, t2850_ITIs, t2850_VT, &EmptyCustomAttributesCache, &t2850_TI, &t2850_0_0_0, &t2850_1_0_0, t2850_IOs, &t2850_GC, NULL, NULL, NULL, t2850_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2850)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5078_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m29221_MI;
static PropertyInfo t5078____Count_PropertyInfo = 
{
	&t5078_TI, "Count", &m29221_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29222_MI;
static PropertyInfo t5078____IsReadOnly_PropertyInfo = 
{
	&t5078_TI, "IsReadOnly", &m29222_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5078_PIs[] =
{
	&t5078____Count_PropertyInfo,
	&t5078____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5078_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29221_MI = 
{
	"get_Count", NULL, &t5078_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5078_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29222_MI = 
{
	"get_IsReadOnly", NULL, &t5078_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5078_m29223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29223_MI = 
{
	"Add", NULL, &t5078_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5078_m29223_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5078_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29224_MI = 
{
	"Clear", NULL, &t5078_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5078_m29225_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29225_MI = 
{
	"Contains", NULL, &t5078_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5078_m29225_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3099_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5078_m29226_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3099_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29226_MI = 
{
	"CopyTo", NULL, &t5078_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5078_m29226_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5078_m29227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5078_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29227_MI = 
{
	"Remove", NULL, &t5078_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5078_m29227_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5078_MIs[] =
{
	&m29221_MI,
	&m29222_MI,
	&m29223_MI,
	&m29224_MI,
	&m29225_MI,
	&m29226_MI,
	&m29227_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5080_TI;
static TypeInfo* t5078_ITIs[] = 
{
	&t611_TI,
	&t5080_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5078_0_0_0;
extern Il2CppType t5078_1_0_0;
struct t5078;
extern TypeInfo t5078_TI;
extern Il2CppGenericClass t5078_GC;
TypeInfo t5078_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5078_MIs, t5078_PIs, NULL, NULL, NULL, NULL, NULL, &t5078_TI, t5078_ITIs, NULL, &EmptyCustomAttributesCache, &t5078_TI, &t5078_0_0_0, &t5078_1_0_0, NULL, &t5078_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5080_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern TypeInfo t5080_TI;
extern Il2CppType t3770_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29228_MI = 
{
	"GetEnumerator", NULL, &t5080_TI, &t3770_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5080_MIs[] =
{
	&m29228_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5080_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5080_0_0_0;
extern Il2CppType t5080_1_0_0;
struct t5080;
extern TypeInfo t5080_TI;
extern Il2CppGenericClass t5080_GC;
TypeInfo t5080_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5080_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5080_TI, t5080_ITIs, NULL, &EmptyCustomAttributesCache, &t5080_TI, &t5080_0_0_0, &t5080_1_0_0, NULL, &t5080_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5079_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo m29229_MI;
extern MethodInfo m29230_MI;
static PropertyInfo t5079____Item_PropertyInfo = 
{
	&t5079_TI, "Item", &m29229_MI, &m29230_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5079_PIs[] =
{
	&t5079____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5079_m29231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29231_MI = 
{
	"IndexOf", NULL, &t5079_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5079_m29231_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5079_m29232_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29232_MI = 
{
	"Insert", NULL, &t5079_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5079_m29232_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5079_m29233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29233_MI = 
{
	"RemoveAt", NULL, &t5079_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5079_m29233_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5079_m29229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t1016_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29229_MI = 
{
	"get_Item", NULL, &t5079_TI, &t1016_0_0_0, RuntimeInvoker_t28_t47, t5079_m29229_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1016_0_0_0;
static ParameterInfo t5079_m29230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1016_0_0_0},
};
extern TypeInfo t5079_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29230_MI = 
{
	"set_Item", NULL, &t5079_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5079_m29230_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5079_MIs[] =
{
	&m29231_MI,
	&m29232_MI,
	&m29233_MI,
	&m29229_MI,
	&m29230_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5078_TI;
extern TypeInfo t5080_TI;
static TypeInfo* t5079_ITIs[] = 
{
	&t611_TI,
	&t5078_TI,
	&t5080_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5079_0_0_0;
extern Il2CppType t5079_1_0_0;
struct t5079;
extern TypeInfo t5079_TI;
extern Il2CppGenericClass t5079_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5079_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5079_MIs, t5079_PIs, NULL, NULL, NULL, NULL, NULL, &t5079_TI, t5079_ITIs, NULL, &t1418__CustomAttributeCache, &t5079_TI, &t5079_0_0_0, &t5079_1_0_0, NULL, &t5079_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3771_TI;

#include "t1017.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m29234_MI;
static PropertyInfo t3771____Current_PropertyInfo = 
{
	&t3771_TI, "Current", &m29234_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3771_PIs[] =
{
	&t3771____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3771_TI;
extern Il2CppType t1017_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29234_MI = 
{
	"get_Current", NULL, &t3771_TI, &t1017_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3771_MIs[] =
{
	&m29234_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3771_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3771_0_0_0;
extern Il2CppType t3771_1_0_0;
struct t3771;
extern TypeInfo t3771_TI;
extern Il2CppGenericClass t3771_GC;
TypeInfo t3771_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3771_MIs, t3771_PIs, NULL, NULL, NULL, NULL, NULL, &t3771_TI, t3771_ITIs, NULL, &EmptyCustomAttributesCache, &t3771_TI, &t3771_0_0_0, &t3771_1_0_0, NULL, &t3771_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2851_TI;
#include "t2851MD.h"

extern TypeInfo t2851_TI;
extern TypeInfo t1017_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16152_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22158_MI;
struct t29;
#define m22158(__this, p0, method) (t1017 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22158_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2851_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2851_TI, offsetof(t2851, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2851_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2851_TI, offsetof(t2851, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2851_FIs[] =
{
	&t2851_f0_FieldInfo,
	&t2851_f1_FieldInfo,
	NULL
};
extern MethodInfo m16149_MI;
static PropertyInfo t2851____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2851_TI, "System.Collections.IEnumerator.Current", &m16149_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16152_MI;
static PropertyInfo t2851____Current_PropertyInfo = 
{
	&t2851_TI, "Current", &m16152_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2851_PIs[] =
{
	&t2851____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2851____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2851_m16148_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2851_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16148_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2851_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2851_m16148_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16149_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2851_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16150_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2851_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16151_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2851_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2851_TI;
extern Il2CppType t1017_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16152_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2851_TI, &t1017_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2851_MIs[] =
{
	&m16148_MI,
	&m16149_MI,
	&m16150_MI,
	&m16151_MI,
	&m16152_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16149_MI;
extern MethodInfo m16151_MI;
extern MethodInfo m16150_MI;
extern MethodInfo m16152_MI;
static MethodInfo* t2851_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16149_MI,
	&m16151_MI,
	&m16150_MI,
	&m16152_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3771_TI;
static TypeInfo* t2851_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3771_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3771_TI;
static Il2CppInterfaceOffsetPair t2851_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3771_TI, 7},
};
extern MethodInfo m16152_MI;
extern TypeInfo t1017_TI;
extern MethodInfo m22158_MI;
static void* t2851_RGCTXData[3] = 
{
	&m16152_MI,
	&t1017_TI,
	&m22158_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2851_0_0_0;
extern Il2CppType t2851_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2851_TI;
extern Il2CppGenericClass t2851_GC;
extern TypeInfo t29_TI;
TypeInfo t2851_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2851_MIs, t2851_PIs, t2851_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2851_TI, t2851_ITIs, t2851_VT, &EmptyCustomAttributesCache, &t2851_TI, &t2851_0_0_0, &t2851_1_0_0, t2851_IOs, &t2851_GC, NULL, NULL, NULL, t2851_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2851)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5081_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m29235_MI;
static PropertyInfo t5081____Count_PropertyInfo = 
{
	&t5081_TI, "Count", &m29235_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29236_MI;
static PropertyInfo t5081____IsReadOnly_PropertyInfo = 
{
	&t5081_TI, "IsReadOnly", &m29236_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5081_PIs[] =
{
	&t5081____Count_PropertyInfo,
	&t5081____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5081_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29235_MI = 
{
	"get_Count", NULL, &t5081_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5081_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29236_MI = 
{
	"get_IsReadOnly", NULL, &t5081_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5081_m29237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29237_MI = 
{
	"Add", NULL, &t5081_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5081_m29237_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5081_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29238_MI = 
{
	"Clear", NULL, &t5081_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5081_m29239_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29239_MI = 
{
	"Contains", NULL, &t5081_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5081_m29239_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3100_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5081_m29240_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3100_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29240_MI = 
{
	"CopyTo", NULL, &t5081_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5081_m29240_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5081_m29241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5081_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29241_MI = 
{
	"Remove", NULL, &t5081_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5081_m29241_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5081_MIs[] =
{
	&m29235_MI,
	&m29236_MI,
	&m29237_MI,
	&m29238_MI,
	&m29239_MI,
	&m29240_MI,
	&m29241_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5083_TI;
static TypeInfo* t5081_ITIs[] = 
{
	&t611_TI,
	&t5083_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5081_0_0_0;
extern Il2CppType t5081_1_0_0;
struct t5081;
extern TypeInfo t5081_TI;
extern Il2CppGenericClass t5081_GC;
TypeInfo t5081_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5081_MIs, t5081_PIs, NULL, NULL, NULL, NULL, NULL, &t5081_TI, t5081_ITIs, NULL, &EmptyCustomAttributesCache, &t5081_TI, &t5081_0_0_0, &t5081_1_0_0, NULL, &t5081_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5083_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern TypeInfo t5083_TI;
extern Il2CppType t3771_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29242_MI = 
{
	"GetEnumerator", NULL, &t5083_TI, &t3771_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5083_MIs[] =
{
	&m29242_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5083_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5083_0_0_0;
extern Il2CppType t5083_1_0_0;
struct t5083;
extern TypeInfo t5083_TI;
extern Il2CppGenericClass t5083_GC;
TypeInfo t5083_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5083_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5083_TI, t5083_ITIs, NULL, &EmptyCustomAttributesCache, &t5083_TI, &t5083_0_0_0, &t5083_1_0_0, NULL, &t5083_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5082_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo m29243_MI;
extern MethodInfo m29244_MI;
static PropertyInfo t5082____Item_PropertyInfo = 
{
	&t5082_TI, "Item", &m29243_MI, &m29244_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5082_PIs[] =
{
	&t5082____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5082_m29245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29245_MI = 
{
	"IndexOf", NULL, &t5082_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5082_m29245_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5082_m29246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29246_MI = 
{
	"Insert", NULL, &t5082_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5082_m29246_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5082_m29247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29247_MI = 
{
	"RemoveAt", NULL, &t5082_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5082_m29247_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5082_m29243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t1017_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29243_MI = 
{
	"get_Item", NULL, &t5082_TI, &t1017_0_0_0, RuntimeInvoker_t28_t47, t5082_m29243_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1017_0_0_0;
static ParameterInfo t5082_m29244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1017_0_0_0},
};
extern TypeInfo t5082_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29244_MI = 
{
	"set_Item", NULL, &t5082_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5082_m29244_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5082_MIs[] =
{
	&m29245_MI,
	&m29246_MI,
	&m29247_MI,
	&m29243_MI,
	&m29244_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5081_TI;
extern TypeInfo t5083_TI;
static TypeInfo* t5082_ITIs[] = 
{
	&t611_TI,
	&t5081_TI,
	&t5083_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5082_0_0_0;
extern Il2CppType t5082_1_0_0;
struct t5082;
extern TypeInfo t5082_TI;
extern Il2CppGenericClass t5082_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5082_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5082_MIs, t5082_PIs, NULL, NULL, NULL, NULL, NULL, &t5082_TI, t5082_ITIs, NULL, &t1418__CustomAttributeCache, &t5082_TI, &t5082_0_0_0, &t5082_1_0_0, NULL, &t5082_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3772_TI;

#include "t755.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m29248_MI;
static PropertyInfo t3772____Current_PropertyInfo = 
{
	&t3772_TI, "Current", &m29248_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3772_PIs[] =
{
	&t3772____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3772_TI;
extern Il2CppType t755_0_0_0;
extern void* RuntimeInvoker_t755 (MethodInfo* method, void* obj, void** args);
MethodInfo m29248_MI = 
{
	"get_Current", NULL, &t3772_TI, &t755_0_0_0, RuntimeInvoker_t755, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3772_MIs[] =
{
	&m29248_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3772_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3772_0_0_0;
extern Il2CppType t3772_1_0_0;
struct t3772;
extern TypeInfo t3772_TI;
extern Il2CppGenericClass t3772_GC;
TypeInfo t3772_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3772_MIs, t3772_PIs, NULL, NULL, NULL, NULL, NULL, &t3772_TI, t3772_ITIs, NULL, &EmptyCustomAttributesCache, &t3772_TI, &t3772_0_0_0, &t3772_1_0_0, NULL, &t3772_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2852.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2852_TI;
#include "t2852MD.h"

extern TypeInfo t2852_TI;
extern TypeInfo t755_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16157_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22169_MI;
struct t29;
 int32_t m22169 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22169_MI;


extern MethodInfo m16153_MI;
 void m16153 (t2852 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16154_MI;
 t28 * m16154 (t2852 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16157(__this, &m16157_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t755_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16155_MI;
 void m16155 (t2852 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16156_MI;
 bool m16156 (t2852 * __this, MethodInfo* method){
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
extern MethodInfo m16157_MI;
 int32_t m16157 (t2852 * __this, MethodInfo* method){
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
		int32_t L_8 = m22169(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22169_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType t29_0_0_1;
FieldInfo t2852_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2852_TI, offsetof(t2852, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2852_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2852_TI, offsetof(t2852, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2852_FIs[] =
{
	&t2852_f0_FieldInfo,
	&t2852_f1_FieldInfo,
	NULL
};
extern MethodInfo m16154_MI;
static PropertyInfo t2852____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2852_TI, "System.Collections.IEnumerator.Current", &m16154_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16157_MI;
static PropertyInfo t2852____Current_PropertyInfo = 
{
	&t2852_TI, "Current", &m16157_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2852_PIs[] =
{
	&t2852____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2852____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2852_m16153_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2852_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16153_MI = 
{
	".ctor", (methodPointerType)&m16153, &t2852_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2852_m16153_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16154_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16154, &t2852_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16155_MI = 
{
	"Dispose", (methodPointerType)&m16155, &t2852_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16156_MI = 
{
	"MoveNext", (methodPointerType)&m16156, &t2852_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2852_TI;
extern Il2CppType t755_0_0_0;
extern void* RuntimeInvoker_t755 (MethodInfo* method, void* obj, void** args);
MethodInfo m16157_MI = 
{
	"get_Current", (methodPointerType)&m16157, &t2852_TI, &t755_0_0_0, RuntimeInvoker_t755, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2852_MIs[] =
{
	&m16153_MI,
	&m16154_MI,
	&m16155_MI,
	&m16156_MI,
	&m16157_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16154_MI;
extern MethodInfo m16156_MI;
extern MethodInfo m16155_MI;
extern MethodInfo m16157_MI;
static MethodInfo* t2852_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16154_MI,
	&m16156_MI,
	&m16155_MI,
	&m16157_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3772_TI;
static TypeInfo* t2852_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3772_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3772_TI;
static Il2CppInterfaceOffsetPair t2852_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3772_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2852_0_0_0;
extern Il2CppType t2852_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2852_TI;
extern Il2CppGenericClass t2852_GC;
extern TypeInfo t29_TI;
TypeInfo t2852_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2852_MIs, t2852_PIs, t2852_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2852_TI, t2852_ITIs, t2852_VT, &EmptyCustomAttributesCache, &t2852_TI, &t2852_0_0_0, &t2852_1_0_0, t2852_IOs, &t2852_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2852)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5084_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m29249_MI;
static PropertyInfo t5084____Count_PropertyInfo = 
{
	&t5084_TI, "Count", &m29249_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29250_MI;
static PropertyInfo t5084____IsReadOnly_PropertyInfo = 
{
	&t5084_TI, "IsReadOnly", &m29250_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5084_PIs[] =
{
	&t5084____Count_PropertyInfo,
	&t5084____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5084_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29249_MI = 
{
	"get_Count", NULL, &t5084_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5084_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29250_MI = 
{
	"get_IsReadOnly", NULL, &t5084_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t755_0_0_0;
static ParameterInfo t5084_m29251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t755_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29251_MI = 
{
	"Add", NULL, &t5084_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5084_m29251_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5084_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29252_MI = 
{
	"Clear", NULL, &t5084_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t755_0_0_0;
static ParameterInfo t5084_m29253_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t755_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29253_MI = 
{
	"Contains", NULL, &t5084_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5084_m29253_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3101_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5084_m29254_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3101_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29254_MI = 
{
	"CopyTo", NULL, &t5084_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5084_m29254_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t755_0_0_0;
static ParameterInfo t5084_m29255_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t755_0_0_0},
};
extern TypeInfo t5084_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29255_MI = 
{
	"Remove", NULL, &t5084_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5084_m29255_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5084_MIs[] =
{
	&m29249_MI,
	&m29250_MI,
	&m29251_MI,
	&m29252_MI,
	&m29253_MI,
	&m29254_MI,
	&m29255_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5086_TI;
static TypeInfo* t5084_ITIs[] = 
{
	&t611_TI,
	&t5086_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5084_0_0_0;
extern Il2CppType t5084_1_0_0;
struct t5084;
extern TypeInfo t5084_TI;
extern Il2CppGenericClass t5084_GC;
TypeInfo t5084_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5084_MIs, t5084_PIs, NULL, NULL, NULL, NULL, NULL, &t5084_TI, t5084_ITIs, NULL, &EmptyCustomAttributesCache, &t5084_TI, &t5084_0_0_0, &t5084_1_0_0, NULL, &t5084_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5086_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>
extern TypeInfo t5086_TI;
extern Il2CppType t3772_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29256_MI = 
{
	"GetEnumerator", NULL, &t5086_TI, &t3772_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5086_MIs[] =
{
	&m29256_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5086_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5086_0_0_0;
extern Il2CppType t5086_1_0_0;
struct t5086;
extern TypeInfo t5086_TI;
extern Il2CppGenericClass t5086_GC;
TypeInfo t5086_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5086_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5086_TI, t5086_ITIs, NULL, &EmptyCustomAttributesCache, &t5086_TI, &t5086_0_0_0, &t5086_1_0_0, NULL, &t5086_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5085_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo m29257_MI;
extern MethodInfo m29258_MI;
static PropertyInfo t5085____Item_PropertyInfo = 
{
	&t5085_TI, "Item", &m29257_MI, &m29258_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5085_PIs[] =
{
	&t5085____Item_PropertyInfo,
	NULL
};
extern Il2CppType t755_0_0_0;
static ParameterInfo t5085_m29259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t755_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29259_MI = 
{
	"IndexOf", NULL, &t5085_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5085_m29259_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t755_0_0_0;
static ParameterInfo t5085_m29260_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t755_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29260_MI = 
{
	"Insert", NULL, &t5085_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5085_m29260_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5085_m29261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29261_MI = 
{
	"RemoveAt", NULL, &t5085_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5085_m29261_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5085_m29257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t755_0_0_0;
extern void* RuntimeInvoker_t755_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29257_MI = 
{
	"get_Item", NULL, &t5085_TI, &t755_0_0_0, RuntimeInvoker_t755_t47, t5085_m29257_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t755_0_0_0;
static ParameterInfo t5085_m29258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t755_0_0_0},
};
extern TypeInfo t5085_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29258_MI = 
{
	"set_Item", NULL, &t5085_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5085_m29258_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5085_MIs[] =
{
	&m29259_MI,
	&m29260_MI,
	&m29261_MI,
	&m29257_MI,
	&m29258_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5084_TI;
extern TypeInfo t5086_TI;
static TypeInfo* t5085_ITIs[] = 
{
	&t611_TI,
	&t5084_TI,
	&t5086_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5085_0_0_0;
extern Il2CppType t5085_1_0_0;
struct t5085;
extern TypeInfo t5085_TI;
extern Il2CppGenericClass t5085_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5085_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5085_MIs, t5085_PIs, NULL, NULL, NULL, NULL, NULL, &t5085_TI, t5085_ITIs, NULL, &t1418__CustomAttributeCache, &t5085_TI, &t5085_0_0_0, &t5085_1_0_0, NULL, &t5085_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3773_TI;

#include "t1025.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m29262_MI;
static PropertyInfo t3773____Current_PropertyInfo = 
{
	&t3773_TI, "Current", &m29262_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3773_PIs[] =
{
	&t3773____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3773_TI;
extern Il2CppType t1025_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29262_MI = 
{
	"get_Current", NULL, &t3773_TI, &t1025_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3773_MIs[] =
{
	&m29262_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3773_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3773_0_0_0;
extern Il2CppType t3773_1_0_0;
struct t3773;
extern TypeInfo t3773_TI;
extern Il2CppGenericClass t3773_GC;
TypeInfo t3773_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3773_MIs, t3773_PIs, NULL, NULL, NULL, NULL, NULL, &t3773_TI, t3773_ITIs, NULL, &EmptyCustomAttributesCache, &t3773_TI, &t3773_0_0_0, &t3773_1_0_0, NULL, &t3773_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2853_TI;
#include "t2853MD.h"

extern TypeInfo t2853_TI;
extern TypeInfo t1025_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16162_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22180_MI;
struct t29;
#define m22180(__this, p0, method) (t1025 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22180_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2853_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2853_TI, offsetof(t2853, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2853_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2853_TI, offsetof(t2853, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2853_FIs[] =
{
	&t2853_f0_FieldInfo,
	&t2853_f1_FieldInfo,
	NULL
};
extern MethodInfo m16159_MI;
static PropertyInfo t2853____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2853_TI, "System.Collections.IEnumerator.Current", &m16159_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16162_MI;
static PropertyInfo t2853____Current_PropertyInfo = 
{
	&t2853_TI, "Current", &m16162_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2853_PIs[] =
{
	&t2853____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2853____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2853_m16158_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2853_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16158_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2853_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2853_m16158_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16159_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2853_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16160_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2853_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16161_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2853_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2853_TI;
extern Il2CppType t1025_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16162_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2853_TI, &t1025_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2853_MIs[] =
{
	&m16158_MI,
	&m16159_MI,
	&m16160_MI,
	&m16161_MI,
	&m16162_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16159_MI;
extern MethodInfo m16161_MI;
extern MethodInfo m16160_MI;
extern MethodInfo m16162_MI;
static MethodInfo* t2853_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16159_MI,
	&m16161_MI,
	&m16160_MI,
	&m16162_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3773_TI;
static TypeInfo* t2853_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3773_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3773_TI;
static Il2CppInterfaceOffsetPair t2853_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3773_TI, 7},
};
extern MethodInfo m16162_MI;
extern TypeInfo t1025_TI;
extern MethodInfo m22180_MI;
static void* t2853_RGCTXData[3] = 
{
	&m16162_MI,
	&t1025_TI,
	&m22180_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2853_0_0_0;
extern Il2CppType t2853_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2853_TI;
extern Il2CppGenericClass t2853_GC;
extern TypeInfo t29_TI;
TypeInfo t2853_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2853_MIs, t2853_PIs, t2853_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2853_TI, t2853_ITIs, t2853_VT, &EmptyCustomAttributesCache, &t2853_TI, &t2853_0_0_0, &t2853_1_0_0, t2853_IOs, &t2853_GC, NULL, NULL, NULL, t2853_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2853)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5087_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m29263_MI;
static PropertyInfo t5087____Count_PropertyInfo = 
{
	&t5087_TI, "Count", &m29263_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29264_MI;
static PropertyInfo t5087____IsReadOnly_PropertyInfo = 
{
	&t5087_TI, "IsReadOnly", &m29264_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5087_PIs[] =
{
	&t5087____Count_PropertyInfo,
	&t5087____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5087_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29263_MI = 
{
	"get_Count", NULL, &t5087_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5087_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29264_MI = 
{
	"get_IsReadOnly", NULL, &t5087_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5087_m29265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29265_MI = 
{
	"Add", NULL, &t5087_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5087_m29265_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5087_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29266_MI = 
{
	"Clear", NULL, &t5087_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5087_m29267_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29267_MI = 
{
	"Contains", NULL, &t5087_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5087_m29267_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3102_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5087_m29268_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3102_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29268_MI = 
{
	"CopyTo", NULL, &t5087_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5087_m29268_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5087_m29269_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5087_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29269_MI = 
{
	"Remove", NULL, &t5087_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5087_m29269_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5087_MIs[] =
{
	&m29263_MI,
	&m29264_MI,
	&m29265_MI,
	&m29266_MI,
	&m29267_MI,
	&m29268_MI,
	&m29269_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5089_TI;
static TypeInfo* t5087_ITIs[] = 
{
	&t611_TI,
	&t5089_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5087_0_0_0;
extern Il2CppType t5087_1_0_0;
struct t5087;
extern TypeInfo t5087_TI;
extern Il2CppGenericClass t5087_GC;
TypeInfo t5087_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5087_MIs, t5087_PIs, NULL, NULL, NULL, NULL, NULL, &t5087_TI, t5087_ITIs, NULL, &EmptyCustomAttributesCache, &t5087_TI, &t5087_0_0_0, &t5087_1_0_0, NULL, &t5087_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5089_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern TypeInfo t5089_TI;
extern Il2CppType t3773_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29270_MI = 
{
	"GetEnumerator", NULL, &t5089_TI, &t3773_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5089_MIs[] =
{
	&m29270_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5089_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5089_0_0_0;
extern Il2CppType t5089_1_0_0;
struct t5089;
extern TypeInfo t5089_TI;
extern Il2CppGenericClass t5089_GC;
TypeInfo t5089_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5089_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5089_TI, t5089_ITIs, NULL, &EmptyCustomAttributesCache, &t5089_TI, &t5089_0_0_0, &t5089_1_0_0, NULL, &t5089_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5088_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo m29271_MI;
extern MethodInfo m29272_MI;
static PropertyInfo t5088____Item_PropertyInfo = 
{
	&t5088_TI, "Item", &m29271_MI, &m29272_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5088_PIs[] =
{
	&t5088____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5088_m29273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29273_MI = 
{
	"IndexOf", NULL, &t5088_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5088_m29273_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5088_m29274_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29274_MI = 
{
	"Insert", NULL, &t5088_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5088_m29274_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5088_m29275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29275_MI = 
{
	"RemoveAt", NULL, &t5088_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5088_m29275_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5088_m29271_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t1025_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29271_MI = 
{
	"get_Item", NULL, &t5088_TI, &t1025_0_0_0, RuntimeInvoker_t28_t47, t5088_m29271_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1025_0_0_0;
static ParameterInfo t5088_m29272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1025_0_0_0},
};
extern TypeInfo t5088_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29272_MI = 
{
	"set_Item", NULL, &t5088_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5088_m29272_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5088_MIs[] =
{
	&m29273_MI,
	&m29274_MI,
	&m29275_MI,
	&m29271_MI,
	&m29272_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5087_TI;
extern TypeInfo t5089_TI;
static TypeInfo* t5088_ITIs[] = 
{
	&t611_TI,
	&t5087_TI,
	&t5089_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5088_0_0_0;
extern Il2CppType t5088_1_0_0;
struct t5088;
extern TypeInfo t5088_TI;
extern Il2CppGenericClass t5088_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5088_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5088_MIs, t5088_PIs, NULL, NULL, NULL, NULL, NULL, &t5088_TI, t5088_ITIs, NULL, &t1418__CustomAttributeCache, &t5088_TI, &t5088_0_0_0, &t5088_1_0_0, NULL, &t5088_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5090_TI;

#include "t1026.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m29276_MI;
static PropertyInfo t5090____Count_PropertyInfo = 
{
	&t5090_TI, "Count", &m29276_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29277_MI;
static PropertyInfo t5090____IsReadOnly_PropertyInfo = 
{
	&t5090_TI, "IsReadOnly", &m29277_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5090_PIs[] =
{
	&t5090____Count_PropertyInfo,
	&t5090____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5090_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29276_MI = 
{
	"get_Count", NULL, &t5090_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5090_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29277_MI = 
{
	"get_IsReadOnly", NULL, &t5090_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5090_m29278_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29278_MI = 
{
	"Add", NULL, &t5090_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5090_m29278_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5090_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29279_MI = 
{
	"Clear", NULL, &t5090_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5090_m29280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29280_MI = 
{
	"Contains", NULL, &t5090_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5090_m29280_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3103_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5090_m29281_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3103_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29281_MI = 
{
	"CopyTo", NULL, &t5090_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5090_m29281_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5090_m29282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5090_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29282_MI = 
{
	"Remove", NULL, &t5090_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5090_m29282_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5090_MIs[] =
{
	&m29276_MI,
	&m29277_MI,
	&m29278_MI,
	&m29279_MI,
	&m29280_MI,
	&m29281_MI,
	&m29282_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5092_TI;
static TypeInfo* t5090_ITIs[] = 
{
	&t611_TI,
	&t5092_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5090_0_0_0;
extern Il2CppType t5090_1_0_0;
struct t5090;
extern TypeInfo t5090_TI;
extern Il2CppGenericClass t5090_GC;
TypeInfo t5090_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5090_MIs, t5090_PIs, NULL, NULL, NULL, NULL, NULL, &t5090_TI, t5090_ITIs, NULL, &EmptyCustomAttributesCache, &t5090_TI, &t5090_0_0_0, &t5090_1_0_0, NULL, &t5090_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5092_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern TypeInfo t5092_TI;
extern Il2CppType t3774_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29283_MI = 
{
	"GetEnumerator", NULL, &t5092_TI, &t3774_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5092_MIs[] =
{
	&m29283_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5092_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5092_0_0_0;
extern Il2CppType t5092_1_0_0;
struct t5092;
extern TypeInfo t5092_TI;
extern Il2CppGenericClass t5092_GC;
TypeInfo t5092_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5092_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5092_TI, t5092_ITIs, NULL, &EmptyCustomAttributesCache, &t5092_TI, &t5092_0_0_0, &t5092_1_0_0, NULL, &t5092_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3774_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m29284_MI;
static PropertyInfo t3774____Current_PropertyInfo = 
{
	&t3774_TI, "Current", &m29284_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3774_PIs[] =
{
	&t3774____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3774_TI;
extern Il2CppType t1026_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29284_MI = 
{
	"get_Current", NULL, &t3774_TI, &t1026_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3774_MIs[] =
{
	&m29284_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3774_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3774_0_0_0;
extern Il2CppType t3774_1_0_0;
struct t3774;
extern TypeInfo t3774_TI;
extern Il2CppGenericClass t3774_GC;
TypeInfo t3774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3774_MIs, t3774_PIs, NULL, NULL, NULL, NULL, NULL, &t3774_TI, t3774_ITIs, NULL, &EmptyCustomAttributesCache, &t3774_TI, &t3774_0_0_0, &t3774_1_0_0, NULL, &t3774_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2854.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2854_TI;
#include "t2854MD.h"

extern TypeInfo t2854_TI;
extern TypeInfo t1026_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16167_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22191_MI;
struct t29;
#define m22191(__this, p0, method) (t1026 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22191_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2854_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2854_TI, offsetof(t2854, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2854_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2854_TI, offsetof(t2854, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2854_FIs[] =
{
	&t2854_f0_FieldInfo,
	&t2854_f1_FieldInfo,
	NULL
};
extern MethodInfo m16164_MI;
static PropertyInfo t2854____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2854_TI, "System.Collections.IEnumerator.Current", &m16164_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16167_MI;
static PropertyInfo t2854____Current_PropertyInfo = 
{
	&t2854_TI, "Current", &m16167_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2854_PIs[] =
{
	&t2854____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2854____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2854_m16163_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2854_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16163_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2854_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2854_m16163_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16164_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2854_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16165_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2854_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16166_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2854_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2854_TI;
extern Il2CppType t1026_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16167_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2854_TI, &t1026_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2854_MIs[] =
{
	&m16163_MI,
	&m16164_MI,
	&m16165_MI,
	&m16166_MI,
	&m16167_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16164_MI;
extern MethodInfo m16166_MI;
extern MethodInfo m16165_MI;
extern MethodInfo m16167_MI;
static MethodInfo* t2854_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16164_MI,
	&m16166_MI,
	&m16165_MI,
	&m16167_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3774_TI;
static TypeInfo* t2854_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3774_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3774_TI;
static Il2CppInterfaceOffsetPair t2854_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3774_TI, 7},
};
extern MethodInfo m16167_MI;
extern TypeInfo t1026_TI;
extern MethodInfo m22191_MI;
static void* t2854_RGCTXData[3] = 
{
	&m16167_MI,
	&t1026_TI,
	&m22191_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2854_0_0_0;
extern Il2CppType t2854_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2854_TI;
extern Il2CppGenericClass t2854_GC;
extern TypeInfo t29_TI;
TypeInfo t2854_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2854_MIs, t2854_PIs, t2854_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2854_TI, t2854_ITIs, t2854_VT, &EmptyCustomAttributesCache, &t2854_TI, &t2854_0_0_0, &t2854_1_0_0, t2854_IOs, &t2854_GC, NULL, NULL, NULL, t2854_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2854)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5091_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo m29285_MI;
extern MethodInfo m29286_MI;
static PropertyInfo t5091____Item_PropertyInfo = 
{
	&t5091_TI, "Item", &m29285_MI, &m29286_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5091_PIs[] =
{
	&t5091____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5091_m29287_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5091_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29287_MI = 
{
	"IndexOf", NULL, &t5091_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5091_m29287_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5091_m29288_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5091_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29288_MI = 
{
	"Insert", NULL, &t5091_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5091_m29288_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5091_m29289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5091_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29289_MI = 
{
	"RemoveAt", NULL, &t5091_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5091_m29289_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5091_m29285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5091_TI;
extern Il2CppType t1026_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29285_MI = 
{
	"get_Item", NULL, &t5091_TI, &t1026_0_0_0, RuntimeInvoker_t28_t47, t5091_m29285_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1026_0_0_0;
static ParameterInfo t5091_m29286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1026_0_0_0},
};
extern TypeInfo t5091_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29286_MI = 
{
	"set_Item", NULL, &t5091_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5091_m29286_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5091_MIs[] =
{
	&m29287_MI,
	&m29288_MI,
	&m29289_MI,
	&m29285_MI,
	&m29286_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5090_TI;
extern TypeInfo t5092_TI;
static TypeInfo* t5091_ITIs[] = 
{
	&t611_TI,
	&t5090_TI,
	&t5092_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5091_0_0_0;
extern Il2CppType t5091_1_0_0;
struct t5091;
extern TypeInfo t5091_TI;
extern Il2CppGenericClass t5091_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5091_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5091_MIs, t5091_PIs, NULL, NULL, NULL, NULL, NULL, &t5091_TI, t5091_ITIs, NULL, &t1418__CustomAttributeCache, &t5091_TI, &t5091_0_0_0, &t5091_1_0_0, NULL, &t5091_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5093_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m29290_MI;
static PropertyInfo t5093____Count_PropertyInfo = 
{
	&t5093_TI, "Count", &m29290_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29291_MI;
static PropertyInfo t5093____IsReadOnly_PropertyInfo = 
{
	&t5093_TI, "IsReadOnly", &m29291_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5093_PIs[] =
{
	&t5093____Count_PropertyInfo,
	&t5093____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5093_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29290_MI = 
{
	"get_Count", NULL, &t5093_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5093_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29291_MI = 
{
	"get_IsReadOnly", NULL, &t5093_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1535_0_0_0;
static ParameterInfo t5093_m29292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29292_MI = 
{
	"Add", NULL, &t5093_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5093_m29292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5093_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29293_MI = 
{
	"Clear", NULL, &t5093_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1535_0_0_0;
static ParameterInfo t5093_m29294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29294_MI = 
{
	"Contains", NULL, &t5093_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5093_m29294_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1076_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5093_m29295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1076_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29295_MI = 
{
	"CopyTo", NULL, &t5093_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5093_m29295_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1535_0_0_0;
static ParameterInfo t5093_m29296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern TypeInfo t5093_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29296_MI = 
{
	"Remove", NULL, &t5093_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5093_m29296_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5093_MIs[] =
{
	&m29290_MI,
	&m29291_MI,
	&m29292_MI,
	&m29293_MI,
	&m29294_MI,
	&m29295_MI,
	&m29296_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5095_TI;
static TypeInfo* t5093_ITIs[] = 
{
	&t611_TI,
	&t5095_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5093_0_0_0;
extern Il2CppType t5093_1_0_0;
struct t5093;
extern TypeInfo t5093_TI;
extern Il2CppGenericClass t5093_GC;
TypeInfo t5093_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5093_MIs, t5093_PIs, NULL, NULL, NULL, NULL, NULL, &t5093_TI, t5093_ITIs, NULL, &EmptyCustomAttributesCache, &t5093_TI, &t5093_0_0_0, &t5093_1_0_0, NULL, &t5093_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5095_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern TypeInfo t5095_TI;
extern Il2CppType t3775_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29297_MI = 
{
	"GetEnumerator", NULL, &t5095_TI, &t3775_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5095_MIs[] =
{
	&m29297_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5095_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5095_0_0_0;
extern Il2CppType t5095_1_0_0;
struct t5095;
extern TypeInfo t5095_TI;
extern Il2CppGenericClass t5095_GC;
TypeInfo t5095_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5095_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5095_TI, t5095_ITIs, NULL, &EmptyCustomAttributesCache, &t5095_TI, &t5095_0_0_0, &t5095_1_0_0, NULL, &t5095_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3775_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m29298_MI;
static PropertyInfo t3775____Current_PropertyInfo = 
{
	&t3775_TI, "Current", &m29298_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3775_PIs[] =
{
	&t3775____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3775_TI;
extern Il2CppType t1535_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29298_MI = 
{
	"get_Current", NULL, &t3775_TI, &t1535_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3775_MIs[] =
{
	&m29298_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3775_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3775_0_0_0;
extern Il2CppType t3775_1_0_0;
struct t3775;
extern TypeInfo t3775_TI;
extern Il2CppGenericClass t3775_GC;
TypeInfo t3775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3775_MIs, t3775_PIs, NULL, NULL, NULL, NULL, NULL, &t3775_TI, t3775_ITIs, NULL, &EmptyCustomAttributesCache, &t3775_TI, &t3775_0_0_0, &t3775_1_0_0, NULL, &t3775_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2855.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2855_TI;
#include "t2855MD.h"

extern TypeInfo t2855_TI;
extern TypeInfo t1535_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16172_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22202_MI;
struct t29;
#define m22202(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22202_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2855_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2855_TI, offsetof(t2855, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2855_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2855_TI, offsetof(t2855, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2855_FIs[] =
{
	&t2855_f0_FieldInfo,
	&t2855_f1_FieldInfo,
	NULL
};
extern MethodInfo m16169_MI;
static PropertyInfo t2855____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2855_TI, "System.Collections.IEnumerator.Current", &m16169_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16172_MI;
static PropertyInfo t2855____Current_PropertyInfo = 
{
	&t2855_TI, "Current", &m16172_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2855_PIs[] =
{
	&t2855____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2855____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2855_m16168_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2855_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16168_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2855_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2855_m16168_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16169_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2855_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16170_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2855_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16171_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2855_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2855_TI;
extern Il2CppType t1535_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16172_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2855_TI, &t1535_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2855_MIs[] =
{
	&m16168_MI,
	&m16169_MI,
	&m16170_MI,
	&m16171_MI,
	&m16172_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16169_MI;
extern MethodInfo m16171_MI;
extern MethodInfo m16170_MI;
extern MethodInfo m16172_MI;
static MethodInfo* t2855_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16169_MI,
	&m16171_MI,
	&m16170_MI,
	&m16172_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3775_TI;
static TypeInfo* t2855_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3775_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3775_TI;
static Il2CppInterfaceOffsetPair t2855_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3775_TI, 7},
};
extern MethodInfo m16172_MI;
extern TypeInfo t1535_TI;
extern MethodInfo m22202_MI;
static void* t2855_RGCTXData[3] = 
{
	&m16172_MI,
	&t1535_TI,
	&m22202_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2855_0_0_0;
extern Il2CppType t2855_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2855_TI;
extern Il2CppGenericClass t2855_GC;
extern TypeInfo t29_TI;
TypeInfo t2855_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2855_MIs, t2855_PIs, t2855_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2855_TI, t2855_ITIs, t2855_VT, &EmptyCustomAttributesCache, &t2855_TI, &t2855_0_0_0, &t2855_1_0_0, t2855_IOs, &t2855_GC, NULL, NULL, NULL, t2855_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2855)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5094_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo m29299_MI;
extern MethodInfo m29300_MI;
static PropertyInfo t5094____Item_PropertyInfo = 
{
	&t5094_TI, "Item", &m29299_MI, &m29300_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5094_PIs[] =
{
	&t5094____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1535_0_0_0;
static ParameterInfo t5094_m29301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern TypeInfo t5094_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29301_MI = 
{
	"IndexOf", NULL, &t5094_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5094_m29301_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1535_0_0_0;
static ParameterInfo t5094_m29302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern TypeInfo t5094_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29302_MI = 
{
	"Insert", NULL, &t5094_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5094_m29302_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5094_m29303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5094_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29303_MI = 
{
	"RemoveAt", NULL, &t5094_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5094_m29303_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5094_m29299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5094_TI;
extern Il2CppType t1535_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29299_MI = 
{
	"get_Item", NULL, &t5094_TI, &t1535_0_0_0, RuntimeInvoker_t28_t47, t5094_m29299_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1535_0_0_0;
static ParameterInfo t5094_m29300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1535_0_0_0},
};
extern TypeInfo t5094_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29300_MI = 
{
	"set_Item", NULL, &t5094_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5094_m29300_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5094_MIs[] =
{
	&m29301_MI,
	&m29302_MI,
	&m29303_MI,
	&m29299_MI,
	&m29300_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5093_TI;
extern TypeInfo t5095_TI;
static TypeInfo* t5094_ITIs[] = 
{
	&t611_TI,
	&t5093_TI,
	&t5095_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5094_0_0_0;
extern Il2CppType t5094_1_0_0;
struct t5094;
extern TypeInfo t5094_TI;
extern Il2CppGenericClass t5094_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5094_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5094_MIs, t5094_PIs, NULL, NULL, NULL, NULL, NULL, &t5094_TI, t5094_ITIs, NULL, &t1418__CustomAttributeCache, &t5094_TI, &t5094_0_0_0, &t5094_1_0_0, NULL, &t5094_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5096_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo m29304_MI;
static PropertyInfo t5096____Count_PropertyInfo = 
{
	&t5096_TI, "Count", &m29304_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29305_MI;
static PropertyInfo t5096____IsReadOnly_PropertyInfo = 
{
	&t5096_TI, "IsReadOnly", &m29305_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5096_PIs[] =
{
	&t5096____Count_PropertyInfo,
	&t5096____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5096_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29304_MI = 
{
	"get_Count", NULL, &t5096_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5096_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29305_MI = 
{
	"get_IsReadOnly", NULL, &t5096_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t5096_m29306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29306_MI = 
{
	"Add", NULL, &t5096_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5096_m29306_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5096_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29307_MI = 
{
	"Clear", NULL, &t5096_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t5096_m29308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29308_MI = 
{
	"Contains", NULL, &t5096_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5096_m29308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3104_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5096_m29309_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3104_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29309_MI = 
{
	"CopyTo", NULL, &t5096_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5096_m29309_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t5096_m29310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t5096_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29310_MI = 
{
	"Remove", NULL, &t5096_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5096_m29310_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5096_MIs[] =
{
	&m29304_MI,
	&m29305_MI,
	&m29306_MI,
	&m29307_MI,
	&m29308_MI,
	&m29309_MI,
	&m29310_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5098_TI;
static TypeInfo* t5096_ITIs[] = 
{
	&t611_TI,
	&t5098_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5096_0_0_0;
extern Il2CppType t5096_1_0_0;
struct t5096;
extern TypeInfo t5096_TI;
extern Il2CppGenericClass t5096_GC;
TypeInfo t5096_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5096_MIs, t5096_PIs, NULL, NULL, NULL, NULL, NULL, &t5096_TI, t5096_ITIs, NULL, &EmptyCustomAttributesCache, &t5096_TI, &t5096_0_0_0, &t5096_1_0_0, NULL, &t5096_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5098_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern TypeInfo t5098_TI;
extern Il2CppType t3776_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29311_MI = 
{
	"GetEnumerator", NULL, &t5098_TI, &t3776_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5098_MIs[] =
{
	&m29311_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5098_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5098_0_0_0;
extern Il2CppType t5098_1_0_0;
struct t5098;
extern TypeInfo t5098_TI;
extern Il2CppGenericClass t5098_GC;
TypeInfo t5098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5098_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5098_TI, t5098_ITIs, NULL, &EmptyCustomAttributesCache, &t5098_TI, &t5098_0_0_0, &t5098_1_0_0, NULL, &t5098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3776_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo m29312_MI;
static PropertyInfo t3776____Current_PropertyInfo = 
{
	&t3776_TI, "Current", &m29312_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3776_PIs[] =
{
	&t3776____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3776_TI;
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29312_MI = 
{
	"get_Current", NULL, &t3776_TI, &t1037_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3776_MIs[] =
{
	&m29312_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3776_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3776_0_0_0;
extern Il2CppType t3776_1_0_0;
struct t3776;
extern TypeInfo t3776_TI;
extern Il2CppGenericClass t3776_GC;
TypeInfo t3776_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3776_MIs, t3776_PIs, NULL, NULL, NULL, NULL, NULL, &t3776_TI, t3776_ITIs, NULL, &EmptyCustomAttributesCache, &t3776_TI, &t3776_0_0_0, &t3776_1_0_0, NULL, &t3776_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2856.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2856_TI;
#include "t2856MD.h"

extern TypeInfo t2856_TI;
extern TypeInfo t1037_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16177_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22213_MI;
struct t29;
#define m22213(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22213_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern Il2CppType t29_0_0_1;
FieldInfo t2856_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2856_TI, offsetof(t2856, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2856_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2856_TI, offsetof(t2856, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2856_FIs[] =
{
	&t2856_f0_FieldInfo,
	&t2856_f1_FieldInfo,
	NULL
};
extern MethodInfo m16174_MI;
static PropertyInfo t2856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2856_TI, "System.Collections.IEnumerator.Current", &m16174_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16177_MI;
static PropertyInfo t2856____Current_PropertyInfo = 
{
	&t2856_TI, "Current", &m16177_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2856_PIs[] =
{
	&t2856____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2856____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2856_m16173_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2856_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16173_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2856_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2856_m16173_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2856_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16174_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2856_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2856_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16175_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2856_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2856_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16176_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2856_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2856_TI;
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16177_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2856_TI, &t1037_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2856_MIs[] =
{
	&m16173_MI,
	&m16174_MI,
	&m16175_MI,
	&m16176_MI,
	&m16177_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16174_MI;
extern MethodInfo m16176_MI;
extern MethodInfo m16175_MI;
extern MethodInfo m16177_MI;
static MethodInfo* t2856_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16174_MI,
	&m16176_MI,
	&m16175_MI,
	&m16177_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3776_TI;
static TypeInfo* t2856_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3776_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3776_TI;
static Il2CppInterfaceOffsetPair t2856_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3776_TI, 7},
};
extern MethodInfo m16177_MI;
extern TypeInfo t1037_TI;
extern MethodInfo m22213_MI;
static void* t2856_RGCTXData[3] = 
{
	&m16177_MI,
	&t1037_TI,
	&m22213_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2856_0_0_0;
extern Il2CppType t2856_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2856_TI;
extern Il2CppGenericClass t2856_GC;
extern TypeInfo t29_TI;
TypeInfo t2856_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2856_MIs, t2856_PIs, t2856_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2856_TI, t2856_ITIs, t2856_VT, &EmptyCustomAttributesCache, &t2856_TI, &t2856_0_0_0, &t2856_1_0_0, t2856_IOs, &t2856_GC, NULL, NULL, NULL, t2856_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2856)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5097_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo m29313_MI;
extern MethodInfo m29314_MI;
static PropertyInfo t5097____Item_PropertyInfo = 
{
	&t5097_TI, "Item", &m29313_MI, &m29314_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5097_PIs[] =
{
	&t5097____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1037_0_0_0;
static ParameterInfo t5097_m29315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29315_MI = 
{
	"IndexOf", NULL, &t5097_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5097_m29315_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t5097_m29316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29316_MI = 
{
	"Insert", NULL, &t5097_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5097_m29316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5097_m29317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29317_MI = 
{
	"RemoveAt", NULL, &t5097_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5097_m29317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5097_m29313_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t1037_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29313_MI = 
{
	"get_Item", NULL, &t5097_TI, &t1037_0_0_0, RuntimeInvoker_t28_t47, t5097_m29313_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1037_0_0_0;
static ParameterInfo t5097_m29314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1037_0_0_0},
};
extern TypeInfo t5097_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29314_MI = 
{
	"set_Item", NULL, &t5097_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5097_m29314_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5097_MIs[] =
{
	&m29315_MI,
	&m29316_MI,
	&m29317_MI,
	&m29313_MI,
	&m29314_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5096_TI;
extern TypeInfo t5098_TI;
static TypeInfo* t5097_ITIs[] = 
{
	&t611_TI,
	&t5096_TI,
	&t5098_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5097_0_0_0;
extern Il2CppType t5097_1_0_0;
struct t5097;
extern TypeInfo t5097_TI;
extern Il2CppGenericClass t5097_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5097_MIs, t5097_PIs, NULL, NULL, NULL, NULL, NULL, &t5097_TI, t5097_ITIs, NULL, &t1418__CustomAttributeCache, &t5097_TI, &t5097_0_0_0, &t5097_1_0_0, NULL, &t5097_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3777_TI;

#include "t1038.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo m29318_MI;
static PropertyInfo t3777____Current_PropertyInfo = 
{
	&t3777_TI, "Current", &m29318_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3777_PIs[] =
{
	&t3777____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3777_TI;
extern Il2CppType t1038_0_0_0;
extern void* RuntimeInvoker_t1038 (MethodInfo* method, void* obj, void** args);
MethodInfo m29318_MI = 
{
	"get_Current", NULL, &t3777_TI, &t1038_0_0_0, RuntimeInvoker_t1038, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3777_MIs[] =
{
	&m29318_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3777_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3777_0_0_0;
extern Il2CppType t3777_1_0_0;
struct t3777;
extern TypeInfo t3777_TI;
extern Il2CppGenericClass t3777_GC;
TypeInfo t3777_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3777_MIs, t3777_PIs, NULL, NULL, NULL, NULL, NULL, &t3777_TI, t3777_ITIs, NULL, &EmptyCustomAttributesCache, &t3777_TI, &t3777_0_0_0, &t3777_1_0_0, NULL, &t3777_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2857_TI;
#include "t2857MD.h"

extern TypeInfo t2857_TI;
extern TypeInfo t1038_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16182_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22224_MI;
struct t29;
 uint8_t m22224 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22224_MI;


extern MethodInfo m16178_MI;
 void m16178 (t2857 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16179_MI;
 t28 * m16179 (t2857 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16182(__this, &m16182_MI);
		uint8_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1038_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16180_MI;
 void m16180 (t2857 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16181_MI;
 bool m16181 (t2857 * __this, MethodInfo* method){
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
extern MethodInfo m16182_MI;
 uint8_t m16182 (t2857 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22224(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22224_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern Il2CppType t29_0_0_1;
FieldInfo t2857_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2857_TI, offsetof(t2857, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2857_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2857_TI, offsetof(t2857, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2857_FIs[] =
{
	&t2857_f0_FieldInfo,
	&t2857_f1_FieldInfo,
	NULL
};
extern MethodInfo m16179_MI;
static PropertyInfo t2857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2857_TI, "System.Collections.IEnumerator.Current", &m16179_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16182_MI;
static PropertyInfo t2857____Current_PropertyInfo = 
{
	&t2857_TI, "Current", &m16182_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2857_PIs[] =
{
	&t2857____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2857____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2857_m16178_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2857_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16178_MI = 
{
	".ctor", (methodPointerType)&m16178, &t2857_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2857_m16178_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2857_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16179_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16179, &t2857_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2857_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16180_MI = 
{
	"Dispose", (methodPointerType)&m16180, &t2857_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2857_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16181_MI = 
{
	"MoveNext", (methodPointerType)&m16181, &t2857_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2857_TI;
extern Il2CppType t1038_0_0_0;
extern void* RuntimeInvoker_t1038 (MethodInfo* method, void* obj, void** args);
MethodInfo m16182_MI = 
{
	"get_Current", (methodPointerType)&m16182, &t2857_TI, &t1038_0_0_0, RuntimeInvoker_t1038, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2857_MIs[] =
{
	&m16178_MI,
	&m16179_MI,
	&m16180_MI,
	&m16181_MI,
	&m16182_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16179_MI;
extern MethodInfo m16181_MI;
extern MethodInfo m16180_MI;
extern MethodInfo m16182_MI;
static MethodInfo* t2857_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16179_MI,
	&m16181_MI,
	&m16180_MI,
	&m16182_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3777_TI;
static TypeInfo* t2857_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3777_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3777_TI;
static Il2CppInterfaceOffsetPair t2857_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3777_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2857_0_0_0;
extern Il2CppType t2857_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2857_TI;
extern Il2CppGenericClass t2857_GC;
extern TypeInfo t29_TI;
TypeInfo t2857_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2857_MIs, t2857_PIs, t2857_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2857_TI, t2857_ITIs, t2857_VT, &EmptyCustomAttributesCache, &t2857_TI, &t2857_0_0_0, &t2857_1_0_0, t2857_IOs, &t2857_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2857)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5099_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo m29319_MI;
static PropertyInfo t5099____Count_PropertyInfo = 
{
	&t5099_TI, "Count", &m29319_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29320_MI;
static PropertyInfo t5099____IsReadOnly_PropertyInfo = 
{
	&t5099_TI, "IsReadOnly", &m29320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5099_PIs[] =
{
	&t5099____Count_PropertyInfo,
	&t5099____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5099_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29319_MI = 
{
	"get_Count", NULL, &t5099_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5099_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29320_MI = 
{
	"get_IsReadOnly", NULL, &t5099_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t5099_m29321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29321_MI = 
{
	"Add", NULL, &t5099_TI, &t30_0_0_0, RuntimeInvoker_t30_t360, t5099_m29321_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5099_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29322_MI = 
{
	"Clear", NULL, &t5099_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t5099_m29323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29323_MI = 
{
	"Contains", NULL, &t5099_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5099_m29323_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3105_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5099_m29324_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3105_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29324_MI = 
{
	"CopyTo", NULL, &t5099_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5099_m29324_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t5099_m29325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern TypeInfo t5099_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29325_MI = 
{
	"Remove", NULL, &t5099_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5099_m29325_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5099_MIs[] =
{
	&m29319_MI,
	&m29320_MI,
	&m29321_MI,
	&m29322_MI,
	&m29323_MI,
	&m29324_MI,
	&m29325_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5101_TI;
static TypeInfo* t5099_ITIs[] = 
{
	&t611_TI,
	&t5101_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5099_0_0_0;
extern Il2CppType t5099_1_0_0;
struct t5099;
extern TypeInfo t5099_TI;
extern Il2CppGenericClass t5099_GC;
TypeInfo t5099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5099_MIs, t5099_PIs, NULL, NULL, NULL, NULL, NULL, &t5099_TI, t5099_ITIs, NULL, &EmptyCustomAttributesCache, &t5099_TI, &t5099_0_0_0, &t5099_1_0_0, NULL, &t5099_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5101_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern TypeInfo t5101_TI;
extern Il2CppType t3777_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29326_MI = 
{
	"GetEnumerator", NULL, &t5101_TI, &t3777_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5101_MIs[] =
{
	&m29326_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5101_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5101_0_0_0;
extern Il2CppType t5101_1_0_0;
struct t5101;
extern TypeInfo t5101_TI;
extern Il2CppGenericClass t5101_GC;
TypeInfo t5101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5101_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5101_TI, t5101_ITIs, NULL, &EmptyCustomAttributesCache, &t5101_TI, &t5101_0_0_0, &t5101_1_0_0, NULL, &t5101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5100_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo m29327_MI;
extern MethodInfo m29328_MI;
static PropertyInfo t5100____Item_PropertyInfo = 
{
	&t5100_TI, "Item", &m29327_MI, &m29328_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5100_PIs[] =
{
	&t5100____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1038_0_0_0;
static ParameterInfo t5100_m29329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29329_MI = 
{
	"IndexOf", NULL, &t5100_TI, &t47_0_0_0, RuntimeInvoker_t47_t360, t5100_m29329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1038_0_0_0;
static ParameterInfo t5100_m29330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29330_MI = 
{
	"Insert", NULL, &t5100_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5100_m29330_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5100_m29331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29331_MI = 
{
	"RemoveAt", NULL, &t5100_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5100_m29331_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5100_m29327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t1038_0_0_0;
extern void* RuntimeInvoker_t1038_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29327_MI = 
{
	"get_Item", NULL, &t5100_TI, &t1038_0_0_0, RuntimeInvoker_t1038_t47, t5100_m29327_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1038_0_0_0;
static ParameterInfo t5100_m29328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1038_0_0_0},
};
extern TypeInfo t5100_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29328_MI = 
{
	"set_Item", NULL, &t5100_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5100_m29328_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5100_MIs[] =
{
	&m29329_MI,
	&m29330_MI,
	&m29331_MI,
	&m29327_MI,
	&m29328_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5099_TI;
extern TypeInfo t5101_TI;
static TypeInfo* t5100_ITIs[] = 
{
	&t611_TI,
	&t5099_TI,
	&t5101_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5100_0_0_0;
extern Il2CppType t5100_1_0_0;
struct t5100;
extern TypeInfo t5100_TI;
extern Il2CppGenericClass t5100_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5100_MIs, t5100_PIs, NULL, NULL, NULL, NULL, NULL, &t5100_TI, t5100_ITIs, NULL, &t1418__CustomAttributeCache, &t5100_TI, &t5100_0_0_0, &t5100_1_0_0, NULL, &t5100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3778_TI;

#include "t1050.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo m29332_MI;
static PropertyInfo t3778____Current_PropertyInfo = 
{
	&t3778_TI, "Current", &m29332_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3778_PIs[] =
{
	&t3778____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3778_TI;
extern Il2CppType t1050_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29332_MI = 
{
	"get_Current", NULL, &t3778_TI, &t1050_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3778_MIs[] =
{
	&m29332_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3778_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3778_0_0_0;
extern Il2CppType t3778_1_0_0;
struct t3778;
extern TypeInfo t3778_TI;
extern Il2CppGenericClass t3778_GC;
TypeInfo t3778_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3778_MIs, t3778_PIs, NULL, NULL, NULL, NULL, NULL, &t3778_TI, t3778_ITIs, NULL, &EmptyCustomAttributesCache, &t3778_TI, &t3778_0_0_0, &t3778_1_0_0, NULL, &t3778_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2858.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2858_TI;
#include "t2858MD.h"

extern TypeInfo t2858_TI;
extern TypeInfo t1050_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16187_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22235_MI;
struct t29;
#define m22235(__this, p0, method) (t1050 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22235_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
extern Il2CppType t29_0_0_1;
FieldInfo t2858_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2858_TI, offsetof(t2858, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2858_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2858_TI, offsetof(t2858, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2858_FIs[] =
{
	&t2858_f0_FieldInfo,
	&t2858_f1_FieldInfo,
	NULL
};
extern MethodInfo m16184_MI;
static PropertyInfo t2858____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2858_TI, "System.Collections.IEnumerator.Current", &m16184_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16187_MI;
static PropertyInfo t2858____Current_PropertyInfo = 
{
	&t2858_TI, "Current", &m16187_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2858_PIs[] =
{
	&t2858____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2858____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2858_m16183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2858_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16183_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2858_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2858_m16183_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2858_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16184_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2858_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2858_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16185_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2858_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2858_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16186_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2858_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2858_TI;
extern Il2CppType t1050_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16187_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2858_TI, &t1050_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2858_MIs[] =
{
	&m16183_MI,
	&m16184_MI,
	&m16185_MI,
	&m16186_MI,
	&m16187_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16184_MI;
extern MethodInfo m16186_MI;
extern MethodInfo m16185_MI;
extern MethodInfo m16187_MI;
static MethodInfo* t2858_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16184_MI,
	&m16186_MI,
	&m16185_MI,
	&m16187_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3778_TI;
static TypeInfo* t2858_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3778_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3778_TI;
static Il2CppInterfaceOffsetPair t2858_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3778_TI, 7},
};
extern MethodInfo m16187_MI;
extern TypeInfo t1050_TI;
extern MethodInfo m22235_MI;
static void* t2858_RGCTXData[3] = 
{
	&m16187_MI,
	&t1050_TI,
	&m22235_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2858_0_0_0;
extern Il2CppType t2858_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2858_TI;
extern Il2CppGenericClass t2858_GC;
extern TypeInfo t29_TI;
TypeInfo t2858_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2858_MIs, t2858_PIs, t2858_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2858_TI, t2858_ITIs, t2858_VT, &EmptyCustomAttributesCache, &t2858_TI, &t2858_0_0_0, &t2858_1_0_0, t2858_IOs, &t2858_GC, NULL, NULL, NULL, t2858_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2858)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5102_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo m29333_MI;
static PropertyInfo t5102____Count_PropertyInfo = 
{
	&t5102_TI, "Count", &m29333_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29334_MI;
static PropertyInfo t5102____IsReadOnly_PropertyInfo = 
{
	&t5102_TI, "IsReadOnly", &m29334_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5102_PIs[] =
{
	&t5102____Count_PropertyInfo,
	&t5102____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5102_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29333_MI = 
{
	"get_Count", NULL, &t5102_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5102_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29334_MI = 
{
	"get_IsReadOnly", NULL, &t5102_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t5102_m29335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29335_MI = 
{
	"Add", NULL, &t5102_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5102_m29335_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5102_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29336_MI = 
{
	"Clear", NULL, &t5102_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t5102_m29337_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29337_MI = 
{
	"Contains", NULL, &t5102_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5102_m29337_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1053_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5102_m29338_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1053_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29338_MI = 
{
	"CopyTo", NULL, &t5102_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5102_m29338_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t5102_m29339_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern TypeInfo t5102_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29339_MI = 
{
	"Remove", NULL, &t5102_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5102_m29339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5102_MIs[] =
{
	&m29333_MI,
	&m29334_MI,
	&m29335_MI,
	&m29336_MI,
	&m29337_MI,
	&m29338_MI,
	&m29339_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5104_TI;
static TypeInfo* t5102_ITIs[] = 
{
	&t611_TI,
	&t5104_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5102_0_0_0;
extern Il2CppType t5102_1_0_0;
struct t5102;
extern TypeInfo t5102_TI;
extern Il2CppGenericClass t5102_GC;
TypeInfo t5102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5102_MIs, t5102_PIs, NULL, NULL, NULL, NULL, NULL, &t5102_TI, t5102_ITIs, NULL, &EmptyCustomAttributesCache, &t5102_TI, &t5102_0_0_0, &t5102_1_0_0, NULL, &t5102_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5104_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.Header>
extern TypeInfo t5104_TI;
extern Il2CppType t3778_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29340_MI = 
{
	"GetEnumerator", NULL, &t5104_TI, &t3778_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5104_MIs[] =
{
	&m29340_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5104_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5104_0_0_0;
extern Il2CppType t5104_1_0_0;
struct t5104;
extern TypeInfo t5104_TI;
extern Il2CppGenericClass t5104_GC;
TypeInfo t5104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5104_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5104_TI, t5104_ITIs, NULL, &EmptyCustomAttributesCache, &t5104_TI, &t5104_0_0_0, &t5104_1_0_0, NULL, &t5104_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5103_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo m29341_MI;
extern MethodInfo m29342_MI;
static PropertyInfo t5103____Item_PropertyInfo = 
{
	&t5103_TI, "Item", &m29341_MI, &m29342_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5103_PIs[] =
{
	&t5103____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1050_0_0_0;
static ParameterInfo t5103_m29343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29343_MI = 
{
	"IndexOf", NULL, &t5103_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5103_m29343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1050_0_0_0;
static ParameterInfo t5103_m29344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29344_MI = 
{
	"Insert", NULL, &t5103_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5103_m29344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5103_m29345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29345_MI = 
{
	"RemoveAt", NULL, &t5103_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5103_m29345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5103_m29341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t1050_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29341_MI = 
{
	"get_Item", NULL, &t5103_TI, &t1050_0_0_0, RuntimeInvoker_t28_t47, t5103_m29341_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1050_0_0_0;
static ParameterInfo t5103_m29342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1050_0_0_0},
};
extern TypeInfo t5103_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29342_MI = 
{
	"set_Item", NULL, &t5103_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5103_m29342_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5103_MIs[] =
{
	&m29343_MI,
	&m29344_MI,
	&m29345_MI,
	&m29341_MI,
	&m29342_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5102_TI;
extern TypeInfo t5104_TI;
static TypeInfo* t5103_ITIs[] = 
{
	&t611_TI,
	&t5102_TI,
	&t5104_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5103_0_0_0;
extern Il2CppType t5103_1_0_0;
struct t5103;
extern TypeInfo t5103_TI;
extern Il2CppGenericClass t5103_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5103_MIs, t5103_PIs, NULL, NULL, NULL, NULL, NULL, &t5103_TI, t5103_ITIs, NULL, &t1418__CustomAttributeCache, &t5103_TI, &t5103_0_0_0, &t5103_1_0_0, NULL, &t5103_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3779_TI;

#include "t1066.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo m29346_MI;
static PropertyInfo t3779____Current_PropertyInfo = 
{
	&t3779_TI, "Current", &m29346_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3779_PIs[] =
{
	&t3779____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3779_TI;
extern Il2CppType t1066_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29346_MI = 
{
	"get_Current", NULL, &t3779_TI, &t1066_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3779_MIs[] =
{
	&m29346_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3779_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3779_0_0_0;
extern Il2CppType t3779_1_0_0;
struct t3779;
extern TypeInfo t3779_TI;
extern Il2CppGenericClass t3779_GC;
TypeInfo t3779_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3779_MIs, t3779_PIs, NULL, NULL, NULL, NULL, NULL, &t3779_TI, t3779_ITIs, NULL, &EmptyCustomAttributesCache, &t3779_TI, &t3779_0_0_0, &t3779_1_0_0, NULL, &t3779_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2859.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2859_TI;
#include "t2859MD.h"

extern TypeInfo t2859_TI;
extern TypeInfo t1066_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16192_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22246_MI;
struct t29;
#define m22246(__this, p0, method) (t1066 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22246_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2859_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2859_TI, offsetof(t2859, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2859_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2859_TI, offsetof(t2859, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2859_FIs[] =
{
	&t2859_f0_FieldInfo,
	&t2859_f1_FieldInfo,
	NULL
};
extern MethodInfo m16189_MI;
static PropertyInfo t2859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2859_TI, "System.Collections.IEnumerator.Current", &m16189_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16192_MI;
static PropertyInfo t2859____Current_PropertyInfo = 
{
	&t2859_TI, "Current", &m16192_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2859_PIs[] =
{
	&t2859____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2859____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2859_m16188_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2859_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16188_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2859_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2859_m16188_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2859_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16189_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2859_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2859_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16190_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2859_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2859_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16191_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2859_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2859_TI;
extern Il2CppType t1066_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16192_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2859_TI, &t1066_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2859_MIs[] =
{
	&m16188_MI,
	&m16189_MI,
	&m16190_MI,
	&m16191_MI,
	&m16192_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16189_MI;
extern MethodInfo m16191_MI;
extern MethodInfo m16190_MI;
extern MethodInfo m16192_MI;
static MethodInfo* t2859_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16189_MI,
	&m16191_MI,
	&m16190_MI,
	&m16192_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3779_TI;
static TypeInfo* t2859_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3779_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3779_TI;
static Il2CppInterfaceOffsetPair t2859_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3779_TI, 7},
};
extern MethodInfo m16192_MI;
extern TypeInfo t1066_TI;
extern MethodInfo m22246_MI;
static void* t2859_RGCTXData[3] = 
{
	&m16192_MI,
	&t1066_TI,
	&m22246_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2859_0_0_0;
extern Il2CppType t2859_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2859_TI;
extern Il2CppGenericClass t2859_GC;
extern TypeInfo t29_TI;
TypeInfo t2859_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2859_MIs, t2859_PIs, t2859_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2859_TI, t2859_ITIs, t2859_VT, &EmptyCustomAttributesCache, &t2859_TI, &t2859_0_0_0, &t2859_1_0_0, t2859_IOs, &t2859_GC, NULL, NULL, NULL, t2859_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2859)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5105_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo m29347_MI;
static PropertyInfo t5105____Count_PropertyInfo = 
{
	&t5105_TI, "Count", &m29347_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29348_MI;
static PropertyInfo t5105____IsReadOnly_PropertyInfo = 
{
	&t5105_TI, "IsReadOnly", &m29348_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5105_PIs[] =
{
	&t5105____Count_PropertyInfo,
	&t5105____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5105_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29347_MI = 
{
	"get_Count", NULL, &t5105_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5105_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29348_MI = 
{
	"get_IsReadOnly", NULL, &t5105_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1066_0_0_0;
static ParameterInfo t5105_m29349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29349_MI = 
{
	"Add", NULL, &t5105_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5105_m29349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5105_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29350_MI = 
{
	"Clear", NULL, &t5105_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1066_0_0_0;
static ParameterInfo t5105_m29351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29351_MI = 
{
	"Contains", NULL, &t5105_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5105_m29351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3106_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5105_m29352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3106_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29352_MI = 
{
	"CopyTo", NULL, &t5105_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5105_m29352_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1066_0_0_0;
static ParameterInfo t5105_m29353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t5105_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29353_MI = 
{
	"Remove", NULL, &t5105_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5105_m29353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5105_MIs[] =
{
	&m29347_MI,
	&m29348_MI,
	&m29349_MI,
	&m29350_MI,
	&m29351_MI,
	&m29352_MI,
	&m29353_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5107_TI;
static TypeInfo* t5105_ITIs[] = 
{
	&t611_TI,
	&t5107_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5105_0_0_0;
extern Il2CppType t5105_1_0_0;
struct t5105;
extern TypeInfo t5105_TI;
extern Il2CppGenericClass t5105_GC;
TypeInfo t5105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5105_MIs, t5105_PIs, NULL, NULL, NULL, NULL, NULL, &t5105_TI, t5105_ITIs, NULL, &EmptyCustomAttributesCache, &t5105_TI, &t5105_0_0_0, &t5105_1_0_0, NULL, &t5105_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5107_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern TypeInfo t5107_TI;
extern Il2CppType t3779_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29354_MI = 
{
	"GetEnumerator", NULL, &t5107_TI, &t3779_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5107_MIs[] =
{
	&m29354_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5107_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5107_0_0_0;
extern Il2CppType t5107_1_0_0;
struct t5107;
extern TypeInfo t5107_TI;
extern Il2CppGenericClass t5107_GC;
TypeInfo t5107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5107_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5107_TI, t5107_ITIs, NULL, &EmptyCustomAttributesCache, &t5107_TI, &t5107_0_0_0, &t5107_1_0_0, NULL, &t5107_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5106_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo m29355_MI;
extern MethodInfo m29356_MI;
static PropertyInfo t5106____Item_PropertyInfo = 
{
	&t5106_TI, "Item", &m29355_MI, &m29356_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5106_PIs[] =
{
	&t5106____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1066_0_0_0;
static ParameterInfo t5106_m29357_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29357_MI = 
{
	"IndexOf", NULL, &t5106_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5106_m29357_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1066_0_0_0;
static ParameterInfo t5106_m29358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29358_MI = 
{
	"Insert", NULL, &t5106_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5106_m29358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5106_m29359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29359_MI = 
{
	"RemoveAt", NULL, &t5106_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5106_m29359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5106_m29355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t1066_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29355_MI = 
{
	"get_Item", NULL, &t5106_TI, &t1066_0_0_0, RuntimeInvoker_t28_t47, t5106_m29355_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1066_0_0_0;
static ParameterInfo t5106_m29356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1066_0_0_0},
};
extern TypeInfo t5106_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29356_MI = 
{
	"set_Item", NULL, &t5106_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5106_m29356_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5106_MIs[] =
{
	&m29357_MI,
	&m29358_MI,
	&m29359_MI,
	&m29355_MI,
	&m29356_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5105_TI;
extern TypeInfo t5107_TI;
static TypeInfo* t5106_ITIs[] = 
{
	&t611_TI,
	&t5105_TI,
	&t5107_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5106_0_0_0;
extern Il2CppType t5106_1_0_0;
struct t5106;
extern TypeInfo t5106_TI;
extern Il2CppGenericClass t5106_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5106_MIs, t5106_PIs, NULL, NULL, NULL, NULL, NULL, &t5106_TI, t5106_ITIs, NULL, &t1418__CustomAttributeCache, &t5106_TI, &t5106_0_0_0, &t5106_1_0_0, NULL, &t5106_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3780_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo m29360_MI;
static PropertyInfo t3780____Current_PropertyInfo = 
{
	&t3780_TI, "Current", &m29360_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3780_PIs[] =
{
	&t3780____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3780_TI;
extern Il2CppType t1544_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29360_MI = 
{
	"get_Current", NULL, &t3780_TI, &t1544_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3780_MIs[] =
{
	&m29360_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3780_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3780_0_0_0;
extern Il2CppType t3780_1_0_0;
struct t3780;
extern TypeInfo t3780_TI;
extern Il2CppGenericClass t3780_GC;
TypeInfo t3780_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3780_MIs, t3780_PIs, NULL, NULL, NULL, NULL, NULL, &t3780_TI, t3780_ITIs, NULL, &EmptyCustomAttributesCache, &t3780_TI, &t3780_0_0_0, &t3780_1_0_0, NULL, &t3780_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2860.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2860_TI;
#include "t2860MD.h"

extern TypeInfo t2860_TI;
extern TypeInfo t1544_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16197_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22257_MI;
struct t29;
#define m22257(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m22257_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern Il2CppType t29_0_0_1;
FieldInfo t2860_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2860_TI, offsetof(t2860, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2860_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2860_TI, offsetof(t2860, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2860_FIs[] =
{
	&t2860_f0_FieldInfo,
	&t2860_f1_FieldInfo,
	NULL
};
extern MethodInfo m16194_MI;
static PropertyInfo t2860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2860_TI, "System.Collections.IEnumerator.Current", &m16194_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16197_MI;
static PropertyInfo t2860____Current_PropertyInfo = 
{
	&t2860_TI, "Current", &m16197_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2860_PIs[] =
{
	&t2860____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2860____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2860_m16193_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2860_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16193_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2860_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2860_m16193_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16194_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2860_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16195_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2860_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16196_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2860_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2860_TI;
extern Il2CppType t1544_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16197_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2860_TI, &t1544_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2860_MIs[] =
{
	&m16193_MI,
	&m16194_MI,
	&m16195_MI,
	&m16196_MI,
	&m16197_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16194_MI;
extern MethodInfo m16196_MI;
extern MethodInfo m16195_MI;
extern MethodInfo m16197_MI;
static MethodInfo* t2860_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16194_MI,
	&m16196_MI,
	&m16195_MI,
	&m16197_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3780_TI;
static TypeInfo* t2860_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3780_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3780_TI;
static Il2CppInterfaceOffsetPair t2860_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3780_TI, 7},
};
extern MethodInfo m16197_MI;
extern TypeInfo t1544_TI;
extern MethodInfo m22257_MI;
static void* t2860_RGCTXData[3] = 
{
	&m16197_MI,
	&t1544_TI,
	&m22257_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2860_0_0_0;
extern Il2CppType t2860_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2860_TI;
extern Il2CppGenericClass t2860_GC;
extern TypeInfo t29_TI;
TypeInfo t2860_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2860_MIs, t2860_PIs, t2860_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2860_TI, t2860_ITIs, t2860_VT, &EmptyCustomAttributesCache, &t2860_TI, &t2860_0_0_0, &t2860_1_0_0, t2860_IOs, &t2860_GC, NULL, NULL, NULL, t2860_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2860)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5108_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo m29361_MI;
static PropertyInfo t5108____Count_PropertyInfo = 
{
	&t5108_TI, "Count", &m29361_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29362_MI;
static PropertyInfo t5108____IsReadOnly_PropertyInfo = 
{
	&t5108_TI, "IsReadOnly", &m29362_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5108_PIs[] =
{
	&t5108____Count_PropertyInfo,
	&t5108____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5108_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29361_MI = 
{
	"get_Count", NULL, &t5108_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5108_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29362_MI = 
{
	"get_IsReadOnly", NULL, &t5108_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1544_0_0_0;
static ParameterInfo t5108_m29363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29363_MI = 
{
	"Add", NULL, &t5108_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5108_m29363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5108_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29364_MI = 
{
	"Clear", NULL, &t5108_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1544_0_0_0;
static ParameterInfo t5108_m29365_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29365_MI = 
{
	"Contains", NULL, &t5108_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5108_m29365_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1545_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5108_m29366_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1545_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29366_MI = 
{
	"CopyTo", NULL, &t5108_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5108_m29366_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1544_0_0_0;
static ParameterInfo t5108_m29367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern TypeInfo t5108_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29367_MI = 
{
	"Remove", NULL, &t5108_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5108_m29367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5108_MIs[] =
{
	&m29361_MI,
	&m29362_MI,
	&m29363_MI,
	&m29364_MI,
	&m29365_MI,
	&m29366_MI,
	&m29367_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5110_TI;
static TypeInfo* t5108_ITIs[] = 
{
	&t611_TI,
	&t5110_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5108_0_0_0;
extern Il2CppType t5108_1_0_0;
struct t5108;
extern TypeInfo t5108_TI;
extern Il2CppGenericClass t5108_GC;
TypeInfo t5108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5108_MIs, t5108_PIs, NULL, NULL, NULL, NULL, NULL, &t5108_TI, t5108_ITIs, NULL, &EmptyCustomAttributesCache, &t5108_TI, &t5108_0_0_0, &t5108_1_0_0, NULL, &t5108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5110_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern TypeInfo t5110_TI;
extern Il2CppType t3780_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29368_MI = 
{
	"GetEnumerator", NULL, &t5110_TI, &t3780_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5110_MIs[] =
{
	&m29368_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5110_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5110_0_0_0;
extern Il2CppType t5110_1_0_0;
struct t5110;
extern TypeInfo t5110_TI;
extern Il2CppGenericClass t5110_GC;
TypeInfo t5110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5110_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5110_TI, t5110_ITIs, NULL, &EmptyCustomAttributesCache, &t5110_TI, &t5110_0_0_0, &t5110_1_0_0, NULL, &t5110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5109_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo m29369_MI;
extern MethodInfo m29370_MI;
static PropertyInfo t5109____Item_PropertyInfo = 
{
	&t5109_TI, "Item", &m29369_MI, &m29370_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5109_PIs[] =
{
	&t5109____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1544_0_0_0;
static ParameterInfo t5109_m29371_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29371_MI = 
{
	"IndexOf", NULL, &t5109_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5109_m29371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1544_0_0_0;
static ParameterInfo t5109_m29372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29372_MI = 
{
	"Insert", NULL, &t5109_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5109_m29372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5109_m29373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29373_MI = 
{
	"RemoveAt", NULL, &t5109_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5109_m29373_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5109_m29369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t1544_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29369_MI = 
{
	"get_Item", NULL, &t5109_TI, &t1544_0_0_0, RuntimeInvoker_t28_t47, t5109_m29369_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1544_0_0_0;
static ParameterInfo t5109_m29370_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1544_0_0_0},
};
extern TypeInfo t5109_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29370_MI = 
{
	"set_Item", NULL, &t5109_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t5109_m29370_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5109_MIs[] =
{
	&m29371_MI,
	&m29372_MI,
	&m29373_MI,
	&m29369_MI,
	&m29370_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5108_TI;
extern TypeInfo t5110_TI;
static TypeInfo* t5109_ITIs[] = 
{
	&t611_TI,
	&t5108_TI,
	&t5110_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5109_0_0_0;
extern Il2CppType t5109_1_0_0;
struct t5109;
extern TypeInfo t5109_TI;
extern Il2CppGenericClass t5109_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5109_MIs, t5109_PIs, NULL, NULL, NULL, NULL, NULL, &t5109_TI, t5109_ITIs, NULL, &t1418__CustomAttributeCache, &t5109_TI, &t5109_0_0_0, &t5109_1_0_0, NULL, &t5109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3781_TI;

#include "t1086.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo m29374_MI;
static PropertyInfo t3781____Current_PropertyInfo = 
{
	&t3781_TI, "Current", &m29374_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3781_PIs[] =
{
	&t3781____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3781_TI;
extern Il2CppType t1086_0_0_0;
extern void* RuntimeInvoker_t1086 (MethodInfo* method, void* obj, void** args);
MethodInfo m29374_MI = 
{
	"get_Current", NULL, &t3781_TI, &t1086_0_0_0, RuntimeInvoker_t1086, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3781_MIs[] =
{
	&m29374_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3781_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3781_0_0_0;
extern Il2CppType t3781_1_0_0;
struct t3781;
extern TypeInfo t3781_TI;
extern Il2CppGenericClass t3781_GC;
TypeInfo t3781_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3781_MIs, t3781_PIs, NULL, NULL, NULL, NULL, NULL, &t3781_TI, t3781_ITIs, NULL, &EmptyCustomAttributesCache, &t3781_TI, &t3781_0_0_0, &t3781_1_0_0, NULL, &t3781_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2861.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2861_TI;
#include "t2861MD.h"

extern TypeInfo t2861_TI;
extern TypeInfo t1086_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16202_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22268_MI;
struct t29;
 int32_t m22268 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22268_MI;


extern MethodInfo m16198_MI;
 void m16198 (t2861 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16199_MI;
 t28 * m16199 (t2861 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16202(__this, &m16202_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1086_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16200_MI;
 void m16200 (t2861 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16201_MI;
 bool m16201 (t2861 * __this, MethodInfo* method){
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
extern MethodInfo m16202_MI;
 int32_t m16202 (t2861 * __this, MethodInfo* method){
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
		int32_t L_8 = m22268(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22268_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
extern Il2CppType t29_0_0_1;
FieldInfo t2861_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2861_TI, offsetof(t2861, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2861_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2861_TI, offsetof(t2861, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2861_FIs[] =
{
	&t2861_f0_FieldInfo,
	&t2861_f1_FieldInfo,
	NULL
};
extern MethodInfo m16199_MI;
static PropertyInfo t2861____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2861_TI, "System.Collections.IEnumerator.Current", &m16199_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16202_MI;
static PropertyInfo t2861____Current_PropertyInfo = 
{
	&t2861_TI, "Current", &m16202_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2861_PIs[] =
{
	&t2861____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2861____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2861_m16198_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2861_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16198_MI = 
{
	".ctor", (methodPointerType)&m16198, &t2861_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2861_m16198_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2861_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16199_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16199, &t2861_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2861_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16200_MI = 
{
	"Dispose", (methodPointerType)&m16200, &t2861_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2861_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16201_MI = 
{
	"MoveNext", (methodPointerType)&m16201, &t2861_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2861_TI;
extern Il2CppType t1086_0_0_0;
extern void* RuntimeInvoker_t1086 (MethodInfo* method, void* obj, void** args);
MethodInfo m16202_MI = 
{
	"get_Current", (methodPointerType)&m16202, &t2861_TI, &t1086_0_0_0, RuntimeInvoker_t1086, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2861_MIs[] =
{
	&m16198_MI,
	&m16199_MI,
	&m16200_MI,
	&m16201_MI,
	&m16202_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16199_MI;
extern MethodInfo m16201_MI;
extern MethodInfo m16200_MI;
extern MethodInfo m16202_MI;
static MethodInfo* t2861_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16199_MI,
	&m16201_MI,
	&m16200_MI,
	&m16202_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3781_TI;
static TypeInfo* t2861_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3781_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3781_TI;
static Il2CppInterfaceOffsetPair t2861_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3781_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2861_0_0_0;
extern Il2CppType t2861_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2861_TI;
extern Il2CppGenericClass t2861_GC;
extern TypeInfo t29_TI;
TypeInfo t2861_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2861_MIs, t2861_PIs, t2861_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2861_TI, t2861_ITIs, t2861_VT, &EmptyCustomAttributesCache, &t2861_TI, &t2861_0_0_0, &t2861_1_0_0, t2861_IOs, &t2861_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2861)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5111_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo m29375_MI;
static PropertyInfo t5111____Count_PropertyInfo = 
{
	&t5111_TI, "Count", &m29375_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29376_MI;
static PropertyInfo t5111____IsReadOnly_PropertyInfo = 
{
	&t5111_TI, "IsReadOnly", &m29376_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5111_PIs[] =
{
	&t5111____Count_PropertyInfo,
	&t5111____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5111_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29375_MI = 
{
	"get_Count", NULL, &t5111_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5111_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29376_MI = 
{
	"get_IsReadOnly", NULL, &t5111_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1086_0_0_0;
static ParameterInfo t5111_m29377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1086_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29377_MI = 
{
	"Add", NULL, &t5111_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5111_m29377_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5111_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29378_MI = 
{
	"Clear", NULL, &t5111_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1086_0_0_0;
static ParameterInfo t5111_m29379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1086_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29379_MI = 
{
	"Contains", NULL, &t5111_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5111_m29379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3107_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5111_m29380_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29380_MI = 
{
	"CopyTo", NULL, &t5111_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5111_m29380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1086_0_0_0;
static ParameterInfo t5111_m29381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1086_0_0_0},
};
extern TypeInfo t5111_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29381_MI = 
{
	"Remove", NULL, &t5111_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5111_m29381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5111_MIs[] =
{
	&m29375_MI,
	&m29376_MI,
	&m29377_MI,
	&m29378_MI,
	&m29379_MI,
	&m29380_MI,
	&m29381_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5113_TI;
static TypeInfo* t5111_ITIs[] = 
{
	&t611_TI,
	&t5113_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5111_0_0_0;
extern Il2CppType t5111_1_0_0;
struct t5111;
extern TypeInfo t5111_TI;
extern Il2CppGenericClass t5111_GC;
TypeInfo t5111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5111_MIs, t5111_PIs, NULL, NULL, NULL, NULL, NULL, &t5111_TI, t5111_ITIs, NULL, &EmptyCustomAttributesCache, &t5111_TI, &t5111_0_0_0, &t5111_1_0_0, NULL, &t5111_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5113_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.WellKnownObjectMode>
extern TypeInfo t5113_TI;
extern Il2CppType t3781_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29382_MI = 
{
	"GetEnumerator", NULL, &t5113_TI, &t3781_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5113_MIs[] =
{
	&m29382_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5113_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5113_0_0_0;
extern Il2CppType t5113_1_0_0;
struct t5113;
extern TypeInfo t5113_TI;
extern Il2CppGenericClass t5113_GC;
TypeInfo t5113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5113_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5113_TI, t5113_ITIs, NULL, &EmptyCustomAttributesCache, &t5113_TI, &t5113_0_0_0, &t5113_1_0_0, NULL, &t5113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5112_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo m29383_MI;
extern MethodInfo m29384_MI;
static PropertyInfo t5112____Item_PropertyInfo = 
{
	&t5112_TI, "Item", &m29383_MI, &m29384_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5112_PIs[] =
{
	&t5112____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1086_0_0_0;
static ParameterInfo t5112_m29385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1086_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29385_MI = 
{
	"IndexOf", NULL, &t5112_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5112_m29385_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1086_0_0_0;
static ParameterInfo t5112_m29386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1086_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29386_MI = 
{
	"Insert", NULL, &t5112_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5112_m29386_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5112_m29387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29387_MI = 
{
	"RemoveAt", NULL, &t5112_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5112_m29387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5112_m29383_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t1086_0_0_0;
extern void* RuntimeInvoker_t1086_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29383_MI = 
{
	"get_Item", NULL, &t5112_TI, &t1086_0_0_0, RuntimeInvoker_t1086_t47, t5112_m29383_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1086_0_0_0;
static ParameterInfo t5112_m29384_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1086_0_0_0},
};
extern TypeInfo t5112_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29384_MI = 
{
	"set_Item", NULL, &t5112_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5112_m29384_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5112_MIs[] =
{
	&m29385_MI,
	&m29386_MI,
	&m29387_MI,
	&m29383_MI,
	&m29384_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5111_TI;
extern TypeInfo t5113_TI;
static TypeInfo* t5112_ITIs[] = 
{
	&t611_TI,
	&t5111_TI,
	&t5113_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5112_0_0_0;
extern Il2CppType t5112_1_0_0;
struct t5112;
extern TypeInfo t5112_TI;
extern Il2CppGenericClass t5112_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5112_MIs, t5112_PIs, NULL, NULL, NULL, NULL, NULL, &t5112_TI, t5112_ITIs, NULL, &t1418__CustomAttributeCache, &t5112_TI, &t5112_0_0_0, &t5112_1_0_0, NULL, &t5112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3782_TI;

#include "t1092.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo m29388_MI;
static PropertyInfo t3782____Current_PropertyInfo = 
{
	&t3782_TI, "Current", &m29388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3782_PIs[] =
{
	&t3782____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3782_TI;
extern Il2CppType t1092_0_0_0;
extern void* RuntimeInvoker_t1092 (MethodInfo* method, void* obj, void** args);
MethodInfo m29388_MI = 
{
	"get_Current", NULL, &t3782_TI, &t1092_0_0_0, RuntimeInvoker_t1092, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3782_MIs[] =
{
	&m29388_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3782_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3782_0_0_0;
extern Il2CppType t3782_1_0_0;
struct t3782;
extern TypeInfo t3782_TI;
extern Il2CppGenericClass t3782_GC;
TypeInfo t3782_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3782_MIs, t3782_PIs, NULL, NULL, NULL, NULL, NULL, &t3782_TI, t3782_ITIs, NULL, &EmptyCustomAttributesCache, &t3782_TI, &t3782_0_0_0, &t3782_1_0_0, NULL, &t3782_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2862.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2862_TI;
#include "t2862MD.h"

extern TypeInfo t2862_TI;
extern TypeInfo t1092_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16207_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22279_MI;
struct t29;
 uint8_t m22279 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22279_MI;


extern MethodInfo m16203_MI;
 void m16203 (t2862 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16204_MI;
 t28 * m16204 (t2862 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16207(__this, &m16207_MI);
		uint8_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1092_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16205_MI;
 void m16205 (t2862 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16206_MI;
 bool m16206 (t2862 * __this, MethodInfo* method){
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
extern MethodInfo m16207_MI;
 uint8_t m16207 (t2862 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22279(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22279_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern Il2CppType t29_0_0_1;
FieldInfo t2862_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2862_TI, offsetof(t2862, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2862_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2862_TI, offsetof(t2862, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2862_FIs[] =
{
	&t2862_f0_FieldInfo,
	&t2862_f1_FieldInfo,
	NULL
};
extern MethodInfo m16204_MI;
static PropertyInfo t2862____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2862_TI, "System.Collections.IEnumerator.Current", &m16204_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16207_MI;
static PropertyInfo t2862____Current_PropertyInfo = 
{
	&t2862_TI, "Current", &m16207_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2862_PIs[] =
{
	&t2862____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2862____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2862_m16203_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2862_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16203_MI = 
{
	".ctor", (methodPointerType)&m16203, &t2862_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2862_m16203_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2862_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16204_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16204, &t2862_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2862_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16205_MI = 
{
	"Dispose", (methodPointerType)&m16205, &t2862_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2862_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16206_MI = 
{
	"MoveNext", (methodPointerType)&m16206, &t2862_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2862_TI;
extern Il2CppType t1092_0_0_0;
extern void* RuntimeInvoker_t1092 (MethodInfo* method, void* obj, void** args);
MethodInfo m16207_MI = 
{
	"get_Current", (methodPointerType)&m16207, &t2862_TI, &t1092_0_0_0, RuntimeInvoker_t1092, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2862_MIs[] =
{
	&m16203_MI,
	&m16204_MI,
	&m16205_MI,
	&m16206_MI,
	&m16207_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16204_MI;
extern MethodInfo m16206_MI;
extern MethodInfo m16205_MI;
extern MethodInfo m16207_MI;
static MethodInfo* t2862_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16204_MI,
	&m16206_MI,
	&m16205_MI,
	&m16207_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3782_TI;
static TypeInfo* t2862_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3782_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3782_TI;
static Il2CppInterfaceOffsetPair t2862_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3782_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2862_0_0_0;
extern Il2CppType t2862_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2862_TI;
extern Il2CppGenericClass t2862_GC;
extern TypeInfo t29_TI;
TypeInfo t2862_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2862_MIs, t2862_PIs, t2862_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2862_TI, t2862_ITIs, t2862_VT, &EmptyCustomAttributesCache, &t2862_TI, &t2862_0_0_0, &t2862_1_0_0, t2862_IOs, &t2862_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2862)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5114_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo m29389_MI;
static PropertyInfo t5114____Count_PropertyInfo = 
{
	&t5114_TI, "Count", &m29389_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29390_MI;
static PropertyInfo t5114____IsReadOnly_PropertyInfo = 
{
	&t5114_TI, "IsReadOnly", &m29390_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5114_PIs[] =
{
	&t5114____Count_PropertyInfo,
	&t5114____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5114_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29389_MI = 
{
	"get_Count", NULL, &t5114_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5114_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29390_MI = 
{
	"get_IsReadOnly", NULL, &t5114_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1092_0_0_0;
static ParameterInfo t5114_m29391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1092_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29391_MI = 
{
	"Add", NULL, &t5114_TI, &t30_0_0_0, RuntimeInvoker_t30_t360, t5114_m29391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5114_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29392_MI = 
{
	"Clear", NULL, &t5114_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1092_0_0_0;
static ParameterInfo t5114_m29393_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1092_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29393_MI = 
{
	"Contains", NULL, &t5114_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5114_m29393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3108_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5114_m29394_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3108_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29394_MI = 
{
	"CopyTo", NULL, &t5114_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5114_m29394_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1092_0_0_0;
static ParameterInfo t5114_m29395_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1092_0_0_0},
};
extern TypeInfo t5114_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29395_MI = 
{
	"Remove", NULL, &t5114_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5114_m29395_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5114_MIs[] =
{
	&m29389_MI,
	&m29390_MI,
	&m29391_MI,
	&m29392_MI,
	&m29393_MI,
	&m29394_MI,
	&m29395_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5116_TI;
static TypeInfo* t5114_ITIs[] = 
{
	&t611_TI,
	&t5116_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5114_0_0_0;
extern Il2CppType t5114_1_0_0;
struct t5114;
extern TypeInfo t5114_TI;
extern Il2CppGenericClass t5114_GC;
TypeInfo t5114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5114_MIs, t5114_PIs, NULL, NULL, NULL, NULL, NULL, &t5114_TI, t5114_ITIs, NULL, &EmptyCustomAttributesCache, &t5114_TI, &t5114_0_0_0, &t5114_1_0_0, NULL, &t5114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5116_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern TypeInfo t5116_TI;
extern Il2CppType t3782_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29396_MI = 
{
	"GetEnumerator", NULL, &t5116_TI, &t3782_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5116_MIs[] =
{
	&m29396_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5116_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5116_0_0_0;
extern Il2CppType t5116_1_0_0;
struct t5116;
extern TypeInfo t5116_TI;
extern Il2CppGenericClass t5116_GC;
TypeInfo t5116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5116_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5116_TI, t5116_ITIs, NULL, &EmptyCustomAttributesCache, &t5116_TI, &t5116_0_0_0, &t5116_1_0_0, NULL, &t5116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5115_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo m29397_MI;
extern MethodInfo m29398_MI;
static PropertyInfo t5115____Item_PropertyInfo = 
{
	&t5115_TI, "Item", &m29397_MI, &m29398_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5115_PIs[] =
{
	&t5115____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1092_0_0_0;
static ParameterInfo t5115_m29399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1092_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29399_MI = 
{
	"IndexOf", NULL, &t5115_TI, &t47_0_0_0, RuntimeInvoker_t47_t360, t5115_m29399_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1092_0_0_0;
static ParameterInfo t5115_m29400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1092_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29400_MI = 
{
	"Insert", NULL, &t5115_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5115_m29400_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5115_m29401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29401_MI = 
{
	"RemoveAt", NULL, &t5115_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5115_m29401_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5115_m29397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t1092_0_0_0;
extern void* RuntimeInvoker_t1092_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29397_MI = 
{
	"get_Item", NULL, &t5115_TI, &t1092_0_0_0, RuntimeInvoker_t1092_t47, t5115_m29397_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1092_0_0_0;
static ParameterInfo t5115_m29398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1092_0_0_0},
};
extern TypeInfo t5115_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29398_MI = 
{
	"set_Item", NULL, &t5115_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5115_m29398_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5115_MIs[] =
{
	&m29399_MI,
	&m29400_MI,
	&m29401_MI,
	&m29397_MI,
	&m29398_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5114_TI;
extern TypeInfo t5116_TI;
static TypeInfo* t5115_ITIs[] = 
{
	&t611_TI,
	&t5114_TI,
	&t5116_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5115_0_0_0;
extern Il2CppType t5115_1_0_0;
struct t5115;
extern TypeInfo t5115_TI;
extern Il2CppGenericClass t5115_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5115_MIs, t5115_PIs, NULL, NULL, NULL, NULL, NULL, &t5115_TI, t5115_ITIs, NULL, &t1418__CustomAttributeCache, &t5115_TI, &t5115_0_0_0, &t5115_1_0_0, NULL, &t5115_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3783_TI;

#include "t1093.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo m29402_MI;
static PropertyInfo t3783____Current_PropertyInfo = 
{
	&t3783_TI, "Current", &m29402_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3783_PIs[] =
{
	&t3783____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3783_TI;
extern Il2CppType t1093_0_0_0;
extern void* RuntimeInvoker_t1093 (MethodInfo* method, void* obj, void** args);
MethodInfo m29402_MI = 
{
	"get_Current", NULL, &t3783_TI, &t1093_0_0_0, RuntimeInvoker_t1093, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3783_MIs[] =
{
	&m29402_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3783_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3783_0_0_0;
extern Il2CppType t3783_1_0_0;
struct t3783;
extern TypeInfo t3783_TI;
extern Il2CppGenericClass t3783_GC;
TypeInfo t3783_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3783_MIs, t3783_PIs, NULL, NULL, NULL, NULL, NULL, &t3783_TI, t3783_ITIs, NULL, &EmptyCustomAttributesCache, &t3783_TI, &t3783_0_0_0, &t3783_1_0_0, NULL, &t3783_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2863.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2863_TI;
#include "t2863MD.h"

extern TypeInfo t2863_TI;
extern TypeInfo t1093_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16212_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22290_MI;
struct t29;
 uint8_t m22290 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22290_MI;


extern MethodInfo m16208_MI;
 void m16208 (t2863 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16209_MI;
 t28 * m16209 (t2863 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16212(__this, &m16212_MI);
		uint8_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1093_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16210_MI;
 void m16210 (t2863 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16211_MI;
 bool m16211 (t2863 * __this, MethodInfo* method){
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
extern MethodInfo m16212_MI;
 uint8_t m16212 (t2863 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22290(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22290_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern Il2CppType t29_0_0_1;
FieldInfo t2863_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2863_TI, offsetof(t2863, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2863_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2863_TI, offsetof(t2863, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2863_FIs[] =
{
	&t2863_f0_FieldInfo,
	&t2863_f1_FieldInfo,
	NULL
};
extern MethodInfo m16209_MI;
static PropertyInfo t2863____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2863_TI, "System.Collections.IEnumerator.Current", &m16209_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16212_MI;
static PropertyInfo t2863____Current_PropertyInfo = 
{
	&t2863_TI, "Current", &m16212_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2863_PIs[] =
{
	&t2863____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2863____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2863_m16208_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2863_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16208_MI = 
{
	".ctor", (methodPointerType)&m16208, &t2863_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2863_m16208_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16209_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16209, &t2863_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16210_MI = 
{
	"Dispose", (methodPointerType)&m16210, &t2863_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16211_MI = 
{
	"MoveNext", (methodPointerType)&m16211, &t2863_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2863_TI;
extern Il2CppType t1093_0_0_0;
extern void* RuntimeInvoker_t1093 (MethodInfo* method, void* obj, void** args);
MethodInfo m16212_MI = 
{
	"get_Current", (methodPointerType)&m16212, &t2863_TI, &t1093_0_0_0, RuntimeInvoker_t1093, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2863_MIs[] =
{
	&m16208_MI,
	&m16209_MI,
	&m16210_MI,
	&m16211_MI,
	&m16212_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16209_MI;
extern MethodInfo m16211_MI;
extern MethodInfo m16210_MI;
extern MethodInfo m16212_MI;
static MethodInfo* t2863_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16209_MI,
	&m16211_MI,
	&m16210_MI,
	&m16212_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3783_TI;
static TypeInfo* t2863_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3783_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3783_TI;
static Il2CppInterfaceOffsetPair t2863_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3783_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2863_0_0_0;
extern Il2CppType t2863_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2863_TI;
extern Il2CppGenericClass t2863_GC;
extern TypeInfo t29_TI;
TypeInfo t2863_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2863_MIs, t2863_PIs, t2863_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2863_TI, t2863_ITIs, t2863_VT, &EmptyCustomAttributesCache, &t2863_TI, &t2863_0_0_0, &t2863_1_0_0, t2863_IOs, &t2863_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2863)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5117_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo m29403_MI;
static PropertyInfo t5117____Count_PropertyInfo = 
{
	&t5117_TI, "Count", &m29403_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29404_MI;
static PropertyInfo t5117____IsReadOnly_PropertyInfo = 
{
	&t5117_TI, "IsReadOnly", &m29404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5117_PIs[] =
{
	&t5117____Count_PropertyInfo,
	&t5117____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5117_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29403_MI = 
{
	"get_Count", NULL, &t5117_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5117_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29404_MI = 
{
	"get_IsReadOnly", NULL, &t5117_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1093_0_0_0;
static ParameterInfo t5117_m29405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29405_MI = 
{
	"Add", NULL, &t5117_TI, &t30_0_0_0, RuntimeInvoker_t30_t360, t5117_m29405_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5117_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29406_MI = 
{
	"Clear", NULL, &t5117_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1093_0_0_0;
static ParameterInfo t5117_m29407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29407_MI = 
{
	"Contains", NULL, &t5117_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5117_m29407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1549_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5117_m29408_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1549_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29408_MI = 
{
	"CopyTo", NULL, &t5117_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5117_m29408_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1093_0_0_0;
static ParameterInfo t5117_m29409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern TypeInfo t5117_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29409_MI = 
{
	"Remove", NULL, &t5117_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5117_m29409_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5117_MIs[] =
{
	&m29403_MI,
	&m29404_MI,
	&m29405_MI,
	&m29406_MI,
	&m29407_MI,
	&m29408_MI,
	&m29409_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5119_TI;
static TypeInfo* t5117_ITIs[] = 
{
	&t611_TI,
	&t5119_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5117_0_0_0;
extern Il2CppType t5117_1_0_0;
struct t5117;
extern TypeInfo t5117_TI;
extern Il2CppGenericClass t5117_GC;
TypeInfo t5117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5117_MIs, t5117_PIs, NULL, NULL, NULL, NULL, NULL, &t5117_TI, t5117_ITIs, NULL, &EmptyCustomAttributesCache, &t5117_TI, &t5117_0_0_0, &t5117_1_0_0, NULL, &t5117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5119_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern TypeInfo t5119_TI;
extern Il2CppType t3783_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29410_MI = 
{
	"GetEnumerator", NULL, &t5119_TI, &t3783_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5119_MIs[] =
{
	&m29410_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5119_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5119_0_0_0;
extern Il2CppType t5119_1_0_0;
struct t5119;
extern TypeInfo t5119_TI;
extern Il2CppGenericClass t5119_GC;
TypeInfo t5119_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5119_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5119_TI, t5119_ITIs, NULL, &EmptyCustomAttributesCache, &t5119_TI, &t5119_0_0_0, &t5119_1_0_0, NULL, &t5119_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5118_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo m29411_MI;
extern MethodInfo m29412_MI;
static PropertyInfo t5118____Item_PropertyInfo = 
{
	&t5118_TI, "Item", &m29411_MI, &m29412_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5118_PIs[] =
{
	&t5118____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1093_0_0_0;
static ParameterInfo t5118_m29413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29413_MI = 
{
	"IndexOf", NULL, &t5118_TI, &t47_0_0_0, RuntimeInvoker_t47_t360, t5118_m29413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1093_0_0_0;
static ParameterInfo t5118_m29414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29414_MI = 
{
	"Insert", NULL, &t5118_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5118_m29414_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5118_m29415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29415_MI = 
{
	"RemoveAt", NULL, &t5118_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5118_m29415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5118_m29411_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t1093_0_0_0;
extern void* RuntimeInvoker_t1093_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29411_MI = 
{
	"get_Item", NULL, &t5118_TI, &t1093_0_0_0, RuntimeInvoker_t1093_t47, t5118_m29411_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1093_0_0_0;
static ParameterInfo t5118_m29412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1093_0_0_0},
};
extern TypeInfo t5118_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29412_MI = 
{
	"set_Item", NULL, &t5118_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5118_m29412_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5118_MIs[] =
{
	&m29413_MI,
	&m29414_MI,
	&m29415_MI,
	&m29411_MI,
	&m29412_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5117_TI;
extern TypeInfo t5119_TI;
static TypeInfo* t5118_ITIs[] = 
{
	&t611_TI,
	&t5117_TI,
	&t5119_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5118_0_0_0;
extern Il2CppType t5118_1_0_0;
struct t5118;
extern TypeInfo t5118_TI;
extern Il2CppGenericClass t5118_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5118_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5118_MIs, t5118_PIs, NULL, NULL, NULL, NULL, NULL, &t5118_TI, t5118_ITIs, NULL, &t1418__CustomAttributeCache, &t5118_TI, &t5118_0_0_0, &t5118_1_0_0, NULL, &t5118_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3784_TI;

#include "t1094.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m29416_MI;
static PropertyInfo t3784____Current_PropertyInfo = 
{
	&t3784_TI, "Current", &m29416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3784_PIs[] =
{
	&t3784____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3784_TI;
extern Il2CppType t1094_0_0_0;
extern void* RuntimeInvoker_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m29416_MI = 
{
	"get_Current", NULL, &t3784_TI, &t1094_0_0_0, RuntimeInvoker_t1094, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3784_MIs[] =
{
	&m29416_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3784_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3784_0_0_0;
extern Il2CppType t3784_1_0_0;
struct t3784;
extern TypeInfo t3784_TI;
extern Il2CppGenericClass t3784_GC;
TypeInfo t3784_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3784_MIs, t3784_PIs, NULL, NULL, NULL, NULL, NULL, &t3784_TI, t3784_ITIs, NULL, &EmptyCustomAttributesCache, &t3784_TI, &t3784_0_0_0, &t3784_1_0_0, NULL, &t3784_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2864.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2864_TI;
#include "t2864MD.h"

extern TypeInfo t2864_TI;
extern TypeInfo t1094_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16217_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22301_MI;
struct t29;
 int32_t m22301 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22301_MI;


extern MethodInfo m16213_MI;
 void m16213 (t2864 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16214_MI;
 t28 * m16214 (t2864 * __this, MethodInfo* method){
	{
		int32_t L_0 = m16217(__this, &m16217_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1094_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16215_MI;
 void m16215 (t2864 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16216_MI;
 bool m16216 (t2864 * __this, MethodInfo* method){
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
extern MethodInfo m16217_MI;
 int32_t m16217 (t2864 * __this, MethodInfo* method){
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
		int32_t L_8 = m22301(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22301_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType t29_0_0_1;
FieldInfo t2864_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2864_TI, offsetof(t2864, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2864_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2864_TI, offsetof(t2864, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2864_FIs[] =
{
	&t2864_f0_FieldInfo,
	&t2864_f1_FieldInfo,
	NULL
};
extern MethodInfo m16214_MI;
static PropertyInfo t2864____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2864_TI, "System.Collections.IEnumerator.Current", &m16214_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16217_MI;
static PropertyInfo t2864____Current_PropertyInfo = 
{
	&t2864_TI, "Current", &m16217_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2864_PIs[] =
{
	&t2864____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2864____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2864_m16213_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2864_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16213_MI = 
{
	".ctor", (methodPointerType)&m16213, &t2864_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2864_m16213_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16214_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16214, &t2864_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16215_MI = 
{
	"Dispose", (methodPointerType)&m16215, &t2864_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16216_MI = 
{
	"MoveNext", (methodPointerType)&m16216, &t2864_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2864_TI;
extern Il2CppType t1094_0_0_0;
extern void* RuntimeInvoker_t1094 (MethodInfo* method, void* obj, void** args);
MethodInfo m16217_MI = 
{
	"get_Current", (methodPointerType)&m16217, &t2864_TI, &t1094_0_0_0, RuntimeInvoker_t1094, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2864_MIs[] =
{
	&m16213_MI,
	&m16214_MI,
	&m16215_MI,
	&m16216_MI,
	&m16217_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16214_MI;
extern MethodInfo m16216_MI;
extern MethodInfo m16215_MI;
extern MethodInfo m16217_MI;
static MethodInfo* t2864_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16214_MI,
	&m16216_MI,
	&m16215_MI,
	&m16217_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3784_TI;
static TypeInfo* t2864_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3784_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3784_TI;
static Il2CppInterfaceOffsetPair t2864_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3784_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2864_0_0_0;
extern Il2CppType t2864_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2864_TI;
extern Il2CppGenericClass t2864_GC;
extern TypeInfo t29_TI;
TypeInfo t2864_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2864_MIs, t2864_PIs, t2864_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2864_TI, t2864_ITIs, t2864_VT, &EmptyCustomAttributesCache, &t2864_TI, &t2864_0_0_0, &t2864_1_0_0, t2864_IOs, &t2864_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2864)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5120_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m29417_MI;
static PropertyInfo t5120____Count_PropertyInfo = 
{
	&t5120_TI, "Count", &m29417_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29418_MI;
static PropertyInfo t5120____IsReadOnly_PropertyInfo = 
{
	&t5120_TI, "IsReadOnly", &m29418_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5120_PIs[] =
{
	&t5120____Count_PropertyInfo,
	&t5120____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5120_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29417_MI = 
{
	"get_Count", NULL, &t5120_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5120_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29418_MI = 
{
	"get_IsReadOnly", NULL, &t5120_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t5120_m29419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29419_MI = 
{
	"Add", NULL, &t5120_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5120_m29419_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5120_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29420_MI = 
{
	"Clear", NULL, &t5120_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t5120_m29421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29421_MI = 
{
	"Contains", NULL, &t5120_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5120_m29421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3109_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5120_m29422_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3109_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29422_MI = 
{
	"CopyTo", NULL, &t5120_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5120_m29422_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t5120_m29423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern TypeInfo t5120_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29423_MI = 
{
	"Remove", NULL, &t5120_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t5120_m29423_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5120_MIs[] =
{
	&m29417_MI,
	&m29418_MI,
	&m29419_MI,
	&m29420_MI,
	&m29421_MI,
	&m29422_MI,
	&m29423_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5122_TI;
static TypeInfo* t5120_ITIs[] = 
{
	&t611_TI,
	&t5122_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5120_0_0_0;
extern Il2CppType t5120_1_0_0;
struct t5120;
extern TypeInfo t5120_TI;
extern Il2CppGenericClass t5120_GC;
TypeInfo t5120_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5120_MIs, t5120_PIs, NULL, NULL, NULL, NULL, NULL, &t5120_TI, t5120_ITIs, NULL, &EmptyCustomAttributesCache, &t5120_TI, &t5120_0_0_0, &t5120_1_0_0, NULL, &t5120_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5122_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern TypeInfo t5122_TI;
extern Il2CppType t3784_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29424_MI = 
{
	"GetEnumerator", NULL, &t5122_TI, &t3784_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5122_MIs[] =
{
	&m29424_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5122_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5122_0_0_0;
extern Il2CppType t5122_1_0_0;
struct t5122;
extern TypeInfo t5122_TI;
extern Il2CppGenericClass t5122_GC;
TypeInfo t5122_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5122_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5122_TI, t5122_ITIs, NULL, &EmptyCustomAttributesCache, &t5122_TI, &t5122_0_0_0, &t5122_1_0_0, NULL, &t5122_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5121_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo m29425_MI;
extern MethodInfo m29426_MI;
static PropertyInfo t5121____Item_PropertyInfo = 
{
	&t5121_TI, "Item", &m29425_MI, &m29426_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5121_PIs[] =
{
	&t5121____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1094_0_0_0;
static ParameterInfo t5121_m29427_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29427_MI = 
{
	"IndexOf", NULL, &t5121_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t5121_m29427_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t5121_m29428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29428_MI = 
{
	"Insert", NULL, &t5121_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5121_m29428_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5121_m29429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29429_MI = 
{
	"RemoveAt", NULL, &t5121_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5121_m29429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5121_m29425_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t1094_0_0_0;
extern void* RuntimeInvoker_t1094_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29425_MI = 
{
	"get_Item", NULL, &t5121_TI, &t1094_0_0_0, RuntimeInvoker_t1094_t47, t5121_m29425_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1094_0_0_0;
static ParameterInfo t5121_m29426_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1094_0_0_0},
};
extern TypeInfo t5121_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29426_MI = 
{
	"set_Item", NULL, &t5121_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t5121_m29426_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5121_MIs[] =
{
	&m29427_MI,
	&m29428_MI,
	&m29429_MI,
	&m29425_MI,
	&m29426_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5120_TI;
extern TypeInfo t5122_TI;
static TypeInfo* t5121_ITIs[] = 
{
	&t611_TI,
	&t5120_TI,
	&t5122_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5121_0_0_0;
extern Il2CppType t5121_1_0_0;
struct t5121;
extern TypeInfo t5121_TI;
extern Il2CppGenericClass t5121_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5121_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5121_MIs, t5121_PIs, NULL, NULL, NULL, NULL, NULL, &t5121_TI, t5121_ITIs, NULL, &t1418__CustomAttributeCache, &t5121_TI, &t5121_0_0_0, &t5121_1_0_0, NULL, &t5121_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3785_TI;

#include "t1095.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m29430_MI;
static PropertyInfo t3785____Current_PropertyInfo = 
{
	&t3785_TI, "Current", &m29430_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3785_PIs[] =
{
	&t3785____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3785_TI;
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t1095 (MethodInfo* method, void* obj, void** args);
MethodInfo m29430_MI = 
{
	"get_Current", NULL, &t3785_TI, &t1095_0_0_0, RuntimeInvoker_t1095, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3785_MIs[] =
{
	&m29430_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3785_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3785_0_0_0;
extern Il2CppType t3785_1_0_0;
struct t3785;
extern TypeInfo t3785_TI;
extern Il2CppGenericClass t3785_GC;
TypeInfo t3785_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3785_MIs, t3785_PIs, NULL, NULL, NULL, NULL, NULL, &t3785_TI, t3785_ITIs, NULL, &EmptyCustomAttributesCache, &t3785_TI, &t3785_0_0_0, &t3785_1_0_0, NULL, &t3785_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2865.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2865_TI;
#include "t2865MD.h"

extern TypeInfo t2865_TI;
extern TypeInfo t1095_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16222_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22312_MI;
struct t29;
 uint8_t m22312 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22312_MI;


extern MethodInfo m16218_MI;
 void m16218 (t2865 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16219_MI;
 t28 * m16219 (t2865 * __this, MethodInfo* method){
	{
		uint8_t L_0 = m16222(__this, &m16222_MI);
		uint8_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1095_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16220_MI;
 void m16220 (t2865 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16221_MI;
 bool m16221 (t2865 * __this, MethodInfo* method){
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
extern MethodInfo m16222_MI;
 uint8_t m16222 (t2865 * __this, MethodInfo* method){
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
		uint8_t L_8 = m22312(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22312_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType t29_0_0_1;
FieldInfo t2865_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2865_TI, offsetof(t2865, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2865_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2865_TI, offsetof(t2865, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2865_FIs[] =
{
	&t2865_f0_FieldInfo,
	&t2865_f1_FieldInfo,
	NULL
};
extern MethodInfo m16219_MI;
static PropertyInfo t2865____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2865_TI, "System.Collections.IEnumerator.Current", &m16219_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16222_MI;
static PropertyInfo t2865____Current_PropertyInfo = 
{
	&t2865_TI, "Current", &m16222_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2865_PIs[] =
{
	&t2865____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2865____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2865_m16218_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2865_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16218_MI = 
{
	".ctor", (methodPointerType)&m16218, &t2865_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2865_m16218_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16219_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16219, &t2865_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16220_MI = 
{
	"Dispose", (methodPointerType)&m16220, &t2865_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16221_MI = 
{
	"MoveNext", (methodPointerType)&m16221, &t2865_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2865_TI;
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t1095 (MethodInfo* method, void* obj, void** args);
MethodInfo m16222_MI = 
{
	"get_Current", (methodPointerType)&m16222, &t2865_TI, &t1095_0_0_0, RuntimeInvoker_t1095, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2865_MIs[] =
{
	&m16218_MI,
	&m16219_MI,
	&m16220_MI,
	&m16221_MI,
	&m16222_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16219_MI;
extern MethodInfo m16221_MI;
extern MethodInfo m16220_MI;
extern MethodInfo m16222_MI;
static MethodInfo* t2865_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16219_MI,
	&m16221_MI,
	&m16220_MI,
	&m16222_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3785_TI;
static TypeInfo* t2865_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3785_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3785_TI;
static Il2CppInterfaceOffsetPair t2865_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3785_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2865_0_0_0;
extern Il2CppType t2865_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2865_TI;
extern Il2CppGenericClass t2865_GC;
extern TypeInfo t29_TI;
TypeInfo t2865_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2865_MIs, t2865_PIs, t2865_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2865_TI, t2865_ITIs, t2865_VT, &EmptyCustomAttributesCache, &t2865_TI, &t2865_0_0_0, &t2865_1_0_0, t2865_IOs, &t2865_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2865)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5123_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m29431_MI;
static PropertyInfo t5123____Count_PropertyInfo = 
{
	&t5123_TI, "Count", &m29431_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29432_MI;
static PropertyInfo t5123____IsReadOnly_PropertyInfo = 
{
	&t5123_TI, "IsReadOnly", &m29432_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5123_PIs[] =
{
	&t5123____Count_PropertyInfo,
	&t5123____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5123_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29431_MI = 
{
	"get_Count", NULL, &t5123_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5123_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29432_MI = 
{
	"get_IsReadOnly", NULL, &t5123_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5123_m29433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29433_MI = 
{
	"Add", NULL, &t5123_TI, &t30_0_0_0, RuntimeInvoker_t30_t360, t5123_m29433_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5123_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29434_MI = 
{
	"Clear", NULL, &t5123_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5123_m29435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29435_MI = 
{
	"Contains", NULL, &t5123_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5123_m29435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3110_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5123_m29436_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3110_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29436_MI = 
{
	"CopyTo", NULL, &t5123_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5123_m29436_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5123_m29437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5123_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29437_MI = 
{
	"Remove", NULL, &t5123_TI, &t31_0_0_0, RuntimeInvoker_t31_t360, t5123_m29437_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5123_MIs[] =
{
	&m29431_MI,
	&m29432_MI,
	&m29433_MI,
	&m29434_MI,
	&m29435_MI,
	&m29436_MI,
	&m29437_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5125_TI;
static TypeInfo* t5123_ITIs[] = 
{
	&t611_TI,
	&t5125_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5123_0_0_0;
extern Il2CppType t5123_1_0_0;
struct t5123;
extern TypeInfo t5123_TI;
extern Il2CppGenericClass t5123_GC;
TypeInfo t5123_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5123_MIs, t5123_PIs, NULL, NULL, NULL, NULL, NULL, &t5123_TI, t5123_ITIs, NULL, &EmptyCustomAttributesCache, &t5123_TI, &t5123_0_0_0, &t5123_1_0_0, NULL, &t5123_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5125_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern TypeInfo t5125_TI;
extern Il2CppType t3785_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29438_MI = 
{
	"GetEnumerator", NULL, &t5125_TI, &t3785_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5125_MIs[] =
{
	&m29438_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5125_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5125_0_0_0;
extern Il2CppType t5125_1_0_0;
struct t5125;
extern TypeInfo t5125_TI;
extern Il2CppGenericClass t5125_GC;
TypeInfo t5125_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5125_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5125_TI, t5125_ITIs, NULL, &EmptyCustomAttributesCache, &t5125_TI, &t5125_0_0_0, &t5125_1_0_0, NULL, &t5125_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5124_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo m29439_MI;
extern MethodInfo m29440_MI;
static PropertyInfo t5124____Item_PropertyInfo = 
{
	&t5124_TI, "Item", &m29439_MI, &m29440_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5124_PIs[] =
{
	&t5124____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5124_m29441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29441_MI = 
{
	"IndexOf", NULL, &t5124_TI, &t47_0_0_0, RuntimeInvoker_t47_t360, t5124_m29441_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5124_m29442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29442_MI = 
{
	"Insert", NULL, &t5124_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5124_m29442_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5124_m29443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29443_MI = 
{
	"RemoveAt", NULL, &t5124_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5124_m29443_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5124_m29439_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t1095_0_0_0;
extern void* RuntimeInvoker_t1095_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29439_MI = 
{
	"get_Item", NULL, &t5124_TI, &t1095_0_0_0, RuntimeInvoker_t1095_t47, t5124_m29439_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1095_0_0_0;
static ParameterInfo t5124_m29440_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1095_0_0_0},
};
extern TypeInfo t5124_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t360 (MethodInfo* method, void* obj, void** args);
MethodInfo m29440_MI = 
{
	"set_Item", NULL, &t5124_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t360, t5124_m29440_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5124_MIs[] =
{
	&m29441_MI,
	&m29442_MI,
	&m29443_MI,
	&m29439_MI,
	&m29440_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5123_TI;
extern TypeInfo t5125_TI;
static TypeInfo* t5124_ITIs[] = 
{
	&t611_TI,
	&t5123_TI,
	&t5125_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5124_0_0_0;
extern Il2CppType t5124_1_0_0;
struct t5124;
extern TypeInfo t5124_TI;
extern Il2CppGenericClass t5124_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5124_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5124_MIs, t5124_PIs, NULL, NULL, NULL, NULL, NULL, &t5124_TI, t5124_ITIs, NULL, &t1418__CustomAttributeCache, &t5124_TI, &t5124_0_0_0, &t5124_1_0_0, NULL, &t5124_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3786_TI;

#include "t474.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime>
extern MethodInfo m29444_MI;
static PropertyInfo t3786____Current_PropertyInfo = 
{
	&t3786_TI, "Current", &m29444_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3786_PIs[] =
{
	&t3786____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3786_TI;
extern Il2CppType t474_0_0_0;
extern void* RuntimeInvoker_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29444_MI = 
{
	"get_Current", NULL, &t3786_TI, &t474_0_0_0, RuntimeInvoker_t474, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3786_MIs[] =
{
	&m29444_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3786_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3786_0_0_0;
extern Il2CppType t3786_1_0_0;
struct t3786;
extern TypeInfo t3786_TI;
extern Il2CppGenericClass t3786_GC;
TypeInfo t3786_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3786_MIs, t3786_PIs, NULL, NULL, NULL, NULL, NULL, &t3786_TI, t3786_ITIs, NULL, &EmptyCustomAttributesCache, &t3786_TI, &t3786_0_0_0, &t3786_1_0_0, NULL, &t3786_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2866_TI;
#include "t2866MD.h"

extern TypeInfo t2866_TI;
extern TypeInfo t474_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m16227_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m22323_MI;
struct t29;
 t474  m22323 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m22323_MI;


extern MethodInfo m16223_MI;
 void m16223 (t2866 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16224_MI;
 t28 * m16224 (t2866 * __this, MethodInfo* method){
	{
		t474  L_0 = m16227(__this, &m16227_MI);
		t474  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t474_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m16225_MI;
 void m16225 (t2866 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m16226_MI;
 bool m16226 (t2866 * __this, MethodInfo* method){
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
extern MethodInfo m16227_MI;
 t474  m16227 (t2866 * __this, MethodInfo* method){
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
		t474  L_8 = m22323(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m22323_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime>
extern Il2CppType t29_0_0_1;
FieldInfo t2866_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2866_TI, offsetof(t2866, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2866_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2866_TI, offsetof(t2866, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2866_FIs[] =
{
	&t2866_f0_FieldInfo,
	&t2866_f1_FieldInfo,
	NULL
};
extern MethodInfo m16224_MI;
static PropertyInfo t2866____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2866_TI, "System.Collections.IEnumerator.Current", &m16224_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m16227_MI;
static PropertyInfo t2866____Current_PropertyInfo = 
{
	&t2866_TI, "Current", &m16227_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2866_PIs[] =
{
	&t2866____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2866____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2866_m16223_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2866_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16223_MI = 
{
	".ctor", (methodPointerType)&m16223, &t2866_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2866_m16223_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2866_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m16224_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m16224, &t2866_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2866_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16225_MI = 
{
	"Dispose", (methodPointerType)&m16225, &t2866_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2866_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m16226_MI = 
{
	"MoveNext", (methodPointerType)&m16226, &t2866_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2866_TI;
extern Il2CppType t474_0_0_0;
extern void* RuntimeInvoker_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m16227_MI = 
{
	"get_Current", (methodPointerType)&m16227, &t2866_TI, &t474_0_0_0, RuntimeInvoker_t474, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2866_MIs[] =
{
	&m16223_MI,
	&m16224_MI,
	&m16225_MI,
	&m16226_MI,
	&m16227_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m16224_MI;
extern MethodInfo m16226_MI;
extern MethodInfo m16225_MI;
extern MethodInfo m16227_MI;
static MethodInfo* t2866_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m16224_MI,
	&m16226_MI,
	&m16225_MI,
	&m16227_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3786_TI;
static TypeInfo* t2866_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3786_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3786_TI;
static Il2CppInterfaceOffsetPair t2866_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3786_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2866_0_0_0;
extern Il2CppType t2866_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2866_TI;
extern Il2CppGenericClass t2866_GC;
extern TypeInfo t29_TI;
TypeInfo t2866_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2866_MIs, t2866_PIs, t2866_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2866_TI, t2866_ITIs, t2866_VT, &EmptyCustomAttributesCache, &t2866_TI, &t2866_0_0_0, &t2866_1_0_0, t2866_IOs, &t2866_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2866)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5126_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime>
extern MethodInfo m29445_MI;
static PropertyInfo t5126____Count_PropertyInfo = 
{
	&t5126_TI, "Count", &m29445_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29446_MI;
static PropertyInfo t5126____IsReadOnly_PropertyInfo = 
{
	&t5126_TI, "IsReadOnly", &m29446_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5126_PIs[] =
{
	&t5126____Count_PropertyInfo,
	&t5126____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5126_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29445_MI = 
{
	"get_Count", NULL, &t5126_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5126_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29446_MI = 
{
	"get_IsReadOnly", NULL, &t5126_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t474_0_0_0;
static ParameterInfo t5126_m29447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29447_MI = 
{
	"Add", NULL, &t5126_TI, &t30_0_0_0, RuntimeInvoker_t30_t474, t5126_m29447_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5126_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29448_MI = 
{
	"Clear", NULL, &t5126_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t474_0_0_0;
static ParameterInfo t5126_m29449_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29449_MI = 
{
	"Contains", NULL, &t5126_TI, &t31_0_0_0, RuntimeInvoker_t31_t474, t5126_m29449_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1546_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5126_m29450_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1546_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29450_MI = 
{
	"CopyTo", NULL, &t5126_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5126_m29450_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t474_0_0_0;
static ParameterInfo t5126_m29451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t5126_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29451_MI = 
{
	"Remove", NULL, &t5126_TI, &t31_0_0_0, RuntimeInvoker_t31_t474, t5126_m29451_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5126_MIs[] =
{
	&m29445_MI,
	&m29446_MI,
	&m29447_MI,
	&m29448_MI,
	&m29449_MI,
	&m29450_MI,
	&m29451_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5128_TI;
static TypeInfo* t5126_ITIs[] = 
{
	&t611_TI,
	&t5128_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5126_0_0_0;
extern Il2CppType t5126_1_0_0;
struct t5126;
extern TypeInfo t5126_TI;
extern Il2CppGenericClass t5126_GC;
TypeInfo t5126_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5126_MIs, t5126_PIs, NULL, NULL, NULL, NULL, NULL, &t5126_TI, t5126_ITIs, NULL, &EmptyCustomAttributesCache, &t5126_TI, &t5126_0_0_0, &t5126_1_0_0, NULL, &t5126_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5128_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime>
extern TypeInfo t5128_TI;
extern Il2CppType t3786_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29452_MI = 
{
	"GetEnumerator", NULL, &t5128_TI, &t3786_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5128_MIs[] =
{
	&m29452_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t5128_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5128_0_0_0;
extern Il2CppType t5128_1_0_0;
struct t5128;
extern TypeInfo t5128_TI;
extern Il2CppGenericClass t5128_GC;
TypeInfo t5128_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t5128_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5128_TI, t5128_ITIs, NULL, &EmptyCustomAttributesCache, &t5128_TI, &t5128_0_0_0, &t5128_1_0_0, NULL, &t5128_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5127_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.DateTime>
extern MethodInfo m29453_MI;
extern MethodInfo m29454_MI;
static PropertyInfo t5127____Item_PropertyInfo = 
{
	&t5127_TI, "Item", &m29453_MI, &m29454_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5127_PIs[] =
{
	&t5127____Item_PropertyInfo,
	NULL
};
extern Il2CppType t474_0_0_0;
static ParameterInfo t5127_m29455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29455_MI = 
{
	"IndexOf", NULL, &t5127_TI, &t47_0_0_0, RuntimeInvoker_t47_t474, t5127_m29455_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t474_0_0_0;
static ParameterInfo t5127_m29456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29456_MI = 
{
	"Insert", NULL, &t5127_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t474, t5127_m29456_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5127_m29457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29457_MI = 
{
	"RemoveAt", NULL, &t5127_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5127_m29457_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5127_m29453_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t474_0_0_0;
extern void* RuntimeInvoker_t474_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29453_MI = 
{
	"get_Item", NULL, &t5127_TI, &t474_0_0_0, RuntimeInvoker_t474_t47, t5127_m29453_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t474_0_0_0;
static ParameterInfo t5127_m29454_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t474_0_0_0},
};
extern TypeInfo t5127_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t474 (MethodInfo* method, void* obj, void** args);
MethodInfo m29454_MI = 
{
	"set_Item", NULL, &t5127_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t474, t5127_m29454_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5127_MIs[] =
{
	&m29455_MI,
	&m29456_MI,
	&m29457_MI,
	&m29453_MI,
	&m29454_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5126_TI;
extern TypeInfo t5128_TI;
static TypeInfo* t5127_ITIs[] = 
{
	&t611_TI,
	&t5126_TI,
	&t5128_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5127_0_0_0;
extern Il2CppType t5127_1_0_0;
struct t5127;
extern TypeInfo t5127_TI;
extern Il2CppGenericClass t5127_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t5127_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t5127_MIs, t5127_PIs, NULL, NULL, NULL, NULL, NULL, &t5127_TI, t5127_ITIs, NULL, &t1418__CustomAttributeCache, &t5127_TI, &t5127_0_0_0, &t5127_1_0_0, NULL, &t5127_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5129_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>
extern MethodInfo m29458_MI;
static PropertyInfo t5129____Count_PropertyInfo = 
{
	&t5129_TI, "Count", &m29458_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m29459_MI;
static PropertyInfo t5129____IsReadOnly_PropertyInfo = 
{
	&t5129_TI, "IsReadOnly", &m29459_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5129_PIs[] =
{
	&t5129____Count_PropertyInfo,
	&t5129____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t5129_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29458_MI = 
{
	"get_Count", NULL, &t5129_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5129_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m29459_MI = 
{
	"get_IsReadOnly", NULL, &t5129_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1568_0_0_0;
static ParameterInfo t5129_m29460_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1568_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29460_MI = 
{
	"Add", NULL, &t5129_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5129_m29460_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t5129_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29461_MI = 
{
	"Clear", NULL, &t5129_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1568_0_0_0;
static ParameterInfo t5129_m29462_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1568_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29462_MI = 
{
	"Contains", NULL, &t5129_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5129_m29462_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3111_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t5129_m29463_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3111_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m29463_MI = 
{
	"CopyTo", NULL, &t5129_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t5129_m29463_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1568_0_0_0;
static ParameterInfo t5129_m29464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1568_0_0_0},
};
extern TypeInfo t5129_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m29464_MI = 
{
	"Remove", NULL, &t5129_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5129_m29464_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5129_MIs[] =
{
	&m29458_MI,
	&m29459_MI,
	&m29460_MI,
	&m29461_MI,
	&m29462_MI,
	&m29463_MI,
	&m29464_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t5131_TI;
static TypeInfo* t5129_ITIs[] = 
{
	&t611_TI,
	&t5131_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5129_0_0_0;
extern Il2CppType t5129_1_0_0;
struct t5129;
extern TypeInfo t5129_TI;
extern Il2CppGenericClass t5129_GC;
TypeInfo t5129_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t5129_MIs, t5129_PIs, NULL, NULL, NULL, NULL, NULL, &t5129_TI, t5129_ITIs, NULL, &EmptyCustomAttributesCache, &t5129_TI, &t5129_0_0_0, &t5129_1_0_0, NULL, &t5129_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
