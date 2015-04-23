#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t577.h"
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
extern TypeInfo t577_TI;
#include "t577MD.h"

#include "t30.h"
#include "t578.h"
#include "t564.h"
#include "t28.h"
#include "t565.h"
#include "t47.h"
#include "t31.h"
#include "t658.h"
#include "t49.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo t578_TI;
extern TypeInfo t577_TI;
extern TypeInfo t30_TI;
extern TypeInfo t564_TI;
extern TypeInfo t47_TI;
extern TypeInfo t31_TI;
extern TypeInfo t28_TI;
extern TypeInfo t565_TI;
extern TypeInfo t658_TI;
extern TypeInfo t333_TI;
#include "t578MD.h"
#include "t28MD.h"
#include "t564MD.h"
#include "t658MD.h"
extern MethodInfo m3111_MI;
extern MethodInfo m203_MI;
extern MethodInfo m3112_MI;
extern MethodInfo m3113_MI;
extern MethodInfo m3080_MI;
extern MethodInfo m3114_MI;
extern MethodInfo m3115_MI;
extern MethodInfo m3116_MI;
extern MethodInfo m3117_MI;
extern MethodInfo m3118_MI;
extern MethodInfo m3119_MI;
extern MethodInfo m3078_MI;

#include "t29.h"

extern MethodInfo m2931_MI;
 void m2931 (t577 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t578_TI));
		t578 * L_0 = (t578 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t578_TI));
		m3111(L_0, &m3111_MI);
		__this->f0 = L_0;
		t578 * L_1 = (t578 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t578_TI));
		m3111(L_1, &m3111_MI);
		__this->f1 = L_1;
		t578 * L_2 = (t578 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t578_TI));
		m3111(L_2, &m3111_MI);
		__this->f2 = L_2;
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2932_MI;
 void m2932 (t577 * __this, t564 * p0, MethodInfo* method){
	{
		t578 * L_0 = (__this->f0);
		VirtActionInvoker1< t564 * >::Invoke(&m3112_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m2933_MI;
 void m2933 (t577 * __this, t564 * p0, MethodInfo* method){
	{
		t578 * L_0 = (__this->f1);
		VirtActionInvoker1< t564 * >::Invoke(&m3112_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m2934_MI;
 void m2934 (t577 * __this, t28 * p0, t565 * p1, MethodInfo* method){
	t578 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t578_TI));
		t578 * L_0 = (t578 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t578_TI));
		m3111(L_0, &m3111_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		t578 * L_1 = (__this->f1);
		t564 * L_2 = (t564 *)VirtFuncInvoker1< t564 *, int32_t >::Invoke(&m3113_MI, L_1, V_1);
		bool L_3 = (bool)VirtFuncInvoker2< bool, t28 *, t565 * >::Invoke(&m3080_MI, L_2, p0, p1);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		t578 * L_4 = (__this->f1);
		t564 * L_5 = (t564 *)VirtFuncInvoker1< t564 *, int32_t >::Invoke(&m3113_MI, L_4, V_1);
		VirtActionInvoker1< t564 * >::Invoke(&m3112_MI, V_0, L_5);
	}

IL_0037:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_003b:
	{
		t578 * L_6 = (__this->f1);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3114_MI, L_6);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_000d;
		}
	}
	{
		t578 * L_8 = (__this->f1);
		t578 * L_9 = V_0;
		t49 L_10 = { GetVirtualMethodInfo(L_9, &m3115_MI) };
		t658 * L_11 = (t658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t658_TI));
		m3116(L_11, L_9, L_10, &m3116_MI);
		m3117(L_8, L_11, &m3117_MI);
		return;
	}
}
extern MethodInfo m2935_MI;
 void m2935 (t577 * __this, MethodInfo* method){
	{
		t578 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(&m3118_MI, L_0);
		return;
	}
}
extern MethodInfo m2936_MI;
 void m2936 (t577 * __this, t333* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t578 * L_0 = (__this->f2);
		t578 * L_1 = (__this->f0);
		m3119(L_0, L_1, &m3119_MI);
		t578 * L_2 = (__this->f2);
		t578 * L_3 = (__this->f1);
		m3119(L_2, L_3, &m3119_MI);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		t578 * L_4 = (__this->f2);
		t564 * L_5 = (t564 *)VirtFuncInvoker1< t564 *, int32_t >::Invoke(&m3113_MI, L_4, V_0);
		VirtActionInvoker1< t333* >::Invoke(&m3078_MI, L_5, p0);
		V_0 = ((int32_t)(V_0+1));
	}

