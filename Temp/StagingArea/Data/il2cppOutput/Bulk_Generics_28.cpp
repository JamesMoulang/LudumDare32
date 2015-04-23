#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2787.h"
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
extern TypeInfo t2787_TI;
#include "t2787MD.h"

#include "t28.h"
#include "t921.h"
#include "t47.h"
#include "t18.h"
#include "t1287.h"
#include "t30.h"
#include "t29.h"
#include "t31.h"
extern TypeInfo t2787_TI;
extern TypeInfo t921_TI;
extern TypeInfo t1287_TI;
#include "t1287MD.h"
#include "t29MD.h"
extern MethodInfo m15832_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21454_MI;
struct t29;
#include "t1251.h"
 int32_t m21454 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m21454_MI;


extern MethodInfo m15828_MI;
 void m15828 (t2787 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15829_MI;
 t28 * m15829 (t2787 * __this, MethodInfo* method){
	{
		int32_t L_0 = m15832(__this, &m15832_MI);
		int32_t L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t921_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m15830_MI;
 void m15830 (t2787 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m15831_MI;
 bool m15831 (t2787 * __this, MethodInfo* method){
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
extern MethodInfo m15832_MI;
 int32_t m15832 (t2787 * __this, MethodInfo* method){
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
		int32_t L_8 = m21454(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m21454_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.SeekOrigin>
extern Il2CppType t29_0_0_1;
FieldInfo t2787_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2787_TI, offsetof(t2787, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2787_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2787_TI, offsetof(t2787, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2787_FIs[] =
{
	&t2787_f0_FieldInfo,
	&t2787_f1_FieldInfo,
	NULL
};
extern MethodInfo m15829_MI;
static PropertyInfo t2787____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2787_TI, "System.Collections.IEnumerator.Current", &m15829_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15832_MI;
static PropertyInfo t2787____Current_PropertyInfo = 
{
	&t2787_TI, "Current", &m15832_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2787_PIs[] =
{
	&t2787____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2787____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2787_m15828_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2787_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15828_MI = 
{
	".ctor", (methodPointerType)&m15828, &t2787_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2787_m15828_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2787_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15829_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m15829, &t2787_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2787_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15830_MI = 
{
	"Dispose", (methodPointerType)&m15830, &t2787_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2787_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15831_MI = 
{
	"MoveNext", (methodPointerType)&m15831, &t2787_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2787_TI;
extern Il2CppType t921_0_0_0;
extern void* RuntimeInvoker_t921 (MethodInfo* method, void* obj, void** args);
MethodInfo m15832_MI = 
{
	"get_Current", (methodPointerType)&m15832, &t2787_TI, &t921_0_0_0, RuntimeInvoker_t921, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2787_MIs[] =
{
	&m15828_MI,
	&m15829_MI,
	&m15830_MI,
	&m15831_MI,
	&m15832_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15829_MI;
extern MethodInfo m15831_MI;
extern MethodInfo m15830_MI;
extern MethodInfo m15832_MI;
static MethodInfo* t2787_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15829_MI,
	&m15831_MI,
	&m15830_MI,
	&m15832_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3707_TI;
static TypeInfo* t2787_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3707_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3707_TI;
static Il2CppInterfaceOffsetPair t2787_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3707_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2787_0_0_0;
extern Il2CppType t2787_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2787_TI;
extern Il2CppGenericClass t2787_GC;
extern TypeInfo t29_TI;
TypeInfo t2787_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2787_MIs, t2787_PIs, t2787_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2787_TI, t2787_ITIs, t2787_VT, &EmptyCustomAttributesCache, &t2787_TI, &t2787_0_0_0, &t2787_1_0_0, t2787_IOs, &t2787_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2787)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4889_TI;

#include "mscorlib_ArrayTypes.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>
extern MethodInfo m28339_MI;
static PropertyInfo t4889____Count_PropertyInfo = 
{
	&t4889_TI, "Count", &m28339_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28340_MI;
static PropertyInfo t4889____IsReadOnly_PropertyInfo = 
{
	&t4889_TI, "IsReadOnly", &m28340_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4889_PIs[] =
{
	&t4889____Count_PropertyInfo,
	&t4889____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4889_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28339_MI = 
{
	"get_Count", NULL, &t4889_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4889_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28340_MI = 
{
	"get_IsReadOnly", NULL, &t4889_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t921_0_0_0;
static ParameterInfo t4889_m28341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t921_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28341_MI = 
{
	"Add", NULL, &t4889_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4889_m28341_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4889_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28342_MI = 
{
	"Clear", NULL, &t4889_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t921_0_0_0;
static ParameterInfo t4889_m28343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t921_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28343_MI = 
{
	"Contains", NULL, &t4889_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t4889_m28343_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3044_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4889_m28344_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3044_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28344_MI = 
{
	"CopyTo", NULL, &t4889_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4889_m28344_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t921_0_0_0;
static ParameterInfo t4889_m28345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t921_0_0_0},
};
extern TypeInfo t4889_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28345_MI = 
{
	"Remove", NULL, &t4889_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t4889_m28345_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4889_MIs[] =
{
	&m28339_MI,
	&m28340_MI,
	&m28341_MI,
	&m28342_MI,
	&m28343_MI,
	&m28344_MI,
	&m28345_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4891_TI;
static TypeInfo* t4889_ITIs[] = 
{
	&t611_TI,
	&t4891_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4889_0_0_0;
extern Il2CppType t4889_1_0_0;
struct t4889;
extern TypeInfo t4889_TI;
extern Il2CppGenericClass t4889_GC;
TypeInfo t4889_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4889_MIs, t4889_PIs, NULL, NULL, NULL, NULL, NULL, &t4889_TI, t4889_ITIs, NULL, &EmptyCustomAttributesCache, &t4889_TI, &t4889_0_0_0, &t4889_1_0_0, NULL, &t4889_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4891_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.SeekOrigin>
extern TypeInfo t4891_TI;
extern Il2CppType t3707_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28346_MI = 
{
	"GetEnumerator", NULL, &t4891_TI, &t3707_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4891_MIs[] =
{
	&m28346_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4891_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4891_0_0_0;
extern Il2CppType t4891_1_0_0;
struct t4891;
extern TypeInfo t4891_TI;
extern Il2CppGenericClass t4891_GC;
TypeInfo t4891_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4891_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4891_TI, t4891_ITIs, NULL, &EmptyCustomAttributesCache, &t4891_TI, &t4891_0_0_0, &t4891_1_0_0, NULL, &t4891_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4890_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.IO.SeekOrigin>
extern MethodInfo m28347_MI;
extern MethodInfo m28348_MI;
static PropertyInfo t4890____Item_PropertyInfo = 
{
	&t4890_TI, "Item", &m28347_MI, &m28348_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4890_PIs[] =
{
	&t4890____Item_PropertyInfo,
	NULL
};
extern Il2CppType t921_0_0_0;
static ParameterInfo t4890_m28349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t921_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28349_MI = 
{
	"IndexOf", NULL, &t4890_TI, &t47_0_0_0, RuntimeInvoker_t47_t47, t4890_m28349_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t921_0_0_0;
static ParameterInfo t4890_m28350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t921_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28350_MI = 
{
	"Insert", NULL, &t4890_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t4890_m28350_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4890_m28351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28351_MI = 
{
	"RemoveAt", NULL, &t4890_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4890_m28351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4890_m28347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t921_0_0_0;
extern void* RuntimeInvoker_t921_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28347_MI = 
{
	"get_Item", NULL, &t4890_TI, &t921_0_0_0, RuntimeInvoker_t921_t47, t4890_m28347_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t921_0_0_0;
static ParameterInfo t4890_m28348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t921_0_0_0},
};
extern TypeInfo t4890_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28348_MI = 
{
	"set_Item", NULL, &t4890_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t4890_m28348_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4890_MIs[] =
{
	&m28349_MI,
	&m28350_MI,
	&m28351_MI,
	&m28347_MI,
	&m28348_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4889_TI;
extern TypeInfo t4891_TI;
static TypeInfo* t4890_ITIs[] = 
{
	&t611_TI,
	&t4889_TI,
	&t4891_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4890_0_0_0;
extern Il2CppType t4890_1_0_0;
struct t4890;
extern TypeInfo t4890_TI;
extern Il2CppGenericClass t4890_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4890_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4890_MIs, t4890_PIs, NULL, NULL, NULL, NULL, NULL, &t4890_TI, t4890_ITIs, NULL, &t1418__CustomAttributeCache, &t4890_TI, &t4890_0_0_0, &t4890_1_0_0, NULL, &t4890_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3708_TI;

#include "t941.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28352_MI;
static PropertyInfo t3708____Current_PropertyInfo = 
{
	&t3708_TI, "Current", &m28352_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3708_PIs[] =
{
	&t3708____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3708_TI;
extern Il2CppType t941_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28352_MI = 
{
	"get_Current", NULL, &t3708_TI, &t941_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3708_MIs[] =
{
	&m28352_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3708_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3708_0_0_0;
extern Il2CppType t3708_1_0_0;
struct t3708;
extern TypeInfo t3708_TI;
extern Il2CppGenericClass t3708_GC;
TypeInfo t3708_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3708_MIs, t3708_PIs, NULL, NULL, NULL, NULL, NULL, &t3708_TI, t3708_ITIs, NULL, &EmptyCustomAttributesCache, &t3708_TI, &t3708_0_0_0, &t3708_1_0_0, NULL, &t3708_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2788.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2788_TI;
#include "t2788MD.h"

extern TypeInfo t2788_TI;
extern TypeInfo t941_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15837_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21465_MI;
struct t29;
struct t29;
 t28 * m16643_gshared (t29 * __this, int32_t p0, MethodInfo* method);
#define m16643(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
#define m21465(__this, p0, method) (t941 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21465_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2788_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2788_TI, offsetof(t2788, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2788_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2788_TI, offsetof(t2788, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2788_FIs[] =
{
	&t2788_f0_FieldInfo,
	&t2788_f1_FieldInfo,
	NULL
};
extern MethodInfo m15834_MI;
static PropertyInfo t2788____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2788_TI, "System.Collections.IEnumerator.Current", &m15834_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15837_MI;
static PropertyInfo t2788____Current_PropertyInfo = 
{
	&t2788_TI, "Current", &m15837_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2788_PIs[] =
{
	&t2788____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2788____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2788_m15833_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2788_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15833_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2788_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2788_m15833_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2788_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15834_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2788_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2788_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15835_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2788_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2788_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15836_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2788_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2788_TI;
extern Il2CppType t941_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15837_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2788_TI, &t941_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2788_MIs[] =
{
	&m15833_MI,
	&m15834_MI,
	&m15835_MI,
	&m15836_MI,
	&m15837_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15834_MI;
extern MethodInfo m15836_MI;
extern MethodInfo m15835_MI;
extern MethodInfo m15837_MI;
static MethodInfo* t2788_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15834_MI,
	&m15836_MI,
	&m15835_MI,
	&m15837_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3708_TI;
static TypeInfo* t2788_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3708_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3708_TI;
static Il2CppInterfaceOffsetPair t2788_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3708_TI, 7},
};
extern MethodInfo m15837_MI;
extern TypeInfo t941_TI;
extern MethodInfo m21465_MI;
static void* t2788_RGCTXData[3] = 
{
	&m15837_MI,
	&t941_TI,
	&m21465_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2788_0_0_0;
extern Il2CppType t2788_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2788_TI;
extern Il2CppGenericClass t2788_GC;
extern TypeInfo t29_TI;
TypeInfo t2788_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2788_MIs, t2788_PIs, t2788_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2788_TI, t2788_ITIs, t2788_VT, &EmptyCustomAttributesCache, &t2788_TI, &t2788_0_0_0, &t2788_1_0_0, t2788_IOs, &t2788_GC, NULL, NULL, NULL, t2788_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2788)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4892_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28353_MI;
static PropertyInfo t4892____Count_PropertyInfo = 
{
	&t4892_TI, "Count", &m28353_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28354_MI;
static PropertyInfo t4892____IsReadOnly_PropertyInfo = 
{
	&t4892_TI, "IsReadOnly", &m28354_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4892_PIs[] =
{
	&t4892____Count_PropertyInfo,
	&t4892____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4892_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28353_MI = 
{
	"get_Count", NULL, &t4892_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4892_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28354_MI = 
{
	"get_IsReadOnly", NULL, &t4892_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t941_0_0_0;
static ParameterInfo t4892_m28355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28355_MI = 
{
	"Add", NULL, &t4892_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4892_m28355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4892_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28356_MI = 
{
	"Clear", NULL, &t4892_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t941_0_0_0;
static ParameterInfo t4892_m28357_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28357_MI = 
{
	"Contains", NULL, &t4892_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4892_m28357_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t940_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4892_m28358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t940_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28358_MI = 
{
	"CopyTo", NULL, &t4892_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4892_m28358_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t941_0_0_0;
static ParameterInfo t4892_m28359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern TypeInfo t4892_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28359_MI = 
{
	"Remove", NULL, &t4892_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4892_m28359_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4892_MIs[] =
{
	&m28353_MI,
	&m28354_MI,
	&m28355_MI,
	&m28356_MI,
	&m28357_MI,
	&m28358_MI,
	&m28359_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4894_TI;
static TypeInfo* t4892_ITIs[] = 
{
	&t611_TI,
	&t4894_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4892_0_0_0;
extern Il2CppType t4892_1_0_0;
struct t4892;
extern TypeInfo t4892_TI;
extern Il2CppGenericClass t4892_GC;
TypeInfo t4892_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4892_MIs, t4892_PIs, NULL, NULL, NULL, NULL, NULL, &t4892_TI, t4892_ITIs, NULL, &EmptyCustomAttributesCache, &t4892_TI, &t4892_0_0_0, &t4892_1_0_0, NULL, &t4892_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4894_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>
extern TypeInfo t4894_TI;
extern Il2CppType t3708_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28360_MI = 
{
	"GetEnumerator", NULL, &t4894_TI, &t3708_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4894_MIs[] =
{
	&m28360_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4894_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4894_0_0_0;
extern Il2CppType t4894_1_0_0;
struct t4894;
extern TypeInfo t4894_TI;
extern Il2CppGenericClass t4894_GC;
TypeInfo t4894_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4894_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4894_TI, t4894_ITIs, NULL, &EmptyCustomAttributesCache, &t4894_TI, &t4894_0_0_0, &t4894_1_0_0, NULL, &t4894_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4893_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo m28361_MI;
extern MethodInfo m28362_MI;
static PropertyInfo t4893____Item_PropertyInfo = 
{
	&t4893_TI, "Item", &m28361_MI, &m28362_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4893_PIs[] =
{
	&t4893____Item_PropertyInfo,
	NULL
};
extern Il2CppType t941_0_0_0;
static ParameterInfo t4893_m28363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28363_MI = 
{
	"IndexOf", NULL, &t4893_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4893_m28363_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t4893_m28364_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28364_MI = 
{
	"Insert", NULL, &t4893_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4893_m28364_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4893_m28365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28365_MI = 
{
	"RemoveAt", NULL, &t4893_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4893_m28365_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4893_m28361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t941_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28361_MI = 
{
	"get_Item", NULL, &t4893_TI, &t941_0_0_0, RuntimeInvoker_t28_t47, t4893_m28361_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t941_0_0_0;
static ParameterInfo t4893_m28362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t941_0_0_0},
};
extern TypeInfo t4893_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28362_MI = 
{
	"set_Item", NULL, &t4893_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4893_m28362_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4893_MIs[] =
{
	&m28363_MI,
	&m28364_MI,
	&m28365_MI,
	&m28361_MI,
	&m28362_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4892_TI;
extern TypeInfo t4894_TI;
static TypeInfo* t4893_ITIs[] = 
{
	&t611_TI,
	&t4892_TI,
	&t4894_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4893_0_0_0;
extern Il2CppType t4893_1_0_0;
struct t4893;
extern TypeInfo t4893_TI;
extern Il2CppGenericClass t4893_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4893_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4893_MIs, t4893_PIs, NULL, NULL, NULL, NULL, NULL, &t4893_TI, t4893_ITIs, NULL, &t1418__CustomAttributeCache, &t4893_TI, &t4893_0_0_0, &t4893_1_0_0, NULL, &t4893_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4895_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28366_MI;
static PropertyInfo t4895____Count_PropertyInfo = 
{
	&t4895_TI, "Count", &m28366_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28367_MI;
static PropertyInfo t4895____IsReadOnly_PropertyInfo = 
{
	&t4895_TI, "IsReadOnly", &m28367_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4895_PIs[] =
{
	&t4895____Count_PropertyInfo,
	&t4895____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4895_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28366_MI = 
{
	"get_Count", NULL, &t4895_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4895_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28367_MI = 
{
	"get_IsReadOnly", NULL, &t4895_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1519_0_0_0;
static ParameterInfo t4895_m28368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28368_MI = 
{
	"Add", NULL, &t4895_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4895_m28368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4895_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28369_MI = 
{
	"Clear", NULL, &t4895_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1519_0_0_0;
static ParameterInfo t4895_m28370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28370_MI = 
{
	"Contains", NULL, &t4895_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4895_m28370_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3045_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4895_m28371_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3045_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28371_MI = 
{
	"CopyTo", NULL, &t4895_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4895_m28371_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1519_0_0_0;
static ParameterInfo t4895_m28372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern TypeInfo t4895_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28372_MI = 
{
	"Remove", NULL, &t4895_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4895_m28372_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4895_MIs[] =
{
	&m28366_MI,
	&m28367_MI,
	&m28368_MI,
	&m28369_MI,
	&m28370_MI,
	&m28371_MI,
	&m28372_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4897_TI;
static TypeInfo* t4895_ITIs[] = 
{
	&t611_TI,
	&t4897_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4895_0_0_0;
extern Il2CppType t4895_1_0_0;
struct t4895;
extern TypeInfo t4895_TI;
extern Il2CppGenericClass t4895_GC;
TypeInfo t4895_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4895_MIs, t4895_PIs, NULL, NULL, NULL, NULL, NULL, &t4895_TI, t4895_ITIs, NULL, &EmptyCustomAttributesCache, &t4895_TI, &t4895_0_0_0, &t4895_1_0_0, NULL, &t4895_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4897_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>
extern TypeInfo t4897_TI;
extern Il2CppType t3709_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28373_MI = 
{
	"GetEnumerator", NULL, &t4897_TI, &t3709_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4897_MIs[] =
{
	&m28373_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4897_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4897_0_0_0;
extern Il2CppType t4897_1_0_0;
struct t4897;
extern TypeInfo t4897_TI;
extern Il2CppGenericClass t4897_GC;
TypeInfo t4897_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4897_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4897_TI, t4897_ITIs, NULL, &EmptyCustomAttributesCache, &t4897_TI, &t4897_0_0_0, &t4897_1_0_0, NULL, &t4897_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3709_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28374_MI;
static PropertyInfo t3709____Current_PropertyInfo = 
{
	&t3709_TI, "Current", &m28374_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3709_PIs[] =
{
	&t3709____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3709_TI;
extern Il2CppType t1519_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28374_MI = 
{
	"get_Current", NULL, &t3709_TI, &t1519_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3709_MIs[] =
{
	&m28374_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3709_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3709_0_0_0;
extern Il2CppType t3709_1_0_0;
struct t3709;
extern TypeInfo t3709_TI;
extern Il2CppGenericClass t3709_GC;
TypeInfo t3709_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3709_MIs, t3709_PIs, NULL, NULL, NULL, NULL, NULL, &t3709_TI, t3709_ITIs, NULL, &EmptyCustomAttributesCache, &t3709_TI, &t3709_0_0_0, &t3709_1_0_0, NULL, &t3709_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2789.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2789_TI;
#include "t2789MD.h"

extern TypeInfo t2789_TI;
extern TypeInfo t1519_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15842_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21476_MI;
struct t29;
#define m21476(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21476_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2789_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2789_TI, offsetof(t2789, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2789_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2789_TI, offsetof(t2789, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2789_FIs[] =
{
	&t2789_f0_FieldInfo,
	&t2789_f1_FieldInfo,
	NULL
};
extern MethodInfo m15839_MI;
static PropertyInfo t2789____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2789_TI, "System.Collections.IEnumerator.Current", &m15839_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15842_MI;
static PropertyInfo t2789____Current_PropertyInfo = 
{
	&t2789_TI, "Current", &m15842_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2789_PIs[] =
{
	&t2789____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2789____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2789_m15838_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2789_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15838_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2789_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2789_m15838_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2789_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15839_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2789_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2789_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15840_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2789_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2789_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15841_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2789_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2789_TI;
extern Il2CppType t1519_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15842_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2789_TI, &t1519_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2789_MIs[] =
{
	&m15838_MI,
	&m15839_MI,
	&m15840_MI,
	&m15841_MI,
	&m15842_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15839_MI;
extern MethodInfo m15841_MI;
extern MethodInfo m15840_MI;
extern MethodInfo m15842_MI;
static MethodInfo* t2789_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15839_MI,
	&m15841_MI,
	&m15840_MI,
	&m15842_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3709_TI;
static TypeInfo* t2789_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3709_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3709_TI;
static Il2CppInterfaceOffsetPair t2789_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3709_TI, 7},
};
extern MethodInfo m15842_MI;
extern TypeInfo t1519_TI;
extern MethodInfo m21476_MI;
static void* t2789_RGCTXData[3] = 
{
	&m15842_MI,
	&t1519_TI,
	&m21476_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2789_0_0_0;
extern Il2CppType t2789_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2789_TI;
extern Il2CppGenericClass t2789_GC;
extern TypeInfo t29_TI;
TypeInfo t2789_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2789_MIs, t2789_PIs, t2789_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2789_TI, t2789_ITIs, t2789_VT, &EmptyCustomAttributesCache, &t2789_TI, &t2789_0_0_0, &t2789_1_0_0, t2789_IOs, &t2789_GC, NULL, NULL, NULL, t2789_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2789)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4896_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo m28375_MI;
extern MethodInfo m28376_MI;
static PropertyInfo t4896____Item_PropertyInfo = 
{
	&t4896_TI, "Item", &m28375_MI, &m28376_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4896_PIs[] =
{
	&t4896____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1519_0_0_0;
static ParameterInfo t4896_m28377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28377_MI = 
{
	"IndexOf", NULL, &t4896_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4896_m28377_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1519_0_0_0;
static ParameterInfo t4896_m28378_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28378_MI = 
{
	"Insert", NULL, &t4896_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4896_m28378_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4896_m28379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28379_MI = 
{
	"RemoveAt", NULL, &t4896_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4896_m28379_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4896_m28375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t1519_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28375_MI = 
{
	"get_Item", NULL, &t4896_TI, &t1519_0_0_0, RuntimeInvoker_t28_t47, t4896_m28375_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1519_0_0_0;
static ParameterInfo t4896_m28376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1519_0_0_0},
};
extern TypeInfo t4896_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28376_MI = 
{
	"set_Item", NULL, &t4896_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4896_m28376_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4896_MIs[] =
{
	&m28377_MI,
	&m28378_MI,
	&m28379_MI,
	&m28375_MI,
	&m28376_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4895_TI;
extern TypeInfo t4897_TI;
static TypeInfo* t4896_ITIs[] = 
{
	&t611_TI,
	&t4895_TI,
	&t4897_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4896_0_0_0;
extern Il2CppType t4896_1_0_0;
struct t4896;
extern TypeInfo t4896_TI;
extern Il2CppGenericClass t4896_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4896_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4896_MIs, t4896_PIs, NULL, NULL, NULL, NULL, NULL, &t4896_TI, t4896_ITIs, NULL, &t1418__CustomAttributeCache, &t4896_TI, &t4896_0_0_0, &t4896_1_0_0, NULL, &t4896_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4898_TI;

#include "t740.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Module>
extern MethodInfo m28380_MI;
static PropertyInfo t4898____Count_PropertyInfo = 
{
	&t4898_TI, "Count", &m28380_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28381_MI;
static PropertyInfo t4898____IsReadOnly_PropertyInfo = 
{
	&t4898_TI, "IsReadOnly", &m28381_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4898_PIs[] =
{
	&t4898____Count_PropertyInfo,
	&t4898____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4898_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28380_MI = 
{
	"get_Count", NULL, &t4898_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4898_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28381_MI = 
{
	"get_IsReadOnly", NULL, &t4898_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t740_0_0_0;
static ParameterInfo t4898_m28382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t740_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28382_MI = 
{
	"Add", NULL, &t4898_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4898_m28382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4898_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28383_MI = 
{
	"Clear", NULL, &t4898_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t740_0_0_0;
static ParameterInfo t4898_m28384_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t740_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28384_MI = 
{
	"Contains", NULL, &t4898_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4898_m28384_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t942_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4898_m28385_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t942_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28385_MI = 
{
	"CopyTo", NULL, &t4898_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4898_m28385_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t740_0_0_0;
static ParameterInfo t4898_m28386_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t740_0_0_0},
};
extern TypeInfo t4898_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28386_MI = 
{
	"Remove", NULL, &t4898_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4898_m28386_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4898_MIs[] =
{
	&m28380_MI,
	&m28381_MI,
	&m28382_MI,
	&m28383_MI,
	&m28384_MI,
	&m28385_MI,
	&m28386_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4900_TI;
static TypeInfo* t4898_ITIs[] = 
{
	&t611_TI,
	&t4900_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4898_0_0_0;
extern Il2CppType t4898_1_0_0;
struct t4898;
extern TypeInfo t4898_TI;
extern Il2CppGenericClass t4898_GC;
TypeInfo t4898_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4898_MIs, t4898_PIs, NULL, NULL, NULL, NULL, NULL, &t4898_TI, t4898_ITIs, NULL, &EmptyCustomAttributesCache, &t4898_TI, &t4898_0_0_0, &t4898_1_0_0, NULL, &t4898_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4900_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Module>
extern TypeInfo t4900_TI;
extern Il2CppType t3710_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28387_MI = 
{
	"GetEnumerator", NULL, &t4900_TI, &t3710_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4900_MIs[] =
{
	&m28387_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4900_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4900_0_0_0;
extern Il2CppType t4900_1_0_0;
struct t4900;
extern TypeInfo t4900_TI;
extern Il2CppGenericClass t4900_GC;
TypeInfo t4900_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4900_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4900_TI, t4900_ITIs, NULL, &EmptyCustomAttributesCache, &t4900_TI, &t4900_0_0_0, &t4900_1_0_0, NULL, &t4900_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3710_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Module>
extern MethodInfo m28388_MI;
static PropertyInfo t3710____Current_PropertyInfo = 
{
	&t3710_TI, "Current", &m28388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3710_PIs[] =
{
	&t3710____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3710_TI;
extern Il2CppType t740_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28388_MI = 
{
	"get_Current", NULL, &t3710_TI, &t740_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3710_MIs[] =
{
	&m28388_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3710_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3710_0_0_0;
extern Il2CppType t3710_1_0_0;
struct t3710;
extern TypeInfo t3710_TI;
extern Il2CppGenericClass t3710_GC;
TypeInfo t3710_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3710_MIs, t3710_PIs, NULL, NULL, NULL, NULL, NULL, &t3710_TI, t3710_ITIs, NULL, &EmptyCustomAttributesCache, &t3710_TI, &t3710_0_0_0, &t3710_1_0_0, NULL, &t3710_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2790_TI;
#include "t2790MD.h"

extern TypeInfo t2790_TI;
extern TypeInfo t740_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15847_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21487_MI;
struct t29;
#define m21487(__this, p0, method) (t740 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21487_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Module>
extern Il2CppType t29_0_0_1;
FieldInfo t2790_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2790_TI, offsetof(t2790, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2790_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2790_TI, offsetof(t2790, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2790_FIs[] =
{
	&t2790_f0_FieldInfo,
	&t2790_f1_FieldInfo,
	NULL
};
extern MethodInfo m15844_MI;
static PropertyInfo t2790____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2790_TI, "System.Collections.IEnumerator.Current", &m15844_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15847_MI;
static PropertyInfo t2790____Current_PropertyInfo = 
{
	&t2790_TI, "Current", &m15847_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2790_PIs[] =
{
	&t2790____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2790____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2790_m15843_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2790_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15843_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2790_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2790_m15843_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15844_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2790_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15845_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2790_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15846_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2790_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2790_TI;
extern Il2CppType t740_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15847_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2790_TI, &t740_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2790_MIs[] =
{
	&m15843_MI,
	&m15844_MI,
	&m15845_MI,
	&m15846_MI,
	&m15847_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15844_MI;
extern MethodInfo m15846_MI;
extern MethodInfo m15845_MI;
extern MethodInfo m15847_MI;
static MethodInfo* t2790_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15844_MI,
	&m15846_MI,
	&m15845_MI,
	&m15847_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3710_TI;
static TypeInfo* t2790_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3710_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3710_TI;
static Il2CppInterfaceOffsetPair t2790_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3710_TI, 7},
};
extern MethodInfo m15847_MI;
extern TypeInfo t740_TI;
extern MethodInfo m21487_MI;
static void* t2790_RGCTXData[3] = 
{
	&m15847_MI,
	&t740_TI,
	&m21487_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2790_0_0_0;
extern Il2CppType t2790_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2790_TI;
extern Il2CppGenericClass t2790_GC;
extern TypeInfo t29_TI;
TypeInfo t2790_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2790_MIs, t2790_PIs, t2790_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2790_TI, t2790_ITIs, t2790_VT, &EmptyCustomAttributesCache, &t2790_TI, &t2790_0_0_0, &t2790_1_0_0, t2790_IOs, &t2790_GC, NULL, NULL, NULL, t2790_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2790)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4899_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Module>
extern MethodInfo m28389_MI;
extern MethodInfo m28390_MI;
static PropertyInfo t4899____Item_PropertyInfo = 
{
	&t4899_TI, "Item", &m28389_MI, &m28390_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4899_PIs[] =
{
	&t4899____Item_PropertyInfo,
	NULL
};
extern Il2CppType t740_0_0_0;
static ParameterInfo t4899_m28391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t740_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28391_MI = 
{
	"IndexOf", NULL, &t4899_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4899_m28391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t740_0_0_0;
static ParameterInfo t4899_m28392_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t740_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28392_MI = 
{
	"Insert", NULL, &t4899_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4899_m28392_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4899_m28393_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28393_MI = 
{
	"RemoveAt", NULL, &t4899_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4899_m28393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4899_m28389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t740_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28389_MI = 
{
	"get_Item", NULL, &t4899_TI, &t740_0_0_0, RuntimeInvoker_t28_t47, t4899_m28389_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t740_0_0_0;
static ParameterInfo t4899_m28390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t740_0_0_0},
};
extern TypeInfo t4899_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28390_MI = 
{
	"set_Item", NULL, &t4899_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4899_m28390_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4899_MIs[] =
{
	&m28391_MI,
	&m28392_MI,
	&m28393_MI,
	&m28389_MI,
	&m28390_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4898_TI;
extern TypeInfo t4900_TI;
static TypeInfo* t4899_ITIs[] = 
{
	&t611_TI,
	&t4898_TI,
	&t4900_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4899_0_0_0;
extern Il2CppType t4899_1_0_0;
struct t4899;
extern TypeInfo t4899_TI;
extern Il2CppGenericClass t4899_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4899_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4899_MIs, t4899_PIs, NULL, NULL, NULL, NULL, NULL, &t4899_TI, t4899_ITIs, NULL, &t1418__CustomAttributeCache, &t4899_TI, &t4899_0_0_0, &t4899_1_0_0, NULL, &t4899_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4901_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>
extern MethodInfo m28394_MI;
static PropertyInfo t4901____Count_PropertyInfo = 
{
	&t4901_TI, "Count", &m28394_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28395_MI;
static PropertyInfo t4901____IsReadOnly_PropertyInfo = 
{
	&t4901_TI, "IsReadOnly", &m28395_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4901_PIs[] =
{
	&t4901____Count_PropertyInfo,
	&t4901____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4901_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28394_MI = 
{
	"get_Count", NULL, &t4901_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4901_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28395_MI = 
{
	"get_IsReadOnly", NULL, &t4901_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1520_0_0_0;
static ParameterInfo t4901_m28396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1520_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28396_MI = 
{
	"Add", NULL, &t4901_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4901_m28396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4901_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28397_MI = 
{
	"Clear", NULL, &t4901_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1520_0_0_0;
static ParameterInfo t4901_m28398_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1520_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28398_MI = 
{
	"Contains", NULL, &t4901_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4901_m28398_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3046_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4901_m28399_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3046_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28399_MI = 
{
	"CopyTo", NULL, &t4901_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4901_m28399_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1520_0_0_0;
static ParameterInfo t4901_m28400_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1520_0_0_0},
};
extern TypeInfo t4901_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28400_MI = 
{
	"Remove", NULL, &t4901_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4901_m28400_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4901_MIs[] =
{
	&m28394_MI,
	&m28395_MI,
	&m28396_MI,
	&m28397_MI,
	&m28398_MI,
	&m28399_MI,
	&m28400_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4903_TI;
static TypeInfo* t4901_ITIs[] = 
{
	&t611_TI,
	&t4903_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4901_0_0_0;
extern Il2CppType t4901_1_0_0;
struct t4901;
extern TypeInfo t4901_TI;
extern Il2CppGenericClass t4901_GC;
TypeInfo t4901_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4901_MIs, t4901_PIs, NULL, NULL, NULL, NULL, NULL, &t4901_TI, t4901_ITIs, NULL, &EmptyCustomAttributesCache, &t4901_TI, &t4901_0_0_0, &t4901_1_0_0, NULL, &t4901_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4903_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>
extern TypeInfo t4903_TI;
extern Il2CppType t3711_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28401_MI = 
{
	"GetEnumerator", NULL, &t4903_TI, &t3711_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4903_MIs[] =
{
	&m28401_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4903_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4903_0_0_0;
extern Il2CppType t4903_1_0_0;
struct t4903;
extern TypeInfo t4903_TI;
extern Il2CppGenericClass t4903_GC;
TypeInfo t4903_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4903_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4903_TI, t4903_ITIs, NULL, &EmptyCustomAttributesCache, &t4903_TI, &t4903_0_0_0, &t4903_1_0_0, NULL, &t4903_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3711_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>
extern MethodInfo m28402_MI;
static PropertyInfo t3711____Current_PropertyInfo = 
{
	&t3711_TI, "Current", &m28402_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3711_PIs[] =
{
	&t3711____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3711_TI;
extern Il2CppType t1520_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28402_MI = 
{
	"get_Current", NULL, &t3711_TI, &t1520_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3711_MIs[] =
{
	&m28402_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3711_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3711_0_0_0;
extern Il2CppType t3711_1_0_0;
struct t3711;
extern TypeInfo t3711_TI;
extern Il2CppGenericClass t3711_GC;
TypeInfo t3711_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3711_MIs, t3711_PIs, NULL, NULL, NULL, NULL, NULL, &t3711_TI, t3711_ITIs, NULL, &EmptyCustomAttributesCache, &t3711_TI, &t3711_0_0_0, &t3711_1_0_0, NULL, &t3711_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2791.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2791_TI;
#include "t2791MD.h"

extern TypeInfo t2791_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15852_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21498_MI;
struct t29;
#define m21498(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21498_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
extern Il2CppType t29_0_0_1;
FieldInfo t2791_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2791_TI, offsetof(t2791, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2791_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2791_TI, offsetof(t2791, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2791_FIs[] =
{
	&t2791_f0_FieldInfo,
	&t2791_f1_FieldInfo,
	NULL
};
extern MethodInfo m15849_MI;
static PropertyInfo t2791____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2791_TI, "System.Collections.IEnumerator.Current", &m15849_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15852_MI;
static PropertyInfo t2791____Current_PropertyInfo = 
{
	&t2791_TI, "Current", &m15852_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2791_PIs[] =
{
	&t2791____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2791____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2791_m15848_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2791_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15848_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2791_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2791_m15848_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15849_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2791_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15850_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2791_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15851_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2791_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2791_TI;
extern Il2CppType t1520_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15852_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2791_TI, &t1520_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2791_MIs[] =
{
	&m15848_MI,
	&m15849_MI,
	&m15850_MI,
	&m15851_MI,
	&m15852_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15849_MI;
extern MethodInfo m15851_MI;
extern MethodInfo m15850_MI;
extern MethodInfo m15852_MI;
static MethodInfo* t2791_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15849_MI,
	&m15851_MI,
	&m15850_MI,
	&m15852_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3711_TI;
static TypeInfo* t2791_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3711_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3711_TI;
static Il2CppInterfaceOffsetPair t2791_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3711_TI, 7},
};
extern MethodInfo m15852_MI;
extern TypeInfo t1520_TI;
extern MethodInfo m21498_MI;
static void* t2791_RGCTXData[3] = 
{
	&m15852_MI,
	&t1520_TI,
	&m21498_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2791_0_0_0;
extern Il2CppType t2791_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2791_TI;
extern Il2CppGenericClass t2791_GC;
extern TypeInfo t29_TI;
TypeInfo t2791_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2791_MIs, t2791_PIs, t2791_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2791_TI, t2791_ITIs, t2791_VT, &EmptyCustomAttributesCache, &t2791_TI, &t2791_0_0_0, &t2791_1_0_0, t2791_IOs, &t2791_GC, NULL, NULL, NULL, t2791_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2791)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4902_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>
extern MethodInfo m28403_MI;
extern MethodInfo m28404_MI;
static PropertyInfo t4902____Item_PropertyInfo = 
{
	&t4902_TI, "Item", &m28403_MI, &m28404_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4902_PIs[] =
{
	&t4902____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1520_0_0_0;
static ParameterInfo t4902_m28405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1520_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28405_MI = 
{
	"IndexOf", NULL, &t4902_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4902_m28405_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1520_0_0_0;
static ParameterInfo t4902_m28406_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1520_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28406_MI = 
{
	"Insert", NULL, &t4902_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4902_m28406_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4902_m28407_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28407_MI = 
{
	"RemoveAt", NULL, &t4902_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4902_m28407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4902_m28403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t1520_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28403_MI = 
{
	"get_Item", NULL, &t4902_TI, &t1520_0_0_0, RuntimeInvoker_t28_t47, t4902_m28403_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1520_0_0_0;
static ParameterInfo t4902_m28404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1520_0_0_0},
};
extern TypeInfo t4902_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28404_MI = 
{
	"set_Item", NULL, &t4902_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4902_m28404_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4902_MIs[] =
{
	&m28405_MI,
	&m28406_MI,
	&m28407_MI,
	&m28403_MI,
	&m28404_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4901_TI;
extern TypeInfo t4903_TI;
static TypeInfo* t4902_ITIs[] = 
{
	&t611_TI,
	&t4901_TI,
	&t4903_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4902_0_0_0;
extern Il2CppType t4902_1_0_0;
struct t4902;
extern TypeInfo t4902_TI;
extern Il2CppGenericClass t4902_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4902_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4902_MIs, t4902_PIs, NULL, NULL, NULL, NULL, NULL, &t4902_TI, t4902_ITIs, NULL, &t1418__CustomAttributeCache, &t4902_TI, &t4902_0_0_0, &t4902_1_0_0, NULL, &t4902_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3712_TI;

#include "t947.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m28408_MI;
static PropertyInfo t3712____Current_PropertyInfo = 
{
	&t3712_TI, "Current", &m28408_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3712_PIs[] =
{
	&t3712____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3712_TI;
extern Il2CppType t947_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28408_MI = 
{
	"get_Current", NULL, &t3712_TI, &t947_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3712_MIs[] =
{
	&m28408_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3712_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3712_0_0_0;
extern Il2CppType t3712_1_0_0;
struct t3712;
extern TypeInfo t3712_TI;
extern Il2CppGenericClass t3712_GC;
TypeInfo t3712_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3712_MIs, t3712_PIs, NULL, NULL, NULL, NULL, NULL, &t3712_TI, t3712_ITIs, NULL, &EmptyCustomAttributesCache, &t3712_TI, &t3712_0_0_0, &t3712_1_0_0, NULL, &t3712_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2792.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2792_TI;
#include "t2792MD.h"

extern TypeInfo t2792_TI;
extern TypeInfo t947_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15857_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21509_MI;
struct t29;
#define m21509(__this, p0, method) (t947 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21509_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2792_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2792_TI, offsetof(t2792, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2792_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2792_TI, offsetof(t2792, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2792_FIs[] =
{
	&t2792_f0_FieldInfo,
	&t2792_f1_FieldInfo,
	NULL
};
extern MethodInfo m15854_MI;
static PropertyInfo t2792____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2792_TI, "System.Collections.IEnumerator.Current", &m15854_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15857_MI;
static PropertyInfo t2792____Current_PropertyInfo = 
{
	&t2792_TI, "Current", &m15857_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2792_PIs[] =
{
	&t2792____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2792____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2792_m15853_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2792_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15853_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2792_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2792_m15853_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15854_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2792_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15855_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2792_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15856_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2792_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2792_TI;
extern Il2CppType t947_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15857_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2792_TI, &t947_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2792_MIs[] =
{
	&m15853_MI,
	&m15854_MI,
	&m15855_MI,
	&m15856_MI,
	&m15857_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15854_MI;
extern MethodInfo m15856_MI;
extern MethodInfo m15855_MI;
extern MethodInfo m15857_MI;
static MethodInfo* t2792_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15854_MI,
	&m15856_MI,
	&m15855_MI,
	&m15857_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3712_TI;
static TypeInfo* t2792_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3712_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3712_TI;
static Il2CppInterfaceOffsetPair t2792_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3712_TI, 7},
};
extern MethodInfo m15857_MI;
extern TypeInfo t947_TI;
extern MethodInfo m21509_MI;
static void* t2792_RGCTXData[3] = 
{
	&m15857_MI,
	&t947_TI,
	&m21509_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2792_0_0_0;
extern Il2CppType t2792_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2792_TI;
extern Il2CppGenericClass t2792_GC;
extern TypeInfo t29_TI;
TypeInfo t2792_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2792_MIs, t2792_PIs, t2792_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2792_TI, t2792_ITIs, t2792_VT, &EmptyCustomAttributesCache, &t2792_TI, &t2792_0_0_0, &t2792_1_0_0, t2792_IOs, &t2792_GC, NULL, NULL, NULL, t2792_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2792)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4904_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m28409_MI;
static PropertyInfo t4904____Count_PropertyInfo = 
{
	&t4904_TI, "Count", &m28409_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28410_MI;
static PropertyInfo t4904____IsReadOnly_PropertyInfo = 
{
	&t4904_TI, "IsReadOnly", &m28410_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4904_PIs[] =
{
	&t4904____Count_PropertyInfo,
	&t4904____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4904_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28409_MI = 
{
	"get_Count", NULL, &t4904_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4904_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28410_MI = 
{
	"get_IsReadOnly", NULL, &t4904_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t947_0_0_0;
static ParameterInfo t4904_m28411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t947_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28411_MI = 
{
	"Add", NULL, &t4904_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4904_m28411_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4904_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28412_MI = 
{
	"Clear", NULL, &t4904_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t947_0_0_0;
static ParameterInfo t4904_m28413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t947_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28413_MI = 
{
	"Contains", NULL, &t4904_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4904_m28413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t946_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4904_m28414_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t946_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28414_MI = 
{
	"CopyTo", NULL, &t4904_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4904_m28414_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t947_0_0_0;
static ParameterInfo t4904_m28415_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t947_0_0_0},
};
extern TypeInfo t4904_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28415_MI = 
{
	"Remove", NULL, &t4904_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4904_m28415_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4904_MIs[] =
{
	&m28409_MI,
	&m28410_MI,
	&m28411_MI,
	&m28412_MI,
	&m28413_MI,
	&m28414_MI,
	&m28415_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4906_TI;
static TypeInfo* t4904_ITIs[] = 
{
	&t611_TI,
	&t4906_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4904_0_0_0;
extern Il2CppType t4904_1_0_0;
struct t4904;
extern TypeInfo t4904_TI;
extern Il2CppGenericClass t4904_GC;
TypeInfo t4904_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4904_MIs, t4904_PIs, NULL, NULL, NULL, NULL, NULL, &t4904_TI, t4904_ITIs, NULL, &EmptyCustomAttributesCache, &t4904_TI, &t4904_0_0_0, &t4904_1_0_0, NULL, &t4904_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4906_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>
extern TypeInfo t4906_TI;
extern Il2CppType t3712_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28416_MI = 
{
	"GetEnumerator", NULL, &t4906_TI, &t3712_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4906_MIs[] =
{
	&m28416_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4906_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4906_0_0_0;
extern Il2CppType t4906_1_0_0;
struct t4906;
extern TypeInfo t4906_TI;
extern Il2CppGenericClass t4906_GC;
TypeInfo t4906_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4906_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4906_TI, t4906_ITIs, NULL, &EmptyCustomAttributesCache, &t4906_TI, &t4906_0_0_0, &t4906_1_0_0, NULL, &t4906_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4905_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo m28417_MI;
extern MethodInfo m28418_MI;
static PropertyInfo t4905____Item_PropertyInfo = 
{
	&t4905_TI, "Item", &m28417_MI, &m28418_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4905_PIs[] =
{
	&t4905____Item_PropertyInfo,
	NULL
};
extern Il2CppType t947_0_0_0;
static ParameterInfo t4905_m28419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t947_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28419_MI = 
{
	"IndexOf", NULL, &t4905_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4905_m28419_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t947_0_0_0;
static ParameterInfo t4905_m28420_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t947_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28420_MI = 
{
	"Insert", NULL, &t4905_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4905_m28420_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4905_m28421_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28421_MI = 
{
	"RemoveAt", NULL, &t4905_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4905_m28421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4905_m28417_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t947_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28417_MI = 
{
	"get_Item", NULL, &t4905_TI, &t947_0_0_0, RuntimeInvoker_t28_t47, t4905_m28417_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t947_0_0_0;
static ParameterInfo t4905_m28418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t947_0_0_0},
};
extern TypeInfo t4905_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28418_MI = 
{
	"set_Item", NULL, &t4905_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4905_m28418_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4905_MIs[] =
{
	&m28419_MI,
	&m28420_MI,
	&m28421_MI,
	&m28417_MI,
	&m28418_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4904_TI;
extern TypeInfo t4906_TI;
static TypeInfo* t4905_ITIs[] = 
{
	&t611_TI,
	&t4904_TI,
	&t4906_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4905_0_0_0;
extern Il2CppType t4905_1_0_0;
struct t4905;
extern TypeInfo t4905_TI;
extern Il2CppGenericClass t4905_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4905_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4905_MIs, t4905_PIs, NULL, NULL, NULL, NULL, NULL, &t4905_TI, t4905_ITIs, NULL, &t1418__CustomAttributeCache, &t4905_TI, &t4905_0_0_0, &t4905_1_0_0, NULL, &t4905_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4907_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m28422_MI;
static PropertyInfo t4907____Count_PropertyInfo = 
{
	&t4907_TI, "Count", &m28422_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28423_MI;
static PropertyInfo t4907____IsReadOnly_PropertyInfo = 
{
	&t4907_TI, "IsReadOnly", &m28423_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4907_PIs[] =
{
	&t4907____Count_PropertyInfo,
	&t4907____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4907_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28422_MI = 
{
	"get_Count", NULL, &t4907_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4907_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28423_MI = 
{
	"get_IsReadOnly", NULL, &t4907_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1521_0_0_0;
static ParameterInfo t4907_m28424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1521_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28424_MI = 
{
	"Add", NULL, &t4907_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4907_m28424_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4907_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28425_MI = 
{
	"Clear", NULL, &t4907_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1521_0_0_0;
static ParameterInfo t4907_m28426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1521_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28426_MI = 
{
	"Contains", NULL, &t4907_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4907_m28426_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3047_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4907_m28427_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3047_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28427_MI = 
{
	"CopyTo", NULL, &t4907_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4907_m28427_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1521_0_0_0;
static ParameterInfo t4907_m28428_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1521_0_0_0},
};
extern TypeInfo t4907_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28428_MI = 
{
	"Remove", NULL, &t4907_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4907_m28428_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4907_MIs[] =
{
	&m28422_MI,
	&m28423_MI,
	&m28424_MI,
	&m28425_MI,
	&m28426_MI,
	&m28427_MI,
	&m28428_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4909_TI;
static TypeInfo* t4907_ITIs[] = 
{
	&t611_TI,
	&t4909_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4907_0_0_0;
extern Il2CppType t4907_1_0_0;
struct t4907;
extern TypeInfo t4907_TI;
extern Il2CppGenericClass t4907_GC;
TypeInfo t4907_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4907_MIs, t4907_PIs, NULL, NULL, NULL, NULL, NULL, &t4907_TI, t4907_ITIs, NULL, &EmptyCustomAttributesCache, &t4907_TI, &t4907_0_0_0, &t4907_1_0_0, NULL, &t4907_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4909_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>
extern TypeInfo t4909_TI;
extern Il2CppType t3713_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28429_MI = 
{
	"GetEnumerator", NULL, &t4909_TI, &t3713_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4909_MIs[] =
{
	&m28429_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4909_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4909_0_0_0;
extern Il2CppType t4909_1_0_0;
struct t4909;
extern TypeInfo t4909_TI;
extern Il2CppGenericClass t4909_GC;
TypeInfo t4909_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4909_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4909_TI, t4909_ITIs, NULL, &EmptyCustomAttributesCache, &t4909_TI, &t4909_0_0_0, &t4909_1_0_0, NULL, &t4909_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3713_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m28430_MI;
static PropertyInfo t3713____Current_PropertyInfo = 
{
	&t3713_TI, "Current", &m28430_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3713_PIs[] =
{
	&t3713____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3713_TI;
extern Il2CppType t1521_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28430_MI = 
{
	"get_Current", NULL, &t3713_TI, &t1521_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3713_MIs[] =
{
	&m28430_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3713_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3713_0_0_0;
extern Il2CppType t3713_1_0_0;
struct t3713;
extern TypeInfo t3713_TI;
extern Il2CppGenericClass t3713_GC;
TypeInfo t3713_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3713_MIs, t3713_PIs, NULL, NULL, NULL, NULL, NULL, &t3713_TI, t3713_ITIs, NULL, &EmptyCustomAttributesCache, &t3713_TI, &t3713_0_0_0, &t3713_1_0_0, NULL, &t3713_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2793_TI;
#include "t2793MD.h"

extern TypeInfo t2793_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15862_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21520_MI;
struct t29;
#define m21520(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21520_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2793_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2793_TI, offsetof(t2793, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2793_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2793_TI, offsetof(t2793, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2793_FIs[] =
{
	&t2793_f0_FieldInfo,
	&t2793_f1_FieldInfo,
	NULL
};
extern MethodInfo m15859_MI;
static PropertyInfo t2793____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2793_TI, "System.Collections.IEnumerator.Current", &m15859_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15862_MI;
static PropertyInfo t2793____Current_PropertyInfo = 
{
	&t2793_TI, "Current", &m15862_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2793_PIs[] =
{
	&t2793____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2793____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2793_m15858_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2793_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15858_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2793_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2793_m15858_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15859_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2793_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15860_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2793_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15861_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2793_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2793_TI;
extern Il2CppType t1521_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15862_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2793_TI, &t1521_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2793_MIs[] =
{
	&m15858_MI,
	&m15859_MI,
	&m15860_MI,
	&m15861_MI,
	&m15862_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15859_MI;
extern MethodInfo m15861_MI;
extern MethodInfo m15860_MI;
extern MethodInfo m15862_MI;
static MethodInfo* t2793_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15859_MI,
	&m15861_MI,
	&m15860_MI,
	&m15862_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3713_TI;
static TypeInfo* t2793_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3713_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3713_TI;
static Il2CppInterfaceOffsetPair t2793_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3713_TI, 7},
};
extern MethodInfo m15862_MI;
extern TypeInfo t1521_TI;
extern MethodInfo m21520_MI;
static void* t2793_RGCTXData[3] = 
{
	&m15862_MI,
	&t1521_TI,
	&m21520_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2793_0_0_0;
extern Il2CppType t2793_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2793_TI;
extern Il2CppGenericClass t2793_GC;
extern TypeInfo t29_TI;
TypeInfo t2793_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2793_MIs, t2793_PIs, t2793_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2793_TI, t2793_ITIs, t2793_VT, &EmptyCustomAttributesCache, &t2793_TI, &t2793_0_0_0, &t2793_1_0_0, t2793_IOs, &t2793_GC, NULL, NULL, NULL, t2793_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2793)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4908_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo m28431_MI;
extern MethodInfo m28432_MI;
static PropertyInfo t4908____Item_PropertyInfo = 
{
	&t4908_TI, "Item", &m28431_MI, &m28432_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4908_PIs[] =
{
	&t4908____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1521_0_0_0;
static ParameterInfo t4908_m28433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1521_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28433_MI = 
{
	"IndexOf", NULL, &t4908_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4908_m28433_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1521_0_0_0;
static ParameterInfo t4908_m28434_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1521_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28434_MI = 
{
	"Insert", NULL, &t4908_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4908_m28434_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4908_m28435_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28435_MI = 
{
	"RemoveAt", NULL, &t4908_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4908_m28435_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4908_m28431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t1521_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28431_MI = 
{
	"get_Item", NULL, &t4908_TI, &t1521_0_0_0, RuntimeInvoker_t28_t47, t4908_m28431_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1521_0_0_0;
static ParameterInfo t4908_m28432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1521_0_0_0},
};
extern TypeInfo t4908_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28432_MI = 
{
	"set_Item", NULL, &t4908_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4908_m28432_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4908_MIs[] =
{
	&m28433_MI,
	&m28434_MI,
	&m28435_MI,
	&m28431_MI,
	&m28432_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4907_TI;
extern TypeInfo t4909_TI;
static TypeInfo* t4908_ITIs[] = 
{
	&t611_TI,
	&t4907_TI,
	&t4909_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4908_0_0_0;
extern Il2CppType t4908_1_0_0;
struct t4908;
extern TypeInfo t4908_TI;
extern Il2CppGenericClass t4908_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4908_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4908_MIs, t4908_PIs, NULL, NULL, NULL, NULL, NULL, &t4908_TI, t4908_ITIs, NULL, &t1418__CustomAttributeCache, &t4908_TI, &t4908_0_0_0, &t4908_1_0_0, NULL, &t4908_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3714_TI;

#include "t954.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m28436_MI;
static PropertyInfo t3714____Current_PropertyInfo = 
{
	&t3714_TI, "Current", &m28436_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3714_PIs[] =
{
	&t3714____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3714_TI;
extern Il2CppType t954_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28436_MI = 
{
	"get_Current", NULL, &t3714_TI, &t954_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3714_MIs[] =
{
	&m28436_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3714_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3714_0_0_0;
extern Il2CppType t3714_1_0_0;
struct t3714;
extern TypeInfo t3714_TI;
extern Il2CppGenericClass t3714_GC;
TypeInfo t3714_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3714_MIs, t3714_PIs, NULL, NULL, NULL, NULL, NULL, &t3714_TI, t3714_ITIs, NULL, &EmptyCustomAttributesCache, &t3714_TI, &t3714_0_0_0, &t3714_1_0_0, NULL, &t3714_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2794.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2794_TI;
#include "t2794MD.h"

extern TypeInfo t2794_TI;
extern TypeInfo t954_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15867_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21531_MI;
struct t29;
#define m21531(__this, p0, method) (t954 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21531_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2794_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2794_TI, offsetof(t2794, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2794_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2794_TI, offsetof(t2794, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2794_FIs[] =
{
	&t2794_f0_FieldInfo,
	&t2794_f1_FieldInfo,
	NULL
};
extern MethodInfo m15864_MI;
static PropertyInfo t2794____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2794_TI, "System.Collections.IEnumerator.Current", &m15864_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15867_MI;
static PropertyInfo t2794____Current_PropertyInfo = 
{
	&t2794_TI, "Current", &m15867_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2794_PIs[] =
{
	&t2794____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2794____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2794_m15863_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2794_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15863_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2794_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2794_m15863_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15864_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2794_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15865_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2794_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15866_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2794_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2794_TI;
extern Il2CppType t954_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15867_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2794_TI, &t954_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2794_MIs[] =
{
	&m15863_MI,
	&m15864_MI,
	&m15865_MI,
	&m15866_MI,
	&m15867_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15864_MI;
extern MethodInfo m15866_MI;
extern MethodInfo m15865_MI;
extern MethodInfo m15867_MI;
static MethodInfo* t2794_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15864_MI,
	&m15866_MI,
	&m15865_MI,
	&m15867_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3714_TI;
static TypeInfo* t2794_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3714_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3714_TI;
static Il2CppInterfaceOffsetPair t2794_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3714_TI, 7},
};
extern MethodInfo m15867_MI;
extern TypeInfo t954_TI;
extern MethodInfo m21531_MI;
static void* t2794_RGCTXData[3] = 
{
	&m15867_MI,
	&t954_TI,
	&m21531_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2794_0_0_0;
extern Il2CppType t2794_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2794_TI;
extern Il2CppGenericClass t2794_GC;
extern TypeInfo t29_TI;
TypeInfo t2794_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2794_MIs, t2794_PIs, t2794_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2794_TI, t2794_ITIs, t2794_VT, &EmptyCustomAttributesCache, &t2794_TI, &t2794_0_0_0, &t2794_1_0_0, t2794_IOs, &t2794_GC, NULL, NULL, NULL, t2794_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2794)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4910_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m28437_MI;
static PropertyInfo t4910____Count_PropertyInfo = 
{
	&t4910_TI, "Count", &m28437_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28438_MI;
static PropertyInfo t4910____IsReadOnly_PropertyInfo = 
{
	&t4910_TI, "IsReadOnly", &m28438_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4910_PIs[] =
{
	&t4910____Count_PropertyInfo,
	&t4910____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4910_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28437_MI = 
{
	"get_Count", NULL, &t4910_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4910_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28438_MI = 
{
	"get_IsReadOnly", NULL, &t4910_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t954_0_0_0;
static ParameterInfo t4910_m28439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t954_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28439_MI = 
{
	"Add", NULL, &t4910_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4910_m28439_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4910_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28440_MI = 
{
	"Clear", NULL, &t4910_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t954_0_0_0;
static ParameterInfo t4910_m28441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t954_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28441_MI = 
{
	"Contains", NULL, &t4910_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4910_m28441_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t956_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4910_m28442_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t956_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28442_MI = 
{
	"CopyTo", NULL, &t4910_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4910_m28442_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t954_0_0_0;
static ParameterInfo t4910_m28443_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t954_0_0_0},
};
extern TypeInfo t4910_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28443_MI = 
{
	"Remove", NULL, &t4910_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4910_m28443_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4910_MIs[] =
{
	&m28437_MI,
	&m28438_MI,
	&m28439_MI,
	&m28440_MI,
	&m28441_MI,
	&m28442_MI,
	&m28443_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4912_TI;
static TypeInfo* t4910_ITIs[] = 
{
	&t611_TI,
	&t4912_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4910_0_0_0;
extern Il2CppType t4910_1_0_0;
struct t4910;
extern TypeInfo t4910_TI;
extern Il2CppGenericClass t4910_GC;
TypeInfo t4910_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4910_MIs, t4910_PIs, NULL, NULL, NULL, NULL, NULL, &t4910_TI, t4910_ITIs, NULL, &EmptyCustomAttributesCache, &t4910_TI, &t4910_0_0_0, &t4910_1_0_0, NULL, &t4910_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4912_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern TypeInfo t4912_TI;
extern Il2CppType t3714_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28444_MI = 
{
	"GetEnumerator", NULL, &t4912_TI, &t3714_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4912_MIs[] =
{
	&m28444_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4912_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4912_0_0_0;
extern Il2CppType t4912_1_0_0;
struct t4912;
extern TypeInfo t4912_TI;
extern Il2CppGenericClass t4912_GC;
TypeInfo t4912_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4912_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4912_TI, t4912_ITIs, NULL, &EmptyCustomAttributesCache, &t4912_TI, &t4912_0_0_0, &t4912_1_0_0, NULL, &t4912_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4911_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo m28445_MI;
extern MethodInfo m28446_MI;
static PropertyInfo t4911____Item_PropertyInfo = 
{
	&t4911_TI, "Item", &m28445_MI, &m28446_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4911_PIs[] =
{
	&t4911____Item_PropertyInfo,
	NULL
};
extern Il2CppType t954_0_0_0;
static ParameterInfo t4911_m28447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t954_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28447_MI = 
{
	"IndexOf", NULL, &t4911_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4911_m28447_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t954_0_0_0;
static ParameterInfo t4911_m28448_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t954_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28448_MI = 
{
	"Insert", NULL, &t4911_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4911_m28448_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4911_m28449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28449_MI = 
{
	"RemoveAt", NULL, &t4911_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4911_m28449_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4911_m28445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t954_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28445_MI = 
{
	"get_Item", NULL, &t4911_TI, &t954_0_0_0, RuntimeInvoker_t28_t47, t4911_m28445_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t954_0_0_0;
static ParameterInfo t4911_m28446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t954_0_0_0},
};
extern TypeInfo t4911_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28446_MI = 
{
	"set_Item", NULL, &t4911_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4911_m28446_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4911_MIs[] =
{
	&m28447_MI,
	&m28448_MI,
	&m28449_MI,
	&m28445_MI,
	&m28446_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4910_TI;
extern TypeInfo t4912_TI;
static TypeInfo* t4911_ITIs[] = 
{
	&t611_TI,
	&t4910_TI,
	&t4912_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4911_0_0_0;
extern Il2CppType t4911_1_0_0;
struct t4911;
extern TypeInfo t4911_TI;
extern Il2CppGenericClass t4911_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4911_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4911_MIs, t4911_PIs, NULL, NULL, NULL, NULL, NULL, &t4911_TI, t4911_ITIs, NULL, &t1418__CustomAttributeCache, &t4911_TI, &t4911_0_0_0, &t4911_1_0_0, NULL, &t4911_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3715_TI;

#include "t955.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m28450_MI;
static PropertyInfo t3715____Current_PropertyInfo = 
{
	&t3715_TI, "Current", &m28450_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3715_PIs[] =
{
	&t3715____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3715_TI;
extern Il2CppType t955_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28450_MI = 
{
	"get_Current", NULL, &t3715_TI, &t955_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3715_MIs[] =
{
	&m28450_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3715_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3715_0_0_0;
extern Il2CppType t3715_1_0_0;
struct t3715;
extern TypeInfo t3715_TI;
extern Il2CppGenericClass t3715_GC;
TypeInfo t3715_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3715_MIs, t3715_PIs, NULL, NULL, NULL, NULL, NULL, &t3715_TI, t3715_ITIs, NULL, &EmptyCustomAttributesCache, &t3715_TI, &t3715_0_0_0, &t3715_1_0_0, NULL, &t3715_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2795.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2795_TI;
#include "t2795MD.h"

extern TypeInfo t2795_TI;
extern TypeInfo t955_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15872_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21542_MI;
struct t29;
#define m21542(__this, p0, method) (t955 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21542_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2795_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2795_TI, offsetof(t2795, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2795_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2795_TI, offsetof(t2795, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2795_FIs[] =
{
	&t2795_f0_FieldInfo,
	&t2795_f1_FieldInfo,
	NULL
};
extern MethodInfo m15869_MI;
static PropertyInfo t2795____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2795_TI, "System.Collections.IEnumerator.Current", &m15869_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15872_MI;
static PropertyInfo t2795____Current_PropertyInfo = 
{
	&t2795_TI, "Current", &m15872_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2795_PIs[] =
{
	&t2795____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2795____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2795_m15868_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2795_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15868_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2795_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2795_m15868_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15869_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2795_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15870_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2795_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15871_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2795_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2795_TI;
extern Il2CppType t955_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15872_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2795_TI, &t955_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2795_MIs[] =
{
	&m15868_MI,
	&m15869_MI,
	&m15870_MI,
	&m15871_MI,
	&m15872_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15869_MI;
extern MethodInfo m15871_MI;
extern MethodInfo m15870_MI;
extern MethodInfo m15872_MI;
static MethodInfo* t2795_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15869_MI,
	&m15871_MI,
	&m15870_MI,
	&m15872_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3715_TI;
static TypeInfo* t2795_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3715_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3715_TI;
static Il2CppInterfaceOffsetPair t2795_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3715_TI, 7},
};
extern MethodInfo m15872_MI;
extern TypeInfo t955_TI;
extern MethodInfo m21542_MI;
static void* t2795_RGCTXData[3] = 
{
	&m15872_MI,
	&t955_TI,
	&m21542_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2795_0_0_0;
extern Il2CppType t2795_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2795_TI;
extern Il2CppGenericClass t2795_GC;
extern TypeInfo t29_TI;
TypeInfo t2795_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2795_MIs, t2795_PIs, t2795_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2795_TI, t2795_ITIs, t2795_VT, &EmptyCustomAttributesCache, &t2795_TI, &t2795_0_0_0, &t2795_1_0_0, t2795_IOs, &t2795_GC, NULL, NULL, NULL, t2795_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2795)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4913_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m28451_MI;
static PropertyInfo t4913____Count_PropertyInfo = 
{
	&t4913_TI, "Count", &m28451_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28452_MI;
static PropertyInfo t4913____IsReadOnly_PropertyInfo = 
{
	&t4913_TI, "IsReadOnly", &m28452_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4913_PIs[] =
{
	&t4913____Count_PropertyInfo,
	&t4913____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4913_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28451_MI = 
{
	"get_Count", NULL, &t4913_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4913_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28452_MI = 
{
	"get_IsReadOnly", NULL, &t4913_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t955_0_0_0;
static ParameterInfo t4913_m28453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28453_MI = 
{
	"Add", NULL, &t4913_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4913_m28453_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4913_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28454_MI = 
{
	"Clear", NULL, &t4913_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t955_0_0_0;
static ParameterInfo t4913_m28455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28455_MI = 
{
	"Contains", NULL, &t4913_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4913_m28455_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t958_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4913_m28456_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t958_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28456_MI = 
{
	"CopyTo", NULL, &t4913_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4913_m28456_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t955_0_0_0;
static ParameterInfo t4913_m28457_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
};
extern TypeInfo t4913_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28457_MI = 
{
	"Remove", NULL, &t4913_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4913_m28457_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4913_MIs[] =
{
	&m28451_MI,
	&m28452_MI,
	&m28453_MI,
	&m28454_MI,
	&m28455_MI,
	&m28456_MI,
	&m28457_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4915_TI;
static TypeInfo* t4913_ITIs[] = 
{
	&t611_TI,
	&t4915_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4913_0_0_0;
extern Il2CppType t4913_1_0_0;
struct t4913;
extern TypeInfo t4913_TI;
extern Il2CppGenericClass t4913_GC;
TypeInfo t4913_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4913_MIs, t4913_PIs, NULL, NULL, NULL, NULL, NULL, &t4913_TI, t4913_ITIs, NULL, &EmptyCustomAttributesCache, &t4913_TI, &t4913_0_0_0, &t4913_1_0_0, NULL, &t4913_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4915_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>
extern TypeInfo t4915_TI;
extern Il2CppType t3715_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28458_MI = 
{
	"GetEnumerator", NULL, &t4915_TI, &t3715_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4915_MIs[] =
{
	&m28458_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4915_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4915_0_0_0;
extern Il2CppType t4915_1_0_0;
struct t4915;
extern TypeInfo t4915_TI;
extern Il2CppGenericClass t4915_GC;
TypeInfo t4915_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4915_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4915_TI, t4915_ITIs, NULL, &EmptyCustomAttributesCache, &t4915_TI, &t4915_0_0_0, &t4915_1_0_0, NULL, &t4915_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4914_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo m28459_MI;
extern MethodInfo m28460_MI;
static PropertyInfo t4914____Item_PropertyInfo = 
{
	&t4914_TI, "Item", &m28459_MI, &m28460_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4914_PIs[] =
{
	&t4914____Item_PropertyInfo,
	NULL
};
extern Il2CppType t955_0_0_0;
static ParameterInfo t4914_m28461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28461_MI = 
{
	"IndexOf", NULL, &t4914_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4914_m28461_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t955_0_0_0;
static ParameterInfo t4914_m28462_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28462_MI = 
{
	"Insert", NULL, &t4914_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4914_m28462_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4914_m28463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28463_MI = 
{
	"RemoveAt", NULL, &t4914_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4914_m28463_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4914_m28459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t955_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28459_MI = 
{
	"get_Item", NULL, &t4914_TI, &t955_0_0_0, RuntimeInvoker_t28_t47, t4914_m28459_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t955_0_0_0;
static ParameterInfo t4914_m28460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t955_0_0_0},
};
extern TypeInfo t4914_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28460_MI = 
{
	"set_Item", NULL, &t4914_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4914_m28460_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4914_MIs[] =
{
	&m28461_MI,
	&m28462_MI,
	&m28463_MI,
	&m28459_MI,
	&m28460_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4913_TI;
extern TypeInfo t4915_TI;
static TypeInfo* t4914_ITIs[] = 
{
	&t611_TI,
	&t4913_TI,
	&t4915_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4914_0_0_0;
extern Il2CppType t4914_1_0_0;
struct t4914;
extern TypeInfo t4914_TI;
extern Il2CppGenericClass t4914_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4914_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4914_MIs, t4914_PIs, NULL, NULL, NULL, NULL, NULL, &t4914_TI, t4914_ITIs, NULL, &t1418__CustomAttributeCache, &t4914_TI, &t4914_0_0_0, &t4914_1_0_0, NULL, &t4914_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4916_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m28464_MI;
static PropertyInfo t4916____Count_PropertyInfo = 
{
	&t4916_TI, "Count", &m28464_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28465_MI;
static PropertyInfo t4916____IsReadOnly_PropertyInfo = 
{
	&t4916_TI, "IsReadOnly", &m28465_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4916_PIs[] =
{
	&t4916____Count_PropertyInfo,
	&t4916____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4916_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28464_MI = 
{
	"get_Count", NULL, &t4916_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4916_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28465_MI = 
{
	"get_IsReadOnly", NULL, &t4916_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1517_0_0_0;
static ParameterInfo t4916_m28466_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1517_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28466_MI = 
{
	"Add", NULL, &t4916_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4916_m28466_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4916_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28467_MI = 
{
	"Clear", NULL, &t4916_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1517_0_0_0;
static ParameterInfo t4916_m28468_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1517_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28468_MI = 
{
	"Contains", NULL, &t4916_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4916_m28468_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3048_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4916_m28469_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3048_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28469_MI = 
{
	"CopyTo", NULL, &t4916_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4916_m28469_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1517_0_0_0;
static ParameterInfo t4916_m28470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1517_0_0_0},
};
extern TypeInfo t4916_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28470_MI = 
{
	"Remove", NULL, &t4916_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4916_m28470_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4916_MIs[] =
{
	&m28464_MI,
	&m28465_MI,
	&m28466_MI,
	&m28467_MI,
	&m28468_MI,
	&m28469_MI,
	&m28470_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4918_TI;
static TypeInfo* t4916_ITIs[] = 
{
	&t611_TI,
	&t4918_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4916_0_0_0;
extern Il2CppType t4916_1_0_0;
struct t4916;
extern TypeInfo t4916_TI;
extern Il2CppGenericClass t4916_GC;
TypeInfo t4916_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4916_MIs, t4916_PIs, NULL, NULL, NULL, NULL, NULL, &t4916_TI, t4916_ITIs, NULL, &EmptyCustomAttributesCache, &t4916_TI, &t4916_0_0_0, &t4916_1_0_0, NULL, &t4916_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4918_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>
extern TypeInfo t4918_TI;
extern Il2CppType t3716_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28471_MI = 
{
	"GetEnumerator", NULL, &t4918_TI, &t3716_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4918_MIs[] =
{
	&m28471_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4918_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4918_0_0_0;
extern Il2CppType t4918_1_0_0;
struct t4918;
extern TypeInfo t4918_TI;
extern Il2CppGenericClass t4918_GC;
TypeInfo t4918_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4918_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4918_TI, t4918_ITIs, NULL, &EmptyCustomAttributesCache, &t4918_TI, &t4918_0_0_0, &t4918_1_0_0, NULL, &t4918_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3716_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m28472_MI;
static PropertyInfo t3716____Current_PropertyInfo = 
{
	&t3716_TI, "Current", &m28472_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3716_PIs[] =
{
	&t3716____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3716_TI;
extern Il2CppType t1517_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28472_MI = 
{
	"get_Current", NULL, &t3716_TI, &t1517_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3716_MIs[] =
{
	&m28472_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3716_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3716_0_0_0;
extern Il2CppType t3716_1_0_0;
struct t3716;
extern TypeInfo t3716_TI;
extern Il2CppGenericClass t3716_GC;
TypeInfo t3716_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3716_MIs, t3716_PIs, NULL, NULL, NULL, NULL, NULL, &t3716_TI, t3716_ITIs, NULL, &EmptyCustomAttributesCache, &t3716_TI, &t3716_0_0_0, &t3716_1_0_0, NULL, &t3716_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2796_TI;
#include "t2796MD.h"

extern TypeInfo t2796_TI;
extern TypeInfo t1517_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15877_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21553_MI;
struct t29;
#define m21553(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21553_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2796_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2796_TI, offsetof(t2796, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2796_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2796_TI, offsetof(t2796, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2796_FIs[] =
{
	&t2796_f0_FieldInfo,
	&t2796_f1_FieldInfo,
	NULL
};
extern MethodInfo m15874_MI;
static PropertyInfo t2796____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2796_TI, "System.Collections.IEnumerator.Current", &m15874_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15877_MI;
static PropertyInfo t2796____Current_PropertyInfo = 
{
	&t2796_TI, "Current", &m15877_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2796_PIs[] =
{
	&t2796____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2796____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2796_m15873_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2796_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15873_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2796_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2796_m15873_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15874_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2796_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15875_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2796_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15876_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2796_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2796_TI;
extern Il2CppType t1517_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15877_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2796_TI, &t1517_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2796_MIs[] =
{
	&m15873_MI,
	&m15874_MI,
	&m15875_MI,
	&m15876_MI,
	&m15877_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15874_MI;
extern MethodInfo m15876_MI;
extern MethodInfo m15875_MI;
extern MethodInfo m15877_MI;
static MethodInfo* t2796_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15874_MI,
	&m15876_MI,
	&m15875_MI,
	&m15877_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3716_TI;
static TypeInfo* t2796_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3716_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3716_TI;
static Il2CppInterfaceOffsetPair t2796_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3716_TI, 7},
};
extern MethodInfo m15877_MI;
extern TypeInfo t1517_TI;
extern MethodInfo m21553_MI;
static void* t2796_RGCTXData[3] = 
{
	&m15877_MI,
	&t1517_TI,
	&m21553_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2796_0_0_0;
extern Il2CppType t2796_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2796_TI;
extern Il2CppGenericClass t2796_GC;
extern TypeInfo t29_TI;
TypeInfo t2796_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2796_MIs, t2796_PIs, t2796_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2796_TI, t2796_ITIs, t2796_VT, &EmptyCustomAttributesCache, &t2796_TI, &t2796_0_0_0, &t2796_1_0_0, t2796_IOs, &t2796_GC, NULL, NULL, NULL, t2796_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2796)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4917_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo m28473_MI;
extern MethodInfo m28474_MI;
static PropertyInfo t4917____Item_PropertyInfo = 
{
	&t4917_TI, "Item", &m28473_MI, &m28474_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4917_PIs[] =
{
	&t4917____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1517_0_0_0;
static ParameterInfo t4917_m28475_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1517_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28475_MI = 
{
	"IndexOf", NULL, &t4917_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4917_m28475_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1517_0_0_0;
static ParameterInfo t4917_m28476_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1517_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28476_MI = 
{
	"Insert", NULL, &t4917_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4917_m28476_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4917_m28477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28477_MI = 
{
	"RemoveAt", NULL, &t4917_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4917_m28477_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4917_m28473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t1517_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28473_MI = 
{
	"get_Item", NULL, &t4917_TI, &t1517_0_0_0, RuntimeInvoker_t28_t47, t4917_m28473_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1517_0_0_0;
static ParameterInfo t4917_m28474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1517_0_0_0},
};
extern TypeInfo t4917_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28474_MI = 
{
	"set_Item", NULL, &t4917_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4917_m28474_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4917_MIs[] =
{
	&m28475_MI,
	&m28476_MI,
	&m28477_MI,
	&m28473_MI,
	&m28474_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4916_TI;
extern TypeInfo t4918_TI;
static TypeInfo* t4917_ITIs[] = 
{
	&t611_TI,
	&t4916_TI,
	&t4918_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4917_0_0_0;
extern Il2CppType t4917_1_0_0;
struct t4917;
extern TypeInfo t4917_TI;
extern Il2CppGenericClass t4917_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4917_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4917_MIs, t4917_PIs, NULL, NULL, NULL, NULL, NULL, &t4917_TI, t4917_ITIs, NULL, &t1418__CustomAttributeCache, &t4917_TI, &t4917_0_0_0, &t4917_1_0_0, NULL, &t4917_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3717_TI;

#include "t944.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo m28478_MI;
static PropertyInfo t3717____Current_PropertyInfo = 
{
	&t3717_TI, "Current", &m28478_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3717_PIs[] =
{
	&t3717____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3717_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28478_MI = 
{
	"get_Current", NULL, &t3717_TI, &t944_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3717_MIs[] =
{
	&m28478_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3717_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3717_0_0_0;
extern Il2CppType t3717_1_0_0;
struct t3717;
extern TypeInfo t3717_TI;
extern Il2CppGenericClass t3717_GC;
TypeInfo t3717_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3717_MIs, t3717_PIs, NULL, NULL, NULL, NULL, NULL, &t3717_TI, t3717_ITIs, NULL, &EmptyCustomAttributesCache, &t3717_TI, &t3717_0_0_0, &t3717_1_0_0, NULL, &t3717_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2797.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2797_TI;
#include "t2797MD.h"

extern TypeInfo t2797_TI;
extern TypeInfo t944_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15882_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21564_MI;
struct t29;
#define m21564(__this, p0, method) (t944 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21564_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2797_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2797_TI, offsetof(t2797, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2797_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2797_TI, offsetof(t2797, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2797_FIs[] =
{
	&t2797_f0_FieldInfo,
	&t2797_f1_FieldInfo,
	NULL
};
extern MethodInfo m15879_MI;
static PropertyInfo t2797____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2797_TI, "System.Collections.IEnumerator.Current", &m15879_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15882_MI;
static PropertyInfo t2797____Current_PropertyInfo = 
{
	&t2797_TI, "Current", &m15882_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2797_PIs[] =
{
	&t2797____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2797____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2797_m15878_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2797_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15878_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2797_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2797_m15878_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15879_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2797_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15880_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2797_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15881_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2797_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2797_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15882_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2797_TI, &t944_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2797_MIs[] =
{
	&m15878_MI,
	&m15879_MI,
	&m15880_MI,
	&m15881_MI,
	&m15882_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15879_MI;
extern MethodInfo m15881_MI;
extern MethodInfo m15880_MI;
extern MethodInfo m15882_MI;
static MethodInfo* t2797_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15879_MI,
	&m15881_MI,
	&m15880_MI,
	&m15882_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3717_TI;
static TypeInfo* t2797_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3717_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3717_TI;
static Il2CppInterfaceOffsetPair t2797_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3717_TI, 7},
};
extern MethodInfo m15882_MI;
extern TypeInfo t944_TI;
extern MethodInfo m21564_MI;
static void* t2797_RGCTXData[3] = 
{
	&m15882_MI,
	&t944_TI,
	&m21564_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2797_0_0_0;
extern Il2CppType t2797_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2797_TI;
extern Il2CppGenericClass t2797_GC;
extern TypeInfo t29_TI;
TypeInfo t2797_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2797_MIs, t2797_PIs, t2797_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2797_TI, t2797_ITIs, t2797_VT, &EmptyCustomAttributesCache, &t2797_TI, &t2797_0_0_0, &t2797_1_0_0, t2797_IOs, &t2797_GC, NULL, NULL, NULL, t2797_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2797)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4919_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo m28479_MI;
static PropertyInfo t4919____Count_PropertyInfo = 
{
	&t4919_TI, "Count", &m28479_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28480_MI;
static PropertyInfo t4919____IsReadOnly_PropertyInfo = 
{
	&t4919_TI, "IsReadOnly", &m28480_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4919_PIs[] =
{
	&t4919____Count_PropertyInfo,
	&t4919____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4919_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28479_MI = 
{
	"get_Count", NULL, &t4919_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4919_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28480_MI = 
{
	"get_IsReadOnly", NULL, &t4919_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t944_0_0_0;
static ParameterInfo t4919_m28481_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t944_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28481_MI = 
{
	"Add", NULL, &t4919_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4919_m28481_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4919_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28482_MI = 
{
	"Clear", NULL, &t4919_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t944_0_0_0;
static ParameterInfo t4919_m28483_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t944_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28483_MI = 
{
	"Contains", NULL, &t4919_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4919_m28483_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t959_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4919_m28484_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t959_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28484_MI = 
{
	"CopyTo", NULL, &t4919_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4919_m28484_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t944_0_0_0;
static ParameterInfo t4919_m28485_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t944_0_0_0},
};
extern TypeInfo t4919_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28485_MI = 
{
	"Remove", NULL, &t4919_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4919_m28485_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4919_MIs[] =
{
	&m28479_MI,
	&m28480_MI,
	&m28481_MI,
	&m28482_MI,
	&m28483_MI,
	&m28484_MI,
	&m28485_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4921_TI;
static TypeInfo* t4919_ITIs[] = 
{
	&t611_TI,
	&t4921_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4919_0_0_0;
extern Il2CppType t4919_1_0_0;
struct t4919;
extern TypeInfo t4919_TI;
extern Il2CppGenericClass t4919_GC;
TypeInfo t4919_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4919_MIs, t4919_PIs, NULL, NULL, NULL, NULL, NULL, &t4919_TI, t4919_ITIs, NULL, &EmptyCustomAttributesCache, &t4919_TI, &t4919_0_0_0, &t4919_1_0_0, NULL, &t4919_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4921_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ConstructorBuilder>
extern TypeInfo t4921_TI;
extern Il2CppType t3717_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28486_MI = 
{
	"GetEnumerator", NULL, &t4921_TI, &t3717_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4921_MIs[] =
{
	&m28486_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4921_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4921_0_0_0;
extern Il2CppType t4921_1_0_0;
struct t4921;
extern TypeInfo t4921_TI;
extern Il2CppGenericClass t4921_GC;
TypeInfo t4921_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4921_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4921_TI, t4921_ITIs, NULL, &EmptyCustomAttributesCache, &t4921_TI, &t4921_0_0_0, &t4921_1_0_0, NULL, &t4921_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4920_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo m28487_MI;
extern MethodInfo m28488_MI;
static PropertyInfo t4920____Item_PropertyInfo = 
{
	&t4920_TI, "Item", &m28487_MI, &m28488_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4920_PIs[] =
{
	&t4920____Item_PropertyInfo,
	NULL
};
extern Il2CppType t944_0_0_0;
static ParameterInfo t4920_m28489_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t944_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28489_MI = 
{
	"IndexOf", NULL, &t4920_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4920_m28489_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t944_0_0_0;
static ParameterInfo t4920_m28490_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t944_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28490_MI = 
{
	"Insert", NULL, &t4920_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4920_m28490_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4920_m28491_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28491_MI = 
{
	"RemoveAt", NULL, &t4920_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4920_m28491_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4920_m28487_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t944_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28487_MI = 
{
	"get_Item", NULL, &t4920_TI, &t944_0_0_0, RuntimeInvoker_t28_t47, t4920_m28487_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t944_0_0_0;
static ParameterInfo t4920_m28488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t944_0_0_0},
};
extern TypeInfo t4920_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28488_MI = 
{
	"set_Item", NULL, &t4920_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4920_m28488_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4920_MIs[] =
{
	&m28489_MI,
	&m28490_MI,
	&m28491_MI,
	&m28487_MI,
	&m28488_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4919_TI;
extern TypeInfo t4921_TI;
static TypeInfo* t4920_ITIs[] = 
{
	&t611_TI,
	&t4919_TI,
	&t4921_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4920_0_0_0;
extern Il2CppType t4920_1_0_0;
struct t4920;
extern TypeInfo t4920_TI;
extern Il2CppGenericClass t4920_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4920_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4920_MIs, t4920_PIs, NULL, NULL, NULL, NULL, NULL, &t4920_TI, t4920_ITIs, NULL, &t1418__CustomAttributeCache, &t4920_TI, &t4920_0_0_0, &t4920_1_0_0, NULL, &t4920_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4922_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo m28492_MI;
static PropertyInfo t4922____Count_PropertyInfo = 
{
	&t4922_TI, "Count", &m28492_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28493_MI;
static PropertyInfo t4922____IsReadOnly_PropertyInfo = 
{
	&t4922_TI, "IsReadOnly", &m28493_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4922_PIs[] =
{
	&t4922____Count_PropertyInfo,
	&t4922____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4922_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28492_MI = 
{
	"get_Count", NULL, &t4922_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4922_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28493_MI = 
{
	"get_IsReadOnly", NULL, &t4922_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t4922_m28494_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28494_MI = 
{
	"Add", NULL, &t4922_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4922_m28494_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4922_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28495_MI = 
{
	"Clear", NULL, &t4922_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t4922_m28496_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28496_MI = 
{
	"Contains", NULL, &t4922_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4922_m28496_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3049_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4922_m28497_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3049_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28497_MI = 
{
	"CopyTo", NULL, &t4922_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4922_m28497_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t4922_m28498_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern TypeInfo t4922_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28498_MI = 
{
	"Remove", NULL, &t4922_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4922_m28498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4922_MIs[] =
{
	&m28492_MI,
	&m28493_MI,
	&m28494_MI,
	&m28495_MI,
	&m28496_MI,
	&m28497_MI,
	&m28498_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4924_TI;
static TypeInfo* t4922_ITIs[] = 
{
	&t611_TI,
	&t4924_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4922_0_0_0;
extern Il2CppType t4922_1_0_0;
struct t4922;
extern TypeInfo t4922_TI;
extern Il2CppGenericClass t4922_GC;
TypeInfo t4922_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4922_MIs, t4922_PIs, NULL, NULL, NULL, NULL, NULL, &t4922_TI, t4922_ITIs, NULL, &EmptyCustomAttributesCache, &t4922_TI, &t4922_0_0_0, &t4922_1_0_0, NULL, &t4922_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4924_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorBuilder>
extern TypeInfo t4924_TI;
extern Il2CppType t3718_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28499_MI = 
{
	"GetEnumerator", NULL, &t4924_TI, &t3718_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4924_MIs[] =
{
	&m28499_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4924_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4924_0_0_0;
extern Il2CppType t4924_1_0_0;
struct t4924;
extern TypeInfo t4924_TI;
extern Il2CppGenericClass t4924_GC;
TypeInfo t4924_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4924_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4924_TI, t4924_ITIs, NULL, &EmptyCustomAttributesCache, &t4924_TI, &t4924_0_0_0, &t4924_1_0_0, NULL, &t4924_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3718_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo m28500_MI;
static PropertyInfo t3718____Current_PropertyInfo = 
{
	&t3718_TI, "Current", &m28500_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3718_PIs[] =
{
	&t3718____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3718_TI;
extern Il2CppType t1511_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28500_MI = 
{
	"get_Current", NULL, &t3718_TI, &t1511_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3718_MIs[] =
{
	&m28500_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3718_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3718_0_0_0;
extern Il2CppType t3718_1_0_0;
struct t3718;
extern TypeInfo t3718_TI;
extern Il2CppGenericClass t3718_GC;
TypeInfo t3718_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3718_MIs, t3718_PIs, NULL, NULL, NULL, NULL, NULL, &t3718_TI, t3718_ITIs, NULL, &EmptyCustomAttributesCache, &t3718_TI, &t3718_0_0_0, &t3718_1_0_0, NULL, &t3718_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2798.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2798_TI;
#include "t2798MD.h"

extern TypeInfo t2798_TI;
extern TypeInfo t1511_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15887_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21575_MI;
struct t29;
#define m21575(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21575_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2798_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2798_TI, offsetof(t2798, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2798_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2798_TI, offsetof(t2798, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2798_FIs[] =
{
	&t2798_f0_FieldInfo,
	&t2798_f1_FieldInfo,
	NULL
};
extern MethodInfo m15884_MI;
static PropertyInfo t2798____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2798_TI, "System.Collections.IEnumerator.Current", &m15884_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15887_MI;
static PropertyInfo t2798____Current_PropertyInfo = 
{
	&t2798_TI, "Current", &m15887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2798_PIs[] =
{
	&t2798____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2798____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2798_m15883_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2798_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15883_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2798_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2798_m15883_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15884_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2798_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15885_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2798_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15886_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2798_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2798_TI;
extern Il2CppType t1511_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15887_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2798_TI, &t1511_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2798_MIs[] =
{
	&m15883_MI,
	&m15884_MI,
	&m15885_MI,
	&m15886_MI,
	&m15887_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15884_MI;
extern MethodInfo m15886_MI;
extern MethodInfo m15885_MI;
extern MethodInfo m15887_MI;
static MethodInfo* t2798_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15884_MI,
	&m15886_MI,
	&m15885_MI,
	&m15887_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3718_TI;
static TypeInfo* t2798_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3718_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3718_TI;
static Il2CppInterfaceOffsetPair t2798_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3718_TI, 7},
};
extern MethodInfo m15887_MI;
extern TypeInfo t1511_TI;
extern MethodInfo m21575_MI;
static void* t2798_RGCTXData[3] = 
{
	&m15887_MI,
	&t1511_TI,
	&m21575_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2798_0_0_0;
extern Il2CppType t2798_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2798_TI;
extern Il2CppGenericClass t2798_GC;
extern TypeInfo t29_TI;
TypeInfo t2798_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2798_MIs, t2798_PIs, t2798_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2798_TI, t2798_ITIs, t2798_VT, &EmptyCustomAttributesCache, &t2798_TI, &t2798_0_0_0, &t2798_1_0_0, t2798_IOs, &t2798_GC, NULL, NULL, NULL, t2798_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2798)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4923_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo m28501_MI;
extern MethodInfo m28502_MI;
static PropertyInfo t4923____Item_PropertyInfo = 
{
	&t4923_TI, "Item", &m28501_MI, &m28502_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4923_PIs[] =
{
	&t4923____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1511_0_0_0;
static ParameterInfo t4923_m28503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28503_MI = 
{
	"IndexOf", NULL, &t4923_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4923_m28503_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1511_0_0_0;
static ParameterInfo t4923_m28504_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28504_MI = 
{
	"Insert", NULL, &t4923_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4923_m28504_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4923_m28505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28505_MI = 
{
	"RemoveAt", NULL, &t4923_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4923_m28505_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4923_m28501_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t1511_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28501_MI = 
{
	"get_Item", NULL, &t4923_TI, &t1511_0_0_0, RuntimeInvoker_t28_t47, t4923_m28501_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1511_0_0_0;
static ParameterInfo t4923_m28502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1511_0_0_0},
};
extern TypeInfo t4923_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28502_MI = 
{
	"set_Item", NULL, &t4923_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4923_m28502_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4923_MIs[] =
{
	&m28503_MI,
	&m28504_MI,
	&m28505_MI,
	&m28501_MI,
	&m28502_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4922_TI;
extern TypeInfo t4924_TI;
static TypeInfo* t4923_ITIs[] = 
{
	&t611_TI,
	&t4922_TI,
	&t4924_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4923_0_0_0;
extern Il2CppType t4923_1_0_0;
struct t4923;
extern TypeInfo t4923_TI;
extern Il2CppGenericClass t4923_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4923_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4923_MIs, t4923_PIs, NULL, NULL, NULL, NULL, NULL, &t4923_TI, t4923_ITIs, NULL, &t1418__CustomAttributeCache, &t4923_TI, &t4923_0_0_0, &t4923_1_0_0, NULL, &t4923_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3719_TI;

#include "t951.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo m28506_MI;
static PropertyInfo t3719____Current_PropertyInfo = 
{
	&t3719_TI, "Current", &m28506_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3719_PIs[] =
{
	&t3719____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3719_TI;
extern Il2CppType t951_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28506_MI = 
{
	"get_Current", NULL, &t3719_TI, &t951_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3719_MIs[] =
{
	&m28506_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3719_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3719_0_0_0;
extern Il2CppType t3719_1_0_0;
struct t3719;
extern TypeInfo t3719_TI;
extern Il2CppGenericClass t3719_GC;
TypeInfo t3719_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3719_MIs, t3719_PIs, NULL, NULL, NULL, NULL, NULL, &t3719_TI, t3719_ITIs, NULL, &EmptyCustomAttributesCache, &t3719_TI, &t3719_0_0_0, &t3719_1_0_0, NULL, &t3719_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2799.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2799_TI;
#include "t2799MD.h"

extern TypeInfo t2799_TI;
extern TypeInfo t951_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15892_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21586_MI;
struct t29;
#define m21586(__this, p0, method) (t951 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21586_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2799_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2799_TI, offsetof(t2799, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2799_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2799_TI, offsetof(t2799, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2799_FIs[] =
{
	&t2799_f0_FieldInfo,
	&t2799_f1_FieldInfo,
	NULL
};
extern MethodInfo m15889_MI;
static PropertyInfo t2799____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2799_TI, "System.Collections.IEnumerator.Current", &m15889_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15892_MI;
static PropertyInfo t2799____Current_PropertyInfo = 
{
	&t2799_TI, "Current", &m15892_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2799_PIs[] =
{
	&t2799____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2799____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2799_m15888_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2799_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15888_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2799_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2799_m15888_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15889_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2799_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15890_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2799_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15891_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2799_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2799_TI;
extern Il2CppType t951_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15892_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2799_TI, &t951_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2799_MIs[] =
{
	&m15888_MI,
	&m15889_MI,
	&m15890_MI,
	&m15891_MI,
	&m15892_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15889_MI;
extern MethodInfo m15891_MI;
extern MethodInfo m15890_MI;
extern MethodInfo m15892_MI;
static MethodInfo* t2799_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15889_MI,
	&m15891_MI,
	&m15890_MI,
	&m15892_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3719_TI;
static TypeInfo* t2799_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3719_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3719_TI;
static Il2CppInterfaceOffsetPair t2799_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3719_TI, 7},
};
extern MethodInfo m15892_MI;
extern TypeInfo t951_TI;
extern MethodInfo m21586_MI;
static void* t2799_RGCTXData[3] = 
{
	&m15892_MI,
	&t951_TI,
	&m21586_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2799_0_0_0;
extern Il2CppType t2799_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2799_TI;
extern Il2CppGenericClass t2799_GC;
extern TypeInfo t29_TI;
TypeInfo t2799_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2799_MIs, t2799_PIs, t2799_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2799_TI, t2799_ITIs, t2799_VT, &EmptyCustomAttributesCache, &t2799_TI, &t2799_0_0_0, &t2799_1_0_0, t2799_IOs, &t2799_GC, NULL, NULL, NULL, t2799_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2799)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4925_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo m28507_MI;
static PropertyInfo t4925____Count_PropertyInfo = 
{
	&t4925_TI, "Count", &m28507_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28508_MI;
static PropertyInfo t4925____IsReadOnly_PropertyInfo = 
{
	&t4925_TI, "IsReadOnly", &m28508_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4925_PIs[] =
{
	&t4925____Count_PropertyInfo,
	&t4925____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4925_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28507_MI = 
{
	"get_Count", NULL, &t4925_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4925_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28508_MI = 
{
	"get_IsReadOnly", NULL, &t4925_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t951_0_0_0;
static ParameterInfo t4925_m28509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28509_MI = 
{
	"Add", NULL, &t4925_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4925_m28509_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4925_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28510_MI = 
{
	"Clear", NULL, &t4925_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t951_0_0_0;
static ParameterInfo t4925_m28511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28511_MI = 
{
	"Contains", NULL, &t4925_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4925_m28511_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t960_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4925_m28512_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t960_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28512_MI = 
{
	"CopyTo", NULL, &t4925_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4925_m28512_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t951_0_0_0;
static ParameterInfo t4925_m28513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
};
extern TypeInfo t4925_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28513_MI = 
{
	"Remove", NULL, &t4925_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4925_m28513_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4925_MIs[] =
{
	&m28507_MI,
	&m28508_MI,
	&m28509_MI,
	&m28510_MI,
	&m28511_MI,
	&m28512_MI,
	&m28513_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4927_TI;
static TypeInfo* t4925_ITIs[] = 
{
	&t611_TI,
	&t4927_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4925_0_0_0;
extern Il2CppType t4925_1_0_0;
struct t4925;
extern TypeInfo t4925_TI;
extern Il2CppGenericClass t4925_GC;
TypeInfo t4925_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4925_MIs, t4925_PIs, NULL, NULL, NULL, NULL, NULL, &t4925_TI, t4925_ITIs, NULL, &EmptyCustomAttributesCache, &t4925_TI, &t4925_0_0_0, &t4925_1_0_0, NULL, &t4925_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4927_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.FieldBuilder>
extern TypeInfo t4927_TI;
extern Il2CppType t3719_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28514_MI = 
{
	"GetEnumerator", NULL, &t4927_TI, &t3719_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4927_MIs[] =
{
	&m28514_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4927_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4927_0_0_0;
extern Il2CppType t4927_1_0_0;
struct t4927;
extern TypeInfo t4927_TI;
extern Il2CppGenericClass t4927_GC;
TypeInfo t4927_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4927_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4927_TI, t4927_ITIs, NULL, &EmptyCustomAttributesCache, &t4927_TI, &t4927_0_0_0, &t4927_1_0_0, NULL, &t4927_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4926_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo m28515_MI;
extern MethodInfo m28516_MI;
static PropertyInfo t4926____Item_PropertyInfo = 
{
	&t4926_TI, "Item", &m28515_MI, &m28516_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4926_PIs[] =
{
	&t4926____Item_PropertyInfo,
	NULL
};
extern Il2CppType t951_0_0_0;
static ParameterInfo t4926_m28517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28517_MI = 
{
	"IndexOf", NULL, &t4926_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4926_m28517_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t951_0_0_0;
static ParameterInfo t4926_m28518_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28518_MI = 
{
	"Insert", NULL, &t4926_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4926_m28518_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4926_m28519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28519_MI = 
{
	"RemoveAt", NULL, &t4926_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4926_m28519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4926_m28515_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t951_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28515_MI = 
{
	"get_Item", NULL, &t4926_TI, &t951_0_0_0, RuntimeInvoker_t28_t47, t4926_m28515_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t951_0_0_0;
static ParameterInfo t4926_m28516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t951_0_0_0},
};
extern TypeInfo t4926_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28516_MI = 
{
	"set_Item", NULL, &t4926_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4926_m28516_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4926_MIs[] =
{
	&m28517_MI,
	&m28518_MI,
	&m28519_MI,
	&m28515_MI,
	&m28516_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4925_TI;
extern TypeInfo t4927_TI;
static TypeInfo* t4926_ITIs[] = 
{
	&t611_TI,
	&t4925_TI,
	&t4927_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4926_0_0_0;
extern Il2CppType t4926_1_0_0;
struct t4926;
extern TypeInfo t4926_TI;
extern Il2CppGenericClass t4926_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4926_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4926_MIs, t4926_PIs, NULL, NULL, NULL, NULL, NULL, &t4926_TI, t4926_ITIs, NULL, &t1418__CustomAttributeCache, &t4926_TI, &t4926_0_0_0, &t4926_1_0_0, NULL, &t4926_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4928_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo m28520_MI;
static PropertyInfo t4928____Count_PropertyInfo = 
{
	&t4928_TI, "Count", &m28520_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28521_MI;
static PropertyInfo t4928____IsReadOnly_PropertyInfo = 
{
	&t4928_TI, "IsReadOnly", &m28521_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4928_PIs[] =
{
	&t4928____Count_PropertyInfo,
	&t4928____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4928_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28520_MI = 
{
	"get_Count", NULL, &t4928_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4928_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28521_MI = 
{
	"get_IsReadOnly", NULL, &t4928_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1515_0_0_0;
static ParameterInfo t4928_m28522_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1515_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28522_MI = 
{
	"Add", NULL, &t4928_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4928_m28522_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4928_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28523_MI = 
{
	"Clear", NULL, &t4928_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1515_0_0_0;
static ParameterInfo t4928_m28524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1515_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28524_MI = 
{
	"Contains", NULL, &t4928_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4928_m28524_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3050_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4928_m28525_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3050_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28525_MI = 
{
	"CopyTo", NULL, &t4928_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4928_m28525_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1515_0_0_0;
static ParameterInfo t4928_m28526_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1515_0_0_0},
};
extern TypeInfo t4928_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28526_MI = 
{
	"Remove", NULL, &t4928_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4928_m28526_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4928_MIs[] =
{
	&m28520_MI,
	&m28521_MI,
	&m28522_MI,
	&m28523_MI,
	&m28524_MI,
	&m28525_MI,
	&m28526_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4930_TI;
static TypeInfo* t4928_ITIs[] = 
{
	&t611_TI,
	&t4930_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4928_0_0_0;
extern Il2CppType t4928_1_0_0;
struct t4928;
extern TypeInfo t4928_TI;
extern Il2CppGenericClass t4928_GC;
TypeInfo t4928_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4928_MIs, t4928_PIs, NULL, NULL, NULL, NULL, NULL, &t4928_TI, t4928_ITIs, NULL, &EmptyCustomAttributesCache, &t4928_TI, &t4928_0_0_0, &t4928_1_0_0, NULL, &t4928_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4930_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldBuilder>
extern TypeInfo t4930_TI;
extern Il2CppType t3720_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28527_MI = 
{
	"GetEnumerator", NULL, &t4930_TI, &t3720_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4930_MIs[] =
{
	&m28527_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4930_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4930_0_0_0;
extern Il2CppType t4930_1_0_0;
struct t4930;
extern TypeInfo t4930_TI;
extern Il2CppGenericClass t4930_GC;
TypeInfo t4930_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4930_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4930_TI, t4930_ITIs, NULL, &EmptyCustomAttributesCache, &t4930_TI, &t4930_0_0_0, &t4930_1_0_0, NULL, &t4930_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3720_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo m28528_MI;
static PropertyInfo t3720____Current_PropertyInfo = 
{
	&t3720_TI, "Current", &m28528_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3720_PIs[] =
{
	&t3720____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3720_TI;
extern Il2CppType t1515_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28528_MI = 
{
	"get_Current", NULL, &t3720_TI, &t1515_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3720_MIs[] =
{
	&m28528_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3720_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3720_0_0_0;
extern Il2CppType t3720_1_0_0;
struct t3720;
extern TypeInfo t3720_TI;
extern Il2CppGenericClass t3720_GC;
TypeInfo t3720_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3720_MIs, t3720_PIs, NULL, NULL, NULL, NULL, NULL, &t3720_TI, t3720_ITIs, NULL, &EmptyCustomAttributesCache, &t3720_TI, &t3720_0_0_0, &t3720_1_0_0, NULL, &t3720_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2800_TI;
#include "t2800MD.h"

extern TypeInfo t2800_TI;
extern TypeInfo t1515_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15897_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21597_MI;
struct t29;
#define m21597(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21597_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
extern Il2CppType t29_0_0_1;
FieldInfo t2800_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2800_TI, offsetof(t2800, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2800_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2800_TI, offsetof(t2800, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2800_FIs[] =
{
	&t2800_f0_FieldInfo,
	&t2800_f1_FieldInfo,
	NULL
};
extern MethodInfo m15894_MI;
static PropertyInfo t2800____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2800_TI, "System.Collections.IEnumerator.Current", &m15894_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15897_MI;
static PropertyInfo t2800____Current_PropertyInfo = 
{
	&t2800_TI, "Current", &m15897_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2800_PIs[] =
{
	&t2800____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2800____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2800_m15893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2800_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15893_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2800_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2800_m15893_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15894_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2800_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15895_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2800_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15896_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2800_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2800_TI;
extern Il2CppType t1515_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15897_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2800_TI, &t1515_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2800_MIs[] =
{
	&m15893_MI,
	&m15894_MI,
	&m15895_MI,
	&m15896_MI,
	&m15897_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15894_MI;
extern MethodInfo m15896_MI;
extern MethodInfo m15895_MI;
extern MethodInfo m15897_MI;
static MethodInfo* t2800_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15894_MI,
	&m15896_MI,
	&m15895_MI,
	&m15897_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3720_TI;
static TypeInfo* t2800_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3720_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3720_TI;
static Il2CppInterfaceOffsetPair t2800_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3720_TI, 7},
};
extern MethodInfo m15897_MI;
extern TypeInfo t1515_TI;
extern MethodInfo m21597_MI;
static void* t2800_RGCTXData[3] = 
{
	&m15897_MI,
	&t1515_TI,
	&m21597_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2800_0_0_0;
extern Il2CppType t2800_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2800_TI;
extern Il2CppGenericClass t2800_GC;
extern TypeInfo t29_TI;
TypeInfo t2800_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2800_MIs, t2800_PIs, t2800_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2800_TI, t2800_ITIs, t2800_VT, &EmptyCustomAttributesCache, &t2800_TI, &t2800_0_0_0, &t2800_1_0_0, t2800_IOs, &t2800_GC, NULL, NULL, NULL, t2800_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2800)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4929_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo m28529_MI;
extern MethodInfo m28530_MI;
static PropertyInfo t4929____Item_PropertyInfo = 
{
	&t4929_TI, "Item", &m28529_MI, &m28530_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4929_PIs[] =
{
	&t4929____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1515_0_0_0;
static ParameterInfo t4929_m28531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1515_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28531_MI = 
{
	"IndexOf", NULL, &t4929_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4929_m28531_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1515_0_0_0;
static ParameterInfo t4929_m28532_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1515_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28532_MI = 
{
	"Insert", NULL, &t4929_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4929_m28532_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4929_m28533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28533_MI = 
{
	"RemoveAt", NULL, &t4929_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4929_m28533_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4929_m28529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t1515_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28529_MI = 
{
	"get_Item", NULL, &t4929_TI, &t1515_0_0_0, RuntimeInvoker_t28_t47, t4929_m28529_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1515_0_0_0;
static ParameterInfo t4929_m28530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1515_0_0_0},
};
extern TypeInfo t4929_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28530_MI = 
{
	"set_Item", NULL, &t4929_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4929_m28530_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4929_MIs[] =
{
	&m28531_MI,
	&m28532_MI,
	&m28533_MI,
	&m28529_MI,
	&m28530_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4928_TI;
extern TypeInfo t4930_TI;
static TypeInfo* t4929_ITIs[] = 
{
	&t611_TI,
	&t4928_TI,
	&t4930_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4929_0_0_0;
extern Il2CppType t4929_1_0_0;
struct t4929;
extern TypeInfo t4929_TI;
extern Il2CppGenericClass t4929_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4929_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4929_MIs, t4929_PIs, NULL, NULL, NULL, NULL, NULL, &t4929_TI, t4929_ITIs, NULL, &t1418__CustomAttributeCache, &t4929_TI, &t4929_0_0_0, &t4929_1_0_0, NULL, &t4929_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4931_TI;

#include "t742.h"


// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>
extern MethodInfo m28534_MI;
static PropertyInfo t4931____Count_PropertyInfo = 
{
	&t4931_TI, "Count", &m28534_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28535_MI;
static PropertyInfo t4931____IsReadOnly_PropertyInfo = 
{
	&t4931_TI, "IsReadOnly", &m28535_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4931_PIs[] =
{
	&t4931____Count_PropertyInfo,
	&t4931____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4931_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28534_MI = 
{
	"get_Count", NULL, &t4931_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4931_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28535_MI = 
{
	"get_IsReadOnly", NULL, &t4931_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t742_0_0_0;
static ParameterInfo t4931_m28536_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28536_MI = 
{
	"Add", NULL, &t4931_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4931_m28536_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4931_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28537_MI = 
{
	"Clear", NULL, &t4931_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t742_0_0_0;
static ParameterInfo t4931_m28538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28538_MI = 
{
	"Contains", NULL, &t4931_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4931_m28538_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3051_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4931_m28539_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3051_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28539_MI = 
{
	"CopyTo", NULL, &t4931_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4931_m28539_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t742_0_0_0;
static ParameterInfo t4931_m28540_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t4931_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28540_MI = 
{
	"Remove", NULL, &t4931_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4931_m28540_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4931_MIs[] =
{
	&m28534_MI,
	&m28535_MI,
	&m28536_MI,
	&m28537_MI,
	&m28538_MI,
	&m28539_MI,
	&m28540_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4933_TI;
static TypeInfo* t4931_ITIs[] = 
{
	&t611_TI,
	&t4933_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4931_0_0_0;
extern Il2CppType t4931_1_0_0;
struct t4931;
extern TypeInfo t4931_TI;
extern Il2CppGenericClass t4931_GC;
TypeInfo t4931_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4931_MIs, t4931_PIs, NULL, NULL, NULL, NULL, NULL, &t4931_TI, t4931_ITIs, NULL, &EmptyCustomAttributesCache, &t4931_TI, &t4931_0_0_0, &t4931_1_0_0, NULL, &t4931_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4933_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
extern TypeInfo t4933_TI;
extern Il2CppType t3721_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28541_MI = 
{
	"GetEnumerator", NULL, &t4933_TI, &t3721_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4933_MIs[] =
{
	&m28541_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4933_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4933_0_0_0;
extern Il2CppType t4933_1_0_0;
struct t4933;
extern TypeInfo t4933_TI;
extern Il2CppGenericClass t4933_GC;
TypeInfo t4933_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4933_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4933_TI, t4933_ITIs, NULL, &EmptyCustomAttributesCache, &t4933_TI, &t4933_0_0_0, &t4933_1_0_0, NULL, &t4933_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3721_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>
extern MethodInfo m28542_MI;
static PropertyInfo t3721____Current_PropertyInfo = 
{
	&t3721_TI, "Current", &m28542_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3721_PIs[] =
{
	&t3721____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3721_TI;
extern Il2CppType t742_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28542_MI = 
{
	"get_Current", NULL, &t3721_TI, &t742_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3721_MIs[] =
{
	&m28542_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3721_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3721_0_0_0;
extern Il2CppType t3721_1_0_0;
struct t3721;
extern TypeInfo t3721_TI;
extern Il2CppGenericClass t3721_GC;
TypeInfo t3721_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3721_MIs, t3721_PIs, NULL, NULL, NULL, NULL, NULL, &t3721_TI, t3721_ITIs, NULL, &EmptyCustomAttributesCache, &t3721_TI, &t3721_0_0_0, &t3721_1_0_0, NULL, &t3721_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2801_TI;
#include "t2801MD.h"

extern TypeInfo t2801_TI;
extern TypeInfo t742_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15902_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21608_MI;
struct t29;
#define m21608(__this, p0, method) (t742 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21608_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>
extern Il2CppType t29_0_0_1;
FieldInfo t2801_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2801_TI, offsetof(t2801, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2801_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2801_TI, offsetof(t2801, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2801_FIs[] =
{
	&t2801_f0_FieldInfo,
	&t2801_f1_FieldInfo,
	NULL
};
extern MethodInfo m15899_MI;
static PropertyInfo t2801____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2801_TI, "System.Collections.IEnumerator.Current", &m15899_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15902_MI;
static PropertyInfo t2801____Current_PropertyInfo = 
{
	&t2801_TI, "Current", &m15902_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2801_PIs[] =
{
	&t2801____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2801____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2801_m15898_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2801_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15898_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2801_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2801_m15898_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15899_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2801_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15900_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2801_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15901_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2801_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2801_TI;
extern Il2CppType t742_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15902_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2801_TI, &t742_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2801_MIs[] =
{
	&m15898_MI,
	&m15899_MI,
	&m15900_MI,
	&m15901_MI,
	&m15902_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15899_MI;
extern MethodInfo m15901_MI;
extern MethodInfo m15900_MI;
extern MethodInfo m15902_MI;
static MethodInfo* t2801_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15899_MI,
	&m15901_MI,
	&m15900_MI,
	&m15902_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3721_TI;
static TypeInfo* t2801_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3721_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3721_TI;
static Il2CppInterfaceOffsetPair t2801_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3721_TI, 7},
};
extern MethodInfo m15902_MI;
extern TypeInfo t742_TI;
extern MethodInfo m21608_MI;
static void* t2801_RGCTXData[3] = 
{
	&m15902_MI,
	&t742_TI,
	&m21608_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2801_0_0_0;
extern Il2CppType t2801_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2801_TI;
extern Il2CppGenericClass t2801_GC;
extern TypeInfo t29_TI;
TypeInfo t2801_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2801_MIs, t2801_PIs, t2801_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2801_TI, t2801_ITIs, t2801_VT, &EmptyCustomAttributesCache, &t2801_TI, &t2801_0_0_0, &t2801_1_0_0, t2801_IOs, &t2801_GC, NULL, NULL, NULL, t2801_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2801)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4932_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.FieldInfo>
extern MethodInfo m28543_MI;
extern MethodInfo m28544_MI;
static PropertyInfo t4932____Item_PropertyInfo = 
{
	&t4932_TI, "Item", &m28543_MI, &m28544_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4932_PIs[] =
{
	&t4932____Item_PropertyInfo,
	NULL
};
extern Il2CppType t742_0_0_0;
static ParameterInfo t4932_m28545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t4932_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28545_MI = 
{
	"IndexOf", NULL, &t4932_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4932_m28545_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t4932_m28546_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t4932_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28546_MI = 
{
	"Insert", NULL, &t4932_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4932_m28546_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4932_m28547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4932_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28547_MI = 
{
	"RemoveAt", NULL, &t4932_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4932_m28547_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4932_m28543_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4932_TI;
extern Il2CppType t742_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28543_MI = 
{
	"get_Item", NULL, &t4932_TI, &t742_0_0_0, RuntimeInvoker_t28_t47, t4932_m28543_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t742_0_0_0;
static ParameterInfo t4932_m28544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t742_0_0_0},
};
extern TypeInfo t4932_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28544_MI = 
{
	"set_Item", NULL, &t4932_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4932_m28544_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4932_MIs[] =
{
	&m28545_MI,
	&m28546_MI,
	&m28547_MI,
	&m28543_MI,
	&m28544_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4931_TI;
extern TypeInfo t4933_TI;
static TypeInfo* t4932_ITIs[] = 
{
	&t611_TI,
	&t4931_TI,
	&t4933_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4932_0_0_0;
extern Il2CppType t4932_1_0_0;
struct t4932;
extern TypeInfo t4932_TI;
extern Il2CppGenericClass t4932_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4932_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4932_MIs, t4932_PIs, NULL, NULL, NULL, NULL, NULL, &t4932_TI, t4932_ITIs, NULL, &t1418__CustomAttributeCache, &t4932_TI, &t4932_0_0_0, &t4932_1_0_0, NULL, &t4932_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4934_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo m28548_MI;
static PropertyInfo t4934____Count_PropertyInfo = 
{
	&t4934_TI, "Count", &m28548_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28549_MI;
static PropertyInfo t4934____IsReadOnly_PropertyInfo = 
{
	&t4934_TI, "IsReadOnly", &m28549_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4934_PIs[] =
{
	&t4934____Count_PropertyInfo,
	&t4934____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4934_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28548_MI = 
{
	"get_Count", NULL, &t4934_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4934_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28549_MI = 
{
	"get_IsReadOnly", NULL, &t4934_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1516_0_0_0;
static ParameterInfo t4934_m28550_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1516_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28550_MI = 
{
	"Add", NULL, &t4934_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4934_m28550_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4934_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28551_MI = 
{
	"Clear", NULL, &t4934_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1516_0_0_0;
static ParameterInfo t4934_m28552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1516_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28552_MI = 
{
	"Contains", NULL, &t4934_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4934_m28552_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3052_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4934_m28553_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3052_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28553_MI = 
{
	"CopyTo", NULL, &t4934_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4934_m28553_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1516_0_0_0;
static ParameterInfo t4934_m28554_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1516_0_0_0},
};
extern TypeInfo t4934_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28554_MI = 
{
	"Remove", NULL, &t4934_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4934_m28554_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4934_MIs[] =
{
	&m28548_MI,
	&m28549_MI,
	&m28550_MI,
	&m28551_MI,
	&m28552_MI,
	&m28553_MI,
	&m28554_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4936_TI;
static TypeInfo* t4934_ITIs[] = 
{
	&t611_TI,
	&t4936_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4934_0_0_0;
extern Il2CppType t4934_1_0_0;
struct t4934;
extern TypeInfo t4934_TI;
extern Il2CppGenericClass t4934_GC;
TypeInfo t4934_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4934_MIs, t4934_PIs, NULL, NULL, NULL, NULL, NULL, &t4934_TI, t4934_ITIs, NULL, &EmptyCustomAttributesCache, &t4934_TI, &t4934_0_0_0, &t4934_1_0_0, NULL, &t4934_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4936_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldInfo>
extern TypeInfo t4936_TI;
extern Il2CppType t3722_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28555_MI = 
{
	"GetEnumerator", NULL, &t4936_TI, &t3722_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4936_MIs[] =
{
	&m28555_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4936_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4936_0_0_0;
extern Il2CppType t4936_1_0_0;
struct t4936;
extern TypeInfo t4936_TI;
extern Il2CppGenericClass t4936_GC;
TypeInfo t4936_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4936_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4936_TI, t4936_ITIs, NULL, &EmptyCustomAttributesCache, &t4936_TI, &t4936_0_0_0, &t4936_1_0_0, NULL, &t4936_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3722_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo m28556_MI;
static PropertyInfo t3722____Current_PropertyInfo = 
{
	&t3722_TI, "Current", &m28556_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3722_PIs[] =
{
	&t3722____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3722_TI;
extern Il2CppType t1516_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28556_MI = 
{
	"get_Current", NULL, &t3722_TI, &t1516_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3722_MIs[] =
{
	&m28556_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3722_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3722_0_0_0;
extern Il2CppType t3722_1_0_0;
struct t3722;
extern TypeInfo t3722_TI;
extern Il2CppGenericClass t3722_GC;
TypeInfo t3722_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3722_MIs, t3722_PIs, NULL, NULL, NULL, NULL, NULL, &t3722_TI, t3722_ITIs, NULL, &EmptyCustomAttributesCache, &t3722_TI, &t3722_0_0_0, &t3722_1_0_0, NULL, &t3722_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2802.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2802_TI;
#include "t2802MD.h"

extern TypeInfo t2802_TI;
extern TypeInfo t1516_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15907_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21619_MI;
struct t29;
#define m21619(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21619_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>
extern Il2CppType t29_0_0_1;
FieldInfo t2802_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2802_TI, offsetof(t2802, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2802_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2802_TI, offsetof(t2802, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2802_FIs[] =
{
	&t2802_f0_FieldInfo,
	&t2802_f1_FieldInfo,
	NULL
};
extern MethodInfo m15904_MI;
static PropertyInfo t2802____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2802_TI, "System.Collections.IEnumerator.Current", &m15904_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15907_MI;
static PropertyInfo t2802____Current_PropertyInfo = 
{
	&t2802_TI, "Current", &m15907_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2802_PIs[] =
{
	&t2802____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2802____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2802_m15903_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2802_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15903_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2802_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2802_m15903_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15904_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2802_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15905_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2802_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15906_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2802_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2802_TI;
extern Il2CppType t1516_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15907_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2802_TI, &t1516_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2802_MIs[] =
{
	&m15903_MI,
	&m15904_MI,
	&m15905_MI,
	&m15906_MI,
	&m15907_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15904_MI;
extern MethodInfo m15906_MI;
extern MethodInfo m15905_MI;
extern MethodInfo m15907_MI;
static MethodInfo* t2802_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15904_MI,
	&m15906_MI,
	&m15905_MI,
	&m15907_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3722_TI;
static TypeInfo* t2802_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3722_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3722_TI;
static Il2CppInterfaceOffsetPair t2802_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3722_TI, 7},
};
extern MethodInfo m15907_MI;
extern TypeInfo t1516_TI;
extern MethodInfo m21619_MI;
static void* t2802_RGCTXData[3] = 
{
	&m15907_MI,
	&t1516_TI,
	&m21619_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2802_0_0_0;
extern Il2CppType t2802_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2802_TI;
extern Il2CppGenericClass t2802_GC;
extern TypeInfo t29_TI;
TypeInfo t2802_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2802_MIs, t2802_PIs, t2802_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2802_TI, t2802_ITIs, t2802_VT, &EmptyCustomAttributesCache, &t2802_TI, &t2802_0_0_0, &t2802_1_0_0, t2802_IOs, &t2802_GC, NULL, NULL, NULL, t2802_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2802)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4935_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo m28557_MI;
extern MethodInfo m28558_MI;
static PropertyInfo t4935____Item_PropertyInfo = 
{
	&t4935_TI, "Item", &m28557_MI, &m28558_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4935_PIs[] =
{
	&t4935____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1516_0_0_0;
static ParameterInfo t4935_m28559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1516_0_0_0},
};
extern TypeInfo t4935_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28559_MI = 
{
	"IndexOf", NULL, &t4935_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4935_m28559_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1516_0_0_0;
static ParameterInfo t4935_m28560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1516_0_0_0},
};
extern TypeInfo t4935_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28560_MI = 
{
	"Insert", NULL, &t4935_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4935_m28560_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4935_m28561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4935_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28561_MI = 
{
	"RemoveAt", NULL, &t4935_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4935_m28561_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4935_m28557_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4935_TI;
extern Il2CppType t1516_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28557_MI = 
{
	"get_Item", NULL, &t4935_TI, &t1516_0_0_0, RuntimeInvoker_t28_t47, t4935_m28557_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1516_0_0_0;
static ParameterInfo t4935_m28558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1516_0_0_0},
};
extern TypeInfo t4935_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28558_MI = 
{
	"set_Item", NULL, &t4935_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4935_m28558_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4935_MIs[] =
{
	&m28559_MI,
	&m28560_MI,
	&m28561_MI,
	&m28557_MI,
	&m28558_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4934_TI;
extern TypeInfo t4936_TI;
static TypeInfo* t4935_ITIs[] = 
{
	&t611_TI,
	&t4934_TI,
	&t4936_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4935_0_0_0;
extern Il2CppType t4935_1_0_0;
struct t4935;
extern TypeInfo t4935_TI;
extern Il2CppGenericClass t4935_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4935_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4935_MIs, t4935_PIs, NULL, NULL, NULL, NULL, NULL, &t4935_TI, t4935_ITIs, NULL, &t1418__CustomAttributeCache, &t4935_TI, &t4935_0_0_0, &t4935_1_0_0, NULL, &t4935_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3723_TI;

#include "t441.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo m28562_MI;
static PropertyInfo t3723____Current_PropertyInfo = 
{
	&t3723_TI, "Current", &m28562_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3723_PIs[] =
{
	&t3723____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3723_TI;
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28562_MI = 
{
	"get_Current", NULL, &t3723_TI, &t441_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3723_MIs[] =
{
	&m28562_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3723_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3723_0_0_0;
extern Il2CppType t3723_1_0_0;
struct t3723;
extern TypeInfo t3723_TI;
extern Il2CppGenericClass t3723_GC;
TypeInfo t3723_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3723_MIs, t3723_PIs, NULL, NULL, NULL, NULL, NULL, &t3723_TI, t3723_ITIs, NULL, &EmptyCustomAttributesCache, &t3723_TI, &t3723_0_0_0, &t3723_1_0_0, NULL, &t3723_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2803.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2803_TI;
#include "t2803MD.h"

extern TypeInfo t2803_TI;
extern TypeInfo t441_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15912_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21630_MI;
struct t29;
#define m21630(__this, p0, method) (t441 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21630_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2803_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2803_TI, offsetof(t2803, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2803_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2803_TI, offsetof(t2803, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2803_FIs[] =
{
	&t2803_f0_FieldInfo,
	&t2803_f1_FieldInfo,
	NULL
};
extern MethodInfo m15909_MI;
static PropertyInfo t2803____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2803_TI, "System.Collections.IEnumerator.Current", &m15909_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15912_MI;
static PropertyInfo t2803____Current_PropertyInfo = 
{
	&t2803_TI, "Current", &m15912_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2803_PIs[] =
{
	&t2803____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2803____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2803_m15908_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2803_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15908_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2803_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2803_m15908_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15909_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2803_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15910_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2803_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15911_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2803_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2803_TI;
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15912_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2803_TI, &t441_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2803_MIs[] =
{
	&m15908_MI,
	&m15909_MI,
	&m15910_MI,
	&m15911_MI,
	&m15912_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15909_MI;
extern MethodInfo m15911_MI;
extern MethodInfo m15910_MI;
extern MethodInfo m15912_MI;
static MethodInfo* t2803_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15909_MI,
	&m15911_MI,
	&m15910_MI,
	&m15912_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3723_TI;
static TypeInfo* t2803_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3723_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3723_TI;
static Il2CppInterfaceOffsetPair t2803_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3723_TI, 7},
};
extern MethodInfo m15912_MI;
extern TypeInfo t441_TI;
extern MethodInfo m21630_MI;
static void* t2803_RGCTXData[3] = 
{
	&m15912_MI,
	&t441_TI,
	&m21630_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2803_0_0_0;
extern Il2CppType t2803_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2803_TI;
extern Il2CppGenericClass t2803_GC;
extern TypeInfo t29_TI;
TypeInfo t2803_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2803_MIs, t2803_PIs, t2803_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2803_TI, t2803_ITIs, t2803_VT, &EmptyCustomAttributesCache, &t2803_TI, &t2803_0_0_0, &t2803_1_0_0, t2803_IOs, &t2803_GC, NULL, NULL, NULL, t2803_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2803)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4937_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo m28563_MI;
static PropertyInfo t4937____Count_PropertyInfo = 
{
	&t4937_TI, "Count", &m28563_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28564_MI;
static PropertyInfo t4937____IsReadOnly_PropertyInfo = 
{
	&t4937_TI, "IsReadOnly", &m28564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4937_PIs[] =
{
	&t4937____Count_PropertyInfo,
	&t4937____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4937_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28563_MI = 
{
	"get_Count", NULL, &t4937_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4937_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28564_MI = 
{
	"get_IsReadOnly", NULL, &t4937_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t441_0_0_0;
static ParameterInfo t4937_m28565_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28565_MI = 
{
	"Add", NULL, &t4937_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4937_m28565_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4937_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28566_MI = 
{
	"Clear", NULL, &t4937_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t441_0_0_0;
static ParameterInfo t4937_m28567_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28567_MI = 
{
	"Contains", NULL, &t4937_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4937_m28567_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3053_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4937_m28568_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3053_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28568_MI = 
{
	"CopyTo", NULL, &t4937_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4937_m28568_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t441_0_0_0;
static ParameterInfo t4937_m28569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern TypeInfo t4937_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28569_MI = 
{
	"Remove", NULL, &t4937_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4937_m28569_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4937_MIs[] =
{
	&m28563_MI,
	&m28564_MI,
	&m28565_MI,
	&m28566_MI,
	&m28567_MI,
	&m28568_MI,
	&m28569_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4939_TI;
static TypeInfo* t4937_ITIs[] = 
{
	&t611_TI,
	&t4939_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4937_0_0_0;
extern Il2CppType t4937_1_0_0;
struct t4937;
extern TypeInfo t4937_TI;
extern Il2CppGenericClass t4937_GC;
TypeInfo t4937_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4937_MIs, t4937_PIs, NULL, NULL, NULL, NULL, NULL, &t4937_TI, t4937_ITIs, NULL, &EmptyCustomAttributesCache, &t4937_TI, &t4937_0_0_0, &t4937_1_0_0, NULL, &t4937_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4939_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCompanyAttribute>
extern TypeInfo t4939_TI;
extern Il2CppType t3723_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28570_MI = 
{
	"GetEnumerator", NULL, &t4939_TI, &t3723_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4939_MIs[] =
{
	&m28570_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4939_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4939_0_0_0;
extern Il2CppType t4939_1_0_0;
struct t4939;
extern TypeInfo t4939_TI;
extern Il2CppGenericClass t4939_GC;
TypeInfo t4939_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4939_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4939_TI, t4939_ITIs, NULL, &EmptyCustomAttributesCache, &t4939_TI, &t4939_0_0_0, &t4939_1_0_0, NULL, &t4939_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4938_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo m28571_MI;
extern MethodInfo m28572_MI;
static PropertyInfo t4938____Item_PropertyInfo = 
{
	&t4938_TI, "Item", &m28571_MI, &m28572_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4938_PIs[] =
{
	&t4938____Item_PropertyInfo,
	NULL
};
extern Il2CppType t441_0_0_0;
static ParameterInfo t4938_m28573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern TypeInfo t4938_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28573_MI = 
{
	"IndexOf", NULL, &t4938_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4938_m28573_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t441_0_0_0;
static ParameterInfo t4938_m28574_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern TypeInfo t4938_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28574_MI = 
{
	"Insert", NULL, &t4938_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4938_m28574_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4938_m28575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4938_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28575_MI = 
{
	"RemoveAt", NULL, &t4938_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4938_m28575_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4938_m28571_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4938_TI;
extern Il2CppType t441_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28571_MI = 
{
	"get_Item", NULL, &t4938_TI, &t441_0_0_0, RuntimeInvoker_t28_t47, t4938_m28571_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t441_0_0_0;
static ParameterInfo t4938_m28572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t441_0_0_0},
};
extern TypeInfo t4938_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28572_MI = 
{
	"set_Item", NULL, &t4938_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4938_m28572_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4938_MIs[] =
{
	&m28573_MI,
	&m28574_MI,
	&m28575_MI,
	&m28571_MI,
	&m28572_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4937_TI;
extern TypeInfo t4939_TI;
static TypeInfo* t4938_ITIs[] = 
{
	&t611_TI,
	&t4937_TI,
	&t4939_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4938_0_0_0;
extern Il2CppType t4938_1_0_0;
struct t4938;
extern TypeInfo t4938_TI;
extern Il2CppGenericClass t4938_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4938_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4938_MIs, t4938_PIs, NULL, NULL, NULL, NULL, NULL, &t4938_TI, t4938_ITIs, NULL, &t1418__CustomAttributeCache, &t4938_TI, &t4938_0_0_0, &t4938_1_0_0, NULL, &t4938_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3724_TI;

#include "t440.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>
extern MethodInfo m28576_MI;
static PropertyInfo t3724____Current_PropertyInfo = 
{
	&t3724_TI, "Current", &m28576_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3724_PIs[] =
{
	&t3724____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3724_TI;
extern Il2CppType t440_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28576_MI = 
{
	"get_Current", NULL, &t3724_TI, &t440_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3724_MIs[] =
{
	&m28576_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3724_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3724_0_0_0;
extern Il2CppType t3724_1_0_0;
struct t3724;
extern TypeInfo t3724_TI;
extern Il2CppGenericClass t3724_GC;
TypeInfo t3724_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3724_MIs, t3724_PIs, NULL, NULL, NULL, NULL, NULL, &t3724_TI, t3724_ITIs, NULL, &EmptyCustomAttributesCache, &t3724_TI, &t3724_0_0_0, &t3724_1_0_0, NULL, &t3724_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2804.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2804_TI;
#include "t2804MD.h"

extern TypeInfo t2804_TI;
extern TypeInfo t440_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15917_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21641_MI;
struct t29;
#define m21641(__this, p0, method) (t440 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21641_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2804_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2804_TI, offsetof(t2804, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2804_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2804_TI, offsetof(t2804, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2804_FIs[] =
{
	&t2804_f0_FieldInfo,
	&t2804_f1_FieldInfo,
	NULL
};
extern MethodInfo m15914_MI;
static PropertyInfo t2804____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2804_TI, "System.Collections.IEnumerator.Current", &m15914_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15917_MI;
static PropertyInfo t2804____Current_PropertyInfo = 
{
	&t2804_TI, "Current", &m15917_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2804_PIs[] =
{
	&t2804____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2804____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2804_m15913_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2804_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15913_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2804_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2804_m15913_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15914_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2804_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15915_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2804_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15916_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2804_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2804_TI;
extern Il2CppType t440_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15917_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2804_TI, &t440_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2804_MIs[] =
{
	&m15913_MI,
	&m15914_MI,
	&m15915_MI,
	&m15916_MI,
	&m15917_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15914_MI;
extern MethodInfo m15916_MI;
extern MethodInfo m15915_MI;
extern MethodInfo m15917_MI;
static MethodInfo* t2804_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15914_MI,
	&m15916_MI,
	&m15915_MI,
	&m15917_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3724_TI;
static TypeInfo* t2804_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3724_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3724_TI;
static Il2CppInterfaceOffsetPair t2804_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3724_TI, 7},
};
extern MethodInfo m15917_MI;
extern TypeInfo t440_TI;
extern MethodInfo m21641_MI;
static void* t2804_RGCTXData[3] = 
{
	&m15917_MI,
	&t440_TI,
	&m21641_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2804_0_0_0;
extern Il2CppType t2804_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2804_TI;
extern Il2CppGenericClass t2804_GC;
extern TypeInfo t29_TI;
TypeInfo t2804_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2804_MIs, t2804_PIs, t2804_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2804_TI, t2804_ITIs, t2804_VT, &EmptyCustomAttributesCache, &t2804_TI, &t2804_0_0_0, &t2804_1_0_0, t2804_IOs, &t2804_GC, NULL, NULL, NULL, t2804_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2804)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4940_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>
extern MethodInfo m28577_MI;
static PropertyInfo t4940____Count_PropertyInfo = 
{
	&t4940_TI, "Count", &m28577_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28578_MI;
static PropertyInfo t4940____IsReadOnly_PropertyInfo = 
{
	&t4940_TI, "IsReadOnly", &m28578_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4940_PIs[] =
{
	&t4940____Count_PropertyInfo,
	&t4940____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4940_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28577_MI = 
{
	"get_Count", NULL, &t4940_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4940_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28578_MI = 
{
	"get_IsReadOnly", NULL, &t4940_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t440_0_0_0;
static ParameterInfo t4940_m28579_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t440_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28579_MI = 
{
	"Add", NULL, &t4940_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4940_m28579_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4940_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28580_MI = 
{
	"Clear", NULL, &t4940_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t440_0_0_0;
static ParameterInfo t4940_m28581_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t440_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28581_MI = 
{
	"Contains", NULL, &t4940_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4940_m28581_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3054_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4940_m28582_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3054_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28582_MI = 
{
	"CopyTo", NULL, &t4940_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4940_m28582_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t440_0_0_0;
static ParameterInfo t4940_m28583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t440_0_0_0},
};
extern TypeInfo t4940_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28583_MI = 
{
	"Remove", NULL, &t4940_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4940_m28583_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4940_MIs[] =
{
	&m28577_MI,
	&m28578_MI,
	&m28579_MI,
	&m28580_MI,
	&m28581_MI,
	&m28582_MI,
	&m28583_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4942_TI;
static TypeInfo* t4940_ITIs[] = 
{
	&t611_TI,
	&t4942_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4940_0_0_0;
extern Il2CppType t4940_1_0_0;
struct t4940;
extern TypeInfo t4940_TI;
extern Il2CppGenericClass t4940_GC;
TypeInfo t4940_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4940_MIs, t4940_PIs, NULL, NULL, NULL, NULL, NULL, &t4940_TI, t4940_ITIs, NULL, &EmptyCustomAttributesCache, &t4940_TI, &t4940_0_0_0, &t4940_1_0_0, NULL, &t4940_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4942_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyConfigurationAttribute>
extern TypeInfo t4942_TI;
extern Il2CppType t3724_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28584_MI = 
{
	"GetEnumerator", NULL, &t4942_TI, &t3724_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4942_MIs[] =
{
	&m28584_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4942_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4942_0_0_0;
extern Il2CppType t4942_1_0_0;
struct t4942;
extern TypeInfo t4942_TI;
extern Il2CppGenericClass t4942_GC;
TypeInfo t4942_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4942_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4942_TI, t4942_ITIs, NULL, &EmptyCustomAttributesCache, &t4942_TI, &t4942_0_0_0, &t4942_1_0_0, NULL, &t4942_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4941_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>
extern MethodInfo m28585_MI;
extern MethodInfo m28586_MI;
static PropertyInfo t4941____Item_PropertyInfo = 
{
	&t4941_TI, "Item", &m28585_MI, &m28586_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4941_PIs[] =
{
	&t4941____Item_PropertyInfo,
	NULL
};
extern Il2CppType t440_0_0_0;
static ParameterInfo t4941_m28587_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t440_0_0_0},
};
extern TypeInfo t4941_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28587_MI = 
{
	"IndexOf", NULL, &t4941_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4941_m28587_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t440_0_0_0;
static ParameterInfo t4941_m28588_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t440_0_0_0},
};
extern TypeInfo t4941_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28588_MI = 
{
	"Insert", NULL, &t4941_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4941_m28588_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4941_m28589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4941_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28589_MI = 
{
	"RemoveAt", NULL, &t4941_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4941_m28589_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4941_m28585_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4941_TI;
extern Il2CppType t440_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28585_MI = 
{
	"get_Item", NULL, &t4941_TI, &t440_0_0_0, RuntimeInvoker_t28_t47, t4941_m28585_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t440_0_0_0;
static ParameterInfo t4941_m28586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t440_0_0_0},
};
extern TypeInfo t4941_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28586_MI = 
{
	"set_Item", NULL, &t4941_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4941_m28586_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4941_MIs[] =
{
	&m28587_MI,
	&m28588_MI,
	&m28589_MI,
	&m28585_MI,
	&m28586_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4940_TI;
extern TypeInfo t4942_TI;
static TypeInfo* t4941_ITIs[] = 
{
	&t611_TI,
	&t4940_TI,
	&t4942_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4941_0_0_0;
extern Il2CppType t4941_1_0_0;
struct t4941;
extern TypeInfo t4941_TI;
extern Il2CppGenericClass t4941_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4941_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4941_MIs, t4941_PIs, NULL, NULL, NULL, NULL, NULL, &t4941_TI, t4941_ITIs, NULL, &t1418__CustomAttributeCache, &t4941_TI, &t4941_0_0_0, &t4941_1_0_0, NULL, &t4941_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3725_TI;

#include "t443.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>
extern MethodInfo m28590_MI;
static PropertyInfo t3725____Current_PropertyInfo = 
{
	&t3725_TI, "Current", &m28590_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3725_PIs[] =
{
	&t3725____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3725_TI;
extern Il2CppType t443_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28590_MI = 
{
	"get_Current", NULL, &t3725_TI, &t443_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3725_MIs[] =
{
	&m28590_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3725_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3725_0_0_0;
extern Il2CppType t3725_1_0_0;
struct t3725;
extern TypeInfo t3725_TI;
extern Il2CppGenericClass t3725_GC;
TypeInfo t3725_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3725_MIs, t3725_PIs, NULL, NULL, NULL, NULL, NULL, &t3725_TI, t3725_ITIs, NULL, &EmptyCustomAttributesCache, &t3725_TI, &t3725_0_0_0, &t3725_1_0_0, NULL, &t3725_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2805_TI;
#include "t2805MD.h"

extern TypeInfo t2805_TI;
extern TypeInfo t443_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15922_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21652_MI;
struct t29;
#define m21652(__this, p0, method) (t443 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21652_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2805_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2805_TI, offsetof(t2805, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2805_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2805_TI, offsetof(t2805, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2805_FIs[] =
{
	&t2805_f0_FieldInfo,
	&t2805_f1_FieldInfo,
	NULL
};
extern MethodInfo m15919_MI;
static PropertyInfo t2805____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2805_TI, "System.Collections.IEnumerator.Current", &m15919_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15922_MI;
static PropertyInfo t2805____Current_PropertyInfo = 
{
	&t2805_TI, "Current", &m15922_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2805_PIs[] =
{
	&t2805____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2805____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2805_m15918_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2805_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15918_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2805_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2805_m15918_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15919_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2805_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15920_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2805_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15921_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2805_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2805_TI;
extern Il2CppType t443_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15922_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2805_TI, &t443_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2805_MIs[] =
{
	&m15918_MI,
	&m15919_MI,
	&m15920_MI,
	&m15921_MI,
	&m15922_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15919_MI;
extern MethodInfo m15921_MI;
extern MethodInfo m15920_MI;
extern MethodInfo m15922_MI;
static MethodInfo* t2805_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15919_MI,
	&m15921_MI,
	&m15920_MI,
	&m15922_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3725_TI;
static TypeInfo* t2805_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3725_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3725_TI;
static Il2CppInterfaceOffsetPair t2805_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3725_TI, 7},
};
extern MethodInfo m15922_MI;
extern TypeInfo t443_TI;
extern MethodInfo m21652_MI;
static void* t2805_RGCTXData[3] = 
{
	&m15922_MI,
	&t443_TI,
	&m21652_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2805_0_0_0;
extern Il2CppType t2805_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2805_TI;
extern Il2CppGenericClass t2805_GC;
extern TypeInfo t29_TI;
TypeInfo t2805_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2805_MIs, t2805_PIs, t2805_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2805_TI, t2805_ITIs, t2805_VT, &EmptyCustomAttributesCache, &t2805_TI, &t2805_0_0_0, &t2805_1_0_0, t2805_IOs, &t2805_GC, NULL, NULL, NULL, t2805_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2805)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4943_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>
extern MethodInfo m28591_MI;
static PropertyInfo t4943____Count_PropertyInfo = 
{
	&t4943_TI, "Count", &m28591_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28592_MI;
static PropertyInfo t4943____IsReadOnly_PropertyInfo = 
{
	&t4943_TI, "IsReadOnly", &m28592_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4943_PIs[] =
{
	&t4943____Count_PropertyInfo,
	&t4943____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4943_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28591_MI = 
{
	"get_Count", NULL, &t4943_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4943_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28592_MI = 
{
	"get_IsReadOnly", NULL, &t4943_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t443_0_0_0;
static ParameterInfo t4943_m28593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t443_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28593_MI = 
{
	"Add", NULL, &t4943_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4943_m28593_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4943_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28594_MI = 
{
	"Clear", NULL, &t4943_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t443_0_0_0;
static ParameterInfo t4943_m28595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t443_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28595_MI = 
{
	"Contains", NULL, &t4943_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4943_m28595_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3055_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4943_m28596_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3055_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28596_MI = 
{
	"CopyTo", NULL, &t4943_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4943_m28596_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t443_0_0_0;
static ParameterInfo t4943_m28597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t443_0_0_0},
};
extern TypeInfo t4943_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28597_MI = 
{
	"Remove", NULL, &t4943_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4943_m28597_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4943_MIs[] =
{
	&m28591_MI,
	&m28592_MI,
	&m28593_MI,
	&m28594_MI,
	&m28595_MI,
	&m28596_MI,
	&m28597_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4945_TI;
static TypeInfo* t4943_ITIs[] = 
{
	&t611_TI,
	&t4945_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4943_0_0_0;
extern Il2CppType t4943_1_0_0;
struct t4943;
extern TypeInfo t4943_TI;
extern Il2CppGenericClass t4943_GC;
TypeInfo t4943_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4943_MIs, t4943_PIs, NULL, NULL, NULL, NULL, NULL, &t4943_TI, t4943_ITIs, NULL, &EmptyCustomAttributesCache, &t4943_TI, &t4943_0_0_0, &t4943_1_0_0, NULL, &t4943_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4945_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCopyrightAttribute>
extern TypeInfo t4945_TI;
extern Il2CppType t3725_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28598_MI = 
{
	"GetEnumerator", NULL, &t4945_TI, &t3725_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4945_MIs[] =
{
	&m28598_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4945_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4945_0_0_0;
extern Il2CppType t4945_1_0_0;
struct t4945;
extern TypeInfo t4945_TI;
extern Il2CppGenericClass t4945_GC;
TypeInfo t4945_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4945_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4945_TI, t4945_ITIs, NULL, &EmptyCustomAttributesCache, &t4945_TI, &t4945_0_0_0, &t4945_1_0_0, NULL, &t4945_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4944_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>
extern MethodInfo m28599_MI;
extern MethodInfo m28600_MI;
static PropertyInfo t4944____Item_PropertyInfo = 
{
	&t4944_TI, "Item", &m28599_MI, &m28600_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4944_PIs[] =
{
	&t4944____Item_PropertyInfo,
	NULL
};
extern Il2CppType t443_0_0_0;
static ParameterInfo t4944_m28601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t443_0_0_0},
};
extern TypeInfo t4944_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28601_MI = 
{
	"IndexOf", NULL, &t4944_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4944_m28601_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t443_0_0_0;
static ParameterInfo t4944_m28602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t443_0_0_0},
};
extern TypeInfo t4944_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28602_MI = 
{
	"Insert", NULL, &t4944_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4944_m28602_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4944_m28603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4944_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28603_MI = 
{
	"RemoveAt", NULL, &t4944_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4944_m28603_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4944_m28599_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4944_TI;
extern Il2CppType t443_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28599_MI = 
{
	"get_Item", NULL, &t4944_TI, &t443_0_0_0, RuntimeInvoker_t28_t47, t4944_m28599_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t443_0_0_0;
static ParameterInfo t4944_m28600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t443_0_0_0},
};
extern TypeInfo t4944_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28600_MI = 
{
	"set_Item", NULL, &t4944_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4944_m28600_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4944_MIs[] =
{
	&m28601_MI,
	&m28602_MI,
	&m28603_MI,
	&m28599_MI,
	&m28600_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4943_TI;
extern TypeInfo t4945_TI;
static TypeInfo* t4944_ITIs[] = 
{
	&t611_TI,
	&t4943_TI,
	&t4945_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4944_0_0_0;
extern Il2CppType t4944_1_0_0;
struct t4944;
extern TypeInfo t4944_TI;
extern Il2CppGenericClass t4944_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4944_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4944_MIs, t4944_PIs, NULL, NULL, NULL, NULL, NULL, &t4944_TI, t4944_ITIs, NULL, &t1418__CustomAttributeCache, &t4944_TI, &t4944_0_0_0, &t4944_1_0_0, NULL, &t4944_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3726_TI;

#include "t696.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo m28604_MI;
static PropertyInfo t3726____Current_PropertyInfo = 
{
	&t3726_TI, "Current", &m28604_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3726_PIs[] =
{
	&t3726____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3726_TI;
extern Il2CppType t696_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28604_MI = 
{
	"get_Current", NULL, &t3726_TI, &t696_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3726_MIs[] =
{
	&m28604_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3726_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3726_0_0_0;
extern Il2CppType t3726_1_0_0;
struct t3726;
extern TypeInfo t3726_TI;
extern Il2CppGenericClass t3726_GC;
TypeInfo t3726_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3726_MIs, t3726_PIs, NULL, NULL, NULL, NULL, NULL, &t3726_TI, t3726_ITIs, NULL, &EmptyCustomAttributesCache, &t3726_TI, &t3726_0_0_0, &t3726_1_0_0, NULL, &t3726_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2806.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2806_TI;
#include "t2806MD.h"

extern TypeInfo t2806_TI;
extern TypeInfo t696_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m15927_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m21663_MI;
struct t29;
#define m21663(__this, p0, method) (t696 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m21663_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern Il2CppType t29_0_0_1;
FieldInfo t2806_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2806_TI, offsetof(t2806, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2806_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2806_TI, offsetof(t2806, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2806_FIs[] =
{
	&t2806_f0_FieldInfo,
	&t2806_f1_FieldInfo,
	NULL
};
extern MethodInfo m15924_MI;
static PropertyInfo t2806____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2806_TI, "System.Collections.IEnumerator.Current", &m15924_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m15927_MI;
static PropertyInfo t2806____Current_PropertyInfo = 
{
	&t2806_TI, "Current", &m15927_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2806_PIs[] =
{
	&t2806____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2806____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2806_m15923_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2806_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15923_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2806_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2806_m15923_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15924_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2806_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15925_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2806_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m15926_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2806_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2806_TI;
extern Il2CppType t696_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m15927_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2806_TI, &t696_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2806_MIs[] =
{
	&m15923_MI,
	&m15924_MI,
	&m15925_MI,
	&m15926_MI,
	&m15927_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m15924_MI;
extern MethodInfo m15926_MI;
extern MethodInfo m15925_MI;
extern MethodInfo m15927_MI;
static MethodInfo* t2806_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m15924_MI,
	&m15926_MI,
	&m15925_MI,
	&m15927_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3726_TI;
static TypeInfo* t2806_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3726_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3726_TI;
static Il2CppInterfaceOffsetPair t2806_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3726_TI, 7},
};
extern MethodInfo m15927_MI;
extern TypeInfo t696_TI;
extern MethodInfo m21663_MI;
static void* t2806_RGCTXData[3] = 
{
	&m15927_MI,
	&t696_TI,
	&m21663_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2806_0_0_0;
extern Il2CppType t2806_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2806_TI;
extern Il2CppGenericClass t2806_GC;
extern TypeInfo t29_TI;
TypeInfo t2806_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2806_MIs, t2806_PIs, t2806_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2806_TI, t2806_ITIs, t2806_VT, &EmptyCustomAttributesCache, &t2806_TI, &t2806_0_0_0, &t2806_1_0_0, t2806_IOs, &t2806_GC, NULL, NULL, NULL, t2806_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2806)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4946_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo m28605_MI;
static PropertyInfo t4946____Count_PropertyInfo = 
{
	&t4946_TI, "Count", &m28605_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m28606_MI;
static PropertyInfo t4946____IsReadOnly_PropertyInfo = 
{
	&t4946_TI, "IsReadOnly", &m28606_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4946_PIs[] =
{
	&t4946____Count_PropertyInfo,
	&t4946____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4946_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28605_MI = 
{
	"get_Count", NULL, &t4946_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4946_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m28606_MI = 
{
	"get_IsReadOnly", NULL, &t4946_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t696_0_0_0;
static ParameterInfo t4946_m28607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t696_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28607_MI = 
{
	"Add", NULL, &t4946_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4946_m28607_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4946_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28608_MI = 
{
	"Clear", NULL, &t4946_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t696_0_0_0;
static ParameterInfo t4946_m28609_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t696_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28609_MI = 
{
	"Contains", NULL, &t4946_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4946_m28609_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3056_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4946_m28610_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3056_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28610_MI = 
{
	"CopyTo", NULL, &t4946_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4946_m28610_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t696_0_0_0;
static ParameterInfo t4946_m28611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t696_0_0_0},
};
extern TypeInfo t4946_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28611_MI = 
{
	"Remove", NULL, &t4946_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4946_m28611_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4946_MIs[] =
{
	&m28605_MI,
	&m28606_MI,
	&m28607_MI,
	&m28608_MI,
	&m28609_MI,
	&m28610_MI,
	&m28611_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4948_TI;
static TypeInfo* t4946_ITIs[] = 
{
	&t611_TI,
	&t4948_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4946_0_0_0;
extern Il2CppType t4946_1_0_0;
struct t4946;
extern TypeInfo t4946_TI;
extern Il2CppGenericClass t4946_GC;
TypeInfo t4946_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4946_MIs, t4946_PIs, NULL, NULL, NULL, NULL, NULL, &t4946_TI, t4946_ITIs, NULL, &EmptyCustomAttributesCache, &t4946_TI, &t4946_0_0_0, &t4946_1_0_0, NULL, &t4946_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4948_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern TypeInfo t4948_TI;
extern Il2CppType t3726_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28612_MI = 
{
	"GetEnumerator", NULL, &t4948_TI, &t3726_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4948_MIs[] =
{
	&m28612_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4948_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4948_0_0_0;
extern Il2CppType t4948_1_0_0;
struct t4948;
extern TypeInfo t4948_TI;
extern Il2CppGenericClass t4948_GC;
TypeInfo t4948_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4948_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4948_TI, t4948_ITIs, NULL, &EmptyCustomAttributesCache, &t4948_TI, &t4948_0_0_0, &t4948_1_0_0, NULL, &t4948_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4947_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo m28613_MI;
extern MethodInfo m28614_MI;
static PropertyInfo t4947____Item_PropertyInfo = 
{
	&t4947_TI, "Item", &m28613_MI, &m28614_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4947_PIs[] =
{
	&t4947____Item_PropertyInfo,
	NULL
};
extern Il2CppType t696_0_0_0;
static ParameterInfo t4947_m28615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t696_0_0_0},
};
extern TypeInfo t4947_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28615_MI = 
{
	"IndexOf", NULL, &t4947_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4947_m28615_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t696_0_0_0;
static ParameterInfo t4947_m28616_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t696_0_0_0},
};
extern TypeInfo t4947_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28616_MI = 
{
	"Insert", NULL, &t4947_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4947_m28616_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4947_m28617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4947_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28617_MI = 
{
	"RemoveAt", NULL, &t4947_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4947_m28617_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4947_m28613_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4947_TI;
extern Il2CppType t696_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m28613_MI = 
{
	"get_Item", NULL, &t4947_TI, &t696_0_0_0, RuntimeInvoker_t28_t47, t4947_m28613_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t696_0_0_0;
static ParameterInfo t4947_m28614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t696_0_0_0},
};
extern TypeInfo t4947_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28614_MI = 
{
	"set_Item", NULL, &t4947_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4947_m28614_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4947_MIs[] =
{
	&m28615_MI,
	&m28616_MI,
	&m28617_MI,
	&m28613_MI,
	&m28614_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4946_TI;
extern TypeInfo t4948_TI;
static TypeInfo* t4947_ITIs[] = 
{
	&t611_TI,
	&t4946_TI,
	&t4948_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4947_0_0_0;
extern Il2CppType t4947_1_0_0;
struct t4947;
extern TypeInfo t4947_TI;
extern Il2CppGenericClass t4947_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4947_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4947_MIs, t4947_PIs, NULL, NULL, NULL, NULL, NULL, &t4947_TI, t4947_ITIs, NULL, &t1418__CustomAttributeCache, &t4947_TI, &t4947_0_0_0, &t4947_1_0_0, NULL, &t4947_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3727_TI;

#include "t695.h"


// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo m28618_MI;
static PropertyInfo t3727____Current_PropertyInfo = 
{
	&t3727_TI, "Current", &m28618_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3727_PIs[] =
{
	&t3727____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3727_TI;
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m28618_MI = 
{
	"get_Current", NULL, &t3727_TI, &t695_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3727_MIs[] =
{
	&m28618_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3727_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3727_0_0_0;
extern Il2CppType t3727_1_0_0;
struct t3727;
extern TypeInfo t3727_TI;
extern Il2CppGenericClass t3727_GC;
TypeInfo t3727_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3727_MIs, t3727_PIs, NULL, NULL, NULL, NULL, NULL, &t3727_TI, t3727_ITIs, NULL, &EmptyCustomAttributesCache, &t3727_TI, &t3727_0_0_0, &t3727_1_0_0, NULL, &t3727_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
