#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1959.h"
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
extern TypeInfo t1959_TI;
#include "t1959MD.h"

#include "t28.h"
#include "t1957.h"
#include "t47.h"
#include "t1955.h"
#include "t30.h"
#include "t377.h"
#include "t31.h"
extern TypeInfo t1959_TI;
extern TypeInfo t47_TI;
extern TypeInfo t1957_TI;
extern TypeInfo t30_TI;
extern TypeInfo t31_TI;
#include "t1957MD.h"
#include "t1955MD.h"
#include "t377MD.h"
extern MethodInfo m10560_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m10521_MI;
extern MethodInfo m10563_MI;
extern MethodInfo m10557_MI;

#include "t29.h"

extern MethodInfo m10548_MI;
 void m10548 (t1959 * __this, t377 * p0, MethodInfo* method){
	{
		t1957  L_0 = m10521(p0, &m10521_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10549_MI;
 t28 * m10549 (t1959 * __this, MethodInfo* method){
	{
		t1957 * L_0 = &(__this->f0);
		int32_t L_1 = m10560(L_0, &m10560_MI);
		int32_t L_2 = L_1;
		t28 * L_3 = Box(InitializedTypeInfo(&t47_TI), &L_2);
		return L_3;
	}
}
extern MethodInfo m10550_MI;
 void m10550 (t1959 * __this, MethodInfo* method){
	{
		t1957 * L_0 = &(__this->f0);
		m10563(L_0, &m10563_MI);
		return;
	}
}
extern MethodInfo m10551_MI;
 bool m10551 (t1959 * __this, MethodInfo* method){
	{
		t1957 * L_0 = &(__this->f0);
		bool L_1 = m10557(L_0, &m10557_MI);
		return L_1;
	}
}
extern MethodInfo m10552_MI;
 int32_t m10552 (t1959 * __this, MethodInfo* method){
	{
		t1957 * L_0 = &(__this->f0);
		t1955 * L_1 = &(L_0->f3);
		int32_t L_2 = m10526(L_1, &m10526_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t1957_0_0_1;
FieldInfo t1959_f0_FieldInfo = 
{
	"host_enumerator", &t1957_0_0_1, &t1959_TI, offsetof(t1959, f0) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1959_FIs[] =
{
	&t1959_f0_FieldInfo,
	NULL
};
extern MethodInfo m10549_MI;
static PropertyInfo t1959____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1959_TI, "System.Collections.IEnumerator.Current", &m10549_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10552_MI;
static PropertyInfo t1959____Current_PropertyInfo = 
{
	&t1959_TI, "Current", &m10552_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1959_PIs[] =
{
	&t1959____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1959____Current_PropertyInfo,
	NULL
};
extern Il2CppType t377_0_0_0;
static ParameterInfo t1959_m10548_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t1959_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10548_MI = 
{
	".ctor", (methodPointerType)&m10548, &t1959_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1959_m10548_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10549_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10549, &t1959_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10550_MI = 
{
	"Dispose", (methodPointerType)&m10550, &t1959_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10551_MI = 
{
	"MoveNext", (methodPointerType)&m10551, &t1959_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1959_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10552_MI = 
{
	"get_Current", (methodPointerType)&m10552, &t1959_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1959_MIs[] =
{
	&m10548_MI,
	&m10549_MI,
	&m10550_MI,
	&m10551_MI,
	&m10552_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10549_MI;
extern MethodInfo m10551_MI;
extern MethodInfo m10550_MI;
extern MethodInfo m10552_MI;
static MethodInfo* t1959_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10549_MI,
	&m10551_MI,
	&m10550_MI,
	&m10552_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1935_TI;
static TypeInfo* t1959_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1935_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1935_TI;
static Il2CppInterfaceOffsetPair t1959_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1935_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1959_0_0_0;
extern Il2CppType t1959_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1959_TI;
extern Il2CppGenericClass t1959_GC;
extern TypeInfo t848_TI;
TypeInfo t1959_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1959_MIs, t1959_PIs, t1959_FIs, NULL, &t26_TI, NULL, &t848_TI, &t1959_TI, t1959_ITIs, t1959_VT, &EmptyCustomAttributesCache, &t1959_TI, &t1959_0_0_0, &t1959_1_0_0, t1959_IOs, &t1959_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1959)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1957_TI;

#include "t845.h"
#include "mscorlib_ArrayTypes.h"
#include "t843.h"
#include "UnityEngine.UI_ArrayTypes.h"
#include "t1304.h"
#include "t18.h"
#include "t1287.h"
extern TypeInfo t1957_TI;
extern TypeInfo t1955_TI;
extern TypeInfo t170_TI;
extern TypeInfo t47_TI;
extern TypeInfo t845_TI;
extern TypeInfo t377_TI;
extern TypeInfo t843_TI;
extern TypeInfo t1304_TI;
extern TypeInfo t1287_TI;
#include "t845MD.h"
#include "t1304MD.h"
#include "t1287MD.h"
extern MethodInfo m10562_MI;
extern MethodInfo m10524_MI;
extern MethodInfo m10526_MI;
extern MethodInfo m4480_MI;
extern MethodInfo m10559_MI;
extern MethodInfo m10561_MI;
extern MethodInfo m10523_MI;
extern MethodInfo m7238_MI;
extern MethodInfo m7034_MI;


extern MethodInfo m10553_MI;
 void m10553 (t1957 * __this, t377 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10554_MI;
 t28 * m10554 (t1957 * __this, MethodInfo* method){
	{
		m10562(__this, &m10562_MI);
		t1955  L_0 = (__this->f3);
		t1955  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1955_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10555_MI;
 t845  m10555 (t1957 * __this, MethodInfo* method){
	{
		m10562(__this, &m10562_MI);
		t1955 * L_0 = &(__this->f3);
		t28 * L_1 = m10524(L_0, &m10524_MI);
		t28 * L_2 = L_1;
		t1955 * L_3 = &(__this->f3);
		int32_t L_4 = m10526(L_3, &m10526_MI);
		int32_t L_5 = L_4;
		t28 * L_6 = Box(InitializedTypeInfo(&t47_TI), &L_5);
		t845  L_7 = {0};
		m4480(&L_7, ((t28 *)L_2), L_6, &m4480_MI);
		return L_7;
	}
}
extern MethodInfo m10556_MI;
 t28 * m10556 (t1957 * __this, MethodInfo* method){
	{
		t28 * L_0 = m10559(__this, &m10559_MI);
		t28 * L_1 = L_0;
		return ((t28 *)L_1);
	}
}
extern MethodInfo m10557_MI;
 bool m10557 (t1957 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m10561(__this, &m10561_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t377 * L_3 = (__this->f0);
		t1468* L_4 = (L_3->f5);
		int32_t L_5 = (((t843 *)(t843 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t377 * L_6 = (__this->f0);
		t1924* L_7 = (L_6->f6);
		t377 * L_8 = (__this->f0);
		t64* L_9 = (L_8->f7);
		t1955  L_10 = {0};
		m10523(&L_10, (*(t28 **)(t28 **)SZArrayLdElema(L_7, V_0)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, V_0)), &m10523_MI);
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t377 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10558_MI;
 t1955  m10558 (t1957 * __this, MethodInfo* method){
	{
		t1955  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10559_MI;
 t28 * m10559 (t1957 * __this, MethodInfo* method){
	{
		m10562(__this, &m10562_MI);
		t1955 * L_0 = &(__this->f3);
		t28 * L_1 = m10524(L_0, &m10524_MI);
		return L_1;
	}
}
extern MethodInfo m10560_MI;
 int32_t m10560 (t1957 * __this, MethodInfo* method){
	{
		m10562(__this, &m10562_MI);
		t1955 * L_0 = &(__this->f3);
		int32_t L_1 = m10526(L_0, &m10526_MI);
		return L_1;
	}
}
extern MethodInfo m10561_MI;
 void m10561 (t1957 * __this, MethodInfo* method){
	{
		t377 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1304 * L_1 = (t1304 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1304_TI));
		m7238(L_1, (t18*)NULL, &m7238_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t377 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1287 * L_5 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7034(L_5, (t18*) &_stringLiteral555, &m7034_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10562_MI;
 void m10562 (t1957 * __this, MethodInfo* method){
	{
		m10561(__this, &m10561_MI);
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1287 * L_1 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7034(L_1, (t18*) &_stringLiteral556, &m7034_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10563_MI;
 void m10563 (t1957 * __this, MethodInfo* method){
	{
		__this->f0 = (t377 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t377_0_0_1;
FieldInfo t1957_f0_FieldInfo = 
{
	"dictionary", &t377_0_0_1, &t1957_TI, offsetof(t1957, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1957_f1_FieldInfo = 
{
	"next", &t47_0_0_1, &t1957_TI, offsetof(t1957, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1957_f2_FieldInfo = 
{
	"stamp", &t47_0_0_1, &t1957_TI, offsetof(t1957, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t1955_0_0_3;
FieldInfo t1957_f3_FieldInfo = 
{
	"current", &t1955_0_0_3, &t1957_TI, offsetof(t1957, f3) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1957_FIs[] =
{
	&t1957_f0_FieldInfo,
	&t1957_f1_FieldInfo,
	&t1957_f2_FieldInfo,
	&t1957_f3_FieldInfo,
	NULL
};
extern MethodInfo m10554_MI;
static PropertyInfo t1957____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1957_TI, "System.Collections.IEnumerator.Current", &m10554_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10555_MI;
static PropertyInfo t1957____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1957_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10555_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10556_MI;
static PropertyInfo t1957____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1957_TI, "System.Collections.IDictionaryEnumerator.Key", &m10556_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10558_MI;
static PropertyInfo t1957____Current_PropertyInfo = 
{
	&t1957_TI, "Current", &m10558_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10559_MI;
static PropertyInfo t1957____CurrentKey_PropertyInfo = 
{
	&t1957_TI, "CurrentKey", &m10559_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10560_MI;
static PropertyInfo t1957____CurrentValue_PropertyInfo = 
{
	&t1957_TI, "CurrentValue", &m10560_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1957_PIs[] =
{
	&t1957____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1957____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1957____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1957____Current_PropertyInfo,
	&t1957____CurrentKey_PropertyInfo,
	&t1957____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t377_0_0_0;
static ParameterInfo t1957_m10553_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t1957_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10553_MI = 
{
	".ctor", (methodPointerType)&m10553, &t1957_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1957_m10553_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10554_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10554, &t1957_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845 (MethodInfo* method, void* obj, void** args);
MethodInfo m10555_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10555, &t1957_TI, &t845_0_0_0, RuntimeInvoker_t845, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10556_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10556, &t1957_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10557_MI = 
{
	"MoveNext", (methodPointerType)&m10557, &t1957_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t1955_0_0_0;
extern void* RuntimeInvoker_t1955 (MethodInfo* method, void* obj, void** args);
MethodInfo m10558_MI = 
{
	"get_Current", (methodPointerType)&m10558, &t1957_TI, &t1955_0_0_0, RuntimeInvoker_t1955, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t170_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10559_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10559, &t1957_TI, &t170_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10560_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10560, &t1957_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10561_MI = 
{
	"VerifyState", (methodPointerType)&m10561, &t1957_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10562_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10562, &t1957_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1957_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10563_MI = 
{
	"Dispose", (methodPointerType)&m10563, &t1957_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1957_MIs[] =
{
	&m10553_MI,
	&m10554_MI,
	&m10555_MI,
	&m10556_MI,
	&m10557_MI,
	&m10558_MI,
	&m10559_MI,
	&m10560_MI,
	&m10561_MI,
	&m10562_MI,
	&m10563_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10554_MI;
extern MethodInfo m10557_MI;
extern MethodInfo m10563_MI;
extern MethodInfo m10558_MI;
extern MethodInfo m10555_MI;
extern MethodInfo m10556_MI;
static MethodInfo* t1957_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10554_MI,
	&m10557_MI,
	&m10563_MI,
	&m10558_MI,
	&m10555_MI,
	&m10556_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1956_TI;
extern TypeInfo t851_TI;
static TypeInfo* t1957_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1956_TI,
	&t851_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1956_TI;
extern TypeInfo t851_TI;
static Il2CppInterfaceOffsetPair t1957_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1956_TI, 7},
	{ &t851_TI, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1957_0_0_0;
extern Il2CppType t1957_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1957_TI;
extern Il2CppGenericClass t1957_GC;
extern TypeInfo t850_TI;
TypeInfo t1957_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1957_MIs, t1957_PIs, t1957_FIs, NULL, &t26_TI, NULL, &t850_TI, &t1957_TI, t1957_ITIs, t1957_VT, &EmptyCustomAttributesCache, &t1957_TI, &t1957_0_0_0, &t1957_1_0_0, t1957_IOs, &t1957_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1957)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#include "t1960.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1960_TI;
#include "t1960MD.h"

#include "t49.h"
#include "t91.h"


extern MethodInfo m10564_MI;
 void m10564 (t1960 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10565_MI;
 int32_t m10565 (t1960 * __this, t28 * p0, int32_t p1, MethodInfo* method){
	typedef  int32_t (*FunctionPointerType) (t28 * __this, t28 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10565((t1960 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10566_MI;
 t28 * m10566 (t1960 * __this, t28 * p0, int32_t p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t47_TI), &p1);
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10567_MI;
 int32_t m10567 (t1960 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1960_m10564_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10564_MI = 
{
	".ctor", (methodPointerType)&m10564, &t1960_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1960_m10564_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t170_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1960_m10565_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10565_MI = 
{
	"Invoke", (methodPointerType)&m10565, &t1960_TI, &t47_0_0_0, RuntimeInvoker_t47_t28_t47, t1960_m10565_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t170_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1960_m10566_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10566_MI = 
{
	"BeginInvoke", (methodPointerType)&m10566, &t1960_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t47_t28_t28, t1960_m10566_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1960_m10567_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1960_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10567_MI = 
{
	"EndInvoke", (methodPointerType)&m10567, &t1960_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1960_m10567_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1960_MIs[] =
{
	&m10564_MI,
	&m10565_MI,
	&m10566_MI,
	&m10567_MI,
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
extern MethodInfo m10565_MI;
extern MethodInfo m10566_MI;
extern MethodInfo m10567_MI;
static MethodInfo* t1960_VT[] =
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
	&m10565_MI,
	&m10566_MI,
	&m10567_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1960_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1960_0_0_0;
extern Il2CppType t1960_1_0_0;
extern TypeInfo t221_TI;
struct t1960;
extern TypeInfo t1960_TI;
extern Il2CppGenericClass t1960_GC;
extern TypeInfo t850_TI;
TypeInfo t1960_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1960_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1960_TI, NULL, t1960_VT, &EmptyCustomAttributesCache, &t1960_TI, &t1960_0_0_0, &t1960_1_0_0, t1960_IOs, &t1960_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1960), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1952.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1952_TI;
#include "t1952MD.h"



extern MethodInfo m10568_MI;
 void m10568 (t1952 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10569_MI;
 t845  m10569 (t1952 * __this, t28 * p0, int32_t p1, MethodInfo* method){
	typedef  t845  (*FunctionPointerType) (t28 * __this, t28 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10569((t1952 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10570_MI;
 t28 * m10570 (t1952 * __this, t28 * p0, int32_t p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t47_TI), &p1);
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10571_MI;
 t845  m10571 (t1952 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t845 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1952_m10568_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10568_MI = 
{
	".ctor", (methodPointerType)&m10568, &t1952_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1952_m10568_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t170_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1952_m10569_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10569_MI = 
{
	"Invoke", (methodPointerType)&m10569, &t1952_TI, &t845_0_0_0, RuntimeInvoker_t845_t28_t47, t1952_m10569_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t170_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1952_m10570_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10570_MI = 
{
	"BeginInvoke", (methodPointerType)&m10570, &t1952_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t47_t28_t28, t1952_m10570_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1952_m10571_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1952_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10571_MI = 
{
	"EndInvoke", (methodPointerType)&m10571, &t1952_TI, &t845_0_0_0, RuntimeInvoker_t845_t28, t1952_m10571_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1952_MIs[] =
{
	&m10568_MI,
	&m10569_MI,
	&m10570_MI,
	&m10571_MI,
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
extern MethodInfo m10569_MI;
extern MethodInfo m10570_MI;
extern MethodInfo m10571_MI;
static MethodInfo* t1952_VT[] =
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
	&m10569_MI,
	&m10570_MI,
	&m10571_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1952_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1952_0_0_0;
extern Il2CppType t1952_1_0_0;
extern TypeInfo t221_TI;
struct t1952;
extern TypeInfo t1952_TI;
extern Il2CppGenericClass t1952_GC;
extern TypeInfo t850_TI;
TypeInfo t1952_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1952_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1952_TI, NULL, t1952_VT, &EmptyCustomAttributesCache, &t1952_TI, &t1952_0_0_0, &t1952_1_0_0, t1952_IOs, &t1952_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1952), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1961.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1961_TI;
#include "t1961MD.h"



extern MethodInfo m10572_MI;
 void m10572 (t1961 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10573_MI;
 t1955  m10573 (t1961 * __this, t28 * p0, int32_t p1, MethodInfo* method){
	typedef  t1955  (*FunctionPointerType) (t28 * __this, t28 * p0, int32_t p1, MethodInfo* method);
	if (__this->f9)
		m10573((t1961 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10574_MI;
 t28 * m10574 (t1961 * __this, t28 * p0, int32_t p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t47_TI), &p1);
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10575_MI;
 t1955  m10575 (t1961 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1955 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1961_m10572_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10572_MI = 
{
	".ctor", (methodPointerType)&m10572, &t1961_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1961_m10572_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t170_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1961_m10573_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t1955_0_0_0;
extern void* RuntimeInvoker_t1955_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10573_MI = 
{
	"Invoke", (methodPointerType)&m10573, &t1961_TI, &t1955_0_0_0, RuntimeInvoker_t1955_t28_t47, t1961_m10573_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t170_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1961_m10574_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t170_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10574_MI = 
{
	"BeginInvoke", (methodPointerType)&m10574, &t1961_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t47_t28_t28, t1961_m10574_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1961_m10575_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1961_TI;
extern Il2CppType t1955_0_0_0;
extern void* RuntimeInvoker_t1955_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10575_MI = 
{
	"EndInvoke", (methodPointerType)&m10575, &t1961_TI, &t1955_0_0_0, RuntimeInvoker_t1955_t28, t1961_m10575_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1961_MIs[] =
{
	&m10572_MI,
	&m10573_MI,
	&m10574_MI,
	&m10575_MI,
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
extern MethodInfo m10573_MI;
extern MethodInfo m10574_MI;
extern MethodInfo m10575_MI;
static MethodInfo* t1961_VT[] =
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
	&m10573_MI,
	&m10574_MI,
	&m10575_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1961_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1961_0_0_0;
extern Il2CppType t1961_1_0_0;
extern TypeInfo t221_TI;
struct t1961;
extern TypeInfo t1961_TI;
extern Il2CppGenericClass t1961_GC;
extern TypeInfo t850_TI;
TypeInfo t1961_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1961_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1961_TI, NULL, t1961_VT, &EmptyCustomAttributesCache, &t1961_TI, &t1961_0_0_0, &t1961_1_0_0, t1961_IOs, &t1961_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1961), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1962.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1962_TI;
#include "t1962MD.h"

extern TypeInfo t1962_TI;
extern TypeInfo t1957_TI;
extern TypeInfo t851_TI;
extern TypeInfo t845_TI;
extern TypeInfo t1955_TI;
extern TypeInfo t170_TI;
extern TypeInfo t31_TI;
#include "t28MD.h"
extern MethodInfo m7836_MI;
extern MethodInfo m10558_MI;
extern MethodInfo m10524_MI;
extern MethodInfo m10578_MI;
extern MethodInfo m203_MI;
extern MethodInfo m10521_MI;
extern MethodInfo m10557_MI;


extern MethodInfo m10576_MI;
 void m10576 (t1962 * __this, t377 * p0, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		t1957  L_0 = m10521(p0, &m10521_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10577_MI;
 bool m10577 (t1962 * __this, MethodInfo* method){
	{
		t1957 * L_0 = &(__this->f0);
		bool L_1 = m10557(L_0, &m10557_MI);
		return L_1;
	}
}
extern MethodInfo m10578_MI;
 t845  m10578 (t1962 * __this, MethodInfo* method){
	{
		t1957  L_0 = (__this->f0);
		t1957  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1957_TI), &L_1);
		t845  L_3 = (t845 )InterfaceFuncInvoker0< t845  >::Invoke(&m7836_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10579_MI;
 t28 * m10579 (t1962 * __this, MethodInfo* method){
	t1955  V_0 = {0};
	{
		t1957 * L_0 = &(__this->f0);
		t1955  L_1 = m10558(L_0, &m10558_MI);
		V_0 = L_1;
		t28 * L_2 = m10524((&V_0), &m10524_MI);
		t28 * L_3 = L_2;
		return ((t28 *)L_3);
	}
}
extern MethodInfo m10580_MI;
 t28 * m10580 (t1962 * __this, MethodInfo* method){
	{
		t845  L_0 = (t845 )VirtFuncInvoker0< t845  >::Invoke(&m10578_MI, __this);
		t845  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t845_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
extern Il2CppType t1957_0_0_1;
FieldInfo t1962_f0_FieldInfo = 
{
	"host_enumerator", &t1957_0_0_1, &t1962_TI, offsetof(t1962, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1962_FIs[] =
{
	&t1962_f0_FieldInfo,
	NULL
};
extern MethodInfo m10578_MI;
static PropertyInfo t1962____Entry_PropertyInfo = 
{
	&t1962_TI, "Entry", &m10578_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10579_MI;
static PropertyInfo t1962____Key_PropertyInfo = 
{
	&t1962_TI, "Key", &m10579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10580_MI;
static PropertyInfo t1962____Current_PropertyInfo = 
{
	&t1962_TI, "Current", &m10580_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1962_PIs[] =
{
	&t1962____Entry_PropertyInfo,
	&t1962____Key_PropertyInfo,
	&t1962____Current_PropertyInfo,
	NULL
};
extern Il2CppType t377_0_0_0;
static ParameterInfo t1962_m10576_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t377_0_0_0},
};
extern TypeInfo t1962_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10576_MI = 
{
	".ctor", (methodPointerType)&m10576, &t1962_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1962_m10576_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1962_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10577_MI = 
{
	"MoveNext", (methodPointerType)&m10577, &t1962_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1962_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845 (MethodInfo* method, void* obj, void** args);
MethodInfo m10578_MI = 
{
	"get_Entry", (methodPointerType)&m10578, &t1962_TI, &t845_0_0_0, RuntimeInvoker_t845, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1962_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10579_MI = 
{
	"get_Key", (methodPointerType)&m10579, &t1962_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1962_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10580_MI = 
{
	"get_Current", (methodPointerType)&m10580, &t1962_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1962_MIs[] =
{
	&m10576_MI,
	&m10577_MI,
	&m10578_MI,
	&m10579_MI,
	&m10580_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10580_MI;
extern MethodInfo m10577_MI;
extern MethodInfo m10578_MI;
extern MethodInfo m10579_MI;
static MethodInfo* t1962_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10580_MI,
	&m10577_MI,
	&m10578_MI,
	&m10579_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t851_TI;
static TypeInfo* t1962_ITIs[] = 
{
	&t158_TI,
	&t851_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t851_TI;
static Il2CppInterfaceOffsetPair t1962_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t851_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1962_0_0_0;
extern Il2CppType t1962_1_0_0;
extern TypeInfo t28_TI;
struct t1962;
extern TypeInfo t1962_TI;
extern Il2CppGenericClass t1962_GC;
extern TypeInfo t850_TI;
TypeInfo t1962_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1962_MIs, t1962_PIs, t1962_FIs, NULL, &t28_TI, NULL, &t850_TI, &t1962_TI, t1962_ITIs, t1962_VT, &EmptyCustomAttributesCache, &t1962_TI, &t1962_0_0_0, &t1962_1_0_0, t1962_IOs, &t1962_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1962), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#include "t179.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t179_TI;
#include "t179MD.h"

#include "t173.h"
#include "t362.h"
#include "t350.h"
#include "UnityEngine_ArrayTypes.h"
#include "t1967.h"
#include "t725.h"
#include "t726.h"
#include "t1969.h"
#include "t1966.h"
#include "t2009.h"
#include "t1971.h"
#include "t2010.h"
#include "t1251.h"
#include "t2011.h"
#include "t331.h"
#include "t2013.h"
#include "t36.h"
#include "t37.h"
extern TypeInfo t179_TI;
extern TypeInfo t30_TI;
extern TypeInfo t173_TI;
extern TypeInfo t362_TI;
extern TypeInfo t350_TI;
extern TypeInfo t1965_TI;
extern TypeInfo t47_TI;
extern TypeInfo t843_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t1968_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t2970_TI;
extern TypeInfo t845_TI;
extern TypeInfo t1966_TI;
extern TypeInfo t2009_TI;
extern TypeInfo t1971_TI;
extern TypeInfo t2010_TI;
extern TypeInfo t1251_TI;
extern TypeInfo t2011_TI;
extern TypeInfo t64_TI;
extern TypeInfo t1468_TI;
extern TypeInfo t1963_TI;
extern TypeInfo t1964_TI;
extern TypeInfo t331_TI;
extern TypeInfo t872_TI;
extern TypeInfo t2013_TI;
extern TypeInfo t5269_TI;
extern TypeInfo t36_TI;
extern TypeInfo t18_TI;
#include "t350MD.h"
#include "t1967MD.h"
#include "t1969MD.h"
#include "t1966MD.h"
#include "t2009MD.h"
#include "t1971MD.h"
#include "t2010MD.h"
#include "t1251MD.h"
#include "t2011MD.h"
#include "t29MD.h"
#include "t331MD.h"
#include "t872MD.h"
#include "t2013MD.h"
#include "t725MD.h"
#include "t36MD.h"
#include "t18MD.h"
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1968_0_0_0;
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
extern MethodInfo m10642_MI;
extern MethodInfo m10644_MI;
extern MethodInfo m10611_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m24289_MI;
extern MethodInfo m24290_MI;
extern MethodInfo m10624_MI;
extern MethodInfo m10898_MI;
extern MethodInfo m203_MI;
extern MethodInfo m10613_MI;
extern MethodInfo m10715_MI;
extern MethodInfo m10717_MI;
extern MethodInfo m1662_MI;
extern MethodInfo m10646_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10617_MI;
extern MethodInfo m10648_MI;
extern MethodInfo m10932_MI;
extern MethodInfo m18135_MI;
extern MethodInfo m10619_MI;
extern MethodInfo m10936_MI;
extern MethodInfo m18137_MI;
extern MethodInfo m10917_MI;
extern MethodInfo m10940_MI;
extern MethodInfo m6602_MI;
extern MethodInfo m10949_MI;
extern MethodInfo m10615_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m10609_MI;
extern MethodInfo m10714_MI;
extern MethodInfo m18138_MI;
extern MethodInfo m4538_MI;
extern MethodInfo m3888_MI;
extern MethodInfo m3884_MI;
extern MethodInfo m10957_MI;
extern MethodInfo m24291_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m5874_MI;
extern MethodInfo m5877_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m5864_MI;
extern MethodInfo m3974_MI;
extern MethodInfo m1878_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3943_MI;
extern MethodInfo m1660_MI;
extern MethodInfo m24292_MI;
extern MethodInfo m4480_MI;
struct t179;
 void m18135 (t179 * __this, t2970* p0, int32_t p1, t1966 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18135_MI;
struct t179;
#include "t321.h"
 void m18137 (t179 * __this, t29 * p0, int32_t p1, t2009 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18137_MI;
struct t179;
 void m18138 (t179 * __this, t1968* p0, int32_t p1, t2009 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18138_MI;


extern MethodInfo m10596_MI;
 void m10596 (t179 * __this, t1969  p0, MethodInfo* method){
	{
		t173 * L_0 = m10715((&p0), &m10715_MI);
		t362 * L_1 = m10717((&p0), &m10717_MI);
		VirtActionInvoker2< t173 *, t362 * >::Invoke(&m1662_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10597_MI;
 bool m10597 (t179 * __this, t1969  p0, MethodInfo* method){
	{
		bool L_0 = m10646(__this, p0, &m10646_MI);
		return L_0;
	}
}
extern MethodInfo m10600_MI;
 bool m10600 (t179 * __this, t1969  p0, MethodInfo* method){
	{
		bool L_0 = m10646(__this, p0, &m10646_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t173 * L_1 = m10715((&p0), &m10715_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t173 * >::Invoke(&m10637_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10619_MI;
 t1969  m10619 (t28 * __this, t173 * p0, t362 * p1, MethodInfo* method){
	{
		t1969  L_0 = {0};
		m10714(&L_0, p0, p1, &m10714_MI);
		return L_0;
	}
}
extern MethodInfo m10646_MI;
 bool m10646 (t179 * __this, t1969  p0, MethodInfo* method){
	t362 * V_0 = {0};
	{
		t173 * L_0 = m10715((&p0), &m10715_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t173 *, t362 ** >::Invoke(&m1660_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2013_TI));
		t2013 * L_2 = m10957(NULL, &m10957_MI);
		t362 * L_3 = m10717((&p0), &m10717_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t362 *, t362 * >::Invoke(&m24292_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10647_MI;
 t1971  m10647 (t179 * __this, MethodInfo* method){
	{
		t1971  L_0 = {0};
		m10917(&L_0, __this, &m10917_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t47_0_0_32849;
FieldInfo t179_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t47_0_0_32849, &t179_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t179_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t33_0_0_32849, &t179_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32849;
FieldInfo t179_f2_FieldInfo = 
{
	"NO_SLOT", &t47_0_0_32849, &t179_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32849;
FieldInfo t179_f3_FieldInfo = 
{
	"HASH_FLAG", &t47_0_0_32849, &t179_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t64_0_0_1;
FieldInfo t179_f4_FieldInfo = 
{
	"table", &t64_0_0_1, &t179_TI, offsetof(t179, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1468_0_0_1;
FieldInfo t179_f5_FieldInfo = 
{
	"linkSlots", &t1468_0_0_1, &t179_TI, offsetof(t179, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1963_0_0_1;
FieldInfo t179_f6_FieldInfo = 
{
	"keySlots", &t1963_0_0_1, &t179_TI, offsetof(t179, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1964_0_0_1;
FieldInfo t179_f7_FieldInfo = 
{
	"valueSlots", &t1964_0_0_1, &t179_TI, offsetof(t179, f7), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t179_f8_FieldInfo = 
{
	"touchedSlots", &t47_0_0_1, &t179_TI, offsetof(t179, f8), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t179_f9_FieldInfo = 
{
	"emptySlot", &t47_0_0_1, &t179_TI, offsetof(t179, f9), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t179_f10_FieldInfo = 
{
	"count", &t47_0_0_1, &t179_TI, offsetof(t179, f10), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t179_f11_FieldInfo = 
{
	"threshold", &t47_0_0_1, &t179_TI, offsetof(t179, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1965_0_0_1;
FieldInfo t179_f12_FieldInfo = 
{
	"hcp", &t1965_0_0_1, &t179_TI, offsetof(t179, f12), &EmptyCustomAttributesCache};
extern Il2CppType t725_0_0_1;
FieldInfo t179_f13_FieldInfo = 
{
	"serialization_info", &t725_0_0_1, &t179_TI, offsetof(t179, f13), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t179_f14_FieldInfo = 
{
	"generation", &t47_0_0_1, &t179_TI, offsetof(t179, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1966_0_0_17;
extern CustomAttributesCache t850__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t179_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1966_0_0_17, &t179_TI, offsetof(t179_SFs, f15), &t850__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t179_FIs[] =
{
	&t179_f0_FieldInfo,
	&t179_f1_FieldInfo,
	&t179_f2_FieldInfo,
	&t179_f3_FieldInfo,
	&t179_f4_FieldInfo,
	&t179_f5_FieldInfo,
	&t179_f6_FieldInfo,
	&t179_f7_FieldInfo,
	&t179_f8_FieldInfo,
	&t179_f9_FieldInfo,
	&t179_f10_FieldInfo,
	&t179_f11_FieldInfo,
	&t179_f12_FieldInfo,
	&t179_f13_FieldInfo,
	&t179_f14_FieldInfo,
	&t179_f15_FieldInfo,
	NULL
};
static const int32_t t179_f0_DefaultValueData = 10;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t179_f0_DefaultValue = 
{
	&t179_f0_FieldInfo, { (char*)&t179_f0_DefaultValueData, &t47_0_0_0 }};
static const float t179_f1_DefaultValueData = 0.9f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t179_f1_DefaultValue = 
{
	&t179_f1_FieldInfo, { (char*)&t179_f1_DefaultValueData, &t33_0_0_0 }};
static const int32_t t179_f2_DefaultValueData = -1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t179_f2_DefaultValue = 
{
	&t179_f2_FieldInfo, { (char*)&t179_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t179_f3_DefaultValueData = -2147483648;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t179_f3_DefaultValue = 
{
	&t179_f3_FieldInfo, { (char*)&t179_f3_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t179_FDVs[] = 
{
	&t179_f0_DefaultValue,
	&t179_f1_DefaultValue,
	&t179_f2_DefaultValue,
	&t179_f3_DefaultValue,
	NULL
};
extern MethodInfo m10588_MI;
static PropertyInfo t179____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t179_TI, "System.Collections.IDictionary.Item", NULL, &m10588_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10590_MI;
static PropertyInfo t179____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t179_TI, "System.Collections.ICollection.IsSynchronized", &m10590_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10592_MI;
static PropertyInfo t179____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t179_TI, "System.Collections.ICollection.SyncRoot", &m10592_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10594_MI;
static PropertyInfo t179____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t179_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10594_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10609_MI;
static PropertyInfo t179____Count_PropertyInfo = 
{
	&t179_TI, "Count", &m10609_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10611_MI;
static PropertyInfo t179____Item_PropertyInfo = 
{
	&t179_TI, "Item", NULL, &m10611_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10640_MI;
static PropertyInfo t179____Values_PropertyInfo = 
{
	&t179_TI, "Values", &m10640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t179_PIs[] =
{
	&t179____System_Collections_IDictionary_Item_PropertyInfo,
	&t179____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t179____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t179____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t179____Count_PropertyInfo,
	&t179____Item_PropertyInfo,
	&t179____Values_PropertyInfo,
	NULL
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1659_MI = 
{
	".ctor", (methodPointerType)&m10581_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1965_0_0_0;
static ParameterInfo t179_m10582_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10582_MI = 
{
	".ctor", (methodPointerType)&m10583_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t179_m10582_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t179_m10584_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10584_MI = 
{
	".ctor", (methodPointerType)&m10585_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t179_m10584_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t179_m10586_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m10586_MI = 
{
	".ctor", (methodPointerType)&m10587_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t726, t179_m10586_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t179_m10588_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10588_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10589_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t179_m10588_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10590_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10591_gshared, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10592_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10593_gshared, &t179_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10594_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10595_gshared, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t179_m10596_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10596_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10596, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t1969, t179_m10596_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t179_m10597_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10597_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10597, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t1969, t179_m10597_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t179_m10598_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10598_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10599_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t179_m10598_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t179_m10600_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10600_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10600, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t1969, t179_m10600_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t179_m10601_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10601_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10602_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t179_m10601_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10603_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10604_gshared, &t179_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t1970_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10605_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10606_gshared, &t179_TI, &t1970_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t851_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10607_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10608_gshared, &t179_TI, &t851_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10609_MI = 
{
	"get_Count", (methodPointerType)&m10610_gshared, &t179_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t179_m10611_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10611_MI = 
{
	"set_Item", (methodPointerType)&m10612_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t179_m10611_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1965_0_0_0;
static ParameterInfo t179_m10613_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1965_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10613_MI = 
{
	"Init", (methodPointerType)&m10614_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t179_m10613_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t179_m10615_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10615_MI = 
{
	"InitArrays", (methodPointerType)&m10616_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t179_m10615_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t179_m10617_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10617_MI = 
{
	"CopyToCheck", (methodPointerType)&m10618_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t179_m10617_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m24293_IGC;
extern TypeInfo m24293_gp_TRet_0_TI;
Il2CppGenericParamFull m24293_gp_TRet_0_TI_GenericParamFull = { { &m24293_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24293_gp_TElem_1_TI;
Il2CppGenericParamFull m24293_gp_TElem_1_TI_GenericParamFull = { { &m24293_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24293_IGPA[2] = 
{
	&m24293_gp_TRet_0_TI_GenericParamFull,
	&m24293_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24293_MI;
Il2CppGenericContainer m24293_IGC = { { NULL, NULL }, NULL, &m24293_MI, 2, 1, m24293_IGPA };
MethodInfo m24293_MI = 
{
	"Do_CopyTo", NULL, &t179_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t179_m10619_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10619_MI = 
{
	"make_pair", (methodPointerType)&m10619, &t179_TI, &t1969_0_0_0, RuntimeInvoker_t1969_t28_t28, t179_m10619_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t179_m10620_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10620_MI = 
{
	"pick_value", (methodPointerType)&m10621_gshared, &t179_TI, &t362_0_0_0, RuntimeInvoker_t28_t28_t28, t179_m10620_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t179_m10622_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10622_MI = 
{
	"CopyTo", (methodPointerType)&m10623_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t179_m10622_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m24294_IGC;
extern TypeInfo m24294_gp_TRet_0_TI;
Il2CppGenericParamFull m24294_gp_TRet_0_TI_GenericParamFull = { { &m24294_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24294_IGPA[1] = 
{
	&m24294_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24294_MI;
Il2CppGenericContainer m24294_IGC = { { NULL, NULL }, NULL, &m24294_MI, 1, 1, m24294_IGPA };
MethodInfo m24294_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t179_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10624_MI = 
{
	"Resize", (methodPointerType)&m10625_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t179_m1662_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1662_MI = 
{
	"Add", (methodPointerType)&m10626_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t179_m1662_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10627_MI = 
{
	"Clear", (methodPointerType)&m10628_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t179_m10629_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10629_MI = 
{
	"ContainsKey", (methodPointerType)&m10630_gshared, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t179_m10629_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t179_m10631_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10631_MI = 
{
	"ContainsValue", (methodPointerType)&m10632_gshared, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t179_m10631_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t179_m10633_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m10633_MI = 
{
	"GetObjectData", (methodPointerType)&m10634_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t726, t179_m10633_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t179_m10635_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10635_MI = 
{
	"OnDeserialization", (methodPointerType)&m10636_gshared, &t179_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t179_m10635_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t179_m10637_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10637_MI = 
{
	"Remove", (methodPointerType)&m10638_gshared, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t179_m10637_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_1_0_0;
static ParameterInfo t179_m1660_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_1_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t5270 (MethodInfo* method, void* obj, void** args);
MethodInfo m1660_MI = 
{
	"TryGetValue", (methodPointerType)&m10639_gshared, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t5270, t179_m1660_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t1967_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10640_MI = 
{
	"get_Values", (methodPointerType)&m10641_gshared, &t179_TI, &t1967_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t179_m10642_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10642_MI = 
{
	"ToTKey", (methodPointerType)&m10643_gshared, &t179_TI, &t173_0_0_0, RuntimeInvoker_t28_t28, t179_m10642_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t179_m10644_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10644_MI = 
{
	"ToTValue", (methodPointerType)&m10645_gshared, &t179_TI, &t362_0_0_0, RuntimeInvoker_t28_t28, t179_m10644_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t179_m10646_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10646_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10646, &t179_TI, &t31_0_0_0, RuntimeInvoker_t31_t1969, t179_m10646_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t179_TI;
extern Il2CppType t1971_0_0_0;
extern void* RuntimeInvoker_t1971 (MethodInfo* method, void* obj, void** args);
MethodInfo m10647_MI = 
{
	"GetEnumerator", (methodPointerType)&m10647, &t179_TI, &t1971_0_0_0, RuntimeInvoker_t1971, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t179_m10648_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t179_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t850__CustomAttributeCache_m7690;
MethodInfo m10648_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10649_gshared, &t179_TI, &t845_0_0_0, RuntimeInvoker_t845_t28_t28, t179_m10648_ParameterInfos, &t850__CustomAttributeCache_m7690, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t179_MIs[] =
{
	&m1659_MI,
	&m10582_MI,
	&m10584_MI,
	&m10586_MI,
	&m10588_MI,
	&m10590_MI,
	&m10592_MI,
	&m10594_MI,
	&m10596_MI,
	&m10597_MI,
	&m10598_MI,
	&m10600_MI,
	&m10601_MI,
	&m10603_MI,
	&m10605_MI,
	&m10607_MI,
	&m10609_MI,
	&m10611_MI,
	&m10613_MI,
	&m10615_MI,
	&m10617_MI,
	&m24293_MI,
	&m10619_MI,
	&m10620_MI,
	&m10622_MI,
	&m24294_MI,
	&m10624_MI,
	&m1662_MI,
	&m10627_MI,
	&m10629_MI,
	&m10631_MI,
	&m10633_MI,
	&m10635_MI,
	&m10637_MI,
	&m1660_MI,
	&m10640_MI,
	&m10642_MI,
	&m10644_MI,
	&m10646_MI,
	&m10647_MI,
	&m10648_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10603_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m10609_MI;
extern MethodInfo m10590_MI;
extern MethodInfo m10592_MI;
extern MethodInfo m10601_MI;
extern MethodInfo m10609_MI;
extern MethodInfo m10594_MI;
extern MethodInfo m10596_MI;
extern MethodInfo m10627_MI;
extern MethodInfo m10597_MI;
extern MethodInfo m10598_MI;
extern MethodInfo m10600_MI;
extern MethodInfo m10605_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m10588_MI;
extern MethodInfo m10607_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m10611_MI;
extern MethodInfo m1662_MI;
extern MethodInfo m10629_MI;
extern MethodInfo m10633_MI;
extern MethodInfo m10635_MI;
extern MethodInfo m1660_MI;
static MethodInfo* t179_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10603_MI,
	&m10633_MI,
	&m10609_MI,
	&m10590_MI,
	&m10592_MI,
	&m10601_MI,
	&m10609_MI,
	&m10594_MI,
	&m10596_MI,
	&m10627_MI,
	&m10597_MI,
	&m10598_MI,
	&m10600_MI,
	&m10605_MI,
	&m10637_MI,
	&m10588_MI,
	&m10607_MI,
	&m10635_MI,
	&m10611_MI,
	&m1662_MI,
	&m10629_MI,
	&m10633_MI,
	&m10635_MI,
	&m1660_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t386_TI;
extern TypeInfo t661_TI;
extern TypeInfo t4109_TI;
extern TypeInfo t4111_TI;
extern TypeInfo t5271_TI;
extern TypeInfo t749_TI;
extern TypeInfo t1504_TI;
static TypeInfo* t179_ITIs[] = 
{
	&t611_TI,
	&t386_TI,
	&t661_TI,
	&t4109_TI,
	&t4111_TI,
	&t5271_TI,
	&t749_TI,
	&t1504_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t386_TI;
extern TypeInfo t661_TI;
extern TypeInfo t4109_TI;
extern TypeInfo t4111_TI;
extern TypeInfo t5271_TI;
extern TypeInfo t749_TI;
extern TypeInfo t1504_TI;
static Il2CppInterfaceOffsetPair t179_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t386_TI, 5},
	{ &t661_TI, 6},
	{ &t4109_TI, 10},
	{ &t4111_TI, 17},
	{ &t5271_TI, 18},
	{ &t749_TI, 19},
	{ &t1504_TI, 21},
};
extern MethodInfo m10613_MI;
extern MethodInfo m10642_MI;
extern MethodInfo m10644_MI;
extern MethodInfo m10611_MI;
extern MethodInfo m10715_MI;
extern MethodInfo m10717_MI;
extern MethodInfo m1662_MI;
extern MethodInfo m10646_MI;
extern MethodInfo m10622_MI;
extern MethodInfo m10637_MI;
extern TypeInfo t1968_TI;
extern MethodInfo m10617_MI;
extern TypeInfo t179_TI;
extern MethodInfo m10648_MI;
extern TypeInfo t1966_TI;
extern MethodInfo m10932_MI;
extern MethodInfo m18135_MI;
extern MethodInfo m10619_MI;
extern TypeInfo t2009_TI;
extern MethodInfo m10936_MI;
extern MethodInfo m18137_MI;
extern TypeInfo t1971_TI;
extern MethodInfo m10917_MI;
extern TypeInfo t2010_TI;
extern MethodInfo m10940_MI;
extern TypeInfo t173_TI;
extern MethodInfo m24289_MI;
extern MethodInfo m24290_MI;
extern MethodInfo m10624_MI;
extern MethodInfo m10949_MI;
extern MethodInfo m10615_MI;
extern TypeInfo t1963_TI;
extern TypeInfo t1964_TI;
extern MethodInfo m10609_MI;
extern TypeInfo t1969_TI;
extern MethodInfo m10714_MI;
extern MethodInfo m18138_MI;
extern MethodInfo m10957_MI;
extern MethodInfo m24291_MI;
extern TypeInfo t1968_TI;
extern Il2CppType t1965_0_0_0;
extern TypeInfo t1965_TI;
extern Il2CppType t1968_0_0_0;
extern TypeInfo t1967_TI;
extern MethodInfo m10898_MI;
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
extern TypeInfo t362_TI;
extern MethodInfo m1660_MI;
extern MethodInfo m24292_MI;
static void* t179_RGCTXData[50] = 
{
	&m10613_MI,
	&m10642_MI,
	&m10644_MI,
	&m10611_MI,
	&m10715_MI,
	&m10717_MI,
	&m1662_MI,
	&m10646_MI,
	&m10622_MI,
	&m10637_MI,
	&t1968_TI,
	&m10617_MI,
	&t179_TI,
	&m10648_MI,
	&t1966_TI,
	&m10932_MI,
	&m18135_MI,
	&m10619_MI,
	&t2009_TI,
	&m10936_MI,
	&m18137_MI,
	&t1971_TI,
	&m10917_MI,
	&t2010_TI,
	&m10940_MI,
	&t173_TI,
	&m24289_MI,
	&m24290_MI,
	&m10624_MI,
	&m10949_MI,
	&m10615_MI,
	&t1963_TI,
	&t1964_TI,
	&m10609_MI,
	&t1969_TI,
	&m10714_MI,
	&m18138_MI,
	&m10957_MI,
	&m24291_MI,
	&t1968_TI,
	(void*)&t1965_0_0_0,
	&t1965_TI,
	(void*)&t1968_0_0_0,
	&t1967_TI,
	&m10898_MI,
	(void*)&t173_0_0_0,
	(void*)&t362_0_0_0,
	&t362_TI,
	&m1660_MI,
	&m24292_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t179_0_0_0;
extern Il2CppType t179_1_0_0;
extern TypeInfo t28_TI;
struct t179;
extern TypeInfo t179_TI;
extern Il2CppGenericClass t179_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
extern CustomAttributesCache t850__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t850__CustomAttributeCache_m7690;
TypeInfo t179_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t179_MIs, t179_PIs, t179_FIs, NULL, &t28_TI, NULL, NULL, &t179_TI, t179_ITIs, t179_VT, &t850__CustomAttributeCache, &t179_TI, &t179_0_0_0, &t179_1_0_0, t179_IOs, &t179_GC, NULL, t179_FDVs, NULL, t179_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t179), 0, -1, sizeof(t179_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#include "t1972.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1972_TI;
#include "t1972MD.h"

#include "t1975.h"
#include "t1976.h"
#include "t1974.h"
#include "t1982.h"
#include "t1978.h"
#include "t1983.h"
#include "t1503.h"
extern TypeInfo t1972_TI;
extern TypeInfo t30_TI;
extern TypeInfo t28_TI;
extern TypeInfo t350_TI;
extern TypeInfo t1927_TI;
extern TypeInfo t47_TI;
extern TypeInfo t843_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1975_TI;
extern TypeInfo t1973_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t2970_TI;
extern TypeInfo t845_TI;
extern TypeInfo t1974_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1978_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1251_TI;
extern TypeInfo t1503_TI;
extern TypeInfo t64_TI;
extern TypeInfo t1468_TI;
extern TypeInfo t333_TI;
extern TypeInfo t331_TI;
extern TypeInfo t872_TI;
extern TypeInfo t36_TI;
extern TypeInfo t18_TI;
#include "t1975MD.h"
#include "t1976MD.h"
#include "t1974MD.h"
#include "t1982MD.h"
#include "t1978MD.h"
#include "t1983MD.h"
#include "t1503MD.h"
extern Il2CppType t1927_0_0_0;
extern Il2CppType t1973_0_0_0;
extern Il2CppType t28_0_0_0;
extern MethodInfo m10643_MI;
extern MethodInfo m10645_MI;
extern MethodInfo m10612_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m23258_MI;
extern MethodInfo m23257_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m10667_MI;
extern MethodInfo m203_MI;
extern MethodInfo m10614_MI;
extern MethodInfo m10657_MI;
extern MethodInfo m10659_MI;
extern MethodInfo m10626_MI;
extern MethodInfo m10654_MI;
extern MethodInfo m10623_MI;
extern MethodInfo m10638_MI;
extern MethodInfo m10618_MI;
extern MethodInfo m10649_MI;
extern MethodInfo m10701_MI;
extern MethodInfo m18025_MI;
extern MethodInfo m10653_MI;
extern MethodInfo m10705_MI;
extern MethodInfo m18027_MI;
extern MethodInfo m10686_MI;
extern MethodInfo m10709_MI;
extern MethodInfo m6602_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m10616_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m10656_MI;
extern MethodInfo m18028_MI;
extern MethodInfo m4538_MI;
extern MethodInfo m3888_MI;
extern MethodInfo m3884_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m5874_MI;
extern MethodInfo m5877_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m5864_MI;
extern MethodInfo m3974_MI;
extern MethodInfo m1878_MI;
extern MethodInfo m6592_MI;
extern MethodInfo m3943_MI;
extern MethodInfo m10639_MI;
extern MethodInfo m17022_MI;
extern MethodInfo m4480_MI;
struct t1972;
 void m18025 (t1972 * __this, t2970* p0, int32_t p1, t1974 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18025_MI;
struct t1972;
 void m18027 (t1972 * __this, t29 * p0, int32_t p1, t1982 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18027_MI;
struct t1972;
 void m18028 (t1972 * __this, t1973* p0, int32_t p1, t1982 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18028_MI;


extern MethodInfo m10581_MI;
 void m10581_gshared (t1972 * __this, MethodInfo* method)
{
	{
		m203(__this, &m203_MI);
		(( void (*) (t1972 * __this, int32_t p0, t28* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, ((int32_t)10), (t28*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10583_MI;
 void m10583_gshared (t1972 * __this, t28* p0, MethodInfo* method)
{
	{
		m203(__this, &m203_MI);
		(( void (*) (t1972 * __this, int32_t p0, t28* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, ((int32_t)10), p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10585_MI;
 void m10585_gshared (t1972 * __this, int32_t p0, MethodInfo* method)
{
	{
		m203(__this, &m203_MI);
		(( void (*) (t1972 * __this, int32_t p0, t28* p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, p0, (t28*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
extern MethodInfo m10587_MI;
 void m10587_gshared (t1972 * __this, t725 * p0, t726  p1, MethodInfo* method)
{
	{
		m203(__this, &m203_MI);
		__this->f13 = p0;
		return;
	}
}
extern MethodInfo m10589_MI;
 void m10589_gshared (t1972 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	{
		t28 * L_0 = (( t28 * (*) (t1972 * __this, t28 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t28 * L_1 = (( t28 * (*) (t1972 * __this, t28 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		VirtActionInvoker2< t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3), __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10591_MI;
 bool m10591_gshared (t1972 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10593_MI;
 t28 * m10593_gshared (t1972 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m10595_MI;
 bool m10595_gshared (t1972 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10650_MI;
 void m10650 (t1972 * __this, t1976  p0, MethodInfo* method){
	{
		t28 * L_0 = m10657((&p0), &m10657_MI);
		t28 * L_1 = m10659((&p0), &m10659_MI);
		VirtActionInvoker2< t28 *, t28 * >::Invoke(&m10626_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo m10651_MI;
 bool m10651 (t1972 * __this, t1976  p0, MethodInfo* method){
	{
		bool L_0 = m10654(__this, p0, &m10654_MI);
		return L_0;
	}
}
extern MethodInfo m10599_MI;
 void m10599_gshared (t1972 * __this, t1973* p0, int32_t p1, MethodInfo* method)
{
	{
		(( void (*) (t1972 * __this, t1973* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		return;
	}
}
extern MethodInfo m10652_MI;
 bool m10652 (t1972 * __this, t1976  p0, MethodInfo* method){
	{
		bool L_0 = m10654(__this, p0, &m10654_MI);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t28 * L_1 = m10657((&p0), &m10657_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t28 * >::Invoke(&m10638_MI, __this, L_1);
		return L_2;
	}
}
extern MethodInfo m10602_MI;
 void m10602_gshared (t1972 * __this, t29 * p0, int32_t p1, MethodInfo* method)
{
	t1973* V_0 = {0};
	t2970* V_1 = {0};
	int32_t G_B5_0 = 0;
	t2970* G_B5_1 = {0};
	t1972 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t2970* G_B4_1 = {0};
	t1972 * G_B4_2 = {0};
	{
		V_0 = ((t1973*)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 10)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		(( void (*) (t1972 * __this, t1973* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, V_0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		return;
	}

IL_0013:
	{
		(( void (*) (t1972 * __this, t29 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(__this, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		V_1 = ((t2970*)IsInst(p0, InitializedTypeInfo(&t2970_TI)));
		if (!V_1)
		{
			goto IL_004b;
		}
	}
	{
		G_B4_0 = p1;
		G_B4_1 = V_1;
		G_B4_2 = ((t1972 *)(__this));
		if ((((t1972_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15))
		{
			G_B5_0 = p1;
			G_B5_1 = V_1;
			G_B5_2 = ((t1972 *)(__this));
			goto IL_0040;
		}
	}
	{
		t49 L_0 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13) };
		t1974 * L_1 = (t1974 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 14));
		(( void (*) (t1974 * __this, t28 * p0, t49 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15)->method)(L_1, NULL, L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15));
		((t1972_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15 = L_1;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1972 *)(G_B4_2));
	}

IL_0040:
	{
		(( void (*) (t1972 * __this, t2970* p0, int32_t p1, t1974 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->method)(G_B5_2, G_B5_1, G_B5_0, (((t1972_SFs*)IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12)->static_fields)->f15), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		return;
	}

IL_004b:
	{
		t49 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17) };
		t1982 * L_3 = (t1982 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		(( void (*) (t1982 * __this, t28 * p0, t49 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		(( void (*) (t1972 * __this, t29 * p0, int32_t p1, t1982 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20)->method)(__this, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20));
		return;
	}
}
extern MethodInfo m10604_MI;
 t28 * m10604_gshared (t1972 * __this, MethodInfo* method)
{
	{
		t1978  L_0 = {0};
		(( void (*) (t1978 * __this, t1972 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		t1978  L_1 = L_0;
		t28 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 21), &L_1);
		return (t28 *)L_2;
	}
}
extern MethodInfo m10606_MI;
 t28* m10606_gshared (t1972 * __this, MethodInfo* method)
{
	{
		t1978  L_0 = {0};
		(( void (*) (t1978 * __this, t1972 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		t1978  L_1 = L_0;
		t28 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 21), &L_1);
		return (t28*)L_2;
	}
}
extern MethodInfo m10608_MI;
 t28 * m10608_gshared (t1972 * __this, MethodInfo* method)
{
	{
		t1983 * L_0 = (t1983 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 23));
		(( void (*) (t1983 * __this, t1972 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 24)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 24));
		return L_0;
	}
}
extern MethodInfo m10610_MI;
 int32_t m10610_gshared (t1972 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m10612_MI;
 void m10612_gshared (t1972 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t28 * L_0 = p0;
		if (((t28 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral544, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t28* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t64* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_4)->max_length)))));
		t64* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		V_3 = (-1);
		if ((((int32_t)V_2) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t1468* L_6 = (__this->f5);
		int32_t L_7 = (((t843 *)(t843 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0078;
		}
	}
	{
		t28* L_8 = (__this->f12);
		t333* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t28 **)(t28 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		V_3 = V_2;
		t1468* L_11 = (__this->f5);
		int32_t L_12 = (((t843 *)(t843 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = ((int32_t)(L_13+1));
		V_4 = L_14;
		__this->f10 = L_14;
		int32_t L_15 = (__this->f11);
		if ((((int32_t)V_4) <= ((int32_t)L_15)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t1972 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28));
		t64* L_16 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_16)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_17 = (__this->f9);
		V_2 = L_17;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		int32_t L_19 = L_18;
		V_4 = L_19;
		__this->f8 = ((int32_t)(L_19+1));
		V_2 = V_4;
		goto IL_0101;
	}

IL_00ea:
	{
		t1468* L_20 = (__this->f5);
		int32_t L_21 = (((t843 *)(t843 *)SZArrayLdElema(L_20, V_2))->f1);
		__this->f9 = L_21;
	}

IL_0101:
	{
		t1468* L_22 = (__this->f5);
		t64* L_23 = (__this->f4);
		((t843 *)(t843 *)SZArrayLdElema(L_22, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_23, V_1))-1));
		t64* L_24 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, V_1)) = (int32_t)((int32_t)(V_2+1));
		t1468* L_25 = (__this->f5);
		((t843 *)(t843 *)SZArrayLdElema(L_25, V_2))->f0 = V_0;
		t333* L_26 = (__this->f6);
		*((t28 **)(t28 **)SZArrayLdElema(L_26, V_2)) = (t28 *)p0;
		goto IL_0194;
	}

IL_0148:
	{
		if ((((int32_t)V_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t1468* L_27 = (__this->f5);
		t1468* L_28 = (__this->f5);
		int32_t L_29 = (((t843 *)(t843 *)SZArrayLdElema(L_28, V_2))->f1);
		((t843 *)(t843 *)SZArrayLdElema(L_27, V_3))->f1 = L_29;
		t1468* L_30 = (__this->f5);
		t64* L_31 = (__this->f4);
		((t843 *)(t843 *)SZArrayLdElema(L_30, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_31, V_1))-1));
		t64* L_32 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_32, V_1)) = (int32_t)((int32_t)(V_2+1));
	}

IL_0194:
	{
		t333* L_33 = (__this->f7);
		*((t28 **)(t28 **)SZArrayLdElema(L_33, V_2)) = (t28 *)p1;
		int32_t L_34 = (__this->f14);
		__this->f14 = ((int32_t)(L_34+1));
		return;
	}
}
extern MethodInfo m10614_MI;
 void m10614_gshared (t1972 * __this, int32_t p0, t28* p1, MethodInfo* method)
{
	t28* V_0 = {0};
	t1972 * G_B4_0 = {0};
	t1972 * G_B3_0 = {0};
	t28* G_B5_0 = {0};
	t1972 * G_B5_1 = {0};
	{
		if ((((int32_t)p0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t1251 * L_0 = (t1251 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1251_TI));
		m6602(L_0, (t18*) &_stringLiteral545, &m6602_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000f:
	{
		G_B3_0 = ((t1972 *)(__this));
		if (!p1)
		{
			G_B4_0 = ((t1972 *)(__this));
			goto IL_0018;
		}
	}
	{
		V_0 = p1;
		G_B5_0 = V_0;
		G_B5_1 = ((t1972 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1503_TI));
		t1503 * L_1 = (( t1503 * (*) (t28 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 29)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 29));
		G_B5_0 = ((t28*)(L_1));
		G_B5_1 = ((t1972 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		if (p0)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		p0 = ((int32_t)((((int32_t)((float)((((float)p0))/(0.9f)))))+1));
		(( void (*) (t1972 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30));
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m10616_MI;
 void m10616_gshared (t1972 * __this, int32_t p0, MethodInfo* method)
{
	{
		__this->f4 = ((t64*)SZArrayNew(InitializedTypeInfo(&t64_TI), p0));
		__this->f5 = ((t1468*)SZArrayNew(InitializedTypeInfo(&t1468_TI), p0));
		__this->f9 = (-1);
		__this->f6 = ((t333*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 31), p0));
		__this->f7 = ((t333*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 32), p0));
		__this->f8 = 0;
		t64* L_0 = (__this->f4);
		__this->f11 = (((int32_t)((float)((((float)(((int32_t)(((t29 *)L_0)->max_length)))))*(0.9f)))));
		int32_t L_1 = (__this->f11);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		t64* L_2 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t29 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m10618_MI;
 void m10618_gshared (t1972 * __this, t29 * p0, int32_t p1, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t350 * L_0 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_0, (t18*) &_stringLiteral334, &m3074_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if ((((int32_t)p1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t1251 * L_1 = (t1251 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1251_TI));
		m6602(L_1, (t18*) &_stringLiteral331, &m6602_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001d:
	{
		int32_t L_2 = m3839(p0, &m3839_MI);
		if ((((int32_t)p1) <= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		t331 * L_3 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m2043(L_3, (t18*) &_stringLiteral546, &m2043_MI);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0031:
	{
		int32_t L_4 = m3839(p0, &m3839_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 33), __this);
		if ((((int32_t)((int32_t)(L_4-p1))) >= ((int32_t)L_5)))
		{
			goto IL_004c;
		}
	}
	{
		t331 * L_6 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m2043(L_6, (t18*) &_stringLiteral547, &m2043_MI);
		il2cpp_codegen_raise_exception (L_6);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m10653_MI;
 t1976  m10653 (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method){
	{
		t1976  L_0 = {0};
		m10656(&L_0, p0, p1, &m10656_MI);
		return L_0;
	}
}
extern MethodInfo m10621_MI;
 t28 * m10621_gshared (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	{
		return p1;
	}
}
extern MethodInfo m10623_MI;
 void m10623_gshared (t1972 * __this, t1973* p0, int32_t p1, MethodInfo* method)
{
	{
		(( void (*) (t1972 * __this, t29 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->method)(__this, (t29 *)(t29 *)p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		t49 L_0 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17) };
		t1982 * L_1 = (t1982 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		(( void (*) (t1982 * __this, t28 * p0, t49 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->method)(L_1, NULL, L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		(( void (*) (t1972 * __this, t1973* p0, int32_t p1, t1982 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 36)->method)(__this, p0, p1, L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 36));
		return;
	}
}
extern MethodInfo m10625_MI;
 void m10625_gshared (t1972 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t64* V_1 = {0};
	t1468* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t333* V_7 = {0};
	t333* V_8 = {0};
	int32_t V_9 = 0;
	{
		t64* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t872_TI));
		int32_t L_1 = m4538(NULL, ((int32_t)(((int32_t)((((int32_t)(((t29 *)L_0)->max_length)))<<1))|1)), &m4538_MI);
		V_0 = L_1;
		V_1 = ((t64*)SZArrayNew(InitializedTypeInfo(&t64_TI), V_0));
		V_2 = ((t1468*)SZArrayNew(InitializedTypeInfo(&t1468_TI), V_0));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t64* L_2 = (__this->f4);
		V_4 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_2, V_3))-1));
		goto IL_00a2;
	}

IL_0035:
	{
		t28* L_3 = (__this->f12);
		t333* L_4 = (__this->f6);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_3, (*(t28 **)(t28 **)SZArrayLdElema(L_4, V_4)));
		int32_t L_6 = ((int32_t)(L_5|((int32_t)-2147483648)));
		V_9 = L_6;
		((t843 *)(t843 *)SZArrayLdElema(V_2, V_4))->f0 = L_6;
		V_5 = V_9;
		V_6 = ((int32_t)(((int32_t)(V_5&((int32_t)2147483647)))%V_0));
		((t843 *)(t843 *)SZArrayLdElema(V_2, V_4))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6))-1));
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_6)) = (int32_t)((int32_t)(V_4+1));
		t1468* L_7 = (__this->f5);
		int32_t L_8 = (((t843 *)(t843 *)SZArrayLdElema(L_7, V_4))->f1);
		V_4 = L_8;
	}

IL_00a2:
	{
		if ((((uint32_t)V_4) != ((uint32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_00ab:
	{
		t64* L_9 = (__this->f4);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t29 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f4 = V_1;
		__this->f5 = V_2;
		V_7 = ((t333*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 31), V_0));
		V_8 = ((t333*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 32), V_0));
		t333* L_10 = (__this->f6);
		int32_t L_11 = (__this->f8);
		m3888(NULL, (t29 *)(t29 *)L_10, 0, (t29 *)(t29 *)V_7, 0, L_11, &m3888_MI);
		t333* L_12 = (__this->f7);
		int32_t L_13 = (__this->f8);
		m3888(NULL, (t29 *)(t29 *)L_12, 0, (t29 *)(t29 *)V_8, 0, L_13, &m3888_MI);
		__this->f6 = V_7;
		__this->f7 = V_8;
		__this->f11 = (((int32_t)((float)((((float)V_0))*(0.9f)))));
		return;
	}
}
extern MethodInfo m10626_MI;
 void m10626_gshared (t1972 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t28 * L_0 = p0;
		if (((t28 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral544, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t28* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t64* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_4)->max_length)))));
		t64* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		goto IL_008f;
	}

IL_0044:
	{
		t1468* L_6 = (__this->f5);
		int32_t L_7 = (((t843 *)(t843 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007d;
		}
	}
	{
		t28* L_8 = (__this->f12);
		t333* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t28 **)(t28 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		t331 * L_11 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m2043(L_11, (t18*) &_stringLiteral549, &m2043_MI);
		il2cpp_codegen_raise_exception (L_11);
	}

IL_007d:
	{
		t1468* L_12 = (__this->f5);
		int32_t L_13 = (((t843 *)(t843 *)SZArrayLdElema(L_12, V_2))->f1);
		V_2 = L_13;
	}

IL_008f:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = (__this->f10);
		int32_t L_15 = ((int32_t)(L_14+1));
		V_3 = L_15;
		__this->f10 = L_15;
		int32_t L_16 = (__this->f11);
		if ((((int32_t)V_3) <= ((int32_t)L_16)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t1972 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 28));
		t64* L_17 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_17)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_18 = (__this->f9);
		V_2 = L_18;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_19 = (__this->f8);
		int32_t L_20 = L_19;
		V_3 = L_20;
		__this->f8 = ((int32_t)(L_20+1));
		V_2 = V_3;
		goto IL_00f9;
	}

IL_00e2:
	{
		t1468* L_21 = (__this->f5);
		int32_t L_22 = (((t843 *)(t843 *)SZArrayLdElema(L_21, V_2))->f1);
		__this->f9 = L_22;
	}

IL_00f9:
	{
		t1468* L_23 = (__this->f5);
		((t843 *)(t843 *)SZArrayLdElema(L_23, V_2))->f0 = V_0;
		t1468* L_24 = (__this->f5);
		t64* L_25 = (__this->f4);
		((t843 *)(t843 *)SZArrayLdElema(L_24, V_2))->f1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_25, V_1))-1));
		t64* L_26 = (__this->f4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, V_1)) = (int32_t)((int32_t)(V_2+1));
		t333* L_27 = (__this->f6);
		*((t28 **)(t28 **)SZArrayLdElema(L_27, V_2)) = (t28 *)p0;
		t333* L_28 = (__this->f7);
		*((t28 **)(t28 **)SZArrayLdElema(L_28, V_2)) = (t28 *)p1;
		int32_t L_29 = (__this->f14);
		__this->f14 = ((int32_t)(L_29+1));
		return;
	}
}
extern MethodInfo m10628_MI;
 void m10628_gshared (t1972 * __this, MethodInfo* method)
{
	{
		__this->f10 = 0;
		t64* L_0 = (__this->f4);
		t64* L_1 = (__this->f4);
		m3884(NULL, (t29 *)(t29 *)L_0, 0, (((int32_t)(((t29 *)L_1)->max_length))), &m3884_MI);
		t333* L_2 = (__this->f6);
		t333* L_3 = (__this->f6);
		m3884(NULL, (t29 *)(t29 *)L_2, 0, (((int32_t)(((t29 *)L_3)->max_length))), &m3884_MI);
		t333* L_4 = (__this->f7);
		t333* L_5 = (__this->f7);
		m3884(NULL, (t29 *)(t29 *)L_4, 0, (((int32_t)(((t29 *)L_5)->max_length))), &m3884_MI);
		t1468* L_6 = (__this->f5);
		t1468* L_7 = (__this->f5);
		m3884(NULL, (t29 *)(t29 *)L_6, 0, (((int32_t)(((t29 *)L_7)->max_length))), &m3884_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m10630_MI;
 bool m10630_gshared (t1972 * __this, t28 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t28 * L_0 = p0;
		if (((t28 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral544, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t28* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t64* L_4 = (__this->f4);
		t64* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_5)->max_length)))))))-1));
		goto IL_0084;
	}

IL_0042:
	{
		t1468* L_6 = (__this->f5);
		int32_t L_7 = (((t843 *)(t843 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0072;
		}
	}
	{
		t28* L_8 = (__this->f12);
		t333* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t28 **)(t28 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t1468* L_11 = (__this->f5);
		int32_t L_12 = (((t843 *)(t843 *)SZArrayLdElema(L_11, V_1))->f1);
		V_1 = L_12;
	}

IL_0084:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10632_MI;
 bool m10632_gshared (t1972 * __this, t28 * p0, MethodInfo* method)
{
	t28* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1503_TI));
		t1503 * L_0 = (( t1503 * (*) (t28 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 37));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t64* L_1 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1))-1));
		goto IL_0040;
	}

IL_0017:
	{
		t333* L_2 = (__this->f7);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 38), V_0, (*(t28 **)(t28 **)SZArrayLdElema(L_2, V_2)), p0);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t1468* L_4 = (__this->f5);
		int32_t L_5 = (((t843 *)(t843 *)SZArrayLdElema(L_4, V_2))->f1);
		V_2 = L_5;
	}

IL_0040:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		t64* L_6 = (__this->f4);
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t29 *)L_6)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m10634_MI;
 void m10634_gshared (t1972 * __this, t725 * p0, t726  p1, MethodInfo* method)
{
	t1973* V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t350 * L_0 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_0, (t18*) &_stringLiteral302, &m3074_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f14);
		m5868(p0, (t18*) &_stringLiteral550, L_1, &m5868_MI);
		t28* L_2 = (__this->f12);
		m5874(p0, (t18*) &_stringLiteral551, L_2, &m5874_MI);
		V_0 = (t1973*)NULL;
		int32_t L_3 = (__this->f10);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = (__this->f10);
		V_0 = ((t1973*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 39), L_4));
		(( void (*) (t1972 * __this, t1973* p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(__this, V_0, 0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
	}

IL_004f:
	{
		t64* L_5 = (__this->f4);
		m5868(p0, (t18*) &_stringLiteral552, (((int32_t)(((t29 *)L_5)->max_length))), &m5868_MI);
		m5874(p0, (t18*) &_stringLiteral553, (t28 *)(t28 *)V_0, &m5874_MI);
		return;
	}
}
extern MethodInfo m10636_MI;
 void m10636_gshared (t1972 * __this, t28 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1973* V_1 = {0};
	int32_t V_2 = 0;
	{
		t725 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t725 * L_1 = (__this->f13);
		int32_t L_2 = m5877(L_1, (t18*) &_stringLiteral550, &m5877_MI);
		__this->f14 = L_2;
		t725 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_4 = m1673(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 40)), &m1673_MI);
		t28 * L_5 = m5864(L_3, (t18*) &_stringLiteral551, L_4, &m5864_MI);
		__this->f12 = ((t28*)Castclass(L_5, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 41)));
		t725 * L_6 = (__this->f13);
		int32_t L_7 = m5877(L_6, (t18*) &_stringLiteral552, &m5877_MI);
		V_0 = L_7;
		t725 * L_8 = (__this->f13);
		t36 * L_9 = m1673(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 42)), &m1673_MI);
		t28 * L_10 = m5864(L_8, (t18*) &_stringLiteral553, L_9, &m5864_MI);
		V_1 = ((t1973*)Castclass(L_10, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 10)));
		if ((((int32_t)V_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		(( void (*) (t1972 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30)->method)(__this, V_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 30));
		__this->f10 = 0;
		if (!V_1)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t28 * L_11 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(((t1976 *)(t1976 *)SZArrayLdElema(V_1, V_2)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t28 * L_12 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(((t1976 *)(t1976 *)SZArrayLdElema(V_1, V_2)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		VirtActionInvoker2< t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this, L_11, L_12);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00b4:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t29 *)V_1)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_13 = (__this->f14);
		__this->f14 = ((int32_t)(L_13+1));
		__this->f13 = (t725 *)NULL;
		return;
	}
}
extern MethodInfo m10638_MI;
 bool m10638_gshared (t1972 * __this, t28 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t28 * V_4 = {0};
	t28 * V_5 = {0};
	{
		t28 * L_0 = p0;
		if (((t28 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral544, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t28* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t64* L_4 = (__this->f4);
		V_1 = ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_4)->max_length)))));
		t64* L_5 = (__this->f4);
		V_2 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_5, V_1))-1));
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t1468* L_6 = (__this->f5);
		int32_t L_7 = (((t843 *)(t843 *)SZArrayLdElema(L_6, V_2))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_007a;
		}
	}
	{
		t28* L_8 = (__this->f12);
		t333* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t28 **)(t28 **)SZArrayLdElema(L_9, V_2)), p0);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		V_3 = V_2;
		t1468* L_11 = (__this->f5);
		int32_t L_12 = (((t843 *)(t843 *)SZArrayLdElema(L_11, V_2))->f1);
		V_2 = L_12;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_13 = (__this->f10);
		__this->f10 = ((int32_t)(L_13-1));
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		t64* L_14 = (__this->f4);
		t1468* L_15 = (__this->f5);
		int32_t L_16 = (((t843 *)(t843 *)SZArrayLdElema(L_15, V_2))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, V_1)) = (int32_t)((int32_t)(L_16+1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t1468* L_17 = (__this->f5);
		t1468* L_18 = (__this->f5);
		int32_t L_19 = (((t843 *)(t843 *)SZArrayLdElema(L_18, V_2))->f1);
		((t843 *)(t843 *)SZArrayLdElema(L_17, V_3))->f1 = L_19;
	}

IL_00e9:
	{
		t1468* L_20 = (__this->f5);
		int32_t L_21 = (__this->f9);
		((t843 *)(t843 *)SZArrayLdElema(L_20, V_2))->f1 = L_21;
		__this->f9 = V_2;
		t1468* L_22 = (__this->f5);
		((t843 *)(t843 *)SZArrayLdElema(L_22, V_2))->f0 = 0;
		t333* L_23 = (__this->f6);
		Initobj (&t28_TI, (&V_4));
		*((t28 **)(t28 **)SZArrayLdElema(L_23, V_2)) = (t28 *)V_4;
		t333* L_24 = (__this->f7);
		Initobj (&t28_TI, (&V_5));
		*((t28 **)(t28 **)SZArrayLdElema(L_24, V_2)) = (t28 *)V_5;
		int32_t L_25 = (__this->f14);
		__this->f14 = ((int32_t)(L_25+1));
		return 1;
	}
}
extern MethodInfo m10639_MI;
 bool m10639_gshared (t1972 * __this, t28 * p0, t28 ** p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t28 * V_2 = {0};
	{
		t28 * L_0 = p0;
		if (((t28 *)L_0))
		{
			goto IL_0013;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral544, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		t28* L_2 = (__this->f12);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 26), L_2, p0);
		V_0 = ((int32_t)(L_3|((int32_t)-2147483648)));
		t64* L_4 = (__this->f4);
		t64* L_5 = (__this->f4);
		V_1 = ((int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(L_4, ((int32_t)(((int32_t)(V_0&((int32_t)2147483647)))%(((int32_t)(((t29 *)L_5)->max_length)))))))-1));
		goto IL_0096;
	}

IL_0042:
	{
		t1468* L_6 = (__this->f5);
		int32_t L_7 = (((t843 *)(t843 *)SZArrayLdElema(L_6, V_1))->f0);
		if ((((uint32_t)L_7) != ((uint32_t)V_0)))
		{
			goto IL_0084;
		}
	}
	{
		t28* L_8 = (__this->f12);
		t333* L_9 = (__this->f6);
		bool L_10 = (bool)InterfaceFuncInvoker2< bool, t28 *, t28 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 27), L_8, (*(t28 **)(t28 **)SZArrayLdElema(L_9, V_1)), p0);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		t333* L_11 = (__this->f7);
		*p1 = (*(t28 **)(t28 **)SZArrayLdElema(L_11, V_1));
		return 1;
	}

IL_0084:
	{
		t1468* L_12 = (__this->f5);
		int32_t L_13 = (((t843 *)(t843 *)SZArrayLdElema(L_12, V_1))->f1);
		V_1 = L_13;
	}

IL_0096:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		Initobj (&t28_TI, (&V_2));
		*p1 = V_2;
		return 0;
	}
}
extern MethodInfo m10641_MI;
 t1975 * m10641_gshared (t1972 * __this, MethodInfo* method)
{
	{
		t1975 * L_0 = (t1975 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 43));
		(( void (*) (t1975 * __this, t1972 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 44)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 44));
		return L_0;
	}
}
extern MethodInfo m10643_MI;
 t28 * m10643_gshared (t1972 * __this, t28 * p0, MethodInfo* method)
{
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t350 * L_0 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_0, (t18*) &_stringLiteral544, &m3074_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000e:
	{
		if (((t28 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 25))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_1 = m1673(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 45)), &m1673_MI);
		t18* L_2 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3974_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_3 = m1878(NULL, (t18*) &_stringLiteral554, L_2, &m1878_MI);
		t331 * L_4 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m6592(L_4, L_3, (t18*) &_stringLiteral544, &m6592_MI);
		il2cpp_codegen_raise_exception (L_4);
	}

IL_003a:
	{
		return ((t28 *)Castclass(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 25)));
	}
}
extern MethodInfo m10645_MI;
 t28 * m10645_gshared (t1972 * __this, t28 * p0, MethodInfo* method)
{
	t28 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_0 = m1673(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 46)), &m1673_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3943_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (&t28_TI, (&V_0));
		return V_0;
	}

IL_001e:
	{
		if (((t28 *)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 47))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_2 = m1673(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 46)), &m1673_MI);
		t18* L_3 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3974_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_4 = m1878(NULL, (t18*) &_stringLiteral554, L_3, &m1878_MI);
		t331 * L_5 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m6592(L_5, L_4, (t18*) &_stringLiteral250, &m6592_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_004a:
	{
		return ((t28 *)Castclass(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 47)));
	}
}
extern MethodInfo m10654_MI;
 bool m10654 (t1972 * __this, t1976  p0, MethodInfo* method){
	t28 * V_0 = {0};
	{
		t28 * L_0 = m10657((&p0), &m10657_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t28 *, t28 ** >::Invoke(&m10639_MI, __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1503_TI));
		t1503 * L_2 = m8472(NULL, &m8472_MI);
		t28 * L_3 = m10659((&p0), &m10659_MI);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t28 *, t28 * >::Invoke(&m17022_MI, L_2, L_3, V_0);
		return L_4;
	}
}
extern MethodInfo m10655_MI;
 t1978  m10655 (t1972 * __this, MethodInfo* method){
	{
		t1978  L_0 = {0};
		m10686(&L_0, __this, &m10686_MI);
		return L_0;
	}
}
extern MethodInfo m10649_MI;
 t845  m10649_gshared (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	{
		t28 * L_0 = p0;
		t28 * L_1 = p1;
		t845  L_2 = {0};
		m4480(&L_2, ((t28 *)L_0), ((t28 *)L_1), &m4480_MI);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2<System.Object,System.Object>
extern Il2CppType t47_0_0_32849;
FieldInfo t1972_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t47_0_0_32849, &t1972_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t1972_f1_FieldInfo = 
{
	"DEFAULT_LOAD_FACTOR", &t33_0_0_32849, &t1972_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32849;
FieldInfo t1972_f2_FieldInfo = 
{
	"NO_SLOT", &t47_0_0_32849, &t1972_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32849;
FieldInfo t1972_f3_FieldInfo = 
{
	"HASH_FLAG", &t47_0_0_32849, &t1972_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t64_0_0_1;
FieldInfo t1972_f4_FieldInfo = 
{
	"table", &t64_0_0_1, &t1972_TI, offsetof(t1972, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1468_0_0_1;
FieldInfo t1972_f5_FieldInfo = 
{
	"linkSlots", &t1468_0_0_1, &t1972_TI, offsetof(t1972, f5), &EmptyCustomAttributesCache};
extern Il2CppType t333_0_0_1;
FieldInfo t1972_f6_FieldInfo = 
{
	"keySlots", &t333_0_0_1, &t1972_TI, offsetof(t1972, f6), &EmptyCustomAttributesCache};
extern Il2CppType t333_0_0_1;
FieldInfo t1972_f7_FieldInfo = 
{
	"valueSlots", &t333_0_0_1, &t1972_TI, offsetof(t1972, f7), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1972_f8_FieldInfo = 
{
	"touchedSlots", &t47_0_0_1, &t1972_TI, offsetof(t1972, f8), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1972_f9_FieldInfo = 
{
	"emptySlot", &t47_0_0_1, &t1972_TI, offsetof(t1972, f9), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1972_f10_FieldInfo = 
{
	"count", &t47_0_0_1, &t1972_TI, offsetof(t1972, f10), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1972_f11_FieldInfo = 
{
	"threshold", &t47_0_0_1, &t1972_TI, offsetof(t1972, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1927_0_0_1;
FieldInfo t1972_f12_FieldInfo = 
{
	"hcp", &t1927_0_0_1, &t1972_TI, offsetof(t1972, f12), &EmptyCustomAttributesCache};
extern Il2CppType t725_0_0_1;
FieldInfo t1972_f13_FieldInfo = 
{
	"serialization_info", &t725_0_0_1, &t1972_TI, offsetof(t1972, f13), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1972_f14_FieldInfo = 
{
	"generation", &t47_0_0_1, &t1972_TI, offsetof(t1972, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1974_0_0_17;
extern CustomAttributesCache t850__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t1972_f15_FieldInfo = 
{
	"<>f__am$cacheB", &t1974_0_0_17, &t1972_TI, offsetof(t1972_SFs, f15), &t850__CustomAttributeCache_U3CU3Ef__am$cacheB};
static FieldInfo* t1972_FIs[] =
{
	&t1972_f0_FieldInfo,
	&t1972_f1_FieldInfo,
	&t1972_f2_FieldInfo,
	&t1972_f3_FieldInfo,
	&t1972_f4_FieldInfo,
	&t1972_f5_FieldInfo,
	&t1972_f6_FieldInfo,
	&t1972_f7_FieldInfo,
	&t1972_f8_FieldInfo,
	&t1972_f9_FieldInfo,
	&t1972_f10_FieldInfo,
	&t1972_f11_FieldInfo,
	&t1972_f12_FieldInfo,
	&t1972_f13_FieldInfo,
	&t1972_f14_FieldInfo,
	&t1972_f15_FieldInfo,
	NULL
};
static const int32_t t1972_f0_DefaultValueData = 10;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t1972_f0_DefaultValue = 
{
	&t1972_f0_FieldInfo, { (char*)&t1972_f0_DefaultValueData, &t47_0_0_0 }};
static const float t1972_f1_DefaultValueData = 0.9f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t1972_f1_DefaultValue = 
{
	&t1972_f1_FieldInfo, { (char*)&t1972_f1_DefaultValueData, &t33_0_0_0 }};
static const int32_t t1972_f2_DefaultValueData = -1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t1972_f2_DefaultValue = 
{
	&t1972_f2_FieldInfo, { (char*)&t1972_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t1972_f3_DefaultValueData = -2147483648;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t1972_f3_DefaultValue = 
{
	&t1972_f3_FieldInfo, { (char*)&t1972_f3_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1972_FDVs[] = 
{
	&t1972_f0_DefaultValue,
	&t1972_f1_DefaultValue,
	&t1972_f2_DefaultValue,
	&t1972_f3_DefaultValue,
	NULL
};
extern MethodInfo m10589_MI;
static PropertyInfo t1972____System_Collections_IDictionary_Item_PropertyInfo = 
{
	&t1972_TI, "System.Collections.IDictionary.Item", NULL, &m10589_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10591_MI;
static PropertyInfo t1972____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1972_TI, "System.Collections.ICollection.IsSynchronized", &m10591_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10593_MI;
static PropertyInfo t1972____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1972_TI, "System.Collections.ICollection.SyncRoot", &m10593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10595_MI;
static PropertyInfo t1972____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo = 
{
	&t1972_TI, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly", &m10595_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10610_MI;
static PropertyInfo t1972____Count_PropertyInfo = 
{
	&t1972_TI, "Count", &m10610_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10612_MI;
static PropertyInfo t1972____Item_PropertyInfo = 
{
	&t1972_TI, "Item", NULL, &m10612_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10641_MI;
static PropertyInfo t1972____Values_PropertyInfo = 
{
	&t1972_TI, "Values", &m10641_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1972_PIs[] =
{
	&t1972____System_Collections_IDictionary_Item_PropertyInfo,
	&t1972____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1972____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1972____System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnly_PropertyInfo,
	&t1972____Count_PropertyInfo,
	&t1972____Item_PropertyInfo,
	&t1972____Values_PropertyInfo,
	NULL
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10581_MI = 
{
	".ctor", (methodPointerType)&m10581_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1927_0_0_0;
static ParameterInfo t1972_m10583_ParameterInfos[] = 
{
	{"comparer", 0, 134217728, &EmptyCustomAttributesCache, &t1927_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10583_MI = 
{
	".ctor", (methodPointerType)&m10583_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1972_m10583_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1972_m10585_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10585_MI = 
{
	".ctor", (methodPointerType)&m10585_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1972_m10585_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t1972_m10587_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m10587_MI = 
{
	".ctor", (methodPointerType)&m10587_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t726, t1972_m10587_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10589_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10589_MI = 
{
	"System.Collections.IDictionary.set_Item", (methodPointerType)&m10589_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t1972_m10589_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 19, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10591_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10591_gshared, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10593_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10593_gshared, &t1972_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10595_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", (methodPointerType)&m10595_gshared, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 11, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t1972_m10650_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m10650_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", (methodPointerType)&m10650, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t1976, t1972_m10650_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t1972_m10651_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m10651_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", (methodPointerType)&m10651, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t1976, t1972_m10651_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 14, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1973_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1972_m10599_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1973_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10599_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", (methodPointerType)&m10599_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1972_m10599_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t1972_m10652_ParameterInfos[] = 
{
	{"keyValuePair", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m10652_MI = 
{
	"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", (methodPointerType)&m10652, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t1976, t1972_m10652_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1972_m10602_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10602_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10602_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1972_m10602_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10604_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10604_gshared, &t1972_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t1977_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10606_MI = 
{
	"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", (methodPointerType)&m10606_gshared, &t1972_TI, &t1977_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 17, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t851_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10608_MI = 
{
	"System.Collections.IDictionary.GetEnumerator", (methodPointerType)&m10608_gshared, &t1972_TI, &t851_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10610_MI = 
{
	"get_Count", (methodPointerType)&m10610_gshared, &t1972_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10612_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10612_MI = 
{
	"set_Item", (methodPointerType)&m10612_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t1972_m10612_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 22, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1927_0_0_0;
static ParameterInfo t1972_m10614_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"hcp", 1, 134217728, &EmptyCustomAttributesCache, &t1927_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10614_MI = 
{
	"Init", (methodPointerType)&m10614_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1972_m10614_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1972_m10616_ParameterInfos[] = 
{
	{"size", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10616_MI = 
{
	"InitArrays", (methodPointerType)&m10616_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1972_m10616_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1972_m10618_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10618_MI = 
{
	"CopyToCheck", (methodPointerType)&m10618_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1972_m10618_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m24295_IGC;
extern TypeInfo m24295_gp_TRet_0_TI;
Il2CppGenericParamFull m24295_gp_TRet_0_TI_GenericParamFull = { { &m24295_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
extern TypeInfo m24295_gp_TElem_1_TI;
Il2CppGenericParamFull m24295_gp_TElem_1_TI_GenericParamFull = { { &m24295_IGC, 1}, {NULL, "TElem", 0, 0, NULL} };
static Il2CppGenericParamFull* m24295_IGPA[2] = 
{
	&m24295_gp_TRet_0_TI_GenericParamFull,
	&m24295_gp_TElem_1_TI_GenericParamFull,
};
extern MethodInfo m24295_MI;
Il2CppGenericContainer m24295_IGC = { { NULL, NULL }, NULL, &m24295_MI, 2, 1, m24295_IGPA };
MethodInfo m24295_MI = 
{
	"Do_CopyTo", NULL, &t1972_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10653_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10653_MI = 
{
	"make_pair", (methodPointerType)&m10653, &t1972_TI, &t1976_0_0_0, RuntimeInvoker_t1976_t28_t28, t1972_m10653_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10621_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10621_MI = 
{
	"pick_value", (methodPointerType)&m10621_gshared, &t1972_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28, t1972_m10621_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1973_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1972_m10623_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1973_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10623_MI = 
{
	"CopyTo", (methodPointerType)&m10623_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1972_m10623_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m24296_IGC;
extern TypeInfo m24296_gp_TRet_0_TI;
Il2CppGenericParamFull m24296_gp_TRet_0_TI_GenericParamFull = { { &m24296_IGC, 0}, {NULL, "TRet", 0, 0, NULL} };
static Il2CppGenericParamFull* m24296_IGPA[1] = 
{
	&m24296_gp_TRet_0_TI_GenericParamFull,
};
extern MethodInfo m24296_MI;
Il2CppGenericContainer m24296_IGC = { { NULL, NULL }, NULL, &m24296_MI, 1, 1, m24296_IGPA };
MethodInfo m24296_MI = 
{
	"Do_ICollectionCopyTo", NULL, &t1972_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, true, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10625_MI = 
{
	"Resize", (methodPointerType)&m10625_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10626_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10626_MI = 
{
	"Add", (methodPointerType)&m10626_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t1972_m10626_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10628_MI = 
{
	"Clear", (methodPointerType)&m10628_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 13, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10630_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10630_MI = 
{
	"ContainsKey", (methodPointerType)&m10630_gshared, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1972_m10630_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10632_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10632_MI = 
{
	"ContainsValue", (methodPointerType)&m10632_gshared, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1972_m10632_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t725_0_0_0;
extern Il2CppType t726_0_0_0;
static ParameterInfo t1972_m10634_ParameterInfos[] = 
{
	{"info", 0, 134217728, &EmptyCustomAttributesCache, &t725_0_0_0},
	{"context", 1, 134217728, &EmptyCustomAttributesCache, &t726_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t726 (MethodInfo* method, void* obj, void** args);
MethodInfo m10634_MI = 
{
	"GetObjectData", (methodPointerType)&m10634_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t726, t1972_m10634_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10636_ParameterInfos[] = 
{
	{"sender", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10636_MI = 
{
	"OnDeserialization", (methodPointerType)&m10636_gshared, &t1972_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1972_m10636_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10638_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10638_MI = 
{
	"Remove", (methodPointerType)&m10638_gshared, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1972_m10638_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_1_0_0;
static ParameterInfo t1972_m10639_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_1_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t1525 (MethodInfo* method, void* obj, void** args);
MethodInfo m10639_MI = 
{
	"TryGetValue", (methodPointerType)&m10639_gshared, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t1525, t1972_m10639_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t1975_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10641_MI = 
{
	"get_Values", (methodPointerType)&m10641_gshared, &t1972_TI, &t1975_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10643_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10643_MI = 
{
	"ToTKey", (methodPointerType)&m10643_gshared, &t1972_TI, &t28_0_0_0, RuntimeInvoker_t28_t28, t1972_m10643_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10645_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10645_MI = 
{
	"ToTValue", (methodPointerType)&m10645_gshared, &t1972_TI, &t28_0_0_0, RuntimeInvoker_t28_t28, t1972_m10645_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t1972_m10654_ParameterInfos[] = 
{
	{"pair", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m10654_MI = 
{
	"ContainsKeyValuePair", (methodPointerType)&m10654, &t1972_TI, &t31_0_0_0, RuntimeInvoker_t31_t1976, t1972_m10654_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1972_TI;
extern Il2CppType t1978_0_0_0;
extern void* RuntimeInvoker_t1978 (MethodInfo* method, void* obj, void** args);
MethodInfo m10655_MI = 
{
	"GetEnumerator", (methodPointerType)&m10655, &t1972_TI, &t1978_0_0_0, RuntimeInvoker_t1978, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1972_m10649_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1972_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t850__CustomAttributeCache_m7690;
MethodInfo m10649_MI = 
{
	"<CopyTo>m__0", (methodPointerType)&m10649_gshared, &t1972_TI, &t845_0_0_0, RuntimeInvoker_t845_t28_t28, t1972_m10649_ParameterInfos, &t850__CustomAttributeCache_m7690, 145, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1972_MIs[] =
{
	&m10581_MI,
	&m10583_MI,
	&m10585_MI,
	&m10587_MI,
	&m10589_MI,
	&m10591_MI,
	&m10593_MI,
	&m10595_MI,
	&m10650_MI,
	&m10651_MI,
	&m10599_MI,
	&m10652_MI,
	&m10602_MI,
	&m10604_MI,
	&m10606_MI,
	&m10608_MI,
	&m10610_MI,
	&m10612_MI,
	&m10614_MI,
	&m10616_MI,
	&m10618_MI,
	&m24295_MI,
	&m10653_MI,
	&m10621_MI,
	&m10623_MI,
	&m24296_MI,
	&m10625_MI,
	&m10626_MI,
	&m10628_MI,
	&m10630_MI,
	&m10632_MI,
	&m10634_MI,
	&m10636_MI,
	&m10638_MI,
	&m10639_MI,
	&m10641_MI,
	&m10643_MI,
	&m10645_MI,
	&m10654_MI,
	&m10655_MI,
	&m10649_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10604_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m10591_MI;
extern MethodInfo m10593_MI;
extern MethodInfo m10602_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m10595_MI;
extern MethodInfo m10650_MI;
extern MethodInfo m10628_MI;
extern MethodInfo m10651_MI;
extern MethodInfo m10599_MI;
extern MethodInfo m10652_MI;
extern MethodInfo m10606_MI;
extern MethodInfo m10638_MI;
extern MethodInfo m10589_MI;
extern MethodInfo m10608_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10612_MI;
extern MethodInfo m10626_MI;
extern MethodInfo m10630_MI;
extern MethodInfo m10634_MI;
extern MethodInfo m10636_MI;
extern MethodInfo m10639_MI;
static MethodInfo* t1972_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10604_MI,
	&m10634_MI,
	&m10610_MI,
	&m10591_MI,
	&m10593_MI,
	&m10602_MI,
	&m10610_MI,
	&m10595_MI,
	&m10650_MI,
	&m10628_MI,
	&m10651_MI,
	&m10599_MI,
	&m10652_MI,
	&m10606_MI,
	&m10638_MI,
	&m10589_MI,
	&m10608_MI,
	&m10636_MI,
	&m10612_MI,
	&m10626_MI,
	&m10630_MI,
	&m10634_MI,
	&m10636_MI,
	&m10639_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t386_TI;
extern TypeInfo t661_TI;
extern TypeInfo t4097_TI;
extern TypeInfo t4099_TI;
extern TypeInfo t5272_TI;
extern TypeInfo t749_TI;
extern TypeInfo t1504_TI;
static TypeInfo* t1972_ITIs[] = 
{
	&t611_TI,
	&t386_TI,
	&t661_TI,
	&t4097_TI,
	&t4099_TI,
	&t5272_TI,
	&t749_TI,
	&t1504_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t386_TI;
extern TypeInfo t661_TI;
extern TypeInfo t4097_TI;
extern TypeInfo t4099_TI;
extern TypeInfo t5272_TI;
extern TypeInfo t749_TI;
extern TypeInfo t1504_TI;
static Il2CppInterfaceOffsetPair t1972_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t386_TI, 5},
	{ &t661_TI, 6},
	{ &t4097_TI, 10},
	{ &t4099_TI, 17},
	{ &t5272_TI, 18},
	{ &t749_TI, 19},
	{ &t1504_TI, 21},
};
extern MethodInfo m10614_MI;
extern MethodInfo m10643_MI;
extern MethodInfo m10645_MI;
extern MethodInfo m10612_MI;
extern MethodInfo m10657_MI;
extern MethodInfo m10659_MI;
extern MethodInfo m10626_MI;
extern MethodInfo m10654_MI;
extern MethodInfo m10623_MI;
extern MethodInfo m10638_MI;
extern TypeInfo t1973_TI;
extern MethodInfo m10618_MI;
extern TypeInfo t1972_TI;
extern MethodInfo m10649_MI;
extern TypeInfo t1974_TI;
extern MethodInfo m10701_MI;
extern MethodInfo m18025_MI;
extern MethodInfo m10653_MI;
extern TypeInfo t1982_TI;
extern MethodInfo m10705_MI;
extern MethodInfo m18027_MI;
extern TypeInfo t1978_TI;
extern MethodInfo m10686_MI;
extern TypeInfo t1983_TI;
extern MethodInfo m10709_MI;
extern TypeInfo t28_TI;
extern MethodInfo m23258_MI;
extern MethodInfo m23257_MI;
extern MethodInfo m10625_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m10616_MI;
extern TypeInfo t333_TI;
extern TypeInfo t333_TI;
extern MethodInfo m10610_MI;
extern TypeInfo t1976_TI;
extern MethodInfo m10656_MI;
extern MethodInfo m18028_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m23257_MI;
extern TypeInfo t1973_TI;
extern Il2CppType t1927_0_0_0;
extern TypeInfo t1927_TI;
extern Il2CppType t1973_0_0_0;
extern TypeInfo t1975_TI;
extern MethodInfo m10667_MI;
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
extern TypeInfo t28_TI;
extern MethodInfo m10639_MI;
extern MethodInfo m17022_MI;
static void* t1972_RGCTXData[50] = 
{
	&m10614_MI,
	&m10643_MI,
	&m10645_MI,
	&m10612_MI,
	&m10657_MI,
	&m10659_MI,
	&m10626_MI,
	&m10654_MI,
	&m10623_MI,
	&m10638_MI,
	&t1973_TI,
	&m10618_MI,
	&t1972_TI,
	&m10649_MI,
	&t1974_TI,
	&m10701_MI,
	&m18025_MI,
	&m10653_MI,
	&t1982_TI,
	&m10705_MI,
	&m18027_MI,
	&t1978_TI,
	&m10686_MI,
	&t1983_TI,
	&m10709_MI,
	&t28_TI,
	&m23258_MI,
	&m23257_MI,
	&m10625_MI,
	&m8472_MI,
	&m10616_MI,
	&t333_TI,
	&t333_TI,
	&m10610_MI,
	&t1976_TI,
	&m10656_MI,
	&m18028_MI,
	&m8472_MI,
	&m23257_MI,
	&t1973_TI,
	(void*)&t1927_0_0_0,
	&t1927_TI,
	(void*)&t1973_0_0_0,
	&t1975_TI,
	&m10667_MI,
	(void*)&t28_0_0_0,
	(void*)&t28_0_0_0,
	&t28_TI,
	&m10639_MI,
	&m17022_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1972_0_0_0;
extern Il2CppType t1972_1_0_0;
extern TypeInfo t28_TI;
struct t1972;
extern TypeInfo t1972_TI;
extern Il2CppGenericClass t1972_GC;
extern CustomAttributesCache t850__CustomAttributeCache;
extern CustomAttributesCache t850__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t850__CustomAttributeCache_m7690;
TypeInfo t1972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Dictionary`2", "System.Collections.Generic", t1972_MIs, t1972_PIs, t1972_FIs, NULL, &t28_TI, NULL, NULL, &t1972_TI, t1972_ITIs, t1972_VT, &t850__CustomAttributeCache, &t1972_TI, &t1972_0_0_0, &t1972_1_0_0, t1972_IOs, &t1972_GC, NULL, t1972_FDVs, NULL, t1972_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1972), 0, -1, sizeof(t1972_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 41, 7, 16, 0, 0, 28, 8, 8};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4097_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m24297_MI;
static PropertyInfo t4097____Count_PropertyInfo = 
{
	&t4097_TI, "Count", &m24297_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24298_MI;
static PropertyInfo t4097____IsReadOnly_PropertyInfo = 
{
	&t4097_TI, "IsReadOnly", &m24298_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4097_PIs[] =
{
	&t4097____Count_PropertyInfo,
	&t4097____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4097_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24297_MI = 
{
	"get_Count", NULL, &t4097_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4097_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24298_MI = 
{
	"get_IsReadOnly", NULL, &t4097_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t4097_m24299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24299_MI = 
{
	"Add", NULL, &t4097_TI, &t30_0_0_0, RuntimeInvoker_t30_t1976, t4097_m24299_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4097_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24300_MI = 
{
	"Clear", NULL, &t4097_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t4097_m24301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24301_MI = 
{
	"Contains", NULL, &t4097_TI, &t31_0_0_0, RuntimeInvoker_t31_t1976, t4097_m24301_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1973_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4097_m24302_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1973_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24302_MI = 
{
	"CopyTo", NULL, &t4097_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4097_m24302_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t4097_m24303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t4097_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24303_MI = 
{
	"Remove", NULL, &t4097_TI, &t31_0_0_0, RuntimeInvoker_t31_t1976, t4097_m24303_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4097_MIs[] =
{
	&m24297_MI,
	&m24298_MI,
	&m24299_MI,
	&m24300_MI,
	&m24301_MI,
	&m24302_MI,
	&m24303_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4099_TI;
static TypeInfo* t4097_ITIs[] = 
{
	&t611_TI,
	&t4099_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4097_0_0_0;
extern Il2CppType t4097_1_0_0;
struct t4097;
extern TypeInfo t4097_TI;
extern Il2CppGenericClass t4097_GC;
TypeInfo t4097_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4097_MIs, t4097_PIs, NULL, NULL, NULL, NULL, NULL, &t4097_TI, t4097_ITIs, NULL, &EmptyCustomAttributesCache, &t4097_TI, &t4097_0_0_0, &t4097_1_0_0, NULL, &t4097_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4099_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern TypeInfo t4099_TI;
extern Il2CppType t1977_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24304_MI = 
{
	"GetEnumerator", NULL, &t4099_TI, &t1977_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4099_MIs[] =
{
	&m24304_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4099_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4099_0_0_0;
extern Il2CppType t4099_1_0_0;
struct t4099;
extern TypeInfo t4099_TI;
extern Il2CppGenericClass t4099_GC;
TypeInfo t4099_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4099_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4099_TI, t4099_ITIs, NULL, &EmptyCustomAttributesCache, &t4099_TI, &t4099_0_0_0, &t4099_1_0_0, NULL, &t4099_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1977_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m24305_MI;
static PropertyInfo t1977____Current_PropertyInfo = 
{
	&t1977_TI, "Current", &m24305_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1977_PIs[] =
{
	&t1977____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1977_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24305_MI = 
{
	"get_Current", NULL, &t1977_TI, &t1976_0_0_0, RuntimeInvoker_t1976, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1977_MIs[] =
{
	&m24305_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t1977_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1977_0_0_0;
extern Il2CppType t1977_1_0_0;
struct t1977;
extern TypeInfo t1977_TI;
extern Il2CppGenericClass t1977_GC;
TypeInfo t1977_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1977_MIs, t1977_PIs, NULL, NULL, NULL, NULL, NULL, &t1977_TI, t1977_ITIs, NULL, &EmptyCustomAttributesCache, &t1977_TI, &t1977_0_0_0, &t1977_1_0_0, NULL, &t1977_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1976_TI;

extern TypeInfo t1976_TI;
extern TypeInfo t455_TI;
extern TypeInfo t18_TI;
extern TypeInfo t28_TI;
extern MethodInfo m10658_MI;
extern MethodInfo m10660_MI;
extern MethodInfo m10657_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10659_MI;
extern MethodInfo m3550_MI;


extern MethodInfo m10656_MI;
 void m10656_gshared (t1976 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	{
		(( void (*) (t1976 * __this, t28 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		(( void (*) (t1976 * __this, t28 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return;
	}
}
extern MethodInfo m10657_MI;
 t28 * m10657_gshared (t1976 * __this, MethodInfo* method)
{
	{
		t28 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10658_MI;
 void m10658_gshared (t1976 * __this, t28 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10659_MI;
 t28 * m10659_gshared (t1976 * __this, MethodInfo* method)
{
	{
		t28 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10660_MI;
 void m10660_gshared (t1976 * __this, t28 * p0, MethodInfo* method)
{
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m10661_MI;
 t18* m10661_gshared (t1976 * __this, MethodInfo* method)
{
	t28 * V_0 = {0};
	t28 * V_1 = {0};
	int32_t G_B2_0 = 0;
	t455* G_B2_1 = {0};
	t455* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t455* G_B1_1 = {0};
	t455* G_B1_2 = {0};
	t18* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t455* G_B3_2 = {0};
	t455* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t455* G_B5_1 = {0};
	t455* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t455* G_B4_1 = {0};
	t455* G_B4_2 = {0};
	t18* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t455* G_B6_2 = {0};
	t455* G_B6_3 = {0};
	{
		t455* L_0 = ((t455*)SZArrayNew(InitializedTypeInfo(&t455_TI), 5));
		ArrayElementTypeCheck (L_0, (t18*) &_stringLiteral182);
		*((t18**)(t18**)SZArrayLdElema(L_0, 0)) = (t18*)(t18*) &_stringLiteral182;
		t455* L_1 = L_0;
		t28 * L_2 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		t28 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t28 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t28 * L_4 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		V_0 = L_4;
		t18* L_5 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m206_MI, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		G_B3_0 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t18**)(t18**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t18*)G_B3_0;
		t455* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, (t18*) &_stringLiteral191);
		*((t18**)(t18**)SZArrayLdElema(L_6, 2)) = (t18*)(t18*) &_stringLiteral191;
		t455* L_7 = L_6;
		t28 * L_8 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t28 * L_9 = L_8;
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!((t28 *)L_9))
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0066;
		}
	}
	{
		t28 * L_10 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		V_1 = L_10;
		t18* L_11 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m206_MI, (*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		G_B6_0 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t18**)(t18**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t18*)G_B6_0;
		t455* L_12 = G_B6_3;
		ArrayElementTypeCheck (L_12, (t18*) &_stringLiteral183);
		*((t18**)(t18**)SZArrayLdElema(L_12, 4)) = (t18*)(t18*) &_stringLiteral183;
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_13 = m3550(NULL, L_12, &m3550_MI);
		return L_13;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
extern Il2CppType t28_0_0_1;
FieldInfo t1976_f0_FieldInfo = 
{
	"key", &t28_0_0_1, &t1976_TI, offsetof(t1976, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t1976_f1_FieldInfo = 
{
	"value", &t28_0_0_1, &t1976_TI, offsetof(t1976, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1976_FIs[] =
{
	&t1976_f0_FieldInfo,
	&t1976_f1_FieldInfo,
	NULL
};
extern MethodInfo m10657_MI;
extern MethodInfo m10658_MI;
static PropertyInfo t1976____Key_PropertyInfo = 
{
	&t1976_TI, "Key", &m10657_MI, &m10658_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10659_MI;
extern MethodInfo m10660_MI;
static PropertyInfo t1976____Value_PropertyInfo = 
{
	&t1976_TI, "Value", &m10659_MI, &m10660_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1976_PIs[] =
{
	&t1976____Key_PropertyInfo,
	&t1976____Value_PropertyInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1976_m10656_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1976_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10656_MI = 
{
	".ctor", (methodPointerType)&m10656_gshared, &t1976_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t1976_m10656_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1976_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10657_MI = 
{
	"get_Key", (methodPointerType)&m10657_gshared, &t1976_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1976_m10658_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1976_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10658_MI = 
{
	"set_Key", (methodPointerType)&m10658_gshared, &t1976_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1976_m10658_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1976_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10659_MI = 
{
	"get_Value", (methodPointerType)&m10659_gshared, &t1976_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1976_m10660_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1976_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10660_MI = 
{
	"set_Value", (methodPointerType)&m10660_gshared, &t1976_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1976_m10660_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1976_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10661_MI = 
{
	"ToString", (methodPointerType)&m10661_gshared, &t1976_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1976_MIs[] =
{
	&m10656_MI,
	&m10657_MI,
	&m10658_MI,
	&m10659_MI,
	&m10660_MI,
	&m10661_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m10661_MI;
static MethodInfo* t1976_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m10661_MI,
};
extern MethodInfo m10658_MI;
extern MethodInfo m10660_MI;
extern MethodInfo m10657_MI;
extern TypeInfo t28_TI;
extern MethodInfo m10659_MI;
extern TypeInfo t28_TI;
static void* t1976_RGCTXData[6] = 
{
	&m10658_MI,
	&m10660_MI,
	&m10657_MI,
	&t28_TI,
	&m10659_MI,
	&t28_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1976_0_0_0;
extern Il2CppType t1976_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1976_TI;
extern Il2CppGenericClass t1976_GC;
extern CustomAttributesCache t855__CustomAttributeCache;
TypeInfo t1976_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1976_MIs, t1976_PIs, t1976_FIs, NULL, &t26_TI, NULL, NULL, &t1976_TI, NULL, t1976_VT, &t855__CustomAttributeCache, &t1976_TI, &t1976_0_0_0, &t1976_1_0_0, NULL, &t1976_GC, NULL, NULL, NULL, t1976_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1976)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#include "t1979.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1979_TI;
#include "t1979MD.h"

extern TypeInfo t1979_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10666_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18013_MI;
struct t29;
 t1976  m18013 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18013_MI;


extern MethodInfo m10662_MI;
 void m10662 (t1979 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10663_MI;
 t28 * m10663 (t1979 * __this, MethodInfo* method){
	{
		t1976  L_0 = m10666(__this, &m10666_MI);
		t1976  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1976_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10664_MI;
 void m10664 (t1979 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10665_MI;
 bool m10665 (t1979 * __this, MethodInfo* method){
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
extern MethodInfo m10666_MI;
 t1976  m10666 (t1979 * __this, MethodInfo* method){
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
		t1976  L_8 = m18013(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18013_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern Il2CppType t29_0_0_1;
FieldInfo t1979_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t1979_TI, offsetof(t1979, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1979_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t1979_TI, offsetof(t1979, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1979_FIs[] =
{
	&t1979_f0_FieldInfo,
	&t1979_f1_FieldInfo,
	NULL
};
extern MethodInfo m10663_MI;
static PropertyInfo t1979____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1979_TI, "System.Collections.IEnumerator.Current", &m10663_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10666_MI;
static PropertyInfo t1979____Current_PropertyInfo = 
{
	&t1979_TI, "Current", &m10666_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1979_PIs[] =
{
	&t1979____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1979____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t1979_m10662_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t1979_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10662_MI = 
{
	".ctor", (methodPointerType)&m10662, &t1979_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1979_m10662_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10663_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10663, &t1979_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10664_MI = 
{
	"Dispose", (methodPointerType)&m10664, &t1979_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10665_MI = 
{
	"MoveNext", (methodPointerType)&m10665, &t1979_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1979_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m10666_MI = 
{
	"get_Current", (methodPointerType)&m10666, &t1979_TI, &t1976_0_0_0, RuntimeInvoker_t1976, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1979_MIs[] =
{
	&m10662_MI,
	&m10663_MI,
	&m10664_MI,
	&m10665_MI,
	&m10666_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10663_MI;
extern MethodInfo m10665_MI;
extern MethodInfo m10664_MI;
extern MethodInfo m10666_MI;
static MethodInfo* t1979_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10663_MI,
	&m10665_MI,
	&m10664_MI,
	&m10666_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1977_TI;
static TypeInfo* t1979_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1977_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1977_TI;
static Il2CppInterfaceOffsetPair t1979_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1977_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1979_0_0_0;
extern Il2CppType t1979_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1979_TI;
extern Il2CppGenericClass t1979_GC;
extern TypeInfo t29_TI;
TypeInfo t1979_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1979_MIs, t1979_PIs, t1979_FIs, NULL, &t26_TI, NULL, &t29_TI, &t1979_TI, t1979_ITIs, t1979_VT, &EmptyCustomAttributesCache, &t1979_TI, &t1979_0_0_0, &t1979_1_0_0, t1979_IOs, &t1979_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1979)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4098_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern MethodInfo m24306_MI;
extern MethodInfo m24307_MI;
static PropertyInfo t4098____Item_PropertyInfo = 
{
	&t4098_TI, "Item", &m24306_MI, &m24307_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4098_PIs[] =
{
	&t4098____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1976_0_0_0;
static ParameterInfo t4098_m24308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24308_MI = 
{
	"IndexOf", NULL, &t4098_TI, &t47_0_0_0, RuntimeInvoker_t47_t1976, t4098_m24308_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1976_0_0_0;
static ParameterInfo t4098_m24309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24309_MI = 
{
	"Insert", NULL, &t4098_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t1976, t4098_m24309_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4098_m24310_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24310_MI = 
{
	"RemoveAt", NULL, &t4098_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4098_m24310_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4098_m24306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24306_MI = 
{
	"get_Item", NULL, &t4098_TI, &t1976_0_0_0, RuntimeInvoker_t1976_t47, t4098_m24306_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1976_0_0_0;
static ParameterInfo t4098_m24307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1976_0_0_0},
};
extern TypeInfo t4098_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m24307_MI = 
{
	"set_Item", NULL, &t4098_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t1976, t4098_m24307_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4098_MIs[] =
{
	&m24308_MI,
	&m24309_MI,
	&m24310_MI,
	&m24306_MI,
	&m24307_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4097_TI;
extern TypeInfo t4099_TI;
static TypeInfo* t4098_ITIs[] = 
{
	&t611_TI,
	&t4097_TI,
	&t4099_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4098_0_0_0;
extern Il2CppType t4098_1_0_0;
struct t4098;
extern TypeInfo t4098_TI;
extern Il2CppGenericClass t4098_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4098_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4098_MIs, t4098_PIs, NULL, NULL, NULL, NULL, NULL, &t4098_TI, t4098_ITIs, NULL, &t1418__CustomAttributeCache, &t4098_TI, &t4098_0_0_0, &t4098_1_0_0, NULL, &t4098_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5272_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<System.Object,System.Object>
extern Il2CppType t28_0_0_0;
static ParameterInfo t5272_m24311_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t5272_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24311_MI = 
{
	"Remove", NULL, &t5272_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5272_m24311_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5272_MIs[] =
{
	&m24311_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4097_TI;
extern TypeInfo t4099_TI;
static TypeInfo* t5272_ITIs[] = 
{
	&t611_TI,
	&t4097_TI,
	&t4099_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5272_0_0_0;
extern Il2CppType t5272_1_0_0;
struct t5272;
extern TypeInfo t5272_TI;
extern Il2CppGenericClass t5272_GC;
extern CustomAttributesCache t1478__CustomAttributeCache;
TypeInfo t5272_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5272_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5272_TI, t5272_ITIs, NULL, &t1478__CustomAttributeCache, &t5272_TI, &t5272_0_0_0, &t5272_1_0_0, NULL, &t5272_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1975_TI;

#include "t357.h"
#include "t1980.h"
#include "t1981.h"
extern TypeInfo t1975_TI;
extern TypeInfo t661_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1972_TI;
extern TypeInfo t47_TI;
extern TypeInfo t350_TI;
extern TypeInfo t357_TI;
extern TypeInfo t1980_TI;
extern TypeInfo t333_TI;
extern TypeInfo t30_TI;
extern TypeInfo t1981_TI;
#include "t357MD.h"
#include "t1981MD.h"
#include "t1980MD.h"
extern MethodInfo m7526_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m203_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m7136_MI;
extern MethodInfo m10632_MI;
extern MethodInfo m10679_MI;
extern MethodInfo m10678_MI;
extern MethodInfo m10618_MI;
extern MethodInfo m10621_MI;
extern MethodInfo m10697_MI;
extern MethodInfo m18024_MI;
extern MethodInfo m18023_MI;
extern MethodInfo m10681_MI;
struct t1972;
 void m18024_gshared (t1972 * __this, t29 * p0, int32_t p1, t1981 * p2, MethodInfo* method);
#define m18024(__this, p0, p1, p2, method) (void)m18024_gshared((t1972 *)__this, (t29 *)p0, (int32_t)p1, (t1981 *)p2, method)
extern MethodInfo m18024_MI;
struct t1972;
 void m18023 (t1972 * __this, t333* p0, int32_t p1, t1981 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18023_MI;


extern MethodInfo m10667_MI;
 void m10667_gshared (t1975 * __this, t1972 * p0, MethodInfo* method)
{
	{
		m203(__this, &m203_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t350 * L_0 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_0, (t18*) &_stringLiteral557, &m3074_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m10668_MI;
 void m10668_gshared (t1975 * __this, t28 * p0, MethodInfo* method)
{
	{
		t357 * L_0 = (t357 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t357_TI));
		m7136(L_0, (t18*) &_stringLiteral558, &m7136_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10669_MI;
 void m10669_gshared (t1975 * __this, MethodInfo* method)
{
	{
		t357 * L_0 = (t357 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t357_TI));
		m7136(L_0, (t18*) &_stringLiteral558, &m7136_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10670_MI;
 bool m10670_gshared (t1975 * __this, t28 * p0, MethodInfo* method)
{
	{
		t1972 * L_0 = (__this->f0);
		bool L_1 = (( bool (*) (t1972 * __this, t28 * p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(L_0, p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return L_1;
	}
}
extern MethodInfo m10671_MI;
 bool m10671_gshared (t1975 * __this, t28 * p0, MethodInfo* method)
{
	{
		t357 * L_0 = (t357 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t357_TI));
		m7136(L_0, (t18*) &_stringLiteral558, &m7136_MI);
		il2cpp_codegen_raise_exception (L_0);
	}
}
extern MethodInfo m10672_MI;
 t28* m10672_gshared (t1975 * __this, MethodInfo* method)
{
	{
		t1980  L_0 = (( t1980  (*) (t1975 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t1980  L_1 = L_0;
		t28 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		return (t28*)L_2;
	}
}
extern MethodInfo m10673_MI;
 void m10673_gshared (t1975 * __this, t29 * p0, int32_t p1, MethodInfo* method)
{
	t333* V_0 = {0};
	{
		V_0 = ((t333*)IsInst(p0, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3)));
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker2< t333*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4), __this, V_0, p1);
		return;
	}

IL_0013:
	{
		t1972 * L_0 = (__this->f0);
		(( void (*) (t1972 * __this, t29 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_0, p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		t1972 * L_1 = (__this->f0);
		t49 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6) };
		t1981 * L_3 = (t1981 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7));
		(( void (*) (t1981 * __this, t28 * p0, t49 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		(( void (*) (t1972 * __this, t29 * p0, int32_t p1, t1981 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->method)(L_1, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
		return;
	}
}
extern MethodInfo m10674_MI;
 t28 * m10674_gshared (t1975 * __this, MethodInfo* method)
{
	{
		t1980  L_0 = (( t1980  (*) (t1975 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t1980  L_1 = L_0;
		t28 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		return (t28 *)L_2;
	}
}
extern MethodInfo m10675_MI;
 bool m10675_gshared (t1975 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m10676_MI;
 bool m10676_gshared (t1975 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10677_MI;
 t28 * m10677_gshared (t1975 * __this, MethodInfo* method)
{
	{
		t1972 * L_0 = (__this->f0);
		t28 * L_1 = (t28 *)InterfaceFuncInvoker0< t28 * >::Invoke(&m7526_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m10678_MI;
 void m10678_gshared (t1975 * __this, t333* p0, int32_t p1, MethodInfo* method)
{
	{
		t1972 * L_0 = (__this->f0);
		(( void (*) (t1972 * __this, t29 * p0, int32_t p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_0, (t29 *)(t29 *)p0, p1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		t1972 * L_1 = (__this->f0);
		t49 L_2 = { IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6) };
		t1981 * L_3 = (t1981 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 7));
		(( void (*) (t1981 * __this, t28 * p0, t49 p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(L_3, NULL, L_2, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		(( void (*) (t1972 * __this, t333* p0, int32_t p1, t1981 * p2, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->method)(L_1, p0, p1, L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		return;
	}
}
extern MethodInfo m10679_MI;
 t1980  m10679 (t1975 * __this, MethodInfo* method){
	{
		t1972 * L_0 = (__this->f0);
		t1980  L_1 = {0};
		m10681(&L_1, L_0, &m10681_MI);
		return L_1;
	}
}
extern MethodInfo m10680_MI;
 int32_t m10680_gshared (t1975 * __this, MethodInfo* method)
{
	{
		t1972 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12), L_0);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
extern Il2CppType t1972_0_0_1;
FieldInfo t1975_f0_FieldInfo = 
{
	"dictionary", &t1972_0_0_1, &t1975_TI, offsetof(t1975, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1975_FIs[] =
{
	&t1975_f0_FieldInfo,
	NULL
};
extern MethodInfo m10675_MI;
static PropertyInfo t1975____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1975_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10675_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10676_MI;
static PropertyInfo t1975____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1975_TI, "System.Collections.ICollection.IsSynchronized", &m10676_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10677_MI;
static PropertyInfo t1975____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1975_TI, "System.Collections.ICollection.SyncRoot", &m10677_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10680_MI;
static PropertyInfo t1975____Count_PropertyInfo = 
{
	&t1975_TI, "Count", &m10680_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1975_PIs[] =
{
	&t1975____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1975____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1975____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1975____Count_PropertyInfo,
	NULL
};
extern Il2CppType t1972_0_0_0;
static ParameterInfo t1975_m10667_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1972_0_0_0},
};
extern TypeInfo t1975_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10667_MI = 
{
	".ctor", (methodPointerType)&m10667_gshared, &t1975_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1975_m10667_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1975_m10668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1975_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10668_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10668_gshared, &t1975_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1975_m10668_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10669_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10669_gshared, &t1975_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1975_m10670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1975_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10670_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10670_gshared, &t1975_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1975_m10670_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1975_m10671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1975_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10671_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10671_gshared, &t1975_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1975_m10671_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t358_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10672_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10672_gshared, &t1975_TI, &t358_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1975_m10673_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1975_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10673_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10673_gshared, &t1975_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1975_m10673_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10674_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10674_gshared, &t1975_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10675_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10675_gshared, &t1975_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10676_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10676_gshared, &t1975_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10677_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10677_gshared, &t1975_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1975_m10678_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1975_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10678_MI = 
{
	"CopyTo", (methodPointerType)&m10678_gshared, &t1975_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1975_m10678_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t1980_0_0_0;
extern void* RuntimeInvoker_t1980 (MethodInfo* method, void* obj, void** args);
MethodInfo m10679_MI = 
{
	"GetEnumerator", (methodPointerType)&m10679, &t1975_TI, &t1980_0_0_0, RuntimeInvoker_t1980, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1975_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10680_MI = 
{
	"get_Count", (methodPointerType)&m10680_gshared, &t1975_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1975_MIs[] =
{
	&m10667_MI,
	&m10668_MI,
	&m10669_MI,
	&m10670_MI,
	&m10671_MI,
	&m10672_MI,
	&m10673_MI,
	&m10674_MI,
	&m10675_MI,
	&m10676_MI,
	&m10677_MI,
	&m10678_MI,
	&m10679_MI,
	&m10680_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10674_MI;
extern MethodInfo m10680_MI;
extern MethodInfo m10676_MI;
extern MethodInfo m10677_MI;
extern MethodInfo m10673_MI;
extern MethodInfo m10680_MI;
extern MethodInfo m10675_MI;
extern MethodInfo m10668_MI;
extern MethodInfo m10669_MI;
extern MethodInfo m10670_MI;
extern MethodInfo m10678_MI;
extern MethodInfo m10671_MI;
extern MethodInfo m10672_MI;
static MethodInfo* t1975_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10674_MI,
	&m10680_MI,
	&m10676_MI,
	&m10677_MI,
	&m10673_MI,
	&m10680_MI,
	&m10675_MI,
	&m10668_MI,
	&m10669_MI,
	&m10670_MI,
	&m10678_MI,
	&m10671_MI,
	&m10672_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1692_TI;
extern TypeInfo t1693_TI;
static TypeInfo* t1975_ITIs[] = 
{
	&t611_TI,
	&t661_TI,
	&t1692_TI,
	&t1693_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1692_TI;
extern TypeInfo t1693_TI;
static Il2CppInterfaceOffsetPair t1975_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t661_TI, 5},
	{ &t1692_TI, 9},
	{ &t1693_TI, 16},
};
extern MethodInfo m10632_MI;
extern MethodInfo m10679_MI;
extern TypeInfo t1980_TI;
extern TypeInfo t333_TI;
extern MethodInfo m10678_MI;
extern MethodInfo m10618_MI;
extern MethodInfo m10621_MI;
extern TypeInfo t1981_TI;
extern MethodInfo m10697_MI;
extern MethodInfo m18024_MI;
extern MethodInfo m18023_MI;
extern MethodInfo m10681_MI;
extern MethodInfo m10610_MI;
static void* t1975_RGCTXData[13] = 
{
	&m10632_MI,
	&m10679_MI,
	&t1980_TI,
	&t333_TI,
	&m10678_MI,
	&m10618_MI,
	&m10621_MI,
	&t1981_TI,
	&m10697_MI,
	&m18024_MI,
	&m18023_MI,
	&m10681_MI,
	&m10610_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1975_0_0_0;
extern Il2CppType t1975_1_0_0;
extern TypeInfo t28_TI;
struct t1975;
extern TypeInfo t1975_TI;
extern Il2CppGenericClass t1975_GC;
extern TypeInfo t850_TI;
extern CustomAttributesCache t848__CustomAttributeCache;
TypeInfo t1975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1975_MIs, t1975_PIs, t1975_FIs, NULL, &t28_TI, NULL, &t850_TI, &t1975_TI, t1975_ITIs, t1975_VT, &t848__CustomAttributeCache, &t1975_TI, &t1975_0_0_0, &t1975_1_0_0, t1975_IOs, &t1975_GC, NULL, NULL, NULL, t1975_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1975), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1980_TI;

extern TypeInfo t1980_TI;
extern TypeInfo t28_TI;
extern TypeInfo t1978_TI;
extern TypeInfo t30_TI;
extern TypeInfo t31_TI;
extern MethodInfo m10693_MI;
extern MethodInfo m10659_MI;
extern MethodInfo m10655_MI;
extern MethodInfo m10696_MI;
extern MethodInfo m10690_MI;


extern MethodInfo m10681_MI;
 void m10681_gshared (t1980 * __this, t1972 * p0, MethodInfo* method)
{
	{
		t1978  L_0 = (( t1978  (*) (t1972 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10682_MI;
 t28 * m10682_gshared (t1980 * __this, MethodInfo* method)
{
	{
		t1978 * L_0 = &(__this->f0);
		t28 * L_1 = (( t28 * (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		t28 * L_2 = L_1;
		return ((t28 *)L_2);
	}
}
extern MethodInfo m10683_MI;
 void m10683_gshared (t1980 * __this, MethodInfo* method)
{
	{
		t1978 * L_0 = &(__this->f0);
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		return;
	}
}
extern MethodInfo m10684_MI;
 bool m10684_gshared (t1980 * __this, MethodInfo* method)
{
	{
		t1978 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
extern MethodInfo m10685_MI;
 t28 * m10685_gshared (t1980 * __this, MethodInfo* method)
{
	{
		t1978 * L_0 = &(__this->f0);
		t1976 * L_1 = &(L_0->f3);
		t28 * L_2 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
extern Il2CppType t1978_0_0_1;
FieldInfo t1980_f0_FieldInfo = 
{
	"host_enumerator", &t1978_0_0_1, &t1980_TI, offsetof(t1980, f0) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1980_FIs[] =
{
	&t1980_f0_FieldInfo,
	NULL
};
extern MethodInfo m10682_MI;
static PropertyInfo t1980____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1980_TI, "System.Collections.IEnumerator.Current", &m10682_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10685_MI;
static PropertyInfo t1980____Current_PropertyInfo = 
{
	&t1980_TI, "Current", &m10685_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1980_PIs[] =
{
	&t1980____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1980____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1972_0_0_0;
static ParameterInfo t1980_m10681_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1972_0_0_0},
};
extern TypeInfo t1980_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10681_MI = 
{
	".ctor", (methodPointerType)&m10681_gshared, &t1980_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1980_m10681_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1980_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10682_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10682_gshared, &t1980_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1980_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10683_MI = 
{
	"Dispose", (methodPointerType)&m10683_gshared, &t1980_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1980_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10684_MI = 
{
	"MoveNext", (methodPointerType)&m10684_gshared, &t1980_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1980_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10685_MI = 
{
	"get_Current", (methodPointerType)&m10685_gshared, &t1980_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1980_MIs[] =
{
	&m10681_MI,
	&m10682_MI,
	&m10683_MI,
	&m10684_MI,
	&m10685_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10682_MI;
extern MethodInfo m10684_MI;
extern MethodInfo m10683_MI;
extern MethodInfo m10685_MI;
static MethodInfo* t1980_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10682_MI,
	&m10684_MI,
	&m10683_MI,
	&m10685_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t358_TI;
static TypeInfo* t1980_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t358_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t358_TI;
static Il2CppInterfaceOffsetPair t1980_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t358_TI, 7},
};
extern MethodInfo m10655_MI;
extern MethodInfo m10693_MI;
extern TypeInfo t28_TI;
extern MethodInfo m10696_MI;
extern MethodInfo m10690_MI;
extern MethodInfo m10659_MI;
static void* t1980_RGCTXData[6] = 
{
	&m10655_MI,
	&m10693_MI,
	&t28_TI,
	&m10696_MI,
	&m10690_MI,
	&m10659_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1980_0_0_0;
extern Il2CppType t1980_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1980_TI;
extern Il2CppGenericClass t1980_GC;
extern TypeInfo t848_TI;
TypeInfo t1980_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1980_MIs, t1980_PIs, t1980_FIs, NULL, &t26_TI, NULL, &t848_TI, &t1980_TI, t1980_ITIs, t1980_VT, &EmptyCustomAttributesCache, &t1980_TI, &t1980_0_0_0, &t1980_1_0_0, t1980_IOs, &t1980_GC, NULL, NULL, NULL, t1980_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1980)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1978_TI;

extern TypeInfo t1978_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t28_TI;
extern TypeInfo t845_TI;
extern TypeInfo t1972_TI;
extern TypeInfo t843_TI;
extern TypeInfo t1304_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10695_MI;
extern MethodInfo m10657_MI;
extern MethodInfo m10659_MI;
extern MethodInfo m4480_MI;
extern MethodInfo m10692_MI;
extern MethodInfo m10694_MI;
extern MethodInfo m10656_MI;
extern MethodInfo m7238_MI;
extern MethodInfo m7034_MI;


extern MethodInfo m10686_MI;
 void m10686_gshared (t1978 * __this, t1972 * p0, MethodInfo* method)
{
	{
		__this->f0 = p0;
		int32_t L_0 = (p0->f14);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m10687_MI;
 t28 * m10687_gshared (t1978 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1976  L_0 = (__this->f3);
		t1976  L_1 = L_0;
		t28 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern MethodInfo m10688_MI;
 t845  m10688_gshared (t1978 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1976 * L_0 = &(__this->f3);
		t28 * L_1 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		t28 * L_2 = L_1;
		t1976 * L_3 = &(__this->f3);
		t28 * L_4 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_3, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t28 * L_5 = L_4;
		t845  L_6 = {0};
		m4480(&L_6, ((t28 *)L_2), ((t28 *)L_5), &m4480_MI);
		return L_6;
	}
}
extern MethodInfo m10689_MI;
 t28 * m10689_gshared (t1978 * __this, MethodInfo* method)
{
	{
		t28 * L_0 = (( t28 * (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		t28 * L_1 = L_0;
		return ((t28 *)L_1);
	}
}
extern MethodInfo m10690_MI;
 bool m10690_gshared (t1978 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		V_0 = V_1;
		t1972 * L_3 = (__this->f0);
		t1468* L_4 = (L_3->f5);
		int32_t L_5 = (((t843 *)(t843 *)SZArrayLdElema(L_4, V_0))->f0);
		if (!((int32_t)(L_5&((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1972 * L_6 = (__this->f0);
		t333* L_7 = (L_6->f6);
		t1972 * L_8 = (__this->f0);
		t333* L_9 = (L_8->f7);
		t1976  L_10 = {0};
		(( void (*) (t1976 * __this, t28 * p0, t28 * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->method)(&L_10, (*(t28 **)(t28 **)SZArrayLdElema(L_7, V_0)), (*(t28 **)(t28 **)SZArrayLdElema(L_9, V_0)), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		__this->f3 = L_10;
		return 1;
	}

IL_0072:
	{
		int32_t L_11 = (__this->f1);
		t1972 * L_12 = (__this->f0);
		int32_t L_13 = (L_12->f8);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern MethodInfo m10691_MI;
 t1976  m10691 (t1978 * __this, MethodInfo* method){
	{
		t1976  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10692_MI;
 t28 * m10692_gshared (t1978 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1976 * L_0 = &(__this->f3);
		t28 * L_1 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return L_1;
	}
}
extern MethodInfo m10693_MI;
 t28 * m10693_gshared (t1978 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		t1976 * L_0 = &(__this->f3);
		t28 * L_1 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
extern MethodInfo m10694_MI;
 void m10694_gshared (t1978 * __this, MethodInfo* method)
{
	{
		t1972 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1304 * L_1 = (t1304 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1304_TI));
		m7238(L_1, (t18*)NULL, &m7238_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_000f:
	{
		t1972 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1287 * L_5 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7034(L_5, (t18*) &_stringLiteral555, &m7034_MI);
		il2cpp_codegen_raise_exception (L_5);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10695_MI;
 void m10695_gshared (t1978 * __this, MethodInfo* method)
{
	{
		(( void (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1287 * L_1 = (t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1287_TI));
		m7034(L_1, (t18*) &_stringLiteral556, &m7034_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_001a:
	{
		return;
	}
}
extern MethodInfo m10696_MI;
 void m10696_gshared (t1978 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t1972 *)NULL;
		return;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
extern Il2CppType t1972_0_0_1;
FieldInfo t1978_f0_FieldInfo = 
{
	"dictionary", &t1972_0_0_1, &t1978_TI, offsetof(t1978, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1978_f1_FieldInfo = 
{
	"next", &t47_0_0_1, &t1978_TI, offsetof(t1978, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1978_f2_FieldInfo = 
{
	"stamp", &t47_0_0_1, &t1978_TI, offsetof(t1978, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t1976_0_0_3;
FieldInfo t1978_f3_FieldInfo = 
{
	"current", &t1976_0_0_3, &t1978_TI, offsetof(t1978, f3) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1978_FIs[] =
{
	&t1978_f0_FieldInfo,
	&t1978_f1_FieldInfo,
	&t1978_f2_FieldInfo,
	&t1978_f3_FieldInfo,
	NULL
};
extern MethodInfo m10687_MI;
static PropertyInfo t1978____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1978_TI, "System.Collections.IEnumerator.Current", &m10687_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10688_MI;
static PropertyInfo t1978____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1978_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10688_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10689_MI;
static PropertyInfo t1978____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1978_TI, "System.Collections.IDictionaryEnumerator.Key", &m10689_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10691_MI;
static PropertyInfo t1978____Current_PropertyInfo = 
{
	&t1978_TI, "Current", &m10691_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10692_MI;
static PropertyInfo t1978____CurrentKey_PropertyInfo = 
{
	&t1978_TI, "CurrentKey", &m10692_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10693_MI;
static PropertyInfo t1978____CurrentValue_PropertyInfo = 
{
	&t1978_TI, "CurrentValue", &m10693_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1978_PIs[] =
{
	&t1978____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1978____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1978____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1978____Current_PropertyInfo,
	&t1978____CurrentKey_PropertyInfo,
	&t1978____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t1972_0_0_0;
static ParameterInfo t1978_m10686_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t1972_0_0_0},
};
extern TypeInfo t1978_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10686_MI = 
{
	".ctor", (methodPointerType)&m10686_gshared, &t1978_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1978_m10686_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10687_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10687_gshared, &t1978_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845 (MethodInfo* method, void* obj, void** args);
MethodInfo m10688_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10688_gshared, &t1978_TI, &t845_0_0_0, RuntimeInvoker_t845, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10689_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10689_gshared, &t1978_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10690_MI = 
{
	"MoveNext", (methodPointerType)&m10690_gshared, &t1978_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976 (MethodInfo* method, void* obj, void** args);
MethodInfo m10691_MI = 
{
	"get_Current", (methodPointerType)&m10691, &t1978_TI, &t1976_0_0_0, RuntimeInvoker_t1976, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10692_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10692_gshared, &t1978_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10693_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10693_gshared, &t1978_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10694_MI = 
{
	"VerifyState", (methodPointerType)&m10694_gshared, &t1978_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10695_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10695_gshared, &t1978_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1978_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10696_MI = 
{
	"Dispose", (methodPointerType)&m10696_gshared, &t1978_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1978_MIs[] =
{
	&m10686_MI,
	&m10687_MI,
	&m10688_MI,
	&m10689_MI,
	&m10690_MI,
	&m10691_MI,
	&m10692_MI,
	&m10693_MI,
	&m10694_MI,
	&m10695_MI,
	&m10696_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10687_MI;
extern MethodInfo m10690_MI;
extern MethodInfo m10696_MI;
extern MethodInfo m10691_MI;
extern MethodInfo m10688_MI;
extern MethodInfo m10689_MI;
static MethodInfo* t1978_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10687_MI,
	&m10690_MI,
	&m10696_MI,
	&m10691_MI,
	&m10688_MI,
	&m10689_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1977_TI;
extern TypeInfo t851_TI;
static TypeInfo* t1978_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1977_TI,
	&t851_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1977_TI;
extern TypeInfo t851_TI;
static Il2CppInterfaceOffsetPair t1978_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1977_TI, 7},
	{ &t851_TI, 8},
};
extern MethodInfo m10695_MI;
extern TypeInfo t1976_TI;
extern MethodInfo m10657_MI;
extern TypeInfo t28_TI;
extern MethodInfo m10659_MI;
extern TypeInfo t28_TI;
extern MethodInfo m10692_MI;
extern MethodInfo m10694_MI;
extern MethodInfo m10656_MI;
static void* t1978_RGCTXData[9] = 
{
	&m10695_MI,
	&t1976_TI,
	&m10657_MI,
	&t28_TI,
	&m10659_MI,
	&t28_TI,
	&m10692_MI,
	&m10694_MI,
	&m10656_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1978_0_0_0;
extern Il2CppType t1978_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1978_TI;
extern Il2CppGenericClass t1978_GC;
extern TypeInfo t850_TI;
TypeInfo t1978_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1978_MIs, t1978_PIs, t1978_FIs, NULL, &t26_TI, NULL, &t850_TI, &t1978_TI, t1978_ITIs, t1978_VT, &EmptyCustomAttributesCache, &t1978_TI, &t1978_0_0_0, &t1978_1_0_0, t1978_IOs, &t1978_GC, NULL, NULL, NULL, t1978_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1978)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1981_TI;



extern MethodInfo m10697_MI;
 void m10697_gshared (t1981 * __this, t28 * p0, t49 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10698_MI;
 t28 * m10698_gshared (t1981 * __this, t28 * p0, t28 * p1, MethodInfo* method)
{
	typedef  t28 * (*FunctionPointerType) (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method);
	if (__this->f9)
		m10698((t1981 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10699_MI;
 t28 * m10699_gshared (t1981 * __this, t28 * p0, t28 * p1, t91 * p2, t28 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10700_MI;
 t28 * m10700_gshared (t1981 * __this, t28 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t28 *)__result;
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1981_m10697_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1981_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10697_MI = 
{
	".ctor", (methodPointerType)&m10697_gshared, &t1981_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1981_m10697_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1981_m10698_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1981_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10698_MI = 
{
	"Invoke", (methodPointerType)&m10698_gshared, &t1981_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28, t1981_m10698_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1981_m10699_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1981_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10699_MI = 
{
	"BeginInvoke", (methodPointerType)&m10699_gshared, &t1981_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t1981_m10699_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1981_m10700_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1981_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10700_MI = 
{
	"EndInvoke", (methodPointerType)&m10700_gshared, &t1981_TI, &t28_0_0_0, RuntimeInvoker_t28_t28, t1981_m10700_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1981_MIs[] =
{
	&m10697_MI,
	&m10698_MI,
	&m10699_MI,
	&m10700_MI,
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
extern MethodInfo m10698_MI;
extern MethodInfo m10699_MI;
extern MethodInfo m10700_MI;
static MethodInfo* t1981_VT[] =
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
	&m10698_MI,
	&m10699_MI,
	&m10700_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1981_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1981_0_0_0;
extern Il2CppType t1981_1_0_0;
extern TypeInfo t221_TI;
struct t1981;
extern TypeInfo t1981_TI;
extern Il2CppGenericClass t1981_GC;
extern TypeInfo t850_TI;
TypeInfo t1981_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1981_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1981_TI, NULL, t1981_VT, &EmptyCustomAttributesCache, &t1981_TI, &t1981_0_0_0, &t1981_1_0_0, t1981_IOs, &t1981_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1981), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1974_TI;



extern MethodInfo m10701_MI;
 void m10701 (t1974 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10702_MI;
 t845  m10702 (t1974 * __this, t28 * p0, t28 * p1, MethodInfo* method){
	typedef  t845  (*FunctionPointerType) (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method);
	if (__this->f9)
		m10702((t1974 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10703_MI;
 t28 * m10703 (t1974 * __this, t28 * p0, t28 * p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10704_MI;
 t845  m10704 (t1974 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t845 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1974_m10701_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1974_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10701_MI = 
{
	".ctor", (methodPointerType)&m10701, &t1974_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1974_m10701_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1974_m10702_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1974_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10702_MI = 
{
	"Invoke", (methodPointerType)&m10702, &t1974_TI, &t845_0_0_0, RuntimeInvoker_t845_t28_t28, t1974_m10702_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1974_m10703_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1974_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10703_MI = 
{
	"BeginInvoke", (methodPointerType)&m10703, &t1974_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t1974_m10703_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1974_m10704_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1974_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10704_MI = 
{
	"EndInvoke", (methodPointerType)&m10704, &t1974_TI, &t845_0_0_0, RuntimeInvoker_t845_t28, t1974_m10704_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1974_MIs[] =
{
	&m10701_MI,
	&m10702_MI,
	&m10703_MI,
	&m10704_MI,
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
extern MethodInfo m10702_MI;
extern MethodInfo m10703_MI;
extern MethodInfo m10704_MI;
static MethodInfo* t1974_VT[] =
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
	&m10702_MI,
	&m10703_MI,
	&m10704_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1974_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1974_0_0_0;
extern Il2CppType t1974_1_0_0;
extern TypeInfo t221_TI;
struct t1974;
extern TypeInfo t1974_TI;
extern Il2CppGenericClass t1974_GC;
extern TypeInfo t850_TI;
TypeInfo t1974_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1974_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1974_TI, NULL, t1974_VT, &EmptyCustomAttributesCache, &t1974_TI, &t1974_0_0_0, &t1974_1_0_0, t1974_IOs, &t1974_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1974), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1982_TI;



extern MethodInfo m10705_MI;
 void m10705 (t1982 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10706_MI;
 t1976  m10706 (t1982 * __this, t28 * p0, t28 * p1, MethodInfo* method){
	typedef  t1976  (*FunctionPointerType) (t28 * __this, t28 * p0, t28 * p1, MethodInfo* method);
	if (__this->f9)
		m10706((t1982 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10707_MI;
 t28 * m10707 (t1982 * __this, t28 * p0, t28 * p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10708_MI;
 t1976  m10708 (t1982 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1976 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1982_m10705_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10705_MI = 
{
	".ctor", (methodPointerType)&m10705, &t1982_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1982_m10705_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1982_m10706_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10706_MI = 
{
	"Invoke", (methodPointerType)&m10706, &t1982_TI, &t1976_0_0_0, RuntimeInvoker_t1976_t28_t28, t1982_m10706_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1982_m10707_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10707_MI = 
{
	"BeginInvoke", (methodPointerType)&m10707, &t1982_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t1982_m10707_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1982_m10708_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1982_TI;
extern Il2CppType t1976_0_0_0;
extern void* RuntimeInvoker_t1976_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10708_MI = 
{
	"EndInvoke", (methodPointerType)&m10708, &t1982_TI, &t1976_0_0_0, RuntimeInvoker_t1976_t28, t1982_m10708_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1982_MIs[] =
{
	&m10705_MI,
	&m10706_MI,
	&m10707_MI,
	&m10708_MI,
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
extern MethodInfo m10706_MI;
extern MethodInfo m10707_MI;
extern MethodInfo m10708_MI;
static MethodInfo* t1982_VT[] =
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
	&m10706_MI,
	&m10707_MI,
	&m10708_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1982_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1982_0_0_0;
extern Il2CppType t1982_1_0_0;
extern TypeInfo t221_TI;
struct t1982;
extern TypeInfo t1982_TI;
extern Il2CppGenericClass t1982_GC;
extern TypeInfo t850_TI;
TypeInfo t1982_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1982_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1982_TI, NULL, t1982_VT, &EmptyCustomAttributesCache, &t1982_TI, &t1982_0_0_0, &t1982_1_0_0, t1982_IOs, &t1982_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1982), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1983_TI;

extern TypeInfo t1983_TI;
extern TypeInfo t1978_TI;
extern TypeInfo t851_TI;
extern TypeInfo t845_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t28_TI;
extern TypeInfo t31_TI;
extern MethodInfo m7836_MI;
extern MethodInfo m10691_MI;
extern MethodInfo m10657_MI;
extern MethodInfo m10711_MI;
extern MethodInfo m203_MI;
extern MethodInfo m10655_MI;
extern MethodInfo m10690_MI;


extern MethodInfo m10709_MI;
 void m10709_gshared (t1983 * __this, t1972 * p0, MethodInfo* method)
{
	{
		m203(__this, &m203_MI);
		t1978  L_0 = (( t1978  (*) (t1972 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->method)(p0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10710_MI;
 bool m10710_gshared (t1983 * __this, MethodInfo* method)
{
	{
		t1978 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		return L_1;
	}
}
extern MethodInfo m10711_MI;
 t845  m10711_gshared (t1983 * __this, MethodInfo* method)
{
	{
		t1978  L_0 = (__this->f0);
		t1978  L_1 = L_0;
		t28 * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_1);
		t845  L_3 = (t845 )InterfaceFuncInvoker0< t845  >::Invoke(&m7836_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10712_MI;
 t28 * m10712_gshared (t1983 * __this, MethodInfo* method)
{
	t1976  V_0 = {0};
	{
		t1978 * L_0 = &(__this->f0);
		t1976  L_1 = (( t1976  (*) (t1978 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = L_1;
		t28 * L_2 = (( t28 * (*) (t1976 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		t28 * L_3 = L_2;
		return ((t28 *)L_3);
	}
}
extern MethodInfo m10713_MI;
 t28 * m10713_gshared (t1983 * __this, MethodInfo* method)
{
	{
		t845  L_0 = (t845 )VirtFuncInvoker0< t845  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6), __this);
		t845  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t845_TI), &L_1);
		return L_2;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
extern Il2CppType t1978_0_0_1;
FieldInfo t1983_f0_FieldInfo = 
{
	"host_enumerator", &t1978_0_0_1, &t1983_TI, offsetof(t1983, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1983_FIs[] =
{
	&t1983_f0_FieldInfo,
	NULL
};
extern MethodInfo m10711_MI;
static PropertyInfo t1983____Entry_PropertyInfo = 
{
	&t1983_TI, "Entry", &m10711_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10712_MI;
static PropertyInfo t1983____Key_PropertyInfo = 
{
	&t1983_TI, "Key", &m10712_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10713_MI;
static PropertyInfo t1983____Current_PropertyInfo = 
{
	&t1983_TI, "Current", &m10713_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1983_PIs[] =
{
	&t1983____Entry_PropertyInfo,
	&t1983____Key_PropertyInfo,
	&t1983____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1972_0_0_0;
static ParameterInfo t1983_m10709_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t1972_0_0_0},
};
extern TypeInfo t1983_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10709_MI = 
{
	".ctor", (methodPointerType)&m10709_gshared, &t1983_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1983_m10709_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1983_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10710_MI = 
{
	"MoveNext", (methodPointerType)&m10710_gshared, &t1983_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1983_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845 (MethodInfo* method, void* obj, void** args);
MethodInfo m10711_MI = 
{
	"get_Entry", (methodPointerType)&m10711_gshared, &t1983_TI, &t845_0_0_0, RuntimeInvoker_t845, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1983_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10712_MI = 
{
	"get_Key", (methodPointerType)&m10712_gshared, &t1983_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1983_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10713_MI = 
{
	"get_Current", (methodPointerType)&m10713_gshared, &t1983_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1983_MIs[] =
{
	&m10709_MI,
	&m10710_MI,
	&m10711_MI,
	&m10712_MI,
	&m10713_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10713_MI;
extern MethodInfo m10710_MI;
extern MethodInfo m10711_MI;
extern MethodInfo m10712_MI;
static MethodInfo* t1983_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10713_MI,
	&m10710_MI,
	&m10711_MI,
	&m10712_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t851_TI;
static TypeInfo* t1983_ITIs[] = 
{
	&t158_TI,
	&t851_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t851_TI;
static Il2CppInterfaceOffsetPair t1983_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t851_TI, 6},
};
extern MethodInfo m10655_MI;
extern MethodInfo m10690_MI;
extern TypeInfo t1978_TI;
extern MethodInfo m10691_MI;
extern MethodInfo m10657_MI;
extern TypeInfo t28_TI;
extern MethodInfo m10711_MI;
static void* t1983_RGCTXData[7] = 
{
	&m10655_MI,
	&m10690_MI,
	&t1978_TI,
	&m10691_MI,
	&m10657_MI,
	&t28_TI,
	&m10711_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1983_0_0_0;
extern Il2CppType t1983_1_0_0;
extern TypeInfo t28_TI;
struct t1983;
extern TypeInfo t1983_TI;
extern Il2CppGenericClass t1983_GC;
extern TypeInfo t850_TI;
TypeInfo t1983_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t1983_MIs, t1983_PIs, t1983_FIs, NULL, &t28_TI, NULL, &t850_TI, &t1983_TI, t1983_ITIs, t1983_VT, &EmptyCustomAttributesCache, &t1983_TI, &t1983_0_0_0, &t1983_1_0_0, t1983_IOs, &t1983_GC, NULL, NULL, NULL, t1983_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1983), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4109_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24312_MI;
static PropertyInfo t4109____Count_PropertyInfo = 
{
	&t4109_TI, "Count", &m24312_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24313_MI;
static PropertyInfo t4109____IsReadOnly_PropertyInfo = 
{
	&t4109_TI, "IsReadOnly", &m24313_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4109_PIs[] =
{
	&t4109____Count_PropertyInfo,
	&t4109____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4109_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24312_MI = 
{
	"get_Count", NULL, &t4109_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4109_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24313_MI = 
{
	"get_IsReadOnly", NULL, &t4109_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t4109_m24314_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t4109_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24314_MI = 
{
	"Add", NULL, &t4109_TI, &t30_0_0_0, RuntimeInvoker_t30_t1969, t4109_m24314_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4109_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24315_MI = 
{
	"Clear", NULL, &t4109_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t4109_m24316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t4109_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24316_MI = 
{
	"Contains", NULL, &t4109_TI, &t31_0_0_0, RuntimeInvoker_t31_t1969, t4109_m24316_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1968_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4109_m24317_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1968_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4109_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24317_MI = 
{
	"CopyTo", NULL, &t4109_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4109_m24317_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t4109_m24318_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t4109_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24318_MI = 
{
	"Remove", NULL, &t4109_TI, &t31_0_0_0, RuntimeInvoker_t31_t1969, t4109_m24318_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4109_MIs[] =
{
	&m24312_MI,
	&m24313_MI,
	&m24314_MI,
	&m24315_MI,
	&m24316_MI,
	&m24317_MI,
	&m24318_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4111_TI;
static TypeInfo* t4109_ITIs[] = 
{
	&t611_TI,
	&t4111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4109_0_0_0;
extern Il2CppType t4109_1_0_0;
struct t4109;
extern TypeInfo t4109_TI;
extern Il2CppGenericClass t4109_GC;
TypeInfo t4109_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4109_MIs, t4109_PIs, NULL, NULL, NULL, NULL, NULL, &t4109_TI, t4109_ITIs, NULL, &EmptyCustomAttributesCache, &t4109_TI, &t4109_0_0_0, &t4109_1_0_0, NULL, &t4109_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4111_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern TypeInfo t4111_TI;
extern Il2CppType t1970_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24319_MI = 
{
	"GetEnumerator", NULL, &t4111_TI, &t1970_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4111_MIs[] =
{
	&m24319_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4111_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4111_0_0_0;
extern Il2CppType t4111_1_0_0;
struct t4111;
extern TypeInfo t4111_TI;
extern Il2CppGenericClass t4111_GC;
TypeInfo t4111_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4111_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4111_TI, t4111_ITIs, NULL, &EmptyCustomAttributesCache, &t4111_TI, &t4111_0_0_0, &t4111_1_0_0, NULL, &t4111_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1970_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24320_MI;
static PropertyInfo t1970____Current_PropertyInfo = 
{
	&t1970_TI, "Current", &m24320_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1970_PIs[] =
{
	&t1970____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1970_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24320_MI = 
{
	"get_Current", NULL, &t1970_TI, &t1969_0_0_0, RuntimeInvoker_t1969, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1970_MIs[] =
{
	&m24320_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t1970_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1970_0_0_0;
extern Il2CppType t1970_1_0_0;
struct t1970;
extern TypeInfo t1970_TI;
extern Il2CppGenericClass t1970_GC;
TypeInfo t1970_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1970_MIs, t1970_PIs, NULL, NULL, NULL, NULL, NULL, &t1970_TI, t1970_ITIs, NULL, &EmptyCustomAttributesCache, &t1970_TI, &t1970_0_0_0, &t1970_1_0_0, NULL, &t1970_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1969_TI;

extern TypeInfo t1969_TI;
extern TypeInfo t455_TI;
extern TypeInfo t18_TI;
extern TypeInfo t173_TI;
extern TypeInfo t28_TI;
extern TypeInfo t362_TI;
extern MethodInfo m10716_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m10715_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10717_MI;
extern MethodInfo m3550_MI;


// Metadata Definition System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t173_0_0_1;
FieldInfo t1969_f0_FieldInfo = 
{
	"key", &t173_0_0_1, &t1969_TI, offsetof(t1969, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t362_0_0_1;
FieldInfo t1969_f1_FieldInfo = 
{
	"value", &t362_0_0_1, &t1969_TI, offsetof(t1969, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1969_FIs[] =
{
	&t1969_f0_FieldInfo,
	&t1969_f1_FieldInfo,
	NULL
};
extern MethodInfo m10715_MI;
extern MethodInfo m10716_MI;
static PropertyInfo t1969____Key_PropertyInfo = 
{
	&t1969_TI, "Key", &m10715_MI, &m10716_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10717_MI;
extern MethodInfo m10718_MI;
static PropertyInfo t1969____Value_PropertyInfo = 
{
	&t1969_TI, "Value", &m10717_MI, &m10718_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1969_PIs[] =
{
	&t1969____Key_PropertyInfo,
	&t1969____Value_PropertyInfo,
	NULL
};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t1969_m10714_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1969_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10714_MI = 
{
	".ctor", (methodPointerType)&m10656_gshared, &t1969_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t1969_m10714_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10715_MI = 
{
	"get_Key", (methodPointerType)&m10657_gshared, &t1969_TI, &t173_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t1969_m10716_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t1969_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10716_MI = 
{
	"set_Key", (methodPointerType)&m10658_gshared, &t1969_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1969_m10716_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10717_MI = 
{
	"get_Value", (methodPointerType)&m10659_gshared, &t1969_TI, &t362_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t1969_m10718_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1969_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10718_MI = 
{
	"set_Value", (methodPointerType)&m10660_gshared, &t1969_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1969_m10718_ParameterInfos, &EmptyCustomAttributesCache, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1969_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10719_MI = 
{
	"ToString", (methodPointerType)&m10661_gshared, &t1969_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1969_MIs[] =
{
	&m10714_MI,
	&m10715_MI,
	&m10716_MI,
	&m10717_MI,
	&m10718_MI,
	&m10719_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m10719_MI;
static MethodInfo* t1969_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m10719_MI,
};
extern MethodInfo m10716_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m10715_MI;
extern TypeInfo t173_TI;
extern MethodInfo m10717_MI;
extern TypeInfo t362_TI;
static void* t1969_RGCTXData[6] = 
{
	&m10716_MI,
	&m10718_MI,
	&m10715_MI,
	&t173_TI,
	&m10717_MI,
	&t362_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1969_0_0_0;
extern Il2CppType t1969_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1969_TI;
extern Il2CppGenericClass t1969_GC;
extern CustomAttributesCache t855__CustomAttributeCache;
TypeInfo t1969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "KeyValuePair`2", "System.Collections.Generic", t1969_MIs, t1969_PIs, t1969_FIs, NULL, &t26_TI, NULL, NULL, &t1969_TI, NULL, t1969_VT, &t855__CustomAttributeCache, &t1969_TI, &t1969_0_0_0, &t1969_1_0_0, NULL, &t1969_GC, NULL, NULL, NULL, t1969_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1969)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057033, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t362_TI;
#include "t362MD.h"

#include "t180.h"
#include "t1991.h"
#include "t1988.h"
#include "t1989.h"
#include "t2001.h"
#include "t1990.h"
extern TypeInfo t362_TI;
extern TypeInfo t180_TI;
extern TypeInfo t47_TI;
extern TypeInfo t30_TI;
extern TypeInfo t331_TI;
extern TypeInfo t593_TI;
extern TypeInfo t1286_TI;
extern TypeInfo t1251_TI;
extern TypeInfo t1984_TI;
extern TypeInfo t1991_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1987_TI;
extern TypeInfo t1985_TI;
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1988_TI;
extern TypeInfo t350_TI;
extern TypeInfo t1989_TI;
extern TypeInfo t2001_TI;
#include "t610MD.h"
#include "t1988MD.h"
#include "t1989MD.h"
#include "t1991MD.h"
#include "t2001MD.h"
extern MethodInfo m1665_MI;
extern MethodInfo m10763_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m6601_MI;
extern MethodInfo m18085_MI;
extern MethodInfo m6602_MI;
extern MethodInfo m10751_MI;
extern MethodInfo m203_MI;
extern MethodInfo m10748_MI;
extern MethodInfo m3888_MI;
extern MethodInfo m1667_MI;
extern MethodInfo m10743_MI;
extern MethodInfo m10749_MI;
extern MethodInfo m10752_MI;
extern MethodInfo m1668_MI;
extern MethodInfo m10737_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m7039_MI;
extern MethodInfo m10762_MI;
extern MethodInfo m24321_MI;
extern MethodInfo m24322_MI;
extern MethodInfo m24323_MI;
extern MethodInfo m24324_MI;
extern MethodInfo m7435_MI;
extern MethodInfo m1551_MI;
extern MethodInfo m10753_MI;
extern MethodInfo m10738_MI;
extern MethodInfo m10739_MI;
extern MethodInfo m10795_MI;
extern MethodInfo m3884_MI;
extern MethodInfo m18087_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m10747_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m10870_MI;
extern MethodInfo m10789_MI;
extern MethodInfo m10750_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m3900_MI;
extern MethodInfo m10876_MI;
extern MethodInfo m18089_MI;
extern MethodInfo m18097_MI;
extern MethodInfo m3887_MI;
struct t29;
struct t29;
 void m17021_gshared (t28 * __this, t333** p0, int32_t p1, MethodInfo* method);
#define m17021(__this, p0, p1, method) (void)m17021_gshared((t28 *)__this, (t333**)p0, (int32_t)p1, method)
#define m18085(__this, p0, p1, method) (void)m17021_gshared((t28 *)__this, (t333**)p0, (int32_t)p1, method)
extern MethodInfo m18085_MI;
struct t29;
#include "t1999.h"
struct t29;
 int32_t m7835_gshared (t28 * __this, t333* p0, t28 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m7835(__this, p0, p1, p2, p3, method) (int32_t)m7835_gshared((t28 *)__this, (t333*)p0, (t28 *)p1, (int32_t)p2, (int32_t)p3, method)
#define m18087(__this, p0, p1, p2, p3, method) (int32_t)m7835_gshared((t28 *)__this, (t333*)p0, (t28 *)p1, (int32_t)p2, (int32_t)p3, method)
extern MethodInfo m18087_MI;
struct t29;
struct t29;
 void m17090_gshared (t28 * __this, t333* p0, int32_t p1, int32_t p2, t28* p3, MethodInfo* method);
#define m17090(__this, p0, p1, p2, p3, method) (void)m17090_gshared((t28 *)__this, (t333*)p0, (int32_t)p1, (int32_t)p2, (t28*)p3, method)
#define m18089(__this, p0, p1, p2, p3, method) (void)m17090_gshared((t28 *)__this, (t333*)p0, (int32_t)p1, (int32_t)p2, (t28*)p3, method)
extern MethodInfo m18089_MI;
struct t29;
struct t29;
#include "t1691.h"
 void m17164_gshared (t28 * __this, t333* p0, int32_t p1, t1691 * p2, MethodInfo* method);
#define m17164(__this, p0, p1, p2, method) (void)m17164_gshared((t28 *)__this, (t333*)p0, (int32_t)p1, (t1691 *)p2, method)
#define m18097(__this, p0, p1, p2, method) (void)m17164_gshared((t28 *)__this, (t333*)p0, (int32_t)p1, (t1691 *)p2, method)
extern MethodInfo m18097_MI;


extern MethodInfo m10748_MI;
 t1991  m10748 (t362 * __this, MethodInfo* method){
	{
		t1991  L_0 = {0};
		m10789(&L_0, __this, &m10789_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.List`1<UnityEngine.UI.Text>
extern Il2CppType t47_0_0_32849;
FieldInfo t362_f0_FieldInfo = 
{
	"DefaultCapacity", &t47_0_0_32849, &t362_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_1;
FieldInfo t362_f1_FieldInfo = 
{
	"_items", &t1984_0_0_1, &t362_TI, offsetof(t362, f1), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t362_f2_FieldInfo = 
{
	"_size", &t47_0_0_1, &t362_TI, offsetof(t362, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t362_f3_FieldInfo = 
{
	"_version", &t47_0_0_1, &t362_TI, offsetof(t362, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1984_0_0_49;
FieldInfo t362_f4_FieldInfo = 
{
	"EmptyArray", &t1984_0_0_49, &t362_TI, offsetof(t362_SFs, f4), &EmptyCustomAttributesCache};
static FieldInfo* t362_FIs[] =
{
	&t362_f0_FieldInfo,
	&t362_f1_FieldInfo,
	&t362_f2_FieldInfo,
	&t362_f3_FieldInfo,
	&t362_f4_FieldInfo,
	NULL
};
static const int32_t t362_f0_DefaultValueData = 4;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t362_f0_DefaultValue = 
{
	&t362_f0_FieldInfo, { (char*)&t362_f0_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t362_FDVs[] = 
{
	&t362_f0_DefaultValue,
	NULL
};
extern MethodInfo m10730_MI;
static PropertyInfo t362____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t362_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10730_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10731_MI;
static PropertyInfo t362____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t362_TI, "System.Collections.ICollection.IsSynchronized", &m10731_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10732_MI;
static PropertyInfo t362____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t362_TI, "System.Collections.ICollection.SyncRoot", &m10732_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10733_MI;
static PropertyInfo t362____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t362_TI, "System.Collections.IList.IsFixedSize", &m10733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10734_MI;
static PropertyInfo t362____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t362_TI, "System.Collections.IList.IsReadOnly", &m10734_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10735_MI;
extern MethodInfo m10736_MI;
static PropertyInfo t362____System_Collections_IList_Item_PropertyInfo = 
{
	&t362_TI, "System.Collections.IList.Item", &m10735_MI, &m10736_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10761_MI;
extern MethodInfo m10762_MI;
static PropertyInfo t362____Capacity_PropertyInfo = 
{
	&t362_TI, "Capacity", &m10761_MI, &m10762_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1666_MI;
static PropertyInfo t362____Count_PropertyInfo = 
{
	&t362_TI, "Count", &m1666_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1665_MI;
extern MethodInfo m10763_MI;
static PropertyInfo t362____Item_PropertyInfo = 
{
	&t362_TI, "Item", &m1665_MI, &m10763_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t362_PIs[] =
{
	&t362____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t362____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t362____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t362____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t362____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t362____System_Collections_IList_Item_PropertyInfo,
	&t362____Capacity_PropertyInfo,
	&t362____Count_PropertyInfo,
	&t362____Item_PropertyInfo,
	NULL
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1661_MI = 
{
	".ctor", (methodPointerType)&m8302_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10720_ParameterInfos[] = 
{
	{"capacity", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10720_MI = 
{
	".ctor", (methodPointerType)&m8304_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t362_m10720_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10721_MI = 
{
	".cctor", (methodPointerType)&m8306_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t1985_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10722_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8308_gshared, &t362_TI, &t1985_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 27, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10723_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10723_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8310_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t362_m10723_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10724_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8312_gshared, &t362_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t362_m10725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10725_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8314_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t362_m10725_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t362_m10726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10726_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8316_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t362_m10726_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t362_m10727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10727_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8318_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t362_m10727_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t362_m10728_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10728_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8320_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t362_m10728_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t362_m10729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10729_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8322_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10729_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10730_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8324_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10731_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8326_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10732_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8328_gshared, &t362_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10733_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8330_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10734_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8332_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10735_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8334_gshared, &t362_TI, &t28_0_0_0, RuntimeInvoker_t28_t47, t362_m10735_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t362_m10736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10736_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8336_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t362_m10736_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t362_m1667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1667_MI = 
{
	"Add", (methodPointerType)&m8338_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m1667_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10737_ParameterInfos[] = 
{
	{"newCount", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10737_MI = 
{
	"GrowIfNeeded", (methodPointerType)&m8340_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t362_m10737_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1986_0_0_0;
static ParameterInfo t362_m10738_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1986_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10738_MI = 
{
	"AddCollection", (methodPointerType)&m8342_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10738_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1987_0_0_0;
static ParameterInfo t362_m10739_ParameterInfos[] = 
{
	{"enumerable", 0, 134217728, &EmptyCustomAttributesCache, &t1987_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10739_MI = 
{
	"AddEnumerable", (methodPointerType)&m8344_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10739_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1987_0_0_0;
static ParameterInfo t362_m10740_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1987_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10740_MI = 
{
	"AddRange", (methodPointerType)&m8346_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10740_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t1988_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10741_MI = 
{
	"AsReadOnly", (methodPointerType)&m8348_gshared, &t362_TI, &t1988_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10742_MI = 
{
	"Clear", (methodPointerType)&m8350_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t362_m10743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10743_MI = 
{
	"Contains", (methodPointerType)&m8352_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t362_m10743_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1984_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10744_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1984_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10744_MI = 
{
	"CopyTo", (methodPointerType)&m8354_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t362_m10744_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1989_0_0_0;
static ParameterInfo t362_m10745_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1989_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10745_MI = 
{
	"Find", (methodPointerType)&m8356_gshared, &t362_TI, &t180_0_0_0, RuntimeInvoker_t28_t28, t362_m10745_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1989_0_0_0;
static ParameterInfo t362_m10746_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1989_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10746_MI = 
{
	"CheckMatch", (methodPointerType)&m8358_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10746_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t1989_0_0_0;
static ParameterInfo t362_m10747_ParameterInfos[] = 
{
	{"startIndex", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"count", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"match", 2, 134217728, &EmptyCustomAttributesCache, &t1989_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10747_MI = 
{
	"GetIndex", (methodPointerType)&m8360_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47_t47_t47_t28, t362_m10747_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t1991_0_0_0;
extern void* RuntimeInvoker_t1991 (MethodInfo* method, void* obj, void** args);
MethodInfo m10748_MI = 
{
	"GetEnumerator", (methodPointerType)&m10748, &t362_TI, &t1991_0_0_0, RuntimeInvoker_t1991, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t362_m10749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10749_MI = 
{
	"IndexOf", (methodPointerType)&m8363_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t362_m10749_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10750_ParameterInfos[] = 
{
	{"start", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"delta", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10750_MI = 
{
	"Shift", (methodPointerType)&m8365_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t362_m10750_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10751_MI = 
{
	"CheckIndex", (methodPointerType)&m8367_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t362_m10751_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t362_m10752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10752_MI = 
{
	"Insert", (methodPointerType)&m8369_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t362_m10752_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1987_0_0_0;
static ParameterInfo t362_m10753_ParameterInfos[] = 
{
	{"collection", 0, 134217728, &EmptyCustomAttributesCache, &t1987_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10753_MI = 
{
	"CheckCollection", (methodPointerType)&m8371_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10753_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t362_m1668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1668_MI = 
{
	"Remove", (methodPointerType)&m8373_gshared, &t362_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t362_m1668_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1989_0_0_0;
static ParameterInfo t362_m10754_ParameterInfos[] = 
{
	{"match", 0, 134217728, &EmptyCustomAttributesCache, &t1989_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10754_MI = 
{
	"RemoveAll", (methodPointerType)&m8375_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t362_m10754_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10755_MI = 
{
	"RemoveAt", (methodPointerType)&m8376_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t362_m10755_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10756_MI = 
{
	"Reverse", (methodPointerType)&m8378_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10757_MI = 
{
	"Sort", (methodPointerType)&m8380_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1990_0_0_0;
static ParameterInfo t362_m10758_ParameterInfos[] = 
{
	{"comparison", 0, 134217728, &EmptyCustomAttributesCache, &t1990_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10758_MI = 
{
	"Sort", (methodPointerType)&m8382_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t362_m10758_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t1984_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10759_MI = 
{
	"ToArray", (methodPointerType)&m8384_gshared, &t362_TI, &t1984_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10760_MI = 
{
	"TrimExcess", (methodPointerType)&m8386_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10761_MI = 
{
	"get_Capacity", (methodPointerType)&m8388_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m10762_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10762_MI = 
{
	"set_Capacity", (methodPointerType)&m8390_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t362_m10762_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t362_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1666_MI = 
{
	"get_Count", (methodPointerType)&m8391_gshared, &t362_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t362_m1665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1665_MI = 
{
	"get_Item", (methodPointerType)&m8392_gshared, &t362_TI, &t180_0_0_0, RuntimeInvoker_t28_t47, t362_m1665_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t362_m10763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t362_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10763_MI = 
{
	"set_Item", (methodPointerType)&m8394_gshared, &t362_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t362_m10763_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 32, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t362_MIs[] =
{
	&m1661_MI,
	&m10720_MI,
	&m10721_MI,
	&m10722_MI,
	&m10723_MI,
	&m10724_MI,
	&m10725_MI,
	&m10726_MI,
	&m10727_MI,
	&m10728_MI,
	&m10729_MI,
	&m10730_MI,
	&m10731_MI,
	&m10732_MI,
	&m10733_MI,
	&m10734_MI,
	&m10735_MI,
	&m10736_MI,
	&m1667_MI,
	&m10737_MI,
	&m10738_MI,
	&m10739_MI,
	&m10740_MI,
	&m10741_MI,
	&m10742_MI,
	&m10743_MI,
	&m10744_MI,
	&m10745_MI,
	&m10746_MI,
	&m10747_MI,
	&m10748_MI,
	&m10749_MI,
	&m10750_MI,
	&m10751_MI,
	&m10752_MI,
	&m10753_MI,
	&m1668_MI,
	&m10754_MI,
	&m10755_MI,
	&m10756_MI,
	&m10757_MI,
	&m10758_MI,
	&m10759_MI,
	&m10760_MI,
	&m10761_MI,
	&m10762_MI,
	&m1666_MI,
	&m1665_MI,
	&m10763_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10724_MI;
extern MethodInfo m1666_MI;
extern MethodInfo m10731_MI;
extern MethodInfo m10732_MI;
extern MethodInfo m10723_MI;
extern MethodInfo m10733_MI;
extern MethodInfo m10734_MI;
extern MethodInfo m10735_MI;
extern MethodInfo m10736_MI;
extern MethodInfo m10725_MI;
extern MethodInfo m10742_MI;
extern MethodInfo m10726_MI;
extern MethodInfo m10727_MI;
extern MethodInfo m10728_MI;
extern MethodInfo m10729_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m1666_MI;
extern MethodInfo m10730_MI;
extern MethodInfo m1667_MI;
extern MethodInfo m10742_MI;
extern MethodInfo m10743_MI;
extern MethodInfo m10744_MI;
extern MethodInfo m1668_MI;
extern MethodInfo m10722_MI;
extern MethodInfo m10749_MI;
extern MethodInfo m10752_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m1665_MI;
extern MethodInfo m10763_MI;
static MethodInfo* t362_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10724_MI,
	&m1666_MI,
	&m10731_MI,
	&m10732_MI,
	&m10723_MI,
	&m10733_MI,
	&m10734_MI,
	&m10735_MI,
	&m10736_MI,
	&m10725_MI,
	&m10742_MI,
	&m10726_MI,
	&m10727_MI,
	&m10728_MI,
	&m10729_MI,
	&m10755_MI,
	&m1666_MI,
	&m10730_MI,
	&m1667_MI,
	&m10742_MI,
	&m10743_MI,
	&m10744_MI,
	&m1668_MI,
	&m10722_MI,
	&m10749_MI,
	&m10752_MI,
	&m10755_MI,
	&m1665_MI,
	&m10763_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1032_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1987_TI;
extern TypeInfo t1997_TI;
static TypeInfo* t362_ITIs[] = 
{
	&t611_TI,
	&t661_TI,
	&t1032_TI,
	&t1986_TI,
	&t1987_TI,
	&t1997_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1032_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1987_TI;
extern TypeInfo t1997_TI;
static Il2CppInterfaceOffsetPair t362_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t661_TI, 5},
	{ &t1032_TI, 9},
	{ &t1986_TI, 20},
	{ &t1987_TI, 27},
	{ &t1997_TI, 28},
};
extern TypeInfo t362_TI;
extern TypeInfo t1984_TI;
extern MethodInfo m10748_MI;
extern TypeInfo t1991_TI;
extern TypeInfo t180_TI;
extern MethodInfo m1667_MI;
extern MethodInfo m10743_MI;
extern MethodInfo m10749_MI;
extern MethodInfo m10751_MI;
extern MethodInfo m10752_MI;
extern MethodInfo m1668_MI;
extern MethodInfo m1665_MI;
extern MethodInfo m10763_MI;
extern MethodInfo m10737_MI;
extern MethodInfo m10761_MI;
extern MethodInfo m10762_MI;
extern MethodInfo m24321_MI;
extern MethodInfo m24322_MI;
extern MethodInfo m24323_MI;
extern MethodInfo m24324_MI;
extern MethodInfo m10753_MI;
extern TypeInfo t1986_TI;
extern MethodInfo m10738_MI;
extern MethodInfo m10739_MI;
extern TypeInfo t1988_TI;
extern MethodInfo m10795_MI;
extern MethodInfo m18087_MI;
extern MethodInfo m10746_MI;
extern MethodInfo m10747_MI;
extern MethodInfo m10870_MI;
extern MethodInfo m10789_MI;
extern MethodInfo m10750_MI;
extern MethodInfo m10755_MI;
extern MethodInfo m10876_MI;
extern MethodInfo m18089_MI;
extern MethodInfo m18097_MI;
extern MethodInfo m18085_MI;
static void* t362_RGCTXData[37] = 
{
	&t362_TI,
	&t1984_TI,
	&m10748_MI,
	&t1991_TI,
	&t180_TI,
	&m1667_MI,
	&m10743_MI,
	&m10749_MI,
	&m10751_MI,
	&m10752_MI,
	&m1668_MI,
	&m1665_MI,
	&m10763_MI,
	&m10737_MI,
	&m10761_MI,
	&m10762_MI,
	&m24321_MI,
	&m24322_MI,
	&m24323_MI,
	&m24324_MI,
	&m10753_MI,
	&t1986_TI,
	&m10738_MI,
	&m10739_MI,
	&t1988_TI,
	&m10795_MI,
	&m18087_MI,
	&m10746_MI,
	&m10747_MI,
	&m10870_MI,
	&m10789_MI,
	&m10750_MI,
	&m10755_MI,
	&m10876_MI,
	&m18089_MI,
	&m18097_MI,
	&m18085_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t362_0_0_0;
extern Il2CppType t362_1_0_0;
extern TypeInfo t28_TI;
struct t362;
extern TypeInfo t362_TI;
extern Il2CppGenericClass t362_GC;
extern CustomAttributesCache t857__CustomAttributeCache;
TypeInfo t362_TI = 
{
	&g_mscorlib_dll_Image, NULL, "List`1", "System.Collections.Generic", t362_MIs, t362_PIs, t362_FIs, NULL, &t28_TI, NULL, NULL, &t362_TI, t362_ITIs, t362_VT, &t857__CustomAttributeCache, &t362_TI, &t362_0_0_0, &t362_1_0_0, t362_IOs, &t362_GC, NULL, t362_FDVs, NULL, t362_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t362), 0, -1, sizeof(t362_SFs), 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 49, 9, 5, 0, 0, 33, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1986_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
extern MethodInfo m24321_MI;
static PropertyInfo t1986____Count_PropertyInfo = 
{
	&t1986_TI, "Count", &m24321_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24325_MI;
static PropertyInfo t1986____IsReadOnly_PropertyInfo = 
{
	&t1986_TI, "IsReadOnly", &m24325_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1986_PIs[] =
{
	&t1986____Count_PropertyInfo,
	&t1986____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t1986_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24321_MI = 
{
	"get_Count", NULL, &t1986_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1986_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24325_MI = 
{
	"get_IsReadOnly", NULL, &t1986_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1986_m24326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24326_MI = 
{
	"Add", NULL, &t1986_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1986_m24326_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1986_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24327_MI = 
{
	"Clear", NULL, &t1986_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1986_m24328_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24328_MI = 
{
	"Contains", NULL, &t1986_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1986_m24328_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1984_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1986_m24322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1984_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24322_MI = 
{
	"CopyTo", NULL, &t1986_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1986_m24322_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1986_m24329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1986_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24329_MI = 
{
	"Remove", NULL, &t1986_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1986_m24329_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1986_MIs[] =
{
	&m24321_MI,
	&m24325_MI,
	&m24326_MI,
	&m24327_MI,
	&m24328_MI,
	&m24322_MI,
	&m24329_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t1987_TI;
static TypeInfo* t1986_ITIs[] = 
{
	&t611_TI,
	&t1987_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1986_0_0_0;
extern Il2CppType t1986_1_0_0;
struct t1986;
extern TypeInfo t1986_TI;
extern Il2CppGenericClass t1986_GC;
TypeInfo t1986_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t1986_MIs, t1986_PIs, NULL, NULL, NULL, NULL, NULL, &t1986_TI, t1986_ITIs, NULL, &EmptyCustomAttributesCache, &t1986_TI, &t1986_0_0_0, &t1986_1_0_0, NULL, &t1986_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1987_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
extern TypeInfo t1987_TI;
extern Il2CppType t1985_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24323_MI = 
{
	"GetEnumerator", NULL, &t1987_TI, &t1985_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1987_MIs[] =
{
	&m24323_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t1987_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1987_0_0_0;
extern Il2CppType t1987_1_0_0;
struct t1987;
extern TypeInfo t1987_TI;
extern Il2CppGenericClass t1987_GC;
TypeInfo t1987_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t1987_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1987_TI, t1987_ITIs, NULL, &EmptyCustomAttributesCache, &t1987_TI, &t1987_0_0_0, &t1987_1_0_0, NULL, &t1987_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1985_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
extern MethodInfo m24324_MI;
static PropertyInfo t1985____Current_PropertyInfo = 
{
	&t1985_TI, "Current", &m24324_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1985_PIs[] =
{
	&t1985____Current_PropertyInfo,
	NULL
};
extern TypeInfo t1985_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24324_MI = 
{
	"get_Current", NULL, &t1985_TI, &t180_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1985_MIs[] =
{
	&m24324_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t1985_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1985_0_0_0;
extern Il2CppType t1985_1_0_0;
struct t1985;
extern TypeInfo t1985_TI;
extern Il2CppGenericClass t1985_GC;
TypeInfo t1985_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t1985_MIs, t1985_PIs, NULL, NULL, NULL, NULL, NULL, &t1985_TI, t1985_ITIs, NULL, &EmptyCustomAttributesCache, &t1985_TI, &t1985_0_0_0, &t1985_1_0_0, NULL, &t1985_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1992.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1992_TI;
#include "t1992MD.h"

extern TypeInfo t1992_TI;
extern TypeInfo t180_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10768_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18030_MI;
struct t29;
struct t29;
 t28 * m16643_gshared (t29 * __this, int32_t p0, MethodInfo* method);
#define m16643(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
#define m18030(__this, p0, method) (t180 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18030_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
extern Il2CppType t29_0_0_1;
FieldInfo t1992_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t1992_TI, offsetof(t1992, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1992_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t1992_TI, offsetof(t1992, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1992_FIs[] =
{
	&t1992_f0_FieldInfo,
	&t1992_f1_FieldInfo,
	NULL
};
extern MethodInfo m10765_MI;
static PropertyInfo t1992____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1992_TI, "System.Collections.IEnumerator.Current", &m10765_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10768_MI;
static PropertyInfo t1992____Current_PropertyInfo = 
{
	&t1992_TI, "Current", &m10768_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1992_PIs[] =
{
	&t1992____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1992____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t1992_m10764_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t1992_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10764_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1992_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1992_m10764_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10765_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t1992_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10766_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t1992_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10767_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t1992_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1992_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10768_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t1992_TI, &t180_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1992_MIs[] =
{
	&m10764_MI,
	&m10765_MI,
	&m10766_MI,
	&m10767_MI,
	&m10768_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10765_MI;
extern MethodInfo m10767_MI;
extern MethodInfo m10766_MI;
extern MethodInfo m10768_MI;
static MethodInfo* t1992_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10765_MI,
	&m10767_MI,
	&m10766_MI,
	&m10768_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1985_TI;
static TypeInfo* t1992_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1985_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1985_TI;
static Il2CppInterfaceOffsetPair t1992_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1985_TI, 7},
};
extern MethodInfo m10768_MI;
extern TypeInfo t180_TI;
extern MethodInfo m18030_MI;
static void* t1992_RGCTXData[3] = 
{
	&m10768_MI,
	&t180_TI,
	&m18030_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1992_0_0_0;
extern Il2CppType t1992_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1992_TI;
extern Il2CppGenericClass t1992_GC;
extern TypeInfo t29_TI;
TypeInfo t1992_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1992_MIs, t1992_PIs, t1992_FIs, NULL, &t26_TI, NULL, &t29_TI, &t1992_TI, t1992_ITIs, t1992_VT, &EmptyCustomAttributesCache, &t1992_TI, &t1992_0_0_0, &t1992_1_0_0, t1992_IOs, &t1992_GC, NULL, NULL, NULL, t1992_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1992)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1997_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Text>
extern MethodInfo m24330_MI;
extern MethodInfo m24331_MI;
static PropertyInfo t1997____Item_PropertyInfo = 
{
	&t1997_TI, "Item", &m24330_MI, &m24331_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1997_PIs[] =
{
	&t1997____Item_PropertyInfo,
	NULL
};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1997_m24332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24332_MI = 
{
	"IndexOf", NULL, &t1997_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1997_m24332_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1997_m24333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24333_MI = 
{
	"Insert", NULL, &t1997_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1997_m24333_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1997_m24334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24334_MI = 
{
	"RemoveAt", NULL, &t1997_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1997_m24334_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1997_m24330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24330_MI = 
{
	"get_Item", NULL, &t1997_TI, &t180_0_0_0, RuntimeInvoker_t28_t47, t1997_m24330_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1997_m24331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1997_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24331_MI = 
{
	"set_Item", NULL, &t1997_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1997_m24331_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1997_MIs[] =
{
	&m24332_MI,
	&m24333_MI,
	&m24334_MI,
	&m24330_MI,
	&m24331_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1987_TI;
static TypeInfo* t1997_ITIs[] = 
{
	&t611_TI,
	&t1986_TI,
	&t1987_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1997_0_0_0;
extern Il2CppType t1997_1_0_0;
struct t1997;
extern TypeInfo t1997_TI;
extern Il2CppGenericClass t1997_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t1997_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t1997_MIs, t1997_PIs, NULL, NULL, NULL, NULL, NULL, &t1997_TI, t1997_ITIs, NULL, &t1418__CustomAttributeCache, &t1997_TI, &t1997_0_0_0, &t1997_1_0_0, NULL, &t1997_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4100_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m24335_MI;
static PropertyInfo t4100____Count_PropertyInfo = 
{
	&t4100_TI, "Count", &m24335_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24336_MI;
static PropertyInfo t4100____IsReadOnly_PropertyInfo = 
{
	&t4100_TI, "IsReadOnly", &m24336_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4100_PIs[] =
{
	&t4100____Count_PropertyInfo,
	&t4100____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4100_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24335_MI = 
{
	"get_Count", NULL, &t4100_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4100_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24336_MI = 
{
	"get_IsReadOnly", NULL, &t4100_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t297_0_0_0;
static ParameterInfo t4100_m24337_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24337_MI = 
{
	"Add", NULL, &t4100_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4100_m24337_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4100_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24338_MI = 
{
	"Clear", NULL, &t4100_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t297_0_0_0;
static ParameterInfo t4100_m24339_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24339_MI = 
{
	"Contains", NULL, &t4100_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4100_m24339_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3259_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4100_m24340_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3259_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24340_MI = 
{
	"CopyTo", NULL, &t4100_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4100_m24340_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t297_0_0_0;
static ParameterInfo t4100_m24341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t4100_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24341_MI = 
{
	"Remove", NULL, &t4100_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4100_m24341_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4100_MIs[] =
{
	&m24335_MI,
	&m24336_MI,
	&m24337_MI,
	&m24338_MI,
	&m24339_MI,
	&m24340_MI,
	&m24341_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4102_TI;
static TypeInfo* t4100_ITIs[] = 
{
	&t611_TI,
	&t4102_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4100_0_0_0;
extern Il2CppType t4100_1_0_0;
struct t4100;
extern TypeInfo t4100_TI;
extern Il2CppGenericClass t4100_GC;
TypeInfo t4100_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4100_MIs, t4100_PIs, NULL, NULL, NULL, NULL, NULL, &t4100_TI, t4100_ITIs, NULL, &EmptyCustomAttributesCache, &t4100_TI, &t4100_0_0_0, &t4100_1_0_0, NULL, &t4100_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4102_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutElement>
extern TypeInfo t4102_TI;
extern Il2CppType t3427_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24342_MI = 
{
	"GetEnumerator", NULL, &t4102_TI, &t3427_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4102_MIs[] =
{
	&m24342_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4102_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4102_0_0_0;
extern Il2CppType t4102_1_0_0;
struct t4102;
extern TypeInfo t4102_TI;
extern Il2CppGenericClass t4102_GC;
TypeInfo t4102_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4102_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4102_TI, t4102_ITIs, NULL, &EmptyCustomAttributesCache, &t4102_TI, &t4102_0_0_0, &t4102_1_0_0, NULL, &t4102_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3427_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m24343_MI;
static PropertyInfo t3427____Current_PropertyInfo = 
{
	&t3427_TI, "Current", &m24343_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3427_PIs[] =
{
	&t3427____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3427_TI;
extern Il2CppType t297_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24343_MI = 
{
	"get_Current", NULL, &t3427_TI, &t297_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3427_MIs[] =
{
	&m24343_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3427_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3427_0_0_0;
extern Il2CppType t3427_1_0_0;
struct t3427;
extern TypeInfo t3427_TI;
extern Il2CppGenericClass t3427_GC;
TypeInfo t3427_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3427_MIs, t3427_PIs, NULL, NULL, NULL, NULL, NULL, &t3427_TI, t3427_ITIs, NULL, &EmptyCustomAttributesCache, &t3427_TI, &t3427_0_0_0, &t3427_1_0_0, NULL, &t3427_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1993.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1993_TI;
#include "t1993MD.h"

extern TypeInfo t1993_TI;
extern TypeInfo t297_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10773_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18041_MI;
struct t29;
#define m18041(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18041_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
extern Il2CppType t29_0_0_1;
FieldInfo t1993_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t1993_TI, offsetof(t1993, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1993_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t1993_TI, offsetof(t1993, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1993_FIs[] =
{
	&t1993_f0_FieldInfo,
	&t1993_f1_FieldInfo,
	NULL
};
extern MethodInfo m10770_MI;
static PropertyInfo t1993____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1993_TI, "System.Collections.IEnumerator.Current", &m10770_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10773_MI;
static PropertyInfo t1993____Current_PropertyInfo = 
{
	&t1993_TI, "Current", &m10773_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1993_PIs[] =
{
	&t1993____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1993____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t1993_m10769_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t1993_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10769_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1993_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1993_m10769_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1993_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10770_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t1993_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1993_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10771_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t1993_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1993_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10772_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t1993_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1993_TI;
extern Il2CppType t297_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10773_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t1993_TI, &t297_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1993_MIs[] =
{
	&m10769_MI,
	&m10770_MI,
	&m10771_MI,
	&m10772_MI,
	&m10773_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10770_MI;
extern MethodInfo m10772_MI;
extern MethodInfo m10771_MI;
extern MethodInfo m10773_MI;
static MethodInfo* t1993_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10770_MI,
	&m10772_MI,
	&m10771_MI,
	&m10773_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3427_TI;
static TypeInfo* t1993_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3427_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3427_TI;
static Il2CppInterfaceOffsetPair t1993_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3427_TI, 7},
};
extern MethodInfo m10773_MI;
extern TypeInfo t297_TI;
extern MethodInfo m18041_MI;
static void* t1993_RGCTXData[3] = 
{
	&m10773_MI,
	&t297_TI,
	&m18041_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1993_0_0_0;
extern Il2CppType t1993_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1993_TI;
extern Il2CppGenericClass t1993_GC;
extern TypeInfo t29_TI;
TypeInfo t1993_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1993_MIs, t1993_PIs, t1993_FIs, NULL, &t26_TI, NULL, &t29_TI, &t1993_TI, t1993_ITIs, t1993_VT, &EmptyCustomAttributesCache, &t1993_TI, &t1993_0_0_0, &t1993_1_0_0, t1993_IOs, &t1993_GC, NULL, NULL, NULL, t1993_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1993)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4101_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>
extern MethodInfo m24344_MI;
extern MethodInfo m24345_MI;
static PropertyInfo t4101____Item_PropertyInfo = 
{
	&t4101_TI, "Item", &m24344_MI, &m24345_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4101_PIs[] =
{
	&t4101____Item_PropertyInfo,
	NULL
};
extern Il2CppType t297_0_0_0;
static ParameterInfo t4101_m24346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24346_MI = 
{
	"IndexOf", NULL, &t4101_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4101_m24346_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t297_0_0_0;
static ParameterInfo t4101_m24347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24347_MI = 
{
	"Insert", NULL, &t4101_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4101_m24347_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4101_m24348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24348_MI = 
{
	"RemoveAt", NULL, &t4101_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4101_m24348_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4101_m24344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t297_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24344_MI = 
{
	"get_Item", NULL, &t4101_TI, &t297_0_0_0, RuntimeInvoker_t28_t47, t4101_m24344_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t297_0_0_0;
static ParameterInfo t4101_m24345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t297_0_0_0},
};
extern TypeInfo t4101_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24345_MI = 
{
	"set_Item", NULL, &t4101_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4101_m24345_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4101_MIs[] =
{
	&m24346_MI,
	&m24347_MI,
	&m24348_MI,
	&m24344_MI,
	&m24345_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4100_TI;
extern TypeInfo t4102_TI;
static TypeInfo* t4101_ITIs[] = 
{
	&t611_TI,
	&t4100_TI,
	&t4102_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4101_0_0_0;
extern Il2CppType t4101_1_0_0;
struct t4101;
extern TypeInfo t4101_TI;
extern Il2CppGenericClass t4101_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4101_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4101_MIs, t4101_PIs, NULL, NULL, NULL, NULL, NULL, &t4101_TI, t4101_ITIs, NULL, &t1418__CustomAttributeCache, &t4101_TI, &t4101_0_0_0, &t4101_1_0_0, NULL, &t4101_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4103_TI;

#include "t208.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m24349_MI;
static PropertyInfo t4103____Count_PropertyInfo = 
{
	&t4103_TI, "Count", &m24349_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24350_MI;
static PropertyInfo t4103____IsReadOnly_PropertyInfo = 
{
	&t4103_TI, "IsReadOnly", &m24350_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4103_PIs[] =
{
	&t4103____Count_PropertyInfo,
	&t4103____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4103_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24349_MI = 
{
	"get_Count", NULL, &t4103_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4103_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24350_MI = 
{
	"get_IsReadOnly", NULL, &t4103_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4103_m24351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4103_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24351_MI = 
{
	"Add", NULL, &t4103_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4103_m24351_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4103_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24352_MI = 
{
	"Clear", NULL, &t4103_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4103_m24353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4103_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24353_MI = 
{
	"Contains", NULL, &t4103_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4103_m24353_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3260_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4103_m24354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3260_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4103_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24354_MI = 
{
	"CopyTo", NULL, &t4103_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4103_m24354_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4103_m24355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4103_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24355_MI = 
{
	"Remove", NULL, &t4103_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4103_m24355_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4103_MIs[] =
{
	&m24349_MI,
	&m24350_MI,
	&m24351_MI,
	&m24352_MI,
	&m24353_MI,
	&m24354_MI,
	&m24355_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4105_TI;
static TypeInfo* t4103_ITIs[] = 
{
	&t611_TI,
	&t4105_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4103_0_0_0;
extern Il2CppType t4103_1_0_0;
struct t4103;
extern TypeInfo t4103_TI;
extern Il2CppGenericClass t4103_GC;
TypeInfo t4103_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4103_MIs, t4103_PIs, NULL, NULL, NULL, NULL, NULL, &t4103_TI, t4103_ITIs, NULL, &EmptyCustomAttributesCache, &t4103_TI, &t4103_0_0_0, &t4103_1_0_0, NULL, &t4103_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4105_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.MaskableGraphic>
extern TypeInfo t4105_TI;
extern Il2CppType t3428_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24356_MI = 
{
	"GetEnumerator", NULL, &t4105_TI, &t3428_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4105_MIs[] =
{
	&m24356_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4105_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4105_0_0_0;
extern Il2CppType t4105_1_0_0;
struct t4105;
extern TypeInfo t4105_TI;
extern Il2CppGenericClass t4105_GC;
TypeInfo t4105_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4105_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4105_TI, t4105_ITIs, NULL, &EmptyCustomAttributesCache, &t4105_TI, &t4105_0_0_0, &t4105_1_0_0, NULL, &t4105_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3428_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m24357_MI;
static PropertyInfo t3428____Current_PropertyInfo = 
{
	&t3428_TI, "Current", &m24357_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3428_PIs[] =
{
	&t3428____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3428_TI;
extern Il2CppType t208_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24357_MI = 
{
	"get_Current", NULL, &t3428_TI, &t208_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3428_MIs[] =
{
	&m24357_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3428_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3428_0_0_0;
extern Il2CppType t3428_1_0_0;
struct t3428;
extern TypeInfo t3428_TI;
extern Il2CppGenericClass t3428_GC;
TypeInfo t3428_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3428_MIs, t3428_PIs, NULL, NULL, NULL, NULL, NULL, &t3428_TI, t3428_ITIs, NULL, &EmptyCustomAttributesCache, &t3428_TI, &t3428_0_0_0, &t3428_1_0_0, NULL, &t3428_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1994.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1994_TI;
#include "t1994MD.h"

extern TypeInfo t1994_TI;
extern TypeInfo t208_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10778_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18052_MI;
struct t29;
#define m18052(__this, p0, method) (t208 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18052_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
extern Il2CppType t29_0_0_1;
FieldInfo t1994_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t1994_TI, offsetof(t1994, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1994_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t1994_TI, offsetof(t1994, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1994_FIs[] =
{
	&t1994_f0_FieldInfo,
	&t1994_f1_FieldInfo,
	NULL
};
extern MethodInfo m10775_MI;
static PropertyInfo t1994____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1994_TI, "System.Collections.IEnumerator.Current", &m10775_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10778_MI;
static PropertyInfo t1994____Current_PropertyInfo = 
{
	&t1994_TI, "Current", &m10778_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1994_PIs[] =
{
	&t1994____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1994____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t1994_m10774_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t1994_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10774_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1994_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1994_m10774_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10775_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t1994_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10776_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t1994_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10777_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t1994_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1994_TI;
extern Il2CppType t208_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10778_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t1994_TI, &t208_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1994_MIs[] =
{
	&m10774_MI,
	&m10775_MI,
	&m10776_MI,
	&m10777_MI,
	&m10778_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10775_MI;
extern MethodInfo m10777_MI;
extern MethodInfo m10776_MI;
extern MethodInfo m10778_MI;
static MethodInfo* t1994_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10775_MI,
	&m10777_MI,
	&m10776_MI,
	&m10778_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3428_TI;
static TypeInfo* t1994_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3428_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3428_TI;
static Il2CppInterfaceOffsetPair t1994_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3428_TI, 7},
};
extern MethodInfo m10778_MI;
extern TypeInfo t208_TI;
extern MethodInfo m18052_MI;
static void* t1994_RGCTXData[3] = 
{
	&m10778_MI,
	&t208_TI,
	&m18052_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1994_0_0_0;
extern Il2CppType t1994_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1994_TI;
extern Il2CppGenericClass t1994_GC;
extern TypeInfo t29_TI;
TypeInfo t1994_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1994_MIs, t1994_PIs, t1994_FIs, NULL, &t26_TI, NULL, &t29_TI, &t1994_TI, t1994_ITIs, t1994_VT, &EmptyCustomAttributesCache, &t1994_TI, &t1994_0_0_0, &t1994_1_0_0, t1994_IOs, &t1994_GC, NULL, NULL, NULL, t1994_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1994)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4104_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>
extern MethodInfo m24358_MI;
extern MethodInfo m24359_MI;
static PropertyInfo t4104____Item_PropertyInfo = 
{
	&t4104_TI, "Item", &m24358_MI, &m24359_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4104_PIs[] =
{
	&t4104____Item_PropertyInfo,
	NULL
};
extern Il2CppType t208_0_0_0;
static ParameterInfo t4104_m24360_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24360_MI = 
{
	"IndexOf", NULL, &t4104_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4104_m24360_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t208_0_0_0;
static ParameterInfo t4104_m24361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24361_MI = 
{
	"Insert", NULL, &t4104_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4104_m24361_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4104_m24362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24362_MI = 
{
	"RemoveAt", NULL, &t4104_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4104_m24362_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4104_m24358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t208_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24358_MI = 
{
	"get_Item", NULL, &t4104_TI, &t208_0_0_0, RuntimeInvoker_t28_t47, t4104_m24358_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t208_0_0_0;
static ParameterInfo t4104_m24359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t208_0_0_0},
};
extern TypeInfo t4104_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24359_MI = 
{
	"set_Item", NULL, &t4104_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4104_m24359_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4104_MIs[] =
{
	&m24360_MI,
	&m24361_MI,
	&m24362_MI,
	&m24358_MI,
	&m24359_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4103_TI;
extern TypeInfo t4105_TI;
static TypeInfo* t4104_ITIs[] = 
{
	&t611_TI,
	&t4103_TI,
	&t4105_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4104_0_0_0;
extern Il2CppType t4104_1_0_0;
struct t4104;
extern TypeInfo t4104_TI;
extern Il2CppGenericClass t4104_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4104_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4104_MIs, t4104_PIs, NULL, NULL, NULL, NULL, NULL, &t4104_TI, t4104_ITIs, NULL, &t1418__CustomAttributeCache, &t4104_TI, &t4104_0_0_0, &t4104_1_0_0, NULL, &t4104_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4106_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>
extern MethodInfo m24363_MI;
static PropertyInfo t4106____Count_PropertyInfo = 
{
	&t4106_TI, "Count", &m24363_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24364_MI;
static PropertyInfo t4106____IsReadOnly_PropertyInfo = 
{
	&t4106_TI, "IsReadOnly", &m24364_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4106_PIs[] =
{
	&t4106____Count_PropertyInfo,
	&t4106____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4106_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24363_MI = 
{
	"get_Count", NULL, &t4106_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4106_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24364_MI = 
{
	"get_IsReadOnly", NULL, &t4106_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t4106_m24365_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t4106_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24365_MI = 
{
	"Add", NULL, &t4106_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4106_m24365_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4106_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24366_MI = 
{
	"Clear", NULL, &t4106_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t4106_m24367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t4106_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24367_MI = 
{
	"Contains", NULL, &t4106_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4106_m24367_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t3261_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4106_m24368_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t3261_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4106_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24368_MI = 
{
	"CopyTo", NULL, &t4106_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4106_m24368_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t381_0_0_0;
static ParameterInfo t4106_m24369_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t4106_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24369_MI = 
{
	"Remove", NULL, &t4106_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4106_m24369_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4106_MIs[] =
{
	&m24363_MI,
	&m24364_MI,
	&m24365_MI,
	&m24366_MI,
	&m24367_MI,
	&m24368_MI,
	&m24369_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4108_TI;
static TypeInfo* t4106_ITIs[] = 
{
	&t611_TI,
	&t4108_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4106_0_0_0;
extern Il2CppType t4106_1_0_0;
struct t4106;
extern TypeInfo t4106_TI;
extern Il2CppGenericClass t4106_GC;
TypeInfo t4106_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4106_MIs, t4106_PIs, NULL, NULL, NULL, NULL, NULL, &t4106_TI, t4106_ITIs, NULL, &EmptyCustomAttributesCache, &t4106_TI, &t4106_0_0_0, &t4106_1_0_0, NULL, &t4106_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4108_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaskable>
extern TypeInfo t4108_TI;
extern Il2CppType t3429_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24370_MI = 
{
	"GetEnumerator", NULL, &t4108_TI, &t3429_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4108_MIs[] =
{
	&m24370_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4108_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4108_0_0_0;
extern Il2CppType t4108_1_0_0;
struct t4108;
extern TypeInfo t4108_TI;
extern Il2CppGenericClass t4108_GC;
TypeInfo t4108_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4108_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4108_TI, t4108_ITIs, NULL, &EmptyCustomAttributesCache, &t4108_TI, &t4108_0_0_0, &t4108_1_0_0, NULL, &t4108_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3429_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaskable>
extern MethodInfo m24371_MI;
static PropertyInfo t3429____Current_PropertyInfo = 
{
	&t3429_TI, "Current", &m24371_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3429_PIs[] =
{
	&t3429____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3429_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24371_MI = 
{
	"get_Current", NULL, &t3429_TI, &t381_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3429_MIs[] =
{
	&m24371_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3429_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3429_0_0_0;
extern Il2CppType t3429_1_0_0;
struct t3429;
extern TypeInfo t3429_TI;
extern Il2CppGenericClass t3429_GC;
TypeInfo t3429_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3429_MIs, t3429_PIs, NULL, NULL, NULL, NULL, NULL, &t3429_TI, t3429_ITIs, NULL, &EmptyCustomAttributesCache, &t3429_TI, &t3429_0_0_0, &t3429_1_0_0, NULL, &t3429_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1995.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1995_TI;
#include "t1995MD.h"

extern TypeInfo t1995_TI;
extern TypeInfo t381_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10783_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18063_MI;
struct t29;
#define m18063(__this, p0, method) (t28 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18063_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
extern Il2CppType t29_0_0_1;
FieldInfo t1995_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t1995_TI, offsetof(t1995, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1995_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t1995_TI, offsetof(t1995, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1995_FIs[] =
{
	&t1995_f0_FieldInfo,
	&t1995_f1_FieldInfo,
	NULL
};
extern MethodInfo m10780_MI;
static PropertyInfo t1995____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1995_TI, "System.Collections.IEnumerator.Current", &m10780_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10783_MI;
static PropertyInfo t1995____Current_PropertyInfo = 
{
	&t1995_TI, "Current", &m10783_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1995_PIs[] =
{
	&t1995____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1995____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t1995_m10779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t1995_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10779_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1995_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1995_m10779_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1995_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10780_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t1995_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1995_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10781_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t1995_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1995_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10782_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t1995_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1995_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10783_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t1995_TI, &t381_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1995_MIs[] =
{
	&m10779_MI,
	&m10780_MI,
	&m10781_MI,
	&m10782_MI,
	&m10783_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10780_MI;
extern MethodInfo m10782_MI;
extern MethodInfo m10781_MI;
extern MethodInfo m10783_MI;
static MethodInfo* t1995_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10780_MI,
	&m10782_MI,
	&m10781_MI,
	&m10783_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3429_TI;
static TypeInfo* t1995_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3429_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3429_TI;
static Il2CppInterfaceOffsetPair t1995_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3429_TI, 7},
};
extern MethodInfo m10783_MI;
extern TypeInfo t381_TI;
extern MethodInfo m18063_MI;
static void* t1995_RGCTXData[3] = 
{
	&m10783_MI,
	&t381_TI,
	&m18063_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1995_0_0_0;
extern Il2CppType t1995_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1995_TI;
extern Il2CppGenericClass t1995_GC;
extern TypeInfo t29_TI;
TypeInfo t1995_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1995_MIs, t1995_PIs, t1995_FIs, NULL, &t26_TI, NULL, &t29_TI, &t1995_TI, t1995_ITIs, t1995_VT, &EmptyCustomAttributesCache, &t1995_TI, &t1995_0_0_0, &t1995_1_0_0, t1995_IOs, &t1995_GC, NULL, NULL, NULL, t1995_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1995)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4107_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>
extern MethodInfo m24372_MI;
extern MethodInfo m24373_MI;
static PropertyInfo t4107____Item_PropertyInfo = 
{
	&t4107_TI, "Item", &m24372_MI, &m24373_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4107_PIs[] =
{
	&t4107____Item_PropertyInfo,
	NULL
};
extern Il2CppType t381_0_0_0;
static ParameterInfo t4107_m24374_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24374_MI = 
{
	"IndexOf", NULL, &t4107_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4107_m24374_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t4107_m24375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24375_MI = 
{
	"Insert", NULL, &t4107_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4107_m24375_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4107_m24376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24376_MI = 
{
	"RemoveAt", NULL, &t4107_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4107_m24376_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4107_m24372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t381_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24372_MI = 
{
	"get_Item", NULL, &t4107_TI, &t381_0_0_0, RuntimeInvoker_t28_t47, t4107_m24372_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t381_0_0_0;
static ParameterInfo t4107_m24373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t381_0_0_0},
};
extern TypeInfo t4107_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24373_MI = 
{
	"set_Item", NULL, &t4107_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4107_m24373_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4107_MIs[] =
{
	&m24374_MI,
	&m24375_MI,
	&m24376_MI,
	&m24372_MI,
	&m24373_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4106_TI;
extern TypeInfo t4108_TI;
static TypeInfo* t4107_ITIs[] = 
{
	&t611_TI,
	&t4106_TI,
	&t4108_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4107_0_0_0;
extern Il2CppType t4107_1_0_0;
struct t4107;
extern TypeInfo t4107_TI;
extern Il2CppGenericClass t4107_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4107_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4107_MIs, t4107_PIs, NULL, NULL, NULL, NULL, NULL, &t4107_TI, t4107_ITIs, NULL, &t1418__CustomAttributeCache, &t4107_TI, &t4107_0_0_0, &t4107_1_0_0, NULL, &t4107_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t374_TI;

#include "t181.h"


// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
extern MethodInfo m1742_MI;
static PropertyInfo t374____Count_PropertyInfo = 
{
	&t374_TI, "Count", &m1742_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24377_MI;
static PropertyInfo t374____IsReadOnly_PropertyInfo = 
{
	&t374_TI, "IsReadOnly", &m24377_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t374_PIs[] =
{
	&t374____Count_PropertyInfo,
	&t374____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t374_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1742_MI = 
{
	"get_Count", NULL, &t374_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24377_MI = 
{
	"get_IsReadOnly", NULL, &t374_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t181_0_0_0;
static ParameterInfo t374_m24378_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24378_MI = 
{
	"Add", NULL, &t374_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t374_m24378_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t374_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24379_MI = 
{
	"Clear", NULL, &t374_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t181_0_0_0;
static ParameterInfo t374_m24380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24380_MI = 
{
	"Contains", NULL, &t374_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t374_m24380_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2056_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t374_m24381_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t2056_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24381_MI = 
{
	"CopyTo", NULL, &t374_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t374_m24381_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t181_0_0_0;
static ParameterInfo t374_m24382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t374_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24382_MI = 
{
	"Remove", NULL, &t374_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t374_m24382_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t374_MIs[] =
{
	&m1742_MI,
	&m24377_MI,
	&m24378_MI,
	&m24379_MI,
	&m24380_MI,
	&m24381_MI,
	&m24382_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t2058_TI;
static TypeInfo* t374_ITIs[] = 
{
	&t611_TI,
	&t2058_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t374_0_0_0;
extern Il2CppType t374_1_0_0;
struct t374;
extern TypeInfo t374_TI;
extern Il2CppGenericClass t374_GC;
TypeInfo t374_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t374_MIs, t374_PIs, NULL, NULL, NULL, NULL, NULL, &t374_TI, t374_ITIs, NULL, &EmptyCustomAttributesCache, &t374_TI, &t374_0_0_0, &t374_1_0_0, NULL, &t374_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2058_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
extern TypeInfo t2058_TI;
extern Il2CppType t2057_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24383_MI = 
{
	"GetEnumerator", NULL, &t2058_TI, &t2057_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2058_MIs[] =
{
	&m24383_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t2058_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2058_0_0_0;
extern Il2CppType t2058_1_0_0;
struct t2058;
extern TypeInfo t2058_TI;
extern Il2CppGenericClass t2058_GC;
TypeInfo t2058_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t2058_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t2058_TI, t2058_ITIs, NULL, &EmptyCustomAttributesCache, &t2058_TI, &t2058_0_0_0, &t2058_1_0_0, NULL, &t2058_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2057_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
extern MethodInfo m24384_MI;
static PropertyInfo t2057____Current_PropertyInfo = 
{
	&t2057_TI, "Current", &m24384_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2057_PIs[] =
{
	&t2057____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2057_TI;
extern Il2CppType t181_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24384_MI = 
{
	"get_Current", NULL, &t2057_TI, &t181_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2057_MIs[] =
{
	&m24384_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t2057_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2057_0_0_0;
extern Il2CppType t2057_1_0_0;
struct t2057;
extern TypeInfo t2057_TI;
extern Il2CppGenericClass t2057_GC;
TypeInfo t2057_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2057_MIs, t2057_PIs, NULL, NULL, NULL, NULL, NULL, &t2057_TI, t2057_ITIs, NULL, &EmptyCustomAttributesCache, &t2057_TI, &t2057_0_0_0, &t2057_1_0_0, NULL, &t2057_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t1996.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1996_TI;
#include "t1996MD.h"

extern TypeInfo t1996_TI;
extern TypeInfo t181_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10788_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18074_MI;
struct t29;
#define m18074(__this, p0, method) (t181 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18074_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
extern Il2CppType t29_0_0_1;
FieldInfo t1996_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t1996_TI, offsetof(t1996, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1996_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t1996_TI, offsetof(t1996, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1996_FIs[] =
{
	&t1996_f0_FieldInfo,
	&t1996_f1_FieldInfo,
	NULL
};
extern MethodInfo m10785_MI;
static PropertyInfo t1996____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1996_TI, "System.Collections.IEnumerator.Current", &m10785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10788_MI;
static PropertyInfo t1996____Current_PropertyInfo = 
{
	&t1996_TI, "Current", &m10788_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1996_PIs[] =
{
	&t1996____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1996____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t1996_m10784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t1996_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10784_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t1996_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1996_m10784_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1996_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10785_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t1996_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1996_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10786_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t1996_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1996_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10787_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t1996_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1996_TI;
extern Il2CppType t181_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10788_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t1996_TI, &t181_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1996_MIs[] =
{
	&m10784_MI,
	&m10785_MI,
	&m10786_MI,
	&m10787_MI,
	&m10788_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10785_MI;
extern MethodInfo m10787_MI;
extern MethodInfo m10786_MI;
extern MethodInfo m10788_MI;
static MethodInfo* t1996_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10785_MI,
	&m10787_MI,
	&m10786_MI,
	&m10788_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2057_TI;
static TypeInfo* t1996_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2057_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2057_TI;
static Il2CppInterfaceOffsetPair t1996_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2057_TI, 7},
};
extern MethodInfo m10788_MI;
extern TypeInfo t181_TI;
extern MethodInfo m18074_MI;
static void* t1996_RGCTXData[3] = 
{
	&m10788_MI,
	&t181_TI,
	&m18074_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1996_0_0_0;
extern Il2CppType t1996_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1996_TI;
extern Il2CppGenericClass t1996_GC;
extern TypeInfo t29_TI;
TypeInfo t1996_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t1996_MIs, t1996_PIs, t1996_FIs, NULL, &t26_TI, NULL, &t29_TI, &t1996_TI, t1996_ITIs, t1996_VT, &EmptyCustomAttributesCache, &t1996_TI, &t1996_0_0_0, &t1996_1_0_0, t1996_IOs, &t1996_GC, NULL, NULL, NULL, t1996_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1996)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t198_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
extern MethodInfo m1739_MI;
extern MethodInfo m24385_MI;
static PropertyInfo t198____Item_PropertyInfo = 
{
	&t198_TI, "Item", &m1739_MI, &m24385_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t198_PIs[] =
{
	&t198____Item_PropertyInfo,
	NULL
};
extern Il2CppType t181_0_0_0;
static ParameterInfo t198_m24386_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t198_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24386_MI = 
{
	"IndexOf", NULL, &t198_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t198_m24386_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t181_0_0_0;
static ParameterInfo t198_m24387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t198_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24387_MI = 
{
	"Insert", NULL, &t198_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t198_m24387_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t198_m24388_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t198_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24388_MI = 
{
	"RemoveAt", NULL, &t198_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t198_m24388_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t198_m1739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t198_TI;
extern Il2CppType t181_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1739_MI = 
{
	"get_Item", NULL, &t198_TI, &t181_0_0_0, RuntimeInvoker_t28_t47, t198_m1739_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t181_0_0_0;
static ParameterInfo t198_m24385_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t198_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24385_MI = 
{
	"set_Item", NULL, &t198_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t198_m24385_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t198_MIs[] =
{
	&m24386_MI,
	&m24387_MI,
	&m24388_MI,
	&m1739_MI,
	&m24385_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t374_TI;
extern TypeInfo t2058_TI;
static TypeInfo* t198_ITIs[] = 
{
	&t611_TI,
	&t374_TI,
	&t2058_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t198_0_0_0;
extern Il2CppType t198_1_0_0;
struct t198;
extern TypeInfo t198_TI;
extern Il2CppGenericClass t198_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t198_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t198_MIs, t198_PIs, NULL, NULL, NULL, NULL, NULL, &t198_TI, t198_ITIs, NULL, &t1418__CustomAttributeCache, &t198_TI, &t198_0_0_0, &t198_1_0_0, NULL, &t198_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1991_TI;

extern TypeInfo t1991_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t180_TI;
extern TypeInfo t362_TI;
extern TypeInfo t36_TI;
extern TypeInfo t18_TI;
extern TypeInfo t1304_TI;
extern MethodInfo m10792_MI;
extern MethodInfo m7033_MI;
extern MethodInfo m1553_MI;
extern MethodInfo m3122_MI;
extern MethodInfo m7238_MI;
extern MethodInfo m7034_MI;


// Metadata Definition System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
extern Il2CppType t362_0_0_1;
FieldInfo t1991_f0_FieldInfo = 
{
	"l", &t362_0_0_1, &t1991_TI, offsetof(t1991, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1991_f1_FieldInfo = 
{
	"next", &t47_0_0_1, &t1991_TI, offsetof(t1991, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1991_f2_FieldInfo = 
{
	"ver", &t47_0_0_1, &t1991_TI, offsetof(t1991, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t180_0_0_1;
FieldInfo t1991_f3_FieldInfo = 
{
	"current", &t180_0_0_1, &t1991_TI, offsetof(t1991, f3) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1991_FIs[] =
{
	&t1991_f0_FieldInfo,
	&t1991_f1_FieldInfo,
	&t1991_f2_FieldInfo,
	&t1991_f3_FieldInfo,
	NULL
};
extern MethodInfo m10790_MI;
static PropertyInfo t1991____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1991_TI, "System.Collections.IEnumerator.Current", &m10790_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10794_MI;
static PropertyInfo t1991____Current_PropertyInfo = 
{
	&t1991_TI, "Current", &m10794_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1991_PIs[] =
{
	&t1991____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1991____Current_PropertyInfo,
	NULL
};
extern Il2CppType t362_0_0_0;
static ParameterInfo t1991_m10789_ParameterInfos[] = 
{
	{"l", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1991_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10789_MI = 
{
	".ctor", (methodPointerType)&m8396_gshared, &t1991_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1991_m10789_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10790_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m8397_gshared, &t1991_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10791_MI = 
{
	"Dispose", (methodPointerType)&m8398_gshared, &t1991_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10792_MI = 
{
	"VerifyState", (methodPointerType)&m8399_gshared, &t1991_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10793_MI = 
{
	"MoveNext", (methodPointerType)&m8400_gshared, &t1991_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1991_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10794_MI = 
{
	"get_Current", (methodPointerType)&m8401_gshared, &t1991_TI, &t180_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1991_MIs[] =
{
	&m10789_MI,
	&m10790_MI,
	&m10791_MI,
	&m10792_MI,
	&m10793_MI,
	&m10794_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10790_MI;
extern MethodInfo m10793_MI;
extern MethodInfo m10791_MI;
extern MethodInfo m10794_MI;
static MethodInfo* t1991_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10790_MI,
	&m10793_MI,
	&m10791_MI,
	&m10794_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1985_TI;
static TypeInfo* t1991_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1985_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1985_TI;
static Il2CppInterfaceOffsetPair t1991_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1985_TI, 7},
};
extern MethodInfo m10792_MI;
extern TypeInfo t180_TI;
extern TypeInfo t1991_TI;
static void* t1991_RGCTXData[3] = 
{
	&m10792_MI,
	&t180_TI,
	&t1991_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1991_0_0_0;
extern Il2CppType t1991_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1991_TI;
extern Il2CppGenericClass t1991_GC;
extern TypeInfo t857_TI;
TypeInfo t1991_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1991_MIs, t1991_PIs, t1991_FIs, NULL, &t26_TI, NULL, &t857_TI, &t1991_TI, t1991_ITIs, t1991_VT, &EmptyCustomAttributesCache, &t1991_TI, &t1991_0_0_0, &t1991_1_0_0, t1991_IOs, &t1991_GC, NULL, NULL, NULL, t1991_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1991)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 6, 2, 4, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1988_TI;

extern TypeInfo t1988_TI;
extern TypeInfo t180_TI;
extern TypeInfo t47_TI;
extern TypeInfo t357_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t350_TI;
extern TypeInfo t661_TI;
extern TypeInfo t30_TI;
extern TypeInfo t29_TI;
extern TypeInfo t611_TI;
extern TypeInfo t158_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1984_TI;
extern TypeInfo t1987_TI;
extern TypeInfo t1985_TI;
#include "t1998MD.h"
extern MethodInfo m10824_MI;
extern MethodInfo m1634_MI;
extern MethodInfo m24330_MI;
extern MethodInfo m24321_MI;
extern MethodInfo m203_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m7527_MI;
extern MethodInfo m7436_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m24328_MI;
extern MethodInfo m24332_MI;
extern MethodInfo m24322_MI;
extern MethodInfo m24323_MI;


// Metadata Definition System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
extern Il2CppType t1997_0_0_1;
FieldInfo t1988_f0_FieldInfo = 
{
	"list", &t1997_0_0_1, &t1988_TI, offsetof(t1988, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1988_FIs[] =
{
	&t1988_f0_FieldInfo,
	NULL
};
extern MethodInfo m10801_MI;
extern MethodInfo m10802_MI;
static PropertyInfo t1988____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo = 
{
	&t1988_TI, "System.Collections.Generic.IList<T>.Item", &m10801_MI, &m10802_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10803_MI;
static PropertyInfo t1988____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1988_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10803_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10813_MI;
static PropertyInfo t1988____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1988_TI, "System.Collections.ICollection.IsSynchronized", &m10813_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10814_MI;
static PropertyInfo t1988____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1988_TI, "System.Collections.ICollection.SyncRoot", &m10814_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10815_MI;
static PropertyInfo t1988____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1988_TI, "System.Collections.IList.IsFixedSize", &m10815_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10816_MI;
static PropertyInfo t1988____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1988_TI, "System.Collections.IList.IsReadOnly", &m10816_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10817_MI;
extern MethodInfo m10818_MI;
static PropertyInfo t1988____System_Collections_IList_Item_PropertyInfo = 
{
	&t1988_TI, "System.Collections.IList.Item", &m10817_MI, &m10818_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10823_MI;
static PropertyInfo t1988____Count_PropertyInfo = 
{
	&t1988_TI, "Count", &m10823_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10824_MI;
static PropertyInfo t1988____Item_PropertyInfo = 
{
	&t1988_TI, "Item", &m10824_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1988_PIs[] =
{
	&t1988____System_Collections_Generic_IListU3CTU3E_Item_PropertyInfo,
	&t1988____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1988____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1988____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1988____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1988____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1988____System_Collections_IList_Item_PropertyInfo,
	&t1988____Count_PropertyInfo,
	&t1988____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1997_0_0_0;
static ParameterInfo t1988_m10795_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1997_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10795_MI = 
{
	".ctor", (methodPointerType)&m8402_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1988_m10795_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1988_m10796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10796_MI = 
{
	"System.Collections.Generic.ICollection<T>.Add", (methodPointerType)&m8403_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1988_m10796_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10797_MI = 
{
	"System.Collections.Generic.ICollection<T>.Clear", (methodPointerType)&m8404_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1988_m10798_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10798_MI = 
{
	"System.Collections.Generic.IList<T>.Insert", (methodPointerType)&m8405_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1988_m10798_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1988_m10799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10799_MI = 
{
	"System.Collections.Generic.ICollection<T>.Remove", (methodPointerType)&m8406_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1988_m10799_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10800_MI = 
{
	"System.Collections.Generic.IList<T>.RemoveAt", (methodPointerType)&m8407_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1988_m10800_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10801_MI = 
{
	"System.Collections.Generic.IList<T>.get_Item", (methodPointerType)&m8408_gshared, &t1988_TI, &t180_0_0_0, RuntimeInvoker_t28_t47, t1988_m10801_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1988_m10802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10802_MI = 
{
	"System.Collections.Generic.IList<T>.set_Item", (methodPointerType)&m8409_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1988_m10802_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10803_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8410_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10804_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10804_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8411_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1988_m10804_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10805_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8412_gshared, &t1988_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1988_m10806_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10806_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8413_gshared, &t1988_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1988_m10806_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10807_MI = 
{
	"System.Collections.IList.Clear", (methodPointerType)&m8414_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 14, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1988_m10808_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10808_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8415_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1988_m10808_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1988_m10809_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10809_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8416_gshared, &t1988_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1988_m10809_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1988_m10810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10810_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8417_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1988_m10810_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1988_m10811_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10811_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8418_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1988_m10811_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10812_MI = 
{
	"System.Collections.IList.RemoveAt", (methodPointerType)&m8419_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1988_m10812_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 19, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10813_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8420_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10814_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8421_gshared, &t1988_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10815_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8422_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10816_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8423_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10817_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8424_gshared, &t1988_TI, &t28_0_0_0, RuntimeInvoker_t28_t47, t1988_m10817_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1988_m10818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10818_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8425_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1988_m10818_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1988_m10819_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10819_MI = 
{
	"Contains", (methodPointerType)&m8426_gshared, &t1988_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1988_m10819_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1984_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10820_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1984_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10820_MI = 
{
	"CopyTo", (methodPointerType)&m8427_gshared, &t1988_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1988_m10820_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t1985_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10821_MI = 
{
	"GetEnumerator", (methodPointerType)&m8428_gshared, &t1988_TI, &t1985_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1988_m10822_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10822_MI = 
{
	"IndexOf", (methodPointerType)&m8429_gshared, &t1988_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1988_m10822_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1988_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10823_MI = 
{
	"get_Count", (methodPointerType)&m8430_gshared, &t1988_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1988_m10824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1988_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10824_MI = 
{
	"get_Item", (methodPointerType)&m8431_gshared, &t1988_TI, &t180_0_0_0, RuntimeInvoker_t28_t47, t1988_m10824_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 33, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1988_MIs[] =
{
	&m10795_MI,
	&m10796_MI,
	&m10797_MI,
	&m10798_MI,
	&m10799_MI,
	&m10800_MI,
	&m10801_MI,
	&m10802_MI,
	&m10803_MI,
	&m10804_MI,
	&m10805_MI,
	&m10806_MI,
	&m10807_MI,
	&m10808_MI,
	&m10809_MI,
	&m10810_MI,
	&m10811_MI,
	&m10812_MI,
	&m10813_MI,
	&m10814_MI,
	&m10815_MI,
	&m10816_MI,
	&m10817_MI,
	&m10818_MI,
	&m10819_MI,
	&m10820_MI,
	&m10821_MI,
	&m10822_MI,
	&m10823_MI,
	&m10824_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10805_MI;
extern MethodInfo m10823_MI;
extern MethodInfo m10813_MI;
extern MethodInfo m10814_MI;
extern MethodInfo m10804_MI;
extern MethodInfo m10815_MI;
extern MethodInfo m10816_MI;
extern MethodInfo m10817_MI;
extern MethodInfo m10818_MI;
extern MethodInfo m10806_MI;
extern MethodInfo m10807_MI;
extern MethodInfo m10808_MI;
extern MethodInfo m10809_MI;
extern MethodInfo m10810_MI;
extern MethodInfo m10811_MI;
extern MethodInfo m10812_MI;
extern MethodInfo m10823_MI;
extern MethodInfo m10803_MI;
extern MethodInfo m10796_MI;
extern MethodInfo m10797_MI;
extern MethodInfo m10819_MI;
extern MethodInfo m10820_MI;
extern MethodInfo m10799_MI;
extern MethodInfo m10822_MI;
extern MethodInfo m10798_MI;
extern MethodInfo m10800_MI;
extern MethodInfo m10801_MI;
extern MethodInfo m10802_MI;
extern MethodInfo m10821_MI;
extern MethodInfo m10824_MI;
static MethodInfo* t1988_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10805_MI,
	&m10823_MI,
	&m10813_MI,
	&m10814_MI,
	&m10804_MI,
	&m10815_MI,
	&m10816_MI,
	&m10817_MI,
	&m10818_MI,
	&m10806_MI,
	&m10807_MI,
	&m10808_MI,
	&m10809_MI,
	&m10810_MI,
	&m10811_MI,
	&m10812_MI,
	&m10823_MI,
	&m10803_MI,
	&m10796_MI,
	&m10797_MI,
	&m10819_MI,
	&m10820_MI,
	&m10799_MI,
	&m10822_MI,
	&m10798_MI,
	&m10800_MI,
	&m10801_MI,
	&m10802_MI,
	&m10821_MI,
	&m10824_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1032_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1987_TI;
static TypeInfo* t1988_ITIs[] = 
{
	&t611_TI,
	&t661_TI,
	&t1032_TI,
	&t1986_TI,
	&t1997_TI,
	&t1987_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1032_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1987_TI;
static Il2CppInterfaceOffsetPair t1988_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t661_TI, 5},
	{ &t1032_TI, 9},
	{ &t1986_TI, 20},
	{ &t1997_TI, 27},
	{ &t1987_TI, 32},
};
extern MethodInfo m10824_MI;
extern MethodInfo m10856_MI;
extern TypeInfo t180_TI;
extern MethodInfo m24328_MI;
extern MethodInfo m24332_MI;
extern MethodInfo m24330_MI;
extern MethodInfo m24322_MI;
extern MethodInfo m24323_MI;
extern MethodInfo m24321_MI;
static void* t1988_RGCTXData[9] = 
{
	&m10824_MI,
	&m10856_MI,
	&t180_TI,
	&m24328_MI,
	&m24332_MI,
	&m24330_MI,
	&m24322_MI,
	&m24323_MI,
	&m24321_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1988_0_0_0;
extern Il2CppType t1988_1_0_0;
extern TypeInfo t28_TI;
struct t1988;
extern TypeInfo t1988_TI;
extern Il2CppGenericClass t1988_GC;
extern CustomAttributesCache t859__CustomAttributeCache;
TypeInfo t1988_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReadOnlyCollection`1", "System.Collections.ObjectModel", t1988_MIs, t1988_PIs, t1988_FIs, NULL, &t28_TI, NULL, NULL, &t1988_TI, t1988_ITIs, t1988_VT, &t859__CustomAttributeCache, &t1988_TI, &t1988_0_0_0, &t1988_1_0_0, t1988_IOs, &t1988_GC, NULL, NULL, NULL, t1988_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1988), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 30, 9, 1, 0, 0, 34, 6, 6};
#include "t1998.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1998_TI;

extern TypeInfo t1998_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t31_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t180_TI;
extern TypeInfo t47_TI;
extern TypeInfo t30_TI;
extern TypeInfo t362_TI;
extern TypeInfo t661_TI;
extern TypeInfo t28_TI;
extern TypeInfo t29_TI;
extern TypeInfo t1987_TI;
extern TypeInfo t1985_TI;
extern TypeInfo t1984_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t357_TI;
extern TypeInfo t1032_TI;
extern Il2CppType t180_0_0_0;
extern MethodInfo m24325_MI;
extern MethodInfo m10859_MI;
extern MethodInfo m10860_MI;
extern MethodInfo m24330_MI;
extern MethodInfo m10857_MI;
extern MethodInfo m10855_MI;
extern MethodInfo m24321_MI;
extern MethodInfo m203_MI;
extern MethodInfo m1661_MI;
extern MethodInfo m7526_MI;
extern MethodInfo m7527_MI;
extern MethodInfo m24323_MI;
extern MethodInfo m10848_MI;
extern MethodInfo m10856_MI;
extern MethodInfo m24328_MI;
extern MethodInfo m24332_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m10846_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m10842_MI;
extern MethodInfo m24327_MI;
extern MethodInfo m24322_MI;
extern MethodInfo m24333_MI;
extern MethodInfo m24334_MI;
extern MethodInfo m24331_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3943_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m1634_MI;
extern MethodInfo m7525_MI;
extern MethodInfo m7528_MI;


// Metadata Definition System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
extern Il2CppType t1997_0_0_1;
FieldInfo t1998_f0_FieldInfo = 
{
	"list", &t1997_0_0_1, &t1998_TI, offsetof(t1998, f0), &EmptyCustomAttributesCache};
extern Il2CppType t28_0_0_1;
FieldInfo t1998_f1_FieldInfo = 
{
	"syncRoot", &t28_0_0_1, &t1998_TI, offsetof(t1998, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1998_FIs[] =
{
	&t1998_f0_FieldInfo,
	&t1998_f1_FieldInfo,
	NULL
};
extern MethodInfo m10826_MI;
static PropertyInfo t1998____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo = 
{
	&t1998_TI, "System.Collections.Generic.ICollection<T>.IsReadOnly", &m10826_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10834_MI;
static PropertyInfo t1998____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1998_TI, "System.Collections.ICollection.IsSynchronized", &m10834_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10835_MI;
static PropertyInfo t1998____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1998_TI, "System.Collections.ICollection.SyncRoot", &m10835_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10836_MI;
static PropertyInfo t1998____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&t1998_TI, "System.Collections.IList.IsFixedSize", &m10836_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10837_MI;
static PropertyInfo t1998____System_Collections_IList_IsReadOnly_PropertyInfo = 
{
	&t1998_TI, "System.Collections.IList.IsReadOnly", &m10837_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10838_MI;
extern MethodInfo m10839_MI;
static PropertyInfo t1998____System_Collections_IList_Item_PropertyInfo = 
{
	&t1998_TI, "System.Collections.IList.Item", &m10838_MI, &m10839_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10852_MI;
static PropertyInfo t1998____Count_PropertyInfo = 
{
	&t1998_TI, "Count", &m10852_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10853_MI;
extern MethodInfo m10854_MI;
static PropertyInfo t1998____Item_PropertyInfo = 
{
	&t1998_TI, "Item", &m10853_MI, &m10854_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1998_PIs[] =
{
	&t1998____System_Collections_Generic_ICollectionU3CTU3E_IsReadOnly_PropertyInfo,
	&t1998____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1998____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1998____System_Collections_IList_IsFixedSize_PropertyInfo,
	&t1998____System_Collections_IList_IsReadOnly_PropertyInfo,
	&t1998____System_Collections_IList_Item_PropertyInfo,
	&t1998____Count_PropertyInfo,
	&t1998____Item_PropertyInfo,
	NULL
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10825_MI = 
{
	".ctor", (methodPointerType)&m8432_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10826_MI = 
{
	"System.Collections.Generic.ICollection<T>.get_IsReadOnly", (methodPointerType)&m8433_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 21, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1998_m10827_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10827_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8434_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1998_m10827_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10828_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8435_gshared, &t1998_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10829_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10829_MI = 
{
	"System.Collections.IList.Add", (methodPointerType)&m8436_gshared, &t1998_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1998_m10829_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10830_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10830_MI = 
{
	"System.Collections.IList.Contains", (methodPointerType)&m8437_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1998_m10830_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10831_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10831_MI = 
{
	"System.Collections.IList.IndexOf", (methodPointerType)&m8438_gshared, &t1998_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1998_m10831_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 16, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10832_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10832_MI = 
{
	"System.Collections.IList.Insert", (methodPointerType)&m8439_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1998_m10832_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 17, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10833_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10833_MI = 
{
	"System.Collections.IList.Remove", (methodPointerType)&m8440_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1998_m10833_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 18, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10834_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8441_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10835_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8442_gshared, &t1998_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10836_MI = 
{
	"System.Collections.IList.get_IsFixedSize", (methodPointerType)&m8443_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10837_MI = 
{
	"System.Collections.IList.get_IsReadOnly", (methodPointerType)&m8444_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1998_m10838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10838_MI = 
{
	"System.Collections.IList.get_Item", (methodPointerType)&m8445_gshared, &t1998_TI, &t28_0_0_0, RuntimeInvoker_t28_t47, t1998_m10838_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10839_MI = 
{
	"System.Collections.IList.set_Item", (methodPointerType)&m8446_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1998_m10839_ParameterInfos, &EmptyCustomAttributesCache, 2529, 0, 12, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10840_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10840_MI = 
{
	"Add", (methodPointerType)&m8447_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1998_m10840_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10841_MI = 
{
	"Clear", (methodPointerType)&m8448_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 23, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10842_MI = 
{
	"ClearItems", (methodPointerType)&m8449_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 452, 0, 33, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10843_MI = 
{
	"Contains", (methodPointerType)&m8450_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1998_m10843_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1984_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1998_m10844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1984_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10844_MI = 
{
	"CopyTo", (methodPointerType)&m8451_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1998_m10844_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t1985_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10845_MI = 
{
	"GetEnumerator", (methodPointerType)&m8452_gshared, &t1998_TI, &t1985_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10846_MI = 
{
	"IndexOf", (methodPointerType)&m8453_gshared, &t1998_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1998_m10846_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10847_MI = 
{
	"Insert", (methodPointerType)&m8454_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1998_m10847_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10848_MI = 
{
	"InsertItem", (methodPointerType)&m8455_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1998_m10848_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 34, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10849_MI = 
{
	"Remove", (methodPointerType)&m8456_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1998_m10849_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1998_m10850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10850_MI = 
{
	"RemoveAt", (methodPointerType)&m8457_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1998_m10850_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1998_m10851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10851_MI = 
{
	"RemoveItem", (methodPointerType)&m8458_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t1998_m10851_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 35, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1998_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10852_MI = 
{
	"get_Count", (methodPointerType)&m8459_gshared, &t1998_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t1998_m10853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10853_MI = 
{
	"get_Item", (methodPointerType)&m8460_gshared, &t1998_TI, &t180_0_0_0, RuntimeInvoker_t28_t47, t1998_m10853_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 30, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10854_MI = 
{
	"set_Item", (methodPointerType)&m8461_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1998_m10854_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 31, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1998_m10855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10855_MI = 
{
	"SetItem", (methodPointerType)&m8462_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t1998_m10855_ParameterInfos, &EmptyCustomAttributesCache, 452, 0, 36, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10856_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10856_MI = 
{
	"IsValidItem", (methodPointerType)&m8463_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1998_m10856_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1998_m10857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t180_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10857_MI = 
{
	"ConvertItem", (methodPointerType)&m8464_gshared, &t1998_TI, &t180_0_0_0, RuntimeInvoker_t28_t28, t1998_m10857_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1997_0_0_0;
static ParameterInfo t1998_m10858_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1997_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10858_MI = 
{
	"CheckWritable", (methodPointerType)&m8465_gshared, &t1998_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1998_m10858_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1997_0_0_0;
static ParameterInfo t1998_m10859_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1997_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10859_MI = 
{
	"IsSynchronized", (methodPointerType)&m8466_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1998_m10859_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1997_0_0_0;
static ParameterInfo t1998_m10860_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &t1997_0_0_0},
};
extern TypeInfo t1998_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10860_MI = 
{
	"IsFixedSize", (methodPointerType)&m8467_gshared, &t1998_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1998_m10860_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1998_MIs[] =
{
	&m10825_MI,
	&m10826_MI,
	&m10827_MI,
	&m10828_MI,
	&m10829_MI,
	&m10830_MI,
	&m10831_MI,
	&m10832_MI,
	&m10833_MI,
	&m10834_MI,
	&m10835_MI,
	&m10836_MI,
	&m10837_MI,
	&m10838_MI,
	&m10839_MI,
	&m10840_MI,
	&m10841_MI,
	&m10842_MI,
	&m10843_MI,
	&m10844_MI,
	&m10845_MI,
	&m10846_MI,
	&m10847_MI,
	&m10848_MI,
	&m10849_MI,
	&m10850_MI,
	&m10851_MI,
	&m10852_MI,
	&m10853_MI,
	&m10854_MI,
	&m10855_MI,
	&m10856_MI,
	&m10857_MI,
	&m10858_MI,
	&m10859_MI,
	&m10860_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10828_MI;
extern MethodInfo m10852_MI;
extern MethodInfo m10834_MI;
extern MethodInfo m10835_MI;
extern MethodInfo m10827_MI;
extern MethodInfo m10836_MI;
extern MethodInfo m10837_MI;
extern MethodInfo m10838_MI;
extern MethodInfo m10839_MI;
extern MethodInfo m10829_MI;
extern MethodInfo m10841_MI;
extern MethodInfo m10830_MI;
extern MethodInfo m10831_MI;
extern MethodInfo m10832_MI;
extern MethodInfo m10833_MI;
extern MethodInfo m10850_MI;
extern MethodInfo m10852_MI;
extern MethodInfo m10826_MI;
extern MethodInfo m10840_MI;
extern MethodInfo m10841_MI;
extern MethodInfo m10843_MI;
extern MethodInfo m10844_MI;
extern MethodInfo m10849_MI;
extern MethodInfo m10846_MI;
extern MethodInfo m10847_MI;
extern MethodInfo m10850_MI;
extern MethodInfo m10853_MI;
extern MethodInfo m10854_MI;
extern MethodInfo m10845_MI;
extern MethodInfo m10842_MI;
extern MethodInfo m10848_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m10855_MI;
static MethodInfo* t1998_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10828_MI,
	&m10852_MI,
	&m10834_MI,
	&m10835_MI,
	&m10827_MI,
	&m10836_MI,
	&m10837_MI,
	&m10838_MI,
	&m10839_MI,
	&m10829_MI,
	&m10841_MI,
	&m10830_MI,
	&m10831_MI,
	&m10832_MI,
	&m10833_MI,
	&m10850_MI,
	&m10852_MI,
	&m10826_MI,
	&m10840_MI,
	&m10841_MI,
	&m10843_MI,
	&m10844_MI,
	&m10849_MI,
	&m10846_MI,
	&m10847_MI,
	&m10850_MI,
	&m10853_MI,
	&m10854_MI,
	&m10845_MI,
	&m10842_MI,
	&m10848_MI,
	&m10851_MI,
	&m10855_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1032_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1987_TI;
static TypeInfo* t1998_ITIs[] = 
{
	&t611_TI,
	&t661_TI,
	&t1032_TI,
	&t1986_TI,
	&t1997_TI,
	&t1987_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t1032_TI;
extern TypeInfo t1986_TI;
extern TypeInfo t1997_TI;
extern TypeInfo t1987_TI;
static Il2CppInterfaceOffsetPair t1998_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t661_TI, 5},
	{ &t1032_TI, 9},
	{ &t1986_TI, 20},
	{ &t1997_TI, 27},
	{ &t1987_TI, 32},
};
extern TypeInfo t362_TI;
extern MethodInfo m1661_MI;
extern MethodInfo m24325_MI;
extern MethodInfo m24323_MI;
extern MethodInfo m24321_MI;
extern MethodInfo m10857_MI;
extern MethodInfo m10848_MI;
extern MethodInfo m10856_MI;
extern TypeInfo t180_TI;
extern MethodInfo m24328_MI;
extern MethodInfo m24332_MI;
extern MethodInfo m10858_MI;
extern MethodInfo m10846_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m10859_MI;
extern MethodInfo m10860_MI;
extern MethodInfo m24330_MI;
extern MethodInfo m10855_MI;
extern MethodInfo m10842_MI;
extern MethodInfo m24327_MI;
extern MethodInfo m24322_MI;
extern MethodInfo m24333_MI;
extern MethodInfo m24334_MI;
extern MethodInfo m24331_MI;
extern Il2CppType t180_0_0_0;
static void* t1998_RGCTXData[25] = 
{
	&t362_TI,
	&m1661_MI,
	&m24325_MI,
	&m24323_MI,
	&m24321_MI,
	&m10857_MI,
	&m10848_MI,
	&m10856_MI,
	&t180_TI,
	&m24328_MI,
	&m24332_MI,
	&m10858_MI,
	&m10846_MI,
	&m10851_MI,
	&m10859_MI,
	&m10860_MI,
	&m24330_MI,
	&m10855_MI,
	&m10842_MI,
	&m24327_MI,
	&m24322_MI,
	&m24333_MI,
	&m24334_MI,
	&m24331_MI,
	(void*)&t180_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1998_0_0_0;
extern Il2CppType t1998_1_0_0;
extern TypeInfo t28_TI;
struct t1998;
extern TypeInfo t1998_TI;
extern Il2CppGenericClass t1998_GC;
extern CustomAttributesCache t858__CustomAttributeCache;
TypeInfo t1998_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Collection`1", "System.Collections.ObjectModel", t1998_MIs, t1998_PIs, t1998_FIs, NULL, &t28_TI, NULL, NULL, &t1998_TI, t1998_ITIs, t1998_VT, &t858__CustomAttributeCache, &t1998_TI, &t1998_0_0_0, &t1998_1_0_0, t1998_IOs, &t1998_GC, NULL, NULL, NULL, t1998_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1998), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 36, 8, 2, 0, 0, 37, 6, 6};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1999_TI;
#include "t1999MD.h"

#include "t854.h"
#include "t2000.h"
extern TypeInfo t1999_TI;
extern TypeInfo t5273_TI;
extern TypeInfo t36_TI;
extern TypeInfo t180_TI;
extern TypeInfo t31_TI;
extern TypeInfo t854_TI;
extern TypeInfo t545_TI;
extern TypeInfo t2000_TI;
extern TypeInfo t47_TI;
#include "t1240MD.h"
#include "t2000MD.h"
extern Il2CppType t5273_0_0_0;
extern Il2CppType t180_0_0_0;
extern Il2CppType t854_0_0_0;
extern MethodInfo m203_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3105_MI;
extern MethodInfo m3103_MI;
extern MethodInfo m6569_MI;
extern MethodInfo m10866_MI;
extern MethodInfo m24389_MI;
extern MethodInfo m18086_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
extern Il2CppType t1999_0_0_49;
FieldInfo t1999_f0_FieldInfo = 
{
	"_default", &t1999_0_0_49, &t1999_TI, offsetof(t1999_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1999_FIs[] =
{
	&t1999_f0_FieldInfo,
	NULL
};
extern MethodInfo m10865_MI;
static PropertyInfo t1999____Default_PropertyInfo = 
{
	&t1999_TI, "Default", &m10865_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1999_PIs[] =
{
	&t1999____Default_PropertyInfo,
	NULL
};
extern TypeInfo t1999_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10861_MI = 
{
	".ctor", (methodPointerType)&m8468_gshared, &t1999_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1999_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10862_MI = 
{
	".cctor", (methodPointerType)&m8469_gshared, &t1999_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t1999_m10863_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1999_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10863_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8470_gshared, &t1999_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1999_m10863_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1999_m10864_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1999_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10864_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8471_gshared, &t1999_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t1999_m10864_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1999_m24389_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1999_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24389_MI = 
{
	"GetHashCode", NULL, &t1999_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1999_m24389_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1999_m18086_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1999_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m18086_MI = 
{
	"Equals", NULL, &t1999_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t1999_m18086_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1999_TI;
extern Il2CppType t1999_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10865_MI = 
{
	"get_Default", (methodPointerType)&m8472_gshared, &t1999_TI, &t1999_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1999_MIs[] =
{
	&m10861_MI,
	&m10862_MI,
	&m10863_MI,
	&m10864_MI,
	&m24389_MI,
	&m18086_MI,
	&m10865_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m18086_MI;
extern MethodInfo m24389_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m10863_MI;
static MethodInfo* t1999_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m18086_MI,
	&m24389_MI,
	&m10864_MI,
	&m10863_MI,
	NULL,
	NULL,
};
extern TypeInfo t5274_TI;
extern TypeInfo t877_TI;
static TypeInfo* t1999_ITIs[] = 
{
	&t5274_TI,
	&t877_TI,
};
extern TypeInfo t5274_TI;
extern TypeInfo t877_TI;
static Il2CppInterfaceOffsetPair t1999_IOs[] = 
{
	{ &t5274_TI, 4},
	{ &t877_TI, 6},
};
extern Il2CppType t5273_0_0_0;
extern Il2CppType t180_0_0_0;
extern TypeInfo t1999_TI;
extern TypeInfo t1999_TI;
extern TypeInfo t2000_TI;
extern MethodInfo m10866_MI;
extern TypeInfo t180_TI;
extern MethodInfo m24389_MI;
extern MethodInfo m18086_MI;
static void* t1999_RGCTXData[9] = 
{
	(void*)&t5273_0_0_0,
	(void*)&t180_0_0_0,
	&t1999_TI,
	&t1999_TI,
	&t2000_TI,
	&m10866_MI,
	&t180_TI,
	&m24389_MI,
	&m18086_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1999_0_0_0;
extern Il2CppType t1999_1_0_0;
extern TypeInfo t28_TI;
struct t1999;
extern TypeInfo t1999_TI;
extern Il2CppGenericClass t1999_GC;
TypeInfo t1999_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t1999_MIs, t1999_PIs, t1999_FIs, NULL, &t28_TI, NULL, NULL, &t1999_TI, t1999_ITIs, t1999_VT, &EmptyCustomAttributesCache, &t1999_TI, &t1999_0_0_0, &t1999_1_0_0, t1999_IOs, &t1999_GC, NULL, NULL, NULL, t1999_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1999), 0, -1, sizeof(t1999_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5274_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Text>
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t5274_m24390_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24390_MI = 
{
	"Equals", NULL, &t5274_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t5274_m24390_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t5274_m24391_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t5274_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24391_MI = 
{
	"GetHashCode", NULL, &t5274_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5274_m24391_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5274_MIs[] =
{
	&m24390_MI,
	&m24391_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5274_0_0_0;
extern Il2CppType t5274_1_0_0;
struct t5274;
extern TypeInfo t5274_TI;
extern Il2CppGenericClass t5274_GC;
TypeInfo t5274_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5274_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5274_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5274_TI, &t5274_0_0_0, &t5274_1_0_0, NULL, &t5274_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5273_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.UI.Text>
extern Il2CppType t180_0_0_0;
static ParameterInfo t5273_m24392_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t5273_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24392_MI = 
{
	"Equals", NULL, &t5273_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5273_m24392_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5273_MIs[] =
{
	&m24392_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5273_0_0_0;
extern Il2CppType t5273_1_0_0;
struct t5273;
extern TypeInfo t5273_TI;
extern Il2CppGenericClass t5273_GC;
TypeInfo t5273_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5273_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5273_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5273_TI, &t5273_0_0_0, &t5273_1_0_0, NULL, &t5273_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2000_TI;

extern TypeInfo t180_TI;
extern TypeInfo t28_TI;
extern TypeInfo t47_TI;
extern TypeInfo t31_TI;
extern MethodInfo m10861_MI;
extern MethodInfo m205_MI;
extern MethodInfo m204_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>
extern TypeInfo t2000_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10866_MI = 
{
	".ctor", (methodPointerType)&m8503_gshared, &t2000_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t2000_m10867_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t2000_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10867_MI = 
{
	"GetHashCode", (methodPointerType)&m8504_gshared, &t2000_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2000_m10867_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t2000_m10868_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t2000_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10868_MI = 
{
	"Equals", (methodPointerType)&m8505_gshared, &t2000_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2000_m10868_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2000_MIs[] =
{
	&m10866_MI,
	&m10867_MI,
	&m10868_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10868_MI;
extern MethodInfo m10867_MI;
extern MethodInfo m10864_MI;
extern MethodInfo m10863_MI;
extern MethodInfo m10867_MI;
extern MethodInfo m10868_MI;
static MethodInfo* t2000_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10868_MI,
	&m10867_MI,
	&m10864_MI,
	&m10863_MI,
	&m10867_MI,
	&m10868_MI,
};
extern TypeInfo t5274_TI;
extern TypeInfo t877_TI;
static Il2CppInterfaceOffsetPair t2000_IOs[] = 
{
	{ &t5274_TI, 4},
	{ &t877_TI, 6},
};
extern Il2CppType t5273_0_0_0;
extern Il2CppType t180_0_0_0;
extern TypeInfo t1999_TI;
extern TypeInfo t1999_TI;
extern TypeInfo t2000_TI;
extern MethodInfo m10866_MI;
extern TypeInfo t180_TI;
extern MethodInfo m24389_MI;
extern MethodInfo m18086_MI;
extern MethodInfo m10861_MI;
extern TypeInfo t180_TI;
static void* t2000_RGCTXData[11] = 
{
	(void*)&t5273_0_0_0,
	(void*)&t180_0_0_0,
	&t1999_TI,
	&t1999_TI,
	&t2000_TI,
	&m10866_MI,
	&t180_TI,
	&m24389_MI,
	&m18086_MI,
	&m10861_MI,
	&t180_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2000_0_0_0;
extern Il2CppType t2000_1_0_0;
extern TypeInfo t1999_TI;
struct t2000;
extern TypeInfo t2000_TI;
extern Il2CppGenericClass t2000_GC;
extern TypeInfo t853_TI;
TypeInfo t2000_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2000_MIs, NULL, NULL, NULL, &t1999_TI, NULL, &t853_TI, &t2000_TI, NULL, t2000_VT, &EmptyCustomAttributesCache, &t2000_TI, &t2000_0_0_0, &t2000_1_0_0, t2000_IOs, &t2000_GC, NULL, NULL, NULL, t2000_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2000), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1989_TI;



// Metadata Definition System.Predicate`1<UnityEngine.UI.Text>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1989_m10869_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1989_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10869_MI = 
{
	".ctor", (methodPointerType)&m8506_gshared, &t1989_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1989_m10869_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
static ParameterInfo t1989_m10870_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1989_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10870_MI = 
{
	"Invoke", (methodPointerType)&m8507_gshared, &t1989_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1989_m10870_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1989_m10871_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1989_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10871_MI = 
{
	"BeginInvoke", (methodPointerType)&m8508_gshared, &t1989_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t1989_m10871_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1989_m10872_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1989_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10872_MI = 
{
	"EndInvoke", (methodPointerType)&m8509_gshared, &t1989_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1989_m10872_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1989_MIs[] =
{
	&m10869_MI,
	&m10870_MI,
	&m10871_MI,
	&m10872_MI,
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
extern MethodInfo m10870_MI;
extern MethodInfo m10871_MI;
extern MethodInfo m10872_MI;
static MethodInfo* t1989_VT[] =
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
	&m10870_MI,
	&m10871_MI,
	&m10872_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1989_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1989_0_0_0;
extern Il2CppType t1989_1_0_0;
extern TypeInfo t221_TI;
struct t1989;
extern TypeInfo t1989_TI;
extern Il2CppGenericClass t1989_GC;
TypeInfo t1989_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Predicate`1", "System", t1989_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t1989_TI, NULL, t1989_VT, &EmptyCustomAttributesCache, &t1989_TI, &t1989_0_0_0, &t1989_1_0_0, t1989_IOs, &t1989_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1989), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2001_TI;

#include "t842.h"
#include "t2002.h"
extern TypeInfo t2001_TI;
extern TypeInfo t3431_TI;
extern TypeInfo t36_TI;
extern TypeInfo t180_TI;
extern TypeInfo t31_TI;
extern TypeInfo t842_TI;
extern TypeInfo t545_TI;
extern TypeInfo t2002_TI;
extern TypeInfo t47_TI;
extern TypeInfo t331_TI;
#include "t2002MD.h"
extern Il2CppType t3431_0_0_0;
extern Il2CppType t180_0_0_0;
extern Il2CppType t842_0_0_0;
extern MethodInfo m203_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3105_MI;
extern MethodInfo m3103_MI;
extern MethodInfo m6569_MI;
extern MethodInfo m10877_MI;
extern MethodInfo m24393_MI;
extern MethodInfo m6591_MI;


// Metadata Definition System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
extern Il2CppType t2001_0_0_49;
FieldInfo t2001_f0_FieldInfo = 
{
	"_default", &t2001_0_0_49, &t2001_TI, offsetof(t2001_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2001_FIs[] =
{
	&t2001_f0_FieldInfo,
	NULL
};
extern MethodInfo m10876_MI;
static PropertyInfo t2001____Default_PropertyInfo = 
{
	&t2001_TI, "Default", &m10876_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2001_PIs[] =
{
	&t2001____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2001_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10873_MI = 
{
	".ctor", (methodPointerType)&m8510_gshared, &t2001_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2001_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10874_MI = 
{
	".cctor", (methodPointerType)&m8511_gshared, &t2001_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2001_m10875_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2001_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10875_MI = 
{
	"System.Collections.IComparer.Compare", (methodPointerType)&m8512_gshared, &t2001_TI, &t47_0_0_0, RuntimeInvoker_t47_t28_t28, t2001_m10875_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t2001_m24393_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t2001_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24393_MI = 
{
	"Compare", NULL, &t2001_TI, &t47_0_0_0, RuntimeInvoker_t47_t28_t28, t2001_m24393_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2001_TI;
extern Il2CppType t2001_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10876_MI = 
{
	"get_Default", (methodPointerType)&m8513_gshared, &t2001_TI, &t2001_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2001_MIs[] =
{
	&m10873_MI,
	&m10874_MI,
	&m10875_MI,
	&m24393_MI,
	&m10876_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m24393_MI;
extern MethodInfo m10875_MI;
static MethodInfo* t2001_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m24393_MI,
	&m10875_MI,
	NULL,
};
extern TypeInfo t3430_TI;
extern TypeInfo t736_TI;
static TypeInfo* t2001_ITIs[] = 
{
	&t3430_TI,
	&t736_TI,
};
extern TypeInfo t3430_TI;
extern TypeInfo t736_TI;
static Il2CppInterfaceOffsetPair t2001_IOs[] = 
{
	{ &t3430_TI, 4},
	{ &t736_TI, 5},
};
extern Il2CppType t3431_0_0_0;
extern Il2CppType t180_0_0_0;
extern TypeInfo t2001_TI;
extern TypeInfo t2001_TI;
extern TypeInfo t2002_TI;
extern MethodInfo m10877_MI;
extern TypeInfo t180_TI;
extern MethodInfo m24393_MI;
static void* t2001_RGCTXData[8] = 
{
	(void*)&t3431_0_0_0,
	(void*)&t180_0_0_0,
	&t2001_TI,
	&t2001_TI,
	&t2002_TI,
	&m10877_MI,
	&t180_TI,
	&m24393_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2001_0_0_0;
extern Il2CppType t2001_1_0_0;
extern TypeInfo t28_TI;
struct t2001;
extern TypeInfo t2001_TI;
extern Il2CppGenericClass t2001_GC;
TypeInfo t2001_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparer`1", "System.Collections.Generic", t2001_MIs, t2001_PIs, t2001_FIs, NULL, &t28_TI, NULL, NULL, &t2001_TI, t2001_ITIs, t2001_VT, &EmptyCustomAttributesCache, &t2001_TI, &t2001_0_0_0, &t2001_1_0_0, t2001_IOs, &t2001_GC, NULL, NULL, NULL, t2001_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2001), 0, -1, sizeof(t2001_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 5, 1, 1, 0, 0, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3430_TI;



// Metadata Definition System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t3430_m18094_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t3430_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m18094_MI = 
{
	"Compare", NULL, &t3430_TI, &t47_0_0_0, RuntimeInvoker_t47_t28_t28, t3430_m18094_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3430_MIs[] =
{
	&m18094_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3430_0_0_0;
extern Il2CppType t3430_1_0_0;
struct t3430;
extern TypeInfo t3430_TI;
extern Il2CppGenericClass t3430_GC;
TypeInfo t3430_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparer`1", "System.Collections.Generic", t3430_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3430_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3430_TI, &t3430_0_0_0, &t3430_1_0_0, NULL, &t3430_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3431_TI;



// Metadata Definition System.IComparable`1<UnityEngine.UI.Text>
extern Il2CppType t180_0_0_0;
static ParameterInfo t3431_m18095_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t3431_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m18095_MI = 
{
	"CompareTo", NULL, &t3431_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t3431_m18095_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3431_MIs[] =
{
	&m18095_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3431_0_0_0;
extern Il2CppType t3431_1_0_0;
struct t3431;
extern TypeInfo t3431_TI;
extern Il2CppGenericClass t3431_GC;
TypeInfo t3431_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IComparable`1", "System", t3431_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t3431_TI, NULL, NULL, &EmptyCustomAttributesCache, &t3431_TI, &t3431_0_0_0, &t3431_1_0_0, NULL, &t3431_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2002_TI;

extern TypeInfo t180_TI;
extern TypeInfo t3431_TI;
extern TypeInfo t47_TI;
extern TypeInfo t316_TI;
extern TypeInfo t28_TI;
extern TypeInfo t331_TI;
extern MethodInfo m10873_MI;
extern MethodInfo m18095_MI;
extern MethodInfo m7431_MI;
extern MethodInfo m2043_MI;


// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Text>
extern TypeInfo t2002_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10877_MI = 
{
	".ctor", (methodPointerType)&m8514_gshared, &t2002_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t2002_m10878_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t2002_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10878_MI = 
{
	"Compare", (methodPointerType)&m8515_gshared, &t2002_TI, &t47_0_0_0, RuntimeInvoker_t47_t28_t28, t2002_m10878_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2002_MIs[] =
{
	&m10877_MI,
	&m10878_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10878_MI;
extern MethodInfo m10875_MI;
extern MethodInfo m10878_MI;
static MethodInfo* t2002_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10878_MI,
	&m10875_MI,
	&m10878_MI,
};
extern TypeInfo t3430_TI;
extern TypeInfo t736_TI;
static Il2CppInterfaceOffsetPair t2002_IOs[] = 
{
	{ &t3430_TI, 4},
	{ &t736_TI, 5},
};
extern Il2CppType t3431_0_0_0;
extern Il2CppType t180_0_0_0;
extern TypeInfo t2001_TI;
extern TypeInfo t2001_TI;
extern TypeInfo t2002_TI;
extern MethodInfo m10877_MI;
extern TypeInfo t180_TI;
extern MethodInfo m24393_MI;
extern MethodInfo m10873_MI;
extern TypeInfo t180_TI;
extern TypeInfo t3431_TI;
extern MethodInfo m18095_MI;
static void* t2002_RGCTXData[12] = 
{
	(void*)&t3431_0_0_0,
	(void*)&t180_0_0_0,
	&t2001_TI,
	&t2001_TI,
	&t2002_TI,
	&m10877_MI,
	&t180_TI,
	&m24393_MI,
	&m10873_MI,
	&t180_TI,
	&t3431_TI,
	&m18095_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2002_0_0_0;
extern Il2CppType t2002_1_0_0;
extern TypeInfo t2001_TI;
struct t2002;
extern TypeInfo t2002_TI;
extern Il2CppGenericClass t2002_GC;
extern TypeInfo t841_TI;
TypeInfo t2002_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2002_MIs, NULL, NULL, NULL, &t2001_TI, NULL, &t841_TI, &t2002_TI, NULL, t2002_VT, &EmptyCustomAttributesCache, &t2002_TI, &t2002_0_0_0, &t2002_1_0_0, t2002_IOs, &t2002_GC, NULL, NULL, NULL, t2002_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2002), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 7, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1990_TI;
#include "t1990MD.h"



// Metadata Definition System.Comparison`1<UnityEngine.UI.Text>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1990_m10879_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1990_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10879_MI = 
{
	".ctor", (methodPointerType)&m8546_gshared, &t1990_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1990_m10879_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
static ParameterInfo t1990_m10880_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
};
extern TypeInfo t1990_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10880_MI = 
{
	"Invoke", (methodPointerType)&m8547_gshared, &t1990_TI, &t47_0_0_0, RuntimeInvoker_t47_t28_t28, t1990_m10880_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t180_0_0_0;
extern Il2CppType t180_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1990_m10881_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t180_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1990_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10881_MI = 
{
	"BeginInvoke", (methodPointerType)&m8548_gshared, &t1990_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t1990_m10881_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1990_m10882_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1990_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10882_MI = 
{
	"EndInvoke", (methodPointerType)&m8549_gshared, &t1990_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1990_m10882_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1990_MIs[] =
{
	&m10879_MI,
	&m10880_MI,
	&m10881_MI,
	&m10882_MI,
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
extern MethodInfo m10880_MI;
extern MethodInfo m10881_MI;
extern MethodInfo m10882_MI;
static MethodInfo* t1990_VT[] =
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
	&m10880_MI,
	&m10881_MI,
	&m10882_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1990_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1990_0_0_0;
extern Il2CppType t1990_1_0_0;
extern TypeInfo t221_TI;
struct t1990;
extern TypeInfo t1990_TI;
extern Il2CppGenericClass t1990_GC;
TypeInfo t1990_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Comparison`1", "System", t1990_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t1990_TI, NULL, t1990_VT, &EmptyCustomAttributesCache, &t1990_TI, &t1990_0_0_0, &t1990_1_0_0, t1990_IOs, &t1990_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1990), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2003.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2003_TI;
#include "t2003MD.h"

extern TypeInfo t2003_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10887_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18100_MI;
struct t29;
 t1969  m18100 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18100_MI;


extern MethodInfo m10883_MI;
 void m10883 (t2003 * __this, t29 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10884_MI;
 t28 * m10884 (t2003 * __this, MethodInfo* method){
	{
		t1969  L_0 = m10887(__this, &m10887_MI);
		t1969  L_1 = L_0;
		t28 * L_2 = Box(InitializedTypeInfo(&t1969_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m10885_MI;
 void m10885 (t2003 * __this, MethodInfo* method){
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m10886_MI;
 bool m10886 (t2003 * __this, MethodInfo* method){
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
extern MethodInfo m10887_MI;
 t1969  m10887 (t2003 * __this, MethodInfo* method){
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
		t1969  L_8 = m18100(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), &m18100_MI);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern Il2CppType t29_0_0_1;
FieldInfo t2003_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2003_TI, offsetof(t2003, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2003_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2003_TI, offsetof(t2003, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2003_FIs[] =
{
	&t2003_f0_FieldInfo,
	&t2003_f1_FieldInfo,
	NULL
};
extern MethodInfo m10884_MI;
static PropertyInfo t2003____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2003_TI, "System.Collections.IEnumerator.Current", &m10884_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10887_MI;
static PropertyInfo t2003____Current_PropertyInfo = 
{
	&t2003_TI, "Current", &m10887_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2003_PIs[] =
{
	&t2003____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2003____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2003_m10883_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2003_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10883_MI = 
{
	".ctor", (methodPointerType)&m10883, &t2003_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2003_m10883_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10884_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10884, &t2003_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10885_MI = 
{
	"Dispose", (methodPointerType)&m10885, &t2003_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10886_MI = 
{
	"MoveNext", (methodPointerType)&m10886, &t2003_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2003_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10887_MI = 
{
	"get_Current", (methodPointerType)&m10887, &t2003_TI, &t1969_0_0_0, RuntimeInvoker_t1969, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2003_MIs[] =
{
	&m10883_MI,
	&m10884_MI,
	&m10885_MI,
	&m10886_MI,
	&m10887_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10884_MI;
extern MethodInfo m10886_MI;
extern MethodInfo m10885_MI;
extern MethodInfo m10887_MI;
static MethodInfo* t2003_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10884_MI,
	&m10886_MI,
	&m10885_MI,
	&m10887_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1970_TI;
static TypeInfo* t2003_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1970_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1970_TI;
static Il2CppInterfaceOffsetPair t2003_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1970_TI, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2003_0_0_0;
extern Il2CppType t2003_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2003_TI;
extern Il2CppGenericClass t2003_GC;
extern TypeInfo t29_TI;
TypeInfo t2003_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2003_MIs, t2003_PIs, t2003_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2003_TI, t2003_ITIs, t2003_VT, &EmptyCustomAttributesCache, &t2003_TI, &t2003_0_0_0, &t2003_1_0_0, t2003_IOs, &t2003_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2003)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4110_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern MethodInfo m24394_MI;
extern MethodInfo m24395_MI;
static PropertyInfo t4110____Item_PropertyInfo = 
{
	&t4110_TI, "Item", &m24394_MI, &m24395_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4110_PIs[] =
{
	&t4110____Item_PropertyInfo,
	NULL
};
extern Il2CppType t1969_0_0_0;
static ParameterInfo t4110_m24396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24396_MI = 
{
	"IndexOf", NULL, &t4110_TI, &t47_0_0_0, RuntimeInvoker_t47_t1969, t4110_m24396_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1969_0_0_0;
static ParameterInfo t4110_m24397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24397_MI = 
{
	"Insert", NULL, &t4110_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t1969, t4110_m24397_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4110_m24398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24398_MI = 
{
	"RemoveAt", NULL, &t4110_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4110_m24398_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4110_m24394_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24394_MI = 
{
	"get_Item", NULL, &t4110_TI, &t1969_0_0_0, RuntimeInvoker_t1969_t47, t4110_m24394_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t1969_0_0_0;
static ParameterInfo t4110_m24395_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t1969_0_0_0},
};
extern TypeInfo t4110_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m24395_MI = 
{
	"set_Item", NULL, &t4110_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t1969, t4110_m24395_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4110_MIs[] =
{
	&m24396_MI,
	&m24397_MI,
	&m24398_MI,
	&m24394_MI,
	&m24395_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4109_TI;
extern TypeInfo t4111_TI;
static TypeInfo* t4110_ITIs[] = 
{
	&t611_TI,
	&t4109_TI,
	&t4111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4110_0_0_0;
extern Il2CppType t4110_1_0_0;
struct t4110;
extern TypeInfo t4110_TI;
extern Il2CppGenericClass t4110_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4110_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4110_MIs, t4110_PIs, NULL, NULL, NULL, NULL, NULL, &t4110_TI, t4110_ITIs, NULL, &t1418__CustomAttributeCache, &t4110_TI, &t4110_0_0_0, &t4110_1_0_0, NULL, &t4110_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5271_TI;



// Metadata Definition System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t173_0_0_0;
static ParameterInfo t5271_m24399_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t5271_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24399_MI = 
{
	"Remove", NULL, &t5271_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5271_m24399_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5271_MIs[] =
{
	&m24399_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4109_TI;
extern TypeInfo t4111_TI;
static TypeInfo* t5271_ITIs[] = 
{
	&t611_TI,
	&t4109_TI,
	&t4111_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5271_0_0_0;
extern Il2CppType t5271_1_0_0;
struct t5271;
extern TypeInfo t5271_TI;
extern Il2CppGenericClass t5271_GC;
extern CustomAttributesCache t1478__CustomAttributeCache;
TypeInfo t5271_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IDictionary`2", "System.Collections.Generic", t5271_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5271_TI, t5271_ITIs, NULL, &t1478__CustomAttributeCache, &t5271_TI, &t5271_0_0_0, &t5271_1_0_0, NULL, &t5271_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1965_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<UnityEngine.Font>
extern Il2CppType t173_0_0_0;
extern Il2CppType t173_0_0_0;
static ParameterInfo t1965_m24290_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24290_MI = 
{
	"Equals", NULL, &t1965_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t1965_m24290_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t1965_m24289_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t1965_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24289_MI = 
{
	"GetHashCode", NULL, &t1965_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t1965_m24289_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1965_MIs[] =
{
	&m24290_MI,
	&m24289_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1965_0_0_0;
extern Il2CppType t1965_1_0_0;
struct t1965;
extern TypeInfo t1965_TI;
extern Il2CppGenericClass t1965_GC;
TypeInfo t1965_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t1965_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1965_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1965_TI, &t1965_0_0_0, &t1965_1_0_0, NULL, &t1965_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3432_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Font>
extern MethodInfo m24400_MI;
static PropertyInfo t3432____Current_PropertyInfo = 
{
	&t3432_TI, "Current", &m24400_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t3432_PIs[] =
{
	&t3432____Current_PropertyInfo,
	NULL
};
extern TypeInfo t3432_TI;
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24400_MI = 
{
	"get_Current", NULL, &t3432_TI, &t173_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t3432_MIs[] =
{
	&m24400_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t3432_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t3432_0_0_0;
extern Il2CppType t3432_1_0_0;
struct t3432;
extern TypeInfo t3432_TI;
extern Il2CppGenericClass t3432_GC;
TypeInfo t3432_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t3432_MIs, t3432_PIs, NULL, NULL, NULL, NULL, NULL, &t3432_TI, t3432_ITIs, NULL, &EmptyCustomAttributesCache, &t3432_TI, &t3432_0_0_0, &t3432_1_0_0, NULL, &t3432_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2004.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2004_TI;
#include "t2004MD.h"

extern TypeInfo t2004_TI;
extern TypeInfo t173_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10892_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18111_MI;
struct t29;
#define m18111(__this, p0, method) (t173 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18111_MI;


// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Font>
extern Il2CppType t29_0_0_1;
FieldInfo t2004_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2004_TI, offsetof(t2004, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2004_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2004_TI, offsetof(t2004, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2004_FIs[] =
{
	&t2004_f0_FieldInfo,
	&t2004_f1_FieldInfo,
	NULL
};
extern MethodInfo m10889_MI;
static PropertyInfo t2004____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2004_TI, "System.Collections.IEnumerator.Current", &m10889_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10892_MI;
static PropertyInfo t2004____Current_PropertyInfo = 
{
	&t2004_TI, "Current", &m10892_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2004_PIs[] =
{
	&t2004____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2004____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2004_m10888_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2004_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10888_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2004_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2004_m10888_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2004_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10889_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2004_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2004_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10890_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2004_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2004_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10891_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2004_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2004_TI;
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10892_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2004_TI, &t173_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2004_MIs[] =
{
	&m10888_MI,
	&m10889_MI,
	&m10890_MI,
	&m10891_MI,
	&m10892_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10889_MI;
extern MethodInfo m10891_MI;
extern MethodInfo m10890_MI;
extern MethodInfo m10892_MI;
static MethodInfo* t2004_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10889_MI,
	&m10891_MI,
	&m10890_MI,
	&m10892_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3432_TI;
static TypeInfo* t2004_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t3432_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t3432_TI;
static Il2CppInterfaceOffsetPair t2004_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t3432_TI, 7},
};
extern MethodInfo m10892_MI;
extern TypeInfo t173_TI;
extern MethodInfo m18111_MI;
static void* t2004_RGCTXData[3] = 
{
	&m10892_MI,
	&t173_TI,
	&m18111_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2004_0_0_0;
extern Il2CppType t2004_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2004_TI;
extern Il2CppGenericClass t2004_GC;
extern TypeInfo t29_TI;
TypeInfo t2004_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2004_MIs, t2004_PIs, t2004_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2004_TI, t2004_ITIs, t2004_VT, &EmptyCustomAttributesCache, &t2004_TI, &t2004_0_0_0, &t2004_1_0_0, t2004_IOs, &t2004_GC, NULL, NULL, NULL, t2004_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2004)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4112_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Font>
extern MethodInfo m24401_MI;
static PropertyInfo t4112____Count_PropertyInfo = 
{
	&t4112_TI, "Count", &m24401_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24402_MI;
static PropertyInfo t4112____IsReadOnly_PropertyInfo = 
{
	&t4112_TI, "IsReadOnly", &m24402_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4112_PIs[] =
{
	&t4112____Count_PropertyInfo,
	&t4112____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4112_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24401_MI = 
{
	"get_Count", NULL, &t4112_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4112_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24402_MI = 
{
	"get_IsReadOnly", NULL, &t4112_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t4112_m24403_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t4112_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24403_MI = 
{
	"Add", NULL, &t4112_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4112_m24403_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4112_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24404_MI = 
{
	"Clear", NULL, &t4112_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t4112_m24405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t4112_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24405_MI = 
{
	"Contains", NULL, &t4112_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4112_m24405_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1963_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4112_m24406_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1963_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4112_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24406_MI = 
{
	"CopyTo", NULL, &t4112_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4112_m24406_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t4112_m24407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t4112_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24407_MI = 
{
	"Remove", NULL, &t4112_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4112_m24407_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4112_MIs[] =
{
	&m24401_MI,
	&m24402_MI,
	&m24403_MI,
	&m24404_MI,
	&m24405_MI,
	&m24406_MI,
	&m24407_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4114_TI;
static TypeInfo* t4112_ITIs[] = 
{
	&t611_TI,
	&t4114_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4112_0_0_0;
extern Il2CppType t4112_1_0_0;
struct t4112;
extern TypeInfo t4112_TI;
extern Il2CppGenericClass t4112_GC;
TypeInfo t4112_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4112_MIs, t4112_PIs, NULL, NULL, NULL, NULL, NULL, &t4112_TI, t4112_ITIs, NULL, &EmptyCustomAttributesCache, &t4112_TI, &t4112_0_0_0, &t4112_1_0_0, NULL, &t4112_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4114_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Font>
extern TypeInfo t4114_TI;
extern Il2CppType t3432_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24408_MI = 
{
	"GetEnumerator", NULL, &t4114_TI, &t3432_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4114_MIs[] =
{
	&m24408_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4114_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4114_0_0_0;
extern Il2CppType t4114_1_0_0;
struct t4114;
extern TypeInfo t4114_TI;
extern Il2CppGenericClass t4114_GC;
TypeInfo t4114_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4114_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4114_TI, t4114_ITIs, NULL, &EmptyCustomAttributesCache, &t4114_TI, &t4114_0_0_0, &t4114_1_0_0, NULL, &t4114_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4113_TI;



// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Font>
extern MethodInfo m24409_MI;
extern MethodInfo m24410_MI;
static PropertyInfo t4113____Item_PropertyInfo = 
{
	&t4113_TI, "Item", &m24409_MI, &m24410_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4113_PIs[] =
{
	&t4113____Item_PropertyInfo,
	NULL
};
extern Il2CppType t173_0_0_0;
static ParameterInfo t4113_m24411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24411_MI = 
{
	"IndexOf", NULL, &t4113_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4113_m24411_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t173_0_0_0;
static ParameterInfo t4113_m24412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24412_MI = 
{
	"Insert", NULL, &t4113_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4113_m24412_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4113_m24413_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24413_MI = 
{
	"RemoveAt", NULL, &t4113_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4113_m24413_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4113_m24409_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24409_MI = 
{
	"get_Item", NULL, &t4113_TI, &t173_0_0_0, RuntimeInvoker_t28_t47, t4113_m24409_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t173_0_0_0;
static ParameterInfo t4113_m24410_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t4113_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24410_MI = 
{
	"set_Item", NULL, &t4113_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4113_m24410_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4113_MIs[] =
{
	&m24411_MI,
	&m24412_MI,
	&m24413_MI,
	&m24409_MI,
	&m24410_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4112_TI;
extern TypeInfo t4114_TI;
static TypeInfo* t4113_ITIs[] = 
{
	&t611_TI,
	&t4112_TI,
	&t4114_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4113_0_0_0;
extern Il2CppType t4113_1_0_0;
struct t4113;
extern TypeInfo t4113_TI;
extern Il2CppGenericClass t4113_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4113_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4113_MIs, t4113_PIs, NULL, NULL, NULL, NULL, NULL, &t4113_TI, t4113_ITIs, NULL, &t1418__CustomAttributeCache, &t4113_TI, &t4113_0_0_0, &t4113_1_0_0, NULL, &t4113_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2006_TI;



// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern MethodInfo m24414_MI;
static PropertyInfo t2006____Current_PropertyInfo = 
{
	&t2006_TI, "Current", &m24414_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2006_PIs[] =
{
	&t2006____Current_PropertyInfo,
	NULL
};
extern TypeInfo t2006_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24414_MI = 
{
	"get_Current", NULL, &t2006_TI, &t362_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2006_MIs[] =
{
	&m24414_MI,
	NULL
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
static TypeInfo* t2006_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2006_0_0_0;
extern Il2CppType t2006_1_0_0;
struct t2006;
extern TypeInfo t2006_TI;
extern Il2CppGenericClass t2006_GC;
TypeInfo t2006_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerator`1", "System.Collections.Generic", t2006_MIs, t2006_PIs, NULL, NULL, NULL, NULL, NULL, &t2006_TI, t2006_ITIs, NULL, &EmptyCustomAttributesCache, &t2006_TI, &t2006_0_0_0, &t2006_1_0_0, NULL, &t2006_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 2, 0};
#include "t2005.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2005_TI;
#include "t2005MD.h"

extern TypeInfo t2005_TI;
extern TypeInfo t362_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10897_MI;
extern MethodInfo m7034_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m18122_MI;
struct t29;
#define m18122(__this, p0, method) (t362 *)m16643_gshared((t29 *)__this, (int32_t)p0, method)
extern MethodInfo m18122_MI;


// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t29_0_0_1;
FieldInfo t2005_f0_FieldInfo = 
{
	"array", &t29_0_0_1, &t2005_TI, offsetof(t2005, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2005_f1_FieldInfo = 
{
	"idx", &t47_0_0_1, &t2005_TI, offsetof(t2005, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2005_FIs[] =
{
	&t2005_f0_FieldInfo,
	&t2005_f1_FieldInfo,
	NULL
};
extern MethodInfo m10894_MI;
static PropertyInfo t2005____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2005_TI, "System.Collections.IEnumerator.Current", &m10894_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10897_MI;
static PropertyInfo t2005____Current_PropertyInfo = 
{
	&t2005_TI, "Current", &m10897_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2005_PIs[] =
{
	&t2005____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2005____Current_PropertyInfo,
	NULL
};
extern Il2CppType t29_0_0_0;
static ParameterInfo t2005_m10893_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
};
extern TypeInfo t2005_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10893_MI = 
{
	".ctor", (methodPointerType)&m7988_gshared, &t2005_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2005_m10893_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2005_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10894_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m7990_gshared, &t2005_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2005_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10895_MI = 
{
	"Dispose", (methodPointerType)&m7992_gshared, &t2005_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2005_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10896_MI = 
{
	"MoveNext", (methodPointerType)&m7994_gshared, &t2005_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2005_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10897_MI = 
{
	"get_Current", (methodPointerType)&m7996_gshared, &t2005_TI, &t362_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2005_MIs[] =
{
	&m10893_MI,
	&m10894_MI,
	&m10895_MI,
	&m10896_MI,
	&m10897_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10894_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m10895_MI;
extern MethodInfo m10897_MI;
static MethodInfo* t2005_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10894_MI,
	&m10896_MI,
	&m10895_MI,
	&m10897_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2006_TI;
static TypeInfo* t2005_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2006_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2006_TI;
static Il2CppInterfaceOffsetPair t2005_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2006_TI, 7},
};
extern MethodInfo m10897_MI;
extern TypeInfo t362_TI;
extern MethodInfo m18122_MI;
static void* t2005_RGCTXData[3] = 
{
	&m10897_MI,
	&t362_TI,
	&m18122_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2005_0_0_0;
extern Il2CppType t2005_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2005_TI;
extern Il2CppGenericClass t2005_GC;
extern TypeInfo t29_TI;
TypeInfo t2005_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InternalEnumerator`1", "", t2005_MIs, t2005_PIs, t2005_FIs, NULL, &t26_TI, NULL, &t29_TI, &t2005_TI, t2005_ITIs, t2005_VT, &EmptyCustomAttributesCache, &t2005_TI, &t2005_0_0_0, &t2005_1_0_0, t2005_IOs, &t2005_GC, NULL, NULL, NULL, t2005_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2005)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048845, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4115_TI;



// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern MethodInfo m24415_MI;
static PropertyInfo t4115____Count_PropertyInfo = 
{
	&t4115_TI, "Count", &m24415_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m24416_MI;
static PropertyInfo t4115____IsReadOnly_PropertyInfo = 
{
	&t4115_TI, "IsReadOnly", &m24416_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4115_PIs[] =
{
	&t4115____Count_PropertyInfo,
	&t4115____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo t4115_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24415_MI = 
{
	"get_Count", NULL, &t4115_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4115_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m24416_MI = 
{
	"get_IsReadOnly", NULL, &t4115_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t4115_m24417_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t4115_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24417_MI = 
{
	"Add", NULL, &t4115_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t4115_m24417_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t4115_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24418_MI = 
{
	"Clear", NULL, &t4115_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 1478, 0, 3, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t4115_m24419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t4115_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24419_MI = 
{
	"Contains", NULL, &t4115_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4115_m24419_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1964_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t4115_m24420_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1964_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4115_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24420_MI = 
{
	"CopyTo", NULL, &t4115_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t4115_m24420_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t4115_m24421_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t4115_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24421_MI = 
{
	"Remove", NULL, &t4115_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t4115_m24421_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4115_MIs[] =
{
	&m24415_MI,
	&m24416_MI,
	&m24417_MI,
	&m24418_MI,
	&m24419_MI,
	&m24420_MI,
	&m24421_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4117_TI;
static TypeInfo* t4115_ITIs[] = 
{
	&t611_TI,
	&t4117_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4115_0_0_0;
extern Il2CppType t4115_1_0_0;
struct t4115;
extern TypeInfo t4115_TI;
extern Il2CppGenericClass t4115_GC;
TypeInfo t4115_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ICollection`1", "System.Collections.Generic", t4115_MIs, t4115_PIs, NULL, NULL, NULL, NULL, NULL, &t4115_TI, t4115_ITIs, NULL, &EmptyCustomAttributesCache, &t4115_TI, &t4115_0_0_0, &t4115_1_0_0, NULL, &t4115_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 2, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4117_TI;



// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern TypeInfo t4117_TI;
extern Il2CppType t2006_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24422_MI = 
{
	"GetEnumerator", NULL, &t4117_TI, &t2006_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4117_MIs[] =
{
	&m24422_MI,
	NULL
};
extern TypeInfo t611_TI;
static TypeInfo* t4117_ITIs[] = 
{
	&t611_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4117_0_0_0;
extern Il2CppType t4117_1_0_0;
struct t4117;
extern TypeInfo t4117_TI;
extern Il2CppGenericClass t4117_GC;
TypeInfo t4117_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEnumerable`1", "System.Collections.Generic", t4117_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t4117_TI, t4117_ITIs, NULL, &EmptyCustomAttributesCache, &t4117_TI, &t4117_0_0_0, &t4117_1_0_0, NULL, &t4117_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 1, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4116_TI;



// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern MethodInfo m24423_MI;
extern MethodInfo m24424_MI;
static PropertyInfo t4116____Item_PropertyInfo = 
{
	&t4116_TI, "Item", &m24423_MI, &m24424_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4116_PIs[] =
{
	&t4116____Item_PropertyInfo,
	NULL
};
extern Il2CppType t362_0_0_0;
static ParameterInfo t4116_m24425_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24425_MI = 
{
	"IndexOf", NULL, &t4116_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t4116_m24425_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t4116_m24426_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24426_MI = 
{
	"Insert", NULL, &t4116_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4116_m24426_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4116_m24427_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24427_MI = 
{
	"RemoveAt", NULL, &t4116_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t4116_m24427_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 2, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t4116_m24423_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m24423_MI = 
{
	"get_Item", NULL, &t4116_TI, &t362_0_0_0, RuntimeInvoker_t28_t47, t4116_m24423_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 3, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t4116_m24424_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t4116_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24424_MI = 
{
	"set_Item", NULL, &t4116_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t28, t4116_m24424_ParameterInfos, &EmptyCustomAttributesCache, 3526, 0, 4, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t4116_MIs[] =
{
	&m24425_MI,
	&m24426_MI,
	&m24427_MI,
	&m24423_MI,
	&m24424_MI,
	NULL
};
extern TypeInfo t611_TI;
extern TypeInfo t4115_TI;
extern TypeInfo t4117_TI;
static TypeInfo* t4116_ITIs[] = 
{
	&t611_TI,
	&t4115_TI,
	&t4117_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t4116_0_0_0;
extern Il2CppType t4116_1_0_0;
struct t4116;
extern TypeInfo t4116_TI;
extern Il2CppGenericClass t4116_GC;
extern CustomAttributesCache t1418__CustomAttributeCache;
TypeInfo t4116_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IList`1", "System.Collections.Generic", t4116_MIs, t4116_PIs, NULL, NULL, NULL, NULL, NULL, &t4116_TI, t4116_ITIs, NULL, &t1418__CustomAttributeCache, &t4116_TI, &t4116_0_0_0, &t4116_1_0_0, NULL, &t4116_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 0, 3, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1967_TI;

#include "t2007.h"
#include "t2008.h"
extern TypeInfo t1967_TI;
extern TypeInfo t661_TI;
extern TypeInfo t28_TI;
extern TypeInfo t179_TI;
extern TypeInfo t47_TI;
extern TypeInfo t350_TI;
extern TypeInfo t357_TI;
extern TypeInfo t2007_TI;
extern TypeInfo t1964_TI;
extern TypeInfo t362_TI;
extern TypeInfo t30_TI;
extern TypeInfo t2008_TI;
#include "t2008MD.h"
#include "t2007MD.h"
extern MethodInfo m7526_MI;
extern MethodInfo m10609_MI;
extern MethodInfo m203_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m7136_MI;
extern MethodInfo m10631_MI;
extern MethodInfo m10910_MI;
extern MethodInfo m10909_MI;
extern MethodInfo m10617_MI;
extern MethodInfo m10620_MI;
extern MethodInfo m10928_MI;
extern MethodInfo m18133_MI;
extern MethodInfo m18134_MI;
extern MethodInfo m10912_MI;
struct t179;
#define m18133(__this, p0, p1, p2, method) (void)m18024_gshared((t1972 *)__this, (t29 *)p0, (int32_t)p1, (t1981 *)p2, method)
extern MethodInfo m18133_MI;
struct t179;
 void m18134 (t179 * __this, t1964* p0, int32_t p1, t2008 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m18134_MI;


extern MethodInfo m10910_MI;
 t2007  m10910 (t1967 * __this, MethodInfo* method){
	{
		t179 * L_0 = (__this->f0);
		t2007  L_1 = {0};
		m10912(&L_1, L_0, &m10912_MI);
		return L_1;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t179_0_0_1;
FieldInfo t1967_f0_FieldInfo = 
{
	"dictionary", &t179_0_0_1, &t1967_TI, offsetof(t1967, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1967_FIs[] =
{
	&t1967_f0_FieldInfo,
	NULL
};
extern MethodInfo m10906_MI;
static PropertyInfo t1967____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo = 
{
	&t1967_TI, "System.Collections.Generic.ICollection<TValue>.IsReadOnly", &m10906_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10907_MI;
static PropertyInfo t1967____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t1967_TI, "System.Collections.ICollection.IsSynchronized", &m10907_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10908_MI;
static PropertyInfo t1967____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t1967_TI, "System.Collections.ICollection.SyncRoot", &m10908_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10911_MI;
static PropertyInfo t1967____Count_PropertyInfo = 
{
	&t1967_TI, "Count", &m10911_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1967_PIs[] =
{
	&t1967____System_Collections_Generic_ICollectionU3CTValueU3E_IsReadOnly_PropertyInfo,
	&t1967____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t1967____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t1967____Count_PropertyInfo,
	NULL
};
extern Il2CppType t179_0_0_0;
static ParameterInfo t1967_m10898_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t179_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10898_MI = 
{
	".ctor", (methodPointerType)&m10667_gshared, &t1967_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1967_m10898_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t1967_m10899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10899_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Add", (methodPointerType)&m10668_gshared, &t1967_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1967_m10899_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 11, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10900_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Clear", (methodPointerType)&m10669_gshared, &t1967_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 12, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t1967_m10901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10901_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Contains", (methodPointerType)&m10670_gshared, &t1967_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1967_m10901_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 13, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t1967_m10902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10902_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.Remove", (methodPointerType)&m10671_gshared, &t1967_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t1967_m10902_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 15, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t2006_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10903_MI = 
{
	"System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", (methodPointerType)&m10672_gshared, &t1967_TI, &t2006_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 16, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1967_m10904_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10904_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m10673_gshared, &t1967_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1967_m10904_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 8, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10905_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m10674_gshared, &t1967_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10906_MI = 
{
	"System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", (methodPointerType)&m10675_gshared, &t1967_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 10, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10907_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m10676_gshared, &t1967_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10908_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m10677_gshared, &t1967_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t1964_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t1967_m10909_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &t1964_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t1967_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10909_MI = 
{
	"CopyTo", (methodPointerType)&m10678_gshared, &t1967_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t1967_m10909_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t2007_0_0_0;
extern void* RuntimeInvoker_t2007 (MethodInfo* method, void* obj, void** args);
MethodInfo m10910_MI = 
{
	"GetEnumerator", (methodPointerType)&m10910, &t1967_TI, &t2007_0_0_0, RuntimeInvoker_t2007, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1967_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10911_MI = 
{
	"get_Count", (methodPointerType)&m10680_gshared, &t1967_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1967_MIs[] =
{
	&m10898_MI,
	&m10899_MI,
	&m10900_MI,
	&m10901_MI,
	&m10902_MI,
	&m10903_MI,
	&m10904_MI,
	&m10905_MI,
	&m10906_MI,
	&m10907_MI,
	&m10908_MI,
	&m10909_MI,
	&m10910_MI,
	&m10911_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10905_MI;
extern MethodInfo m10911_MI;
extern MethodInfo m10907_MI;
extern MethodInfo m10908_MI;
extern MethodInfo m10904_MI;
extern MethodInfo m10911_MI;
extern MethodInfo m10906_MI;
extern MethodInfo m10899_MI;
extern MethodInfo m10900_MI;
extern MethodInfo m10901_MI;
extern MethodInfo m10909_MI;
extern MethodInfo m10902_MI;
extern MethodInfo m10903_MI;
static MethodInfo* t1967_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10905_MI,
	&m10911_MI,
	&m10907_MI,
	&m10908_MI,
	&m10904_MI,
	&m10911_MI,
	&m10906_MI,
	&m10899_MI,
	&m10900_MI,
	&m10901_MI,
	&m10909_MI,
	&m10902_MI,
	&m10903_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t4115_TI;
extern TypeInfo t4117_TI;
static TypeInfo* t1967_ITIs[] = 
{
	&t611_TI,
	&t661_TI,
	&t4115_TI,
	&t4117_TI,
};
extern TypeInfo t611_TI;
extern TypeInfo t661_TI;
extern TypeInfo t4115_TI;
extern TypeInfo t4117_TI;
static Il2CppInterfaceOffsetPair t1967_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t661_TI, 5},
	{ &t4115_TI, 9},
	{ &t4117_TI, 16},
};
extern MethodInfo m10631_MI;
extern MethodInfo m10910_MI;
extern TypeInfo t2007_TI;
extern TypeInfo t1964_TI;
extern MethodInfo m10909_MI;
extern MethodInfo m10617_MI;
extern MethodInfo m10620_MI;
extern TypeInfo t2008_TI;
extern MethodInfo m10928_MI;
extern MethodInfo m18133_MI;
extern MethodInfo m18134_MI;
extern MethodInfo m10912_MI;
extern MethodInfo m10609_MI;
static void* t1967_RGCTXData[13] = 
{
	&m10631_MI,
	&m10910_MI,
	&t2007_TI,
	&t1964_TI,
	&m10909_MI,
	&m10617_MI,
	&m10620_MI,
	&t2008_TI,
	&m10928_MI,
	&m18133_MI,
	&m18134_MI,
	&m10912_MI,
	&m10609_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1967_0_0_0;
extern Il2CppType t1967_1_0_0;
extern TypeInfo t28_TI;
struct t1967;
extern TypeInfo t1967_TI;
extern Il2CppGenericClass t1967_GC;
extern TypeInfo t850_TI;
extern CustomAttributesCache t848__CustomAttributeCache;
TypeInfo t1967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ValueCollection", "", t1967_MIs, t1967_PIs, t1967_FIs, NULL, &t28_TI, NULL, &t850_TI, &t1967_TI, t1967_ITIs, t1967_VT, &t848__CustomAttributeCache, &t1967_TI, &t1967_0_0_0, &t1967_1_0_0, t1967_IOs, &t1967_GC, NULL, NULL, NULL, t1967_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1967), 0, -1, 0, 0, -1, 1057026, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 14, 4, 1, 0, 0, 17, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2007_TI;

extern TypeInfo t2007_TI;
extern TypeInfo t362_TI;
extern TypeInfo t1971_TI;
extern TypeInfo t30_TI;
extern TypeInfo t31_TI;
extern MethodInfo m10924_MI;
extern MethodInfo m10717_MI;
extern MethodInfo m10647_MI;
extern MethodInfo m10927_MI;
extern MethodInfo m10921_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t1971_0_0_1;
FieldInfo t2007_f0_FieldInfo = 
{
	"host_enumerator", &t1971_0_0_1, &t2007_TI, offsetof(t2007, f0) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t2007_FIs[] =
{
	&t2007_f0_FieldInfo,
	NULL
};
extern MethodInfo m10913_MI;
static PropertyInfo t2007____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t2007_TI, "System.Collections.IEnumerator.Current", &m10913_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10916_MI;
static PropertyInfo t2007____Current_PropertyInfo = 
{
	&t2007_TI, "Current", &m10916_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2007_PIs[] =
{
	&t2007____System_Collections_IEnumerator_Current_PropertyInfo,
	&t2007____Current_PropertyInfo,
	NULL
};
extern Il2CppType t179_0_0_0;
static ParameterInfo t2007_m10912_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t179_0_0_0},
};
extern TypeInfo t2007_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10912_MI = 
{
	".ctor", (methodPointerType)&m10681_gshared, &t2007_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2007_m10912_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2007_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10913_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10682_gshared, &t2007_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2007_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10914_MI = 
{
	"Dispose", (methodPointerType)&m10683_gshared, &t2007_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2007_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10915_MI = 
{
	"MoveNext", (methodPointerType)&m10684_gshared, &t2007_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2007_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10916_MI = 
{
	"get_Current", (methodPointerType)&m10685_gshared, &t2007_TI, &t362_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2007_MIs[] =
{
	&m10912_MI,
	&m10913_MI,
	&m10914_MI,
	&m10915_MI,
	&m10916_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10913_MI;
extern MethodInfo m10915_MI;
extern MethodInfo m10914_MI;
extern MethodInfo m10916_MI;
static MethodInfo* t2007_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10913_MI,
	&m10915_MI,
	&m10914_MI,
	&m10916_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2006_TI;
static TypeInfo* t2007_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t2006_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t2006_TI;
static Il2CppInterfaceOffsetPair t2007_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t2006_TI, 7},
};
extern MethodInfo m10647_MI;
extern MethodInfo m10924_MI;
extern TypeInfo t362_TI;
extern MethodInfo m10927_MI;
extern MethodInfo m10921_MI;
extern MethodInfo m10717_MI;
static void* t2007_RGCTXData[6] = 
{
	&m10647_MI,
	&m10924_MI,
	&t362_TI,
	&m10927_MI,
	&m10921_MI,
	&m10717_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2007_0_0_0;
extern Il2CppType t2007_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t2007_TI;
extern Il2CppGenericClass t2007_GC;
extern TypeInfo t848_TI;
TypeInfo t2007_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t2007_MIs, t2007_PIs, t2007_FIs, NULL, &t26_TI, NULL, &t848_TI, &t2007_TI, t2007_ITIs, t2007_VT, &EmptyCustomAttributesCache, &t2007_TI, &t2007_0_0_0, &t2007_1_0_0, t2007_IOs, &t2007_GC, NULL, NULL, NULL, t2007_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2007)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 5, 2, 1, 0, 0, 8, 3, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1971_TI;

extern TypeInfo t1971_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t173_TI;
extern TypeInfo t362_TI;
extern TypeInfo t845_TI;
extern TypeInfo t179_TI;
extern TypeInfo t843_TI;
extern TypeInfo t1304_TI;
extern TypeInfo t1287_TI;
extern MethodInfo m10926_MI;
extern MethodInfo m10715_MI;
extern MethodInfo m10717_MI;
extern MethodInfo m4480_MI;
extern MethodInfo m10923_MI;
extern MethodInfo m10925_MI;
extern MethodInfo m10714_MI;
extern MethodInfo m7238_MI;
extern MethodInfo m7034_MI;


extern MethodInfo m10922_MI;
 t1969  m10922 (t1971 * __this, MethodInfo* method){
	{
		t1969  L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t179_0_0_1;
FieldInfo t1971_f0_FieldInfo = 
{
	"dictionary", &t179_0_0_1, &t1971_TI, offsetof(t1971, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1971_f1_FieldInfo = 
{
	"next", &t47_0_0_1, &t1971_TI, offsetof(t1971, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t1971_f2_FieldInfo = 
{
	"stamp", &t47_0_0_1, &t1971_TI, offsetof(t1971, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t1969_0_0_3;
FieldInfo t1971_f3_FieldInfo = 
{
	"current", &t1969_0_0_3, &t1971_TI, offsetof(t1971, f3) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t1971_FIs[] =
{
	&t1971_f0_FieldInfo,
	&t1971_f1_FieldInfo,
	&t1971_f2_FieldInfo,
	&t1971_f3_FieldInfo,
	NULL
};
extern MethodInfo m10918_MI;
static PropertyInfo t1971____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&t1971_TI, "System.Collections.IEnumerator.Current", &m10918_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10919_MI;
static PropertyInfo t1971____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo = 
{
	&t1971_TI, "System.Collections.IDictionaryEnumerator.Entry", &m10919_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10920_MI;
static PropertyInfo t1971____System_Collections_IDictionaryEnumerator_Key_PropertyInfo = 
{
	&t1971_TI, "System.Collections.IDictionaryEnumerator.Key", &m10920_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10922_MI;
static PropertyInfo t1971____Current_PropertyInfo = 
{
	&t1971_TI, "Current", &m10922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10923_MI;
static PropertyInfo t1971____CurrentKey_PropertyInfo = 
{
	&t1971_TI, "CurrentKey", &m10923_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10924_MI;
static PropertyInfo t1971____CurrentValue_PropertyInfo = 
{
	&t1971_TI, "CurrentValue", &m10924_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1971_PIs[] =
{
	&t1971____System_Collections_IEnumerator_Current_PropertyInfo,
	&t1971____System_Collections_IDictionaryEnumerator_Entry_PropertyInfo,
	&t1971____System_Collections_IDictionaryEnumerator_Key_PropertyInfo,
	&t1971____Current_PropertyInfo,
	&t1971____CurrentKey_PropertyInfo,
	&t1971____CurrentValue_PropertyInfo,
	NULL
};
extern Il2CppType t179_0_0_0;
static ParameterInfo t1971_m10917_ParameterInfos[] = 
{
	{"dictionary", 0, 134217728, &EmptyCustomAttributesCache, &t179_0_0_0},
};
extern TypeInfo t1971_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10917_MI = 
{
	".ctor", (methodPointerType)&m10686_gshared, &t1971_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t1971_m10917_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10918_MI = 
{
	"System.Collections.IEnumerator.get_Current", (methodPointerType)&m10687_gshared, &t1971_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845 (MethodInfo* method, void* obj, void** args);
MethodInfo m10919_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Entry", (methodPointerType)&m10688_gshared, &t1971_TI, &t845_0_0_0, RuntimeInvoker_t845, NULL, &EmptyCustomAttributesCache, 2529, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10920_MI = 
{
	"System.Collections.IDictionaryEnumerator.get_Key", (methodPointerType)&m10689_gshared, &t1971_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10921_MI = 
{
	"MoveNext", (methodPointerType)&m10690_gshared, &t1971_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969 (MethodInfo* method, void* obj, void** args);
MethodInfo m10922_MI = 
{
	"get_Current", (methodPointerType)&m10922, &t1971_TI, &t1969_0_0_0, RuntimeInvoker_t1969, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t173_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10923_MI = 
{
	"get_CurrentKey", (methodPointerType)&m10692_gshared, &t1971_TI, &t173_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10924_MI = 
{
	"get_CurrentValue", (methodPointerType)&m10693_gshared, &t1971_TI, &t362_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10925_MI = 
{
	"VerifyState", (methodPointerType)&m10694_gshared, &t1971_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10926_MI = 
{
	"VerifyCurrent", (methodPointerType)&m10695_gshared, &t1971_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t1971_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10927_MI = 
{
	"Dispose", (methodPointerType)&m10696_gshared, &t1971_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1971_MIs[] =
{
	&m10917_MI,
	&m10918_MI,
	&m10919_MI,
	&m10920_MI,
	&m10921_MI,
	&m10922_MI,
	&m10923_MI,
	&m10924_MI,
	&m10925_MI,
	&m10926_MI,
	&m10927_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
extern MethodInfo m10918_MI;
extern MethodInfo m10921_MI;
extern MethodInfo m10927_MI;
extern MethodInfo m10922_MI;
extern MethodInfo m10919_MI;
extern MethodInfo m10920_MI;
static MethodInfo* t1971_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
	&m10918_MI,
	&m10921_MI,
	&m10927_MI,
	&m10922_MI,
	&m10919_MI,
	&m10920_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1970_TI;
extern TypeInfo t851_TI;
static TypeInfo* t1971_ITIs[] = 
{
	&t158_TI,
	&t341_TI,
	&t1970_TI,
	&t851_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t341_TI;
extern TypeInfo t1970_TI;
extern TypeInfo t851_TI;
static Il2CppInterfaceOffsetPair t1971_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t341_TI, 6},
	{ &t1970_TI, 7},
	{ &t851_TI, 8},
};
extern MethodInfo m10926_MI;
extern TypeInfo t1969_TI;
extern MethodInfo m10715_MI;
extern TypeInfo t173_TI;
extern MethodInfo m10717_MI;
extern TypeInfo t362_TI;
extern MethodInfo m10923_MI;
extern MethodInfo m10925_MI;
extern MethodInfo m10714_MI;
static void* t1971_RGCTXData[9] = 
{
	&m10926_MI,
	&t1969_TI,
	&m10715_MI,
	&t173_TI,
	&m10717_MI,
	&t362_TI,
	&m10923_MI,
	&m10925_MI,
	&m10714_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1971_0_0_0;
extern Il2CppType t1971_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t1971_TI;
extern Il2CppGenericClass t1971_GC;
extern TypeInfo t850_TI;
TypeInfo t1971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Enumerator", "", t1971_MIs, t1971_PIs, t1971_FIs, NULL, &t26_TI, NULL, &t850_TI, &t1971_TI, t1971_ITIs, t1971_VT, &EmptyCustomAttributesCache, &t1971_TI, &t1971_0_0_0, &t1971_1_0_0, t1971_IOs, &t1971_GC, NULL, NULL, NULL, t1971_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1971)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1057034, 0, true, false, false, false, false, true, false, false, false, false, false, false, false, 11, 6, 4, 0, 0, 10, 4, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2008_TI;



// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2008_m10928_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2008_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10928_MI = 
{
	".ctor", (methodPointerType)&m10697_gshared, &t2008_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2008_m10928_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t2008_m10929_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t2008_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10929_MI = 
{
	"Invoke", (methodPointerType)&m10698_gshared, &t2008_TI, &t362_0_0_0, RuntimeInvoker_t28_t28_t28, t2008_m10929_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2008_m10930_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2008_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10930_MI = 
{
	"BeginInvoke", (methodPointerType)&m10699_gshared, &t2008_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t2008_m10930_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2008_m10931_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2008_TI;
extern Il2CppType t362_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10931_MI = 
{
	"EndInvoke", (methodPointerType)&m10700_gshared, &t2008_TI, &t362_0_0_0, RuntimeInvoker_t28_t28, t2008_m10931_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2008_MIs[] =
{
	&m10928_MI,
	&m10929_MI,
	&m10930_MI,
	&m10931_MI,
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
extern MethodInfo m10929_MI;
extern MethodInfo m10930_MI;
extern MethodInfo m10931_MI;
static MethodInfo* t2008_VT[] =
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
	&m10929_MI,
	&m10930_MI,
	&m10931_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2008_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2008_0_0_0;
extern Il2CppType t2008_1_0_0;
extern TypeInfo t221_TI;
struct t2008;
extern TypeInfo t2008_TI;
extern Il2CppGenericClass t2008_GC;
extern TypeInfo t850_TI;
TypeInfo t2008_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2008_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t2008_TI, NULL, t2008_VT, &EmptyCustomAttributesCache, &t2008_TI, &t2008_0_0_0, &t2008_1_0_0, t2008_IOs, &t2008_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2008), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1966_TI;



extern MethodInfo m10932_MI;
 void m10932 (t1966 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10933_MI;
 t845  m10933 (t1966 * __this, t173 * p0, t362 * p1, MethodInfo* method){
	typedef  t845  (*FunctionPointerType) (t28 * __this, t173 * p0, t362 * p1, MethodInfo* method);
	if (__this->f9)
		m10933((t1966 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10934_MI;
 t28 * m10934 (t1966 * __this, t173 * p0, t362 * p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10935_MI;
 t845  m10935 (t1966 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t845 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t1966_m10932_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10932_MI = 
{
	".ctor", (methodPointerType)&m10932, &t1966_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t1966_m10932_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t1966_m10933_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10933_MI = 
{
	"Invoke", (methodPointerType)&m10933, &t1966_TI, &t845_0_0_0, RuntimeInvoker_t845_t28_t28, t1966_m10933_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t1966_m10934_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10934_MI = 
{
	"BeginInvoke", (methodPointerType)&m10934, &t1966_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t1966_m10934_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t1966_m10935_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t1966_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10935_MI = 
{
	"EndInvoke", (methodPointerType)&m10935, &t1966_TI, &t845_0_0_0, RuntimeInvoker_t845_t28, t1966_m10935_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t1966_MIs[] =
{
	&m10932_MI,
	&m10933_MI,
	&m10934_MI,
	&m10935_MI,
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
extern MethodInfo m10933_MI;
extern MethodInfo m10934_MI;
extern MethodInfo m10935_MI;
static MethodInfo* t1966_VT[] =
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
	&m10933_MI,
	&m10934_MI,
	&m10935_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t1966_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1966_0_0_0;
extern Il2CppType t1966_1_0_0;
extern TypeInfo t221_TI;
struct t1966;
extern TypeInfo t1966_TI;
extern Il2CppGenericClass t1966_GC;
extern TypeInfo t850_TI;
TypeInfo t1966_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t1966_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t1966_TI, NULL, t1966_VT, &EmptyCustomAttributesCache, &t1966_TI, &t1966_0_0_0, &t1966_1_0_0, t1966_IOs, &t1966_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1966), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2009_TI;



extern MethodInfo m10936_MI;
 void m10936 (t2009 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10937_MI;
 t1969  m10937 (t2009 * __this, t173 * p0, t362 * p1, MethodInfo* method){
	typedef  t1969  (*FunctionPointerType) (t28 * __this, t173 * p0, t362 * p1, MethodInfo* method);
	if (__this->f9)
		m10937((t2009 *)__this->f9,  p0, p1, method);
	return ((FunctionPointerType)__this->f0)(__this->f2, p0, p1, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10938_MI;
 t28 * m10938 (t2009 * __this, t173 * p0, t362 * p1, t91 * p2, t28 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m10939_MI;
 t1969  m10939 (t2009 * __this, t28 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1969 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2009_m10936_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10936_MI = 
{
	".ctor", (methodPointerType)&m10936, &t2009_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2009_m10936_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t2009_m10937_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10937_MI = 
{
	"Invoke", (methodPointerType)&m10937, &t2009_TI, &t1969_0_0_0, RuntimeInvoker_t1969_t28_t28, t2009_m10937_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t362_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2009_m10938_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10938_MI = 
{
	"BeginInvoke", (methodPointerType)&m10938, &t2009_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28_t28, t2009_m10938_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2009_m10939_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2009_TI;
extern Il2CppType t1969_0_0_0;
extern void* RuntimeInvoker_t1969_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10939_MI = 
{
	"EndInvoke", (methodPointerType)&m10939, &t2009_TI, &t1969_0_0_0, RuntimeInvoker_t1969_t28, t2009_m10939_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2009_MIs[] =
{
	&m10936_MI,
	&m10937_MI,
	&m10938_MI,
	&m10939_MI,
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
extern MethodInfo m10937_MI;
extern MethodInfo m10938_MI;
extern MethodInfo m10939_MI;
static MethodInfo* t2009_VT[] =
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
	&m10937_MI,
	&m10938_MI,
	&m10939_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2009_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2009_0_0_0;
extern Il2CppType t2009_1_0_0;
extern TypeInfo t221_TI;
struct t2009;
extern TypeInfo t2009_TI;
extern Il2CppGenericClass t2009_GC;
extern TypeInfo t850_TI;
TypeInfo t2009_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Transform`1", "", t2009_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t850_TI, &t2009_TI, NULL, t2009_VT, &EmptyCustomAttributesCache, &t2009_TI, &t2009_0_0_0, &t2009_1_0_0, t2009_IOs, &t2009_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2009), 0, -1, 0, 0, -1, 259, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2010_TI;

extern TypeInfo t2010_TI;
extern TypeInfo t1971_TI;
extern TypeInfo t851_TI;
extern TypeInfo t845_TI;
extern TypeInfo t1969_TI;
extern TypeInfo t173_TI;
extern TypeInfo t31_TI;
extern MethodInfo m7836_MI;
extern MethodInfo m10922_MI;
extern MethodInfo m10715_MI;
extern MethodInfo m10942_MI;
extern MethodInfo m203_MI;
extern MethodInfo m10647_MI;
extern MethodInfo m10921_MI;


// Metadata Definition System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t1971_0_0_1;
FieldInfo t2010_f0_FieldInfo = 
{
	"host_enumerator", &t1971_0_0_1, &t2010_TI, offsetof(t2010, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2010_FIs[] =
{
	&t2010_f0_FieldInfo,
	NULL
};
extern MethodInfo m10942_MI;
static PropertyInfo t2010____Entry_PropertyInfo = 
{
	&t2010_TI, "Entry", &m10942_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10943_MI;
static PropertyInfo t2010____Key_PropertyInfo = 
{
	&t2010_TI, "Key", &m10943_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10944_MI;
static PropertyInfo t2010____Current_PropertyInfo = 
{
	&t2010_TI, "Current", &m10944_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2010_PIs[] =
{
	&t2010____Entry_PropertyInfo,
	&t2010____Key_PropertyInfo,
	&t2010____Current_PropertyInfo,
	NULL
};
extern Il2CppType t179_0_0_0;
static ParameterInfo t2010_m10940_ParameterInfos[] = 
{
	{"host", 0, 134217728, &EmptyCustomAttributesCache, &t179_0_0_0},
};
extern TypeInfo t2010_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10940_MI = 
{
	".ctor", (methodPointerType)&m10709_gshared, &t2010_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2010_m10940_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2010_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10941_MI = 
{
	"MoveNext", (methodPointerType)&m10710_gshared, &t2010_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2010_TI;
extern Il2CppType t845_0_0_0;
extern void* RuntimeInvoker_t845 (MethodInfo* method, void* obj, void** args);
MethodInfo m10942_MI = 
{
	"get_Entry", (methodPointerType)&m10711_gshared, &t2010_TI, &t845_0_0_0, RuntimeInvoker_t845, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2010_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10943_MI = 
{
	"get_Key", (methodPointerType)&m10712_gshared, &t2010_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2010_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10944_MI = 
{
	"get_Current", (methodPointerType)&m10713_gshared, &t2010_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2010_MIs[] =
{
	&m10940_MI,
	&m10941_MI,
	&m10942_MI,
	&m10943_MI,
	&m10944_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10944_MI;
extern MethodInfo m10941_MI;
extern MethodInfo m10942_MI;
extern MethodInfo m10943_MI;
static MethodInfo* t2010_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10944_MI,
	&m10941_MI,
	&m10942_MI,
	&m10943_MI,
};
extern TypeInfo t158_TI;
extern TypeInfo t851_TI;
static TypeInfo* t2010_ITIs[] = 
{
	&t158_TI,
	&t851_TI,
};
extern TypeInfo t158_TI;
extern TypeInfo t851_TI;
static Il2CppInterfaceOffsetPair t2010_IOs[] = 
{
	{ &t158_TI, 4},
	{ &t851_TI, 6},
};
extern MethodInfo m10647_MI;
extern MethodInfo m10921_MI;
extern TypeInfo t1971_TI;
extern MethodInfo m10922_MI;
extern MethodInfo m10715_MI;
extern TypeInfo t173_TI;
extern MethodInfo m10942_MI;
static void* t2010_RGCTXData[7] = 
{
	&m10647_MI,
	&m10921_MI,
	&t1971_TI,
	&m10922_MI,
	&m10715_MI,
	&t173_TI,
	&m10942_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2010_0_0_0;
extern Il2CppType t2010_1_0_0;
extern TypeInfo t28_TI;
struct t2010;
extern TypeInfo t2010_TI;
extern Il2CppGenericClass t2010_GC;
extern TypeInfo t850_TI;
TypeInfo t2010_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ShimEnumerator", "", t2010_MIs, t2010_PIs, t2010_FIs, NULL, &t28_TI, NULL, &t850_TI, &t2010_TI, t2010_ITIs, t2010_VT, &EmptyCustomAttributesCache, &t2010_TI, &t2010_0_0_0, &t2010_1_0_0, t2010_IOs, &t2010_GC, NULL, NULL, NULL, t2010_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2010), 0, -1, 0, 0, -1, 1056771, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 5, 3, 1, 0, 0, 8, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2011_TI;

#include "t2012.h"
extern TypeInfo t2011_TI;
extern TypeInfo t5275_TI;
extern TypeInfo t36_TI;
extern TypeInfo t173_TI;
extern TypeInfo t31_TI;
extern TypeInfo t854_TI;
extern TypeInfo t545_TI;
extern TypeInfo t2012_TI;
extern TypeInfo t47_TI;
#include "t2012MD.h"
extern Il2CppType t5275_0_0_0;
extern Il2CppType t173_0_0_0;
extern Il2CppType t854_0_0_0;
extern MethodInfo m203_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3105_MI;
extern MethodInfo m3103_MI;
extern MethodInfo m6569_MI;
extern MethodInfo m10950_MI;
extern MethodInfo m24428_MI;
extern MethodInfo m24429_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
extern Il2CppType t2011_0_0_49;
FieldInfo t2011_f0_FieldInfo = 
{
	"_default", &t2011_0_0_49, &t2011_TI, offsetof(t2011_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2011_FIs[] =
{
	&t2011_f0_FieldInfo,
	NULL
};
extern MethodInfo m10949_MI;
static PropertyInfo t2011____Default_PropertyInfo = 
{
	&t2011_TI, "Default", &m10949_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2011_PIs[] =
{
	&t2011____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2011_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10945_MI = 
{
	".ctor", (methodPointerType)&m8468_gshared, &t2011_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2011_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10946_MI = 
{
	".cctor", (methodPointerType)&m8469_gshared, &t2011_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t2011_m10947_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10947_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8470_gshared, &t2011_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2011_m10947_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2011_m10948_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10948_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8471_gshared, &t2011_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2011_m10948_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t2011_m24428_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24428_MI = 
{
	"GetHashCode", NULL, &t2011_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2011_m24428_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t173_0_0_0;
static ParameterInfo t2011_m24429_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t2011_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24429_MI = 
{
	"Equals", NULL, &t2011_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2011_m24429_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2011_TI;
extern Il2CppType t2011_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10949_MI = 
{
	"get_Default", (methodPointerType)&m8472_gshared, &t2011_TI, &t2011_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2011_MIs[] =
{
	&m10945_MI,
	&m10946_MI,
	&m10947_MI,
	&m10948_MI,
	&m24428_MI,
	&m24429_MI,
	&m10949_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m24429_MI;
extern MethodInfo m24428_MI;
extern MethodInfo m10948_MI;
extern MethodInfo m10947_MI;
static MethodInfo* t2011_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m24429_MI,
	&m24428_MI,
	&m10948_MI,
	&m10947_MI,
	NULL,
	NULL,
};
extern TypeInfo t1965_TI;
extern TypeInfo t877_TI;
static TypeInfo* t2011_ITIs[] = 
{
	&t1965_TI,
	&t877_TI,
};
extern TypeInfo t1965_TI;
extern TypeInfo t877_TI;
static Il2CppInterfaceOffsetPair t2011_IOs[] = 
{
	{ &t1965_TI, 4},
	{ &t877_TI, 6},
};
extern Il2CppType t5275_0_0_0;
extern Il2CppType t173_0_0_0;
extern TypeInfo t2011_TI;
extern TypeInfo t2011_TI;
extern TypeInfo t2012_TI;
extern MethodInfo m10950_MI;
extern TypeInfo t173_TI;
extern MethodInfo m24428_MI;
extern MethodInfo m24429_MI;
static void* t2011_RGCTXData[9] = 
{
	(void*)&t5275_0_0_0,
	(void*)&t173_0_0_0,
	&t2011_TI,
	&t2011_TI,
	&t2012_TI,
	&m10950_MI,
	&t173_TI,
	&m24428_MI,
	&m24429_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2011_0_0_0;
extern Il2CppType t2011_1_0_0;
extern TypeInfo t28_TI;
struct t2011;
extern TypeInfo t2011_TI;
extern Il2CppGenericClass t2011_GC;
TypeInfo t2011_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2011_MIs, t2011_PIs, t2011_FIs, NULL, &t28_TI, NULL, NULL, &t2011_TI, t2011_ITIs, t2011_VT, &EmptyCustomAttributesCache, &t2011_TI, &t2011_0_0_0, &t2011_1_0_0, t2011_IOs, &t2011_GC, NULL, NULL, NULL, t2011_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2011), 0, -1, sizeof(t2011_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5275_TI;



// Metadata Definition System.IEquatable`1<UnityEngine.Font>
extern Il2CppType t173_0_0_0;
static ParameterInfo t5275_m24430_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t5275_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24430_MI = 
{
	"Equals", NULL, &t5275_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5275_m24430_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5275_MIs[] =
{
	&m24430_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5275_0_0_0;
extern Il2CppType t5275_1_0_0;
struct t5275;
extern TypeInfo t5275_TI;
extern Il2CppGenericClass t5275_GC;
TypeInfo t5275_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5275_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5275_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5275_TI, &t5275_0_0_0, &t5275_1_0_0, NULL, &t5275_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2012_TI;

extern TypeInfo t173_TI;
extern TypeInfo t28_TI;
extern TypeInfo t47_TI;
extern TypeInfo t31_TI;
extern MethodInfo m10945_MI;
extern MethodInfo m205_MI;
extern MethodInfo m204_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Font>
extern TypeInfo t2012_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10950_MI = 
{
	".ctor", (methodPointerType)&m8503_gshared, &t2012_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t2012_m10951_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t2012_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10951_MI = 
{
	"GetHashCode", (methodPointerType)&m8504_gshared, &t2012_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2012_m10951_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t173_0_0_0;
static ParameterInfo t2012_m10952_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t2012_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10952_MI = 
{
	"Equals", (methodPointerType)&m8505_gshared, &t2012_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2012_m10952_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2012_MIs[] =
{
	&m10950_MI,
	&m10951_MI,
	&m10952_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10952_MI;
extern MethodInfo m10951_MI;
extern MethodInfo m10948_MI;
extern MethodInfo m10947_MI;
extern MethodInfo m10951_MI;
extern MethodInfo m10952_MI;
static MethodInfo* t2012_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10952_MI,
	&m10951_MI,
	&m10948_MI,
	&m10947_MI,
	&m10951_MI,
	&m10952_MI,
};
extern TypeInfo t1965_TI;
extern TypeInfo t877_TI;
static Il2CppInterfaceOffsetPair t2012_IOs[] = 
{
	{ &t1965_TI, 4},
	{ &t877_TI, 6},
};
extern Il2CppType t5275_0_0_0;
extern Il2CppType t173_0_0_0;
extern TypeInfo t2011_TI;
extern TypeInfo t2011_TI;
extern TypeInfo t2012_TI;
extern MethodInfo m10950_MI;
extern TypeInfo t173_TI;
extern MethodInfo m24428_MI;
extern MethodInfo m24429_MI;
extern MethodInfo m10945_MI;
extern TypeInfo t173_TI;
static void* t2012_RGCTXData[11] = 
{
	(void*)&t5275_0_0_0,
	(void*)&t173_0_0_0,
	&t2011_TI,
	&t2011_TI,
	&t2012_TI,
	&m10950_MI,
	&t173_TI,
	&m24428_MI,
	&m24429_MI,
	&m10945_MI,
	&t173_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2012_0_0_0;
extern Il2CppType t2012_1_0_0;
extern TypeInfo t2011_TI;
struct t2012;
extern TypeInfo t2012_TI;
extern Il2CppGenericClass t2012_GC;
extern TypeInfo t853_TI;
TypeInfo t2012_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2012_MIs, NULL, NULL, NULL, &t2011_TI, NULL, &t853_TI, &t2012_TI, NULL, t2012_VT, &EmptyCustomAttributesCache, &t2012_TI, &t2012_0_0_0, &t2012_1_0_0, t2012_IOs, &t2012_GC, NULL, NULL, NULL, t2012_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2012), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5269_TI;



// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t362_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t5269_m24291_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t5269_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24291_MI = 
{
	"Equals", NULL, &t5269_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t5269_m24291_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t5269_m24431_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t5269_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24431_MI = 
{
	"GetHashCode", NULL, &t5269_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t5269_m24431_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5269_MIs[] =
{
	&m24291_MI,
	&m24431_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5269_0_0_0;
extern Il2CppType t5269_1_0_0;
struct t5269;
extern TypeInfo t5269_TI;
extern Il2CppGenericClass t5269_GC;
TypeInfo t5269_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEqualityComparer`1", "System.Collections.Generic", t5269_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5269_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5269_TI, &t5269_0_0_0, &t5269_1_0_0, NULL, &t5269_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2013_TI;

#include "t2014.h"
extern TypeInfo t2013_TI;
extern TypeInfo t5276_TI;
extern TypeInfo t36_TI;
extern TypeInfo t362_TI;
extern TypeInfo t31_TI;
extern TypeInfo t854_TI;
extern TypeInfo t545_TI;
extern TypeInfo t2014_TI;
extern TypeInfo t47_TI;
#include "t2014MD.h"
extern Il2CppType t5276_0_0_0;
extern Il2CppType t362_0_0_0;
extern Il2CppType t854_0_0_0;
extern MethodInfo m203_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3105_MI;
extern MethodInfo m3103_MI;
extern MethodInfo m6569_MI;
extern MethodInfo m10958_MI;
extern MethodInfo m24432_MI;
extern MethodInfo m24292_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t2013_0_0_49;
FieldInfo t2013_f0_FieldInfo = 
{
	"_default", &t2013_0_0_49, &t2013_TI, offsetof(t2013_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2013_FIs[] =
{
	&t2013_f0_FieldInfo,
	NULL
};
extern MethodInfo m10957_MI;
static PropertyInfo t2013____Default_PropertyInfo = 
{
	&t2013_TI, "Default", &m10957_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2013_PIs[] =
{
	&t2013____Default_PropertyInfo,
	NULL
};
extern TypeInfo t2013_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10953_MI = 
{
	".ctor", (methodPointerType)&m8468_gshared, &t2013_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2013_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10954_MI = 
{
	".cctor", (methodPointerType)&m8469_gshared, &t2013_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t2013_m10955_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10955_MI = 
{
	"System.Collections.IEqualityComparer.GetHashCode", (methodPointerType)&m8470_gshared, &t2013_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2013_m10955_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2013_m10956_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10956_MI = 
{
	"System.Collections.IEqualityComparer.Equals", (methodPointerType)&m8471_gshared, &t2013_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2013_m10956_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 6, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t2013_m24432_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24432_MI = 
{
	"GetHashCode", NULL, &t2013_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2013_m24432_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t2013_m24292_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t2013_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24292_MI = 
{
	"Equals", NULL, &t2013_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2013_m24292_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2013_TI;
extern Il2CppType t2013_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10957_MI = 
{
	"get_Default", (methodPointerType)&m8472_gshared, &t2013_TI, &t2013_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2013_MIs[] =
{
	&m10953_MI,
	&m10954_MI,
	&m10955_MI,
	&m10956_MI,
	&m24432_MI,
	&m24292_MI,
	&m10957_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m24292_MI;
extern MethodInfo m24432_MI;
extern MethodInfo m10956_MI;
extern MethodInfo m10955_MI;
static MethodInfo* t2013_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m24292_MI,
	&m24432_MI,
	&m10956_MI,
	&m10955_MI,
	NULL,
	NULL,
};
extern TypeInfo t5269_TI;
extern TypeInfo t877_TI;
static TypeInfo* t2013_ITIs[] = 
{
	&t5269_TI,
	&t877_TI,
};
extern TypeInfo t5269_TI;
extern TypeInfo t877_TI;
static Il2CppInterfaceOffsetPair t2013_IOs[] = 
{
	{ &t5269_TI, 4},
	{ &t877_TI, 6},
};
extern Il2CppType t5276_0_0_0;
extern Il2CppType t362_0_0_0;
extern TypeInfo t2013_TI;
extern TypeInfo t2013_TI;
extern TypeInfo t2014_TI;
extern MethodInfo m10958_MI;
extern TypeInfo t362_TI;
extern MethodInfo m24432_MI;
extern MethodInfo m24292_MI;
static void* t2013_RGCTXData[9] = 
{
	(void*)&t5276_0_0_0,
	(void*)&t362_0_0_0,
	&t2013_TI,
	&t2013_TI,
	&t2014_TI,
	&m10958_MI,
	&t362_TI,
	&m24432_MI,
	&m24292_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2013_0_0_0;
extern Il2CppType t2013_1_0_0;
extern TypeInfo t28_TI;
struct t2013;
extern TypeInfo t2013_TI;
extern Il2CppGenericClass t2013_GC;
TypeInfo t2013_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EqualityComparer`1", "System.Collections.Generic", t2013_MIs, t2013_PIs, t2013_FIs, NULL, &t28_TI, NULL, NULL, &t2013_TI, t2013_ITIs, t2013_VT, &EmptyCustomAttributesCache, &t2013_TI, &t2013_0_0_0, &t2013_1_0_0, t2013_IOs, &t2013_GC, NULL, NULL, NULL, t2013_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2013), 0, -1, sizeof(t2013_SFs), 0, -1, 8321, 0, false, false, false, false, false, true, false, false, false, false, true, false, false, 7, 1, 1, 0, 0, 10, 2, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5276_TI;



// Metadata Definition System.IEquatable`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern Il2CppType t362_0_0_0;
static ParameterInfo t5276_m24433_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t5276_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m24433_MI = 
{
	"Equals", NULL, &t5276_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t5276_m24433_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t5276_MIs[] =
{
	&m24433_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t5276_0_0_0;
extern Il2CppType t5276_1_0_0;
struct t5276;
extern TypeInfo t5276_TI;
extern Il2CppGenericClass t5276_GC;
TypeInfo t5276_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IEquatable`1", "System", t5276_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t5276_TI, NULL, NULL, &EmptyCustomAttributesCache, &t5276_TI, &t5276_0_0_0, &t5276_1_0_0, NULL, &t5276_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, true, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2014_TI;

extern TypeInfo t362_TI;
extern TypeInfo t28_TI;
extern TypeInfo t47_TI;
extern TypeInfo t31_TI;
extern MethodInfo m10953_MI;
extern MethodInfo m205_MI;
extern MethodInfo m204_MI;


// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
extern TypeInfo t2014_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10958_MI = 
{
	".ctor", (methodPointerType)&m8503_gshared, &t2014_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
static ParameterInfo t2014_m10959_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t2014_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10959_MI = 
{
	"GetHashCode", (methodPointerType)&m8504_gshared, &t2014_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t2014_m10959_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t362_0_0_0;
extern Il2CppType t362_0_0_0;
static ParameterInfo t2014_m10960_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &t362_0_0_0},
};
extern TypeInfo t2014_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10960_MI = 
{
	"Equals", (methodPointerType)&m8505_gshared, &t2014_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2014_m10960_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 9, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2014_MIs[] =
{
	&m10958_MI,
	&m10959_MI,
	&m10960_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10960_MI;
extern MethodInfo m10959_MI;
extern MethodInfo m10956_MI;
extern MethodInfo m10955_MI;
extern MethodInfo m10959_MI;
extern MethodInfo m10960_MI;
static MethodInfo* t2014_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10960_MI,
	&m10959_MI,
	&m10956_MI,
	&m10955_MI,
	&m10959_MI,
	&m10960_MI,
};
extern TypeInfo t5269_TI;
extern TypeInfo t877_TI;
static Il2CppInterfaceOffsetPair t2014_IOs[] = 
{
	{ &t5269_TI, 4},
	{ &t877_TI, 6},
};
extern Il2CppType t5276_0_0_0;
extern Il2CppType t362_0_0_0;
extern TypeInfo t2013_TI;
extern TypeInfo t2013_TI;
extern TypeInfo t2014_TI;
extern MethodInfo m10958_MI;
extern TypeInfo t362_TI;
extern MethodInfo m24432_MI;
extern MethodInfo m24292_MI;
extern MethodInfo m10953_MI;
extern TypeInfo t362_TI;
static void* t2014_RGCTXData[11] = 
{
	(void*)&t5276_0_0_0,
	(void*)&t362_0_0_0,
	&t2013_TI,
	&t2013_TI,
	&t2014_TI,
	&m10958_MI,
	&t362_TI,
	&m24432_MI,
	&m24292_MI,
	&m10953_MI,
	&t362_TI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2014_0_0_0;
extern Il2CppType t2014_1_0_0;
extern TypeInfo t2013_TI;
struct t2014;
extern TypeInfo t2014_TI;
extern Il2CppGenericClass t2014_GC;
extern TypeInfo t853_TI;
TypeInfo t2014_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultComparer", "", t2014_MIs, NULL, NULL, NULL, &t2013_TI, NULL, &t853_TI, &t2014_TI, NULL, t2014_VT, &EmptyCustomAttributesCache, &t2014_TI, &t2014_0_0_0, &t2014_1_0_0, t2014_IOs, &t2014_GC, NULL, NULL, NULL, t2014_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2014), 0, -1, 0, 0, -1, 1057027, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 10, 0, 2};
#include "t363.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t363_TI;
#include "t363MD.h"



// Metadata Definition System.Action`1<UnityEngine.Font>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t363_m1663_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m1663_MI = 
{
	".ctor", (methodPointerType)&m10961_gshared, &t363_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t363_m1663_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t363_m3026_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3026_MI = 
{
	"Invoke", (methodPointerType)&m10962_gshared, &t363_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t363_m3026_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t363_m10963_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10963_MI = 
{
	"BeginInvoke", (methodPointerType)&m10964_gshared, &t363_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t363_m10963_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t363_m10965_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t363_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10965_MI = 
{
	"EndInvoke", (methodPointerType)&m10966_gshared, &t363_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t363_m10965_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t363_MIs[] =
{
	&m1663_MI,
	&m3026_MI,
	&m10963_MI,
	&m10965_MI,
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
extern MethodInfo m3026_MI;
extern MethodInfo m10963_MI;
extern MethodInfo m10965_MI;
static MethodInfo* t363_VT[] =
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
	&m3026_MI,
	&m10963_MI,
	&m10965_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t363_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t363_0_0_0;
extern Il2CppType t363_1_0_0;
extern TypeInfo t221_TI;
struct t363;
extern TypeInfo t363_TI;
extern Il2CppGenericClass t363_GC;
TypeInfo t363_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t363_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t363_TI, NULL, t363_VT, &EmptyCustomAttributesCache, &t363_TI, &t363_0_0_0, &t363_1_0_0, t363_IOs, &t363_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t363), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2015.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2015_TI;
#include "t2015MD.h"



extern MethodInfo m10961_MI;
 void m10961_gshared (t2015 * __this, t28 * p0, t49 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m10962_MI;
 void m10962_gshared (t2015 * __this, t28 * p0, MethodInfo* method)
{
	typedef  void (*FunctionPointerType) (t28 * __this, t28 * p0, MethodInfo* method);
	if (__this->f9)
		m10962((t2015 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
extern MethodInfo m10964_MI;
 t28 * m10964_gshared (t2015 * __this, t28 * p0, t91 * p1, t28 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m10966_MI;
 void m10966_gshared (t2015 * __this, t28 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Action`1<System.Object>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2015_m10961_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2015_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10961_MI = 
{
	".ctor", (methodPointerType)&m10961_gshared, &t2015_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2015_m10961_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t2015_m10962_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2015_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10962_MI = 
{
	"Invoke", (methodPointerType)&m10962_gshared, &t2015_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2015_m10962_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2015_m10964_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2015_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10964_MI = 
{
	"BeginInvoke", (methodPointerType)&m10964_gshared, &t2015_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2015_m10964_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2015_m10966_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2015_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10966_MI = 
{
	"EndInvoke", (methodPointerType)&m10966_gshared, &t2015_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2015_m10966_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2015_MIs[] =
{
	&m10961_MI,
	&m10962_MI,
	&m10964_MI,
	&m10966_MI,
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
extern MethodInfo m10962_MI;
extern MethodInfo m10964_MI;
extern MethodInfo m10966_MI;
static MethodInfo* t2015_VT[] =
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
	&m10962_MI,
	&m10964_MI,
	&m10966_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2015_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t2015_0_0_0;
extern Il2CppType t2015_1_0_0;
extern TypeInfo t221_TI;
struct t2015;
extern TypeInfo t2015_TI;
extern Il2CppGenericClass t2015_GC;
TypeInfo t2015_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Action`1", "System", t2015_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2015_TI, NULL, t2015_VT, &EmptyCustomAttributesCache, &t2015_TI, &t2015_0_0_0, &t2015_1_0_0, t2015_IOs, &t2015_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2015), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t2016.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2016_TI;
#include "t2016MD.h"

#include "t43.h"
#include "t565.h"
#include "t2017.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t2016_TI;
extern TypeInfo t181_TI;
extern TypeInfo t2017_TI;
extern TypeInfo t30_TI;
#include "t2017MD.h"
extern MethodInfo m10969_MI;
extern MethodInfo m10971_MI;


// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.UI.Graphic>
extern Il2CppType t333_0_0_33;
FieldInfo t2016_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t2016_TI, offsetof(t2016, f1), &EmptyCustomAttributesCache};
static FieldInfo* t2016_FIs[] =
{
	&t2016_f1_FieldInfo,
	NULL
};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t181_0_0_0;
static ParameterInfo t2016_m10967_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t2016_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10967_MI = 
{
	".ctor", (methodPointerType)&m8018_gshared, &t2016_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t28, t2016_m10967_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2016_m10968_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2016_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10968_MI = 
{
	"Invoke", (methodPointerType)&m8020_gshared, &t2016_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2016_m10968_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2016_MIs[] =
{
	&m10967_MI,
	&m10968_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10968_MI;
extern MethodInfo m10972_MI;
static MethodInfo* t2016_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10968_MI,
	&m10972_MI,
};
extern Il2CppType t2018_0_0_0;
extern TypeInfo t2018_TI;
extern MethodInfo m18139_MI;
extern TypeInfo t181_TI;
extern MethodInfo m10974_MI;
extern MethodInfo m10969_MI;
extern TypeInfo t181_TI;
extern MethodInfo m10971_MI;
static void* t2016_RGCTXData[8] = 
{
	(void*)&t2018_0_0_0,
	&t2018_TI,
	&m18139_MI,
	&t181_TI,
	&m10974_MI,
	&m10969_MI,
	&t181_TI,
	&m10971_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2016_0_0_0;
extern Il2CppType t2016_1_0_0;
extern TypeInfo t2017_TI;
struct t2016;
extern TypeInfo t2016_TI;
extern Il2CppGenericClass t2016_GC;
TypeInfo t2016_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t2016_MIs, NULL, t2016_FIs, NULL, &t2017_TI, NULL, NULL, &t2016_TI, NULL, t2016_VT, &EmptyCustomAttributesCache, &t2016_TI, &t2016_0_0_0, &t2016_1_0_0, NULL, &t2016_GC, NULL, NULL, NULL, t2016_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2016), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2017_TI;

#include "t2018.h"
#include "t365.h"
extern TypeInfo t2017_TI;
extern TypeInfo t2018_TI;
extern TypeInfo t36_TI;
extern TypeInfo t331_TI;
extern TypeInfo t181_TI;
extern TypeInfo t30_TI;
#include "t564MD.h"
#include "t365MD.h"
#include "t2018MD.h"
extern Il2CppType t2018_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m18139_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m10974_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;
struct t564;
#include "t564.h"
struct t564;
 void m16708_gshared (t28 * __this, t28 * p0, MethodInfo* method);
#define m16708(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
#define m18139(__this, p0, method) (void)m16708_gshared((t28 *)__this, (t28 *)p0, method)
extern MethodInfo m18139_MI;


// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.UI.Graphic>
extern Il2CppType t2018_0_0_1;
FieldInfo t2017_f0_FieldInfo = 
{
	"Delegate", &t2018_0_0_1, &t2017_TI, offsetof(t2017, f0), &EmptyCustomAttributesCache};
static FieldInfo* t2017_FIs[] =
{
	&t2017_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2017_m10969_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2017_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10969_MI = 
{
	".ctor", (methodPointerType)&m8021_gshared, &t2017_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t2017_m10969_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t2018_0_0_0;
static ParameterInfo t2017_m10970_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &t2018_0_0_0},
};
extern TypeInfo t2017_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10970_MI = 
{
	".ctor", (methodPointerType)&m8022_gshared, &t2017_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2017_m10970_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t2017_m10971_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t2017_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10971_MI = 
{
	"Invoke", (methodPointerType)&m8023_gshared, &t2017_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2017_m10971_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t2017_m10972_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t2017_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10972_MI = 
{
	"Find", (methodPointerType)&m8024_gshared, &t2017_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t2017_m10972_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2017_MIs[] =
{
	&m10969_MI,
	&m10970_MI,
	&m10971_MI,
	&m10972_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10971_MI;
extern MethodInfo m10972_MI;
static MethodInfo* t2017_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10971_MI,
	&m10972_MI,
};
extern Il2CppType t2018_0_0_0;
extern TypeInfo t2018_TI;
extern MethodInfo m18139_MI;
extern TypeInfo t181_TI;
extern MethodInfo m10974_MI;
static void* t2017_RGCTXData[5] = 
{
	(void*)&t2018_0_0_0,
	&t2018_TI,
	&m18139_MI,
	&t181_TI,
	&m10974_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2017_0_0_0;
extern Il2CppType t2017_1_0_0;
extern TypeInfo t564_TI;
struct t2017;
extern TypeInfo t2017_TI;
extern Il2CppGenericClass t2017_GC;
TypeInfo t2017_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t2017_MIs, NULL, t2017_FIs, NULL, &t564_TI, NULL, NULL, &t2017_TI, NULL, t2017_VT, &EmptyCustomAttributesCache, &t2017_TI, &t2017_0_0_0, &t2017_1_0_0, NULL, &t2017_GC, NULL, NULL, NULL, t2017_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2017), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2018_TI;



// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.UI.Graphic>
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t2018_m10973_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t2018_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m10973_MI = 
{
	".ctor", (methodPointerType)&m8025_gshared, &t2018_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t2018_m10973_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t181_0_0_0;
static ParameterInfo t2018_m10974_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
};
extern TypeInfo t2018_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10974_MI = 
{
	"Invoke", (methodPointerType)&m8026_gshared, &t2018_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2018_m10974_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t181_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t2018_m10975_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &t181_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t2018_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10975_MI = 
{
	"BeginInvoke", (methodPointerType)&m8027_gshared, &t2018_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t2018_m10975_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t2018_m10976_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t2018_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10976_MI = 
{
	"EndInvoke", (methodPointerType)&m8028_gshared, &t2018_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2018_m10976_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2018_MIs[] =
{
	&m10973_MI,
	&m10974_MI,
	&m10975_MI,
	&m10976_MI,
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
extern MethodInfo m10974_MI;
extern MethodInfo m10975_MI;
extern MethodInfo m10976_MI;
static MethodInfo* t2018_VT[] =
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
	&m10974_MI,
	&m10975_MI,
	&m10976_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t2018_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t2018_0_0_0;
extern Il2CppType t2018_1_0_0;
extern TypeInfo t221_TI;
struct t2018;
extern TypeInfo t2018_TI;
extern Il2CppGenericClass t2018_GC;
TypeInfo t2018_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t2018_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t2018_TI, NULL, t2018_VT, &EmptyCustomAttributesCache, &t2018_TI, &t2018_0_0_0, &t2018_1_0_0, t2018_IOs, &t2018_GC, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2018), 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t182.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t182_TI;
#include "t182MD.h"

#include "t2019.h"
#include "t188.h"
#include "t190.h"
extern TypeInfo t182_TI;
extern TypeInfo t2019_TI;
extern TypeInfo t47_TI;
extern TypeInfo t190_TI;
extern TypeInfo t188_TI;
extern TypeInfo t30_TI;
#include "t2019MD.h"
#include "t188MD.h"
#include "t44MD.h"
extern MethodInfo m10977_MI;
extern MethodInfo m10980_MI;
extern MethodInfo m10990_MI;
extern MethodInfo m10981_MI;
extern MethodInfo m203_MI;
extern MethodInfo m18179_MI;
extern MethodInfo m10978_MI;
extern MethodInfo m10988_MI;
extern MethodInfo m11140_MI;
extern MethodInfo m10987_MI;
extern MethodInfo m2992_MI;
extern MethodInfo m1436_MI;
extern MethodInfo m10989_MI;
struct t1240;
#include "t1240.h"
struct t1240;
 t28 * m17219_gshared (t28 * __this, MethodInfo* method);
#define m17219(__this, method) (t28 *)m17219_gshared((t28 *)__this, method)
#define m18179(__this, method) (t190 *)m17219_gshared((t28 *)__this, method)
extern MethodInfo m18179_MI;


// Metadata Definition UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t2019_0_0_33;
FieldInfo t182_f0_FieldInfo = 
{
	"m_Stack", &t2019_0_0_33, &t182_TI, offsetof(t182, f0), &EmptyCustomAttributesCache};
extern Il2CppType t188_0_0_33;
FieldInfo t182_f1_FieldInfo = 
{
	"m_ActionOnGet", &t188_0_0_33, &t182_TI, offsetof(t182, f1), &EmptyCustomAttributesCache};
extern Il2CppType t188_0_0_33;
FieldInfo t182_f2_FieldInfo = 
{
	"m_ActionOnRelease", &t188_0_0_33, &t182_TI, offsetof(t182, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
extern CustomAttributesCache t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
FieldInfo t182_f3_FieldInfo = 
{
	"<countAll>k__BackingField", &t47_0_0_1, &t182_TI, offsetof(t182, f3), &t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField};
static FieldInfo* t182_FIs[] =
{
	&t182_f0_FieldInfo,
	&t182_f1_FieldInfo,
	&t182_f2_FieldInfo,
	&t182_f3_FieldInfo,
	NULL
};
extern MethodInfo m10977_MI;
extern MethodInfo m10978_MI;
static PropertyInfo t182____countAll_PropertyInfo = 
{
	&t182_TI, "countAll", &m10977_MI, &m10978_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10979_MI;
static PropertyInfo t182____countActive_PropertyInfo = 
{
	&t182_TI, "countActive", &m10979_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10980_MI;
static PropertyInfo t182____countInactive_PropertyInfo = 
{
	&t182_TI, "countInactive", &m10980_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t182_PIs[] =
{
	&t182____countAll_PropertyInfo,
	&t182____countActive_PropertyInfo,
	&t182____countInactive_PropertyInfo,
	NULL
};
extern Il2CppType t188_0_0_0;
extern Il2CppType t188_0_0_0;
static ParameterInfo t182_m1681_ParameterInfos[] = 
{
	{"actionOnGet", 0, 134217728, &EmptyCustomAttributesCache, &t188_0_0_0},
	{"actionOnRelease", 1, 134217728, &EmptyCustomAttributesCache, &t188_0_0_0},
};
extern TypeInfo t182_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1681_MI = 
{
	".ctor", (methodPointerType)&m8806_gshared, &t182_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t182_m1681_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t182_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t308__CustomAttributeCache_m2144;
MethodInfo m10977_MI = 
{
	"get_countAll", (methodPointerType)&m8808_gshared, &t182_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t308__CustomAttributeCache_m2144, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t182_m10978_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t182_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t308__CustomAttributeCache_m2145;
MethodInfo m10978_MI = 
{
	"set_countAll", (methodPointerType)&m8810_gshared, &t182_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t182_m10978_ParameterInfos, &t308__CustomAttributeCache_m2145, 2177, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t182_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10979_MI = 
{
	"get_countActive", (methodPointerType)&m8812_gshared, &t182_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t182_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10980_MI = 
{
	"get_countInactive", (methodPointerType)&m8814_gshared, &t182_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t182_TI;
extern Il2CppType t190_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1689_MI = 
{
	"Get", (methodPointerType)&m8816_gshared, &t182_TI, &t190_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t190_0_0_0;
static ParameterInfo t182_m1695_ParameterInfos[] = 
{
	{"element", 0, 134217728, &EmptyCustomAttributesCache, &t190_0_0_0},
};
extern TypeInfo t182_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1695_MI = 
{
	"Release", (methodPointerType)&m8818_gshared, &t182_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t182_m1695_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t182_MIs[] =
{
	&m1681_MI,
	&m10977_MI,
	&m10978_MI,
	&m10979_MI,
	&m10980_MI,
	&m1689_MI,
	&m1695_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t182_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t2019_TI;
extern MethodInfo m10981_MI;
extern MethodInfo m10977_MI;
extern MethodInfo m10980_MI;
extern MethodInfo m10990_MI;
extern TypeInfo t190_TI;
extern MethodInfo m18179_MI;
extern MethodInfo m10978_MI;
extern MethodInfo m10988_MI;
extern MethodInfo m11140_MI;
extern MethodInfo m10987_MI;
extern MethodInfo m10989_MI;
static void* t182_RGCTXData[12] = 
{
	&t2019_TI,
	&m10981_MI,
	&m10977_MI,
	&m10980_MI,
	&m10990_MI,
	&t190_TI,
	&m18179_MI,
	&m10978_MI,
	&m10988_MI,
	&m11140_MI,
	&m10987_MI,
	&m10989_MI,
};
extern Il2CppImage g_UnityEngine_UI_dll_Image;
extern Il2CppType t182_0_0_0;
extern Il2CppType t182_1_0_0;
extern TypeInfo t28_TI;
struct t182;
extern TypeInfo t182_TI;
extern Il2CppGenericClass t182_GC;
extern CustomAttributesCache t308__CustomAttributeCache_U3CcountAllU3Ek__BackingField;
extern CustomAttributesCache t308__CustomAttributeCache_m2144;
extern CustomAttributesCache t308__CustomAttributeCache_m2145;
TypeInfo t182_TI = 
{
	&g_UnityEngine_UI_dll_Image, NULL, "ObjectPool`1", "UnityEngine.UI", t182_MIs, t182_PIs, t182_FIs, NULL, &t28_TI, NULL, NULL, &t182_TI, NULL, t182_VT, &EmptyCustomAttributesCache, &t182_TI, &t182_0_0_0, &t182_1_0_0, NULL, &t182_GC, NULL, NULL, NULL, t182_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t182), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 3, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2019_TI;

#include "t2022.h"
extern TypeInfo t2019_TI;
extern TypeInfo t29_TI;
extern TypeInfo t30_TI;
extern TypeInfo t47_TI;
extern TypeInfo t331_TI;
extern TypeInfo t1253_TI;
extern TypeInfo t2022_TI;
extern TypeInfo t1287_TI;
extern TypeInfo t190_TI;
#include "t2022MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m3920_MI;
extern MethodInfo m3900_MI;
extern MethodInfo m6591_MI;
extern MethodInfo m10991_MI;
extern MethodInfo m7033_MI;
extern MethodInfo m18178_MI;
extern MethodInfo m11135_MI;
struct t29;
#define m18178(__this, p0, p1, method) (void)m17021_gshared((t28 *)__this, (t333**)p0, (int32_t)p1, method)
extern MethodInfo m18178_MI;


extern MethodInfo m10991_MI;
 t2022  m10991 (t2019 * __this, MethodInfo* method){
	{
		t2022  L_0 = {0};
		m11135(&L_0, __this, &m11135_MI);
		return L_0;
	}
}
// Metadata Definition System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
extern Il2CppType t47_0_0_32849;
FieldInfo t2019_f0_FieldInfo = 
{
	"INITIAL_SIZE", &t47_0_0_32849, &t2019_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t2020_0_0_1;
FieldInfo t2019_f1_FieldInfo = 
{
	"_array", &t2020_0_0_1, &t2019_TI, offsetof(t2019, f1), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2019_f2_FieldInfo = 
{
	"_size", &t47_0_0_1, &t2019_TI, offsetof(t2019, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t2019_f3_FieldInfo = 
{
	"_version", &t47_0_0_1, &t2019_TI, offsetof(t2019, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2019_FIs[] =
{
	&t2019_f0_FieldInfo,
	&t2019_f1_FieldInfo,
	&t2019_f2_FieldInfo,
	&t2019_f3_FieldInfo,
	NULL
};
static const int32_t t2019_f0_DefaultValueData = 16;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t2019_f0_DefaultValue = 
{
	&t2019_f0_FieldInfo, { (char*)&t2019_f0_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2019_FDVs[] = 
{
	&t2019_f0_DefaultValue,
	NULL
};
extern MethodInfo m10982_MI;
static PropertyInfo t2019____System_Collections_ICollection_IsSynchronized_PropertyInfo = 
{
	&t2019_TI, "System.Collections.ICollection.IsSynchronized", &m10982_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10983_MI;
static PropertyInfo t2019____System_Collections_ICollection_SyncRoot_PropertyInfo = 
{
	&t2019_TI, "System.Collections.ICollection.SyncRoot", &m10983_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m10990_MI;
static PropertyInfo t2019____Count_PropertyInfo = 
{
	&t2019_TI, "Count", &m10990_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t2019_PIs[] =
{
	&t2019____System_Collections_ICollection_IsSynchronized_PropertyInfo,
	&t2019____System_Collections_ICollection_SyncRoot_PropertyInfo,
	&t2019____Count_PropertyInfo,
	NULL
};
extern TypeInfo t2019_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m10981_MI = 
{
	".ctor", (methodPointerType)&m8819_gshared, &t2019_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m10982_MI = 
{
	"System.Collections.ICollection.get_IsSynchronized", (methodPointerType)&m8820_gshared, &t2019_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2529, 0, 5, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10983_MI = 
{
	"System.Collections.ICollection.get_SyncRoot", (methodPointerType)&m8821_gshared, &t2019_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2529, 0, 6, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t29_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t2019_m10984_ParameterInfos[] = 
{
	{"dest", 0, 134217728, &EmptyCustomAttributesCache, &t29_0_0_0},
	{"idx", 1, 134217728, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t2019_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10984_MI = 
{
	"System.Collections.ICollection.CopyTo", (methodPointerType)&m8822_gshared, &t2019_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t2019_m10984_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 7, 2, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t2021_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10985_MI = 
{
	"System.Collections.Generic.IEnumerable<T>.GetEnumerator", (methodPointerType)&m8823_gshared, &t2019_TI, &t2021_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 9, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10986_MI = 
{
	"System.Collections.IEnumerable.GetEnumerator", (methodPointerType)&m8824_gshared, &t2019_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 481, 0, 8, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t190_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10987_MI = 
{
	"Peek", (methodPointerType)&m8825_gshared, &t2019_TI, &t190_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t190_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10988_MI = 
{
	"Pop", (methodPointerType)&m8826_gshared, &t2019_TI, &t190_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern Il2CppType t190_0_0_0;
static ParameterInfo t2019_m10989_ParameterInfos[] = 
{
	{"t", 0, 134217728, &EmptyCustomAttributesCache, &t190_0_0_0},
};
extern TypeInfo t2019_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10989_MI = 
{
	"Push", (methodPointerType)&m8827_gshared, &t2019_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2019_m10989_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m10990_MI = 
{
	"get_Count", (methodPointerType)&m8828_gshared, &t2019_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, true, 0, NULL, (methodPointerType)NULL};
extern TypeInfo t2019_TI;
extern Il2CppType t2022_0_0_0;
extern void* RuntimeInvoker_t2022 (MethodInfo* method, void* obj, void** args);
MethodInfo m10991_MI = 
{
	"GetEnumerator", (methodPointerType)&m10991, &t2019_TI, &t2022_0_0_0, RuntimeInvoker_t2022, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, true, 0, NULL, (methodPointerType)NULL};
static MethodInfo* t2019_MIs[] =
{
	&m10981_MI,
	&m10982_MI,
	&m10983_MI,
	&m10984_MI,
	&m10985_MI,
	&m10986_MI,
	&m10987_MI,
	&m10988_MI,
	&m10989_MI,
	&m10990_MI,
	&m10991_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m10990_MI;
extern MethodInfo m10982_MI;
extern MethodInfo m10983_MI;
extern MethodInfo m10984_MI;
extern MethodInfo m10986_MI;
extern MethodInfo m10985_MI;
static MethodInfo* t2019_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m10990_MI,
	&m10982_MI,
	&m10983_MI,
	&m10984_MI,
	&m10986_MI,
	&m10985_MI,
};
extern TypeInfo t661_TI;
extern TypeInfo t611_TI;
extern TypeInfo t4120_TI;
static TypeInfo* t2019_ITIs[] = 
{
	&t661_TI,
	&t611_TI,
	&t4120_TI,
};
extern TypeInfo t661_TI;
extern TypeInfo t611_TI;
extern TypeInfo t4120_TI;
static Il2CppInterfaceOffsetPair t2019_IOs[] = 
{
	{ &t661_TI, 4},
	{ &t611_TI, 8},
	{ &t4120_TI, 9},
};
extern MethodInfo m10991_MI;
extern TypeInfo t2022_TI;
extern MethodInfo m18178_MI;
extern MethodInfo m11135_MI;
static void* t2019_RGCTXData[4] = 
{
	&m10991_MI,
	&t2022_TI,
	&m18178_MI,
	&m11135_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t2019_0_0_0;
extern Il2CppType t2019_1_0_0;
extern TypeInfo t28_TI;
struct t2019;
extern TypeInfo t2019_TI;
extern Il2CppGenericClass t2019_GC;
extern CustomAttributesCache t699__CustomAttributeCache;
TypeInfo t2019_TI = 
{
	&g_System_dll_Image, NULL, "Stack`1", "System.Collections.Generic", t2019_MIs, t2019_PIs, t2019_FIs, NULL, &t28_TI, NULL, NULL, &t2019_TI, t2019_ITIs, t2019_VT, &t699__CustomAttributeCache, &t2019_TI, &t2019_0_0_0, &t2019_1_0_0, t2019_IOs, &t2019_GC, NULL, t2019_FDVs, NULL, t2019_RGCTXData, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2019), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 11, 3, 4, 0, 0, 10, 3, 3};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