IL_003f:
	{
		t578 * L_6 = (__this->f2);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3114_MI, L_6);
		if ((((int32_t)V_0) < ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		t578 * L_8 = (__this->f2);
		VirtActionInvoker0::Invoke(&m3118_MI, L_8);
		return;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCallList
extern Il2CppType t578_0_0_33;
FieldInfo t577_f0_FieldInfo = 
{
	"m_PersistentCalls", &t578_0_0_33, &t577_TI, offsetof(t577, f0), &EmptyCustomAttributesCache};
extern Il2CppType t578_0_0_33;
FieldInfo t577_f1_FieldInfo = 
{
	"m_RuntimeCalls", &t578_0_0_33, &t577_TI, offsetof(t577, f1), &EmptyCustomAttributesCache};
extern Il2CppType t578_0_0_33;
FieldInfo t577_f2_FieldInfo = 
{
	"m_ExecutingCalls", &t578_0_0_33, &t577_TI, offsetof(t577, f2), &EmptyCustomAttributesCache};
static FieldInfo* t577_FIs[] =
{
	&t577_f0_FieldInfo,
	&t577_f1_FieldInfo,
	&t577_f2_FieldInfo,
	NULL
};
extern TypeInfo t577_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2931_MI = 
{
	".ctor", (methodPointerType)&m2931, &t577_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1191, NULL, (methodPointerType)NULL};
extern Il2CppType t564_0_0_0;
static ParameterInfo t577_m2932_ParameterInfos[] = 
{
	{"call", 0, 134218975, &EmptyCustomAttributesCache, &t564_0_0_0},
};
extern TypeInfo t577_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2932_MI = 
{
	"AddPersistentInvokableCall", (methodPointerType)&m2932, &t577_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t577_m2932_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1192, NULL, (methodPointerType)NULL};
extern Il2CppType t564_0_0_0;
static ParameterInfo t577_m2933_ParameterInfos[] = 
{
	{"call", 0, 134218976, &EmptyCustomAttributesCache, &t564_0_0_0},
};
extern TypeInfo t577_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2933_MI = 
{
	"AddListener", (methodPointerType)&m2933, &t577_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t577_m2933_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1193, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t577_m2934_ParameterInfos[] = 
{
	{"targetObj", 0, 134218977, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218978, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t577_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2934_MI = 
{
	"RemoveListener", (methodPointerType)&m2934, &t577_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t577_m2934_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1194, NULL, (methodPointerType)NULL};
extern TypeInfo t577_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2935_MI = 
{
	"ClearPersistent", (methodPointerType)&m2935, &t577_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1195, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t577_m2936_ParameterInfos[] = 
{
	{"parameters", 0, 134218979, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t577_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2936_MI = 
{
	"Invoke", (methodPointerType)&m2936, &t577_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t577_m2936_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1196, NULL, (methodPointerType)NULL};
static MethodInfo* t577_MIs[] =
{
	&m2931_MI,
	&m2932_MI,
	&m2933_MI,
	&m2934_MI,
	&m2935_MI,
	&m2936_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t577_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t577_0_0_0;
extern Il2CppType t577_1_0_0;
extern TypeInfo t28_TI;
struct t577;
extern TypeInfo t577_TI;
TypeInfo t577_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCallList", "UnityEngine.Events", t577_MIs, NULL, t577_FIs, NULL, &t28_TI, NULL, NULL, &t577_TI, NULL, t577_VT, &EmptyCustomAttributesCache, &t577_TI, &t577_0_0_0, &t577_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t577), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 3, 0, 0, 4, 0, 0};
#include "t574.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t574_TI;
#include "t574MD.h"

#include "t575.h"
#include "t36.h"
#include "t18.h"
#include "t573.h"
#include "t43.h"
#include "t37.h"
#include "t563.h"
#include "t562.h"
#include "t33.h"
#include "t634.h"
#include "t627.h"
#include "t628.h"
#include "t629.h"
#include "t633.h"
extern TypeInfo t574_TI;
extern TypeInfo t577_TI;
extern TypeInfo t575_TI;
extern TypeInfo t36_TI;
extern TypeInfo t18_TI;
extern TypeInfo t43_TI;
extern TypeInfo t565_TI;
extern TypeInfo t28_TI;
extern TypeInfo t545_TI;
extern TypeInfo t33_TI;
extern TypeInfo t47_TI;
extern TypeInfo t31_TI;
extern TypeInfo t627_TI;
extern TypeInfo t628_TI;
extern TypeInfo t631_TI;
extern TypeInfo t629_TI;
extern TypeInfo t633_TI;
extern TypeInfo t635_TI;
extern TypeInfo t634_TI;
#include "t575MD.h"
#include "t36MD.h"
#include "t573MD.h"
#include "t563MD.h"
#include "t18MD.h"
#include "t633MD.h"
#include "t634MD.h"
extern Il2CppType t43_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
extern MethodInfo m203_MI;
extern MethodInfo m2931_MI;
extern MethodInfo m2929_MI;
extern MethodInfo m1553_MI;
extern MethodInfo m3120_MI;
extern MethodInfo m2940_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m2925_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m1885_MI;
extern MethodInfo m3102_MI;
extern MethodInfo m2923_MI;
extern MethodInfo m2922_MI;
extern MethodInfo m2924_MI;
extern MethodInfo m2939_MI;
extern MethodInfo m3121_MI;
extern MethodInfo m2945_MI;
extern MethodInfo m2935_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m2933_MI;
extern MethodInfo m2934_MI;
extern MethodInfo m2941_MI;
extern MethodInfo m2936_MI;
extern MethodInfo m206_MI;
extern MethodInfo m3122_MI;
extern MethodInfo m1799_MI;
extern MethodInfo m3123_MI;
extern MethodInfo m3063_MI;
extern MethodInfo m3064_MI;
extern MethodInfo m3124_MI;
extern MethodInfo m3032_MI;


extern MethodInfo m2937_MI;
 void m2937 (t574 * __this, MethodInfo* method){
	{
		__this->f3 = 1;
		m203(__this, &m203_MI);
		t577 * L_0 = (t577 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t577_TI));
		m2931(L_0, &m2931_MI);
		__this->f0 = L_0;
		t575 * L_1 = (t575 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t575_TI));
		m2929(L_1, &m2929_MI);
		__this->f1 = L_1;
		t36 * L_2 = m1553(__this, &m1553_MI);
		t18* L_3 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3120_MI, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern MethodInfo m1460_MI;
 void m1460 (t574 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m1461_MI;
 void m1461 (t574 * __this, MethodInfo* method){
	{
		m2940(__this, &m2940_MI);
		t36 * L_0 = m1553(__this, &m1553_MI);
		t18* L_1 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3120_MI, L_0);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m2938_MI;
 t565 * m2938 (t574 * __this, t573 * p0, MethodInfo* method){
	t36 * V_0 = {0};
	t36 * G_B3_0 = {0};
	t36 * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_0 = m1673(NULL, LoadTypeToken(&t43_0_0_0), &m1673_MI);
		V_0 = L_0;
		t563 * L_1 = m2925(p0, &m2925_MI);
		t18* L_2 = m2910(L_1, &m2910_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_3 = m1885(NULL, L_2, &m1885_MI);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		t563 * L_4 = m2925(p0, &m2925_MI);
		t18* L_5 = m2910(L_4, &m2910_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_6 = m3102(NULL, L_5, 0, &m3102_MI);
		t36 * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_8 = m1673(NULL, LoadTypeToken(&t43_0_0_0), &m1673_MI);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		t18* L_9 = m2923(p0, &m2923_MI);
		t43 * L_10 = m2922(p0, &m2922_MI);
		int32_t L_11 = m2924(p0, &m2924_MI);
		t565 * L_12 = m2939(__this, L_9, L_10, L_11, V_0, &m2939_MI);
		return L_12;
	}
}
extern MethodInfo m2939_MI;
 t565 * m2939 (t574 * __this, t18* p0, t28 * p1, int32_t p2, t36 * p3, MethodInfo* method){
	int32_t V_0 = {0};
	t36 * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t545* G_B10_2 = {0};
	t545* G_B10_3 = {0};
	t18* G_B10_4 = {0};
	t28 * G_B10_5 = {0};
	t36 * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	t545* G_B9_2 = {0};
	t545* G_B9_3 = {0};
	t18* G_B9_4 = {0};
	t28 * G_B9_5 = {0};
	{
		V_0 = p2;
		if (V_0 == 0)
		{
			goto IL_0029;
		}
		if (V_0 == 1)
		{
			goto IL_0032;
		}
		if (V_0 == 2)
		{
			goto IL_00ac;
		}
		if (V_0 == 3)
		{
			goto IL_005b;
		}
		if (V_0 == 4)
		{
			goto IL_0040;
		}
		if (V_0 == 5)
		{
			goto IL_0091;
		}
		if (V_0 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		t565 * L_0 = (t565 *)VirtFuncInvoker2< t565 *, t18*, t28 * >::Invoke(&m3121_MI, __this, p0, p1);
		return L_0;
	}

IL_0032:
	{
		t565 * L_1 = m2945(NULL, p1, p0, ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 0)), &m2945_MI);
		return L_1;
	}

IL_0040:
	{
		t545* L_2 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_3 = m1673(NULL, LoadTypeToken(&t33_0_0_0), &m1673_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t36 **)(t36 **)SZArrayLdElema(L_2, 0)) = (t36 *)L_3;
		t565 * L_4 = m2945(NULL, p1, p0, L_2, &m2945_MI);
		return L_4;
	}

IL_005b:
	{
		t545* L_5 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_6 = m1673(NULL, LoadTypeToken(&t47_0_0_0), &m1673_MI);
		ArrayElementTypeCheck (L_5, L_6);
		*((t36 **)(t36 **)SZArrayLdElema(L_5, 0)) = (t36 *)L_6;
		t565 * L_7 = m2945(NULL, p1, p0, L_5, &m2945_MI);
		return L_7;
	}

IL_0076:
	{
		t545* L_8 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_9 = m1673(NULL, LoadTypeToken(&t31_0_0_0), &m1673_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t36 **)(t36 **)SZArrayLdElema(L_8, 0)) = (t36 *)L_9;
		t565 * L_10 = m2945(NULL, p1, p0, L_8, &m2945_MI);
		return L_10;
	}

IL_0091:
	{
		t545* L_11 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_12 = m1673(NULL, LoadTypeToken(&t18_0_0_0), &m1673_MI);
		ArrayElementTypeCheck (L_11, L_12);
		*((t36 **)(t36 **)SZArrayLdElema(L_11, 0)) = (t36 *)L_12;
		t565 * L_13 = m2945(NULL, p1, p0, L_11, &m2945_MI);
		return L_13;
	}

IL_00ac:
	{
		t545* L_14 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 1));
		t36 * L_15 = p3;
		G_B9_0 = L_15;
		G_B9_1 = 0;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
		G_B9_4 = p0;
		G_B9_5 = p1;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = 0;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			G_B10_4 = p0;
			G_B10_5 = p1;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_16 = m1673(NULL, LoadTypeToken(&t43_0_0_0), &m1673_MI);
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((t36 **)(t36 **)SZArrayLdElema(G_B10_2, G_B10_1)) = (t36 *)G_B10_0;
		t565 * L_17 = m2945(NULL, G_B10_5, G_B10_4, G_B10_3, &m2945_MI);
		return L_17;
	}

IL_00d0:
	{
		return (t565 *)NULL;
	}
}
extern MethodInfo m2940_MI;
 void m2940 (t574 * __this, MethodInfo* method){
	{
		t577 * L_0 = (__this->f0);
		m2935(L_0, &m2935_MI);
		__this->f3 = 1;
		return;
	}
}
extern MethodInfo m2941_MI;
 void m2941 (t574 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t575 * L_1 = (__this->f1);
		t577 * L_2 = (__this->f0);
		m2930(L_1, L_2, __this, &m2930_MI);
		__this->f3 = 0;
	}

IL_0024:
	{
		return;
	}
}
extern MethodInfo m2942_MI;
 void m2942 (t574 * __this, t564 * p0, MethodInfo* method){
	{
		t577 * L_0 = (__this->f0);
		m2933(L_0, p0, &m2933_MI);
		return;
	}
}
extern MethodInfo m2943_MI;
 void m2943 (t574 * __this, t28 * p0, t565 * p1, MethodInfo* method){
	{
		t577 * L_0 = (__this->f0);
		m2934(L_0, p0, p1, &m2934_MI);
		return;
	}
}
extern MethodInfo m2944_MI;
 void m2944 (t574 * __this, t333* p0, MethodInfo* method){
	{
		m2941(__this, &m2941_MI);
		t577 * L_0 = (__this->f0);
		m2936(L_0, p0, &m2936_MI);
		return;
	}
}
extern MethodInfo m1459_MI;
 t18* m1459 (t574 * __this, MethodInfo* method){
	{
		t18* L_0 = m206(__this, &m206_MI);
		t36 * L_1 = m1553(__this, &m1553_MI);
		t18* L_2 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3122_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_3 = m1799(NULL, L_0, (t18*) &_stringLiteral84, L_2, &m1799_MI);
		return L_3;
	}
}
extern MethodInfo m2945_MI;
 t565 * m2945 (t28 * __this, t28 * p0, t18* p1, t545* p2, MethodInfo* method){
	t36 * V_0 = {0};
	t565 * V_1 = {0};
	t635* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	t634 * V_5 = {0};
	t635* V_6 = {0};
	int32_t V_7 = 0;
	t36 * V_8 = {0};
	t36 * V_9 = {0};
	{
		t36 * L_0 = m1553(p0, &m1553_MI);
		V_0 = L_0;
		goto IL_008e;
	}

IL_000c:
	{
		t565 * L_1 = (t565 *)VirtFuncInvoker5< t565 *, t18*, int32_t, t628 *, t545*, t631* >::Invoke(&m3123_MI, V_0, p1, ((int32_t)52), (t628 *)NULL, p2, (t631*)(t631*)NULL);
		V_1 = L_1;
		if (!V_1)
		{
			goto IL_0087;
		}
	}
	{
		t635* L_2 = (t635*)VirtFuncInvoker0< t635* >::Invoke(&m3063_MI, V_1);
		V_2 = L_2;
		V_3 = 1;
		V_4 = 0;
		V_6 = V_2;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		V_5 = (*(t634 **)(t634 **)SZArrayLdElema(V_6, V_7));
		V_8 = (*(t36 **)(t36 **)SZArrayLdElema(p2, V_4));
		t36 * L_3 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3064_MI, V_5);
		V_9 = L_3;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3124_MI, V_8);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3124_MI, V_9);
		V_3 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		if (V_3)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		V_4 = ((int32_t)(V_4+1));
		V_7 = ((int32_t)(V_7+1));
	}

IL_0074:
	{
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((t29 *)V_6)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		if (!V_3)
		{
			goto IL_0087;
		}
	}
	{
		return V_1;
	}

IL_0087:
	{
		t36 * L_6 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3032_MI, V_0);
		V_0 = L_6;
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_7 = m1673(NULL, LoadTypeToken(&t28_0_0_0), &m1673_MI);
		if ((((t36 *)V_0) == ((t36 *)L_7)))
		{
			goto IL_00a4;
		}
	}
	{
		if (V_0)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (t565 *)NULL;
	}
}
// Metadata Definition UnityEngine.Events.UnityEventBase
extern Il2CppType t577_0_0_1;
FieldInfo t574_f0_FieldInfo = 
{
	"m_Calls", &t577_0_0_1, &t574_TI, offsetof(t574, f0), &EmptyCustomAttributesCache};
extern Il2CppType t575_0_0_1;
extern CustomAttributesCache t574__CustomAttributeCache_m_PersistentCalls;
FieldInfo t574_f1_FieldInfo = 
{
	"m_PersistentCalls", &t575_0_0_1, &t574_TI, offsetof(t574, f1), &t574__CustomAttributeCache_m_PersistentCalls};
extern Il2CppType t18_0_0_1;
extern CustomAttributesCache t574__CustomAttributeCache_m_TypeName;
FieldInfo t574_f2_FieldInfo = 
{
	"m_TypeName", &t18_0_0_1, &t574_TI, offsetof(t574, f2), &t574__CustomAttributeCache_m_TypeName};
extern Il2CppType t31_0_0_1;
FieldInfo t574_f3_FieldInfo = 
{
	"m_CallsDirty", &t31_0_0_1, &t574_TI, offsetof(t574, f3), &EmptyCustomAttributesCache};
static FieldInfo* t574_FIs[] =
{
	&t574_f0_FieldInfo,
	&t574_f1_FieldInfo,
	&t574_f2_FieldInfo,
	&t574_f3_FieldInfo,
	NULL
};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2937_MI = 
{
	".ctor", (methodPointerType)&m2937, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1197, NULL, (methodPointerType)NULL};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1460_MI = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", (methodPointerType)&m1460, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 1198, NULL, (methodPointerType)NULL};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1461_MI = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", (methodPointerType)&m1461, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 5, 0, false, false, 1199, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t574_m3121_ParameterInfos[] = 
{
	{"name", 0, 134218980, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"targetObj", 1, 134218981, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3121_MI = 
{
	"FindMethod_Impl", NULL, &t574_TI, &t565_0_0_0, RuntimeInvoker_t28_t28_t28, t574_m3121_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 6, 2, false, false, 1200, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t574_m3097_ParameterInfos[] = 
{
	{"target", 0, 134218982, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218983, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t564_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3097_MI = 
{
	"GetDelegate", NULL, &t574_TI, &t564_0_0_0, RuntimeInvoker_t28_t28_t28, t574_m3097_ParameterInfos, &EmptyCustomAttributesCache, 1475, 0, 7, 2, false, false, 1201, NULL, (methodPointerType)NULL};
extern Il2CppType t573_0_0_0;
static ParameterInfo t574_m2938_ParameterInfos[] = 
{
	{"call", 0, 134218984, &EmptyCustomAttributesCache, &t573_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2938_MI = 
{
	"FindMethod", (methodPointerType)&m2938, &t574_TI, &t565_0_0_0, RuntimeInvoker_t28_t28, t574_m2938_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 1202, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
extern Il2CppType t562_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t574_m2939_ParameterInfos[] = 
{
	{"name", 0, 134218985, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"listener", 1, 134218986, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"mode", 2, 134218987, &EmptyCustomAttributesCache, &t562_0_0_0},
	{"argumentType", 3, 134218988, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2939_MI = 
{
	"FindMethod", (methodPointerType)&m2939, &t574_TI, &t565_0_0_0, RuntimeInvoker_t28_t28_t28_t47_t28, t574_m2939_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 4, false, false, 1203, NULL, (methodPointerType)NULL};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2940_MI = 
{
	"DirtyPersistentCalls", (methodPointerType)&m2940, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1204, NULL, (methodPointerType)NULL};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2941_MI = 
{
	"RebuildPersistentCallsIfNeeded", (methodPointerType)&m2941, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1205, NULL, (methodPointerType)NULL};
extern Il2CppType t564_0_0_0;
static ParameterInfo t574_m2942_ParameterInfos[] = 
{
	{"call", 0, 134218989, &EmptyCustomAttributesCache, &t564_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2942_MI = 
{
	"AddCall", (methodPointerType)&m2942, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t574_m2942_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 1206, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t574_m2943_ParameterInfos[] = 
{
	{"targetObj", 0, 134218990, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218991, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2943_MI = 
{
	"RemoveListener", (methodPointerType)&m2943, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t574_m2943_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 2, false, false, 1207, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t574_m2944_ParameterInfos[] = 
{
	{"parameters", 0, 134218992, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2944_MI = 
{
	"Invoke", (methodPointerType)&m2944, &t574_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t574_m2944_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 1, false, false, 1208, NULL, (methodPointerType)NULL};
extern TypeInfo t574_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1459_MI = 
{
	"ToString", (methodPointerType)&m1459, &t574_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 1209, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t545_0_0_0;
static ParameterInfo t574_m2945_ParameterInfos[] = 
{
	{"obj", 0, 134218993, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"functionName", 1, 134218994, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"argumentTypes", 2, 134218995, &EmptyCustomAttributesCache, &t545_0_0_0},
};
extern TypeInfo t574_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2945_MI = 
{
	"GetValidMethodInfo", (methodPointerType)&m2945, &t574_TI, &t565_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t574_m2945_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1210, NULL, (methodPointerType)NULL};
static MethodInfo* t574_MIs[] =
{
	&m2937_MI,
	&m1460_MI,
	&m1461_MI,
	&m3121_MI,
	&m3097_MI,
	&m2938_MI,
	&m2939_MI,
	&m2940_MI,
	&m2941_MI,
	&m2942_MI,
	&m2943_MI,
	&m2944_MI,
	&m1459_MI,
	&m2945_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m1459_MI;
extern MethodInfo m1460_MI;
extern MethodInfo m1461_MI;
static MethodInfo* t574_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m1459_MI,
	&m1460_MI,
	&m1461_MI,
	NULL,
	NULL,
};
extern TypeInfo t327_TI;
static TypeInfo* t574_ITIs[] = 
{
	&t327_TI,
};
extern TypeInfo t327_TI;
static Il2CppInterfaceOffsetPair t574_IOs[] = 
{
	{ &t327_TI, 4},
};
extern TypeInfo t325_TI;
#include "t325.h"
#include "t325MD.h"
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
#include "t326.h"
#include "t326MD.h"
extern MethodInfo m1457_MI;
void t574_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), &m1456_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t574_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t574__CustomAttributeCache_m_PersistentCalls = {
2,
NULL,
&t574_CustomAttributesCacheGenerator_m_PersistentCalls
};
CustomAttributesCache t574__CustomAttributeCache_m_TypeName = {
1,
NULL,
&t574_CustomAttributesCacheGenerator_m_TypeName
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t574_0_0_0;
extern Il2CppType t574_1_0_0;
extern TypeInfo t28_TI;
struct t574;
extern TypeInfo t574_TI;
extern CustomAttributesCache t574__CustomAttributeCache_m_PersistentCalls;
extern CustomAttributesCache t574__CustomAttributeCache_m_TypeName;
TypeInfo t574_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEventBase", "UnityEngine.Events", t574_MIs, NULL, t574_FIs, NULL, &t28_TI, NULL, NULL, &t574_TI, t574_ITIs, t574_VT, &EmptyCustomAttributesCache, &t574_TI, &t574_0_0_0, &t574_1_0_0, t574_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t574), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 14, 0, 4, 0, 0, 8, 1, 1};
#include "t161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t161_TI;
#include "t161MD.h"

#include "t566.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t161_TI;
extern TypeInfo t545_TI;
extern TypeInfo t36_TI;
extern TypeInfo t566_TI;
#include "t566MD.h"
extern MethodInfo m2937_MI;
extern MethodInfo m2945_MI;
extern MethodInfo m2918_MI;
extern MethodInfo m2944_MI;


extern MethodInfo m1630_MI;
 void m1630 (t161 * __this, MethodInfo* method){
	{
		__this->f4 = ((t333*)SZArrayNew(InitializedTypeInfo(&t333_TI), 0));
		m2937(__this, &m2937_MI);
		return;
	}
}
extern MethodInfo m1631_MI;
 t565 * m1631 (t161 * __this, t18* p0, t28 * p1, MethodInfo* method){
	{
		t565 * L_0 = m2945(NULL, p1, p0, ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 0)), &m2945_MI);
		return L_0;
	}
}
extern MethodInfo m1632_MI;
 t564 * m1632 (t161 * __this, t28 * p0, t565 * p1, MethodInfo* method){
	{
		t566 * L_0 = (t566 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t566_TI));
		m2918(L_0, p0, p1, &m2918_MI);
		return L_0;
	}
}
extern MethodInfo m1635_MI;
 void m1635 (t161 * __this, MethodInfo* method){
	{
		t333* L_0 = (__this->f4);
		m2944(__this, L_0, &m2944_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent
extern Il2CppType t333_0_0_33;
FieldInfo t161_f4_FieldInfo = 
{
	"m_InvokeArray", &t333_0_0_33, &t161_TI, offsetof(t161, f4), &EmptyCustomAttributesCache};
static FieldInfo* t161_FIs[] =
{
	&t161_f4_FieldInfo,
	NULL
};
extern TypeInfo t161_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1630_MI = 
{
	".ctor", (methodPointerType)&m1630, &t161_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1211, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t161_m1631_ParameterInfos[] = 
{
	{"name", 0, 134218996, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"targetObj", 1, 134218997, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t565_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1631_MI = 
{
	"FindMethod_Impl", (methodPointerType)&m1631, &t161_TI, &t565_0_0_0, RuntimeInvoker_t28_t28_t28, t161_m1631_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1212, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t161_m1632_ParameterInfos[] = 
{
	{"target", 0, 134218998, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218999, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t161_TI;
extern Il2CppType t564_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1632_MI = 
{
	"GetDelegate", (methodPointerType)&m1632, &t161_TI, &t564_0_0_0, RuntimeInvoker_t28_t28_t28, t161_m1632_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1213, NULL, (methodPointerType)NULL};
extern TypeInfo t161_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1635_MI = 
{
	"Invoke", (methodPointerType)&m1635, &t161_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1214, NULL, (methodPointerType)NULL};
static MethodInfo* t161_MIs[] =
{
	&m1630_MI,
	&m1631_MI,
	&m1632_MI,
	&m1635_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m1459_MI;
extern MethodInfo m1460_MI;
extern MethodInfo m1461_MI;
extern MethodInfo m1631_MI;
extern MethodInfo m1632_MI;
static MethodInfo* t161_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m1459_MI,
	&m1460_MI,
	&m1461_MI,
	&m1631_MI,
	&m1632_MI,
};
extern TypeInfo t327_TI;
static Il2CppInterfaceOffsetPair t161_IOs[] = 
{
	{ &t327_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t161_0_0_0;
extern Il2CppType t161_1_0_0;
extern TypeInfo t574_TI;
struct t161;
extern TypeInfo t161_TI;
TypeInfo t161_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent", "UnityEngine.Events", t161_MIs, NULL, t161_FIs, NULL, &t574_TI, NULL, NULL, &t161_TI, NULL, t161_VT, &EmptyCustomAttributesCache, &t161_TI, &t161_0_0_0, &t161_1_0_0, t161_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t161), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 8, 0, 1};
#include "t579.h"
extern Il2CppGenericContainer t579_IGC;
extern TypeInfo t579_gp_T0_0_TI;
Il2CppGenericParamFull t579_gp_T0_0_TI_GenericParamFull = { { &t579_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* t579_IGPA[1] = 
{
	&t579_gp_T0_0_TI_GenericParamFull,
};
extern TypeInfo t579_TI;
Il2CppGenericContainer t579_IGC = { { NULL, NULL }, NULL, &t579_TI, 1, 0, t579_IGPA };
extern TypeInfo t579_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3125_MI = 
{
	".ctor", NULL, &t579_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1215, NULL, (methodPointerType)NULL};
extern Il2CppType t659_0_0_0;
static ParameterInfo t579_m3126_ParameterInfos[] = 
{
	{"call", 0, 134219000, &EmptyCustomAttributesCache, &t659_0_0_0},
};
extern TypeInfo t579_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3126_MI = 
{
	"AddListener", NULL, &t579_TI, &t30_0_0_0, NULL, t579_m3126_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1216, NULL, (methodPointerType)NULL};
extern Il2CppType t659_0_0_0;
static ParameterInfo t579_m3127_ParameterInfos[] = 
{
	{"call", 0, 134219001, &EmptyCustomAttributesCache, &t659_0_0_0},
};
extern TypeInfo t579_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3127_MI = 
{
	"RemoveListener", NULL, &t579_TI, &t30_0_0_0, NULL, t579_m3127_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1217, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t579_m3128_ParameterInfos[] = 
{
	{"name", 0, 134219002, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"targetObj", 1, 134219003, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t579_TI;
extern Il2CppType t565_0_0_0;
MethodInfo m3128_MI = 
{
	"FindMethod_Impl", NULL, &t579_TI, &t565_0_0_0, NULL, t579_m3128_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1218, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t579_m3129_ParameterInfos[] = 
{
	{"target", 0, 134219004, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134219005, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t579_TI;
extern Il2CppType t564_0_0_0;
MethodInfo m3129_MI = 
{
	"GetDelegate", NULL, &t579_TI, &t564_0_0_0, NULL, t579_m3129_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1219, NULL, (methodPointerType)NULL};
extern Il2CppType t659_0_0_0;
static ParameterInfo t579_m3130_ParameterInfos[] = 
{
	{"action", 0, 134219006, &EmptyCustomAttributesCache, &t659_0_0_0},
};
extern TypeInfo t579_TI;
extern Il2CppType t564_0_0_0;
MethodInfo m3130_MI = 
{
	"GetDelegate", NULL, &t579_TI, &t564_0_0_0, NULL, t579_m3130_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1220, NULL, (methodPointerType)NULL};
extern Il2CppType t579_gp_0_0_0_0;
static ParameterInfo t579_m3131_ParameterInfos[] = 
{
	{"arg0", 0, 134219007, &EmptyCustomAttributesCache, &t579_gp_0_0_0_0},
};
extern TypeInfo t579_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3131_MI = 
{
	"Invoke", NULL, &t579_TI, &t30_0_0_0, NULL, t579_m3131_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1221, NULL, (methodPointerType)NULL};
static MethodInfo* t579_MIs[] =
{
	&m3125_MI,
	&m3126_MI,
	&m3127_MI,
	&m3128_MI,
	&m3129_MI,
	&m3130_MI,
	&m3131_MI,
	NULL
};
extern Il2CppType t333_0_0_33;
FieldInfo t579_f4_FieldInfo = 
{
	"m_InvokeArray", &t333_0_0_33, &t579_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t579_FIs[] =
{
	&t579_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t579_0_0_0;
extern Il2CppType t579_1_0_0;
struct t579;
extern TypeInfo t579_TI;
TypeInfo t579_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`1", "UnityEngine.Events", t579_MIs, NULL, t579_FIs, NULL, NULL, NULL, NULL, &t579_TI, NULL, NULL, NULL, NULL, &t579_0_0_0, &t579_1_0_0, NULL, NULL, &t579_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 7, 0, 1, 0, 0, 0, 0, 0};
#include "t580.h"
extern Il2CppGenericContainer t580_IGC;
extern TypeInfo t580_gp_T0_0_TI;
Il2CppGenericParamFull t580_gp_T0_0_TI_GenericParamFull = { { &t580_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t580_gp_T1_1_TI;
Il2CppGenericParamFull t580_gp_T1_1_TI_GenericParamFull = { { &t580_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* t580_IGPA[2] = 
{
	&t580_gp_T0_0_TI_GenericParamFull,
	&t580_gp_T1_1_TI_GenericParamFull,
};
extern TypeInfo t580_TI;
Il2CppGenericContainer t580_IGC = { { NULL, NULL }, NULL, &t580_TI, 2, 0, t580_IGPA };
extern TypeInfo t580_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3132_MI = 
{
	".ctor", NULL, &t580_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1222, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t580_m3133_ParameterInfos[] = 
{
	{"name", 0, 134219008, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"targetObj", 1, 134219009, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t580_TI;
extern Il2CppType t565_0_0_0;
MethodInfo m3133_MI = 
{
	"FindMethod_Impl", NULL, &t580_TI, &t565_0_0_0, NULL, t580_m3133_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1223, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t580_m3134_ParameterInfos[] = 
{
	{"target", 0, 134219010, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134219011, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t580_TI;
extern Il2CppType t564_0_0_0;
MethodInfo m3134_MI = 
{
	"GetDelegate", NULL, &t580_TI, &t564_0_0_0, NULL, t580_m3134_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1224, NULL, (methodPointerType)NULL};
static MethodInfo* t580_MIs[] =
{
	&m3132_MI,
	&m3133_MI,
	&m3134_MI,
	NULL
};
extern Il2CppType t333_0_0_33;
FieldInfo t580_f4_FieldInfo = 
{
	"m_InvokeArray", &t333_0_0_33, &t580_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t580_FIs[] =
{
	&t580_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t580_0_0_0;
extern Il2CppType t580_1_0_0;
struct t580;
extern TypeInfo t580_TI;
TypeInfo t580_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`2", "UnityEngine.Events", t580_MIs, NULL, t580_FIs, NULL, NULL, NULL, NULL, &t580_TI, NULL, NULL, NULL, NULL, &t580_0_0_0, &t580_1_0_0, NULL, NULL, &t580_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t581.h"
extern Il2CppGenericContainer t581_IGC;
extern TypeInfo t581_gp_T0_0_TI;
Il2CppGenericParamFull t581_gp_T0_0_TI_GenericParamFull = { { &t581_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t581_gp_T1_1_TI;
Il2CppGenericParamFull t581_gp_T1_1_TI_GenericParamFull = { { &t581_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t581_gp_T2_2_TI;
Il2CppGenericParamFull t581_gp_T2_2_TI_GenericParamFull = { { &t581_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* t581_IGPA[3] = 
{
	&t581_gp_T0_0_TI_GenericParamFull,
	&t581_gp_T1_1_TI_GenericParamFull,
	&t581_gp_T2_2_TI_GenericParamFull,
};
extern TypeInfo t581_TI;
Il2CppGenericContainer t581_IGC = { { NULL, NULL }, NULL, &t581_TI, 3, 0, t581_IGPA };
extern TypeInfo t581_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3135_MI = 
{
	".ctor", NULL, &t581_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1225, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t581_m3136_ParameterInfos[] = 
{
	{"name", 0, 134219012, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"targetObj", 1, 134219013, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t581_TI;
extern Il2CppType t565_0_0_0;
MethodInfo m3136_MI = 
{
	"FindMethod_Impl", NULL, &t581_TI, &t565_0_0_0, NULL, t581_m3136_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1226, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t581_m3137_ParameterInfos[] = 
{
	{"target", 0, 134219014, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134219015, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t581_TI;
extern Il2CppType t564_0_0_0;
MethodInfo m3137_MI = 
{
	"GetDelegate", NULL, &t581_TI, &t564_0_0_0, NULL, t581_m3137_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1227, NULL, (methodPointerType)NULL};
static MethodInfo* t581_MIs[] =
{
	&m3135_MI,
	&m3136_MI,
	&m3137_MI,
	NULL
};
extern Il2CppType t333_0_0_33;
FieldInfo t581_f4_FieldInfo = 
{
	"m_InvokeArray", &t333_0_0_33, &t581_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t581_FIs[] =
{
	&t581_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t581_0_0_0;
extern Il2CppType t581_1_0_0;
struct t581;
extern TypeInfo t581_TI;
TypeInfo t581_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`3", "UnityEngine.Events", t581_MIs, NULL, t581_FIs, NULL, NULL, NULL, NULL, &t581_TI, NULL, NULL, NULL, NULL, &t581_0_0_0, &t581_1_0_0, NULL, NULL, &t581_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t582.h"
extern Il2CppGenericContainer t582_IGC;
extern TypeInfo t582_gp_T0_0_TI;
Il2CppGenericParamFull t582_gp_T0_0_TI_GenericParamFull = { { &t582_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t582_gp_T1_1_TI;
Il2CppGenericParamFull t582_gp_T1_1_TI_GenericParamFull = { { &t582_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t582_gp_T2_2_TI;
Il2CppGenericParamFull t582_gp_T2_2_TI_GenericParamFull = { { &t582_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t582_gp_T3_3_TI;
Il2CppGenericParamFull t582_gp_T3_3_TI_GenericParamFull = { { &t582_IGC, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* t582_IGPA[4] = 
{
	&t582_gp_T0_0_TI_GenericParamFull,
	&t582_gp_T1_1_TI_GenericParamFull,
	&t582_gp_T2_2_TI_GenericParamFull,
	&t582_gp_T3_3_TI_GenericParamFull,
};
extern TypeInfo t582_TI;
Il2CppGenericContainer t582_IGC = { { NULL, NULL }, NULL, &t582_TI, 4, 0, t582_IGPA };
extern TypeInfo t582_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3138_MI = 
{
	".ctor", NULL, &t582_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1228, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t582_m3139_ParameterInfos[] = 
{
	{"name", 0, 134219016, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"targetObj", 1, 134219017, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t582_TI;
extern Il2CppType t565_0_0_0;
MethodInfo m3139_MI = 
{
	"FindMethod_Impl", NULL, &t582_TI, &t565_0_0_0, NULL, t582_m3139_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 6, 2, false, false, 1229, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t582_m3140_ParameterInfos[] = 
{
	{"target", 0, 134219018, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134219019, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t582_TI;
extern Il2CppType t564_0_0_0;
MethodInfo m3140_MI = 
{
	"GetDelegate", NULL, &t582_TI, &t564_0_0_0, NULL, t582_m3140_ParameterInfos, &EmptyCustomAttributesCache, 195, 0, 7, 2, false, false, 1230, NULL, (methodPointerType)NULL};
static MethodInfo* t582_MIs[] =
{
	&m3138_MI,
	&m3139_MI,
	&m3140_MI,
	NULL
};
extern Il2CppType t333_0_0_33;
FieldInfo t582_f4_FieldInfo = 
{
	"m_InvokeArray", &t333_0_0_33, &t582_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t582_FIs[] =
{
	&t582_f4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t582_0_0_0;
extern Il2CppType t582_1_0_0;
struct t582;
extern TypeInfo t582_TI;
TypeInfo t582_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEvent`4", "UnityEngine.Events", t582_MIs, NULL, t582_FIs, NULL, NULL, NULL, NULL, &t582_TI, NULL, NULL, NULL, NULL, &t582_0_0_0, &t582_1_0_0, NULL, NULL, &t582_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t583.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t583_TI;
#include "t583MD.h"

#include "t3MD.h"
extern MethodInfo m86_MI;


extern MethodInfo m2946_MI;
 void m2946 (t583 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m2947_MI;
 void m2947 (t583 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2948_MI;
 void m2948 (t583 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2949_MI;
 void m2949 (t583 * __this, int32_t p0, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition UnityEngine.UserAuthorizationDialog
extern TypeInfo t583_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2946_MI = 
{
	".ctor", (methodPointerType)&m2946, &t583_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1231, NULL, (methodPointerType)NULL};
extern TypeInfo t583_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2947_MI = 
{
	"Start", (methodPointerType)&m2947, &t583_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1232, NULL, (methodPointerType)NULL};
extern TypeInfo t583_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2948_MI = 
{
	"OnGUI", (methodPointerType)&m2948, &t583_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1233, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t583_m2949_ParameterInfos[] = 
{
	{"windowID", 0, 134219020, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t583_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2949_MI = 
{
	"DoUserAuthorizationDialog", (methodPointerType)&m2949, &t583_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t583_m2949_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 1234, NULL, (methodPointerType)NULL};
static MethodInfo* t583_MIs[] =
{
	&m2946_MI,
	&m2947_MI,
	&m2948_MI,
	&m2949_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t583_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t324_TI;
#include "t324.h"
#include "t324MD.h"
extern MethodInfo m1455_MI;
void t583_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t324 * tmp;
		tmp = (t324 *)il2cpp_codegen_object_new (&t324_TI);
		m1455(tmp, il2cpp_codegen_string_new_wrapper(""), &m1455_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t583__CustomAttributeCache = {
1,
NULL,
&t583_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t583_0_0_0;
extern Il2CppType t583_1_0_0;
extern TypeInfo t3_TI;
struct t583;
extern TypeInfo t583_TI;
extern CustomAttributesCache t583__CustomAttributeCache;
TypeInfo t583_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UserAuthorizationDialog", "UnityEngine", t583_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t583_TI, NULL, t583_VT, &t583__CustomAttributeCache, &t583_TI, &t583_0_0_0, &t583_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t583), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 4, 0, 0};
#include "t584.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t584_TI;
#include "t584MD.h"

#include "t498.h"
extern TypeInfo t584_TI;
extern TypeInfo t28_TI;
extern TypeInfo t31_TI;
extern TypeInfo t498_TI;
extern TypeInfo t47_TI;
#include "t498MD.h"
extern MethodInfo m3007_MI;
extern MethodInfo m2951_MI;
extern MethodInfo m204_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m205_MI;


extern MethodInfo m2950_MI;
 void m2950 (t584 * __this, t18* p0, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2951_MI;
 t28 * m2951 (t584 * __this, MethodInfo* method){
	{
		t28 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2952_MI;
 bool m2952 (t584 * __this, t28 * p0, MethodInfo* method){
	t584 * V_0 = {0};
	{
		V_0 = ((t584 *)IsInst(p0, InitializedTypeInfo(&t584_TI)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		t28 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		t28 * L_1 = m2951(V_0, &m2951_MI);
		return ((((t28 *)L_1) == ((t28 *)NULL))? 1 : 0);
	}

IL_0024:
	{
		t28 * L_2 = (__this->f0);
		t28 * L_3 = m2951(V_0, &m2951_MI);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t28 * >::Invoke(&m204_MI, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m2953_MI;
 int32_t m2953 (t584 * __this, MethodInfo* method){
	{
		t28 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = m3009(__this, &m3009_MI);
		return L_1;
	}

IL_0012:
	{
		t28 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m205_MI, L_2);
		return L_3;
	}
}
// Metadata Definition UnityEngine.Internal.DefaultValueAttribute
extern Il2CppType t28_0_0_1;
FieldInfo t584_f0_FieldInfo = 
{
	"DefaultValue", &t28_0_0_1, &t584_TI, offsetof(t584, f0), &EmptyCustomAttributesCache};
static FieldInfo* t584_FIs[] =
{
	&t584_f0_FieldInfo,
	NULL
};
extern MethodInfo m2951_MI;
static PropertyInfo t584____Value_PropertyInfo = 
{
	&t584_TI, "Value", &m2951_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t584_PIs[] =
{
	&t584____Value_PropertyInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t584_m2950_ParameterInfos[] = 
{
	{"value", 0, 134219021, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t584_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2950_MI = 
{
	".ctor", (methodPointerType)&m2950, &t584_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t584_m2950_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1235, NULL, (methodPointerType)NULL};
extern TypeInfo t584_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2951_MI = 
{
	"get_Value", (methodPointerType)&m2951, &t584_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1236, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t584_m2952_ParameterInfos[] = 
{
	{"obj", 0, 134219022, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t584_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2952_MI = 
{
	"Equals", (methodPointerType)&m2952, &t584_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t584_m2952_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 1237, NULL, (methodPointerType)NULL};
extern TypeInfo t584_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2953_MI = 
{
	"GetHashCode", (methodPointerType)&m2953, &t584_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 1238, NULL, (methodPointerType)NULL};
static MethodInfo* t584_MIs[] =
{
	&m2950_MI,
	&m2951_MI,
	&m2952_MI,
	&m2953_MI,
	NULL
};
extern MethodInfo m2952_MI;
extern MethodInfo m97_MI;
extern MethodInfo m2953_MI;
extern MethodInfo m206_MI;
static MethodInfo* t584_VT[] =
{
	&m2952_MI,
	&m97_MI,
	&m2953_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t584_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
#include "t626.h"
#include "t626MD.h"
extern MethodInfo m3039_MI;
void t584_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 18432, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t584__CustomAttributeCache = {
1,
NULL,
&t584_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t584_0_0_0;
extern Il2CppType t584_1_0_0;
extern TypeInfo t498_TI;
struct t584;
extern TypeInfo t584_TI;
extern CustomAttributesCache t584__CustomAttributeCache;
TypeInfo t584_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DefaultValueAttribute", "UnityEngine.Internal", t584_MIs, t584_PIs, t584_FIs, NULL, &t498_TI, NULL, NULL, &t584_TI, NULL, t584_VT, &t584__CustomAttributeCache, &t584_TI, &t584_0_0_0, &t584_1_0_0, t584_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t584), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 4, 0, 1};
#include "t585.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t585_TI;
#include "t585MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m2954_MI;
 void m2954 (t585 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Internal.ExcludeFromDocsAttribute
extern TypeInfo t585_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2954_MI = 
{
	".ctor", (methodPointerType)&m2954, &t585_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1239, NULL, (methodPointerType)NULL};
static MethodInfo* t585_MIs[] =
{
	&m2954_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t585_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t585_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t585_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 64, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t585__CustomAttributeCache = {
1,
NULL,
&t585_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t585_0_0_0;
extern Il2CppType t585_1_0_0;
extern TypeInfo t498_TI;
struct t585;
extern TypeInfo t585_TI;
extern CustomAttributesCache t585__CustomAttributeCache;
TypeInfo t585_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ExcludeFromDocsAttribute", "UnityEngine.Internal", t585_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t585_TI, NULL, t585_VT, &t585__CustomAttributeCache, &t585_TI, &t585_0_0_0, &t585_1_0_0, t585_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t585), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t325_TI;

extern TypeInfo t325_TI;
extern MethodInfo m3007_MI;


extern MethodInfo m1456_MI;
 void m1456 (t325 * __this, t18* p0, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition UnityEngine.Serialization.FormerlySerializedAsAttribute
extern Il2CppType t18_0_0_1;
FieldInfo t325_f0_FieldInfo = 
{
	"m_oldName", &t18_0_0_1, &t325_TI, offsetof(t325, f0), &EmptyCustomAttributesCache};
static FieldInfo* t325_FIs[] =
{
	&t325_f0_FieldInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t325_m1456_ParameterInfos[] = 
{
	{"oldName", 0, 134219023, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t325_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1456_MI = 
{
	".ctor", (methodPointerType)&m1456, &t325_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t325_m1456_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1240, NULL, (methodPointerType)NULL};
static MethodInfo* t325_MIs[] =
{
	&m1456_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t325_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t325_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t325_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 256, &m3039_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, true, &m3041_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, false, &m3040_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t325__CustomAttributeCache = {
1,
NULL,
&t325_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t325_0_0_0;
extern Il2CppType t325_1_0_0;
extern TypeInfo t498_TI;
struct t325;
extern TypeInfo t325_TI;
extern CustomAttributesCache t325__CustomAttributeCache;
TypeInfo t325_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "FormerlySerializedAsAttribute", "UnityEngine.Serialization", t325_MIs, NULL, t325_FIs, NULL, &t498_TI, NULL, NULL, &t325_TI, NULL, t325_VT, &t325__CustomAttributeCache, &t325_TI, &t325_0_0_0, &t325_1_0_0, t325_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t325), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t586.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t586_TI;
#include "t586MD.h"



// Metadata Definition UnityEngineInternal.TypeInferenceRules
extern Il2CppType t47_0_0_1542;
FieldInfo t586_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t586_TI, offsetof(t586, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_32854;
FieldInfo t586_f2_FieldInfo = 
{
	"TypeReferencedByFirstArgument", &t586_0_0_32854, &t586_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_32854;
FieldInfo t586_f3_FieldInfo = 
{
	"TypeReferencedBySecondArgument", &t586_0_0_32854, &t586_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_32854;
FieldInfo t586_f4_FieldInfo = 
{
	"ArrayOfTypeReferencedByFirstArgument", &t586_0_0_32854, &t586_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t586_0_0_32854;
FieldInfo t586_f5_FieldInfo = 
{
	"TypeOfFirstArgument", &t586_0_0_32854, &t586_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t586_FIs[] =
{
	&t586_f1_FieldInfo,
	&t586_f2_FieldInfo,
	&t586_f3_FieldInfo,
	&t586_f4_FieldInfo,
	&t586_f5_FieldInfo,
	NULL
};
static const int32_t t586_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t586_f2_DefaultValue = 
{
	&t586_f2_FieldInfo, { (char*)&t586_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t586_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t586_f3_DefaultValue = 
{
	&t586_f3_FieldInfo, { (char*)&t586_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t586_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t586_f4_DefaultValue = 
{
	&t586_f4_FieldInfo, { (char*)&t586_f4_DefaultValueData, &t47_0_0_0 }};
static const int32_t t586_f5_DefaultValueData = 3;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t586_f5_DefaultValue = 
{
	&t586_f5_FieldInfo, { (char*)&t586_f5_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t586_FDVs[] = 
{
	&t586_f2_DefaultValue,
	&t586_f3_DefaultValue,
	&t586_f4_DefaultValue,
	&t586_f5_DefaultValue,
	NULL
};
static MethodInfo* t586_MIs[] =
{
	NULL
};
extern MethodInfo m1388_MI;
extern MethodInfo m97_MI;
extern MethodInfo m1389_MI;
extern MethodInfo m1390_MI;
extern MethodInfo m1391_MI;
extern MethodInfo m1392_MI;
extern MethodInfo m1393_MI;
extern MethodInfo m1394_MI;
extern MethodInfo m1395_MI;
extern MethodInfo m1396_MI;
extern MethodInfo m1397_MI;
extern MethodInfo m1398_MI;
extern MethodInfo m1399_MI;
extern MethodInfo m1400_MI;
extern MethodInfo m1401_MI;
extern MethodInfo m1402_MI;
extern MethodInfo m1403_MI;
extern MethodInfo m1404_MI;
extern MethodInfo m1405_MI;
extern MethodInfo m1406_MI;
extern MethodInfo m1407_MI;
extern MethodInfo m1408_MI;
extern MethodInfo m1409_MI;
static MethodInfo* t586_VT[] =
{
	&m1388_MI,
	&m97_MI,
	&m1389_MI,
	&m1390_MI,
	&m1391_MI,
	&m1392_MI,
	&m1393_MI,
	&m1394_MI,
	&m1395_MI,
	&m1396_MI,
	&m1397_MI,
	&m1398_MI,
	&m1399_MI,
	&m1400_MI,
	&m1401_MI,
	&m1402_MI,
	&m1403_MI,
	&m1404_MI,
	&m1405_MI,
	&m1406_MI,
	&m1407_MI,
	&m1408_MI,
	&m1409_MI,
};
extern TypeInfo t314_TI;
extern TypeInfo t315_TI;
extern TypeInfo t316_TI;
static Il2CppInterfaceOffsetPair t586_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t586_0_0_0;
extern Il2CppType t586_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t586_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TypeInferenceRules", "UnityEngineInternal", t586_MIs, NULL, t586_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t586_VT, &EmptyCustomAttributesCache, &t47_TI, &t586_0_0_0, &t586_1_0_0, t586_IOs, NULL, NULL, t586_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t586)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t587.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t587_TI;
#include "t587MD.h"

#include "t72.h"
extern TypeInfo t586_TI;
extern TypeInfo t72_TI;
extern TypeInfo t18_TI;
extern TypeInfo t587_TI;
#include "t72MD.h"
extern MethodInfo m1390_MI;
extern MethodInfo m2956_MI;
extern MethodInfo m3007_MI;


extern MethodInfo m2955_MI;
 void m2955 (t587 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = p0;
		t28 * L_1 = Box(InitializedTypeInfo(&t586_TI), &L_0);
		t18* L_2 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m1390_MI, L_1);
		m2956(__this, L_2, &m2956_MI);
		return;
	}
}
extern MethodInfo m2956_MI;
 void m2956 (t587 * __this, t18* p0, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2957_MI;
 t18* m2957 (t587 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f0);
		return L_0;
	}
}
// Metadata Definition UnityEngineInternal.TypeInferenceRuleAttribute
extern Il2CppType t18_0_0_33;
FieldInfo t587_f0_FieldInfo = 
{
	"_rule", &t18_0_0_33, &t587_TI, offsetof(t587, f0), &EmptyCustomAttributesCache};
static FieldInfo* t587_FIs[] =
{
	&t587_f0_FieldInfo,
	NULL
};
extern Il2CppType t586_0_0_0;
static ParameterInfo t587_m2955_ParameterInfos[] = 
{
	{"rule", 0, 134219024, &EmptyCustomAttributesCache, &t586_0_0_0},
};
extern TypeInfo t587_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2955_MI = 
{
	".ctor", (methodPointerType)&m2955, &t587_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t587_m2955_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1241, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t587_m2956_ParameterInfos[] = 
{
	{"rule", 0, 134219025, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t587_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2956_MI = 
{
	".ctor", (methodPointerType)&m2956, &t587_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t587_m2956_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1242, NULL, (methodPointerType)NULL};
extern TypeInfo t587_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2957_MI = 
{
	"ToString", (methodPointerType)&m2957, &t587_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 1243, NULL, (methodPointerType)NULL};
static MethodInfo* t587_MIs[] =
{
	&m2955_MI,
	&m2956_MI,
	&m2957_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m2957_MI;
static MethodInfo* t587_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m2957_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t587_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t587_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 64, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t587__CustomAttributeCache = {
1,
NULL,
&t587_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t587_0_0_0;
extern Il2CppType t587_1_0_0;
extern TypeInfo t498_TI;
struct t587;
extern TypeInfo t587_TI;
extern CustomAttributesCache t587__CustomAttributeCache;
TypeInfo t587_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TypeInferenceRuleAttribute", "UnityEngineInternal", t587_MIs, NULL, t587_FIs, NULL, &t498_TI, NULL, NULL, &t587_TI, NULL, t587_VT, &t587__CustomAttributeCache, &t587_TI, &t587_0_0_0, &t587_1_0_0, t587_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t587), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 1};
#include "t473.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t473_TI;
#include "t473MD.h"

#include "t588MD.h"
extern MethodInfo m3141_MI;


extern MethodInfo m2958_MI;
 void m2958 (t473 * __this, MethodInfo* method){
	{
		m3141(__this, &m3141_MI);
		return;
	}
}
// Metadata Definition UnityEngineInternal.GenericStack
extern TypeInfo t473_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2958_MI = 
{
	".ctor", (methodPointerType)&m2958, &t473_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1244, NULL, (methodPointerType)NULL};
static MethodInfo* t473_MIs[] =
{
	&m2958_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m3142_MI;
extern MethodInfo m3143_MI;
extern MethodInfo m3144_MI;
extern MethodInfo m3145_MI;
extern MethodInfo m3146_MI;
extern MethodInfo m3143_MI;
extern MethodInfo m3144_MI;
extern MethodInfo m3145_MI;
extern MethodInfo m2973_MI;
extern MethodInfo m3146_MI;
extern MethodInfo m3142_MI;
extern MethodInfo m3147_MI;
extern MethodInfo m3148_MI;
extern MethodInfo m2969_MI;
static MethodInfo* t473_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m3142_MI,
	&m3143_MI,
	&m3144_MI,
	&m3145_MI,
	&m3146_MI,
	&m3143_MI,
	&m3144_MI,
	&m3145_MI,
	&m2973_MI,
	&m3146_MI,
	&m3142_MI,
	&m3147_MI,
	&m3148_MI,
	&m2969_MI,
};
extern TypeInfo t611_TI;
extern TypeInfo t385_TI;
extern TypeInfo t661_TI;
static Il2CppInterfaceOffsetPair t473_IOs[] = 
{
	{ &t611_TI, 4},
	{ &t385_TI, 5},
	{ &t661_TI, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t473_0_0_0;
extern Il2CppType t473_1_0_0;
extern TypeInfo t588_TI;
struct t473;
extern TypeInfo t473_TI;
TypeInfo t473_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GenericStack", "UnityEngineInternal", t473_MIs, NULL, NULL, NULL, &t588_TI, NULL, NULL, &t473_TI, NULL, t473_VT, &EmptyCustomAttributesCache, &t473_TI, &t473_0_0_0, &t473_1_0_0, t473_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t473), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 18, 0, 3};
#include "t186.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t186_TI;
#include "t186MD.h"

#include "t91.h"


extern MethodInfo m1850_MI;
 void m1850 (t186 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m1682_MI;
 void m1682 (t186 * __this, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t28 * __this, MethodInfo* method);
	if (__this->f9)
		m1682((t186 *)__this->f9 , method);
	((FunctionPointerType)__this->f0)(__this->f2, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t186(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m2959_MI;
 t28 * m2959 (t186 * __this, t91 * p0, t28 * p1, MethodInfo* method){
	void *__d_args[1] = {0};
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m2960_MI;
 void m2960 (t186 * __this, t28 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t186_m1850_ParameterInfos[] = 
{
	{"object", 0, 134219026, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134219027, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t186_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m1850_MI = 
{
	".ctor", (methodPointerType)&m1850, &t186_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t186_m1850_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1245, NULL, (methodPointerType)NULL};
extern TypeInfo t186_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1682_MI = 
{
	"Invoke", (methodPointerType)&m1682, &t186_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 1246, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t186_m2959_ParameterInfos[] = 
{
	{"callback", 0, 134219028, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 1, 134219029, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t186_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2959_MI = 
{
	"BeginInvoke", (methodPointerType)&m2959, &t186_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28, t186_m2959_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 1247, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t186_m2960_ParameterInfos[] = 
{
	{"result", 0, 134219030, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t186_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2960_MI = 
{
	"EndInvoke", (methodPointerType)&m2960, &t186_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t186_m2960_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1248, NULL, (methodPointerType)NULL};
static MethodInfo* t186_MIs[] =
{
	&m1850_MI,
	&m1682_MI,
	&m2959_MI,
	&m2960_MI,
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
extern MethodInfo m1682_MI;
extern MethodInfo m2959_MI;
extern MethodInfo m2960_MI;
static MethodInfo* t186_VT[] =
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
	&m1682_MI,
	&m2959_MI,
	&m2960_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t186_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t186_0_0_0;
extern Il2CppType t186_1_0_0;
extern TypeInfo t221_TI;
struct t186;
extern TypeInfo t186_TI;
TypeInfo t186_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction", "UnityEngine.Events", t186_MIs, NULL, NULL, NULL, &t221_TI, NULL, NULL, &t186_TI, NULL, t186_VT, &EmptyCustomAttributesCache, &t186_TI, &t186_0_0_0, &t186_1_0_0, t186_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t186, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t186), 0, sizeof(methodPointerType), 0, 0, -1, 257, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t589.h"
extern Il2CppGenericContainer t589_IGC;
extern TypeInfo t589_gp_T0_0_TI;
Il2CppGenericParamFull t589_gp_T0_0_TI_GenericParamFull = { { &t589_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* t589_IGPA[1] = 
{
	&t589_gp_T0_0_TI_GenericParamFull,
};
extern TypeInfo t589_TI;
Il2CppGenericContainer t589_IGC = { { NULL, NULL }, NULL, &t589_TI, 1, 0, t589_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t589_m3149_ParameterInfos[] = 
{
	{"object", 0, 134219031, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134219032, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t589_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3149_MI = 
{
	".ctor", NULL, &t589_TI, &t30_0_0_0, NULL, t589_m3149_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1249, NULL, (methodPointerType)NULL};
extern Il2CppType t589_gp_0_0_0_0;
static ParameterInfo t589_m3150_ParameterInfos[] = 
{
	{"arg0", 0, 134219033, &EmptyCustomAttributesCache, &t589_gp_0_0_0_0},
};
extern TypeInfo t589_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3150_MI = 
{
	"Invoke", NULL, &t589_TI, &t30_0_0_0, NULL, t589_m3150_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 1250, NULL, (methodPointerType)NULL};
extern Il2CppType t589_gp_0_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t589_m3151_ParameterInfos[] = 
{
	{"arg0", 0, 134219034, &EmptyCustomAttributesCache, &t589_gp_0_0_0_0},
	{"callback", 1, 134219035, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134219036, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t589_TI;
extern Il2CppType t90_0_0_0;
MethodInfo m3151_MI = 
{
	"BeginInvoke", NULL, &t589_TI, &t90_0_0_0, NULL, t589_m3151_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 1251, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t589_m3152_ParameterInfos[] = 
{
	{"result", 0, 134219037, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t589_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3152_MI = 
{
	"EndInvoke", NULL, &t589_TI, &t30_0_0_0, NULL, t589_m3152_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1252, NULL, (methodPointerType)NULL};
static MethodInfo* t589_MIs[] =
{
	&m3149_MI,
	&m3150_MI,
	&m3151_MI,
	&m3152_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t589_0_0_0;
extern Il2CppType t589_1_0_0;
struct t589;
extern TypeInfo t589_TI;
TypeInfo t589_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`1", "UnityEngine.Events", t589_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t589_TI, NULL, NULL, NULL, NULL, &t589_0_0_0, &t589_1_0_0, NULL, NULL, &t589_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t590.h"
extern Il2CppGenericContainer t590_IGC;
extern TypeInfo t590_gp_T0_0_TI;
Il2CppGenericParamFull t590_gp_T0_0_TI_GenericParamFull = { { &t590_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t590_gp_T1_1_TI;
Il2CppGenericParamFull t590_gp_T1_1_TI_GenericParamFull = { { &t590_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* t590_IGPA[2] = 
{
	&t590_gp_T0_0_TI_GenericParamFull,
	&t590_gp_T1_1_TI_GenericParamFull,
};
extern TypeInfo t590_TI;
Il2CppGenericContainer t590_IGC = { { NULL, NULL }, NULL, &t590_TI, 2, 0, t590_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t590_m3153_ParameterInfos[] = 
{
	{"object", 0, 134219038, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134219039, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t590_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3153_MI = 
{
	".ctor", NULL, &t590_TI, &t30_0_0_0, NULL, t590_m3153_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1253, NULL, (methodPointerType)NULL};
extern Il2CppType t590_gp_0_0_0_0;
extern Il2CppType t590_gp_1_0_0_0;
static ParameterInfo t590_m3154_ParameterInfos[] = 
{
	{"arg0", 0, 134219040, &EmptyCustomAttributesCache, &t590_gp_0_0_0_0},
	{"arg1", 1, 134219041, &EmptyCustomAttributesCache, &t590_gp_1_0_0_0},
};
extern TypeInfo t590_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3154_MI = 
{
	"Invoke", NULL, &t590_TI, &t30_0_0_0, NULL, t590_m3154_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, false, 1254, NULL, (methodPointerType)NULL};
extern Il2CppType t590_gp_0_0_0_0;
extern Il2CppType t590_gp_1_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t590_m3155_ParameterInfos[] = 
{
	{"arg0", 0, 134219042, &EmptyCustomAttributesCache, &t590_gp_0_0_0_0},
	{"arg1", 1, 134219043, &EmptyCustomAttributesCache, &t590_gp_1_0_0_0},
	{"callback", 2, 134219044, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 3, 134219045, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t590_TI;
extern Il2CppType t90_0_0_0;
MethodInfo m3155_MI = 
{
	"BeginInvoke", NULL, &t590_TI, &t90_0_0_0, NULL, t590_m3155_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, false, 1255, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t590_m3156_ParameterInfos[] = 
{
	{"result", 0, 134219046, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t590_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3156_MI = 
{
	"EndInvoke", NULL, &t590_TI, &t30_0_0_0, NULL, t590_m3156_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1256, NULL, (methodPointerType)NULL};
static MethodInfo* t590_MIs[] =
{
	&m3153_MI,
	&m3154_MI,
	&m3155_MI,
	&m3156_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t590_0_0_0;
extern Il2CppType t590_1_0_0;
struct t590;
extern TypeInfo t590_TI;
TypeInfo t590_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`2", "UnityEngine.Events", t590_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t590_TI, NULL, NULL, NULL, NULL, &t590_0_0_0, &t590_1_0_0, NULL, NULL, &t590_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t591.h"
extern Il2CppGenericContainer t591_IGC;
extern TypeInfo t591_gp_T0_0_TI;
Il2CppGenericParamFull t591_gp_T0_0_TI_GenericParamFull = { { &t591_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t591_gp_T1_1_TI;
Il2CppGenericParamFull t591_gp_T1_1_TI_GenericParamFull = { { &t591_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t591_gp_T2_2_TI;
Il2CppGenericParamFull t591_gp_T2_2_TI_GenericParamFull = { { &t591_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* t591_IGPA[3] = 
{
	&t591_gp_T0_0_TI_GenericParamFull,
	&t591_gp_T1_1_TI_GenericParamFull,
	&t591_gp_T2_2_TI_GenericParamFull,
};
extern TypeInfo t591_TI;
Il2CppGenericContainer t591_IGC = { { NULL, NULL }, NULL, &t591_TI, 3, 0, t591_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t591_m3157_ParameterInfos[] = 
{
	{"object", 0, 134219047, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134219048, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t591_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3157_MI = 
{
	".ctor", NULL, &t591_TI, &t30_0_0_0, NULL, t591_m3157_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1257, NULL, (methodPointerType)NULL};
extern Il2CppType t591_gp_0_0_0_0;
extern Il2CppType t591_gp_1_0_0_0;
extern Il2CppType t591_gp_2_0_0_0;
static ParameterInfo t591_m3158_ParameterInfos[] = 
{
	{"arg0", 0, 134219049, &EmptyCustomAttributesCache, &t591_gp_0_0_0_0},
	{"arg1", 1, 134219050, &EmptyCustomAttributesCache, &t591_gp_1_0_0_0},
	{"arg2", 2, 134219051, &EmptyCustomAttributesCache, &t591_gp_2_0_0_0},
};
extern TypeInfo t591_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3158_MI = 
{
	"Invoke", NULL, &t591_TI, &t30_0_0_0, NULL, t591_m3158_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 3, false, false, 1258, NULL, (methodPointerType)NULL};
extern Il2CppType t591_gp_0_0_0_0;
extern Il2CppType t591_gp_1_0_0_0;
extern Il2CppType t591_gp_2_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t591_m3159_ParameterInfos[] = 
{
	{"arg0", 0, 134219052, &EmptyCustomAttributesCache, &t591_gp_0_0_0_0},
	{"arg1", 1, 134219053, &EmptyCustomAttributesCache, &t591_gp_1_0_0_0},
	{"arg2", 2, 134219054, &EmptyCustomAttributesCache, &t591_gp_2_0_0_0},
	{"callback", 3, 134219055, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 4, 134219056, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t591_TI;
extern Il2CppType t90_0_0_0;
MethodInfo m3159_MI = 
{
	"BeginInvoke", NULL, &t591_TI, &t90_0_0_0, NULL, t591_m3159_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 5, false, false, 1259, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t591_m3160_ParameterInfos[] = 
{
	{"result", 0, 134219057, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t591_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3160_MI = 
{
	"EndInvoke", NULL, &t591_TI, &t30_0_0_0, NULL, t591_m3160_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1260, NULL, (methodPointerType)NULL};
static MethodInfo* t591_MIs[] =
{
	&m3157_MI,
	&m3158_MI,
	&m3159_MI,
	&m3160_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t591_0_0_0;
extern Il2CppType t591_1_0_0;
struct t591;
extern TypeInfo t591_TI;
TypeInfo t591_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`3", "UnityEngine.Events", t591_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t591_TI, NULL, NULL, NULL, NULL, &t591_0_0_0, &t591_1_0_0, NULL, NULL, &t591_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t592.h"
extern Il2CppGenericContainer t592_IGC;
extern TypeInfo t592_gp_T0_0_TI;
Il2CppGenericParamFull t592_gp_T0_0_TI_GenericParamFull = { { &t592_IGC, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo t592_gp_T1_1_TI;
Il2CppGenericParamFull t592_gp_T1_1_TI_GenericParamFull = { { &t592_IGC, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t592_gp_T2_2_TI;
Il2CppGenericParamFull t592_gp_T2_2_TI_GenericParamFull = { { &t592_IGC, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t592_gp_T3_3_TI;
Il2CppGenericParamFull t592_gp_T3_3_TI_GenericParamFull = { { &t592_IGC, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* t592_IGPA[4] = 
{
	&t592_gp_T0_0_TI_GenericParamFull,
	&t592_gp_T1_1_TI_GenericParamFull,
	&t592_gp_T2_2_TI_GenericParamFull,
	&t592_gp_T3_3_TI_GenericParamFull,
};
extern TypeInfo t592_TI;
Il2CppGenericContainer t592_IGC = { { NULL, NULL }, NULL, &t592_TI, 4, 0, t592_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t592_m3161_ParameterInfos[] = 
{
	{"object", 0, 134219058, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134219059, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t592_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3161_MI = 
{
	".ctor", NULL, &t592_TI, &t30_0_0_0, NULL, t592_m3161_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1261, NULL, (methodPointerType)NULL};
extern Il2CppType t592_gp_0_0_0_0;
extern Il2CppType t592_gp_1_0_0_0;
extern Il2CppType t592_gp_2_0_0_0;
extern Il2CppType t592_gp_3_0_0_0;
static ParameterInfo t592_m3162_ParameterInfos[] = 
{
	{"arg0", 0, 134219060, &EmptyCustomAttributesCache, &t592_gp_0_0_0_0},
	{"arg1", 1, 134219061, &EmptyCustomAttributesCache, &t592_gp_1_0_0_0},
	{"arg2", 2, 134219062, &EmptyCustomAttributesCache, &t592_gp_2_0_0_0},
	{"arg3", 3, 134219063, &EmptyCustomAttributesCache, &t592_gp_3_0_0_0},
};
extern TypeInfo t592_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3162_MI = 
{
	"Invoke", NULL, &t592_TI, &t30_0_0_0, NULL, t592_m3162_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 4, false, false, 1262, NULL, (methodPointerType)NULL};
extern Il2CppType t592_gp_0_0_0_0;
extern Il2CppType t592_gp_1_0_0_0;
extern Il2CppType t592_gp_2_0_0_0;
extern Il2CppType t592_gp_3_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t592_m3163_ParameterInfos[] = 
{
	{"arg0", 0, 134219064, &EmptyCustomAttributesCache, &t592_gp_0_0_0_0},
	{"arg1", 1, 134219065, &EmptyCustomAttributesCache, &t592_gp_1_0_0_0},
	{"arg2", 2, 134219066, &EmptyCustomAttributesCache, &t592_gp_2_0_0_0},
	{"arg3", 3, 134219067, &EmptyCustomAttributesCache, &t592_gp_3_0_0_0},
	{"callback", 4, 134219068, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 5, 134219069, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t592_TI;
extern Il2CppType t90_0_0_0;
MethodInfo m3163_MI = 
{
	"BeginInvoke", NULL, &t592_TI, &t90_0_0_0, NULL, t592_m3163_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 6, false, false, 1263, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t592_m3164_ParameterInfos[] = 
{
	{"result", 0, 134219070, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t592_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3164_MI = 
{
	"EndInvoke", NULL, &t592_TI, &t30_0_0_0, NULL, t592_m3164_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1264, NULL, (methodPointerType)NULL};
static MethodInfo* t592_MIs[] =
{
	&m3161_MI,
	&m3162_MI,
	&m3163_MI,
	&m3164_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t592_0_0_0;
extern Il2CppType t592_1_0_0;
struct t592;
extern TypeInfo t592_TI;
TypeInfo t592_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityAction`4", "UnityEngine.Events", t592_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t592_TI, NULL, NULL, NULL, NULL, &t592_0_0_0, &t592_1_0_0, NULL, NULL, &t592_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 257, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
