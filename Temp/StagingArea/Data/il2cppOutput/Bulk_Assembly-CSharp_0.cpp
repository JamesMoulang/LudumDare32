#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t29.h"

// Metadata Definition <Module>
static MethodInfo* t0_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t0_0_0_0;
extern Il2CppType t0_1_0_0;
struct t0;
extern TypeInfo t0_TI;
TypeInfo t0_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Module>", "", t0_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t0_TI, NULL, NULL, &EmptyCustomAttributesCache, &t0_TI, &t0_0_0_0, &t0_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t0), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t30.h"
#include "t18.h"
#include "t5.h"
#include "t2.h"
#include "t11.h"
#include "t31.h"
#include "t32.h"
#include "t33.h"
extern TypeInfo t1_TI;
extern TypeInfo t34_TI;
extern TypeInfo t11_TI;
#include "t3MD.h"
#include "t5MD.h"
#include "t34MD.h"
#include "t2MD.h"
#include "t35MD.h"
#include "t32MD.h"
#include "t11MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m87_MI;
extern MethodInfo m88_MI;
extern MethodInfo m89_MI;
extern MethodInfo m9_MI;
extern MethodInfo m90_MI;
extern MethodInfo m91_MI;
extern MethodInfo m92_MI;
extern MethodInfo m93_MI;
extern MethodInfo m94_MI;
extern MethodInfo m10_MI;
extern MethodInfo m4_MI;
extern MethodInfo m8_MI;
struct t5;
#include "t36.h"
#include "t37.h"
#include "t35.h"
struct t5;
#include "t28.h"
 t28 * m95_gshared (t5 * __this, MethodInfo* method);
#define m95(__this, method) (t28 *)m95_gshared((t5 *)__this, method)
#define m88(__this, method) (t2 *)m95_gshared((t5 *)__this, method)
extern MethodInfo m88_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m1_MI;
 void m1 (t1 * __this, MethodInfo* method){
	{
		t5 * L_0 = m87(NULL, (t18*) &_stringLiteral1, &m87_MI);
		t2 * L_1 = m88(L_0, &m88_MI);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m2_MI;
 void m2 (t1 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t34_TI));
		bool L_0 = m89(NULL, (t18*) &_stringLiteral2, &m89_MI);
		if (!L_0)
		{
			goto IL_0093;
		}
	}
	{
		t2 * L_1 = (__this->f2);
		bool L_2 = m9(L_1, &m9_MI);
		if (!L_2)
		{
			goto IL_0078;
		}
	}
	{
		t32 * L_3 = m90(__this, &m90_MI);
		t11  L_4 = m91(L_3, &m91_MI);
		t2 * L_5 = (__this->f2);
		t32 * L_6 = m90(L_5, &m90_MI);
		t11  L_7 = m91(L_6, &m91_MI);
		float L_8 = m92(NULL, L_4, L_7, &m92_MI);
		t2 * L_9 = (__this->f2);
		t32 * L_10 = m90(L_9, &m90_MI);
		t11  L_11 = m93(L_10, &m93_MI);
		V_0 = L_11;
		float L_12 = ((&V_0)->f1);
		if ((((float)L_8) >= ((float)((float)(L_12*(1.5f))))))
		{
			goto IL_0073;
		}
	}
	{
		t2 * L_13 = (__this->f2);
		t5 * L_14 = m94(__this, &m94_MI);
		m10(L_13, L_14, &m10_MI);
	}

IL_0073:
	{
		goto IL_0093;
	}

IL_0078:
	{
		t2 * L_15 = (__this->f2);
		bool L_16 = m4(L_15, &m4_MI);
		if (L_16)
		{
			goto IL_0093;
		}
	}
	{
		t2 * L_17 = (__this->f2);
		m8(L_17, &m8_MI);
	}

IL_0093:
	{
		return;
	}
}
// Metadata Definition BoulderFirer
extern Il2CppType t2_0_0_1;
FieldInfo t1_f2_FieldInfo = 
{
	"roll", &t2_0_0_1, &t1_TI, offsetof(t1, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1_FIs[] =
{
	&t1_f2_FieldInfo,
	NULL
};
extern TypeInfo t1_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	"Start", (methodPointerType)&m1, &t1_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 2, NULL, (methodPointerType)NULL};
extern TypeInfo t1_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	"Update", (methodPointerType)&m2, &t1_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3, NULL, (methodPointerType)NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	&m1_MI,
	&m2_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t1_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_1_0_0;
extern TypeInfo t3_TI;
struct t1;
extern TypeInfo t1_TI;
TypeInfo t1_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "BoulderFirer", "", t1_MIs, NULL, t1_FIs, NULL, &t3_TI, NULL, NULL, &t1_TI, NULL, t1_VT, &EmptyCustomAttributesCache, &t1_TI, &t1_0_0_0, &t1_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2_TI;

#include "t8.h"
#include "t38.h"
#include "t7.h"
#include "t4.h"
#include "t6.h"
#include "t39.h"
#include "t20.h"
#include "t9.h"
#include "t40.h"
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo t2_TI;
extern TypeInfo t11_TI;
extern TypeInfo t18_TI;
#include "t38MD.h"
#include "t4MD.h"
#include "t41MD.h"
#include "t8MD.h"
#include "t20MD.h"
#include "t39MD.h"
#include "t9MD.h"
#include "t18MD.h"
#include "t40MD.h"
#include "t7MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m100_MI;
extern MethodInfo m101_MI;
extern MethodInfo m102_MI;
extern MethodInfo m103_MI;
extern MethodInfo m90_MI;
extern MethodInfo m104_MI;
extern MethodInfo m105_MI;
extern MethodInfo m106_MI;
extern MethodInfo m107_MI;
extern MethodInfo m108_MI;
extern MethodInfo m91_MI;
extern MethodInfo m93_MI;
extern MethodInfo m109_MI;
extern MethodInfo m110_MI;
extern MethodInfo m111_MI;
extern MethodInfo m112_MI;
extern MethodInfo m113_MI;
extern MethodInfo m114_MI;
extern MethodInfo m115_MI;
extern MethodInfo m116_MI;
extern MethodInfo m117_MI;
extern MethodInfo m118_MI;
extern MethodInfo m119_MI;
extern MethodInfo m120_MI;
extern MethodInfo m121_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m124_MI;
extern MethodInfo m125_MI;
extern MethodInfo m126_MI;
extern MethodInfo m127_MI;
extern MethodInfo m128_MI;
extern MethodInfo m129_MI;
extern MethodInfo m130_MI;
extern MethodInfo m131_MI;
extern MethodInfo m132_MI;
extern MethodInfo m133_MI;
extern MethodInfo m22_MI;
struct t35;
struct t35;
 t28 * m134_gshared (t35 * __this, MethodInfo* method);
#define m134(__this, method) (t28 *)m134_gshared((t35 *)__this, method)
#define m100(__this, method) (t8 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m100_MI;
struct t35;
#define m102(__this, method) (t7 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m102_MI;
struct t35;
#define m103(__this, method) (t4 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m103_MI;
struct t35;
#define m107(__this, method) (t6 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m107_MI;


extern MethodInfo m3_MI;
 void m3 (t2 * __this, MethodInfo* method){
	{
		__this->f8 = 1;
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m4_MI;
 bool m4 (t2 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m5_MI;
 void m5 (t2 * __this, MethodInfo* method){
	{
		t8 * L_0 = m100(__this, &m100_MI);
		__this->f13 = L_0;
		t38 * L_1 = m101(NULL, &m101_MI);
		t7 * L_2 = m102(L_1, &m102_MI);
		__this->f11 = L_2;
		t4 * L_3 = m103(__this, &m103_MI);
		__this->f6 = L_3;
		__this->f7 = (0.0f);
		t32 * L_4 = m90(__this, &m90_MI);
		t11  L_5 = m104(NULL, &m104_MI);
		t11  L_6 = m105(NULL, L_5, (5.0f), &m105_MI);
		m106(L_4, L_6, &m106_MI);
		t6 * L_7 = m107(__this, &m107_MI);
		__this->f10 = L_7;
		return;
	}
}
extern MethodInfo m6_MI;
 void m6 (t2 * __this, float p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
extern MethodInfo m7_MI;
 float m7 (t2 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8_MI;
 void m8 (t2 * __this, MethodInfo* method){
	t11  V_0 = {0};
	t11  V_1 = {0};
	{
		__this->f7 = (25.0f);
		t32 * L_0 = m90(__this, &m90_MI);
		t5 * L_1 = (__this->f9);
		t32 * L_2 = m108(L_1, &m108_MI);
		t11  L_3 = m91(L_2, &m91_MI);
		t5 * L_4 = (__this->f9);
		t32 * L_5 = m108(L_4, &m108_MI);
		t11  L_6 = m93(L_5, &m93_MI);
		V_0 = L_6;
		float L_7 = ((&V_0)->f1);
		t32 * L_8 = m90(__this, &m90_MI);
		t11  L_9 = m93(L_8, &m93_MI);
		V_1 = L_9;
		float L_10 = ((&V_1)->f1);
		t5 * L_11 = (__this->f9);
		t32 * L_12 = m108(L_11, &m108_MI);
		t11  L_13 = m109(L_12, &m109_MI);
		t11  L_14 = m110(NULL, ((float)(((float)(((float)(L_7/(2.0f)))+L_10))+(0.5f))), L_13, &m110_MI);
		t11  L_15 = m111(NULL, L_3, L_14, &m111_MI);
		t11  L_16 = m112(NULL, &m112_MI);
		t11  L_17 = m105(NULL, L_16, (0.1f), &m105_MI);
		t11  L_18 = m111(NULL, L_15, L_17, &m111_MI);
		m113(L_0, L_18, &m113_MI);
		__this->f8 = 1;
		return;
	}
}
extern MethodInfo m9_MI;
 bool m9 (t2 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m10_MI;
 void m10 (t2 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f8 = 0;
		__this->f9 = p0;
		return;
	}
}
extern MethodInfo m11_MI;
 void m11 (t2 * __this, MethodInfo* method){
	t11  V_0 = {0};
	t11  V_1 = {0};
	t11  V_2 = {0};
	t11  V_3 = {0};
	t11  V_4 = {0};
	t11  V_5 = {0};
	{
		bool L_0 = (__this->f8);
		if (!L_0)
		{
			goto IL_00b7;
		}
	}
	{
		t4 * L_1 = (__this->f6);
		m114(L_1, 1, &m114_MI);
		float L_2 = (__this->f7);
		float L_3 = m115(NULL, &m115_MI);
		if ((((float)((float)(L_2-((float)((0.5f)*L_3))))) > ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		__this->f7 = (0.0f);
		goto IL_005b;
	}

IL_0043:
	{
		float L_4 = (__this->f7);
		float L_5 = m115(NULL, &m115_MI);
		__this->f7 = ((float)(L_4-((float)((0.5f)*L_5))));
	}

IL_005b:
	{
		t4 * L_6 = (__this->f6);
		t32 * L_7 = m90(__this, &m90_MI);
		t11  L_8 = m109(L_7, &m109_MI);
		V_1 = L_8;
		float L_9 = ((&V_1)->f1);
		float L_10 = (__this->f7);
		t4 * L_11 = (__this->f6);
		t11  L_12 = m116(L_11, &m116_MI);
		V_2 = L_12;
		float L_13 = ((&V_2)->f2);
		t32 * L_14 = m90(__this, &m90_MI);
		t11  L_15 = m109(L_14, &m109_MI);
		V_3 = L_15;
		float L_16 = ((&V_3)->f3);
		float L_17 = (__this->f7);
		t11  L_18 = {0};
		m117(&L_18, ((float)(L_9*L_10)), L_13, ((float)(L_16*L_17)), &m117_MI);
		m118(L_6, L_18, &m118_MI);
		goto IL_0149;
	}

IL_00b7:
	{
		t4 * L_19 = (__this->f6);
		m114(L_19, 0, &m114_MI);
		__this->f7 = (0.0f);
		t5 * L_20 = (__this->f9);
		t32 * L_21 = m108(L_20, &m108_MI);
		t11  L_22 = m91(L_21, &m91_MI);
		t11  L_23 = m112(NULL, &m112_MI);
		t5 * L_24 = (__this->f9);
		t32 * L_25 = m108(L_24, &m108_MI);
		t11  L_26 = m93(L_25, &m93_MI);
		V_4 = L_26;
		float L_27 = ((&V_4)->f2);
		t32 * L_28 = m90(__this, &m90_MI);
		t11  L_29 = m93(L_28, &m93_MI);
		V_5 = L_29;
		float L_30 = ((&V_5)->f2);
		t11  L_31 = m105(NULL, L_23, ((float)(L_27+((float)(L_30/(2.0f))))), &m105_MI);
		t11  L_32 = m111(NULL, L_22, L_31, &m111_MI);
		V_0 = L_32;
		t4 * L_33 = (__this->f6);
		m119(L_33, V_0, &m119_MI);
		t32 * L_34 = m90(__this, &m90_MI);
		t5 * L_35 = (__this->f9);
		t32 * L_36 = m108(L_35, &m108_MI);
		t11  L_37 = m109(L_36, &m109_MI);
		m120(L_34, L_37, &m120_MI);
	}

IL_0149:
	{
		float L_38 = (__this->f7);
		if ((((float)L_38) <= ((float)(5.0f))))
		{
			goto IL_0173;
		}
	}
	{
		t8 * L_39 = (__this->f13);
		t39 * L_40 = m121(L_39, &m121_MI);
		t20  L_41 = m122(NULL, &m122_MI);
		m123(L_40, L_41, &m123_MI);
		goto IL_0188;
	}

IL_0173:
	{
		t8 * L_42 = (__this->f13);
		t39 * L_43 = m121(L_42, &m121_MI);
		t20  L_44 = m124(NULL, &m124_MI);
		m123(L_43, L_44, &m123_MI);
	}

IL_0188:
	{
		__this->f12 = 0;
		return;
	}
}
extern MethodInfo m12_MI;
 void m12 (t2 * __this, t9 * p0, MethodInfo* method){
	{
		__this->f14 = 0;
		return;
	}
}
extern MethodInfo m13_MI;
 void m13 (t2 * __this, t9 * p0, MethodInfo* method){
	{
		t5 * L_0 = m125(p0, &m125_MI);
		t18* L_1 = m126(L_0, &m126_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_2 = m127(NULL, L_1, (t18*) &_stringLiteral3, &m127_MI);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		__this->f14 = 1;
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m14_MI;
 void m14 (t2 * __this, t9 * p0, MethodInfo* method){
	t40  V_0 = {0};
	t11  V_1 = {0};
	t11  V_2 = {0};
	t11  V_3 = {0};
	t11  V_4 = {0};
	t11  V_5 = {0};
	{
		t5 * L_0 = m125(p0, &m125_MI);
		t18* L_1 = m126(L_0, &m126_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_2 = m127(NULL, L_1, (t18*) &_stringLiteral3, &m127_MI);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		__this->f14 = 1;
	}

IL_0021:
	{
		t5 * L_3 = m125(p0, &m125_MI);
		t18* L_4 = m126(L_3, &m126_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_5 = m128(NULL, L_4, (t18*) &_stringLiteral4, &m128_MI);
		if (!L_5)
		{
			goto IL_00f6;
		}
	}
	{
		bool L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_0047:
	{
		__this->f12 = 1;
		t42* L_7 = m129(p0, &m129_MI);
		V_0 = (*(t40 *)((t40 *)(t40 *)SZArrayLdElema(L_7, 0)));
		t11  L_8 = m130((&V_0), &m130_MI);
		V_1 = L_8;
		t32 * L_9 = m90(__this, &m90_MI);
		t11  L_10 = m109(L_9, &m109_MI);
		V_4 = L_10;
		t11  L_11 = m131((&V_4), &m131_MI);
		t11  L_12 = m131((&V_1), &m131_MI);
		float L_13 = m132(NULL, L_11, L_12, &m132_MI);
		t11  L_14 = m131((&V_1), &m131_MI);
		t11  L_15 = m110(NULL, L_13, L_14, &m110_MI);
		V_2 = L_15;
		t32 * L_16 = m90(__this, &m90_MI);
		t11  L_17 = m109(L_16, &m109_MI);
		V_5 = L_17;
		t11  L_18 = m131((&V_5), &m131_MI);
		t11  L_19 = m133(NULL, L_18, V_2, &m133_MI);
		V_3 = L_19;
		float L_20 = (__this->f7);
		__this->f7 = ((float)(L_20*(0.9f)));
		t32 * L_21 = m90(__this, &m90_MI);
		t11  L_22 = m133(NULL, V_3, V_2, &m133_MI);
		m120(L_21, L_22, &m120_MI);
		t7 * L_23 = (__this->f11);
		t32 * L_24 = m90(__this, &m90_MI);
		t11  L_25 = m109(L_24, &m109_MI);
		float L_26 = (__this->f7);
		m22(L_23, L_25, ((float)(L_26/(25.0f))), &m22_MI);
	}

IL_00f6:
	{
		return;
	}
}
// Metadata Definition BoulderRoll
extern Il2CppType t33_0_0_32849;
FieldInfo t2_f2_FieldInfo = 
{
	"growSpeed", &t33_0_0_32849, &t2_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t2_f3_FieldInfo = 
{
	"maxSize", &t33_0_0_32849, &t2_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t2_f4_FieldInfo = 
{
	"deceleration", &t33_0_0_32849, &t2_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t2_f5_FieldInfo = 
{
	"fireSpeed", &t33_0_0_32849, &t2_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t2_f6_FieldInfo = 
{
	"rigidbody", &t4_0_0_1, &t2_TI, offsetof(t2, f6), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t2_f7_FieldInfo = 
{
	"speed", &t33_0_0_1, &t2_TI, offsetof(t2, f7), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t2_f8_FieldInfo = 
{
	"fired", &t31_0_0_1, &t2_TI, offsetof(t2, f8), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t2_f9_FieldInfo = 
{
	"owner", &t5_0_0_1, &t2_TI, offsetof(t2, f9), &EmptyCustomAttributesCache};
extern Il2CppType t6_0_0_1;
FieldInfo t2_f10_FieldInfo = 
{
	"collider", &t6_0_0_1, &t2_TI, offsetof(t2, f10), &EmptyCustomAttributesCache};
extern Il2CppType t7_0_0_1;
FieldInfo t2_f11_FieldInfo = 
{
	"camScript", &t7_0_0_1, &t2_TI, offsetof(t2, f11), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t2_f12_FieldInfo = 
{
	"isColliding", &t31_0_0_1, &t2_TI, offsetof(t2, f12), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_1;
FieldInfo t2_f13_FieldInfo = 
{
	"renderer", &t8_0_0_1, &t2_TI, offsetof(t2, f13), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t2_f14_FieldInfo = 
{
	"colliding", &t31_0_0_1, &t2_TI, offsetof(t2, f14), &EmptyCustomAttributesCache};
static FieldInfo* t2_FIs[] =
{
	&t2_f2_FieldInfo,
	&t2_f3_FieldInfo,
	&t2_f4_FieldInfo,
	&t2_f5_FieldInfo,
	&t2_f6_FieldInfo,
	&t2_f7_FieldInfo,
	&t2_f8_FieldInfo,
	&t2_f9_FieldInfo,
	&t2_f10_FieldInfo,
	&t2_f11_FieldInfo,
	&t2_f12_FieldInfo,
	&t2_f13_FieldInfo,
	&t2_f14_FieldInfo,
	NULL
};
static const float t2_f2_DefaultValueData = 20.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t2_f2_DefaultValue = 
{
	&t2_f2_FieldInfo, { (char*)&t2_f2_DefaultValueData, &t33_0_0_0 }};
static const float t2_f3_DefaultValueData = 5.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t2_f3_DefaultValue = 
{
	&t2_f3_FieldInfo, { (char*)&t2_f3_DefaultValueData, &t33_0_0_0 }};
static const float t2_f4_DefaultValueData = 0.5f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t2_f4_DefaultValue = 
{
	&t2_f4_FieldInfo, { (char*)&t2_f4_DefaultValueData, &t33_0_0_0 }};
static const float t2_f5_DefaultValueData = 25.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t2_f5_DefaultValue = 
{
	&t2_f5_FieldInfo, { (char*)&t2_f5_DefaultValueData, &t33_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t2_FDVs[] = 
{
	&t2_f2_DefaultValue,
	&t2_f3_DefaultValue,
	&t2_f4_DefaultValue,
	&t2_f5_DefaultValue,
	NULL
};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	".ctor", (methodPointerType)&m3, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 4, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m4_MI = 
{
	"IsColliding", (methodPointerType)&m4, &t2_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 5, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m5_MI = 
{
	"Start", (methodPointerType)&m5, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 6, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t2_m6_ParameterInfos[] = 
{
	{"s", 0, 134217729, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m6_MI = 
{
	"SetSpeed", (methodPointerType)&m6, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t2_m6_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 7, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m7_MI = 
{
	"GetSpeed", (methodPointerType)&m7, &t2_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 8, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	"Fire", (methodPointerType)&m8, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 9, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m9_MI = 
{
	"IsFired", (methodPointerType)&m9, &t2_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 10, NULL, (methodPointerType)NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t2_m10_ParameterInfos[] = 
{
	{"g", 0, 134217730, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m10_MI = 
{
	"Pickup", (methodPointerType)&m10, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2_m10_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 11, NULL, (methodPointerType)NULL};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	"Update", (methodPointerType)&m11, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 12, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2_m12_ParameterInfos[] = 
{
	{"c", 0, 134217731, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	"OnCollisionExit", (methodPointerType)&m12, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2_m12_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 13, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2_m13_ParameterInfos[] = 
{
	{"c", 0, 134217732, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	"OnCollisionStay", (methodPointerType)&m13, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2_m13_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 14, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t2_m14_ParameterInfos[] = 
{
	{"c", 0, 134217733, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t2_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m14_MI = 
{
	"OnCollisionEnter", (methodPointerType)&m14, &t2_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t2_m14_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 15, NULL, (methodPointerType)NULL};
static MethodInfo* t2_MIs[] =
{
	&m3_MI,
	&m4_MI,
	&m5_MI,
	&m6_MI,
	&m7_MI,
	&m8_MI,
	&m9_MI,
	&m10_MI,
	&m11_MI,
	&m12_MI,
	&m13_MI,
	&m14_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t2_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_1_0_0;
extern TypeInfo t3_TI;
struct t2;
extern TypeInfo t2_TI;
TypeInfo t2_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "BoulderRoll", "", t2_MIs, NULL, t2_FIs, NULL, &t3_TI, NULL, NULL, &t2_TI, NULL, t2_VT, &EmptyCustomAttributesCache, &t2_TI, &t2_0_0_0, &t2_1_0_0, NULL, NULL, NULL, t2_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 12, 0, 13, 0, 0, 4, 0, 0};
#include "t10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t10_TI;
#include "t10MD.h"

#include "t43.h"
extern TypeInfo t10_TI;
#include "t43MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m103_MI;
extern MethodInfo m135_MI;
extern MethodInfo m90_MI;
extern MethodInfo m109_MI;
extern MethodInfo m105_MI;
extern MethodInfo m118_MI;
extern MethodInfo m94_MI;
extern MethodInfo m136_MI;
extern MethodInfo m18_MI;
extern MethodInfo m103_MI;


extern MethodInfo m15_MI;
 void m15 (t10 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m16_MI;
 void m16 (t10 * __this, MethodInfo* method){
	{
		t4 * L_0 = m103(__this, &m103_MI);
		__this->f2 = L_0;
		m135(__this, (t18*) &_stringLiteral5, (5.0f), &m135_MI);
		return;
	}
}
extern MethodInfo m17_MI;
 void m17 (t10 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f2);
		t32 * L_1 = m90(__this, &m90_MI);
		t11  L_2 = m109(L_1, &m109_MI);
		t11  L_3 = m105(NULL, L_2, (10.0f), &m105_MI);
		m118(L_0, L_3, &m118_MI);
		return;
	}
}
extern MethodInfo m18_MI;
 void m18 (t10 * __this, MethodInfo* method){
	{
		t5 * L_0 = m94(__this, &m94_MI);
		m136(NULL, L_0, &m136_MI);
		return;
	}
}
extern MethodInfo m19_MI;
 void m19 (t10 * __this, MethodInfo* method){
	{
		m18(__this, &m18_MI);
		return;
	}
}
// Metadata Definition BulletScript
extern Il2CppType t4_0_0_1;
FieldInfo t10_f2_FieldInfo = 
{
	"r", &t4_0_0_1, &t10_TI, offsetof(t10, f2), &EmptyCustomAttributesCache};
static FieldInfo* t10_FIs[] =
{
	&t10_f2_FieldInfo,
	NULL
};
extern TypeInfo t10_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m15_MI = 
{
	".ctor", (methodPointerType)&m15, &t10_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 16, NULL, (methodPointerType)NULL};
extern TypeInfo t10_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m16_MI = 
{
	"Start", (methodPointerType)&m16, &t10_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 17, NULL, (methodPointerType)NULL};
extern TypeInfo t10_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m17_MI = 
{
	"Update", (methodPointerType)&m17, &t10_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 18, NULL, (methodPointerType)NULL};
extern TypeInfo t10_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m18_MI = 
{
	"Destroy", (methodPointerType)&m18, &t10_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 19, NULL, (methodPointerType)NULL};
extern TypeInfo t10_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m19_MI = 
{
	"OnCollisionEnter", (methodPointerType)&m19, &t10_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 20, NULL, (methodPointerType)NULL};
static MethodInfo* t10_MIs[] =
{
	&m15_MI,
	&m16_MI,
	&m17_MI,
	&m18_MI,
	&m19_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t10_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t10_0_0_0;
extern Il2CppType t10_1_0_0;
extern TypeInfo t3_TI;
struct t10;
extern TypeInfo t10_TI;
TypeInfo t10_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "BulletScript", "", t10_MIs, NULL, t10_FIs, NULL, &t3_TI, NULL, NULL, &t10_TI, NULL, t10_VT, &EmptyCustomAttributesCache, &t10_TI, &t10_0_0_0, &t10_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t10), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t7_TI;

extern TypeInfo t7_TI;
extern TypeInfo t11_TI;
#include "t44MD.h"
extern MethodInfo m137_MI;
extern MethodInfo m86_MI;
extern MethodInfo m105_MI;
extern MethodInfo m133_MI;
extern MethodInfo m138_MI;
extern MethodInfo m108_MI;
extern MethodInfo m91_MI;
extern MethodInfo m117_MI;
extern MethodInfo m111_MI;
extern MethodInfo m90_MI;
extern MethodInfo m139_MI;
extern MethodInfo m92_MI;
extern MethodInfo m140_MI;
extern MethodInfo m113_MI;
extern MethodInfo m141_MI;


extern MethodInfo m20_MI;
 void m20 (t7 * __this, MethodInfo* method){
	{
		t11  L_0 = m137(NULL, &m137_MI);
		__this->f4 = L_0;
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m21_MI;
 void m21 (t7 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m22_MI;
 void m22 (t7 * __this, t11  p0, float p1, MethodInfo* method){
	{
		t11  L_0 = (__this->f7);
		t11  L_1 = m105(NULL, p0, (0.5f), &m105_MI);
		t11  L_2 = m105(NULL, L_1, p1, &m105_MI);
		t11  L_3 = m133(NULL, L_0, L_2, &m133_MI);
		__this->f5 = L_3;
		__this->f10 = p0;
		__this->f9 = 0;
		__this->f8 = 1;
		return;
	}
}
extern MethodInfo m23_MI;
 void m23 (t7 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		t5 * L_0 = (__this->f3);
		bool L_1 = m138(NULL, L_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_0119;
		}
	}
	{
		t5 * L_2 = (__this->f3);
		t32 * L_3 = m108(L_2, &m108_MI);
		t11  L_4 = m91(L_3, &m91_MI);
		t11  L_5 = {0};
		m117(&L_5, (-20.0f), (20.0f), (-20.0f), &m117_MI);
		t11  L_6 = m111(NULL, L_4, L_5, &m111_MI);
		V_0 = L_6;
		t32 * L_7 = m90(__this, &m90_MI);
		t11  L_8 = m91(L_7, &m91_MI);
		t11 * L_9 = &(__this->f4);
		t11  L_10 = m139(NULL, L_8, V_0, L_9, (0.25f), &m139_MI);
		__this->f7 = L_10;
		bool L_11 = (__this->f8);
		if (!L_11)
		{
			goto IL_0103;
		}
	}
	{
		t32 * L_12 = m90(__this, &m90_MI);
		t11  L_13 = m91(L_12, &m91_MI);
		t11  L_14 = (__this->f5);
		float L_15 = m92(NULL, L_13, L_14, &m92_MI);
		if ((((float)L_15) >= ((float)(0.25f))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_16 = (__this->f9);
		if (L_16)
		{
			goto IL_00ab;
		}
	}
	{
		__this->f9 = 1;
		t11  L_17 = (__this->f7);
		__this->f5 = L_17;
		goto IL_00b2;
	}

IL_00ab:
	{
		__this->f8 = 0;
	}

IL_00b2:
	{
		goto IL_00fe;
	}

IL_00b7:
	{
		t11  L_18 = (__this->f7);
		t11  L_19 = (__this->f10);
		t11  L_20 = m105(NULL, L_19, (0.5f), &m105_MI);
		t11  L_21 = m133(NULL, L_18, L_20, &m133_MI);
		__this->f5 = L_21;
		t32 * L_22 = m90(__this, &m90_MI);
		t32 * L_23 = m90(__this, &m90_MI);
		t11  L_24 = m91(L_23, &m91_MI);
		t11  L_25 = (__this->f5);
		t11  L_26 = m140(NULL, L_24, L_25, (0.5f), &m140_MI);
		m113(L_22, L_26, &m113_MI);
	}

IL_00fe:
	{
		goto IL_0114;
	}

IL_0103:
	{
		t32 * L_27 = m90(__this, &m90_MI);
		t11  L_28 = (__this->f7);
		m113(L_27, L_28, &m113_MI);
	}

IL_0114:
	{
		goto IL_0123;
	}

IL_0119:
	{
		m141(NULL, (t18*) &_stringLiteral6, &m141_MI);
	}

IL_0123:
	{
		return;
	}
}
// Metadata Definition CameraScript
extern Il2CppType t33_0_0_32849;
FieldInfo t7_f2_FieldInfo = 
{
	"shakeMagnitude", &t33_0_0_32849, &t7_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t7_f3_FieldInfo = 
{
	"target", &t5_0_0_6, &t7_TI, offsetof(t7, f3), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t7_f4_FieldInfo = 
{
	"currentVelocity", &t11_0_0_1, &t7_TI, offsetof(t7, f4), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t7_f5_FieldInfo = 
{
	"shakenPosition", &t11_0_0_1, &t7_TI, offsetof(t7, f5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t7_f6_FieldInfo = 
{
	"targetPosition", &t11_0_0_1, &t7_TI, offsetof(t7, f6), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t7_f7_FieldInfo = 
{
	"unshakenPosition", &t11_0_0_1, &t7_TI, offsetof(t7, f7), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t7_f8_FieldInfo = 
{
	"shaking", &t31_0_0_1, &t7_TI, offsetof(t7, f8), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t7_f9_FieldInfo = 
{
	"returning", &t31_0_0_1, &t7_TI, offsetof(t7, f9), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t7_f10_FieldInfo = 
{
	"direction", &t11_0_0_1, &t7_TI, offsetof(t7, f10), &EmptyCustomAttributesCache};
static FieldInfo* t7_FIs[] =
{
	&t7_f2_FieldInfo,
	&t7_f3_FieldInfo,
	&t7_f4_FieldInfo,
	&t7_f5_FieldInfo,
	&t7_f6_FieldInfo,
	&t7_f7_FieldInfo,
	&t7_f8_FieldInfo,
	&t7_f9_FieldInfo,
	&t7_f10_FieldInfo,
	NULL
};
static const float t7_f2_DefaultValueData = 0.5f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t7_f2_DefaultValue = 
{
	&t7_f2_FieldInfo, { (char*)&t7_f2_DefaultValueData, &t33_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t7_FDVs[] = 
{
	&t7_f2_DefaultValue,
	NULL
};
extern TypeInfo t7_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m20_MI = 
{
	".ctor", (methodPointerType)&m20, &t7_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 21, NULL, (methodPointerType)NULL};
extern TypeInfo t7_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m21_MI = 
{
	"Start", (methodPointerType)&m21, &t7_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 22, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t7_m22_ParameterInfos[] = 
{
	{"dir", 0, 134217734, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"mag", 1, 134217735, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t7_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m22_MI = 
{
	"Shake", (methodPointerType)&m22, &t7_TI, &t30_0_0_0, RuntimeInvoker_t30_t11_t33, t7_m22_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 23, NULL, (methodPointerType)NULL};
extern TypeInfo t7_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m23_MI = 
{
	"Update", (methodPointerType)&m23, &t7_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 24, NULL, (methodPointerType)NULL};
static MethodInfo* t7_MIs[] =
{
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t7_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_1_0_0;
extern TypeInfo t3_TI;
struct t7;
extern TypeInfo t7_TI;
TypeInfo t7_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CameraScript", "", t7_MIs, NULL, t7_FIs, NULL, &t3_TI, NULL, NULL, &t7_TI, NULL, t7_VT, &EmptyCustomAttributesCache, &t7_TI, &t7_0_0_0, &t7_1_0_0, NULL, NULL, NULL, t7_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t7), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 9, 0, 0, 4, 0, 0};
#include "t12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t12_TI;
#include "t12MD.h"

#include "t45.h"
#include "t46.h"
#include "t47.h"
#include "t48.h"
#include "t13.h"
#include "t49.h"
#include "t50.h"
extern TypeInfo t12_TI;
extern TypeInfo t11_TI;
extern TypeInfo t13_TI;
extern TypeInfo t30_TI;
#include "t45MD.h"
#include "t51MD.h"
#include "t52MD.h"
#include "t46MD.h"
#include "t13MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m87_MI;
extern MethodInfo m30_MI;
extern MethodInfo m108_MI;
extern MethodInfo m91_MI;
extern MethodInfo m90_MI;
extern MethodInfo m133_MI;
extern MethodInfo m131_MI;
extern MethodInfo m109_MI;
extern MethodInfo m115_MI;
extern MethodInfo m142_MI;
extern MethodInfo m120_MI;
extern MethodInfo m143_MI;
extern MethodInfo m144_MI;
extern MethodInfo m145_MI;
extern MethodInfo m146_MI;
extern MethodInfo m94_MI;
extern MethodInfo m147_MI;
extern MethodInfo m32_MI;
extern MethodInfo m148_MI;
extern MethodInfo m149_MI;
extern MethodInfo m26_MI;
extern MethodInfo m150_MI;
extern MethodInfo m151_MI;
extern MethodInfo m152_MI;
extern MethodInfo m92_MI;
extern MethodInfo m27_MI;
extern MethodInfo m29_MI;
extern MethodInfo m135_MI;
extern MethodInfo m153_MI;


extern MethodInfo m24_MI;
 void m24 (t12 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m25_MI;
 void m25 (t12 * __this, MethodInfo* method){
	{
		t5 * L_0 = m87(NULL, (t18*) &_stringLiteral3, &m87_MI);
		__this->f5 = L_0;
		m30(__this, &m30_MI);
		return;
	}
}
extern MethodInfo m26_MI;
 void m26 (t12 * __this, MethodInfo* method){
	t11  V_0 = {0};
	t45  V_1 = {0};
	t46  V_2 = {0};
	t11  V_3 = {0};
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = m108(L_0, &m108_MI);
		t11  L_2 = m91(L_1, &m91_MI);
		t32 * L_3 = m90(__this, &m90_MI);
		t11  L_4 = m91(L_3, &m91_MI);
		t11  L_5 = m133(NULL, L_2, L_4, &m133_MI);
		V_3 = L_5;
		t11  L_6 = m131((&V_3), &m131_MI);
		V_0 = L_6;
		(&V_0)->f2 = (0.0f);
		t32 * L_7 = m90(__this, &m90_MI);
		t32 * L_8 = m90(__this, &m90_MI);
		t11  L_9 = m109(L_8, &m109_MI);
		float L_10 = m115(NULL, &m115_MI);
		t11  L_11 = m142(NULL, L_9, V_0, ((float)((2.5f)*L_10)), (0.0f), &m142_MI);
		m120(L_7, L_11, &m120_MI);
		t32 * L_12 = m90(__this, &m90_MI);
		t11  L_13 = m91(L_12, &m91_MI);
		m143((&V_1), L_13, V_0, &m143_MI);
		int32_t L_14 = m144(NULL, (t18*) &_stringLiteral7, &m144_MI);
		bool L_15 = m145(NULL, V_1, (&V_2), (((float)L_14)), &m145_MI);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		t48 * L_16 = m146((&V_2), &m146_MI);
		t5 * L_17 = m94(L_16, &m94_MI);
		t5 * L_18 = (__this->f5);
		bool L_19 = m147(NULL, L_17, L_18, &m147_MI);
		if (L_19)
		{
			goto IL_00ae;
		}
	}

IL_00a8:
	{
		m32(__this, &m32_MI);
	}

IL_00ae:
	{
		return;
	}
}
extern MethodInfo m27_MI;
 void m27 (t12 * __this, MethodInfo* method){
	{
		m148(__this, &m148_MI);
		m149(__this, (t18*) &_stringLiteral8, (0.25f), (0.25f), &m149_MI);
		t49 L_0 = { &m26_MI };
		t13 * L_1 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m150(L_1, __this, L_0, &m150_MI);
		__this->f4 = L_1;
		return;
	}
}
extern MethodInfo m28_MI;
 void m28 (t12 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f6);
		t32 * L_1 = m90(__this, &m90_MI);
		t11  L_2 = m91(L_1, &m91_MI);
		t32 * L_3 = m90(__this, &m90_MI);
		t50  L_4 = m151(L_3, &m151_MI);
		m152(NULL, L_0, L_2, L_4, &m152_MI);
		return;
	}
}
extern MethodInfo m29_MI;
 void m29 (t12 * __this, MethodInfo* method){
	{
		t32 * L_0 = m90(__this, &m90_MI);
		t11  L_1 = m91(L_0, &m91_MI);
		t5 * L_2 = (__this->f5);
		t32 * L_3 = m108(L_2, &m108_MI);
		t11  L_4 = m91(L_3, &m91_MI);
		float L_5 = m92(NULL, L_1, L_4, &m92_MI);
		if ((((float)L_5) >= ((float)(50.0f))))
		{
			goto IL_0030;
		}
	}
	{
		m27(__this, &m27_MI);
	}

IL_0030:
	{
		return;
	}
}
extern MethodInfo m30_MI;
 void m30 (t12 * __this, MethodInfo* method){
	{
		t49 L_0 = { &m29_MI };
		t13 * L_1 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m150(L_1, __this, L_0, &m150_MI);
		__this->f4 = L_1;
		return;
	}
}
extern MethodInfo m31_MI;
 void m31 (t12 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m32_MI;
 void m32 (t12 * __this, MethodInfo* method){
	{
		m148(__this, &m148_MI);
		m135(__this, (t18*) &_stringLiteral9, (2.0f), &m135_MI);
		return;
	}
}
extern MethodInfo m33_MI;
 void m33 (t12 * __this, MethodInfo* method){
	{
		t13 * L_0 = (__this->f4);
		VirtActionInvoker0::Invoke(&m153_MI, L_0);
		return;
	}
}
// Metadata Definition EnemyLookFSM
extern Il2CppType t33_0_0_32849;
FieldInfo t12_f2_FieldInfo = 
{
	"viewDistance", &t33_0_0_32849, &t12_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t12_f3_FieldInfo = 
{
	"trackSpeed", &t33_0_0_32849, &t12_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t12_f4_FieldInfo = 
{
	"activeState", &t13_0_0_1, &t12_TI, offsetof(t12, f4), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t12_f5_FieldInfo = 
{
	"player", &t5_0_0_1, &t12_TI, offsetof(t12, f5), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t12_f6_FieldInfo = 
{
	"bullet", &t5_0_0_6, &t12_TI, offsetof(t12, f6), &EmptyCustomAttributesCache};
static FieldInfo* t12_FIs[] =
{
	&t12_f2_FieldInfo,
	&t12_f3_FieldInfo,
	&t12_f4_FieldInfo,
	&t12_f5_FieldInfo,
	&t12_f6_FieldInfo,
	NULL
};
static const float t12_f2_DefaultValueData = 50.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t12_f2_DefaultValue = 
{
	&t12_f2_FieldInfo, { (char*)&t12_f2_DefaultValueData, &t33_0_0_0 }};
static const float t12_f3_DefaultValueData = 2.5f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t12_f3_DefaultValue = 
{
	&t12_f3_FieldInfo, { (char*)&t12_f3_DefaultValueData, &t33_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t12_FDVs[] = 
{
	&t12_f2_DefaultValue,
	&t12_f3_DefaultValue,
	NULL
};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m24_MI = 
{
	".ctor", (methodPointerType)&m24, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 25, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m25_MI = 
{
	"Start", (methodPointerType)&m25, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 26, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m26_MI = 
{
	"STATE_SeenPlayer", (methodPointerType)&m26, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 27, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m27_MI = 
{
	"CHANGESTATE_SeenPlayer", (methodPointerType)&m27, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 28, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m28_MI = 
{
	"Fire", (methodPointerType)&m28, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 29, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m29_MI = 
{
	"STATE_ScanForPlayer", (methodPointerType)&m29, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 30, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m30_MI = 
{
	"CHANGESTATE_ScanForPlayer", (methodPointerType)&m30, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 31, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m31_MI = 
{
	"STATE_LostPlayer", (methodPointerType)&m31, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 32, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m32_MI = 
{
	"CHANGESTATE_LostPlayer", (methodPointerType)&m32, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 33, NULL, (methodPointerType)NULL};
extern TypeInfo t12_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m33_MI = 
{
	"Update", (methodPointerType)&m33, &t12_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 34, NULL, (methodPointerType)NULL};
static MethodInfo* t12_MIs[] =
{
	&m24_MI,
	&m25_MI,
	&m26_MI,
	&m27_MI,
	&m28_MI,
	&m29_MI,
	&m30_MI,
	&m31_MI,
	&m32_MI,
	&m33_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t12_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t12_0_0_0;
extern Il2CppType t12_1_0_0;
extern TypeInfo t3_TI;
struct t12;
extern TypeInfo t12_TI;
TypeInfo t12_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "EnemyLookFSM", "", t12_MIs, NULL, t12_FIs, NULL, &t3_TI, NULL, NULL, &t12_TI, NULL, t12_VT, &EmptyCustomAttributesCache, &t12_TI, &t12_0_0_0, &t12_1_0_0, NULL, NULL, NULL, t12_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t12), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 10, 0, 5, 0, 0, 4, 0, 0};
#include "t14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t14_TI;
#include "t14MD.h"

#include "t53.h"
extern TypeInfo t14_TI;
extern TypeInfo t11_TI;
extern TypeInfo t13_TI;
extern TypeInfo t30_TI;
#include "t54MD.h"
#include "t50MD.h"
#include "t53MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m87_MI;
extern MethodInfo m103_MI;
extern MethodInfo m154_MI;
extern MethodInfo m88_MI;
extern MethodInfo m39_MI;
extern MethodInfo m131_MI;
extern MethodInfo m105_MI;
extern MethodInfo m118_MI;
extern MethodInfo m141_MI;
extern MethodInfo m40_MI;
extern MethodInfo m108_MI;
extern MethodInfo m91_MI;
extern MethodInfo m90_MI;
extern MethodInfo m133_MI;
extern MethodInfo m155_MI;
extern MethodInfo m112_MI;
extern MethodInfo m156_MI;
extern MethodInfo m157_MI;
extern MethodInfo m36_MI;
extern MethodInfo m150_MI;
extern MethodInfo m137_MI;
extern MethodInfo m37_MI;
extern MethodInfo m38_MI;
extern MethodInfo m109_MI;
extern MethodInfo m158_MI;
extern MethodInfo m92_MI;
extern MethodInfo m159_MI;
extern MethodInfo m7_MI;
extern MethodInfo m153_MI;
extern MethodInfo m103_MI;
struct t5;
#define m154(__this, method) (t4 *)m95_gshared((t5 *)__this, method)
extern MethodInfo m154_MI;
extern MethodInfo m88_MI;


extern MethodInfo m34_MI;
 void m34 (t14 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m35_MI;
 void m35 (t14 * __this, MethodInfo* method){
	{
		t5 * L_0 = m87(NULL, (t18*) &_stringLiteral3, &m87_MI);
		__this->f6 = L_0;
		t5 * L_1 = m87(NULL, (t18*) &_stringLiteral1, &m87_MI);
		__this->f5 = L_1;
		t4 * L_2 = m103(__this, &m103_MI);
		__this->f7 = L_2;
		t5 * L_3 = (__this->f5);
		t4 * L_4 = m154(L_3, &m154_MI);
		__this->f8 = L_4;
		t5 * L_5 = (__this->f5);
		t2 * L_6 = m88(L_5, &m88_MI);
		__this->f9 = L_6;
		m39(__this, &m39_MI);
		return;
	}
}
extern MethodInfo m36_MI;
 void m36 (t14 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f7);
		t11 * L_1 = &(__this->f10);
		t11  L_2 = m131(L_1, &m131_MI);
		t11  L_3 = m105(NULL, L_2, (5.0f), &m105_MI);
		m118(L_0, L_3, &m118_MI);
		t11 * L_4 = &(__this->f10);
		t11  L_5 = m131(L_4, &m131_MI);
		t11  L_6 = L_5;
		t28 * L_7 = Box(InitializedTypeInfo(&t11_TI), &L_6);
		m141(NULL, L_7, &m141_MI);
		bool L_8 = m40(__this, &m40_MI);
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		m39(__this, &m39_MI);
	}

IL_0046:
	{
		return;
	}
}
extern MethodInfo m37_MI;
 void m37 (t14 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = m108(L_0, &m108_MI);
		t11  L_2 = m91(L_1, &m91_MI);
		t32 * L_3 = m90(__this, &m90_MI);
		t11  L_4 = m91(L_3, &m91_MI);
		t11  L_5 = m133(NULL, L_2, L_4, &m133_MI);
		V_0 = L_5;
		float L_6 = m155(NULL, (0.0f), (1.0f), &m155_MI);
		if ((((float)L_6) >= ((float)(0.5f))))
		{
			goto IL_006a;
		}
	}
	{
		t11  L_7 = m112(NULL, &m112_MI);
		t50  L_8 = m156(NULL, (90.0f), L_7, &m156_MI);
		t11  L_9 = m157(NULL, L_8, V_0, &m157_MI);
		__this->f10 = L_9;
		t11 * L_10 = &(__this->f10);
		L_10->f2 = (0.0f);
		goto IL_0095;
	}

IL_006a:
	{
		t11  L_11 = m112(NULL, &m112_MI);
		t50  L_12 = m156(NULL, (90.0f), L_11, &m156_MI);
		t11  L_13 = m157(NULL, L_12, V_0, &m157_MI);
		__this->f10 = L_13;
		t11 * L_14 = &(__this->f10);
		L_14->f2 = (0.0f);
	}

IL_0095:
	{
		t49 L_15 = { &m36_MI };
		t13 * L_16 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m150(L_16, __this, L_15, &m150_MI);
		__this->f4 = L_16;
		return;
	}
}
extern MethodInfo m38_MI;
 void m38 (t14 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f7);
		t11  L_1 = m137(NULL, &m137_MI);
		m118(L_0, L_1, &m118_MI);
		bool L_2 = m40(__this, &m40_MI);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		m37(__this, &m37_MI);
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m39_MI;
 void m39 (t14 * __this, MethodInfo* method){
	{
		t49 L_0 = { &m38_MI };
		t13 * L_1 = (t13 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t13_TI));
		m150(L_1, __this, L_0, &m150_MI);
		__this->f4 = L_1;
		return;
	}
}
extern MethodInfo m40_MI;
 bool m40 (t14 * __this, MethodInfo* method){
	t53  V_0 = {0};
	int32_t G_B4_0 = 0;
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = m108(L_0, &m108_MI);
		t11  L_2 = m109(L_1, &m109_MI);
		t5 * L_3 = (__this->f5);
		t32 * L_4 = m108(L_3, &m108_MI);
		t11  L_5 = m91(L_4, &m91_MI);
		m158((&V_0), L_2, L_5, &m158_MI);
		t32 * L_6 = m90(__this, &m90_MI);
		t11  L_7 = m91(L_6, &m91_MI);
		t5 * L_8 = (__this->f5);
		t32 * L_9 = m108(L_8, &m108_MI);
		t11  L_10 = m91(L_9, &m91_MI);
		float L_11 = m92(NULL, L_7, L_10, &m92_MI);
		if ((((float)L_11) > ((float)(25.0f))))
		{
			goto IL_007c;
		}
	}
	{
		t32 * L_12 = m90(__this, &m90_MI);
		t11  L_13 = m91(L_12, &m91_MI);
		bool L_14 = m159((&V_0), L_13, &m159_MI);
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		t2 * L_15 = (__this->f9);
		float L_16 = m7(L_15, &m7_MI);
		G_B4_0 = ((((float)L_16) > ((float)(0.0f)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B4_0 = 0;
	}

IL_007d:
	{
		return G_B4_0;
	}
}
extern MethodInfo m41_MI;
 void m41 (t14 * __this, MethodInfo* method){
	{
		t13 * L_0 = (__this->f4);
		VirtActionInvoker0::Invoke(&m153_MI, L_0);
		return;
	}
}
// Metadata Definition EnemyMoveFSM
extern Il2CppType t33_0_0_32849;
FieldInfo t14_f2_FieldInfo = 
{
	"moveSpeed", &t33_0_0_32849, &t14_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t14_f3_FieldInfo = 
{
	"fleeDistance", &t33_0_0_32849, &t14_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t13_0_0_1;
FieldInfo t14_f4_FieldInfo = 
{
	"activeState", &t13_0_0_1, &t14_TI, offsetof(t14, f4), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t14_f5_FieldInfo = 
{
	"ball", &t5_0_0_1, &t14_TI, offsetof(t14, f5), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t14_f6_FieldInfo = 
{
	"player", &t5_0_0_1, &t14_TI, offsetof(t14, f6), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t14_f7_FieldInfo = 
{
	"r", &t4_0_0_1, &t14_TI, offsetof(t14, f7), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t14_f8_FieldInfo = 
{
	"ball_r", &t4_0_0_1, &t14_TI, offsetof(t14, f8), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_1;
FieldInfo t14_f9_FieldInfo = 
{
	"roll", &t2_0_0_1, &t14_TI, offsetof(t14, f9), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t14_f10_FieldInfo = 
{
	"fleeDirection", &t11_0_0_1, &t14_TI, offsetof(t14, f10), &EmptyCustomAttributesCache};
static FieldInfo* t14_FIs[] =
{
	&t14_f2_FieldInfo,
	&t14_f3_FieldInfo,
	&t14_f4_FieldInfo,
	&t14_f5_FieldInfo,
	&t14_f6_FieldInfo,
	&t14_f7_FieldInfo,
	&t14_f8_FieldInfo,
	&t14_f9_FieldInfo,
	&t14_f10_FieldInfo,
	NULL
};
static const float t14_f2_DefaultValueData = 5.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t14_f2_DefaultValue = 
{
	&t14_f2_FieldInfo, { (char*)&t14_f2_DefaultValueData, &t33_0_0_0 }};
static const float t14_f3_DefaultValueData = 25.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t14_f3_DefaultValue = 
{
	&t14_f3_FieldInfo, { (char*)&t14_f3_DefaultValueData, &t33_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t14_FDVs[] = 
{
	&t14_f2_DefaultValue,
	&t14_f3_DefaultValue,
	NULL
};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m34_MI = 
{
	".ctor", (methodPointerType)&m34, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 35, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m35_MI = 
{
	"Start", (methodPointerType)&m35, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 36, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m36_MI = 
{
	"STATE_DodgeBall", (methodPointerType)&m36, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 37, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m37_MI = 
{
	"CHANGESTATE_DodgeBall", (methodPointerType)&m37, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 38, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m38_MI = 
{
	"STATE_Idle", (methodPointerType)&m38, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 39, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m39_MI = 
{
	"CHANGESTATE_Idle", (methodPointerType)&m39, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 40, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m40_MI = 
{
	"BallHeadingForMe", (methodPointerType)&m40, &t14_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 41, NULL, (methodPointerType)NULL};
extern TypeInfo t14_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m41_MI = 
{
	"Update", (methodPointerType)&m41, &t14_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 42, NULL, (methodPointerType)NULL};
static MethodInfo* t14_MIs[] =
{
	&m34_MI,
	&m35_MI,
	&m36_MI,
	&m37_MI,
	&m38_MI,
	&m39_MI,
	&m40_MI,
	&m41_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t14_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_1_0_0;
extern TypeInfo t3_TI;
struct t14;
extern TypeInfo t14_TI;
TypeInfo t14_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "EnemyMoveFSM", "", t14_MIs, NULL, t14_FIs, NULL, &t3_TI, NULL, NULL, &t14_TI, NULL, t14_VT, &EmptyCustomAttributesCache, &t14_TI, &t14_0_0_0, &t14_1_0_0, NULL, NULL, NULL, t14_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t14), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 9, 0, 0, 4, 0, 0};
#include "t15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t15_TI;
#include "t15MD.h"

extern TypeInfo t15_TI;
extern TypeInfo t11_TI;
extern MethodInfo m160_MI;
extern MethodInfo m86_MI;
extern MethodInfo m100_MI;
extern MethodInfo m103_MI;
extern MethodInfo m155_MI;
extern MethodInfo m47_MI;
extern MethodInfo m44_MI;
extern MethodInfo m87_MI;
extern MethodInfo m149_MI;
extern MethodInfo m148_MI;
extern MethodInfo m108_MI;
extern MethodInfo m91_MI;
extern MethodInfo m90_MI;
extern MethodInfo m133_MI;
extern MethodInfo m112_MI;
extern MethodInfo m156_MI;
extern MethodInfo m157_MI;
extern MethodInfo m117_MI;
extern MethodInfo m141_MI;
extern MethodInfo m109_MI;
extern MethodInfo m115_MI;
extern MethodInfo m142_MI;
extern MethodInfo m120_MI;
extern MethodInfo m161_MI;
extern MethodInfo m162_MI;
extern MethodInfo m143_MI;
extern MethodInfo m163_MI;
extern MethodInfo m146_MI;
extern MethodInfo m94_MI;
extern MethodInfo m147_MI;
extern MethodInfo m131_MI;
extern MethodInfo m105_MI;
extern MethodInfo m118_MI;
extern MethodInfo m154_MI;
extern MethodInfo m164_MI;
extern MethodInfo m121_MI;
extern MethodInfo m122_MI;
extern MethodInfo m123_MI;
extern MethodInfo m165_MI;
extern MethodInfo m48_MI;
extern MethodInfo m166_MI;
extern MethodInfo m51_MI;
extern MethodInfo m50_MI;
extern MethodInfo m53_MI;
extern MethodInfo m88_MI;
extern MethodInfo m7_MI;
extern MethodInfo m46_MI;
extern MethodInfo m45_MI;
extern MethodInfo m100_MI;
extern MethodInfo m103_MI;
extern MethodInfo m154_MI;
extern MethodInfo m88_MI;


extern MethodInfo m42_MI;
 void m42 (t15 * __this, MethodInfo* method){
	{
		t11  L_0 = m160(NULL, &m160_MI);
		__this->f12 = L_0;
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m43_MI;
 void m43 (t15 * __this, MethodInfo* method){
	{
		t8 * L_0 = m100(__this, &m100_MI);
		__this->f22 = L_0;
		t4 * L_1 = m103(__this, &m103_MI);
		__this->f21 = L_1;
		float L_2 = m155(NULL, (-0.5f), (0.5f), &m155_MI);
		__this->f20 = ((float)((25.0f)+((float)(L_2*(25.0f)))));
		m47(__this, &m47_MI);
		m44(__this, &m44_MI);
		t5 * L_3 = m87(NULL, (t18*) &_stringLiteral3, &m87_MI);
		__this->f16 = L_3;
		t5 * L_4 = m87(NULL, (t18*) &_stringLiteral1, &m87_MI);
		__this->f17 = L_4;
		return;
	}
}
extern MethodInfo m44_MI;
 void m44 (t15 * __this, MethodInfo* method){
	{
		__this->f13 = 0;
		bool L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		m149(__this, (t18*) &_stringLiteral10, (2.0f), (2.0f), &m149_MI);
	}

IL_0027:
	{
		__this->f15 = 1;
		return;
	}
}
extern MethodInfo m45_MI;
 void m45 (t15 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		m148(__this, &m148_MI);
		m149(__this, (t18*) &_stringLiteral8, (0.25f), (0.5f), &m149_MI);
	}

IL_0026:
	{
		__this->f13 = 1;
		return;
	}
}
extern MethodInfo m46_MI;
 void m46 (t15 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		t5 * L_0 = (__this->f17);
		t32 * L_1 = m108(L_0, &m108_MI);
		t11  L_2 = m91(L_1, &m91_MI);
		t32 * L_3 = m90(__this, &m90_MI);
		t11  L_4 = m91(L_3, &m91_MI);
		t11  L_5 = m133(NULL, L_2, L_4, &m133_MI);
		V_0 = L_5;
		float L_6 = m155(NULL, (0.0f), (1.0f), &m155_MI);
		if ((((float)L_6) >= ((float)(0.5f))))
		{
			goto IL_005a;
		}
	}
	{
		t11  L_7 = m112(NULL, &m112_MI);
		t50  L_8 = m156(NULL, (90.0f), L_7, &m156_MI);
		t11  L_9 = m157(NULL, L_8, V_0, &m157_MI);
		__this->f19 = L_9;
		goto IL_0075;
	}

IL_005a:
	{
		t11  L_10 = m112(NULL, &m112_MI);
		t50  L_11 = m156(NULL, (90.0f), L_10, &m156_MI);
		t11  L_12 = m157(NULL, L_11, V_0, &m157_MI);
		__this->f19 = L_12;
	}

IL_0075:
	{
		return;
	}
}
extern MethodInfo m47_MI;
 void m47 (t15 * __this, MethodInfo* method){
	{
		float L_0 = m155(NULL, (-1.0f), (1.0f), &m155_MI);
		float L_1 = m155(NULL, (-1.0f), (1.0f), &m155_MI);
		t11  L_2 = {0};
		m117(&L_2, L_0, (0.0f), L_1, &m117_MI);
		__this->f12 = L_2;
		t11  L_3 = (__this->f12);
		t11  L_4 = L_3;
		t28 * L_5 = Box(InitializedTypeInfo(&t11_TI), &L_4);
		m141(NULL, L_5, &m141_MI);
		return;
	}
}
extern MethodInfo m48_MI;
 void m48 (t15 * __this, MethodInfo* method){
	{
		t32 * L_0 = m90(__this, &m90_MI);
		t32 * L_1 = m90(__this, &m90_MI);
		t11  L_2 = m109(L_1, &m109_MI);
		t11  L_3 = (__this->f12);
		float L_4 = m115(NULL, &m115_MI);
		t11  L_5 = m142(NULL, L_2, L_3, ((float)((2.5f)*L_4)), (0.0f), &m142_MI);
		m120(L_0, L_5, &m120_MI);
		return;
	}
}
extern MethodInfo m49_MI;
 void m49 (t15 * __this, MethodInfo* method){
	{
		m141(NULL, (t18*) &_stringLiteral11, &m141_MI);
		return;
	}
}
extern MethodInfo m50_MI;
 bool m50 (t15 * __this, t5 * p0, MethodInfo* method){
	t11  V_0 = {0};
	t45  V_1 = {0};
	t46  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		t32 * L_0 = m108(p0, &m108_MI);
		t11  L_1 = m91(L_0, &m91_MI);
		t32 * L_2 = m90(__this, &m90_MI);
		t11  L_3 = m91(L_2, &m91_MI);
		t11  L_4 = m133(NULL, L_1, L_3, &m133_MI);
		V_0 = L_4;
		t32 * L_5 = m90(__this, &m90_MI);
		t11  L_6 = m109(L_5, &m109_MI);
		float L_7 = m161(NULL, V_0, L_6, &m161_MI);
		if ((((float)L_7) >= ((float)(60.0f))))
		{
			goto IL_007e;
		}
	}
	{
		float L_8 = m162((&V_0), &m162_MI);
		if ((((float)L_8) > ((float)(50.0f))))
		{
			goto IL_007e;
		}
	}
	{
		t32 * L_9 = m90(__this, &m90_MI);
		t11  L_10 = m91(L_9, &m91_MI);
		m143((&V_1), L_10, V_0, &m143_MI);
		bool L_11 = m163(NULL, V_1, (&V_2), &m163_MI);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		t48 * L_12 = m146((&V_2), &m146_MI);
		t5 * L_13 = m94(L_12, &m94_MI);
		bool L_14 = m147(NULL, L_13, p0, &m147_MI);
		G_B5_0 = ((int32_t)(L_14));
		goto IL_007d;
	}

IL_007c:
	{
		G_B5_0 = 0;
	}

IL_007d:
	{
		return G_B5_0;
	}

IL_007e:
	{
		return 0;
	}
}
extern MethodInfo m51_MI;
 void m51 (t15 * __this, MethodInfo* method){
	{
		m148(__this, &m148_MI);
		t4 * L_0 = (__this->f21);
		t11 * L_1 = &(__this->f19);
		t11  L_2 = m131(L_1, &m131_MI);
		t11  L_3 = m105(NULL, L_2, (5.0f), &m105_MI);
		t11  L_4 = m105(NULL, L_3, (1.5f), &m105_MI);
		m118(L_0, L_4, &m118_MI);
		return;
	}
}
extern MethodInfo m52_MI;
 void m52 (t15 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m53_MI;
 bool m53 (t15 * __this, t5 * p0, MethodInfo* method){
	t46  V_0 = {0};
	{
		t4 * L_0 = m154(p0, &m154_MI);
		t32 * L_1 = m108(p0, &m108_MI);
		t11  L_2 = m109(L_1, &m109_MI);
		bool L_3 = m164(L_0, L_2, (&V_0), (50.0f), &m164_MI);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		t48 * L_4 = m146((&V_0), &m146_MI);
		t5 * L_5 = m94(L_4, &m94_MI);
		t5 * L_6 = m94(__this, &m94_MI);
		bool L_7 = m147(NULL, L_5, L_6, &m147_MI);
		return L_7;
	}

IL_003a:
	{
		return 0;
	}
}
extern MethodInfo m54_MI;
 void m54 (t15 * __this, MethodInfo* method){
	t11  V_0 = {0};
	t11  V_1 = {0};
	{
		bool L_0 = (__this->f13);
		if (!L_0)
		{
			goto IL_007a;
		}
	}
	{
		t8 * L_1 = (__this->f22);
		t39 * L_2 = m121(L_1, &m121_MI);
		t20  L_3 = m122(NULL, &m122_MI);
		m123(L_2, L_3, &m123_MI);
		t5 * L_4 = (__this->f16);
		t32 * L_5 = m108(L_4, &m108_MI);
		t11  L_6 = m91(L_5, &m91_MI);
		t32 * L_7 = m90(__this, &m90_MI);
		t11  L_8 = m91(L_7, &m91_MI);
		t11  L_9 = m133(NULL, L_6, L_8, &m133_MI);
		V_1 = L_9;
		t11  L_10 = m131((&V_1), &m131_MI);
		V_0 = L_10;
		t32 * L_11 = m90(__this, &m90_MI);
		t32 * L_12 = m90(__this, &m90_MI);
		t11  L_13 = m109(L_12, &m109_MI);
		float L_14 = m115(NULL, &m115_MI);
		t11  L_15 = m142(NULL, L_13, V_0, ((float)((1.25f)*L_14)), (0.0f), &m142_MI);
		m120(L_11, L_15, &m120_MI);
		goto IL_0095;
	}

IL_007a:
	{
		t8 * L_16 = (__this->f22);
		t39 * L_17 = m121(L_16, &m121_MI);
		t20  L_18 = m165(NULL, &m165_MI);
		m123(L_17, L_18, &m123_MI);
		m48(__this, &m48_MI);
	}

IL_0095:
	{
		bool L_19 = (__this->f14);
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		t8 * L_20 = (__this->f22);
		t39 * L_21 = m121(L_20, &m121_MI);
		t20  L_22 = m166(NULL, &m166_MI);
		m123(L_21, L_22, &m123_MI);
		m51(__this, &m51_MI);
	}

IL_00bb:
	{
		t5 * L_23 = (__this->f17);
		bool L_24 = m50(__this, L_23, &m50_MI);
		if (!L_24)
		{
			goto IL_0102;
		}
	}
	{
		t5 * L_25 = (__this->f17);
		bool L_26 = m53(__this, L_25, &m53_MI);
		if (!L_26)
		{
			goto IL_0102;
		}
	}
	{
		t5 * L_27 = (__this->f17);
		t2 * L_28 = m88(L_27, &m88_MI);
		float L_29 = m7(L_28, &m7_MI);
		if ((((float)L_29) <= ((float)(10.0f))))
		{
			goto IL_0102;
		}
	}
	{
		m46(__this, &m46_MI);
		goto IL_0113;
	}

IL_0102:
	{
		bool L_30 = (__this->f15);
		if (L_30)
		{
			goto IL_0113;
		}
	}
	{
		m44(__this, &m44_MI);
	}

IL_0113:
	{
		t5 * L_31 = (__this->f16);
		bool L_32 = m50(__this, L_31, &m50_MI);
		if (!L_32)
		{
			goto IL_012f;
		}
	}
	{
		m45(__this, &m45_MI);
		goto IL_0135;
	}

IL_012f:
	{
		m44(__this, &m44_MI);
	}

IL_0135:
	{
		return;
	}
}
// Metadata Definition EnemyScript
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f2_FieldInfo = 
{
	"rotateSpeed", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f3_FieldInfo = 
{
	"trackSpeed", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f4_FieldInfo = 
{
	"fov", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f5_FieldInfo = 
{
	"FleeDistance", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f6_FieldInfo = 
{
	"StrafeDistance", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f7_FieldInfo = 
{
	"braveryVariation", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f8_FieldInfo = 
{
	"reactionTime", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f9_FieldInfo = 
{
	"reloadTime", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f10_FieldInfo = 
{
	"viewDistance", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_32849;
FieldInfo t15_f11_FieldInfo = 
{
	"moveSpeed", &t33_0_0_32849, &t15_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t15_f12_FieldInfo = 
{
	"desiredRotation", &t11_0_0_1, &t15_TI, offsetof(t15, f12), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t15_f13_FieldInfo = 
{
	"seenPlayer", &t31_0_0_1, &t15_TI, offsetof(t15, f13), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t15_f14_FieldInfo = 
{
	"seenBall", &t31_0_0_1, &t15_TI, offsetof(t15, f14), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t15_f15_FieldInfo = 
{
	"scanning", &t31_0_0_1, &t15_TI, offsetof(t15, f15), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t15_f16_FieldInfo = 
{
	"player", &t5_0_0_1, &t15_TI, offsetof(t15, f16), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_1;
FieldInfo t15_f17_FieldInfo = 
{
	"ball", &t5_0_0_1, &t15_TI, offsetof(t15, f17), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t15_f18_FieldInfo = 
{
	"fleeing", &t31_0_0_1, &t15_TI, offsetof(t15, f18), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t15_f19_FieldInfo = 
{
	"fleeDirection", &t11_0_0_1, &t15_TI, offsetof(t15, f19), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t15_f20_FieldInfo = 
{
	"fleeDistance", &t33_0_0_1, &t15_TI, offsetof(t15, f20), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t15_f21_FieldInfo = 
{
	"rigidbody", &t4_0_0_1, &t15_TI, offsetof(t15, f21), &EmptyCustomAttributesCache};
extern Il2CppType t8_0_0_1;
FieldInfo t15_f22_FieldInfo = 
{
	"renderer", &t8_0_0_1, &t15_TI, offsetof(t15, f22), &EmptyCustomAttributesCache};
static FieldInfo* t15_FIs[] =
{
	&t15_f2_FieldInfo,
	&t15_f3_FieldInfo,
	&t15_f4_FieldInfo,
	&t15_f5_FieldInfo,
	&t15_f6_FieldInfo,
	&t15_f7_FieldInfo,
	&t15_f8_FieldInfo,
	&t15_f9_FieldInfo,
	&t15_f10_FieldInfo,
	&t15_f11_FieldInfo,
	&t15_f12_FieldInfo,
	&t15_f13_FieldInfo,
	&t15_f14_FieldInfo,
	&t15_f15_FieldInfo,
	&t15_f16_FieldInfo,
	&t15_f17_FieldInfo,
	&t15_f18_FieldInfo,
	&t15_f19_FieldInfo,
	&t15_f20_FieldInfo,
	&t15_f21_FieldInfo,
	&t15_f22_FieldInfo,
	NULL
};
static const float t15_f2_DefaultValueData = 2.5f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f2_DefaultValue = 
{
	&t15_f2_FieldInfo, { (char*)&t15_f2_DefaultValueData, &t33_0_0_0 }};
static const float t15_f3_DefaultValueData = 1.25f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f3_DefaultValue = 
{
	&t15_f3_FieldInfo, { (char*)&t15_f3_DefaultValueData, &t33_0_0_0 }};
static const float t15_f4_DefaultValueData = 60.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f4_DefaultValue = 
{
	&t15_f4_FieldInfo, { (char*)&t15_f4_DefaultValueData, &t33_0_0_0 }};
static const float t15_f5_DefaultValueData = 25.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f5_DefaultValue = 
{
	&t15_f5_FieldInfo, { (char*)&t15_f5_DefaultValueData, &t33_0_0_0 }};
static const float t15_f6_DefaultValueData = 50.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f6_DefaultValue = 
{
	&t15_f6_FieldInfo, { (char*)&t15_f6_DefaultValueData, &t33_0_0_0 }};
static const float t15_f7_DefaultValueData = 25.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f7_DefaultValue = 
{
	&t15_f7_FieldInfo, { (char*)&t15_f7_DefaultValueData, &t33_0_0_0 }};
static const float t15_f8_DefaultValueData = 0.25f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f8_DefaultValue = 
{
	&t15_f8_FieldInfo, { (char*)&t15_f8_DefaultValueData, &t33_0_0_0 }};
static const float t15_f9_DefaultValueData = 0.5f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f9_DefaultValue = 
{
	&t15_f9_FieldInfo, { (char*)&t15_f9_DefaultValueData, &t33_0_0_0 }};
static const float t15_f10_DefaultValueData = 50.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f10_DefaultValue = 
{
	&t15_f10_FieldInfo, { (char*)&t15_f10_DefaultValueData, &t33_0_0_0 }};
static const float t15_f11_DefaultValueData = 5.0f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t15_f11_DefaultValue = 
{
	&t15_f11_FieldInfo, { (char*)&t15_f11_DefaultValueData, &t33_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t15_FDVs[] = 
{
	&t15_f2_DefaultValue,
	&t15_f3_DefaultValue,
	&t15_f4_DefaultValue,
	&t15_f5_DefaultValue,
	&t15_f6_DefaultValue,
	&t15_f7_DefaultValue,
	&t15_f8_DefaultValue,
	&t15_f9_DefaultValue,
	&t15_f10_DefaultValue,
	&t15_f11_DefaultValue,
	NULL
};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m42_MI = 
{
	".ctor", (methodPointerType)&m42, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 43, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m43_MI = 
{
	"Start", (methodPointerType)&m43, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 44, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m44_MI = 
{
	"Scan", (methodPointerType)&m44, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 45, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m45_MI = 
{
	"OnSeenPlayer", (methodPointerType)&m45, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 46, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m46_MI = 
{
	"OnSeenBall", (methodPointerType)&m46, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 47, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m47_MI = 
{
	"ChangeRotation", (methodPointerType)&m47, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 48, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m48_MI = 
{
	"SwingRotation", (methodPointerType)&m48, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 49, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m49_MI = 
{
	"Fire", (methodPointerType)&m49, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 50, NULL, (methodPointerType)NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t15_m50_ParameterInfos[] = 
{
	{"g", 0, 134217736, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern TypeInfo t15_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m50_MI = 
{
	"LookFor", (methodPointerType)&m50, &t15_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t15_m50_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 51, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m51_MI = 
{
	"Flee", (methodPointerType)&m51, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 52, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m52_MI = 
{
	"Strafe", (methodPointerType)&m52, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 53, NULL, (methodPointerType)NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t15_m53_ParameterInfos[] = 
{
	{"g", 0, 134217737, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern TypeInfo t15_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m53_MI = 
{
	"HeadingTowards", (methodPointerType)&m53, &t15_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t15_m53_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 54, NULL, (methodPointerType)NULL};
extern TypeInfo t15_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m54_MI = 
{
	"Update", (methodPointerType)&m54, &t15_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 55, NULL, (methodPointerType)NULL};
static MethodInfo* t15_MIs[] =
{
	&m42_MI,
	&m43_MI,
	&m44_MI,
	&m45_MI,
	&m46_MI,
	&m47_MI,
	&m48_MI,
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
	&m53_MI,
	&m54_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t15_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t15_0_0_0;
extern Il2CppType t15_1_0_0;
extern TypeInfo t3_TI;
struct t15;
extern TypeInfo t15_TI;
TypeInfo t15_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "EnemyScript", "", t15_MIs, NULL, t15_FIs, NULL, &t3_TI, NULL, NULL, &t15_TI, NULL, t15_VT, &EmptyCustomAttributesCache, &t15_TI, &t15_0_0_0, &t15_1_0_0, NULL, NULL, NULL, t15_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t15), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 13, 0, 21, 0, 0, 4, 0, 0};
#include "t16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t16_TI;
#include "t16MD.h"

extern TypeInfo t16_TI;
extern TypeInfo t34_TI;
extern TypeInfo t11_TI;
extern MethodInfo m86_MI;
extern MethodInfo m103_MI;
extern MethodInfo m167_MI;
extern MethodInfo m117_MI;
extern MethodInfo m112_MI;
extern MethodInfo m156_MI;
extern MethodInfo m157_MI;
extern MethodInfo m137_MI;
extern MethodInfo m168_MI;
extern MethodInfo m90_MI;
extern MethodInfo m120_MI;
extern MethodInfo m116_MI;
extern MethodInfo m118_MI;
extern MethodInfo m103_MI;


extern MethodInfo m55_MI;
 void m55 (t16 * __this, MethodInfo* method){
	{
		__this->f3 = (7.5f);
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m56_MI;
 void m56 (t16 * __this, MethodInfo* method){
	{
		t4 * L_0 = m103(__this, &m103_MI);
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m57_MI;
 void m57 (t16 * __this, MethodInfo* method){
	t11  V_0 = {0};
	t11  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t34_TI));
		float L_0 = m167(NULL, (t18*) &_stringLiteral12, &m167_MI);
		float L_1 = m167(NULL, (t18*) &_stringLiteral13, &m167_MI);
		m117((&V_0), L_0, (0.0f), ((-L_1)), &m117_MI);
		t11  L_2 = m112(NULL, &m112_MI);
		t50  L_3 = m156(NULL, (-45.0f), L_2, &m156_MI);
		t11  L_4 = m157(NULL, L_3, V_0, &m157_MI);
		V_0 = L_4;
		t11  L_5 = m137(NULL, &m137_MI);
		bool L_6 = m168(NULL, V_0, L_5, &m168_MI);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		t32 * L_7 = m90(__this, &m90_MI);
		m120(L_7, V_0, &m120_MI);
	}

IL_0053:
	{
		t4 * L_8 = (__this->f2);
		float L_9 = ((&V_0)->f1);
		float L_10 = (__this->f3);
		t4 * L_11 = (__this->f2);
		t11  L_12 = m116(L_11, &m116_MI);
		V_1 = L_12;
		float L_13 = ((&V_1)->f2);
		float L_14 = ((&V_0)->f3);
		float L_15 = (__this->f3);
		t11  L_16 = {0};
		m117(&L_16, ((float)(L_9*L_10)), L_13, ((float)(L_14*L_15)), &m117_MI);
		m118(L_8, L_16, &m118_MI);
		return;
	}
}
// Metadata Definition KeyboardMovement
extern Il2CppType t4_0_0_1;
FieldInfo t16_f2_FieldInfo = 
{
	"rigidbody", &t4_0_0_1, &t16_TI, offsetof(t16, f2), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t16_f3_FieldInfo = 
{
	"speed", &t33_0_0_1, &t16_TI, offsetof(t16, f3), &EmptyCustomAttributesCache};
static FieldInfo* t16_FIs[] =
{
	&t16_f2_FieldInfo,
	&t16_f3_FieldInfo,
	NULL
};
extern TypeInfo t16_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m55_MI = 
{
	".ctor", (methodPointerType)&m55, &t16_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 56, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m56_MI = 
{
	"Start", (methodPointerType)&m56, &t16_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 57, NULL, (methodPointerType)NULL};
extern TypeInfo t16_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m57_MI = 
{
	"Update", (methodPointerType)&m57, &t16_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 58, NULL, (methodPointerType)NULL};
static MethodInfo* t16_MIs[] =
{
	&m55_MI,
	&m56_MI,
	&m57_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t16_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_1_0_0;
extern TypeInfo t3_TI;
struct t16;
extern TypeInfo t16_TI;
TypeInfo t16_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "KeyboardMovement", "", t16_MIs, NULL, t16_FIs, NULL, &t3_TI, NULL, NULL, &t16_TI, NULL, t16_VT, &EmptyCustomAttributesCache, &t16_TI, &t16_0_0_0, &t16_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t16), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 4, 0, 0};
#include "t17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t17_TI;
#include "t17MD.h"

#include "t19.h"
#include "t24.h"
extern TypeInfo t17_TI;
extern TypeInfo t55_TI;
extern TypeInfo t20_TI;
extern TypeInfo t11_TI;
extern TypeInfo t5_TI;
#include "t56MD.h"
#include "t19MD.h"
#include "t55MD.h"
#include "t24MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m169_MI;
extern MethodInfo m170_MI;
extern MethodInfo m171_MI;
extern MethodInfo m172_MI;
extern MethodInfo m173_MI;
extern MethodInfo m174_MI;
extern MethodInfo m64_MI;
extern MethodInfo m65_MI;
extern MethodInfo m175_MI;
extern MethodInfo m60_MI;
extern MethodInfo m176_MI;
extern MethodInfo m66_MI;
extern MethodInfo m165_MI;
extern MethodInfo m124_MI;
extern MethodInfo m122_MI;
extern MethodInfo m62_MI;
extern MethodInfo m177_MI;
extern MethodInfo m61_MI;
extern MethodInfo m108_MI;
extern MethodInfo m93_MI;
extern MethodInfo m117_MI;
extern MethodInfo m178_MI;
extern MethodInfo m152_MI;
extern MethodInfo m166_MI;
extern MethodInfo m179_MI;
extern MethodInfo m180_MI;
extern MethodInfo m82_MI;
extern MethodInfo m83_MI;
extern MethodInfo m80_MI;
extern MethodInfo m81_MI;
extern MethodInfo m84_MI;
extern MethodInfo m181_MI;
extern MethodInfo m182_MI;
extern MethodInfo m183_MI;
extern MethodInfo m155_MI;
extern MethodInfo m141_MI;
extern MethodInfo m113_MI;
extern MethodInfo m87_MI;
struct t56;
#include "t56.h"
 t19 * m169 (t28 * __this, t18* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m169_MI;
struct t5;
#define m180(__this, method) (t24 *)m95_gshared((t5 *)__this, method)
extern MethodInfo m180_MI;


extern MethodInfo m58_MI;
 void m58 (t17 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m59_MI;
 void m59 (t17 * __this, MethodInfo* method){
	t19 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t18* L_0 = (__this->f2);
		t19 * L_1 = m169(NULL, L_0, &m169_MI);
		V_0 = L_1;
		t57* L_2 = m170(V_0, &m170_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		float L_3 = sqrtf((((float)(((int32_t)(((t29 *)L_2)->max_length))))));
		V_1 = (((int32_t)L_3));
		V_2 = 0;
		goto IL_0133;
	}

IL_0023:
	{
		V_3 = 0;
		goto IL_0128;
	}

IL_002a:
	{
		t20  L_4 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_5 = m173(NULL, &m173_MI);
		bool L_6 = m174(NULL, L_4, L_5, &m174_MI);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		m64(__this, V_2, V_3, &m64_MI);
		m65(__this, V_2, V_3, &m65_MI);
	}

IL_0051:
	{
		t20  L_7 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_8 = {0};
		m175(&L_8, (1.0f), (1.0f), (0.0f), &m175_MI);
		bool L_9 = m174(NULL, L_7, L_8, &m174_MI);
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		m64(__this, V_2, V_3, &m64_MI);
		m60(__this, V_2, V_3, &m60_MI);
	}

IL_0087:
	{
		t20  L_10 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_11 = m176(NULL, &m176_MI);
		bool L_12 = m174(NULL, L_10, L_11, &m174_MI);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		m64(__this, V_2, V_3, &m64_MI);
		m66(__this, V_2, V_3, &m66_MI);
	}

IL_00ae:
	{
		t20  L_13 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_14 = m165(NULL, &m165_MI);
		bool L_15 = m174(NULL, L_13, L_14, &m174_MI);
		if (L_15)
		{
			goto IL_00dc;
		}
	}
	{
		t20  L_16 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_17 = m124(NULL, &m124_MI);
		bool L_18 = m174(NULL, L_16, L_17, &m174_MI);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}

IL_00dc:
	{
		m64(__this, V_2, V_3, &m64_MI);
	}

IL_00e4:
	{
		t20  L_19 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_20 = m122(NULL, &m122_MI);
		bool L_21 = m174(NULL, L_19, L_20, &m174_MI);
		if (!L_21)
		{
			goto IL_0104;
		}
	}
	{
		m62(__this, V_2, V_3, V_0, &m62_MI);
	}

IL_0104:
	{
		t20  L_22 = m172(V_0, V_2, V_3, &m172_MI);
		t20  L_23 = m177(NULL, &m177_MI);
		bool L_24 = m174(NULL, L_22, L_23, &m174_MI);
		if (!L_24)
		{
			goto IL_0124;
		}
	}
	{
		m61(__this, V_2, V_3, V_0, &m61_MI);
	}

IL_0124:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0128:
	{
		if ((((int32_t)V_3) < ((int32_t)V_1)))
		{
			goto IL_002a;
		}
	}
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0133:
	{
		if ((((int32_t)V_2) < ((int32_t)V_1)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
extern MethodInfo m60_MI;
 void m60 (t17 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t11  V_0 = {0};
	{
		t5 * L_0 = (__this->f10);
		t5 * L_1 = (__this->f10);
		t32 * L_2 = m108(L_1, &m108_MI);
		t11  L_3 = m93(L_2, &m93_MI);
		V_0 = L_3;
		float L_4 = ((&V_0)->f2);
		t11  L_5 = {0};
		m117(&L_5, (((float)((int32_t)(p0*5)))), ((float)(((float)(L_4/(2.0f)))+(0.01f))), (((float)((int32_t)(p1*5)))), &m117_MI);
		t50  L_6 = m178(NULL, &m178_MI);
		m152(NULL, L_0, L_5, L_6, &m152_MI);
		return;
	}
}
extern MethodInfo m61_MI;
 void m61 (t17 * __this, int32_t p0, int32_t p1, t19 * p2, MethodInfo* method){
	t5 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t5 * L_0 = (__this->f9);
		t11  L_1 = {0};
		m117(&L_1, (((float)((int32_t)(p0*5)))), (2.5f), (((float)((int32_t)(p1*5)))), &m117_MI);
		t50  L_2 = m178(NULL, &m178_MI);
		t43 * L_3 = m152(NULL, L_0, L_1, L_2, &m152_MI);
		V_0 = ((t5 *)Castclass(L_3, InitializedTypeInfo(&t5_TI)));
		V_1 = 0;
		t20  L_4 = m172(p2, ((int32_t)(p0+1)), p1, &m172_MI);
		t20  L_5 = m166(NULL, &m166_MI);
		bool L_6 = m179(NULL, L_4, L_5, &m179_MI);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		t20  L_7 = m172(p2, ((int32_t)(p0+1)), p1, &m172_MI);
		t20  L_8 = m177(NULL, &m177_MI);
		bool L_9 = m179(NULL, L_7, L_8, &m179_MI);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		t24 * L_10 = m180(V_0, &m180_MI);
		m82(L_10, &m82_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_006b:
	{
		t20  L_11 = m172(p2, ((int32_t)(p0-1)), p1, &m172_MI);
		t20  L_12 = m166(NULL, &m166_MI);
		bool L_13 = m179(NULL, L_11, L_12, &m179_MI);
		if (!L_13)
		{
			goto IL_00ac;
		}
	}
	{
		t20  L_14 = m172(p2, ((int32_t)(p0-1)), p1, &m172_MI);
		t20  L_15 = m177(NULL, &m177_MI);
		bool L_16 = m179(NULL, L_14, L_15, &m179_MI);
		if (!L_16)
		{
			goto IL_00ac;
		}
	}
	{
		t24 * L_17 = m180(V_0, &m180_MI);
		m83(L_17, &m83_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_00ac:
	{
		t20  L_18 = m172(p2, p0, ((int32_t)(p1+1)), &m172_MI);
		t20  L_19 = m166(NULL, &m166_MI);
		bool L_20 = m179(NULL, L_18, L_19, &m179_MI);
		if (!L_20)
		{
			goto IL_00ed;
		}
	}
	{
		t20  L_21 = m172(p2, p0, ((int32_t)(p1+1)), &m172_MI);
		t20  L_22 = m177(NULL, &m177_MI);
		bool L_23 = m179(NULL, L_21, L_22, &m179_MI);
		if (!L_23)
		{
			goto IL_00ed;
		}
	}
	{
		t24 * L_24 = m180(V_0, &m180_MI);
		m80(L_24, &m80_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_00ed:
	{
		t20  L_25 = m172(p2, p0, ((int32_t)(p1-1)), &m172_MI);
		t20  L_26 = m166(NULL, &m166_MI);
		bool L_27 = m179(NULL, L_25, L_26, &m179_MI);
		if (!L_27)
		{
			goto IL_012e;
		}
	}
	{
		t20  L_28 = m172(p2, p0, ((int32_t)(p1-1)), &m172_MI);
		t20  L_29 = m177(NULL, &m177_MI);
		bool L_30 = m179(NULL, L_28, L_29, &m179_MI);
		if (!L_30)
		{
			goto IL_012e;
		}
	}
	{
		t24 * L_31 = m180(V_0, &m180_MI);
		m81(L_31, &m81_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_012e:
	{
		if ((((uint32_t)V_1) != ((uint32_t)4)))
		{
			goto IL_0140;
		}
	}
	{
		t24 * L_32 = m180(V_0, &m180_MI);
		m84(L_32, &m84_MI);
	}

IL_0140:
	{
		return;
	}
}
extern MethodInfo m62_MI;
 void m62 (t17 * __this, int32_t p0, int32_t p1, t19 * p2, MethodInfo* method){
	t5 * V_0 = {0};
	{
		t5 * L_0 = (__this->f7);
		t11  L_1 = {0};
		m117(&L_1, (((float)((int32_t)(p0*5)))), (2.5f), (((float)((int32_t)(p1*5)))), &m117_MI);
		t50  L_2 = m178(NULL, &m178_MI);
		t43 * L_3 = m152(NULL, L_0, L_1, L_2, &m152_MI);
		V_0 = ((t5 *)Castclass(L_3, InitializedTypeInfo(&t5_TI)));
		t20  L_4 = m172(p2, ((int32_t)(p0+1)), p1, &m172_MI);
		t20  L_5 = m124(NULL, &m124_MI);
		bool L_6 = m174(NULL, L_4, L_5, &m174_MI);
		if (!L_6)
		{
			goto IL_0079;
		}
	}
	{
		t20  L_7 = m172(p2, p0, ((int32_t)(p1+1)), &m172_MI);
		t20  L_8 = m124(NULL, &m124_MI);
		bool L_9 = m174(NULL, L_7, L_8, &m174_MI);
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		t32 * L_10 = m108(V_0, &m108_MI);
		t50  L_11 = m181(NULL, (0.0f), (0.0f), (0.0f), &m181_MI);
		m182(L_10, L_11, &m182_MI);
	}

IL_0079:
	{
		t20  L_12 = m172(p2, ((int32_t)(p0+1)), p1, &m172_MI);
		t20  L_13 = m124(NULL, &m124_MI);
		bool L_14 = m174(NULL, L_12, L_13, &m174_MI);
		if (!L_14)
		{
			goto IL_00ca;
		}
	}
	{
		t20  L_15 = m172(p2, p0, ((int32_t)(p1-1)), &m172_MI);
		t20  L_16 = m124(NULL, &m124_MI);
		bool L_17 = m174(NULL, L_15, L_16, &m174_MI);
		if (!L_17)
		{
			goto IL_00ca;
		}
	}
	{
		t32 * L_18 = m108(V_0, &m108_MI);
		t50  L_19 = m181(NULL, (0.0f), (90.0f), (0.0f), &m181_MI);
		m182(L_18, L_19, &m182_MI);
	}

IL_00ca:
	{
		t20  L_20 = m172(p2, ((int32_t)(p0-1)), p1, &m172_MI);
		t20  L_21 = m124(NULL, &m124_MI);
		bool L_22 = m174(NULL, L_20, L_21, &m174_MI);
		if (!L_22)
		{
			goto IL_011b;
		}
	}
	{
		t20  L_23 = m172(p2, p0, ((int32_t)(p1-1)), &m172_MI);
		t20  L_24 = m124(NULL, &m124_MI);
		bool L_25 = m174(NULL, L_23, L_24, &m174_MI);
		if (!L_25)
		{
			goto IL_011b;
		}
	}
	{
		t32 * L_26 = m108(V_0, &m108_MI);
		t50  L_27 = m181(NULL, (0.0f), (180.0f), (0.0f), &m181_MI);
		m182(L_26, L_27, &m182_MI);
	}

IL_011b:
	{
		t20  L_28 = m172(p2, ((int32_t)(p0-1)), p1, &m172_MI);
		t20  L_29 = m124(NULL, &m124_MI);
		bool L_30 = m174(NULL, L_28, L_29, &m174_MI);
		if (!L_30)
		{
			goto IL_016c;
		}
	}
	{
		t20  L_31 = m172(p2, p0, ((int32_t)(p1+1)), &m172_MI);
		t20  L_32 = m124(NULL, &m124_MI);
		bool L_33 = m174(NULL, L_31, L_32, &m174_MI);
		if (!L_33)
		{
			goto IL_016c;
		}
	}
	{
		t32 * L_34 = m108(V_0, &m108_MI);
		t50  L_35 = m181(NULL, (0.0f), (270.0f), (0.0f), &m181_MI);
		m182(L_34, L_35, &m182_MI);
	}

IL_016c:
	{
		return;
	}
}
extern MethodInfo m63_MI;
 void m63 (t17 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t11  V_0 = {0};
	{
		t5 * L_0 = (__this->f8);
		t5 * L_1 = (__this->f8);
		t32 * L_2 = m108(L_1, &m108_MI);
		t11  L_3 = m93(L_2, &m93_MI);
		V_0 = L_3;
		float L_4 = ((&V_0)->f2);
		t11  L_5 = {0};
		m117(&L_5, (((float)((int32_t)(p0*5)))), ((float)(L_4/(2.0f))), (((float)((int32_t)(p1*5)))), &m117_MI);
		int32_t L_6 = m183(NULL, 0, 4, &m183_MI);
		t50  L_7 = m181(NULL, (0.0f), (((float)((int32_t)(L_6*((int32_t)90))))), (0.0f), &m181_MI);
		m152(NULL, L_0, L_5, L_7, &m152_MI);
		return;
	}
}
extern MethodInfo m64_MI;
 void m64 (t17 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t5 * V_0 = {0};
	float V_1 = 0.0f;
	t50  V_2 = {0};
	{
		float L_0 = m155(NULL, (0.0f), (1.0f), &m155_MI);
		V_1 = L_0;
		if ((((float)V_1) >= ((float)(0.33f))))
		{
			goto IL_0027;
		}
	}
	{
		t5 * L_1 = (__this->f3);
		V_0 = L_1;
		goto IL_0045;
	}

IL_0027:
	{
		if ((((float)V_1) >= ((float)(0.66f))))
		{
			goto IL_003e;
		}
	}
	{
		t5 * L_2 = (__this->f4);
		V_0 = L_2;
		goto IL_0045;
	}

IL_003e:
	{
		t5 * L_3 = (__this->f5);
		V_0 = L_3;
	}

IL_0045:
	{
		int32_t L_4 = m183(NULL, 0, 4, &m183_MI);
		t50  L_5 = m181(NULL, (0.0f), (((float)((int32_t)(L_4*((int32_t)90))))), (0.0f), &m181_MI);
		V_2 = L_5;
		t11  L_6 = {0};
		m117(&L_6, (((float)((int32_t)(p0*5)))), (0.0f), (((float)((int32_t)(p1*5)))), &m117_MI);
		m152(NULL, V_0, L_6, V_2, &m152_MI);
		return;
	}
}
extern MethodInfo m65_MI;
 void m65 (t17 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m141(NULL, (t18*) &_stringLiteral14, &m141_MI);
		t5 * L_0 = (__this->f6);
		t32 * L_1 = m108(L_0, &m108_MI);
		t11  L_2 = {0};
		m117(&L_2, (((float)((int32_t)(p0*5)))), (1.01f), (((float)((int32_t)(p1*5)))), &m117_MI);
		m113(L_1, L_2, &m113_MI);
		return;
	}
}
extern MethodInfo m66_MI;
 void m66 (t17 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t11  V_0 = {0};
	{
		m117((&V_0), (((float)((int32_t)(p0*5)))), (50.0f), (((float)((int32_t)(p1*5)))), &m117_MI);
		t5 * L_0 = m87(NULL, (t18*) &_stringLiteral1, &m87_MI);
		t32 * L_1 = m108(L_0, &m108_MI);
		m113(L_1, V_0, &m113_MI);
		return;
	}
}
extern MethodInfo m67_MI;
 bool m67 (t17 * __this, t20  p0, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		float L_0 = ((&p0)->f0);
		if ((((float)L_0) > ((float)(0.25f))))
		{
			goto IL_0035;
		}
	}
	{
		float L_1 = ((&p0)->f1);
		if ((((float)L_1) < ((float)(0.9f))))
		{
			goto IL_0035;
		}
	}
	{
		float L_2 = ((&p0)->f2);
		G_B4_0 = ((((int32_t)((((float)L_2) > ((float)(0.25f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = 0;
	}

IL_0036:
	{
		return G_B4_0;
	}
}
extern MethodInfo m68_MI;
 void m68 (t17 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition MapGen
extern Il2CppType t18_0_0_6;
FieldInfo t17_f2_FieldInfo = 
{
	"FileName", &t18_0_0_6, &t17_TI, offsetof(t17, f2), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f3_FieldInfo = 
{
	"Floor", &t5_0_0_6, &t17_TI, offsetof(t17, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f4_FieldInfo = 
{
	"FloorTwo", &t5_0_0_6, &t17_TI, offsetof(t17, f4), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f5_FieldInfo = 
{
	"FloorThree", &t5_0_0_6, &t17_TI, offsetof(t17, f5), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f6_FieldInfo = 
{
	"Player", &t5_0_0_6, &t17_TI, offsetof(t17, f6), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f7_FieldInfo = 
{
	"Triangle", &t5_0_0_6, &t17_TI, offsetof(t17, f7), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f8_FieldInfo = 
{
	"Ledge", &t5_0_0_6, &t17_TI, offsetof(t17, f8), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f9_FieldInfo = 
{
	"Wall", &t5_0_0_6, &t17_TI, offsetof(t17, f9), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t17_f10_FieldInfo = 
{
	"Enemy", &t5_0_0_6, &t17_TI, offsetof(t17, f10), &EmptyCustomAttributesCache};
static FieldInfo* t17_FIs[] =
{
	&t17_f2_FieldInfo,
	&t17_f3_FieldInfo,
	&t17_f4_FieldInfo,
	&t17_f5_FieldInfo,
	&t17_f6_FieldInfo,
	&t17_f7_FieldInfo,
	&t17_f8_FieldInfo,
	&t17_f9_FieldInfo,
	&t17_f10_FieldInfo,
	NULL
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m58_MI = 
{
	".ctor", (methodPointerType)&m58, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 59, NULL, (methodPointerType)NULL};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m59_MI = 
{
	"Start", (methodPointerType)&m59, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 60, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t17_m60_ParameterInfos[] = 
{
	{"x", 0, 134217738, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217739, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m60_MI = 
{
	"SpawnEnemy", (methodPointerType)&m60, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t17_m60_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 61, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t19_0_0_0;
static ParameterInfo t17_m61_ParameterInfos[] = 
{
	{"x", 0, 134217740, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217741, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"map", 2, 134217742, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m61_MI = 
{
	"SpawnWall", (methodPointerType)&m61, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47_t28, t17_m61_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 62, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t19_0_0_0;
static ParameterInfo t17_m62_ParameterInfos[] = 
{
	{"x", 0, 134217743, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217744, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"map", 2, 134217745, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m62_MI = 
{
	"SpawnTriangle", (methodPointerType)&m62, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47_t28, t17_m62_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 63, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t17_m63_ParameterInfos[] = 
{
	{"x", 0, 134217746, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217747, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m63_MI = 
{
	"SpawnLedge", (methodPointerType)&m63, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t17_m63_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 64, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t17_m64_ParameterInfos[] = 
{
	{"x", 0, 134217748, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217749, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m64_MI = 
{
	"SpawnFloor", (methodPointerType)&m64, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t17_m64_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 65, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t17_m65_ParameterInfos[] = 
{
	{"x", 0, 134217750, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217751, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m65_MI = 
{
	"SpawnPlayer", (methodPointerType)&m65, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t17_m65_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 66, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t17_m66_ParameterInfos[] = 
{
	{"x", 0, 134217752, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"y", 1, 134217753, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m66_MI = 
{
	"SpawnBall", (methodPointerType)&m66, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t17_m66_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 67, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t17_m67_ParameterInfos[] = 
{
	{"pixel", 0, 134217754, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t17_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m67_MI = 
{
	"IsFloor", (methodPointerType)&m67, &t17_TI, &t31_0_0_0, RuntimeInvoker_t31_t20, t17_m67_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 68, NULL, (methodPointerType)NULL};
extern TypeInfo t17_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m68_MI = 
{
	"Update", (methodPointerType)&m68, &t17_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 69, NULL, (methodPointerType)NULL};
static MethodInfo* t17_MIs[] =
{
	&m58_MI,
	&m59_MI,
	&m60_MI,
	&m61_MI,
	&m62_MI,
	&m63_MI,
	&m64_MI,
	&m65_MI,
	&m66_MI,
	&m67_MI,
	&m68_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t17_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t17_0_0_0;
extern Il2CppType t17_1_0_0;
extern TypeInfo t3_TI;
struct t17;
extern TypeInfo t17_TI;
TypeInfo t17_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "MapGen", "", t17_MIs, NULL, t17_FIs, NULL, &t3_TI, NULL, NULL, &t17_TI, NULL, t17_VT, &EmptyCustomAttributesCache, &t17_TI, &t17_0_0_0, &t17_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t17), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 11, 0, 9, 0, 0, 4, 0, 0};
#include "t21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t21_TI;
#include "t21MD.h"

extern TypeInfo t18_TI;
extern TypeInfo t55_TI;
extern TypeInfo t21_TI;
extern TypeInfo t11_TI;
extern MethodInfo m86_MI;
extern MethodInfo m125_MI;
extern MethodInfo m126_MI;
extern MethodInfo m128_MI;
extern MethodInfo m154_MI;
extern MethodInfo m184_MI;
extern MethodInfo m7_MI;
extern MethodInfo m185_MI;
extern MethodInfo m94_MI;
extern MethodInfo m186_MI;
extern MethodInfo m90_MI;
extern MethodInfo m91_MI;
extern MethodInfo m112_MI;
extern MethodInfo m93_MI;
extern MethodInfo m105_MI;
extern MethodInfo m133_MI;
extern MethodInfo m178_MI;
extern MethodInfo m152_MI;
extern MethodInfo m6_MI;
extern MethodInfo m154_MI;
struct t35;
#define m184(__this, method) (t2 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m184_MI;


extern MethodInfo m69_MI;
 void m69 (t21 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m70_MI;
 void m70 (t21 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m71_MI;
 void m71 (t21 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m72_MI;
 void m72 (t21 * __this, t9 * p0, MethodInfo* method){
	t4 * V_0 = {0};
	t11  V_1 = {0};
	{
		t5 * L_0 = m125(p0, &m125_MI);
		t18* L_1 = m126(L_0, &m126_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_2 = m128(NULL, L_1, (t18*) &_stringLiteral1, &m128_MI);
		if (!L_2)
		{
			goto IL_00ab;
		}
	}
	{
		t5 * L_3 = m125(p0, &m125_MI);
		t4 * L_4 = m154(L_3, &m154_MI);
		V_0 = L_4;
		t2 * L_5 = m184(V_0, &m184_MI);
		float L_6 = m7(L_5, &m7_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		float L_7 = fabsf(L_6);
		if ((((float)L_7) <= ((float)(5.0f))))
		{
			goto IL_009b;
		}
	}
	{
		t5 * L_8 = m94(__this, &m94_MI);
		m186(L_8, 0, &m186_MI);
		t5 * L_9 = (__this->f2);
		t32 * L_10 = m90(__this, &m90_MI);
		t11  L_11 = m91(L_10, &m91_MI);
		t11  L_12 = m112(NULL, &m112_MI);
		t32 * L_13 = m90(__this, &m90_MI);
		t11  L_14 = m93(L_13, &m93_MI);
		V_1 = L_14;
		float L_15 = ((&V_1)->f2);
		t11  L_16 = m105(NULL, L_12, ((float)(((float)(L_15/(2.0f)))-(0.01f))), &m105_MI);
		t11  L_17 = m133(NULL, L_11, L_16, &m133_MI);
		t50  L_18 = m178(NULL, &m178_MI);
		m152(NULL, L_9, L_17, L_18, &m152_MI);
		goto IL_00ab;
	}

IL_009b:
	{
		t2 * L_19 = m184(V_0, &m184_MI);
		m6(L_19, (0.0f), &m6_MI);
	}

IL_00ab:
	{
		return;
	}
}
// Metadata Definition Squishable
extern Il2CppType t5_0_0_6;
FieldInfo t21_f2_FieldInfo = 
{
	"splat", &t5_0_0_6, &t21_TI, offsetof(t21, f2), &EmptyCustomAttributesCache};
static FieldInfo* t21_FIs[] =
{
	&t21_f2_FieldInfo,
	NULL
};
extern TypeInfo t21_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m69_MI = 
{
	".ctor", (methodPointerType)&m69, &t21_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 70, NULL, (methodPointerType)NULL};
extern TypeInfo t21_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m70_MI = 
{
	"Start", (methodPointerType)&m70, &t21_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 71, NULL, (methodPointerType)NULL};
extern TypeInfo t21_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m71_MI = 
{
	"Update", (methodPointerType)&m71, &t21_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 72, NULL, (methodPointerType)NULL};
extern Il2CppType t9_0_0_0;
static ParameterInfo t21_m72_ParameterInfos[] = 
{
	{"c", 0, 134217755, &EmptyCustomAttributesCache, &t9_0_0_0},
};
extern TypeInfo t21_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m72_MI = 
{
	"OnCollisionEnter", (methodPointerType)&m72, &t21_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t21_m72_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 73, NULL, (methodPointerType)NULL};
static MethodInfo* t21_MIs[] =
{
	&m69_MI,
	&m70_MI,
	&m71_MI,
	&m72_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t21_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t21_0_0_0;
extern Il2CppType t21_1_0_0;
extern TypeInfo t3_TI;
struct t21;
extern TypeInfo t21_TI;
TypeInfo t21_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Squishable", "", t21_MIs, NULL, t21_FIs, NULL, &t3_TI, NULL, NULL, &t21_TI, NULL, t21_VT, &EmptyCustomAttributesCache, &t21_TI, &t21_0_0_0, &t21_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t21), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 4, 0, 0};
#include "t22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t22_TI;
#include "t22MD.h"

extern TypeInfo t20_TI;
extern MethodInfo m86_MI;
extern MethodInfo m100_MI;
extern MethodInfo m121_MI;
extern MethodInfo m187_MI;
extern MethodInfo m123_MI;
extern MethodInfo m100_MI;


extern MethodInfo m73_MI;
 void m73 (t22 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m74_MI;
 void m74 (t22 * __this, MethodInfo* method){
	t20  V_0 = {0};
	{
		t8 * L_0 = m100(__this, &m100_MI);
		t39 * L_1 = m121(L_0, &m121_MI);
		t20  L_2 = m187(L_1, &m187_MI);
		V_0 = L_2;
		(&V_0)->f3 = (0.75f);
		t8 * L_3 = m100(__this, &m100_MI);
		t39 * L_4 = m121(L_3, &m121_MI);
		m123(L_4, V_0, &m123_MI);
		return;
	}
}
extern MethodInfo m75_MI;
 void m75 (t22 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition Transparency
extern Il2CppType t33_0_0_32849;
FieldInfo t22_f2_FieldInfo = 
{
	"Alpha", &t33_0_0_32849, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t22_FIs[] =
{
	&t22_f2_FieldInfo,
	NULL
};
static const float t22_f2_DefaultValueData = 0.75f;
extern Il2CppType t33_0_0_0;
static Il2CppFieldDefaultValueEntry t22_f2_DefaultValue = 
{
	&t22_f2_FieldInfo, { (char*)&t22_f2_DefaultValueData, &t33_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t22_FDVs[] = 
{
	&t22_f2_DefaultValue,
	NULL
};
extern TypeInfo t22_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m73_MI = 
{
	".ctor", (methodPointerType)&m73, &t22_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 74, NULL, (methodPointerType)NULL};
extern TypeInfo t22_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m74_MI = 
{
	"Start", (methodPointerType)&m74, &t22_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 75, NULL, (methodPointerType)NULL};
extern TypeInfo t22_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m75_MI = 
{
	"Update", (methodPointerType)&m75, &t22_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 76, NULL, (methodPointerType)NULL};
static MethodInfo* t22_MIs[] =
{
	&m73_MI,
	&m74_MI,
	&m75_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t22_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t22_0_0_0;
extern Il2CppType t22_1_0_0;
extern TypeInfo t3_TI;
struct t22;
extern TypeInfo t22_TI;
TypeInfo t22_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Transparency", "", t22_MIs, NULL, t22_FIs, NULL, &t3_TI, NULL, NULL, &t22_TI, NULL, t22_VT, &EmptyCustomAttributesCache, &t22_TI, &t22_0_0_0, &t22_1_0_0, NULL, NULL, NULL, t22_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t22), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t23_TI;
#include "t23MD.h"

#include "t58.h"
#include "t59.h"
#include "t60.h"
#include "mscorlib_ArrayTypes.h"
#include "t27.h"
#include "t25.h"
#include "t61.h"
#include "t62.h"
extern TypeInfo t63_TI;
extern TypeInfo t11_TI;
extern TypeInfo t64_TI;
extern TypeInfo t47_TI;
extern TypeInfo t27_TI;
extern TypeInfo t65_TI;
extern TypeInfo t59_TI;
#include "t58MD.h"
#include "t60MD.h"
#include "t27MD.h"
#include "t66MD.h"
#include "t59MD.h"
extern MethodInfo m86_MI;
extern MethodInfo m94_MI;
extern MethodInfo m188_MI;
extern MethodInfo m189_MI;
extern MethodInfo m190_MI;
extern MethodInfo m117_MI;
extern MethodInfo m133_MI;
extern MethodInfo m191_MI;
extern MethodInfo m192_MI;
extern MethodInfo m193_MI;
extern MethodInfo m194_MI;
extern MethodInfo m195_MI;
extern MethodInfo m196_MI;
extern MethodInfo m197_MI;
extern FieldInfo t27_f0_FieldInfo;
struct t5;
#define m188(__this, method) (t58 *)m95_gshared((t5 *)__this, method)
extern MethodInfo m188_MI;
struct t5;
 t58 * m190 (t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m190_MI;
struct t5;
 t62 * m197 (t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo m197_MI;


extern MethodInfo m76_MI;
 void m76 (t23 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m77_MI;
 void m77 (t23 * __this, MethodInfo* method){
	t58 * V_0 = {0};
	t63* V_1 = {0};
	int32_t V_2 = 0;
	t65* V_3 = {0};
	{
		t5 * L_0 = m94(__this, &m94_MI);
		t58 * L_1 = m188(L_0, &m188_MI);
		m189(NULL, L_1, &m189_MI);
		t5 * L_2 = m94(__this, &m94_MI);
		t58 * L_3 = m190(L_2, &m190_MI);
		V_0 = L_3;
		t63* L_4 = ((t63*)SZArrayNew(InitializedTypeInfo(&t63_TI), 6));
		t11  L_5 = {0};
		m117(&L_5, (0.0f), (0.0f), (1.0f), &m117_MI);
		*((t11 *)(t11 *)SZArrayLdElema(L_4, 0)) = L_5;
		t63* L_6 = L_4;
		t11  L_7 = {0};
		m117(&L_7, (0.0f), (0.0f), (0.0f), &m117_MI);
		*((t11 *)(t11 *)SZArrayLdElema(L_6, 1)) = L_7;
		t63* L_8 = L_6;
		t11  L_9 = {0};
		m117(&L_9, (1.0f), (0.0f), (0.0f), &m117_MI);
		*((t11 *)(t11 *)SZArrayLdElema(L_8, 2)) = L_9;
		t63* L_10 = L_8;
		t11  L_11 = {0};
		m117(&L_11, (0.0f), (1.0f), (1.0f), &m117_MI);
		*((t11 *)(t11 *)SZArrayLdElema(L_10, 3)) = L_11;
		t63* L_12 = L_10;
		t11  L_13 = {0};
		m117(&L_13, (0.0f), (1.0f), (0.0f), &m117_MI);
		*((t11 *)(t11 *)SZArrayLdElema(L_12, 4)) = L_13;
		t63* L_14 = L_12;
		t11  L_15 = {0};
		m117(&L_15, (1.0f), (1.0f), (0.0f), &m117_MI);
		*((t11 *)(t11 *)SZArrayLdElema(L_14, 5)) = L_15;
		V_1 = L_14;
		V_2 = 0;
		goto IL_0119;
	}

IL_00ea:
	{
		t11 * L_16 = ((t11 *)(t11 *)SZArrayLdElema(V_1, V_2));
		t11  L_17 = {0};
		m117(&L_17, (0.5f), (0.5f), (0.5f), &m117_MI);
		t11  L_18 = m133(NULL, (*(t11 *)L_16), L_17, &m133_MI);
		*L_16 = L_18;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0119:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t29 *)V_1)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		t60 * L_19 = m191(V_0, &m191_MI);
		m192(L_19, V_1, &m192_MI);
		t60 * L_20 = m191(V_0, &m191_MI);
		t64* L_21 = ((t64*)SZArrayNew(InitializedTypeInfo(&t64_TI), ((int32_t)24)));
		m193(NULL, (t29 *)(t29 *)L_21, LoadFieldToken(&t27_f0_FieldInfo), &m193_MI);
		m194(L_20, L_21, &m194_MI);
		t65* L_22 = ((t65*)SZArrayNew(InitializedTypeInfo(&t65_TI), 6));
		t59  L_23 = {0};
		m195(&L_23, (0.0f), (1.0f), &m195_MI);
		*((t59 *)(t59 *)SZArrayLdElema(L_22, 0)) = L_23;
		t65* L_24 = L_22;
		t59  L_25 = {0};
		m195(&L_25, (1.0f), (1.0f), &m195_MI);
		*((t59 *)(t59 *)SZArrayLdElema(L_24, 1)) = L_25;
		t65* L_26 = L_24;
		t59  L_27 = {0};
		m195(&L_27, (1.0f), (1.0f), &m195_MI);
		*((t59 *)(t59 *)SZArrayLdElema(L_26, 2)) = L_27;
		t65* L_28 = L_26;
		t59  L_29 = {0};
		m195(&L_29, (0.0f), (0.0f), &m195_MI);
		*((t59 *)(t59 *)SZArrayLdElema(L_28, 3)) = L_29;
		t65* L_30 = L_28;
		t59  L_31 = {0};
		m195(&L_31, (1.0f), (0.0f), &m195_MI);
		*((t59 *)(t59 *)SZArrayLdElema(L_30, 4)) = L_31;
		t65* L_32 = L_30;
		t59  L_33 = {0};
		m195(&L_33, (1.0f), (0.0f), &m195_MI);
		*((t59 *)(t59 *)SZArrayLdElema(L_32, 5)) = L_33;
		V_3 = L_32;
		t60 * L_34 = m191(V_0, &m191_MI);
		m196(L_34, V_3, &m196_MI);
		t5 * L_35 = m94(__this, &m94_MI);
		m197(L_35, &m197_MI);
		return;
	}
}
extern MethodInfo m78_MI;
 void m78 (t23 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition Triangle
extern TypeInfo t23_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m76_MI = 
{
	".ctor", (methodPointerType)&m76, &t23_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 77, NULL, (methodPointerType)NULL};
extern TypeInfo t23_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m77_MI = 
{
	"Start", (methodPointerType)&m77, &t23_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 78, NULL, (methodPointerType)NULL};
extern TypeInfo t23_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m78_MI = 
{
	"Update", (methodPointerType)&m78, &t23_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 79, NULL, (methodPointerType)NULL};
static MethodInfo* t23_MIs[] =
{
	&m76_MI,
	&m77_MI,
	&m78_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t23_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t23_0_0_0;
extern Il2CppType t23_1_0_0;
extern TypeInfo t3_TI;
struct t23;
extern TypeInfo t23_TI;
TypeInfo t23_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Triangle", "", t23_MIs, NULL, NULL, NULL, &t3_TI, NULL, NULL, &t23_TI, NULL, t23_VT, &EmptyCustomAttributesCache, &t23_TI, &t23_0_0_0, &t23_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t23), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t24_TI;

#include "t67.h"
extern TypeInfo t24_TI;
extern MethodInfo m86_MI;
extern MethodInfo m186_MI;
extern MethodInfo m198_MI;
extern MethodInfo m199_MI;
struct t35;
#define m198(__this, method) (t67 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m198_MI;


extern MethodInfo m79_MI;
 void m79 (t24 * __this, MethodInfo* method){
	{
		m86(__this, &m86_MI);
		return;
	}
}
extern MethodInfo m80_MI;
 void m80 (t24 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f2);
		m186(L_0, 1, &m186_MI);
		return;
	}
}
extern MethodInfo m81_MI;
 void m81 (t24 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f3);
		m186(L_0, 1, &m186_MI);
		return;
	}
}
extern MethodInfo m82_MI;
 void m82 (t24 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		m186(L_0, 1, &m186_MI);
		return;
	}
}
extern MethodInfo m83_MI;
 void m83 (t24 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f5);
		m186(L_0, 1, &m186_MI);
		return;
	}
}
extern MethodInfo m84_MI;
 void m84 (t24 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f2);
		m186(L_0, 0, &m186_MI);
		t5 * L_1 = (__this->f3);
		m186(L_1, 0, &m186_MI);
		t5 * L_2 = (__this->f4);
		m186(L_2, 0, &m186_MI);
		t5 * L_3 = (__this->f5);
		m186(L_3, 0, &m186_MI);
		t67 * L_4 = m198(__this, &m198_MI);
		m199(L_4, 1, &m199_MI);
		return;
	}
}
// Metadata Definition WallScript
extern Il2CppType t5_0_0_6;
FieldInfo t24_f2_FieldInfo = 
{
	"NorthFace", &t5_0_0_6, &t24_TI, offsetof(t24, f2), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t24_f3_FieldInfo = 
{
	"SouthFace", &t5_0_0_6, &t24_TI, offsetof(t24, f3), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t24_f4_FieldInfo = 
{
	"EastFace", &t5_0_0_6, &t24_TI, offsetof(t24, f4), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_6;
FieldInfo t24_f5_FieldInfo = 
{
	"WestFace", &t5_0_0_6, &t24_TI, offsetof(t24, f5), &EmptyCustomAttributesCache};
static FieldInfo* t24_FIs[] =
{
	&t24_f2_FieldInfo,
	&t24_f3_FieldInfo,
	&t24_f4_FieldInfo,
	&t24_f5_FieldInfo,
	NULL
};
extern TypeInfo t24_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m79_MI = 
{
	".ctor", (methodPointerType)&m79, &t24_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 80, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m80_MI = 
{
	"North", (methodPointerType)&m80, &t24_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 81, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m81_MI = 
{
	"South", (methodPointerType)&m81, &t24_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 82, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m82_MI = 
{
	"East", (methodPointerType)&m82, &t24_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 83, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m83_MI = 
{
	"West", (methodPointerType)&m83, &t24_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 84, NULL, (methodPointerType)NULL};
extern TypeInfo t24_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m84_MI = 
{
	"All", (methodPointerType)&m84, &t24_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 85, NULL, (methodPointerType)NULL};
static MethodInfo* t24_MIs[] =
{
	&m79_MI,
	&m80_MI,
	&m81_MI,
	&m82_MI,
	&m83_MI,
	&m84_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t24_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t24_0_0_0;
extern Il2CppType t24_1_0_0;
extern TypeInfo t3_TI;
struct t24;
extern TypeInfo t24_TI;
TypeInfo t24_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "WallScript", "", t24_MIs, NULL, t24_FIs, NULL, &t3_TI, NULL, NULL, &t24_TI, NULL, t24_VT, &EmptyCustomAttributesCache, &t24_TI, &t24_0_0_0, &t24_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t24), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t25_TI;
#include "t25MD.h"



// Metadata Definition <PrivateImplementationDetails>/$ArrayType$96
static MethodInfo* t25_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t25_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t25_TI;
extern TypeInfo t27_TI;
TypeInfo t25_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "$ArrayType$96", "", t25_MIs, NULL, NULL, NULL, &t26_TI, NULL, &t27_TI, &t25_TI, NULL, t25_VT, &EmptyCustomAttributesCache, &t25_TI, &t25_0_0_0, &t25_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t25)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 275, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t27_TI;

#include "t28MD.h"
extern MethodInfo m203_MI;


extern MethodInfo m85_MI;
 void m85 (t27 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
// Metadata Definition <PrivateImplementationDetails>
extern Il2CppType t25_0_0_275;
FieldInfo t27_f0_FieldInfo = 
{
	"$$field-0", &t25_0_0_275, &t27_TI, offsetof(t27_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t27_FIs[] =
{
	&t27_f0_FieldInfo,
	NULL
};
static const uint8_t t27_f0_DefaultValueData[] = { 0x4, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0 };
extern Il2CppType t25_0_0_0;
static Il2CppFieldDefaultValueEntry t27_f0_DefaultValue = 
{
	&t27_f0_FieldInfo, { (char*)t27_f0_DefaultValueData, &t25_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t27_FDVs[] = 
{
	&t27_f0_DefaultValue,
	NULL
};
extern TypeInfo t27_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m85_MI = 
{
	".ctor", (methodPointerType)&m85, &t27_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6150, 0, 255, 0, false, false, 86, NULL, (methodPointerType)NULL};
static MethodInfo* t27_MIs[] =
{
	&m85_MI,
	NULL
};
extern TypeInfo t25_TI;
static TypeInfo* t27_TI__nestedTypes[2] =
{
	&t25_TI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t27_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t68_TI;
#include "t68.h"
#include "t68MD.h"
extern MethodInfo m207_MI;
void t27_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t68 * tmp;
		tmp = (t68 *)il2cpp_codegen_object_new (&t68_TI);
		m207(tmp, &m207_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t27__CustomAttributeCache = {
1,
NULL,
&t27_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t27_0_0_0;
extern Il2CppType t27_1_0_0;
extern TypeInfo t28_TI;
struct t27;
extern TypeInfo t27_TI;
extern CustomAttributesCache t27__CustomAttributeCache;
TypeInfo t27_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<PrivateImplementationDetails>", "", t27_MIs, NULL, t27_FIs, NULL, &t28_TI, t27_TI__nestedTypes, NULL, &t27_TI, NULL, t27_VT, &t27__CustomAttributeCache, &t27_TI, &t27_0_0_0, &t27_1_0_0, NULL, NULL, NULL, t27_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t27), 0, -1, sizeof(t27_SFs), 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 1, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
