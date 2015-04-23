#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t144.h"
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
extern TypeInfo t144_TI;
#include "t144MD.h"

#include "t47.h"
#include "t59.h"
#include "t336.h"
extern TypeInfo t144_TI;

#include "t29.h"

extern MethodInfo m1535_MI;
 int32_t m1535 (t144 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m1537_MI;
 t59  m1537 (t144 * __this, MethodInfo* method){
	{
		t59  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m1536_MI;
 int32_t m1536 (t144 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void t144_marshal(const t144& unmarshaled, t144_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
	marshaled.f6 = unmarshaled.f6;
}
void t144_marshal_back(const t144_marshaled& marshaled, t144& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
	unmarshaled.f6 = marshaled.f6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void t144_marshal_cleanup(t144_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.Touch
extern Il2CppType t47_0_0_1;
FieldInfo t144_f0_FieldInfo = 
{
	"m_FingerId", &t47_0_0_1, &t144_TI, offsetof(t144, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_1;
FieldInfo t144_f1_FieldInfo = 
{
	"m_Position", &t59_0_0_1, &t144_TI, offsetof(t144, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_1;
FieldInfo t144_f2_FieldInfo = 
{
	"m_RawPosition", &t59_0_0_1, &t144_TI, offsetof(t144, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_1;
FieldInfo t144_f3_FieldInfo = 
{
	"m_PositionDelta", &t59_0_0_1, &t144_TI, offsetof(t144, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t144_f4_FieldInfo = 
{
	"m_TimeDelta", &t33_0_0_1, &t144_TI, offsetof(t144, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t144_f5_FieldInfo = 
{
	"m_TapCount", &t47_0_0_1, &t144_TI, offsetof(t144, f5) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t336_0_0_1;
FieldInfo t144_f6_FieldInfo = 
{
	"m_Phase", &t336_0_0_1, &t144_TI, offsetof(t144, f6) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t144_FIs[] =
{
	&t144_f0_FieldInfo,
	&t144_f1_FieldInfo,
	&t144_f2_FieldInfo,
	&t144_f3_FieldInfo,
	&t144_f4_FieldInfo,
	&t144_f5_FieldInfo,
	&t144_f6_FieldInfo,
	NULL
};
extern MethodInfo m1535_MI;
static PropertyInfo t144____fingerId_PropertyInfo = 
{
	&t144_TI, "fingerId", &m1535_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1537_MI;
static PropertyInfo t144____position_PropertyInfo = 
{
	&t144_TI, "position", &m1537_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1536_MI;
static PropertyInfo t144____phase_PropertyInfo = 
{
	&t144_TI, "phase", &m1536_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t144_PIs[] =
{
	&t144____fingerId_PropertyInfo,
	&t144____position_PropertyInfo,
	&t144____phase_PropertyInfo,
	NULL
};
extern TypeInfo t144_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1535_MI = 
{
	"get_fingerId", (methodPointerType)&m1535, &t144_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 734, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m1537_MI = 
{
	"get_position", (methodPointerType)&m1537, &t144_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 735, NULL, (methodPointerType)NULL};
extern TypeInfo t144_TI;
extern Il2CppType t336_0_0_0;
extern void* RuntimeInvoker_t336 (MethodInfo* method, void* obj, void** args);
MethodInfo m1536_MI = 
{
	"get_phase", (methodPointerType)&m1536, &t144_TI, &t336_0_0_0, RuntimeInvoker_t336, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 736, NULL, (methodPointerType)NULL};
static MethodInfo* t144_MIs[] =
{
	&m1535_MI,
	&m1537_MI,
	&m1536_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t144_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t144_TI;
TypeInfo t144_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Touch", "UnityEngine", t144_MIs, t144_PIs, t144_FIs, NULL, &t26_TI, NULL, NULL, &t144_TI, NULL, t144_VT, &EmptyCustomAttributesCache, &t144_TI, &t144_0_0_0, &t144_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t144_marshal, (methodPointerType)t144_marshal_back, (methodPointerType)t144_marshal_cleanup, sizeof (t144)+ sizeof (Il2CppObject), 0, sizeof(t144_marshaled), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 3, 3, 7, 0, 0, 4, 0, 0};
#include "t34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t34_TI;
#include "t34MD.h"

#include "t11.h"
#include "t31.h"
#include "t30.h"
#include "t397.h"
#include "t18.h"
#include "t33.h"
extern TypeInfo t34_TI;
extern MethodInfo m1579_MI;
extern MethodInfo m2661_MI;


extern MethodInfo m2660_MI;
 void m2660 (t28 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m167_MI;
 float m167 (t28 * __this, t18* p0, MethodInfo* method){
	typedef float (*m167_ftn) (t18*);
	static m167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1563_MI;
 float m1563 (t28 * __this, t18* p0, MethodInfo* method){
	typedef float (*m1563_ftn) (t18*);
	static m1563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m89_MI;
 bool m89 (t28 * __this, t18* p0, MethodInfo* method){
	typedef bool (*m89_ftn) (t18*);
	static m89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1582_MI;
 bool m1582 (t28 * __this, int32_t p0, MethodInfo* method){
	typedef bool (*m1582_ftn) (int32_t);
	static m1582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1539_MI;
 bool m1539 (t28 * __this, int32_t p0, MethodInfo* method){
	typedef bool (*m1539_ftn) (int32_t);
	static m1539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1539_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1540_MI;
 bool m1540 (t28 * __this, int32_t p0, MethodInfo* method){
	typedef bool (*m1540_ftn) (int32_t);
	static m1540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1541_MI;
 t11  m1541 (t28 * __this, MethodInfo* method){
	typedef t11  (*m1541_ftn) ();
	static m1541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1543_MI;
 t59  m1543 (t28 * __this, MethodInfo* method){
	typedef t59  (*m1543_ftn) ();
	static m1543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1562_MI;
 bool m1562 (t28 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t34_TI));
		bool L_0 = m1579(NULL, &m1579_MI);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m1580_MI;
 t144  m1580 (t28 * __this, int32_t p0, MethodInfo* method){
	typedef t144  (*m1580_ftn) (int32_t);
	static m1580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1581_MI;
 int32_t m1581 (t28 * __this, MethodInfo* method){
	typedef int32_t (*m1581_ftn) ();
	static m1581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1579_MI;
 bool m1579 (t28 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m1928_MI;
 void m1928 (t28 * __this, int32_t p0, MethodInfo* method){
	typedef void (*m1928_ftn) (int32_t);
	static m1928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m1840_MI;
 t18* m1840 (t28 * __this, MethodInfo* method){
	typedef t18* (*m1840_ftn) ();
	static m1840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2661_MI;
 void m2661 (t28 * __this, t59 * p0, MethodInfo* method){
	typedef void (*m2661_ftn) (t59 *);
	static m2661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m1916_MI;
 void m1916 (t28 * __this, t59  p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t34_TI));
		m2661(NULL, (&p0), &m2661_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Input
extern MethodInfo m1541_MI;
static PropertyInfo t34____mousePosition_PropertyInfo = 
{
	&t34_TI, "mousePosition", &m1541_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1543_MI;
static PropertyInfo t34____mouseScrollDelta_PropertyInfo = 
{
	&t34_TI, "mouseScrollDelta", &m1543_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1562_MI;
static PropertyInfo t34____mousePresent_PropertyInfo = 
{
	&t34_TI, "mousePresent", &m1562_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1581_MI;
static PropertyInfo t34____touchCount_PropertyInfo = 
{
	&t34_TI, "touchCount", &m1581_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1579_MI;
static PropertyInfo t34____touchSupported_PropertyInfo = 
{
	&t34_TI, "touchSupported", &m1579_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1928_MI;
static PropertyInfo t34____imeCompositionMode_PropertyInfo = 
{
	&t34_TI, "imeCompositionMode", NULL, &m1928_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1840_MI;
static PropertyInfo t34____compositionString_PropertyInfo = 
{
	&t34_TI, "compositionString", &m1840_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1916_MI;
static PropertyInfo t34____compositionCursorPos_PropertyInfo = 
{
	&t34_TI, "compositionCursorPos", NULL, &m1916_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t34_PIs[] =
{
	&t34____mousePosition_PropertyInfo,
	&t34____mouseScrollDelta_PropertyInfo,
	&t34____mousePresent_PropertyInfo,
	&t34____touchCount_PropertyInfo,
	&t34____touchSupported_PropertyInfo,
	&t34____imeCompositionMode_PropertyInfo,
	&t34____compositionString_PropertyInfo,
	&t34____compositionCursorPos_PropertyInfo,
	NULL
};
extern TypeInfo t34_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2660_MI = 
{
	".cctor", (methodPointerType)&m2660, &t34_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 737, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t34_m167_ParameterInfos[] = 
{
	{"axisName", 0, 134218487, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m167;
MethodInfo m167_MI = 
{
	"GetAxis", (methodPointerType)&m167, &t34_TI, &t33_0_0_0, RuntimeInvoker_t33_t28, t34_m167_ParameterInfos, &t34__CustomAttributeCache_m167, 150, 4096, 255, 1, false, false, 738, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t34_m1563_ParameterInfos[] = 
{
	{"axisName", 0, 134218488, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1563;
MethodInfo m1563_MI = 
{
	"GetAxisRaw", (methodPointerType)&m1563, &t34_TI, &t33_0_0_0, RuntimeInvoker_t33_t28, t34_m1563_ParameterInfos, &t34__CustomAttributeCache_m1563, 150, 4096, 255, 1, false, false, 739, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t34_m89_ParameterInfos[] = 
{
	{"buttonName", 0, 134218489, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m89;
MethodInfo m89_MI = 
{
	"GetButtonDown", (methodPointerType)&m89, &t34_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t34_m89_ParameterInfos, &t34__CustomAttributeCache_m89, 150, 4096, 255, 1, false, false, 740, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t34_m1582_ParameterInfos[] = 
{
	{"button", 0, 134218490, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1582;
MethodInfo m1582_MI = 
{
	"GetMouseButton", (methodPointerType)&m1582, &t34_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t34_m1582_ParameterInfos, &t34__CustomAttributeCache_m1582, 150, 4096, 255, 1, false, false, 741, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t34_m1539_ParameterInfos[] = 
{
	{"button", 0, 134218491, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1539;
MethodInfo m1539_MI = 
{
	"GetMouseButtonDown", (methodPointerType)&m1539, &t34_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t34_m1539_ParameterInfos, &t34__CustomAttributeCache_m1539, 150, 4096, 255, 1, false, false, 742, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t34_m1540_ParameterInfos[] = 
{
	{"button", 0, 134218492, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1540;
MethodInfo m1540_MI = 
{
	"GetMouseButtonUp", (methodPointerType)&m1540, &t34_TI, &t31_0_0_0, RuntimeInvoker_t31_t47, t34_m1540_ParameterInfos, &t34__CustomAttributeCache_m1540, 150, 4096, 255, 1, false, false, 743, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1541;
MethodInfo m1541_MI = 
{
	"get_mousePosition", (methodPointerType)&m1541, &t34_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &t34__CustomAttributeCache_m1541, 2198, 4096, 255, 0, false, false, 744, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1543;
MethodInfo m1543_MI = 
{
	"get_mouseScrollDelta", (methodPointerType)&m1543, &t34_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &t34__CustomAttributeCache_m1543, 2198, 4096, 255, 0, false, false, 745, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m1562_MI = 
{
	"get_mousePresent", (methodPointerType)&m1562, &t34_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 746, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t34_m1580_ParameterInfos[] = 
{
	{"index", 0, 134218493, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t144_0_0_0;
extern void* RuntimeInvoker_t144_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1580;
MethodInfo m1580_MI = 
{
	"GetTouch", (methodPointerType)&m1580, &t34_TI, &t144_0_0_0, RuntimeInvoker_t144_t47, t34_m1580_ParameterInfos, &t34__CustomAttributeCache_m1580, 150, 4096, 255, 1, false, false, 747, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1581;
MethodInfo m1581_MI = 
{
	"get_touchCount", (methodPointerType)&m1581, &t34_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t34__CustomAttributeCache_m1581, 2198, 4096, 255, 0, false, false, 748, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m1579_MI = 
{
	"get_touchSupported", (methodPointerType)&m1579, &t34_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 749, NULL, (methodPointerType)NULL};
extern Il2CppType t397_0_0_0;
static ParameterInfo t34_m1928_ParameterInfos[] = 
{
	{"value", 0, 134218494, &EmptyCustomAttributesCache, &t397_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1928;
MethodInfo m1928_MI = 
{
	"set_imeCompositionMode", (methodPointerType)&m1928, &t34_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t34_m1928_ParameterInfos, &t34__CustomAttributeCache_m1928, 2198, 4096, 255, 1, false, false, 750, NULL, (methodPointerType)NULL};
extern TypeInfo t34_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m1840;
MethodInfo m1840_MI = 
{
	"get_compositionString", (methodPointerType)&m1840, &t34_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &t34__CustomAttributeCache_m1840, 2198, 4096, 255, 0, false, false, 751, NULL, (methodPointerType)NULL};
extern Il2CppType t59_1_0_0;
static ParameterInfo t34_m2661_ParameterInfos[] = 
{
	{"value", 0, 134218495, &EmptyCustomAttributesCache, &t59_1_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t602 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t34__CustomAttributeCache_m2661;
MethodInfo m2661_MI = 
{
	"INTERNAL_set_compositionCursorPos", (methodPointerType)&m2661, &t34_TI, &t30_0_0_0, RuntimeInvoker_t30_t602, t34_m2661_ParameterInfos, &t34__CustomAttributeCache_m2661, 145, 4096, 255, 1, false, false, 752, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
static ParameterInfo t34_m1916_ParameterInfos[] = 
{
	{"value", 0, 134218496, &EmptyCustomAttributesCache, &t59_0_0_0},
};
extern TypeInfo t34_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m1916_MI = 
{
	"set_compositionCursorPos", (methodPointerType)&m1916, &t34_TI, &t30_0_0_0, RuntimeInvoker_t30_t59, t34_m1916_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 753, NULL, (methodPointerType)NULL};
static MethodInfo* t34_MIs[] =
{
	&m2660_MI,
	&m167_MI,
	&m1563_MI,
	&m89_MI,
	&m1582_MI,
	&m1539_MI,
	&m1540_MI,
	&m1541_MI,
	&m1543_MI,
	&m1562_MI,
	&m1580_MI,
	&m1581_MI,
	&m1579_MI,
	&m1928_MI,
	&m1840_MI,
	&m2661_MI,
	&m1916_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t34_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t540_TI;
#include "t540.h"
#include "t540MD.h"
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m167(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1563(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m89(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1582(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1539(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1540(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1541(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1543(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1580(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1581(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1928(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m1840(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t34_CustomAttributesCacheGenerator_m2661(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t34__CustomAttributeCache_m167 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m167
};
CustomAttributesCache t34__CustomAttributeCache_m1563 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1563
};
CustomAttributesCache t34__CustomAttributeCache_m89 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m89
};
CustomAttributesCache t34__CustomAttributeCache_m1582 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1582
};
CustomAttributesCache t34__CustomAttributeCache_m1539 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1539
};
CustomAttributesCache t34__CustomAttributeCache_m1540 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1540
};
CustomAttributesCache t34__CustomAttributeCache_m1541 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1541
};
CustomAttributesCache t34__CustomAttributeCache_m1543 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1543
};
CustomAttributesCache t34__CustomAttributeCache_m1580 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1580
};
CustomAttributesCache t34__CustomAttributeCache_m1581 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1581
};
CustomAttributesCache t34__CustomAttributeCache_m1928 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1928
};
CustomAttributesCache t34__CustomAttributeCache_m1840 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m1840
};
CustomAttributesCache t34__CustomAttributeCache_m2661 = {
1,
NULL,
&t34_CustomAttributesCacheGenerator_m2661
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_1_0_0;
extern TypeInfo t28_TI;
struct t34;
extern TypeInfo t34_TI;
extern CustomAttributesCache t34__CustomAttributeCache_m167;
extern CustomAttributesCache t34__CustomAttributeCache_m1563;
extern CustomAttributesCache t34__CustomAttributeCache_m89;
extern CustomAttributesCache t34__CustomAttributeCache_m1582;
extern CustomAttributesCache t34__CustomAttributeCache_m1539;
extern CustomAttributesCache t34__CustomAttributeCache_m1540;
extern CustomAttributesCache t34__CustomAttributeCache_m1541;
extern CustomAttributesCache t34__CustomAttributeCache_m1543;
extern CustomAttributesCache t34__CustomAttributeCache_m1580;
extern CustomAttributesCache t34__CustomAttributeCache_m1581;
extern CustomAttributesCache t34__CustomAttributeCache_m1928;
extern CustomAttributesCache t34__CustomAttributeCache_m1840;
extern CustomAttributesCache t34__CustomAttributeCache_m2661;
TypeInfo t34_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Input", "UnityEngine", t34_MIs, t34_PIs, NULL, NULL, &t28_TI, NULL, NULL, &t34_TI, NULL, t34_VT, &EmptyCustomAttributesCache, &t34_TI, &t34_0_0_0, &t34_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t34), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 17, 8, 0, 0, 0, 4, 0, 0};
#include "t396.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t396_TI;
#include "t396MD.h"



// Metadata Definition UnityEngine.HideFlags
extern Il2CppType t47_0_0_1542;
FieldInfo t396_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t396_TI, offsetof(t396, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f2_FieldInfo = 
{
	"None", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f3_FieldInfo = 
{
	"HideInHierarchy", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f4_FieldInfo = 
{
	"HideInInspector", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f5_FieldInfo = 
{
	"DontSaveInEditor", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f6_FieldInfo = 
{
	"NotEditable", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f7_FieldInfo = 
{
	"DontUnloadUnusedAsset", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f8_FieldInfo = 
{
	"DontSaveInBuild", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f9_FieldInfo = 
{
	"DontSave", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t396_0_0_32854;
FieldInfo t396_f10_FieldInfo = 
{
	"HideAndDontSave", &t396_0_0_32854, &t396_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t396_FIs[] =
{
	&t396_f1_FieldInfo,
	&t396_f2_FieldInfo,
	&t396_f3_FieldInfo,
	&t396_f4_FieldInfo,
	&t396_f5_FieldInfo,
	&t396_f6_FieldInfo,
	&t396_f7_FieldInfo,
	&t396_f8_FieldInfo,
	&t396_f9_FieldInfo,
	&t396_f10_FieldInfo,
	NULL
};
static const int32_t t396_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f2_DefaultValue = 
{
	&t396_f2_FieldInfo, { (char*)&t396_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f3_DefaultValue = 
{
	&t396_f3_FieldInfo, { (char*)&t396_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f4_DefaultValue = 
{
	&t396_f4_FieldInfo, { (char*)&t396_f4_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f5_DefaultValueData = 4;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f5_DefaultValue = 
{
	&t396_f5_FieldInfo, { (char*)&t396_f5_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f6_DefaultValueData = 8;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f6_DefaultValue = 
{
	&t396_f6_FieldInfo, { (char*)&t396_f6_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f7_DefaultValueData = 16;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f7_DefaultValue = 
{
	&t396_f7_FieldInfo, { (char*)&t396_f7_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f8_DefaultValueData = 32;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f8_DefaultValue = 
{
	&t396_f8_FieldInfo, { (char*)&t396_f8_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f9_DefaultValueData = 52;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f9_DefaultValue = 
{
	&t396_f9_FieldInfo, { (char*)&t396_f9_DefaultValueData, &t47_0_0_0 }};
static const int32_t t396_f10_DefaultValueData = 61;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t396_f10_DefaultValue = 
{
	&t396_f10_FieldInfo, { (char*)&t396_f10_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t396_FDVs[] = 
{
	&t396_f2_DefaultValue,
	&t396_f3_DefaultValue,
	&t396_f4_DefaultValue,
	&t396_f5_DefaultValue,
	&t396_f6_DefaultValue,
	&t396_f7_DefaultValue,
	&t396_f8_DefaultValue,
	&t396_f9_DefaultValue,
	&t396_f10_DefaultValue,
	NULL
};
static MethodInfo* t396_MIs[] =
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
static MethodInfo* t396_VT[] =
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
static Il2CppInterfaceOffsetPair t396_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern TypeInfo t317_TI;
#include "t317.h"
#include "t317MD.h"
extern MethodInfo m1410_MI;
void t396_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t317 * tmp;
		tmp = (t317 *)il2cpp_codegen_object_new (&t317_TI);
		m1410(tmp, &m1410_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t396__CustomAttributeCache = {
1,
NULL,
&t396_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t396_0_0_0;
extern Il2CppType t396_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
extern CustomAttributesCache t396__CustomAttributeCache;
TypeInfo t396_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "HideFlags", "UnityEngine", t396_MIs, NULL, t396_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t396_VT, &t396__CustomAttributeCache, &t47_TI, &t396_0_0_0, &t396_1_0_0, t396_IOs, NULL, NULL, t396_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t396)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t43_TI;
#include "t43MD.h"

#include "t50.h"
#include "t28.h"
#include "t49.h"
#include "t331.h"
extern TypeInfo t43_TI;
extern TypeInfo t49_TI;
extern TypeInfo t331_TI;
#include "t28MD.h"
#include "t49MD.h"
#include "t331MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m2664_MI;
extern MethodInfo m2665_MI;
extern MethodInfo m2666_MI;
extern MethodInfo m2667_MI;
extern MethodInfo m2669_MI;
extern MethodInfo m2668_MI;
extern MethodInfo m2670_MI;
extern MethodInfo m3014_MI;
extern MethodInfo m2671_MI;
extern MethodInfo m2663_MI;
extern MethodInfo m2043_MI;


extern MethodInfo m2662_MI;
 void m2662 (t43 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2663_MI;
 t43 * m2663 (t28 * __this, t43 * p0, t11  p1, t50  p2, MethodInfo* method){
	{
		t43 * L_0 = m2664(NULL, p0, (&p1), (&p2), &m2664_MI);
		return L_0;
	}
}
extern MethodInfo m2664_MI;
 t43 * m2664 (t28 * __this, t43 * p0, t11 * p1, t50 * p2, MethodInfo* method){
	typedef t43 * (*m2664_ftn) (t43 *, t11 *, t50 *);
	static m2664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m2665_MI;
 void m2665 (t28 * __this, t43 * p0, float p1, MethodInfo* method){
	typedef void (*m2665_ftn) (t43 *, float);
	static m2665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m136_MI;
 void m136 (t28 * __this, t43 * p0, MethodInfo* method){
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		m2665(NULL, p0, V_0, &m2665_MI);
		return;
	}
}
extern MethodInfo m2666_MI;
 void m2666 (t28 * __this, t43 * p0, bool p1, MethodInfo* method){
	typedef void (*m2666_ftn) (t43 *, bool);
	static m2666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m189_MI;
 void m189 (t28 * __this, t43 * p0, MethodInfo* method){
	bool V_0 = false;
	{
		V_0 = 0;
		m2666(NULL, p0, V_0, &m2666_MI);
		return;
	}
}
extern MethodInfo m1512_MI;
 t18* m1512 (t43 * __this, MethodInfo* method){
	typedef t18* (*m1512_ftn) (t43 *);
	static m1512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2017_MI;
 void m2017 (t43 * __this, t18* p0, MethodInfo* method){
	typedef void (*m2017_ftn) (t43 *, t18*);
	static m2017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1891_MI;
 void m1891 (t43 * __this, int32_t p0, MethodInfo* method){
	typedef void (*m1891_ftn) (t43 *, int32_t);
	static m1891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m99_MI;
 t18* m99 (t43 * __this, MethodInfo* method){
	typedef t18* (*m99_ftn) (t43 *);
	static m99_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m99_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m96_MI;
 bool m96 (t43 * __this, t28 * p0, MethodInfo* method){
	{
		bool L_0 = m2667(NULL, __this, ((t43 *)IsInst(p0, InitializedTypeInfo(&t43_TI))), &m2667_MI);
		return L_0;
	}
}
extern MethodInfo m98_MI;
 int32_t m98 (t43 * __this, MethodInfo* method){
	{
		int32_t L_0 = m2669(__this, &m2669_MI);
		return L_0;
	}
}
extern MethodInfo m2667_MI;
 bool m2667 (t28 * __this, t43 * p0, t43 * p1, MethodInfo* method){
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = ((((t43 *)p0) == ((t28 *)NULL))? 1 : 0);
		V_1 = ((((t43 *)p1) == ((t28 *)NULL))? 1 : 0);
		if (!V_1)
		{
			goto IL_0018;
		}
	}
	{
		if (!V_0)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		if (!V_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_0 = m2668(NULL, p0, &m2668_MI);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		if (!V_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = m2668(NULL, p1, &m2668_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		int32_t L_2 = (p0->f0);
		int32_t L_3 = (p1->f0);
		return ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}
}
extern MethodInfo m2668_MI;
 bool m2668 (t28 * __this, t43 * p0, MethodInfo* method){
	{
		t49 L_0 = m2670(p0, &m2670_MI);
		bool L_1 = m3014(NULL, L_0, (((t49_SFs*)InitializedTypeInfo(&t49_TI)->static_fields)->f1), &m3014_MI);
		return L_1;
	}
}
extern MethodInfo m2669_MI;
 int32_t m2669 (t43 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2670_MI;
 t49 m2670 (t43 * __this, MethodInfo* method){
	{
		t49 L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m152_MI;
 t43 * m152 (t28 * __this, t43 * p0, t11  p1, t50  p2, MethodInfo* method){
	{
		m2671(NULL, p0, (t18*) &_stringLiteral151, &m2671_MI);
		t43 * L_0 = m2663(NULL, p0, p1, p2, &m2663_MI);
		return L_0;
	}
}
extern MethodInfo m2671_MI;
 void m2671 (t28 * __this, t28 * p0, t18* p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000d;
		}
	}
	{
		t331 * L_0 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m2043(L_0, p1, &m2043_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_000d:
	{
		return;
	}
}
extern MethodInfo m1433_MI;
 bool m1433 (t28 * __this, t43 * p0, MethodInfo* method){
	{
		bool L_0 = m2667(NULL, p0, (t43 *)NULL, &m2667_MI);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m147_MI;
 bool m147 (t28 * __this, t43 * p0, t43 * p1, MethodInfo* method){
	{
		bool L_0 = m2667(NULL, p0, p1, &m2667_MI);
		return L_0;
	}
}
extern MethodInfo m138_MI;
 bool m138 (t28 * __this, t43 * p0, t43 * p1, MethodInfo* method){
	{
		bool L_0 = m2667(NULL, p0, p1, &m2667_MI);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void t43_marshal(const t43& unmarshaled, t43_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
}
void t43_marshal_back(const t43_marshaled& marshaled, t43& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void t43_marshal_cleanup(t43_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.Object
extern Il2CppType t47_0_0_1;
FieldInfo t43_f0_FieldInfo = 
{
	"m_InstanceID", &t47_0_0_1, &t43_TI, offsetof(t43, f0), &EmptyCustomAttributesCache};
extern Il2CppType t49_0_0_1;
FieldInfo t43_f1_FieldInfo = 
{
	"m_CachedPtr", &t49_0_0_1, &t43_TI, offsetof(t43, f1), &EmptyCustomAttributesCache};
static FieldInfo* t43_FIs[] =
{
	&t43_f0_FieldInfo,
	&t43_f1_FieldInfo,
	NULL
};
extern MethodInfo m1512_MI;
extern MethodInfo m2017_MI;
static PropertyInfo t43____name_PropertyInfo = 
{
	&t43_TI, "name", &m1512_MI, &m2017_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1891_MI;
static PropertyInfo t43____hideFlags_PropertyInfo = 
{
	&t43_TI, "hideFlags", NULL, &m1891_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t43_PIs[] =
{
	&t43____name_PropertyInfo,
	&t43____hideFlags_PropertyInfo,
	NULL
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2662_MI = 
{
	".ctor", (methodPointerType)&m2662, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 754, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t43_m2663_ParameterInfos[] = 
{
	{"data", 0, 134218497, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"pos", 1, 134218498, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"rot", 2, 134218499, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t28_t28_t11_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m2663_MI = 
{
	"Internal_InstantiateSingle", (methodPointerType)&m2663, &t43_TI, &t43_0_0_0, RuntimeInvoker_t28_t28_t11_t50, t43_m2663_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 755, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t11_1_0_0;
extern Il2CppType t50_1_0_0;
static ParameterInfo t43_m2664_ParameterInfos[] = 
{
	{"data", 0, 134218500, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"pos", 1, 134218501, &EmptyCustomAttributesCache, &t11_1_0_0},
	{"rot", 2, 134218502, &EmptyCustomAttributesCache, &t50_1_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t28_t28_t595_t604 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m2664;
MethodInfo m2664_MI = 
{
	"INTERNAL_CALL_Internal_InstantiateSingle", (methodPointerType)&m2664, &t43_TI, &t43_0_0_0, RuntimeInvoker_t28_t28_t595_t604, t43_m2664_ParameterInfos, &t43__CustomAttributeCache_m2664, 145, 4096, 255, 3, false, false, 756, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t43__CustomAttributeCache_t43_m2665_Arg1_ParameterInfo;
static ParameterInfo t43_m2665_ParameterInfos[] = 
{
	{"obj", 0, 134218503, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"t", 1, 134218504, &t43__CustomAttributeCache_t43_m2665_Arg1_ParameterInfo, &t33_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m2665;
MethodInfo m2665_MI = 
{
	"Destroy", (methodPointerType)&m2665, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t33, t43_m2665_ParameterInfos, &t43__CustomAttributeCache_m2665, 150, 4096, 255, 2, false, false, 757, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m136_ParameterInfos[] = 
{
	{"obj", 0, 134218505, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m136;
MethodInfo m136_MI = 
{
	"Destroy", (methodPointerType)&m136, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t43_m136_ParameterInfos, &t43__CustomAttributeCache_m136, 150, 0, 255, 1, false, false, 758, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t31_0_0_0;
extern CustomAttributesCache t43__CustomAttributeCache_t43_m2666_Arg1_ParameterInfo;
static ParameterInfo t43_m2666_ParameterInfos[] = 
{
	{"obj", 0, 134218506, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"allowDestroyingAssets", 1, 134218507, &t43__CustomAttributeCache_t43_m2666_Arg1_ParameterInfo, &t31_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t323 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m2666;
MethodInfo m2666_MI = 
{
	"DestroyImmediate", (methodPointerType)&m2666, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t323, t43_m2666_ParameterInfos, &t43__CustomAttributeCache_m2666, 150, 4096, 255, 2, false, false, 759, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m189_ParameterInfos[] = 
{
	{"obj", 0, 134218508, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m189;
MethodInfo m189_MI = 
{
	"DestroyImmediate", (methodPointerType)&m189, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t43_m189_ParameterInfos, &t43__CustomAttributeCache_m189, 150, 0, 255, 1, false, false, 760, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m1512;
MethodInfo m1512_MI = 
{
	"get_name", (methodPointerType)&m1512, &t43_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &t43__CustomAttributeCache_m1512, 2182, 4096, 255, 0, false, false, 761, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t43_m2017_ParameterInfos[] = 
{
	{"value", 0, 134218509, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m2017;
MethodInfo m2017_MI = 
{
	"set_name", (methodPointerType)&m2017, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t43_m2017_ParameterInfos, &t43__CustomAttributeCache_m2017, 2182, 4096, 255, 1, false, false, 762, NULL, (methodPointerType)NULL};
extern Il2CppType t396_0_0_0;
static ParameterInfo t43_m1891_ParameterInfos[] = 
{
	{"value", 0, 134218510, &EmptyCustomAttributesCache, &t396_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m1891;
MethodInfo m1891_MI = 
{
	"set_hideFlags", (methodPointerType)&m1891, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t43_m1891_ParameterInfos, &t43__CustomAttributeCache_m1891, 2182, 4096, 255, 1, false, false, 763, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m99;
MethodInfo m99_MI = 
{
	"ToString", (methodPointerType)&m99, &t43_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &t43__CustomAttributeCache_m99, 198, 4096, 3, 0, false, false, 764, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t43_m96_ParameterInfos[] = 
{
	{"o", 0, 134218511, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m96_MI = 
{
	"Equals", (methodPointerType)&m96, &t43_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t43_m96_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 765, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m98_MI = 
{
	"GetHashCode", (methodPointerType)&m98, &t43_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 766, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m2667_ParameterInfos[] = 
{
	{"lhs", 0, 134218512, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"rhs", 1, 134218513, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2667_MI = 
{
	"CompareBaseObjects", (methodPointerType)&m2667, &t43_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t43_m2667_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 767, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m2668_ParameterInfos[] = 
{
	{"o", 0, 134218514, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2668_MI = 
{
	"IsNativeObjectAlive", (methodPointerType)&m2668, &t43_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t43_m2668_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 768, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2669_MI = 
{
	"GetInstanceID", (methodPointerType)&m2669, &t43_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 769, NULL, (methodPointerType)NULL};
extern TypeInfo t43_TI;
extern Il2CppType t49_0_0_0;
extern void* RuntimeInvoker_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2670_MI = 
{
	"GetCachedPtr", (methodPointerType)&m2670, &t43_TI, &t49_0_0_0, RuntimeInvoker_t49, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 770, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t50_0_0_0;
static ParameterInfo t43_m152_ParameterInfos[] = 
{
	{"original", 0, 134218515, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"position", 1, 134218516, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"rotation", 2, 134218517, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t28_t28_t11_t50 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m152;
MethodInfo m152_MI = 
{
	"Instantiate", (methodPointerType)&m152, &t43_TI, &t43_0_0_0, RuntimeInvoker_t28_t28_t11_t50, t43_m152_ParameterInfos, &t43__CustomAttributeCache_m152, 150, 0, 255, 3, false, false, 771, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t18_0_0_0;
static ParameterInfo t43_m2671_ParameterInfos[] = 
{
	{"arg", 0, 134218518, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"message", 1, 134218519, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2671_MI = 
{
	"CheckNullArgument", (methodPointerType)&m2671, &t43_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t43_m2671_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 772, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m1433_ParameterInfos[] = 
{
	{"exists", 0, 134218520, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1433_MI = 
{
	"op_Implicit", (methodPointerType)&m1433, &t43_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t43_m1433_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 773, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m147_ParameterInfos[] = 
{
	{"x", 0, 134218521, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"y", 1, 134218522, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m147_MI = 
{
	"op_Equality", (methodPointerType)&m147, &t43_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t43_m147_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 774, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_0_0_0;
static ParameterInfo t43_m138_ParameterInfos[] = 
{
	{"x", 0, 134218523, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"y", 1, 134218524, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t43_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m138_MI = 
{
	"op_Inequality", (methodPointerType)&m138, &t43_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t43_m138_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 775, NULL, (methodPointerType)NULL};
static MethodInfo* t43_MIs[] =
{
	&m2662_MI,
	&m2663_MI,
	&m2664_MI,
	&m2665_MI,
	&m136_MI,
	&m2666_MI,
	&m189_MI,
	&m1512_MI,
	&m2017_MI,
	&m1891_MI,
	&m99_MI,
	&m96_MI,
	&m98_MI,
	&m2667_MI,
	&m2668_MI,
	&m2669_MI,
	&m2670_MI,
	&m152_MI,
	&m2671_MI,
	&m1433_MI,
	&m147_MI,
	&m138_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t43_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m2664(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m2665(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
#include "t584.h"
#include "t584MD.h"
extern MethodInfo m2950_MI;
void t43_CustomAttributesCacheGenerator_t43_m2665_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t585_TI;
#include "t585.h"
#include "t585MD.h"
extern MethodInfo m2954_MI;
void t43_CustomAttributesCacheGenerator_m136(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t585 * tmp;
		tmp = (t585 *)il2cpp_codegen_object_new (&t585_TI);
		m2954(tmp, &m2954_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m2666(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t43_CustomAttributesCacheGenerator_t43_m2666_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("false"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t585_TI;
extern MethodInfo m2954_MI;
void t43_CustomAttributesCacheGenerator_m189(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t585 * tmp;
		tmp = (t585 *)il2cpp_codegen_object_new (&t585_TI);
		m2954(tmp, &m2954_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m1512(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m2017(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m1891(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t43_CustomAttributesCacheGenerator_m99(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t587_TI;
#include "t587.h"
#include "t587MD.h"
extern MethodInfo m2955_MI;
void t43_CustomAttributesCacheGenerator_m152(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t587 * tmp;
		tmp = (t587 *)il2cpp_codegen_object_new (&t587_TI);
		m2955(tmp, 3, &m2955_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t43__CustomAttributeCache_m2664 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m2664
};
CustomAttributesCache t43__CustomAttributeCache_m2665 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m2665
};
CustomAttributesCache t43__CustomAttributeCache_t43_m2665_Arg1_ParameterInfo = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_t43_m2665_Arg1_ParameterInfo
};
CustomAttributesCache t43__CustomAttributeCache_m136 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m136
};
CustomAttributesCache t43__CustomAttributeCache_m2666 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m2666
};
CustomAttributesCache t43__CustomAttributeCache_t43_m2666_Arg1_ParameterInfo = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_t43_m2666_Arg1_ParameterInfo
};
CustomAttributesCache t43__CustomAttributeCache_m189 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m189
};
CustomAttributesCache t43__CustomAttributeCache_m1512 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m1512
};
CustomAttributesCache t43__CustomAttributeCache_m2017 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m2017
};
CustomAttributesCache t43__CustomAttributeCache_m1891 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m1891
};
CustomAttributesCache t43__CustomAttributeCache_m99 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m99
};
CustomAttributesCache t43__CustomAttributeCache_m152 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m152
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_1_0_0;
extern TypeInfo t28_TI;
struct t43;
extern TypeInfo t43_TI;
extern CustomAttributesCache t43__CustomAttributeCache_m2664;
extern CustomAttributesCache t43__CustomAttributeCache_m2665;
extern CustomAttributesCache t43__CustomAttributeCache_m136;
extern CustomAttributesCache t43__CustomAttributeCache_m2666;
extern CustomAttributesCache t43__CustomAttributeCache_m189;
extern CustomAttributesCache t43__CustomAttributeCache_m1512;
extern CustomAttributesCache t43__CustomAttributeCache_m2017;
extern CustomAttributesCache t43__CustomAttributeCache_m1891;
extern CustomAttributesCache t43__CustomAttributeCache_m99;
extern CustomAttributesCache t43__CustomAttributeCache_m152;
TypeInfo t43_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Object", "UnityEngine", t43_MIs, t43_PIs, t43_FIs, NULL, &t28_TI, NULL, NULL, &t43_TI, NULL, t43_VT, &EmptyCustomAttributesCache, &t43_TI, &t43_0_0_0, &t43_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t43_marshal, (methodPointerType)t43_marshal_back, (methodPointerType)t43_marshal_cleanup, sizeof (t43), 0, sizeof(t43_marshaled), 0, 0, -1, 1048585, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 22, 2, 2, 0, 0, 4, 0, 0};
#include "t35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t35_TI;
#include "t35MD.h"

#include "t32.h"
#include "t5.h"
#include "t36.h"
#include "t294.h"
#include "t5MD.h"
extern MethodInfo m2662_MI;
extern MethodInfo m94_MI;
extern MethodInfo m2674_MI;
extern MethodInfo m2673_MI;


extern MethodInfo m2672_MI;
 void m2672 (t35 * __this, MethodInfo* method){
	{
		m2662(__this, &m2662_MI);
		return;
	}
}
extern MethodInfo m90_MI;
 t32 * m90 (t35 * __this, MethodInfo* method){
	typedef t32 * (*m90_ftn) (t35 *);
	static m90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m94_MI;
 t5 * m94 (t35 * __this, MethodInfo* method){
	typedef t5 * (*m94_ftn) (t35 *);
	static m94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2094_MI;
 t35 * m2094 (t35 * __this, t36 * p0, MethodInfo* method){
	{
		t5 * L_0 = m94(__this, &m94_MI);
		t35 * L_1 = m2674(L_0, p0, &m2674_MI);
		return L_1;
	}
}
extern MethodInfo m2673_MI;
 void m2673 (t35 * __this, t36 * p0, t28 * p1, MethodInfo* method){
	typedef void (*m2673_ftn) (t35 *, t36 *, t28 *);
	static m2673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m1674_MI;
 void m1674 (t35 * __this, t36 * p0, t294 * p1, MethodInfo* method){
	{
		m2673(__this, p0, p1, &m2673_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Component
extern MethodInfo m90_MI;
static PropertyInfo t35____transform_PropertyInfo = 
{
	&t35_TI, "transform", &m90_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m94_MI;
static PropertyInfo t35____gameObject_PropertyInfo = 
{
	&t35_TI, "gameObject", &m94_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t35_PIs[] =
{
	&t35____transform_PropertyInfo,
	&t35____gameObject_PropertyInfo,
	NULL
};
extern TypeInfo t35_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2672_MI = 
{
	".ctor", (methodPointerType)&m2672, &t35_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 776, NULL, (methodPointerType)NULL};
extern TypeInfo t35_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t35__CustomAttributeCache_m90;
MethodInfo m90_MI = 
{
	"get_transform", (methodPointerType)&m90, &t35_TI, &t32_0_0_0, RuntimeInvoker_t28, NULL, &t35__CustomAttributeCache_m90, 2182, 4096, 255, 0, false, false, 777, NULL, (methodPointerType)NULL};
extern TypeInfo t35_TI;
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t35__CustomAttributeCache_m94;
MethodInfo m94_MI = 
{
	"get_gameObject", (methodPointerType)&m94, &t35_TI, &t5_0_0_0, RuntimeInvoker_t28, NULL, &t35__CustomAttributeCache_m94, 2182, 4096, 255, 0, false, false, 778, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t35_m2094_ParameterInfos[] = 
{
	{"type", 0, 134218525, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t35_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t35__CustomAttributeCache_m2094;
MethodInfo m2094_MI = 
{
	"GetComponent", (methodPointerType)&m2094, &t35_TI, &t35_0_0_0, RuntimeInvoker_t28_t28, t35_m2094_ParameterInfos, &t35__CustomAttributeCache_m2094, 134, 0, 255, 1, false, false, 779, NULL, (methodPointerType)NULL};
extern TypeInfo t35_TI;
extern Il2CppType m3015_gp_0_0_0_0;
extern Il2CppGenericContainer m3015_IGC;
extern TypeInfo m3015_gp_T_0_TI;
Il2CppGenericParamFull m3015_gp_T_0_TI_GenericParamFull = { { &m3015_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3015_IGPA[1] = 
{
	&m3015_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3015_MI;
Il2CppGenericContainer m3015_IGC = { { NULL, NULL }, NULL, &m3015_MI, 1, 1, m3015_IGPA };
extern CustomAttributesCache t35__CustomAttributeCache_m3015;
MethodInfo m3015_MI = 
{
	"GetComponent", NULL, &t35_TI, &m3015_gp_0_0_0_0, NULL, NULL, &t35__CustomAttributeCache_m3015, 134, 0, 255, 0, true, false, 780, NULL, (methodPointerType)NULL};
extern TypeInfo t35_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3016_IGC;
extern TypeInfo m3016_gp_T_0_TI;
Il2CppGenericParamFull m3016_gp_T_0_TI_GenericParamFull = { { &m3016_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3016_IGPA[1] = 
{
	&m3016_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3016_MI;
Il2CppGenericContainer m3016_IGC = { { NULL, NULL }, NULL, &m3016_MI, 1, 1, m3016_IGPA };
MethodInfo m3016_MI = 
{
	"GetComponentsInChildren", NULL, &t35_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 781, NULL, (methodPointerType)NULL};
extern TypeInfo t35_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3017_IGC;
extern TypeInfo m3017_gp_T_0_TI;
Il2CppGenericParamFull m3017_gp_T_0_TI_GenericParamFull = { { &m3017_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3017_IGPA[1] = 
{
	&m3017_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3017_MI;
Il2CppGenericContainer m3017_IGC = { { NULL, NULL }, NULL, &m3017_MI, 1, 1, m3017_IGPA };
MethodInfo m3017_MI = 
{
	"GetComponentsInChildren", NULL, &t35_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 782, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t35_m2673_ParameterInfos[] = 
{
	{"searchType", 0, 134218529, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"resultList", 1, 134218530, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t35_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t35__CustomAttributeCache_m2673;
MethodInfo m2673_MI = 
{
	"GetComponentsForListInternal", (methodPointerType)&m2673, &t35_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t35_m2673_ParameterInfos, &t35__CustomAttributeCache_m2673, 129, 4096, 255, 2, false, false, 783, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t294_0_0_0;
static ParameterInfo t35_m1674_ParameterInfos[] = 
{
	{"type", 0, 134218531, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"results", 1, 134218532, &EmptyCustomAttributesCache, &t294_0_0_0},
};
extern TypeInfo t35_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1674_MI = 
{
	"GetComponents", (methodPointerType)&m1674, &t35_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t35_m1674_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 784, NULL, (methodPointerType)NULL};
extern TypeInfo t35_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3018_IGC;
extern TypeInfo m3018_gp_T_0_TI;
Il2CppGenericParamFull m3018_gp_T_0_TI_GenericParamFull = { { &m3018_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3018_IGPA[1] = 
{
	&m3018_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3018_MI;
Il2CppGenericContainer m3018_IGC = { { NULL, NULL }, NULL, &m3018_MI, 1, 1, m3018_IGPA };
MethodInfo m3018_MI = 
{
	"GetComponents", NULL, &t35_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 785, NULL, (methodPointerType)NULL};
static MethodInfo* t35_MIs[] =
{
	&m2672_MI,
	&m90_MI,
	&m94_MI,
	&m2094_MI,
	&m3015_MI,
	&m3016_MI,
	&m3017_MI,
	&m2673_MI,
	&m1674_MI,
	&m3018_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t35_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t35_CustomAttributesCacheGenerator_m90(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t35_CustomAttributesCacheGenerator_m94(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t587_TI;
extern MethodInfo m2955_MI;
void t35_CustomAttributesCacheGenerator_m2094(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t587 * tmp;
		tmp = (t587 *)il2cpp_codegen_object_new (&t587_TI);
		m2955(tmp, 0, &m2955_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t618_TI;
#include "t618.h"
#include "t618MD.h"
extern MethodInfo m3019_MI;
void t35_CustomAttributesCacheGenerator_m3015(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t35_CustomAttributesCacheGenerator_m2673(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t35__CustomAttributeCache_m90 = {
1,
NULL,
&t35_CustomAttributesCacheGenerator_m90
};
CustomAttributesCache t35__CustomAttributeCache_m94 = {
1,
NULL,
&t35_CustomAttributesCacheGenerator_m94
};
CustomAttributesCache t35__CustomAttributeCache_m2094 = {
1,
NULL,
&t35_CustomAttributesCacheGenerator_m2094
};
CustomAttributesCache t35__CustomAttributeCache_m3015 = {
1,
NULL,
&t35_CustomAttributesCacheGenerator_m3015
};
CustomAttributesCache t35__CustomAttributeCache_m2673 = {
1,
NULL,
&t35_CustomAttributesCacheGenerator_m2673
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t35_0_0_0;
extern Il2CppType t35_1_0_0;
extern TypeInfo t43_TI;
struct t35;
extern TypeInfo t35_TI;
extern CustomAttributesCache t35__CustomAttributeCache_m90;
extern CustomAttributesCache t35__CustomAttributeCache_m94;
extern CustomAttributesCache t35__CustomAttributeCache_m2094;
extern CustomAttributesCache t35__CustomAttributeCache_m3015;
extern CustomAttributesCache t35__CustomAttributeCache_m2673;
TypeInfo t35_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Component", "UnityEngine", t35_MIs, t35_PIs, NULL, NULL, &t43_TI, NULL, NULL, &t35_TI, NULL, t35_VT, &EmptyCustomAttributesCache, &t35_TI, &t35_0_0_0, &t35_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t35), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 10, 2, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5_TI;

#include "t454.h"
extern MethodInfo m2662_MI;
extern MethodInfo m2679_MI;
extern MethodInfo m2677_MI;


extern MethodInfo m1890_MI;
 void m1890 (t5 * __this, t18* p0, MethodInfo* method){
	{
		m2662(__this, &m2662_MI);
		m2679(NULL, __this, p0, &m2679_MI);
		return;
	}
}
extern MethodInfo m2674_MI;
 t35 * m2674 (t5 * __this, t36 * p0, MethodInfo* method){
	typedef t35 * (*m2674_ftn) (t5 *, t36 *);
	static m2674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2675_MI;
 t29 * m2675 (t5 * __this, t36 * p0, bool p1, bool p2, bool p3, bool p4, t28 * p5, MethodInfo* method){
	typedef t29 * (*m2675_ftn) (t5 *, t36 *, bool, bool, bool, bool, t28 *);
	static m2675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m108_MI;
 t32 * m108 (t5 * __this, MethodInfo* method){
	typedef t32 * (*m108_ftn) (t5 *);
	static m108_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m108_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1894_MI;
 int32_t m1894 (t5 * __this, MethodInfo* method){
	typedef int32_t (*m1894_ftn) (t5 *);
	static m1894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1895_MI;
 void m1895 (t5 * __this, int32_t p0, MethodInfo* method){
	typedef void (*m1895_ftn) (t5 *, int32_t);
	static m1895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m186_MI;
 void m186 (t5 * __this, bool p0, MethodInfo* method){
	typedef void (*m186_ftn) (t5 *, bool);
	static m186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1517_MI;
 bool m1517 (t5 * __this, MethodInfo* method){
	typedef bool (*m1517_ftn) (t5 *);
	static m1517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m126_MI;
 t18* m126 (t5 * __this, MethodInfo* method){
	typedef t18* (*m126_ftn) (t5 *);
	static m126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m87_MI;
 t5 * m87 (t28 * __this, t18* p0, MethodInfo* method){
	typedef t5 * (*m87_ftn) (t18*);
	static m87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2676_MI;
 void m2676 (t5 * __this, t18* p0, t28 * p1, int32_t p2, MethodInfo* method){
	typedef void (*m2676_ftn) (t5 *, t18*, t28 *, int32_t);
	static m2676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m2677_MI;
 t35 * m2677 (t5 * __this, t36 * p0, MethodInfo* method){
	typedef t35 * (*m2677_ftn) (t5 *, t36 *);
	static m2677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2678_MI;
 t35 * m2678 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		t35 * L_0 = m2677(__this, p0, &m2677_MI);
		return L_0;
	}
}
extern MethodInfo m2679_MI;
 void m2679 (t28 * __this, t5 * p0, t18* p1, MethodInfo* method){
	typedef void (*m2679_ftn) (t5 *, t18*);
	static m2679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(p0, p1);
}
// Metadata Definition UnityEngine.GameObject
extern MethodInfo m108_MI;
static PropertyInfo t5____transform_PropertyInfo = 
{
	&t5_TI, "transform", &m108_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1894_MI;
extern MethodInfo m1895_MI;
static PropertyInfo t5____layer_PropertyInfo = 
{
	&t5_TI, "layer", &m1894_MI, &m1895_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1517_MI;
static PropertyInfo t5____activeInHierarchy_PropertyInfo = 
{
	&t5_TI, "activeInHierarchy", &m1517_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m126_MI;
static PropertyInfo t5____tag_PropertyInfo = 
{
	&t5_TI, "tag", &m126_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t5_PIs[] =
{
	&t5____transform_PropertyInfo,
	&t5____layer_PropertyInfo,
	&t5____activeInHierarchy_PropertyInfo,
	&t5____tag_PropertyInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5_m1890_ParameterInfos[] = 
{
	{"name", 0, 134218534, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1890_MI = 
{
	".ctor", (methodPointerType)&m1890, &t5_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t5_m1890_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 786, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t5_m2674_ParameterInfos[] = 
{
	{"type", 0, 134218535, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m2674;
MethodInfo m2674_MI = 
{
	"GetComponent", (methodPointerType)&m2674, &t5_TI, &t35_0_0_0, RuntimeInvoker_t28_t28, t5_m2674_ParameterInfos, &t5__CustomAttributeCache_m2674, 134, 4096, 255, 1, false, false, 787, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType m3020_gp_0_0_0_0;
extern Il2CppGenericContainer m3020_IGC;
extern TypeInfo m3020_gp_T_0_TI;
Il2CppGenericParamFull m3020_gp_T_0_TI_GenericParamFull = { { &m3020_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3020_IGPA[1] = 
{
	&m3020_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3020_MI;
Il2CppGenericContainer m3020_IGC = { { NULL, NULL }, NULL, &m3020_MI, 1, 1, m3020_IGPA };
extern CustomAttributesCache t5__CustomAttributeCache_m3020;
MethodInfo m3020_MI = 
{
	"GetComponent", NULL, &t5_TI, &m3020_gp_0_0_0_0, NULL, NULL, &t5__CustomAttributeCache_m3020, 134, 0, 255, 0, true, false, 788, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3021_IGC;
extern TypeInfo m3021_gp_T_0_TI;
Il2CppGenericParamFull m3021_gp_T_0_TI_GenericParamFull = { { &m3021_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3021_IGPA[1] = 
{
	&m3021_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3021_MI;
Il2CppGenericContainer m3021_IGC = { { NULL, NULL }, NULL, &m3021_MI, 1, 1, m3021_IGPA };
MethodInfo m3021_MI = 
{
	"GetComponents", NULL, &t5_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 789, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3022_IGC;
extern TypeInfo m3022_gp_T_0_TI;
Il2CppGenericParamFull m3022_gp_T_0_TI_GenericParamFull = { { &m3022_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3022_IGPA[1] = 
{
	&m3022_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3022_MI;
Il2CppGenericContainer m3022_IGC = { { NULL, NULL }, NULL, &m3022_MI, 1, 1, m3022_IGPA };
MethodInfo m3022_MI = 
{
	"GetComponentsInChildren", NULL, &t5_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 790, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3023_IGC;
extern TypeInfo m3023_gp_T_0_TI;
Il2CppGenericParamFull m3023_gp_T_0_TI_GenericParamFull = { { &m3023_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3023_IGPA[1] = 
{
	&m3023_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3023_MI;
Il2CppGenericContainer m3023_IGC = { { NULL, NULL }, NULL, &m3023_MI, 1, 1, m3023_IGPA };
MethodInfo m3023_MI = 
{
	"GetComponentsInParent", NULL, &t5_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 791, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t5_m2675_ParameterInfos[] = 
{
	{"type", 0, 134218541, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"useSearchTypeAsArrayReturnType", 1, 134218542, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"recursive", 2, 134218543, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"includeInactive", 3, 134218544, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"reverse", 4, 134218545, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resultList", 5, 134218546, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t29_0_0_0;
extern void* RuntimeInvoker_t28_t28_t323_t323_t323_t323_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m2675;
MethodInfo m2675_MI = 
{
	"GetComponentsInternal", (methodPointerType)&m2675, &t5_TI, &t29_0_0_0, RuntimeInvoker_t28_t28_t323_t323_t323_t323_t28, t5_m2675_ParameterInfos, &t5__CustomAttributeCache_m2675, 129, 4096, 255, 6, false, false, 792, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m108;
MethodInfo m108_MI = 
{
	"get_transform", (methodPointerType)&m108, &t5_TI, &t32_0_0_0, RuntimeInvoker_t28, NULL, &t5__CustomAttributeCache_m108, 2182, 4096, 255, 0, false, false, 793, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m1894;
MethodInfo m1894_MI = 
{
	"get_layer", (methodPointerType)&m1894, &t5_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t5__CustomAttributeCache_m1894, 2182, 4096, 255, 0, false, false, 794, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t5_m1895_ParameterInfos[] = 
{
	{"value", 0, 134218547, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m1895;
MethodInfo m1895_MI = 
{
	"set_layer", (methodPointerType)&m1895, &t5_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t5_m1895_ParameterInfos, &t5__CustomAttributeCache_m1895, 2182, 4096, 255, 1, false, false, 795, NULL, (methodPointerType)NULL};
extern Il2CppType t31_0_0_0;
static ParameterInfo t5_m186_ParameterInfos[] = 
{
	{"value", 0, 134218548, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t323 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m186;
MethodInfo m186_MI = 
{
	"SetActive", (methodPointerType)&m186, &t5_TI, &t30_0_0_0, RuntimeInvoker_t30_t323, t5_m186_ParameterInfos, &t5__CustomAttributeCache_m186, 134, 4096, 255, 1, false, false, 796, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m1517;
MethodInfo m1517_MI = 
{
	"get_activeInHierarchy", (methodPointerType)&m1517, &t5_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t5__CustomAttributeCache_m1517, 2182, 4096, 255, 0, false, false, 797, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m126;
MethodInfo m126_MI = 
{
	"get_tag", (methodPointerType)&m126, &t5_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &t5__CustomAttributeCache_m126, 2182, 4096, 255, 0, false, false, 798, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t5_m87_ParameterInfos[] = 
{
	{"tag", 0, 134218549, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m87;
MethodInfo m87_MI = 
{
	"FindGameObjectWithTag", (methodPointerType)&m87, &t5_TI, &t5_0_0_0, RuntimeInvoker_t28_t28, t5_m87_ParameterInfos, &t5__CustomAttributeCache_m87, 150, 4096, 255, 1, false, false, 799, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
extern CustomAttributesCache t5__CustomAttributeCache_t5_m2676_Arg1_ParameterInfo;
extern Il2CppType t454_0_0_0;
extern CustomAttributesCache t5__CustomAttributeCache_t5_m2676_Arg2_ParameterInfo;
static ParameterInfo t5_m2676_ParameterInfos[] = 
{
	{"methodName", 0, 134218550, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"value", 1, 134218551, &t5__CustomAttributeCache_t5_m2676_Arg1_ParameterInfo, &t28_0_0_0},
	{"options", 2, 134218552, &t5__CustomAttributeCache_t5_m2676_Arg2_ParameterInfo, &t454_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m2676;
MethodInfo m2676_MI = 
{
	"SendMessage", (methodPointerType)&m2676, &t5_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28_t47, t5_m2676_ParameterInfos, &t5__CustomAttributeCache_m2676, 134, 4096, 255, 3, false, false, 800, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t5_m2677_ParameterInfos[] = 
{
	{"componentType", 0, 134218553, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m2677;
MethodInfo m2677_MI = 
{
	"Internal_AddComponentWithType", (methodPointerType)&m2677, &t5_TI, &t35_0_0_0, RuntimeInvoker_t28_t28, t5_m2677_ParameterInfos, &t5__CustomAttributeCache_m2677, 129, 4096, 255, 1, false, false, 801, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t5_m2678_ParameterInfos[] = 
{
	{"componentType", 0, 134218554, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t35_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m2678;
MethodInfo m2678_MI = 
{
	"AddComponent", (methodPointerType)&m2678, &t5_TI, &t35_0_0_0, RuntimeInvoker_t28_t28, t5_m2678_ParameterInfos, &t5__CustomAttributeCache_m2678, 134, 0, 255, 1, false, false, 802, NULL, (methodPointerType)NULL};
extern TypeInfo t5_TI;
extern Il2CppType m3024_gp_0_0_0_0;
extern Il2CppGenericContainer m3024_IGC;
extern TypeInfo m3024_gp_T_0_TI;
extern Il2CppType t35_0_0_0;
static const Il2CppType* m3024_gp_T_0_TI_constraints[] = { 
&t35_0_0_0 , 
 NULL };
Il2CppGenericParamFull m3024_gp_T_0_TI_GenericParamFull = { { &m3024_IGC, 0}, {NULL, "T", 0, 0, m3024_gp_T_0_TI_constraints} };
static Il2CppGenericParamFull* m3024_IGPA[1] = 
{
	&m3024_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3024_MI;
Il2CppGenericContainer m3024_IGC = { { NULL, NULL }, NULL, &m3024_MI, 1, 1, m3024_IGPA };
MethodInfo m3024_MI = 
{
	"AddComponent", NULL, &t5_TI, &m3024_gp_0_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, true, false, 803, NULL, (methodPointerType)NULL};
extern Il2CppType t5_0_0_0;
extern CustomAttributesCache t5__CustomAttributeCache_t5_m2679_Arg0_ParameterInfo;
extern Il2CppType t18_0_0_0;
static ParameterInfo t5_m2679_ParameterInfos[] = 
{
	{"mono", 0, 134218555, &t5__CustomAttributeCache_t5_m2679_Arg0_ParameterInfo, &t5_0_0_0},
	{"name", 1, 134218556, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t5_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t5__CustomAttributeCache_m2679;
MethodInfo m2679_MI = 
{
	"Internal_CreateGameObject", (methodPointerType)&m2679, &t5_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t5_m2679_ParameterInfos, &t5__CustomAttributeCache_m2679, 145, 4096, 255, 2, false, false, 804, NULL, (methodPointerType)NULL};
static MethodInfo* t5_MIs[] =
{
	&m1890_MI,
	&m2674_MI,
	&m3020_MI,
	&m3021_MI,
	&m3022_MI,
	&m3023_MI,
	&m2675_MI,
	&m108_MI,
	&m1894_MI,
	&m1895_MI,
	&m186_MI,
	&m1517_MI,
	&m126_MI,
	&m87_MI,
	&m2676_MI,
	&m2677_MI,
	&m2678_MI,
	&m3024_MI,
	&m2679_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t5_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
extern TypeInfo t587_TI;
extern MethodInfo m2955_MI;
void t5_CustomAttributesCacheGenerator_m2674(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t587 * tmp;
		tmp = (t587 *)il2cpp_codegen_object_new (&t587_TI);
		m2955(tmp, 0, &m2955_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t618_TI;
extern MethodInfo m3019_MI;
void t5_CustomAttributesCacheGenerator_m3020(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m2675(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m108(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m1894(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m1895(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m186(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m1517(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m126(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m87(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m2676(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t5_CustomAttributesCacheGenerator_t5_m2676_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("null"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t5_CustomAttributesCacheGenerator_t5_m2676_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m2677(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t587_TI;
extern MethodInfo m2955_MI;
void t5_CustomAttributesCacheGenerator_m2678(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t587 * tmp;
		tmp = (t587 *)il2cpp_codegen_object_new (&t587_TI);
		m2955(tmp, 0, &m2955_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t5_CustomAttributesCacheGenerator_m2679(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t547_TI;
#include "t547.h"
#include "t547MD.h"
extern MethodInfo m2865_MI;
void t5_CustomAttributesCacheGenerator_t5_m2679_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t547 * tmp;
		tmp = (t547 *)il2cpp_codegen_object_new (&t547_TI);
		m2865(tmp, &m2865_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t5__CustomAttributeCache_m2674 = {
2,
NULL,
&t5_CustomAttributesCacheGenerator_m2674
};
CustomAttributesCache t5__CustomAttributeCache_m3020 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m3020
};
CustomAttributesCache t5__CustomAttributeCache_m2675 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m2675
};
CustomAttributesCache t5__CustomAttributeCache_m108 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m108
};
CustomAttributesCache t5__CustomAttributeCache_m1894 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m1894
};
CustomAttributesCache t5__CustomAttributeCache_m1895 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m1895
};
CustomAttributesCache t5__CustomAttributeCache_m186 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m186
};
CustomAttributesCache t5__CustomAttributeCache_m1517 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m1517
};
CustomAttributesCache t5__CustomAttributeCache_m126 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m126
};
CustomAttributesCache t5__CustomAttributeCache_m87 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m87
};
CustomAttributesCache t5__CustomAttributeCache_m2676 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m2676
};
CustomAttributesCache t5__CustomAttributeCache_t5_m2676_Arg1_ParameterInfo = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_t5_m2676_Arg1_ParameterInfo
};
CustomAttributesCache t5__CustomAttributeCache_t5_m2676_Arg2_ParameterInfo = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_t5_m2676_Arg2_ParameterInfo
};
CustomAttributesCache t5__CustomAttributeCache_m2677 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m2677
};
CustomAttributesCache t5__CustomAttributeCache_m2678 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m2678
};
CustomAttributesCache t5__CustomAttributeCache_m2679 = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_m2679
};
CustomAttributesCache t5__CustomAttributeCache_t5_m2679_Arg0_ParameterInfo = {
1,
NULL,
&t5_CustomAttributesCacheGenerator_t5_m2679_Arg0_ParameterInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_1_0_0;
extern TypeInfo t43_TI;
struct t5;
extern TypeInfo t5_TI;
extern CustomAttributesCache t5__CustomAttributeCache_m2674;
extern CustomAttributesCache t5__CustomAttributeCache_m3020;
extern CustomAttributesCache t5__CustomAttributeCache_m2675;
extern CustomAttributesCache t5__CustomAttributeCache_m108;
extern CustomAttributesCache t5__CustomAttributeCache_m1894;
extern CustomAttributesCache t5__CustomAttributeCache_m1895;
extern CustomAttributesCache t5__CustomAttributeCache_m186;
extern CustomAttributesCache t5__CustomAttributeCache_m1517;
extern CustomAttributesCache t5__CustomAttributeCache_m126;
extern CustomAttributesCache t5__CustomAttributeCache_m87;
extern CustomAttributesCache t5__CustomAttributeCache_m2676;
extern CustomAttributesCache t5__CustomAttributeCache_m2677;
extern CustomAttributesCache t5__CustomAttributeCache_m2678;
extern CustomAttributesCache t5__CustomAttributeCache_m2679;
TypeInfo t5_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "GameObject", "UnityEngine", t5_MIs, t5_PIs, NULL, NULL, &t43_TI, NULL, NULL, &t5_TI, NULL, t5_VT, &EmptyCustomAttributesCache, &t5_TI, &t5_0_0_0, &t5_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t5), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 19, 4, 0, 0, 0, 4, 0, 0};
#include "t512.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t512_TI;
#include "t512MD.h"

extern TypeInfo t512_TI;
#include "t32MD.h"
extern MethodInfo m2098_MI;
extern MethodInfo m203_MI;
extern MethodInfo m2100_MI;


extern MethodInfo m2680_MI;
 void m2680 (t512 * __this, t32 * p0, MethodInfo* method){
	{
		__this->f1 = (-1);
		m203(__this, &m203_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2681_MI;
 t28 * m2681 (t512 * __this, MethodInfo* method){
	{
		t32 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t32 * L_2 = m2098(L_0, L_1, &m2098_MI);
		return L_2;
	}
}
extern MethodInfo m2682_MI;
 bool m2682 (t512 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t32 * L_0 = (__this->f0);
		int32_t L_1 = m2100(L_0, &m2100_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		int32_t L_3 = ((int32_t)(L_2+1));
		V_1 = L_3;
		__this->f1 = L_3;
		return ((((int32_t)V_1) < ((int32_t)V_0))? 1 : 0);
	}
}
// Metadata Definition UnityEngine.Transform/Enumerator
extern Il2CppType t32_0_0_1;
FieldInfo t512_f0_FieldInfo = 
{
	"outer", &t32_0_0_1, &t512_TI, offsetof(t512, f0), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t512_f1_FieldInfo = 
{
	"currentIndex", &t47_0_0_1, &t512_TI, offsetof(t512, f1), &EmptyCustomAttributesCache};
static FieldInfo* t512_FIs[] =
{
	&t512_f0_FieldInfo,
	&t512_f1_FieldInfo,
	NULL
};
extern MethodInfo m2681_MI;
static PropertyInfo t512____Current_PropertyInfo = 
{
	&t512_TI, "Current", &m2681_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t512_PIs[] =
{
	&t512____Current_PropertyInfo,
	NULL
};
extern Il2CppType t32_0_0_0;
static ParameterInfo t512_m2680_ParameterInfos[] = 
{
	{"outer", 0, 134218586, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t512_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2680_MI = 
{
	".ctor", (methodPointerType)&m2680, &t512_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t512_m2680_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 843, NULL, (methodPointerType)NULL};
extern TypeInfo t512_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2681_MI = 
{
	"get_Current", (methodPointerType)&m2681, &t512_TI, &t28_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 844, NULL, (methodPointerType)NULL};
extern TypeInfo t512_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2682_MI = 
{
	"MoveNext", (methodPointerType)&m2682, &t512_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 845, NULL, (methodPointerType)NULL};
static MethodInfo* t512_MIs[] =
{
	&m2680_MI,
	&m2681_MI,
	&m2682_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m2681_MI;
extern MethodInfo m2682_MI;
static MethodInfo* t512_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m2681_MI,
	&m2682_MI,
};
extern TypeInfo t158_TI;
static TypeInfo* t512_ITIs[] = 
{
	&t158_TI,
};
extern TypeInfo t158_TI;
static Il2CppInterfaceOffsetPair t512_IOs[] = 
{
	{ &t158_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t512_0_0_0;
extern Il2CppType t512_1_0_0;
extern TypeInfo t28_TI;
struct t512;
extern TypeInfo t512_TI;
extern TypeInfo t32_TI;
TypeInfo t512_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Enumerator", "", t512_MIs, t512_PIs, t512_FIs, NULL, &t28_TI, NULL, &t32_TI, &t512_TI, t512_ITIs, t512_VT, &EmptyCustomAttributesCache, &t512_TI, &t512_0_0_0, &t512_1_0_0, t512_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t512), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 1, 2, 0, 0, 6, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t32_TI;

#include "t183.h"
#include "t408.h"
extern TypeInfo t183_TI;
extern TypeInfo t512_TI;
#include "t11MD.h"
#include "t50MD.h"
#include "t44MD.h"
extern MethodInfo m2683_MI;
extern MethodInfo m2684_MI;
extern MethodInfo m2685_MI;
extern MethodInfo m2686_MI;
extern MethodInfo m151_MI;
extern MethodInfo m1736_MI;
extern MethodInfo m157_MI;
extern MethodInfo m2448_MI;
extern MethodInfo m182_MI;
extern MethodInfo m2687_MI;
extern MethodInfo m2688_MI;
extern MethodInfo m2689_MI;
extern MethodInfo m2690_MI;
extern MethodInfo m2691_MI;
extern MethodInfo m2692_MI;
extern MethodInfo m2693_MI;
extern MethodInfo m2013_MI;
extern MethodInfo m2694_MI;
extern MethodInfo m2696_MI;
extern MethodInfo m2695_MI;
extern MethodInfo m2697_MI;
extern MethodInfo m2698_MI;
extern MethodInfo m2680_MI;


extern MethodInfo m2683_MI;
 void m2683 (t32 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2683_ftn) (t32 *, t11 *);
	static m2683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2684_MI;
 void m2684 (t32 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2684_ftn) (t32 *, t11 *);
	static m2684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m91_MI;
 t11  m91 (t32 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		m2683(__this, (&V_0), &m2683_MI);
		return V_0;
	}
}
extern MethodInfo m113_MI;
 void m113 (t32 * __this, t11  p0, MethodInfo* method){
	{
		m2684(__this, (&p0), &m2684_MI);
		return;
	}
}
extern MethodInfo m2685_MI;
 void m2685 (t32 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2685_ftn) (t32 *, t11 *);
	static m2685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2686_MI;
 void m2686 (t32 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2686_ftn) (t32 *, t11 *);
	static m2686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1901_MI;
 t11  m1901 (t32 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		m2685(__this, (&V_0), &m2685_MI);
		return V_0;
	}
}
extern MethodInfo m1908_MI;
 void m1908 (t32 * __this, t11  p0, MethodInfo* method){
	{
		m2686(__this, (&p0), &m2686_MI);
		return;
	}
}
extern MethodInfo m109_MI;
 t11  m109 (t32 * __this, MethodInfo* method){
	{
		t50  L_0 = m151(__this, &m151_MI);
		t11  L_1 = m1736(NULL, &m1736_MI);
		t11  L_2 = m157(NULL, L_0, L_1, &m157_MI);
		return L_2;
	}
}
extern MethodInfo m120_MI;
 void m120 (t32 * __this, t11  p0, MethodInfo* method){
	{
		t50  L_0 = m2448(NULL, p0, &m2448_MI);
		m182(__this, L_0, &m182_MI);
		return;
	}
}
extern MethodInfo m2687_MI;
 void m2687 (t32 * __this, t50 * p0, MethodInfo* method){
	typedef void (*m2687_ftn) (t32 *, t50 *);
	static m2687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2688_MI;
 void m2688 (t32 * __this, t50 * p0, MethodInfo* method){
	typedef void (*m2688_ftn) (t32 *, t50 *);
	static m2688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m151_MI;
 t50  m151 (t32 * __this, MethodInfo* method){
	t50  V_0 = {0};
	{
		m2687(__this, (&V_0), &m2687_MI);
		return V_0;
	}
}
extern MethodInfo m182_MI;
 void m182 (t32 * __this, t50  p0, MethodInfo* method){
	{
		m2688(__this, (&p0), &m2688_MI);
		return;
	}
}
extern MethodInfo m2689_MI;
 void m2689 (t32 * __this, t50 * p0, MethodInfo* method){
	typedef void (*m2689_ftn) (t32 *, t50 *);
	static m2689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2690_MI;
 void m2690 (t32 * __this, t50 * p0, MethodInfo* method){
	typedef void (*m2690_ftn) (t32 *, t50 *);
	static m2690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1902_MI;
 t50  m1902 (t32 * __this, MethodInfo* method){
	t50  V_0 = {0};
	{
		m2689(__this, (&V_0), &m2689_MI);
		return V_0;
	}
}
extern MethodInfo m1909_MI;
 void m1909 (t32 * __this, t50  p0, MethodInfo* method){
	{
		m2690(__this, (&p0), &m2690_MI);
		return;
	}
}
extern MethodInfo m2691_MI;
 void m2691 (t32 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2691_ftn) (t32 *, t11 *);
	static m2691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2692_MI;
 void m2692 (t32 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2692_ftn) (t32 *, t11 *);
	static m2692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m93_MI;
 t11  m93 (t32 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		m2691(__this, (&V_0), &m2691_MI);
		return V_0;
	}
}
extern MethodInfo m106_MI;
 void m106 (t32 * __this, t11  p0, MethodInfo* method){
	{
		m2692(__this, (&p0), &m2692_MI);
		return;
	}
}
extern MethodInfo m1498_MI;
 t32 * m1498 (t32 * __this, MethodInfo* method){
	{
		t32 * L_0 = m2693(__this, &m2693_MI);
		return L_0;
	}
}
extern MethodInfo m1932_MI;
 void m1932 (t32 * __this, t32 * p0, MethodInfo* method){
	{
		if (!((t183 *)IsInst(__this, InitializedTypeInfo(&t183_TI))))
		{
			goto IL_0016;
		}
	}
	{
		m2013(NULL, (t18*) &_stringLiteral152, __this, &m2013_MI);
	}

IL_0016:
	{
		m2694(__this, p0, &m2694_MI);
		return;
	}
}
extern MethodInfo m2693_MI;
 t32 * m2693 (t32 * __this, MethodInfo* method){
	typedef t32 * (*m2693_ftn) (t32 *);
	static m2693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2694_MI;
 void m2694 (t32 * __this, t32 * p0, MethodInfo* method){
	typedef void (*m2694_ftn) (t32 *, t32 *);
	static m2694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1892_MI;
 void m1892 (t32 * __this, t32 * p0, MethodInfo* method){
	{
		m2695(__this, p0, 1, &m2695_MI);
		return;
	}
}
extern MethodInfo m2695_MI;
 void m2695 (t32 * __this, t32 * p0, bool p1, MethodInfo* method){
	typedef void (*m2695_ftn) (t32 *, t32 *, bool);
	static m2695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2696_MI;
 void m2696 (t32 * __this, t408 * p0, MethodInfo* method){
	typedef void (*m2696_ftn) (t32 *, t408 *);
	static m2696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1971_MI;
 t408  m1971 (t32 * __this, MethodInfo* method){
	t408  V_0 = {0};
	{
		m2696(__this, (&V_0), &m2696_MI);
		return V_0;
	}
}
extern MethodInfo m1996_MI;
 t11  m1996 (t32 * __this, t11  p0, MethodInfo* method){
	{
		t11  L_0 = m2697(NULL, __this, (&p0), &m2697_MI);
		return L_0;
	}
}
extern MethodInfo m2697_MI;
 t11  m2697 (t28 * __this, t32 * p0, t11 * p1, MethodInfo* method){
	typedef t11  (*m2697_ftn) (t32 *, t11 *);
	static m2697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1857_MI;
 t11  m1857 (t32 * __this, t11  p0, MethodInfo* method){
	{
		t11  L_0 = m2698(NULL, __this, (&p0), &m2698_MI);
		return L_0;
	}
}
extern MethodInfo m2698_MI;
 t11  m2698 (t28 * __this, t32 * p0, t11 * p1, MethodInfo* method){
	typedef t11  (*m2698_ftn) (t32 *, t11 *);
	static m2698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2100_MI;
 int32_t m2100 (t32 * __this, MethodInfo* method){
	typedef int32_t (*m2100_ftn) (t32 *);
	static m2100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1893_MI;
 void m1893 (t32 * __this, MethodInfo* method){
	typedef void (*m1893_ftn) (t32 *);
	static m1893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2699_MI;
 t28 * m2699 (t32 * __this, MethodInfo* method){
	{
		t512 * L_0 = (t512 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t512_TI));
		m2680(L_0, __this, &m2680_MI);
		return L_0;
	}
}
extern MethodInfo m2098_MI;
 t32 * m2098 (t32 * __this, int32_t p0, MethodInfo* method){
	typedef t32 * (*m2098_ftn) (t32 *, int32_t);
	static m2098_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2098_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
// Metadata Definition UnityEngine.Transform
extern MethodInfo m91_MI;
extern MethodInfo m113_MI;
static PropertyInfo t32____position_PropertyInfo = 
{
	&t32_TI, "position", &m91_MI, &m113_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1901_MI;
extern MethodInfo m1908_MI;
static PropertyInfo t32____localPosition_PropertyInfo = 
{
	&t32_TI, "localPosition", &m1901_MI, &m1908_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m109_MI;
extern MethodInfo m120_MI;
static PropertyInfo t32____forward_PropertyInfo = 
{
	&t32_TI, "forward", &m109_MI, &m120_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m151_MI;
extern MethodInfo m182_MI;
static PropertyInfo t32____rotation_PropertyInfo = 
{
	&t32_TI, "rotation", &m151_MI, &m182_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1902_MI;
extern MethodInfo m1909_MI;
static PropertyInfo t32____localRotation_PropertyInfo = 
{
	&t32_TI, "localRotation", &m1902_MI, &m1909_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m93_MI;
extern MethodInfo m106_MI;
static PropertyInfo t32____localScale_PropertyInfo = 
{
	&t32_TI, "localScale", &m93_MI, &m106_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1498_MI;
extern MethodInfo m1932_MI;
static PropertyInfo t32____parent_PropertyInfo = 
{
	&t32_TI, "parent", &m1498_MI, &m1932_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2693_MI;
extern MethodInfo m2694_MI;
static PropertyInfo t32____parentInternal_PropertyInfo = 
{
	&t32_TI, "parentInternal", &m2693_MI, &m2694_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1971_MI;
static PropertyInfo t32____worldToLocalMatrix_PropertyInfo = 
{
	&t32_TI, "worldToLocalMatrix", &m1971_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2100_MI;
static PropertyInfo t32____childCount_PropertyInfo = 
{
	&t32_TI, "childCount", &m2100_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t32_PIs[] =
{
	&t32____position_PropertyInfo,
	&t32____localPosition_PropertyInfo,
	&t32____forward_PropertyInfo,
	&t32____rotation_PropertyInfo,
	&t32____localRotation_PropertyInfo,
	&t32____localScale_PropertyInfo,
	&t32____parent_PropertyInfo,
	&t32____parentInternal_PropertyInfo,
	&t32____worldToLocalMatrix_PropertyInfo,
	&t32____childCount_PropertyInfo,
	NULL
};
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2683_ParameterInfos[] = 
{
	{"value", 0, 134218557, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2683;
MethodInfo m2683_MI = 
{
	"INTERNAL_get_position", (methodPointerType)&m2683, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t32_m2683_ParameterInfos, &t32__CustomAttributeCache_m2683, 129, 4096, 255, 1, false, false, 805, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2684_ParameterInfos[] = 
{
	{"value", 0, 134218558, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2684;
MethodInfo m2684_MI = 
{
	"INTERNAL_set_position", (methodPointerType)&m2684, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t32_m2684_ParameterInfos, &t32__CustomAttributeCache_m2684, 129, 4096, 255, 1, false, false, 806, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m91_MI = 
{
	"get_position", (methodPointerType)&m91, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 807, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t32_m113_ParameterInfos[] = 
{
	{"value", 0, 134218559, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m113_MI = 
{
	"set_position", (methodPointerType)&m113, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t32_m113_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 808, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2685_ParameterInfos[] = 
{
	{"value", 0, 134218560, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2685;
MethodInfo m2685_MI = 
{
	"INTERNAL_get_localPosition", (methodPointerType)&m2685, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t32_m2685_ParameterInfos, &t32__CustomAttributeCache_m2685, 129, 4096, 255, 1, false, false, 809, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2686_ParameterInfos[] = 
{
	{"value", 0, 134218561, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2686;
MethodInfo m2686_MI = 
{
	"INTERNAL_set_localPosition", (methodPointerType)&m2686, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t32_m2686_ParameterInfos, &t32__CustomAttributeCache_m2686, 129, 4096, 255, 1, false, false, 810, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m1901_MI = 
{
	"get_localPosition", (methodPointerType)&m1901, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 811, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t32_m1908_ParameterInfos[] = 
{
	{"value", 0, 134218562, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m1908_MI = 
{
	"set_localPosition", (methodPointerType)&m1908, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t32_m1908_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 812, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m109_MI = 
{
	"get_forward", (methodPointerType)&m109, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 813, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t32_m120_ParameterInfos[] = 
{
	{"value", 0, 134218563, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m120_MI = 
{
	"set_forward", (methodPointerType)&m120, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t32_m120_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 814, NULL, (methodPointerType)NULL};
extern Il2CppType t50_1_0_0;
static ParameterInfo t32_m2687_ParameterInfos[] = 
{
	{"value", 0, 134218564, &EmptyCustomAttributesCache, &t50_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t604 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2687;
MethodInfo m2687_MI = 
{
	"INTERNAL_get_rotation", (methodPointerType)&m2687, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t604, t32_m2687_ParameterInfos, &t32__CustomAttributeCache_m2687, 129, 4096, 255, 1, false, false, 815, NULL, (methodPointerType)NULL};
extern Il2CppType t50_1_0_0;
static ParameterInfo t32_m2688_ParameterInfos[] = 
{
	{"value", 0, 134218565, &EmptyCustomAttributesCache, &t50_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t604 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2688;
MethodInfo m2688_MI = 
{
	"INTERNAL_set_rotation", (methodPointerType)&m2688, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t604, t32_m2688_ParameterInfos, &t32__CustomAttributeCache_m2688, 129, 4096, 255, 1, false, false, 816, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t50_0_0_0;
extern void* RuntimeInvoker_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m151_MI = 
{
	"get_rotation", (methodPointerType)&m151, &t32_TI, &t50_0_0_0, RuntimeInvoker_t50, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 817, NULL, (methodPointerType)NULL};
extern Il2CppType t50_0_0_0;
static ParameterInfo t32_m182_ParameterInfos[] = 
{
	{"value", 0, 134218566, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m182_MI = 
{
	"set_rotation", (methodPointerType)&m182, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t50, t32_m182_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 818, NULL, (methodPointerType)NULL};
extern Il2CppType t50_1_0_0;
static ParameterInfo t32_m2689_ParameterInfos[] = 
{
	{"value", 0, 134218567, &EmptyCustomAttributesCache, &t50_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t604 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2689;
MethodInfo m2689_MI = 
{
	"INTERNAL_get_localRotation", (methodPointerType)&m2689, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t604, t32_m2689_ParameterInfos, &t32__CustomAttributeCache_m2689, 129, 4096, 255, 1, false, false, 819, NULL, (methodPointerType)NULL};
extern Il2CppType t50_1_0_0;
static ParameterInfo t32_m2690_ParameterInfos[] = 
{
	{"value", 0, 134218568, &EmptyCustomAttributesCache, &t50_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t604 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2690;
MethodInfo m2690_MI = 
{
	"INTERNAL_set_localRotation", (methodPointerType)&m2690, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t604, t32_m2690_ParameterInfos, &t32__CustomAttributeCache_m2690, 129, 4096, 255, 1, false, false, 820, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t50_0_0_0;
extern void* RuntimeInvoker_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m1902_MI = 
{
	"get_localRotation", (methodPointerType)&m1902, &t32_TI, &t50_0_0_0, RuntimeInvoker_t50, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 821, NULL, (methodPointerType)NULL};
extern Il2CppType t50_0_0_0;
static ParameterInfo t32_m1909_ParameterInfos[] = 
{
	{"value", 0, 134218569, &EmptyCustomAttributesCache, &t50_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t50 (MethodInfo* method, void* obj, void** args);
MethodInfo m1909_MI = 
{
	"set_localRotation", (methodPointerType)&m1909, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t50, t32_m1909_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 822, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2691_ParameterInfos[] = 
{
	{"value", 0, 134218570, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2691;
MethodInfo m2691_MI = 
{
	"INTERNAL_get_localScale", (methodPointerType)&m2691, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t32_m2691_ParameterInfos, &t32__CustomAttributeCache_m2691, 129, 4096, 255, 1, false, false, 823, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2692_ParameterInfos[] = 
{
	{"value", 0, 134218571, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2692;
MethodInfo m2692_MI = 
{
	"INTERNAL_set_localScale", (methodPointerType)&m2692, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t32_m2692_ParameterInfos, &t32__CustomAttributeCache_m2692, 129, 4096, 255, 1, false, false, 824, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m93_MI = 
{
	"get_localScale", (methodPointerType)&m93, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 825, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t32_m106_ParameterInfos[] = 
{
	{"value", 0, 134218572, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m106_MI = 
{
	"set_localScale", (methodPointerType)&m106, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t32_m106_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 826, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1498_MI = 
{
	"get_parent", (methodPointerType)&m1498, &t32_TI, &t32_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 827, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t32_m1932_ParameterInfos[] = 
{
	{"value", 0, 134218573, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1932_MI = 
{
	"set_parent", (methodPointerType)&m1932, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t32_m1932_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 828, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2693;
MethodInfo m2693_MI = 
{
	"get_parentInternal", (methodPointerType)&m2693, &t32_TI, &t32_0_0_0, RuntimeInvoker_t28, NULL, &t32__CustomAttributeCache_m2693, 2179, 4096, 255, 0, false, false, 829, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t32_m2694_ParameterInfos[] = 
{
	{"value", 0, 134218574, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2694;
MethodInfo m2694_MI = 
{
	"set_parentInternal", (methodPointerType)&m2694, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t32_m2694_ParameterInfos, &t32__CustomAttributeCache_m2694, 2179, 4096, 255, 1, false, false, 830, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t32_m1892_ParameterInfos[] = 
{
	{"parent", 0, 134218575, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1892_MI = 
{
	"SetParent", (methodPointerType)&m1892, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t32_m1892_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 831, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t32_m2695_ParameterInfos[] = 
{
	{"parent", 0, 134218576, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"worldPositionStays", 1, 134218577, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t323 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2695;
MethodInfo m2695_MI = 
{
	"SetParent", (methodPointerType)&m2695, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t323, t32_m2695_ParameterInfos, &t32__CustomAttributeCache_m2695, 134, 4096, 255, 2, false, false, 832, NULL, (methodPointerType)NULL};
extern Il2CppType t408_1_0_0;
static ParameterInfo t32_m2696_ParameterInfos[] = 
{
	{"value", 0, 134218578, &EmptyCustomAttributesCache, &t408_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t605 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2696;
MethodInfo m2696_MI = 
{
	"INTERNAL_get_worldToLocalMatrix", (methodPointerType)&m2696, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30_t605, t32_m2696_ParameterInfos, &t32__CustomAttributeCache_m2696, 129, 4096, 255, 1, false, false, 833, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t408_0_0_0;
extern void* RuntimeInvoker_t408 (MethodInfo* method, void* obj, void** args);
MethodInfo m1971_MI = 
{
	"get_worldToLocalMatrix", (methodPointerType)&m1971, &t32_TI, &t408_0_0_0, RuntimeInvoker_t408, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 834, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t32_m1996_ParameterInfos[] = 
{
	{"position", 0, 134218579, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m1996_MI = 
{
	"TransformPoint", (methodPointerType)&m1996, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11_t11, t32_m1996_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 835, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2697_ParameterInfos[] = 
{
	{"self", 0, 134218580, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"position", 1, 134218581, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11_t28_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2697;
MethodInfo m2697_MI = 
{
	"INTERNAL_CALL_TransformPoint", (methodPointerType)&m2697, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11_t28_t595, t32_m2697_ParameterInfos, &t32__CustomAttributeCache_m2697, 145, 4096, 255, 2, false, false, 836, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t32_m1857_ParameterInfos[] = 
{
	{"position", 0, 134218582, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m1857_MI = 
{
	"InverseTransformPoint", (methodPointerType)&m1857, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11_t11, t32_m1857_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 837, NULL, (methodPointerType)NULL};
extern Il2CppType t32_0_0_0;
extern Il2CppType t11_1_0_0;
static ParameterInfo t32_m2698_ParameterInfos[] = 
{
	{"self", 0, 134218583, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"position", 1, 134218584, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11_t28_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2698;
MethodInfo m2698_MI = 
{
	"INTERNAL_CALL_InverseTransformPoint", (methodPointerType)&m2698, &t32_TI, &t11_0_0_0, RuntimeInvoker_t11_t28_t595, t32_m2698_ParameterInfos, &t32__CustomAttributeCache_m2698, 145, 4096, 255, 2, false, false, 838, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2100;
MethodInfo m2100_MI = 
{
	"get_childCount", (methodPointerType)&m2100, &t32_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t32__CustomAttributeCache_m2100, 2182, 4096, 255, 0, false, false, 839, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m1893;
MethodInfo m1893_MI = 
{
	"SetAsFirstSibling", (methodPointerType)&m1893, &t32_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &t32__CustomAttributeCache_m1893, 134, 4096, 255, 0, false, false, 840, NULL, (methodPointerType)NULL};
extern TypeInfo t32_TI;
extern Il2CppType t158_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2699_MI = 
{
	"GetEnumerator", (methodPointerType)&m2699, &t32_TI, &t158_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 841, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t32_m2098_ParameterInfos[] = 
{
	{"index", 0, 134218585, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t32_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t28_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m2098;
MethodInfo m2098_MI = 
{
	"GetChild", (methodPointerType)&m2098, &t32_TI, &t32_0_0_0, RuntimeInvoker_t28_t47, t32_m2098_ParameterInfos, &t32__CustomAttributeCache_m2098, 134, 4096, 255, 1, false, false, 842, NULL, (methodPointerType)NULL};
static MethodInfo* t32_MIs[] =
{
	&m2683_MI,
	&m2684_MI,
	&m91_MI,
	&m113_MI,
	&m2685_MI,
	&m2686_MI,
	&m1901_MI,
	&m1908_MI,
	&m109_MI,
	&m120_MI,
	&m2687_MI,
	&m2688_MI,
	&m151_MI,
	&m182_MI,
	&m2689_MI,
	&m2690_MI,
	&m1902_MI,
	&m1909_MI,
	&m2691_MI,
	&m2692_MI,
	&m93_MI,
	&m106_MI,
	&m1498_MI,
	&m1932_MI,
	&m2693_MI,
	&m2694_MI,
	&m1892_MI,
	&m2695_MI,
	&m2696_MI,
	&m1971_MI,
	&m1996_MI,
	&m2697_MI,
	&m1857_MI,
	&m2698_MI,
	&m2100_MI,
	&m1893_MI,
	&m2699_MI,
	&m2098_MI,
	NULL
};
extern TypeInfo t512_TI;
static TypeInfo* t32_TI__nestedTypes[2] =
{
	&t512_TI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
extern MethodInfo m2699_MI;
static MethodInfo* t32_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
	&m2699_MI,
};
extern TypeInfo t611_TI;
static TypeInfo* t32_ITIs[] = 
{
	&t611_TI,
};
extern TypeInfo t611_TI;
static Il2CppInterfaceOffsetPair t32_IOs[] = 
{
	{ &t611_TI, 4},
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2683(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2684(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2685(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2686(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2687(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2688(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2689(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2690(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2691(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2692(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2693(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2694(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2695(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2696(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2697(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2698(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2100(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m1893(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t32_CustomAttributesCacheGenerator_m2098(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t32__CustomAttributeCache_m2683 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2683
};
CustomAttributesCache t32__CustomAttributeCache_m2684 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2684
};
CustomAttributesCache t32__CustomAttributeCache_m2685 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2685
};
CustomAttributesCache t32__CustomAttributeCache_m2686 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2686
};
CustomAttributesCache t32__CustomAttributeCache_m2687 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2687
};
CustomAttributesCache t32__CustomAttributeCache_m2688 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2688
};
CustomAttributesCache t32__CustomAttributeCache_m2689 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2689
};
CustomAttributesCache t32__CustomAttributeCache_m2690 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2690
};
CustomAttributesCache t32__CustomAttributeCache_m2691 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2691
};
CustomAttributesCache t32__CustomAttributeCache_m2692 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2692
};
CustomAttributesCache t32__CustomAttributeCache_m2693 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2693
};
CustomAttributesCache t32__CustomAttributeCache_m2694 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2694
};
CustomAttributesCache t32__CustomAttributeCache_m2695 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2695
};
CustomAttributesCache t32__CustomAttributeCache_m2696 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2696
};
CustomAttributesCache t32__CustomAttributeCache_m2697 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2697
};
CustomAttributesCache t32__CustomAttributeCache_m2698 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2698
};
CustomAttributesCache t32__CustomAttributeCache_m2100 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2100
};
CustomAttributesCache t32__CustomAttributeCache_m1893 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m1893
};
CustomAttributesCache t32__CustomAttributeCache_m2098 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m2098
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t32_0_0_0;
extern Il2CppType t32_1_0_0;
extern TypeInfo t35_TI;
struct t32;
extern TypeInfo t32_TI;
extern CustomAttributesCache t32__CustomAttributeCache_m2683;
extern CustomAttributesCache t32__CustomAttributeCache_m2684;
extern CustomAttributesCache t32__CustomAttributeCache_m2685;
extern CustomAttributesCache t32__CustomAttributeCache_m2686;
extern CustomAttributesCache t32__CustomAttributeCache_m2687;
extern CustomAttributesCache t32__CustomAttributeCache_m2688;
extern CustomAttributesCache t32__CustomAttributeCache_m2689;
extern CustomAttributesCache t32__CustomAttributeCache_m2690;
extern CustomAttributesCache t32__CustomAttributeCache_m2691;
extern CustomAttributesCache t32__CustomAttributeCache_m2692;
extern CustomAttributesCache t32__CustomAttributeCache_m2693;
extern CustomAttributesCache t32__CustomAttributeCache_m2694;
extern CustomAttributesCache t32__CustomAttributeCache_m2695;
extern CustomAttributesCache t32__CustomAttributeCache_m2696;
extern CustomAttributesCache t32__CustomAttributeCache_m2697;
extern CustomAttributesCache t32__CustomAttributeCache_m2698;
extern CustomAttributesCache t32__CustomAttributeCache_m2100;
extern CustomAttributesCache t32__CustomAttributeCache_m1893;
extern CustomAttributesCache t32__CustomAttributeCache_m2098;
TypeInfo t32_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Transform", "UnityEngine", t32_MIs, t32_PIs, NULL, NULL, &t35_TI, t32_TI__nestedTypes, NULL, &t32_TI, t32_ITIs, t32_VT, &EmptyCustomAttributesCache, &t32_TI, &t32_0_0_0, &t32_1_0_0, t32_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t32), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 38, 10, 0, 0, 1, 5, 1, 1};
#include "t41.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t41_TI;
#include "t41MD.h"



extern MethodInfo m115_MI;
 float m115 (t28 * __this, MethodInfo* method){
	typedef float (*m115_ftn) ();
	static m115_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m115_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1567_MI;
 float m1567 (t28 * __this, MethodInfo* method){
	typedef float (*m1567_ftn) ();
	static m1567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1633_MI;
 float m1633 (t28 * __this, MethodInfo* method){
	typedef float (*m1633_ftn) ();
	static m1633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// Metadata Definition UnityEngine.Time
extern MethodInfo m115_MI;
static PropertyInfo t41____deltaTime_PropertyInfo = 
{
	&t41_TI, "deltaTime", &m115_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1567_MI;
static PropertyInfo t41____unscaledTime_PropertyInfo = 
{
	&t41_TI, "unscaledTime", &m1567_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1633_MI;
static PropertyInfo t41____unscaledDeltaTime_PropertyInfo = 
{
	&t41_TI, "unscaledDeltaTime", &m1633_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t41_PIs[] =
{
	&t41____deltaTime_PropertyInfo,
	&t41____unscaledTime_PropertyInfo,
	&t41____unscaledDeltaTime_PropertyInfo,
	NULL
};
extern TypeInfo t41_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t41__CustomAttributeCache_m115;
MethodInfo m115_MI = 
{
	"get_deltaTime", (methodPointerType)&m115, &t41_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &t41__CustomAttributeCache_m115, 2198, 4096, 255, 0, false, false, 846, NULL, (methodPointerType)NULL};
extern TypeInfo t41_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t41__CustomAttributeCache_m1567;
MethodInfo m1567_MI = 
{
	"get_unscaledTime", (methodPointerType)&m1567, &t41_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &t41__CustomAttributeCache_m1567, 2198, 4096, 255, 0, false, false, 847, NULL, (methodPointerType)NULL};
extern TypeInfo t41_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t41__CustomAttributeCache_m1633;
MethodInfo m1633_MI = 
{
	"get_unscaledDeltaTime", (methodPointerType)&m1633, &t41_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &t41__CustomAttributeCache_m1633, 2198, 4096, 255, 0, false, false, 848, NULL, (methodPointerType)NULL};
static MethodInfo* t41_MIs[] =
{
	&m115_MI,
	&m1567_MI,
	&m1633_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t41_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t41_CustomAttributesCacheGenerator_m115(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t41_CustomAttributesCacheGenerator_m1567(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t41_CustomAttributesCacheGenerator_m1633(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t41__CustomAttributeCache_m115 = {
1,
NULL,
&t41_CustomAttributesCacheGenerator_m115
};
CustomAttributesCache t41__CustomAttributeCache_m1567 = {
1,
NULL,
&t41_CustomAttributesCacheGenerator_m1567
};
CustomAttributesCache t41__CustomAttributeCache_m1633 = {
1,
NULL,
&t41_CustomAttributesCacheGenerator_m1633
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t41_0_0_0;
extern Il2CppType t41_1_0_0;
extern TypeInfo t28_TI;
struct t41;
extern TypeInfo t41_TI;
extern CustomAttributesCache t41__CustomAttributeCache_m115;
extern CustomAttributesCache t41__CustomAttributeCache_m1567;
extern CustomAttributesCache t41__CustomAttributeCache_m1633;
TypeInfo t41_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Time", "UnityEngine", t41_MIs, t41_PIs, NULL, NULL, &t28_TI, NULL, NULL, &t41_TI, NULL, t41_VT, &EmptyCustomAttributesCache, &t41_TI, &t41_0_0_0, &t41_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t41), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 3, 0, 0, 0, 4, 0, 0};
#include "t54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t54_TI;
#include "t54MD.h"

extern MethodInfo m2700_MI;


extern MethodInfo m155_MI;
 float m155 (t28 * __this, float p0, float p1, MethodInfo* method){
	typedef float (*m155_ftn) (float, float);
	static m155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m183_MI;
 int32_t m183 (t28 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		int32_t L_0 = m2700(NULL, p0, p1, &m2700_MI);
		return L_0;
	}
}
extern MethodInfo m2700_MI;
 int32_t m2700 (t28 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	typedef int32_t (*m2700_ftn) (int32_t, int32_t);
	static m2700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
// Metadata Definition UnityEngine.Random
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t54_m155_ParameterInfos[] = 
{
	{"min", 0, 134218587, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"max", 1, 134218588, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t54_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t33_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t54__CustomAttributeCache_m155;
MethodInfo m155_MI = 
{
	"Range", (methodPointerType)&m155, &t54_TI, &t33_0_0_0, RuntimeInvoker_t33_t33_t33, t54_m155_ParameterInfos, &t54__CustomAttributeCache_m155, 150, 4096, 255, 2, false, false, 849, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t54_m183_ParameterInfos[] = 
{
	{"min", 0, 134218589, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"max", 1, 134218590, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t54_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m183_MI = 
{
	"Range", (methodPointerType)&m183, &t54_TI, &t47_0_0_0, RuntimeInvoker_t47_t47_t47, t54_m183_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 850, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t54_m2700_ParameterInfos[] = 
{
	{"min", 0, 134218591, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"max", 1, 134218592, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t54_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t47_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t54__CustomAttributeCache_m2700;
MethodInfo m2700_MI = 
{
	"RandomRangeInt", (methodPointerType)&m2700, &t54_TI, &t47_0_0_0, RuntimeInvoker_t47_t47_t47, t54_m2700_ParameterInfos, &t54__CustomAttributeCache_m2700, 145, 4096, 255, 2, false, false, 851, NULL, (methodPointerType)NULL};
static MethodInfo* t54_MIs[] =
{
	&m155_MI,
	&m183_MI,
	&m2700_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t54_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t54_CustomAttributesCacheGenerator_m155(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t54_CustomAttributesCacheGenerator_m2700(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t54__CustomAttributeCache_m155 = {
1,
NULL,
&t54_CustomAttributesCacheGenerator_m155
};
CustomAttributesCache t54__CustomAttributeCache_m2700 = {
1,
NULL,
&t54_CustomAttributesCacheGenerator_m2700
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t54_0_0_0;
extern Il2CppType t54_1_0_0;
extern TypeInfo t28_TI;
struct t54;
extern TypeInfo t54_TI;
extern CustomAttributesCache t54__CustomAttributeCache_m155;
extern CustomAttributesCache t54__CustomAttributeCache_m2700;
TypeInfo t54_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Random", "UnityEngine", t54_MIs, NULL, NULL, NULL, &t28_TI, NULL, NULL, &t54_TI, NULL, t54_VT, &EmptyCustomAttributesCache, &t54_TI, &t54_0_0_0, &t54_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t54), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#include "t457.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t457_TI;
#include "t457MD.h"

extern MethodInfo m203_MI;


extern MethodInfo m2701_MI;
 void m2701 (t457 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void t457_marshal(const t457& unmarshaled, t457_marshaled& marshaled)
{
}
void t457_marshal_back(const t457_marshaled& marshaled, t457& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void t457_marshal_cleanup(t457_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.YieldInstruction
extern TypeInfo t457_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2701_MI = 
{
	".ctor", (methodPointerType)&m2701, &t457_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 852, NULL, (methodPointerType)NULL};
static MethodInfo* t457_MIs[] =
{
	&m2701_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t457_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t457_0_0_0;
extern Il2CppType t457_1_0_0;
extern TypeInfo t28_TI;
struct t457;
extern TypeInfo t457_TI;
TypeInfo t457_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "YieldInstruction", "UnityEngine", t457_MIs, NULL, NULL, NULL, &t28_TI, NULL, NULL, &t457_TI, NULL, t457_VT, &EmptyCustomAttributesCache, &t457_TI, &t457_0_0_0, &t457_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t457_marshal, (methodPointerType)t457_marshal_back, (methodPointerType)t457_marshal_cleanup, sizeof (t457), 0, sizeof(t457_marshaled), 0, 0, -1, 1048585, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t513.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t513_TI;
#include "t513MD.h"

#include "t20.h"
extern TypeInfo t513_TI;


extern MethodInfo m2702_MI;
 t11  m2702 (t513 * __this, MethodInfo* method){
	{
		t11  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2703_MI;
 void m2703 (t513 * __this, t11  p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2704_MI;
 t11  m2704 (t513 * __this, MethodInfo* method){
	{
		t11  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2705_MI;
 void m2705 (t513 * __this, t11  p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m2706_MI;
 float m2706 (t513 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m2707_MI;
 void m2707 (t513 * __this, float p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m2708_MI;
 float m2708 (t513 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m2709_MI;
 void m2709 (t513 * __this, float p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m2710_MI;
 float m2710 (t513 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2711_MI;
 void m2711 (t513 * __this, float p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m2712_MI;
 float m2712 (t513 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m2713_MI;
 void m2713 (t513 * __this, float p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m2714_MI;
 float m2714 (t513 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m2715_MI;
 void m2715 (t513 * __this, float p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
extern MethodInfo m2716_MI;
 t20  m2716 (t513 * __this, MethodInfo* method){
	{
		t20  L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m2717_MI;
 void m2717 (t513 * __this, t20  p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
// Metadata Definition UnityEngine.Particle
extern Il2CppType t11_0_0_1;
FieldInfo t513_f0_FieldInfo = 
{
	"m_Position", &t11_0_0_1, &t513_TI, offsetof(t513, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t513_f1_FieldInfo = 
{
	"m_Velocity", &t11_0_0_1, &t513_TI, offsetof(t513, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t513_f2_FieldInfo = 
{
	"m_Size", &t33_0_0_1, &t513_TI, offsetof(t513, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t513_f3_FieldInfo = 
{
	"m_Rotation", &t33_0_0_1, &t513_TI, offsetof(t513, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t513_f4_FieldInfo = 
{
	"m_AngularVelocity", &t33_0_0_1, &t513_TI, offsetof(t513, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t513_f5_FieldInfo = 
{
	"m_Energy", &t33_0_0_1, &t513_TI, offsetof(t513, f5) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t513_f6_FieldInfo = 
{
	"m_StartEnergy", &t33_0_0_1, &t513_TI, offsetof(t513, f6) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_1;
FieldInfo t513_f7_FieldInfo = 
{
	"m_Color", &t20_0_0_1, &t513_TI, offsetof(t513, f7) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t513_FIs[] =
{
	&t513_f0_FieldInfo,
	&t513_f1_FieldInfo,
	&t513_f2_FieldInfo,
	&t513_f3_FieldInfo,
	&t513_f4_FieldInfo,
	&t513_f5_FieldInfo,
	&t513_f6_FieldInfo,
	&t513_f7_FieldInfo,
	NULL
};
extern MethodInfo m2702_MI;
extern MethodInfo m2703_MI;
static PropertyInfo t513____position_PropertyInfo = 
{
	&t513_TI, "position", &m2702_MI, &m2703_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2704_MI;
extern MethodInfo m2705_MI;
static PropertyInfo t513____velocity_PropertyInfo = 
{
	&t513_TI, "velocity", &m2704_MI, &m2705_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2706_MI;
extern MethodInfo m2707_MI;
static PropertyInfo t513____energy_PropertyInfo = 
{
	&t513_TI, "energy", &m2706_MI, &m2707_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2708_MI;
extern MethodInfo m2709_MI;
static PropertyInfo t513____startEnergy_PropertyInfo = 
{
	&t513_TI, "startEnergy", &m2708_MI, &m2709_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2710_MI;
extern MethodInfo m2711_MI;
static PropertyInfo t513____size_PropertyInfo = 
{
	&t513_TI, "size", &m2710_MI, &m2711_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2712_MI;
extern MethodInfo m2713_MI;
static PropertyInfo t513____rotation_PropertyInfo = 
{
	&t513_TI, "rotation", &m2712_MI, &m2713_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2714_MI;
extern MethodInfo m2715_MI;
static PropertyInfo t513____angularVelocity_PropertyInfo = 
{
	&t513_TI, "angularVelocity", &m2714_MI, &m2715_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2716_MI;
extern MethodInfo m2717_MI;
static PropertyInfo t513____color_PropertyInfo = 
{
	&t513_TI, "color", &m2716_MI, &m2717_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t513_PIs[] =
{
	&t513____position_PropertyInfo,
	&t513____velocity_PropertyInfo,
	&t513____energy_PropertyInfo,
	&t513____startEnergy_PropertyInfo,
	&t513____size_PropertyInfo,
	&t513____rotation_PropertyInfo,
	&t513____angularVelocity_PropertyInfo,
	&t513____color_PropertyInfo,
	NULL
};
extern TypeInfo t513_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m2702_MI = 
{
	"get_position", (methodPointerType)&m2702, &t513_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 853, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t513_m2703_ParameterInfos[] = 
{
	{"value", 0, 134218593, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m2703_MI = 
{
	"set_position", (methodPointerType)&m2703, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t513_m2703_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 854, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m2704_MI = 
{
	"get_velocity", (methodPointerType)&m2704, &t513_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 855, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t513_m2705_ParameterInfos[] = 
{
	{"value", 0, 134218594, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m2705_MI = 
{
	"set_velocity", (methodPointerType)&m2705, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t513_m2705_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 856, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2706_MI = 
{
	"get_energy", (methodPointerType)&m2706, &t513_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 857, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t513_m2707_ParameterInfos[] = 
{
	{"value", 0, 134218595, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2707_MI = 
{
	"set_energy", (methodPointerType)&m2707, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t513_m2707_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 858, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2708_MI = 
{
	"get_startEnergy", (methodPointerType)&m2708, &t513_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 859, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t513_m2709_ParameterInfos[] = 
{
	{"value", 0, 134218596, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2709_MI = 
{
	"set_startEnergy", (methodPointerType)&m2709, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t513_m2709_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 860, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2710_MI = 
{
	"get_size", (methodPointerType)&m2710, &t513_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 861, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t513_m2711_ParameterInfos[] = 
{
	{"value", 0, 134218597, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2711_MI = 
{
	"set_size", (methodPointerType)&m2711, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t513_m2711_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 862, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2712_MI = 
{
	"get_rotation", (methodPointerType)&m2712, &t513_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 863, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t513_m2713_ParameterInfos[] = 
{
	{"value", 0, 134218598, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2713_MI = 
{
	"set_rotation", (methodPointerType)&m2713, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t513_m2713_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 864, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2714_MI = 
{
	"get_angularVelocity", (methodPointerType)&m2714, &t513_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 865, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t513_m2715_ParameterInfos[] = 
{
	{"value", 0, 134218599, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2715_MI = 
{
	"set_angularVelocity", (methodPointerType)&m2715, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t513_m2715_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 866, NULL, (methodPointerType)NULL};
extern TypeInfo t513_TI;
extern Il2CppType t20_0_0_0;
extern void* RuntimeInvoker_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m2716_MI = 
{
	"get_color", (methodPointerType)&m2716, &t513_TI, &t20_0_0_0, RuntimeInvoker_t20, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 867, NULL, (methodPointerType)NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t513_m2717_ParameterInfos[] = 
{
	{"value", 0, 134218600, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t513_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m2717_MI = 
{
	"set_color", (methodPointerType)&m2717, &t513_TI, &t30_0_0_0, RuntimeInvoker_t30_t20, t513_m2717_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 868, NULL, (methodPointerType)NULL};
static MethodInfo* t513_MIs[] =
{
	&m2702_MI,
	&m2703_MI,
	&m2704_MI,
	&m2705_MI,
	&m2706_MI,
	&m2707_MI,
	&m2708_MI,
	&m2709_MI,
	&m2710_MI,
	&m2711_MI,
	&m2712_MI,
	&m2713_MI,
	&m2714_MI,
	&m2715_MI,
	&m2716_MI,
	&m2717_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t513_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t513_0_0_0;
extern Il2CppType t513_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t513_TI;
TypeInfo t513_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Particle", "UnityEngine", t513_MIs, t513_PIs, t513_FIs, NULL, &t26_TI, NULL, NULL, &t513_TI, NULL, t513_VT, &EmptyCustomAttributesCache, &t513_TI, &t513_0_0_0, &t513_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t513)+ sizeof (Il2CppObject), 0, sizeof(t513 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 16, 8, 8, 0, 0, 4, 0, 0};
#include "t52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t52_TI;
#include "t52MD.h"

#include "t46.h"
#include "t45.h"
#include "UnityEngine_ArrayTypes.h"
#include "t45MD.h"
extern MethodInfo m2719_MI;
extern MethodInfo m2718_MI;
extern MethodInfo m1731_MI;
extern MethodInfo m1589_MI;
extern MethodInfo m1590_MI;
extern MethodInfo m2720_MI;
extern MethodInfo m2721_MI;
extern MethodInfo m2722_MI;


extern MethodInfo m2718_MI;
 bool m2718 (t28 * __this, t11  p0, t11  p1, t46 * p2, float p3, int32_t p4, MethodInfo* method){
	{
		bool L_0 = m2719(NULL, (&p0), (&p1), p2, p3, p4, &m2719_MI);
		return L_0;
	}
}
extern MethodInfo m2719_MI;
 bool m2719 (t28 * __this, t11 * p0, t11 * p1, t46 * p2, float p3, int32_t p4, MethodInfo* method){
	typedef bool (*m2719_ftn) (t11 *, t11 *, t46 *, float, int32_t);
	static m2719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m2720_MI;
 bool m2720 (t28 * __this, t11  p0, t11  p1, t46 * p2, float p3, int32_t p4, MethodInfo* method){
	{
		bool L_0 = m2718(NULL, p0, p1, p2, p3, p4, &m2718_MI);
		return L_0;
	}
}
extern MethodInfo m145_MI;
 bool m145 (t28 * __this, t45  p0, t46 * p1, float p2, MethodInfo* method){
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		bool L_0 = m1731(NULL, p0, p1, p2, V_0, &m1731_MI);
		return L_0;
	}
}
extern MethodInfo m163_MI;
 bool m163 (t28 * __this, t45  p0, t46 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		bool L_0 = m1731(NULL, p0, p1, V_1, V_0, &m1731_MI);
		return L_0;
	}
}
extern MethodInfo m1731_MI;
 bool m1731 (t28 * __this, t45  p0, t46 * p1, float p2, int32_t p3, MethodInfo* method){
	{
		t11  L_0 = m1589((&p0), &m1589_MI);
		t11  L_1 = m1590((&p0), &m1590_MI);
		bool L_2 = m2720(NULL, L_0, L_1, p1, p2, p3, &m2720_MI);
		return L_2;
	}
}
extern MethodInfo m1603_MI;
 t351* m1603 (t28 * __this, t45  p0, float p1, int32_t p2, MethodInfo* method){
	{
		t11  L_0 = m1589((&p0), &m1589_MI);
		t11  L_1 = m1590((&p0), &m1590_MI);
		t351* L_2 = m2721(NULL, L_0, L_1, p1, p2, &m2721_MI);
		return L_2;
	}
}
extern MethodInfo m2721_MI;
 t351* m2721 (t28 * __this, t11  p0, t11  p1, float p2, int32_t p3, MethodInfo* method){
	{
		t351* L_0 = m2722(NULL, (&p0), (&p1), p2, p3, &m2722_MI);
		return L_0;
	}
}
extern MethodInfo m2722_MI;
 t351* m2722 (t28 * __this, t11 * p0, t11 * p1, float p2, int32_t p3, MethodInfo* method){
	typedef t351* (*m2722_ftn) (t11 *, t11 *, float, int32_t);
	static m2722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
// Metadata Definition UnityEngine.Physics
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t52_m2718_ParameterInfos[] = 
{
	{"origin", 0, 134218601, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"direction", 1, 134218602, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"hitInfo", 2, 134218603, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 3, 134218604, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layermask", 4, 134218605, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t11_t11_t621_t33_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2718_MI = 
{
	"Internal_Raycast", (methodPointerType)&m2718, &t52_TI, &t31_0_0_0, RuntimeInvoker_t31_t11_t11_t621_t33_t47, t52_m2718_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 5, false, false, 869, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
extern Il2CppType t11_1_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t52_m2719_ParameterInfos[] = 
{
	{"origin", 0, 134218606, &EmptyCustomAttributesCache, &t11_1_0_0},
	{"direction", 1, 134218607, &EmptyCustomAttributesCache, &t11_1_0_0},
	{"hitInfo", 2, 134218608, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 3, 134218609, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layermask", 4, 134218610, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t595_t595_t621_t33_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m2719;
MethodInfo m2719_MI = 
{
	"INTERNAL_CALL_Internal_Raycast", (methodPointerType)&m2719, &t52_TI, &t31_0_0_0, RuntimeInvoker_t31_t595_t595_t621_t33_t47, t52_m2719_ParameterInfos, &t52__CustomAttributeCache_m2719, 145, 4096, 255, 5, false, false, 870, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m2720_Arg3_ParameterInfo;
extern Il2CppType t47_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m2720_Arg4_ParameterInfo;
static ParameterInfo t52_m2720_ParameterInfos[] = 
{
	{"origin", 0, 134218611, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"direction", 1, 134218612, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"hitInfo", 2, 134218613, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 3, 134218614, &t52__CustomAttributeCache_t52_m2720_Arg3_ParameterInfo, &t33_0_0_0},
	{"layerMask", 4, 134218615, &t52__CustomAttributeCache_t52_m2720_Arg4_ParameterInfo, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t11_t11_t621_t33_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2720_MI = 
{
	"Raycast", (methodPointerType)&m2720, &t52_TI, &t31_0_0_0, RuntimeInvoker_t31_t11_t11_t621_t33_t47, t52_m2720_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 871, NULL, (methodPointerType)NULL};
extern Il2CppType t45_0_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t52_m145_ParameterInfos[] = 
{
	{"ray", 0, 134218616, &EmptyCustomAttributesCache, &t45_0_0_0},
	{"hitInfo", 1, 134218617, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 2, 134218618, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t45_t621_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m145;
MethodInfo m145_MI = 
{
	"Raycast", (methodPointerType)&m145, &t52_TI, &t31_0_0_0, RuntimeInvoker_t31_t45_t621_t33, t52_m145_ParameterInfos, &t52__CustomAttributeCache_m145, 150, 0, 255, 3, false, false, 872, NULL, (methodPointerType)NULL};
extern Il2CppType t45_0_0_0;
extern Il2CppType t46_1_0_0;
static ParameterInfo t52_m163_ParameterInfos[] = 
{
	{"ray", 0, 134218619, &EmptyCustomAttributesCache, &t45_0_0_0},
	{"hitInfo", 1, 134218620, &EmptyCustomAttributesCache, &t46_1_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t45_t621 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m163;
MethodInfo m163_MI = 
{
	"Raycast", (methodPointerType)&m163, &t52_TI, &t31_0_0_0, RuntimeInvoker_t31_t45_t621, t52_m163_ParameterInfos, &t52__CustomAttributeCache_m163, 150, 0, 255, 2, false, false, 873, NULL, (methodPointerType)NULL};
extern Il2CppType t45_0_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m1731_Arg2_ParameterInfo;
extern Il2CppType t47_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m1731_Arg3_ParameterInfo;
static ParameterInfo t52_m1731_ParameterInfos[] = 
{
	{"ray", 0, 134218621, &EmptyCustomAttributesCache, &t45_0_0_0},
	{"hitInfo", 1, 134218622, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 2, 134218623, &t52__CustomAttributeCache_t52_m1731_Arg2_ParameterInfo, &t33_0_0_0},
	{"layerMask", 3, 134218624, &t52__CustomAttributeCache_t52_m1731_Arg3_ParameterInfo, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t45_t621_t33_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1731_MI = 
{
	"Raycast", (methodPointerType)&m1731, &t52_TI, &t31_0_0_0, RuntimeInvoker_t31_t45_t621_t33_t47, t52_m1731_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 874, NULL, (methodPointerType)NULL};
extern Il2CppType t45_0_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m1603_Arg1_ParameterInfo;
extern Il2CppType t47_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m1603_Arg2_ParameterInfo;
static ParameterInfo t52_m1603_ParameterInfos[] = 
{
	{"ray", 0, 134218625, &EmptyCustomAttributesCache, &t45_0_0_0},
	{"maxDistance", 1, 134218626, &t52__CustomAttributeCache_t52_m1603_Arg1_ParameterInfo, &t33_0_0_0},
	{"layerMask", 2, 134218627, &t52__CustomAttributeCache_t52_m1603_Arg2_ParameterInfo, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t28_t45_t33_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1603_MI = 
{
	"RaycastAll", (methodPointerType)&m1603, &t52_TI, &t351_0_0_0, RuntimeInvoker_t28_t45_t33_t47, t52_m1603_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 875, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m2721_Arg2_ParameterInfo;
extern Il2CppType t47_0_0_0;
extern CustomAttributesCache t52__CustomAttributeCache_t52_m2721_Arg3_ParameterInfo;
static ParameterInfo t52_m2721_ParameterInfos[] = 
{
	{"origin", 0, 134218628, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"direction", 1, 134218629, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"maxDistance", 2, 134218630, &t52__CustomAttributeCache_t52_m2721_Arg2_ParameterInfo, &t33_0_0_0},
	{"layermask", 3, 134218631, &t52__CustomAttributeCache_t52_m2721_Arg3_ParameterInfo, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t28_t11_t11_t33_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2721_MI = 
{
	"RaycastAll", (methodPointerType)&m2721, &t52_TI, &t351_0_0_0, RuntimeInvoker_t28_t11_t11_t33_t47, t52_m2721_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 876, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
extern Il2CppType t11_1_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t52_m2722_ParameterInfos[] = 
{
	{"origin", 0, 134218632, &EmptyCustomAttributesCache, &t11_1_0_0},
	{"direction", 1, 134218633, &EmptyCustomAttributesCache, &t11_1_0_0},
	{"maxDistance", 2, 134218634, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layermask", 3, 134218635, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t52_TI;
extern Il2CppType t351_0_0_0;
extern void* RuntimeInvoker_t28_t595_t595_t33_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m2722;
MethodInfo m2722_MI = 
{
	"INTERNAL_CALL_RaycastAll", (methodPointerType)&m2722, &t52_TI, &t351_0_0_0, RuntimeInvoker_t28_t595_t595_t33_t47, t52_m2722_ParameterInfos, &t52__CustomAttributeCache_m2722, 145, 4096, 255, 4, false, false, 877, NULL, (methodPointerType)NULL};
static MethodInfo* t52_MIs[] =
{
	&m2718_MI,
	&m2719_MI,
	&m2720_MI,
	&m145_MI,
	&m163_MI,
	&m1731_MI,
	&m1603_MI,
	&m2721_MI,
	&m2722_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t52_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t52_CustomAttributesCacheGenerator_m2719(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m2720_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m2720_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t585_TI;
extern MethodInfo m2954_MI;
void t52_CustomAttributesCacheGenerator_m145(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t585 * tmp;
		tmp = (t585 *)il2cpp_codegen_object_new (&t585_TI);
		m2954(tmp, &m2954_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t585_TI;
extern MethodInfo m2954_MI;
void t52_CustomAttributesCacheGenerator_m163(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t585 * tmp;
		tmp = (t585 *)il2cpp_codegen_object_new (&t585_TI);
		m2954(tmp, &m2954_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m1731_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m1731_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m1603_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m1603_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m2721_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t52_CustomAttributesCacheGenerator_t52_m2721_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t52_CustomAttributesCacheGenerator_m2722(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t52__CustomAttributeCache_m2719 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m2719
};
CustomAttributesCache t52__CustomAttributeCache_t52_m2720_Arg3_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m2720_Arg3_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_t52_m2720_Arg4_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m2720_Arg4_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_m145 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m145
};
CustomAttributesCache t52__CustomAttributeCache_m163 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m163
};
CustomAttributesCache t52__CustomAttributeCache_t52_m1731_Arg2_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m1731_Arg2_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_t52_m1731_Arg3_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m1731_Arg3_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_t52_m1603_Arg1_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m1603_Arg1_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_t52_m1603_Arg2_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m1603_Arg2_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_t52_m2721_Arg2_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m2721_Arg2_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_t52_m2721_Arg3_ParameterInfo = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_t52_m2721_Arg3_ParameterInfo
};
CustomAttributesCache t52__CustomAttributeCache_m2722 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m2722
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t52_0_0_0;
extern Il2CppType t52_1_0_0;
extern TypeInfo t28_TI;
struct t52;
extern TypeInfo t52_TI;
extern CustomAttributesCache t52__CustomAttributeCache_m2719;
extern CustomAttributesCache t52__CustomAttributeCache_m145;
extern CustomAttributesCache t52__CustomAttributeCache_m163;
extern CustomAttributesCache t52__CustomAttributeCache_m2722;
TypeInfo t52_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Physics", "UnityEngine", t52_MIs, NULL, NULL, NULL, &t28_TI, NULL, NULL, &t52_TI, NULL, t52_VT, &EmptyCustomAttributesCache, &t52_TI, &t52_0_0_0, &t52_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t52), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 9, 0, 0, 0, 0, 4, 0, 0};
#include "t4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4_TI;
#include "t4MD.h"

extern MethodInfo m2723_MI;
extern MethodInfo m2724_MI;
extern MethodInfo m2725_MI;
extern MethodInfo m2726_MI;


extern MethodInfo m2723_MI;
 void m2723 (t4 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2723_ftn) (t4 *, t11 *);
	static m2723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2724_MI;
 void m2724 (t4 * __this, t11 * p0, MethodInfo* method){
	typedef void (*m2724_ftn) (t4 *, t11 *);
	static m2724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m116_MI;
 t11  m116 (t4 * __this, MethodInfo* method){
	t11  V_0 = {0};
	{
		m2723(__this, (&V_0), &m2723_MI);
		return V_0;
	}
}
extern MethodInfo m118_MI;
 void m118 (t4 * __this, t11  p0, MethodInfo* method){
	{
		m2724(__this, (&p0), &m2724_MI);
		return;
	}
}
extern MethodInfo m114_MI;
 void m114 (t4 * __this, bool p0, MethodInfo* method){
	typedef void (*m114_ftn) (t4 *, bool);
	static m114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m119_MI;
 void m119 (t4 * __this, t11  p0, MethodInfo* method){
	{
		m2725(NULL, __this, (&p0), &m2725_MI);
		return;
	}
}
extern MethodInfo m2725_MI;
 void m2725 (t28 * __this, t4 * p0, t11 * p1, MethodInfo* method){
	typedef void (*m2725_ftn) (t4 *, t11 *);
	static m2725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m164_MI;
 bool m164 (t4 * __this, t11  p0, t46 * p1, float p2, MethodInfo* method){
	{
		bool L_0 = m2726(NULL, __this, (&p0), p1, p2, &m2726_MI);
		return L_0;
	}
}
extern MethodInfo m2726_MI;
 bool m2726 (t28 * __this, t4 * p0, t11 * p1, t46 * p2, float p3, MethodInfo* method){
	typedef bool (*m2726_ftn) (t4 *, t11 *, t46 *, float);
	static m2726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_SweepTest(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
// Metadata Definition UnityEngine.Rigidbody
extern MethodInfo m116_MI;
extern MethodInfo m118_MI;
static PropertyInfo t4____velocity_PropertyInfo = 
{
	&t4_TI, "velocity", &m116_MI, &m118_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m114_MI;
static PropertyInfo t4____useGravity_PropertyInfo = 
{
	&t4_TI, "useGravity", NULL, &m114_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t4_PIs[] =
{
	&t4____velocity_PropertyInfo,
	&t4____useGravity_PropertyInfo,
	NULL
};
extern Il2CppType t11_1_0_0;
static ParameterInfo t4_m2723_ParameterInfos[] = 
{
	{"value", 0, 134218636, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t4__CustomAttributeCache_m2723;
MethodInfo m2723_MI = 
{
	"INTERNAL_get_velocity", (methodPointerType)&m2723, &t4_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t4_m2723_ParameterInfos, &t4__CustomAttributeCache_m2723, 129, 4096, 255, 1, false, false, 878, NULL, (methodPointerType)NULL};
extern Il2CppType t11_1_0_0;
static ParameterInfo t4_m2724_ParameterInfos[] = 
{
	{"value", 0, 134218637, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t4__CustomAttributeCache_m2724;
MethodInfo m2724_MI = 
{
	"INTERNAL_set_velocity", (methodPointerType)&m2724, &t4_TI, &t30_0_0_0, RuntimeInvoker_t30_t595, t4_m2724_ParameterInfos, &t4__CustomAttributeCache_m2724, 129, 4096, 255, 1, false, false, 879, NULL, (methodPointerType)NULL};
extern TypeInfo t4_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m116_MI = 
{
	"get_velocity", (methodPointerType)&m116, &t4_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 880, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t4_m118_ParameterInfos[] = 
{
	{"value", 0, 134218638, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m118_MI = 
{
	"set_velocity", (methodPointerType)&m118, &t4_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t4_m118_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 881, NULL, (methodPointerType)NULL};
extern Il2CppType t31_0_0_0;
static ParameterInfo t4_m114_ParameterInfos[] = 
{
	{"value", 0, 134218639, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t323 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t4__CustomAttributeCache_m114;
MethodInfo m114_MI = 
{
	"set_useGravity", (methodPointerType)&m114, &t4_TI, &t30_0_0_0, RuntimeInvoker_t30_t323, t4_m114_ParameterInfos, &t4__CustomAttributeCache_m114, 2182, 4096, 255, 1, false, false, 882, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t4_m119_ParameterInfos[] = 
{
	{"position", 0, 134218640, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m119_MI = 
{
	"MovePosition", (methodPointerType)&m119, &t4_TI, &t30_0_0_0, RuntimeInvoker_t30_t11, t4_m119_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 883, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t11_1_0_0;
static ParameterInfo t4_m2725_ParameterInfos[] = 
{
	{"self", 0, 134218641, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"position", 1, 134218642, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t595 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t4__CustomAttributeCache_m2725;
MethodInfo m2725_MI = 
{
	"INTERNAL_CALL_MovePosition", (methodPointerType)&m2725, &t4_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t595, t4_m2725_ParameterInfos, &t4__CustomAttributeCache_m2725, 145, 4096, 255, 2, false, false, 884, NULL, (methodPointerType)NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t4__CustomAttributeCache_t4_m164_Arg2_ParameterInfo;
static ParameterInfo t4_m164_ParameterInfos[] = 
{
	{"direction", 0, 134218643, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"hitInfo", 1, 134218644, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 2, 134218645, &t4__CustomAttributeCache_t4_m164_Arg2_ParameterInfo, &t33_0_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t11_t621_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m164_MI = 
{
	"SweepTest", (methodPointerType)&m164, &t4_TI, &t31_0_0_0, RuntimeInvoker_t31_t11_t621_t33, t4_m164_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 885, NULL, (methodPointerType)NULL};
extern Il2CppType t4_0_0_0;
extern Il2CppType t11_1_0_0;
extern Il2CppType t46_1_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t4_m2726_ParameterInfos[] = 
{
	{"self", 0, 134218646, &EmptyCustomAttributesCache, &t4_0_0_0},
	{"direction", 1, 134218647, &EmptyCustomAttributesCache, &t11_1_0_0},
	{"hitInfo", 2, 134218648, &EmptyCustomAttributesCache, &t46_1_0_0},
	{"maxDistance", 3, 134218649, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t4_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t595_t621_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t4__CustomAttributeCache_m2726;
MethodInfo m2726_MI = 
{
	"INTERNAL_CALL_SweepTest", (methodPointerType)&m2726, &t4_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t595_t621_t33, t4_m2726_ParameterInfos, &t4__CustomAttributeCache_m2726, 145, 4096, 255, 4, false, false, 886, NULL, (methodPointerType)NULL};
static MethodInfo* t4_MIs[] =
{
	&m2723_MI,
	&m2724_MI,
	&m116_MI,
	&m118_MI,
	&m114_MI,
	&m119_MI,
	&m2725_MI,
	&m164_MI,
	&m2726_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t4_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t4_CustomAttributesCacheGenerator_m2723(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t4_CustomAttributesCacheGenerator_m2724(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t4_CustomAttributesCacheGenerator_m114(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t4_CustomAttributesCacheGenerator_m2725(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t4_CustomAttributesCacheGenerator_t4_m164_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t4_CustomAttributesCacheGenerator_m2726(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t4__CustomAttributeCache_m2723 = {
1,
NULL,
&t4_CustomAttributesCacheGenerator_m2723
};
CustomAttributesCache t4__CustomAttributeCache_m2724 = {
1,
NULL,
&t4_CustomAttributesCacheGenerator_m2724
};
CustomAttributesCache t4__CustomAttributeCache_m114 = {
1,
NULL,
&t4_CustomAttributesCacheGenerator_m114
};
CustomAttributesCache t4__CustomAttributeCache_m2725 = {
1,
NULL,
&t4_CustomAttributesCacheGenerator_m2725
};
CustomAttributesCache t4__CustomAttributeCache_t4_m164_Arg2_ParameterInfo = {
1,
NULL,
&t4_CustomAttributesCacheGenerator_t4_m164_Arg2_ParameterInfo
};
CustomAttributesCache t4__CustomAttributeCache_m2726 = {
1,
NULL,
&t4_CustomAttributesCacheGenerator_m2726
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_1_0_0;
extern TypeInfo t35_TI;
struct t4;
extern TypeInfo t4_TI;
extern CustomAttributesCache t4__CustomAttributeCache_m2723;
extern CustomAttributesCache t4__CustomAttributeCache_m2724;
extern CustomAttributesCache t4__CustomAttributeCache_m114;
extern CustomAttributesCache t4__CustomAttributeCache_m2725;
extern CustomAttributesCache t4__CustomAttributeCache_m2726;
TypeInfo t4_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Rigidbody", "UnityEngine", t4_MIs, t4_PIs, NULL, NULL, &t35_TI, NULL, NULL, &t4_TI, NULL, t4_VT, &EmptyCustomAttributesCache, &t4_TI, &t4_0_0_0, &t4_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 9, 2, 0, 0, 0, 4, 0, 0};
#include "t48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t48_TI;
#include "t48MD.h"



// Metadata Definition UnityEngine.Collider
static MethodInfo* t48_MIs[] =
{
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t48_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t48_0_0_0;
extern Il2CppType t48_1_0_0;
extern TypeInfo t35_TI;
struct t48;
extern TypeInfo t48_TI;
TypeInfo t48_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Collider", "UnityEngine", t48_MIs, NULL, NULL, NULL, &t35_TI, NULL, NULL, &t48_TI, NULL, t48_VT, &EmptyCustomAttributesCache, &t48_TI, &t48_0_0_0, &t48_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t48), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t6_TI;
#include "t6MD.h"



// Metadata Definition UnityEngine.SphereCollider
static MethodInfo* t6_MIs[] =
{
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t6_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t6_0_0_0;
extern Il2CppType t6_1_0_0;
extern TypeInfo t48_TI;
struct t6;
extern TypeInfo t6_TI;
TypeInfo t6_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SphereCollider", "UnityEngine", t6_MIs, NULL, NULL, NULL, &t48_TI, NULL, NULL, &t6_TI, NULL, t6_VT, &EmptyCustomAttributesCache, &t6_TI, &t6_0_0_0, &t6_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t6), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t62_TI;
#include "t62MD.h"



// Metadata Definition UnityEngine.MeshCollider
static MethodInfo* t62_MIs[] =
{
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t62_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t62_0_0_0;
extern Il2CppType t62_1_0_0;
extern TypeInfo t48_TI;
struct t62;
extern TypeInfo t62_TI;
TypeInfo t62_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "MeshCollider", "UnityEngine", t62_MIs, NULL, NULL, NULL, &t48_TI, NULL, NULL, &t62_TI, NULL, t62_VT, &EmptyCustomAttributesCache, &t62_TI, &t62_0_0_0, &t62_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t62), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t46_TI;
#include "t46MD.h"

extern TypeInfo t46_TI;


extern MethodInfo m1606_MI;
 t11  m1606 (t46 * __this, MethodInfo* method){
	{
		t11  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m1607_MI;
 t11  m1607 (t46 * __this, MethodInfo* method){
	{
		t11  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m1608_MI;
 float m1608 (t46 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m146_MI;
 t48 * m146 (t46 * __this, MethodInfo* method){
	{
		t48 * L_0 = (__this->f5);
		return L_0;
	}
}
// Metadata Definition UnityEngine.RaycastHit
extern Il2CppType t11_0_0_1;
FieldInfo t46_f0_FieldInfo = 
{
	"m_Point", &t11_0_0_1, &t46_TI, offsetof(t46, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t46_f1_FieldInfo = 
{
	"m_Normal", &t11_0_0_1, &t46_TI, offsetof(t46, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t46_f2_FieldInfo = 
{
	"m_FaceID", &t47_0_0_1, &t46_TI, offsetof(t46, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t46_f3_FieldInfo = 
{
	"m_Distance", &t33_0_0_1, &t46_TI, offsetof(t46, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_1;
FieldInfo t46_f4_FieldInfo = 
{
	"m_UV", &t59_0_0_1, &t46_TI, offsetof(t46, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_1;
FieldInfo t46_f5_FieldInfo = 
{
	"m_Collider", &t48_0_0_1, &t46_TI, offsetof(t46, f5) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t46_FIs[] =
{
	&t46_f0_FieldInfo,
	&t46_f1_FieldInfo,
	&t46_f2_FieldInfo,
	&t46_f3_FieldInfo,
	&t46_f4_FieldInfo,
	&t46_f5_FieldInfo,
	NULL
};
extern MethodInfo m1606_MI;
static PropertyInfo t46____point_PropertyInfo = 
{
	&t46_TI, "point", &m1606_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1607_MI;
static PropertyInfo t46____normal_PropertyInfo = 
{
	&t46_TI, "normal", &m1607_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1608_MI;
static PropertyInfo t46____distance_PropertyInfo = 
{
	&t46_TI, "distance", &m1608_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m146_MI;
static PropertyInfo t46____collider_PropertyInfo = 
{
	&t46_TI, "collider", &m146_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t46_PIs[] =
{
	&t46____point_PropertyInfo,
	&t46____normal_PropertyInfo,
	&t46____distance_PropertyInfo,
	&t46____collider_PropertyInfo,
	NULL
};
extern TypeInfo t46_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m1606_MI = 
{
	"get_point", (methodPointerType)&m1606, &t46_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 887, NULL, (methodPointerType)NULL};
extern TypeInfo t46_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m1607_MI = 
{
	"get_normal", (methodPointerType)&m1607, &t46_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 888, NULL, (methodPointerType)NULL};
extern TypeInfo t46_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m1608_MI = 
{
	"get_distance", (methodPointerType)&m1608, &t46_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 889, NULL, (methodPointerType)NULL};
extern TypeInfo t46_TI;
extern Il2CppType t48_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m146_MI = 
{
	"get_collider", (methodPointerType)&m146, &t46_TI, &t48_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 890, NULL, (methodPointerType)NULL};
static MethodInfo* t46_MIs[] =
{
	&m1606_MI,
	&m1607_MI,
	&m1608_MI,
	&m146_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t46_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t46_TI;
TypeInfo t46_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RaycastHit", "UnityEngine", t46_MIs, t46_PIs, t46_FIs, NULL, &t26_TI, NULL, NULL, &t46_TI, NULL, t46_VT, &EmptyCustomAttributesCache, &t46_TI, &t46_0_0_0, &t46_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t46)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 4, 4, 6, 0, 0, 4, 0, 0};
#include "t40.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t40_TI;
#include "t40MD.h"

extern TypeInfo t40_TI;


extern MethodInfo m130_MI;
 t11  m130 (t40 * __this, MethodInfo* method){
	{
		t11  L_0 = (__this->f1);
		return L_0;
	}
}
// Metadata Definition UnityEngine.ContactPoint
extern Il2CppType t11_0_0_3;
FieldInfo t40_f0_FieldInfo = 
{
	"m_Point", &t11_0_0_3, &t40_TI, offsetof(t40, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_3;
FieldInfo t40_f1_FieldInfo = 
{
	"m_Normal", &t11_0_0_3, &t40_TI, offsetof(t40, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_3;
FieldInfo t40_f2_FieldInfo = 
{
	"m_ThisColliderInstanceID", &t47_0_0_3, &t40_TI, offsetof(t40, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_3;
FieldInfo t40_f3_FieldInfo = 
{
	"m_OtherColliderInstanceID", &t47_0_0_3, &t40_TI, offsetof(t40, f3) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t40_FIs[] =
{
	&t40_f0_FieldInfo,
	&t40_f1_FieldInfo,
	&t40_f2_FieldInfo,
	&t40_f3_FieldInfo,
	NULL
};
extern MethodInfo m130_MI;
static PropertyInfo t40____normal_PropertyInfo = 
{
	&t40_TI, "normal", &m130_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t40_PIs[] =
{
	&t40____normal_PropertyInfo,
	NULL
};
extern TypeInfo t40_TI;
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t11 (MethodInfo* method, void* obj, void** args);
MethodInfo m130_MI = 
{
	"get_normal", (methodPointerType)&m130, &t40_TI, &t11_0_0_0, RuntimeInvoker_t11, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 891, NULL, (methodPointerType)NULL};
static MethodInfo* t40_MIs[] =
{
	&m130_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t40_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t40_0_0_0;
extern Il2CppType t40_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t40_TI;
TypeInfo t40_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ContactPoint", "UnityEngine", t40_MIs, t40_PIs, t40_FIs, NULL, &t26_TI, NULL, NULL, &t40_TI, NULL, t40_VT, &EmptyCustomAttributesCache, &t40_TI, &t40_0_0_0, &t40_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t40)+ sizeof (Il2CppObject), 0, sizeof(t40 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 1, 1, 4, 0, 0, 4, 0, 0};
#include "t9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t9_TI;
#include "t9MD.h"

extern TypeInfo t9_TI;
extern MethodInfo m138_MI;
extern MethodInfo m94_MI;


extern MethodInfo m125_MI;
 t5 * m125 (t9 * __this, MethodInfo* method){
	t5 * G_B3_0 = {0};
	{
		t4 * L_0 = (__this->f1);
		bool L_1 = m138(NULL, L_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t4 * L_2 = (__this->f1);
		t5 * L_3 = m94(L_2, &m94_MI);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_0021:
	{
		t48 * L_4 = (__this->f2);
		t5 * L_5 = m94(L_4, &m94_MI);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m129_MI;
 t42* m129 (t9 * __this, MethodInfo* method){
	{
		t42* L_0 = (__this->f3);
		return L_0;
	}
}
// Metadata Definition UnityEngine.Collision
extern Il2CppType t11_0_0_3;
FieldInfo t9_f0_FieldInfo = 
{
	"m_RelativeVelocity", &t11_0_0_3, &t9_TI, offsetof(t9, f0), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_3;
FieldInfo t9_f1_FieldInfo = 
{
	"m_Rigidbody", &t4_0_0_3, &t9_TI, offsetof(t9, f1), &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_3;
FieldInfo t9_f2_FieldInfo = 
{
	"m_Collider", &t48_0_0_3, &t9_TI, offsetof(t9, f2), &EmptyCustomAttributesCache};
extern Il2CppType t42_0_0_3;
FieldInfo t9_f3_FieldInfo = 
{
	"m_Contacts", &t42_0_0_3, &t9_TI, offsetof(t9, f3), &EmptyCustomAttributesCache};
static FieldInfo* t9_FIs[] =
{
	&t9_f0_FieldInfo,
	&t9_f1_FieldInfo,
	&t9_f2_FieldInfo,
	&t9_f3_FieldInfo,
	NULL
};
extern MethodInfo m125_MI;
static PropertyInfo t9____gameObject_PropertyInfo = 
{
	&t9_TI, "gameObject", &m125_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m129_MI;
static PropertyInfo t9____contacts_PropertyInfo = 
{
	&t9_TI, "contacts", &m129_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t9_PIs[] =
{
	&t9____gameObject_PropertyInfo,
	&t9____contacts_PropertyInfo,
	NULL
};
extern TypeInfo t9_TI;
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m125_MI = 
{
	"get_gameObject", (methodPointerType)&m125, &t9_TI, &t5_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 892, NULL, (methodPointerType)NULL};
extern TypeInfo t9_TI;
extern Il2CppType t42_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m129_MI = 
{
	"get_contacts", (methodPointerType)&m129, &t9_TI, &t42_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 893, NULL, (methodPointerType)NULL};
static MethodInfo* t9_MIs[] =
{
	&m125_MI,
	&m129_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t9_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t9_0_0_0;
extern Il2CppType t9_1_0_0;
extern TypeInfo t28_TI;
struct t9;
extern TypeInfo t9_TI;
TypeInfo t9_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Collision", "UnityEngine", t9_MIs, t9_PIs, t9_FIs, NULL, &t28_TI, NULL, NULL, &t9_TI, NULL, t9_VT, &EmptyCustomAttributesCache, &t9_TI, &t9_0_0_0, &t9_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t9), 0, -1, 0, 0, -1, 1048585, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 2, 4, 0, 0, 4, 0, 0};
#include "t348.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t348_TI;
#include "t348MD.h"

#include "t514.h"
#include "t345.h"
extern TypeInfo t514_TI;
extern TypeInfo t348_TI;
#include "t514MD.h"
extern MethodInfo m3025_MI;
extern MethodInfo m2729_MI;
extern MethodInfo m2730_MI;
extern MethodInfo m2728_MI;
extern MethodInfo m2731_MI;


extern MethodInfo m2727_MI;
 void m2727 (t28 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t514_TI));
		t514 * L_0 = (t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t514_TI));
		m3025(L_0, &m3025_MI);
		((t348_SFs*)InitializedTypeInfo(&t348_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m2728_MI;
 void m2728 (t28 * __this, t59  p0, t59  p1, float p2, int32_t p3, float p4, float p5, t345 * p6, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t348_TI));
		m2729(NULL, (&p0), (&p1), p2, p3, p4, p5, p6, &m2729_MI);
		return;
	}
}
extern MethodInfo m2729_MI;
 void m2729 (t28 * __this, t59 * p0, t59 * p1, float p2, int32_t p3, float p4, float p5, t345 * p6, MethodInfo* method){
	typedef void (*m2729_ftn) (t59 *, t59 *, float, int32_t, float, float, t345 *);
	static m2729_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2729_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6);
}
extern MethodInfo m1732_MI;
 t345  m1732 (t28 * __this, t59  p0, t59  p1, float p2, int32_t p3, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t348_TI));
		t345  L_0 = m2730(NULL, p0, p1, p2, p3, V_1, V_0, &m2730_MI);
		return L_0;
	}
}
extern MethodInfo m2730_MI;
 t345  m2730 (t28 * __this, t59  p0, t59  p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method){
	t345  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t348_TI));
		m2728(NULL, p0, p1, p2, p3, p4, p5, (&V_0), &m2728_MI);
		return V_0;
	}
}
extern MethodInfo m1591_MI;
 t349* m1591 (t28 * __this, t59  p0, t59  p1, float p2, int32_t p3, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t348_TI));
		t349* L_0 = m2731(NULL, (&p0), (&p1), p2, p3, V_1, V_0, &m2731_MI);
		return L_0;
	}
}
extern MethodInfo m2731_MI;
 t349* m2731 (t28 * __this, t59 * p0, t59 * p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method){
	typedef t349* (*m2731_ftn) (t59 *, t59 *, float, int32_t, float, float);
	static m2731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
// Metadata Definition UnityEngine.Physics2D
extern Il2CppType t514_0_0_17;
FieldInfo t348_f0_FieldInfo = 
{
	"m_LastDisabledRigidbody2D", &t514_0_0_17, &t348_TI, offsetof(t348_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t348_FIs[] =
{
	&t348_f0_FieldInfo,
	NULL
};
extern TypeInfo t348_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2727_MI = 
{
	".cctor", (methodPointerType)&m2727, &t348_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 894, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t345_1_0_0;
static ParameterInfo t348_m2728_ParameterInfos[] = 
{
	{"origin", 0, 134218650, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"direction", 1, 134218651, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"distance", 2, 134218652, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layerMask", 3, 134218653, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"minDepth", 4, 134218654, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"maxDepth", 5, 134218655, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"raycastHit", 6, 134218656, &EmptyCustomAttributesCache, &t345_1_0_0},
};
extern TypeInfo t348_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t59_t59_t33_t47_t33_t33_t622 (MethodInfo* method, void* obj, void** args);
MethodInfo m2728_MI = 
{
	"Internal_Raycast", (methodPointerType)&m2728, &t348_TI, &t30_0_0_0, RuntimeInvoker_t30_t59_t59_t33_t47_t33_t33_t622, t348_m2728_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 7, false, false, 895, NULL, (methodPointerType)NULL};
extern Il2CppType t59_1_0_0;
extern Il2CppType t59_1_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t345_1_0_0;
static ParameterInfo t348_m2729_ParameterInfos[] = 
{
	{"origin", 0, 134218657, &EmptyCustomAttributesCache, &t59_1_0_0},
	{"direction", 1, 134218658, &EmptyCustomAttributesCache, &t59_1_0_0},
	{"distance", 2, 134218659, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layerMask", 3, 134218660, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"minDepth", 4, 134218661, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"maxDepth", 5, 134218662, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"raycastHit", 6, 134218663, &EmptyCustomAttributesCache, &t345_1_0_0},
};
extern TypeInfo t348_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t602_t602_t33_t47_t33_t33_t622 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t348__CustomAttributeCache_m2729;
MethodInfo m2729_MI = 
{
	"INTERNAL_CALL_Internal_Raycast", (methodPointerType)&m2729, &t348_TI, &t30_0_0_0, RuntimeInvoker_t30_t602_t602_t33_t47_t33_t33_t622, t348_m2729_ParameterInfos, &t348__CustomAttributeCache_m2729, 145, 4096, 255, 7, false, false, 896, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t348_m1732_ParameterInfos[] = 
{
	{"origin", 0, 134218664, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"direction", 1, 134218665, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"distance", 2, 134218666, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layerMask", 3, 134218667, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t348_TI;
extern Il2CppType t345_0_0_0;
extern void* RuntimeInvoker_t345_t59_t59_t33_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t348__CustomAttributeCache_m1732;
MethodInfo m1732_MI = 
{
	"Raycast", (methodPointerType)&m1732, &t348_TI, &t345_0_0_0, RuntimeInvoker_t345_t59_t59_t33_t47, t348_m1732_ParameterInfos, &t348__CustomAttributeCache_m1732, 150, 0, 255, 4, false, false, 897, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg2_ParameterInfo;
extern Il2CppType t47_0_0_0;
extern CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg3_ParameterInfo;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg4_ParameterInfo;
extern Il2CppType t33_0_0_0;
extern CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg5_ParameterInfo;
static ParameterInfo t348_m2730_ParameterInfos[] = 
{
	{"origin", 0, 134218668, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"direction", 1, 134218669, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"distance", 2, 134218670, &t348__CustomAttributeCache_t348_m2730_Arg2_ParameterInfo, &t33_0_0_0},
	{"layerMask", 3, 134218671, &t348__CustomAttributeCache_t348_m2730_Arg3_ParameterInfo, &t47_0_0_0},
	{"minDepth", 4, 134218672, &t348__CustomAttributeCache_t348_m2730_Arg4_ParameterInfo, &t33_0_0_0},
	{"maxDepth", 5, 134218673, &t348__CustomAttributeCache_t348_m2730_Arg5_ParameterInfo, &t33_0_0_0},
};
extern TypeInfo t348_TI;
extern Il2CppType t345_0_0_0;
extern void* RuntimeInvoker_t345_t59_t59_t33_t47_t33_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2730_MI = 
{
	"Raycast", (methodPointerType)&m2730, &t348_TI, &t345_0_0_0, RuntimeInvoker_t345_t59_t59_t33_t47_t33_t33, t348_m2730_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 898, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t348_m1591_ParameterInfos[] = 
{
	{"origin", 0, 134218674, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"direction", 1, 134218675, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"distance", 2, 134218676, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layerMask", 3, 134218677, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t348_TI;
extern Il2CppType t349_0_0_0;
extern void* RuntimeInvoker_t28_t59_t59_t33_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t348__CustomAttributeCache_m1591;
MethodInfo m1591_MI = 
{
	"RaycastAll", (methodPointerType)&m1591, &t348_TI, &t349_0_0_0, RuntimeInvoker_t28_t59_t59_t33_t47, t348_m1591_ParameterInfos, &t348__CustomAttributeCache_m1591, 150, 0, 255, 4, false, false, 899, NULL, (methodPointerType)NULL};
extern Il2CppType t59_1_0_0;
extern Il2CppType t59_1_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t348_m2731_ParameterInfos[] = 
{
	{"origin", 0, 134218678, &EmptyCustomAttributesCache, &t59_1_0_0},
	{"direction", 1, 134218679, &EmptyCustomAttributesCache, &t59_1_0_0},
	{"distance", 2, 134218680, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"layerMask", 3, 134218681, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"minDepth", 4, 134218682, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"maxDepth", 5, 134218683, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t348_TI;
extern Il2CppType t349_0_0_0;
extern void* RuntimeInvoker_t28_t602_t602_t33_t47_t33_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t348__CustomAttributeCache_m2731;
MethodInfo m2731_MI = 
{
	"INTERNAL_CALL_RaycastAll", (methodPointerType)&m2731, &t348_TI, &t349_0_0_0, RuntimeInvoker_t28_t602_t602_t33_t47_t33_t33, t348_m2731_ParameterInfos, &t348__CustomAttributeCache_m2731, 145, 4096, 255, 6, false, false, 900, NULL, (methodPointerType)NULL};
static MethodInfo* t348_MIs[] =
{
	&m2727_MI,
	&m2728_MI,
	&m2729_MI,
	&m1732_MI,
	&m2730_MI,
	&m1591_MI,
	&m2731_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t348_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t348_CustomAttributesCacheGenerator_m2729(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t585_TI;
extern MethodInfo m2954_MI;
void t348_CustomAttributesCacheGenerator_m1732(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t585 * tmp;
		tmp = (t585 *)il2cpp_codegen_object_new (&t585_TI);
		m2954(tmp, &m2954_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t348_CustomAttributesCacheGenerator_t348_m2730_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t348_CustomAttributesCacheGenerator_t348_m2730_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t348_CustomAttributesCacheGenerator_t348_m2730_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t584_TI;
extern MethodInfo m2950_MI;
void t348_CustomAttributesCacheGenerator_t348_m2730_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t584 * tmp;
		tmp = (t584 *)il2cpp_codegen_object_new (&t584_TI);
		m2950(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), &m2950_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t585_TI;
extern MethodInfo m2954_MI;
void t348_CustomAttributesCacheGenerator_m1591(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t585 * tmp;
		tmp = (t585 *)il2cpp_codegen_object_new (&t585_TI);
		m2954(tmp, &m2954_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t348_CustomAttributesCacheGenerator_m2731(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t348__CustomAttributeCache_m2729 = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_m2729
};
CustomAttributesCache t348__CustomAttributeCache_m1732 = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_m1732
};
CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg2_ParameterInfo = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_t348_m2730_Arg2_ParameterInfo
};
CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg3_ParameterInfo = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_t348_m2730_Arg3_ParameterInfo
};
CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg4_ParameterInfo = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_t348_m2730_Arg4_ParameterInfo
};
CustomAttributesCache t348__CustomAttributeCache_t348_m2730_Arg5_ParameterInfo = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_t348_m2730_Arg5_ParameterInfo
};
CustomAttributesCache t348__CustomAttributeCache_m1591 = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_m1591
};
CustomAttributesCache t348__CustomAttributeCache_m2731 = {
1,
NULL,
&t348_CustomAttributesCacheGenerator_m2731
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t348_0_0_0;
extern Il2CppType t348_1_0_0;
extern TypeInfo t28_TI;
struct t348;
extern TypeInfo t348_TI;
extern CustomAttributesCache t348__CustomAttributeCache_m2729;
extern CustomAttributesCache t348__CustomAttributeCache_m1732;
extern CustomAttributesCache t348__CustomAttributeCache_m1591;
extern CustomAttributesCache t348__CustomAttributeCache_m2731;
TypeInfo t348_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Physics2D", "UnityEngine", t348_MIs, NULL, t348_FIs, NULL, &t28_TI, NULL, NULL, &t348_TI, NULL, t348_VT, &EmptyCustomAttributesCache, &t348_TI, &t348_0_0_0, &t348_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t348), 0, -1, sizeof(t348_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 7, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t345_TI;
#include "t345MD.h"

#include "t347.h"
#include "t515.h"
extern TypeInfo t345_TI;
#include "t347MD.h"
extern MethodInfo m1594_MI;
extern MethodInfo m138_MI;
extern MethodInfo m2733_MI;
extern MethodInfo m2732_MI;
extern MethodInfo m90_MI;


extern MethodInfo m1592_MI;
 t59  m1592 (t345 * __this, MethodInfo* method){
	{
		t59  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m1593_MI;
 t59  m1593 (t345 * __this, MethodInfo* method){
	{
		t59  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m1733_MI;
 float m1733 (t345 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m1594_MI;
 t347 * m1594 (t345 * __this, MethodInfo* method){
	{
		t347 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m2732_MI;
 t515 * m2732 (t345 * __this, MethodInfo* method){
	t515 * G_B3_0 = {0};
	{
		t347 * L_0 = m1594(__this, &m1594_MI);
		bool L_1 = m138(NULL, L_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t347 * L_2 = m1594(__this, &m1594_MI);
		t515 * L_3 = m2733(L_2, &m2733_MI);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((t515 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m1596_MI;
 t32 * m1596 (t345 * __this, MethodInfo* method){
	t515 * V_0 = {0};
	{
		t515 * L_0 = m2732(__this, &m2732_MI);
		V_0 = L_0;
		bool L_1 = m138(NULL, V_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		t32 * L_2 = m90(V_0, &m90_MI);
		return L_2;
	}

IL_001a:
	{
		t347 * L_3 = m1594(__this, &m1594_MI);
		bool L_4 = m138(NULL, L_3, (t43 *)NULL, &m138_MI);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		t347 * L_5 = m1594(__this, &m1594_MI);
		t32 * L_6 = m90(L_5, &m90_MI);
		return L_6;
	}

IL_0037:
	{
		return (t32 *)NULL;
	}
}
// Metadata Definition UnityEngine.RaycastHit2D
extern Il2CppType t59_0_0_1;
FieldInfo t345_f0_FieldInfo = 
{
	"m_Centroid", &t59_0_0_1, &t345_TI, offsetof(t345, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_1;
FieldInfo t345_f1_FieldInfo = 
{
	"m_Point", &t59_0_0_1, &t345_TI, offsetof(t345, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_1;
FieldInfo t345_f2_FieldInfo = 
{
	"m_Normal", &t59_0_0_1, &t345_TI, offsetof(t345, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t345_f3_FieldInfo = 
{
	"m_Distance", &t33_0_0_1, &t345_TI, offsetof(t345, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t345_f4_FieldInfo = 
{
	"m_Fraction", &t33_0_0_1, &t345_TI, offsetof(t345, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t347_0_0_1;
FieldInfo t345_f5_FieldInfo = 
{
	"m_Collider", &t347_0_0_1, &t345_TI, offsetof(t345, f5) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t345_FIs[] =
{
	&t345_f0_FieldInfo,
	&t345_f1_FieldInfo,
	&t345_f2_FieldInfo,
	&t345_f3_FieldInfo,
	&t345_f4_FieldInfo,
	&t345_f5_FieldInfo,
	NULL
};
extern MethodInfo m1592_MI;
static PropertyInfo t345____point_PropertyInfo = 
{
	&t345_TI, "point", &m1592_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1593_MI;
static PropertyInfo t345____normal_PropertyInfo = 
{
	&t345_TI, "normal", &m1593_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1733_MI;
static PropertyInfo t345____fraction_PropertyInfo = 
{
	&t345_TI, "fraction", &m1733_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1594_MI;
static PropertyInfo t345____collider_PropertyInfo = 
{
	&t345_TI, "collider", &m1594_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2732_MI;
static PropertyInfo t345____rigidbody_PropertyInfo = 
{
	&t345_TI, "rigidbody", &m2732_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1596_MI;
static PropertyInfo t345____transform_PropertyInfo = 
{
	&t345_TI, "transform", &m1596_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t345_PIs[] =
{
	&t345____point_PropertyInfo,
	&t345____normal_PropertyInfo,
	&t345____fraction_PropertyInfo,
	&t345____collider_PropertyInfo,
	&t345____rigidbody_PropertyInfo,
	&t345____transform_PropertyInfo,
	NULL
};
extern TypeInfo t345_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m1592_MI = 
{
	"get_point", (methodPointerType)&m1592, &t345_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 901, NULL, (methodPointerType)NULL};
extern TypeInfo t345_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m1593_MI = 
{
	"get_normal", (methodPointerType)&m1593, &t345_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 902, NULL, (methodPointerType)NULL};
extern TypeInfo t345_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m1733_MI = 
{
	"get_fraction", (methodPointerType)&m1733, &t345_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 903, NULL, (methodPointerType)NULL};
extern TypeInfo t345_TI;
extern Il2CppType t347_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1594_MI = 
{
	"get_collider", (methodPointerType)&m1594, &t345_TI, &t347_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 904, NULL, (methodPointerType)NULL};
extern TypeInfo t345_TI;
extern Il2CppType t515_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2732_MI = 
{
	"get_rigidbody", (methodPointerType)&m2732, &t345_TI, &t515_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 905, NULL, (methodPointerType)NULL};
extern TypeInfo t345_TI;
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1596_MI = 
{
	"get_transform", (methodPointerType)&m1596, &t345_TI, &t32_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 906, NULL, (methodPointerType)NULL};
static MethodInfo* t345_MIs[] =
{
	&m1592_MI,
	&m1593_MI,
	&m1733_MI,
	&m1594_MI,
	&m2732_MI,
	&m1596_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t345_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t345_0_0_0;
extern Il2CppType t345_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t345_TI;
TypeInfo t345_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RaycastHit2D", "UnityEngine", t345_MIs, t345_PIs, t345_FIs, NULL, &t26_TI, NULL, NULL, &t345_TI, NULL, t345_VT, &EmptyCustomAttributesCache, &t345_TI, &t345_0_0_0, &t345_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t345)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 6, 6, 6, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t515_TI;
#include "t515MD.h"



// Metadata Definition UnityEngine.Rigidbody2D
static MethodInfo* t515_MIs[] =
{
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t515_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t515_0_0_0;
extern Il2CppType t515_1_0_0;
extern TypeInfo t35_TI;
struct t515;
extern TypeInfo t515_TI;
TypeInfo t515_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Rigidbody2D", "UnityEngine", t515_MIs, NULL, NULL, NULL, &t35_TI, NULL, NULL, &t515_TI, NULL, t515_VT, &EmptyCustomAttributesCache, &t515_TI, &t515_0_0_0, &t515_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t515), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t347_TI;



extern MethodInfo m2733_MI;
 t515 * m2733 (t347 * __this, MethodInfo* method){
	typedef t515 * (*m2733_ftn) (t347 *);
	static m2733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// Metadata Definition UnityEngine.Collider2D
extern MethodInfo m2733_MI;
static PropertyInfo t347____attachedRigidbody_PropertyInfo = 
{
	&t347_TI, "attachedRigidbody", &m2733_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t347_PIs[] =
{
	&t347____attachedRigidbody_PropertyInfo,
	NULL
};
extern TypeInfo t347_TI;
extern Il2CppType t515_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t347__CustomAttributeCache_m2733;
MethodInfo m2733_MI = 
{
	"get_attachedRigidbody", (methodPointerType)&m2733, &t347_TI, &t515_0_0_0, RuntimeInvoker_t28, NULL, &t347__CustomAttributeCache_m2733, 2182, 4096, 255, 0, false, false, 907, NULL, (methodPointerType)NULL};
static MethodInfo* t347_MIs[] =
{
	&m2733_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t347_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t347_CustomAttributesCacheGenerator_m2733(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t347__CustomAttributeCache_m2733 = {
1,
NULL,
&t347_CustomAttributesCacheGenerator_m2733
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t347_0_0_0;
extern Il2CppType t347_1_0_0;
extern TypeInfo t334_TI;
struct t347;
extern TypeInfo t347_TI;
extern CustomAttributesCache t347__CustomAttributeCache_m2733;
TypeInfo t347_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Collider2D", "UnityEngine", t347_MIs, t347_PIs, NULL, NULL, &t334_TI, NULL, NULL, &t347_TI, NULL, t347_VT, &EmptyCustomAttributesCache, &t347_TI, &t347_0_0_0, &t347_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t347), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 4, 0, 0};
#include "t516.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t516_TI;
#include "t516MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t91.h"


extern MethodInfo m2734_MI;
 void m2734 (t516 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m2735_MI;
 void m2735 (t516 * __this, t517* p0, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t28 * __this, t517* p0, MethodInfo* method);
	if (__this->f9)
		m2735((t516 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t516(Il2CppObject* delegate, t517* p0)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	float* _p0_marshaled;
	_p0_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)p0);

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m2736_MI;
 t28 * m2736 (t516 * __this, t517* p0, t91 * p1, t28 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m2737_MI;
 void m2737 (t516 * __this, t28 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.AudioClip/PCMReaderCallback
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t516_m2734_ParameterInfos[] = 
{
	{"object", 0, 134218686, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218687, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2734_MI = 
{
	".ctor", (methodPointerType)&m2734, &t516_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t516_m2734_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 910, NULL, (methodPointerType)NULL};
extern Il2CppType t517_0_0_0;
static ParameterInfo t516_m2735_ParameterInfos[] = 
{
	{"data", 0, 134218688, &EmptyCustomAttributesCache, &t517_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2735_MI = 
{
	"Invoke", (methodPointerType)&m2735, &t516_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t516_m2735_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 911, NULL, (methodPointerType)NULL};
extern Il2CppType t517_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t516_m2736_ParameterInfos[] = 
{
	{"data", 0, 134218689, &EmptyCustomAttributesCache, &t517_0_0_0},
	{"callback", 1, 134218690, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134218691, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2736_MI = 
{
	"BeginInvoke", (methodPointerType)&m2736, &t516_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t516_m2736_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 912, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t516_m2737_ParameterInfos[] = 
{
	{"result", 0, 134218692, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t516_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2737_MI = 
{
	"EndInvoke", (methodPointerType)&m2737, &t516_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t516_m2737_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 913, NULL, (methodPointerType)NULL};
static MethodInfo* t516_MIs[] =
{
	&m2734_MI,
	&m2735_MI,
	&m2736_MI,
	&m2737_MI,
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
extern MethodInfo m2735_MI;
extern MethodInfo m2736_MI;
extern MethodInfo m2737_MI;
static MethodInfo* t516_VT[] =
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
	&m2735_MI,
	&m2736_MI,
	&m2737_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t516_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t516_0_0_0;
extern Il2CppType t516_1_0_0;
extern TypeInfo t221_TI;
struct t516;
extern TypeInfo t516_TI;
extern TypeInfo t519_TI;
TypeInfo t516_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PCMReaderCallback", "", t516_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t519_TI, &t516_TI, NULL, t516_VT, &EmptyCustomAttributesCache, &t516_TI, &t516_0_0_0, &t516_1_0_0, t516_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t516, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t516), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t518.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t518_TI;
#include "t518MD.h"



extern MethodInfo m2738_MI;
 void m2738 (t518 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m2739_MI;
 void m2739 (t518 * __this, int32_t p0, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t28 * __this, int32_t p0, MethodInfo* method);
	if (__this->f9)
		m2739((t518 *)__this->f9,  p0, method);
	((FunctionPointerType)__this->f0)(__this->f2, p0, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t518(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m2740_MI;
 t28 * m2740 (t518 * __this, int32_t p0, t91 * p1, t28 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t47_TI), &p0);
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m2741_MI;
 void m2741 (t518 * __this, t28 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.AudioClip/PCMSetPositionCallback
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t518_m2738_ParameterInfos[] = 
{
	{"object", 0, 134218693, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218694, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t518_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2738_MI = 
{
	".ctor", (methodPointerType)&m2738, &t518_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t518_m2738_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 914, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t518_m2739_ParameterInfos[] = 
{
	{"position", 0, 134218695, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t518_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2739_MI = 
{
	"Invoke", (methodPointerType)&m2739, &t518_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t518_m2739_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 915, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t518_m2740_ParameterInfos[] = 
{
	{"position", 0, 134218696, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"callback", 1, 134218697, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 2, 134218698, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t518_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t47_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2740_MI = 
{
	"BeginInvoke", (methodPointerType)&m2740, &t518_TI, &t90_0_0_0, RuntimeInvoker_t28_t47_t28_t28, t518_m2740_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 916, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t518_m2741_ParameterInfos[] = 
{
	{"result", 0, 134218699, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t518_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2741_MI = 
{
	"EndInvoke", (methodPointerType)&m2741, &t518_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t518_m2741_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 917, NULL, (methodPointerType)NULL};
static MethodInfo* t518_MIs[] =
{
	&m2738_MI,
	&m2739_MI,
	&m2740_MI,
	&m2741_MI,
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
extern MethodInfo m2739_MI;
extern MethodInfo m2740_MI;
extern MethodInfo m2741_MI;
static MethodInfo* t518_VT[] =
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
	&m2739_MI,
	&m2740_MI,
	&m2741_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t518_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t518_0_0_0;
extern Il2CppType t518_1_0_0;
extern TypeInfo t221_TI;
struct t518;
extern TypeInfo t518_TI;
extern TypeInfo t519_TI;
TypeInfo t518_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PCMSetPositionCallback", "", t518_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t519_TI, &t518_TI, NULL, t518_VT, &EmptyCustomAttributesCache, &t518_TI, &t518_0_0_0, &t518_1_0_0, t518_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t518, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t518), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t519.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t519_TI;
#include "t519MD.h"

extern TypeInfo t519_TI;
extern TypeInfo t516_TI;
extern TypeInfo t30_TI;
extern TypeInfo t517_TI;
extern TypeInfo t33_TI;
extern TypeInfo t518_TI;
extern TypeInfo t47_TI;
extern MethodInfo m2735_MI;
extern MethodInfo m2739_MI;


extern MethodInfo m2742_MI;
 void m2742 (t519 * __this, t517* p0, MethodInfo* method){
	{
		t516 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t516 * L_1 = (__this->f2);
		VirtActionInvoker1< t517* >::Invoke(&m2735_MI, L_1, p0);
	}

IL_0017:
	{
		return;
	}
}
extern MethodInfo m2743_MI;
 void m2743 (t519 * __this, int32_t p0, MethodInfo* method){
	{
		t518 * L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t518 * L_1 = (__this->f3);
		VirtActionInvoker1< int32_t >::Invoke(&m2739_MI, L_1, p0);
	}

IL_0017:
	{
		return;
	}
}
// Metadata Definition UnityEngine.AudioClip
extern Il2CppType t516_0_0_1;
FieldInfo t519_f2_FieldInfo = 
{
	"m_PCMReaderCallback", &t516_0_0_1, &t519_TI, offsetof(t519, f2), &EmptyCustomAttributesCache};
extern Il2CppType t518_0_0_1;
FieldInfo t519_f3_FieldInfo = 
{
	"m_PCMSetPositionCallback", &t518_0_0_1, &t519_TI, offsetof(t519, f3), &EmptyCustomAttributesCache};
static FieldInfo* t519_FIs[] =
{
	&t519_f2_FieldInfo,
	&t519_f3_FieldInfo,
	NULL
};
extern Il2CppType t517_0_0_0;
static ParameterInfo t519_m2742_ParameterInfos[] = 
{
	{"data", 0, 134218684, &EmptyCustomAttributesCache, &t517_0_0_0},
};
extern TypeInfo t519_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2742_MI = 
{
	"InvokePCMReaderCallback_Internal", (methodPointerType)&m2742, &t519_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t519_m2742_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 908, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t519_m2743_ParameterInfos[] = 
{
	{"position", 0, 134218685, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t519_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2743_MI = 
{
	"InvokePCMSetPositionCallback_Internal", (methodPointerType)&m2743, &t519_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t519_m2743_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 909, NULL, (methodPointerType)NULL};
static MethodInfo* t519_MIs[] =
{
	&m2742_MI,
	&m2743_MI,
	NULL
};
extern TypeInfo t516_TI;
extern TypeInfo t518_TI;
static TypeInfo* t519_TI__nestedTypes[3] =
{
	&t516_TI,
	&t518_TI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t519_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t519_0_0_0;
extern Il2CppType t519_1_0_0;
extern TypeInfo t43_TI;
struct t519;
extern TypeInfo t519_TI;
TypeInfo t519_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AudioClip", "UnityEngine", t519_MIs, NULL, t519_FIs, NULL, &t43_TI, t519_TI__nestedTypes, NULL, &t519_TI, NULL, t519_VT, &EmptyCustomAttributesCache, &t519_TI, &t519_0_0_0, &t519_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t519), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 2, 4, 0, 0};
#include "t520.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t520_TI;
#include "t520MD.h"



// Metadata Definition UnityEngine.AnimationEventSource
extern Il2CppType t47_0_0_1542;
FieldInfo t520_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t520_TI, offsetof(t520, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t520_0_0_32854;
FieldInfo t520_f2_FieldInfo = 
{
	"NoSource", &t520_0_0_32854, &t520_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t520_0_0_32854;
FieldInfo t520_f3_FieldInfo = 
{
	"Legacy", &t520_0_0_32854, &t520_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t520_0_0_32854;
FieldInfo t520_f4_FieldInfo = 
{
	"Animator", &t520_0_0_32854, &t520_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t520_FIs[] =
{
	&t520_f1_FieldInfo,
	&t520_f2_FieldInfo,
	&t520_f3_FieldInfo,
	&t520_f4_FieldInfo,
	NULL
};
static const int32_t t520_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t520_f2_DefaultValue = 
{
	&t520_f2_FieldInfo, { (char*)&t520_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t520_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t520_f3_DefaultValue = 
{
	&t520_f3_FieldInfo, { (char*)&t520_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t520_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t520_f4_DefaultValue = 
{
	&t520_f4_FieldInfo, { (char*)&t520_f4_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t520_FDVs[] = 
{
	&t520_f2_DefaultValue,
	&t520_f3_DefaultValue,
	&t520_f4_DefaultValue,
	NULL
};
static MethodInfo* t520_MIs[] =
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
static MethodInfo* t520_VT[] =
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
static Il2CppInterfaceOffsetPair t520_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t520_0_0_0;
extern Il2CppType t520_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t520_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimationEventSource", "UnityEngine", t520_MIs, NULL, t520_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t520_VT, &EmptyCustomAttributesCache, &t47_TI, &t520_0_0_0, &t520_1_0_0, t520_IOs, NULL, NULL, t520_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t520)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 256, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t521.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t521_TI;
#include "t521MD.h"

#include "t522.h"
#include "t523.h"
#include "t524.h"
extern TypeInfo t521_TI;
extern TypeInfo t18_TI;
#include "t18MD.h"
extern MethodInfo m2761_MI;
extern MethodInfo m1436_MI;
extern MethodInfo m2762_MI;
extern MethodInfo m203_MI;


extern MethodInfo m2744_MI;
 void m2744 (t521 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		__this->f0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		__this->f1 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		__this->f2 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		__this->f3 = (t43 *)NULL;
		__this->f4 = (0.0f);
		__this->f5 = 0;
		__this->f6 = 0;
		__this->f7 = 0;
		__this->f8 = (t522 *)NULL;
		return;
	}
}
extern MethodInfo m2745_MI;
 t18* m2745 (t521 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2746_MI;
 void m2746 (t521 * __this, t18* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m2747_MI;
 t18* m2747 (t521 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2748_MI;
 void m2748 (t521 * __this, t18* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m2749_MI;
 float m2749 (t521 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m2750_MI;
 void m2750 (t521 * __this, float p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
extern MethodInfo m2751_MI;
 int32_t m2751 (t521 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m2752_MI;
 void m2752 (t521 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m2753_MI;
 t43 * m2753 (t521 * __this, MethodInfo* method){
	{
		t43 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m2754_MI;
 void m2754 (t521 * __this, t43 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m2755_MI;
 t18* m2755 (t521 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2756_MI;
 void m2756 (t521 * __this, t18* p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m2757_MI;
 float m2757 (t521 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2758_MI;
 void m2758 (t521 * __this, float p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2759_MI;
 int32_t m2759 (t521 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m2760_MI;
 void m2760 (t521 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m2761_MI;
 bool m2761 (t521 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
extern MethodInfo m2762_MI;
 bool m2762 (t521 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
extern MethodInfo m2763_MI;
 t522 * m2763 (t521 * __this, MethodInfo* method){
	{
		bool L_0 = m2761(__this, &m2761_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m1436(NULL, (t18*) &_stringLiteral153, &m1436_MI);
	}

IL_0015:
	{
		t522 * L_1 = (__this->f8);
		return L_1;
	}
}
extern MethodInfo m2764_MI;
 t523  m2764 (t521 * __this, MethodInfo* method){
	{
		bool L_0 = m2762(__this, &m2762_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m1436(NULL, (t18*) &_stringLiteral154, &m1436_MI);
	}

IL_0015:
	{
		t523  L_1 = (__this->f9);
		return L_1;
	}
}
extern MethodInfo m2765_MI;
 t524  m2765 (t521 * __this, MethodInfo* method){
	{
		bool L_0 = m2762(__this, &m2762_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m1436(NULL, (t18*) &_stringLiteral155, &m1436_MI);
	}

IL_0015:
	{
		t524  L_1 = (__this->f10);
		return L_1;
	}
}
// Metadata Definition UnityEngine.AnimationEvent
extern Il2CppType t33_0_0_3;
FieldInfo t521_f0_FieldInfo = 
{
	"m_Time", &t33_0_0_3, &t521_TI, offsetof(t521, f0), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_3;
FieldInfo t521_f1_FieldInfo = 
{
	"m_FunctionName", &t18_0_0_3, &t521_TI, offsetof(t521, f1), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_3;
FieldInfo t521_f2_FieldInfo = 
{
	"m_StringParameter", &t18_0_0_3, &t521_TI, offsetof(t521, f2), &EmptyCustomAttributesCache};
extern Il2CppType t43_0_0_3;
FieldInfo t521_f3_FieldInfo = 
{
	"m_ObjectReferenceParameter", &t43_0_0_3, &t521_TI, offsetof(t521, f3), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_3;
FieldInfo t521_f4_FieldInfo = 
{
	"m_FloatParameter", &t33_0_0_3, &t521_TI, offsetof(t521, f4), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_3;
FieldInfo t521_f5_FieldInfo = 
{
	"m_IntParameter", &t47_0_0_3, &t521_TI, offsetof(t521, f5), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_3;
FieldInfo t521_f6_FieldInfo = 
{
	"m_MessageOptions", &t47_0_0_3, &t521_TI, offsetof(t521, f6), &EmptyCustomAttributesCache};
extern Il2CppType t520_0_0_3;
FieldInfo t521_f7_FieldInfo = 
{
	"m_Source", &t520_0_0_3, &t521_TI, offsetof(t521, f7), &EmptyCustomAttributesCache};
extern Il2CppType t522_0_0_3;
FieldInfo t521_f8_FieldInfo = 
{
	"m_StateSender", &t522_0_0_3, &t521_TI, offsetof(t521, f8), &EmptyCustomAttributesCache};
extern Il2CppType t523_0_0_3;
FieldInfo t521_f9_FieldInfo = 
{
	"m_AnimatorStateInfo", &t523_0_0_3, &t521_TI, offsetof(t521, f9), &EmptyCustomAttributesCache};
extern Il2CppType t524_0_0_3;
FieldInfo t521_f10_FieldInfo = 
{
	"m_AnimatorClipInfo", &t524_0_0_3, &t521_TI, offsetof(t521, f10), &EmptyCustomAttributesCache};
static FieldInfo* t521_FIs[] =
{
	&t521_f0_FieldInfo,
	&t521_f1_FieldInfo,
	&t521_f2_FieldInfo,
	&t521_f3_FieldInfo,
	&t521_f4_FieldInfo,
	&t521_f5_FieldInfo,
	&t521_f6_FieldInfo,
	&t521_f7_FieldInfo,
	&t521_f8_FieldInfo,
	&t521_f9_FieldInfo,
	&t521_f10_FieldInfo,
	NULL
};
extern MethodInfo m2745_MI;
extern MethodInfo m2746_MI;
extern CustomAttributesCache t521__CustomAttributeCache_t521____data_PropertyInfo;
static PropertyInfo t521____data_PropertyInfo = 
{
	&t521_TI, "data", &m2745_MI, &m2746_MI, 0, &t521__CustomAttributeCache_t521____data_PropertyInfo};
extern MethodInfo m2747_MI;
extern MethodInfo m2748_MI;
static PropertyInfo t521____stringParameter_PropertyInfo = 
{
	&t521_TI, "stringParameter", &m2747_MI, &m2748_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2749_MI;
extern MethodInfo m2750_MI;
static PropertyInfo t521____floatParameter_PropertyInfo = 
{
	&t521_TI, "floatParameter", &m2749_MI, &m2750_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2751_MI;
extern MethodInfo m2752_MI;
static PropertyInfo t521____intParameter_PropertyInfo = 
{
	&t521_TI, "intParameter", &m2751_MI, &m2752_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2753_MI;
extern MethodInfo m2754_MI;
static PropertyInfo t521____objectReferenceParameter_PropertyInfo = 
{
	&t521_TI, "objectReferenceParameter", &m2753_MI, &m2754_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2755_MI;
extern MethodInfo m2756_MI;
static PropertyInfo t521____functionName_PropertyInfo = 
{
	&t521_TI, "functionName", &m2755_MI, &m2756_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2757_MI;
extern MethodInfo m2758_MI;
static PropertyInfo t521____time_PropertyInfo = 
{
	&t521_TI, "time", &m2757_MI, &m2758_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2759_MI;
extern MethodInfo m2760_MI;
static PropertyInfo t521____messageOptions_PropertyInfo = 
{
	&t521_TI, "messageOptions", &m2759_MI, &m2760_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2761_MI;
static PropertyInfo t521____isFiredByLegacy_PropertyInfo = 
{
	&t521_TI, "isFiredByLegacy", &m2761_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2762_MI;
static PropertyInfo t521____isFiredByAnimator_PropertyInfo = 
{
	&t521_TI, "isFiredByAnimator", &m2762_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2763_MI;
static PropertyInfo t521____animationState_PropertyInfo = 
{
	&t521_TI, "animationState", &m2763_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2764_MI;
static PropertyInfo t521____animatorStateInfo_PropertyInfo = 
{
	&t521_TI, "animatorStateInfo", &m2764_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2765_MI;
static PropertyInfo t521____animatorClipInfo_PropertyInfo = 
{
	&t521_TI, "animatorClipInfo", &m2765_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t521_PIs[] =
{
	&t521____data_PropertyInfo,
	&t521____stringParameter_PropertyInfo,
	&t521____floatParameter_PropertyInfo,
	&t521____intParameter_PropertyInfo,
	&t521____objectReferenceParameter_PropertyInfo,
	&t521____functionName_PropertyInfo,
	&t521____time_PropertyInfo,
	&t521____messageOptions_PropertyInfo,
	&t521____isFiredByLegacy_PropertyInfo,
	&t521____isFiredByAnimator_PropertyInfo,
	&t521____animationState_PropertyInfo,
	&t521____animatorStateInfo_PropertyInfo,
	&t521____animatorClipInfo_PropertyInfo,
	NULL
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2744_MI = 
{
	".ctor", (methodPointerType)&m2744, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 918, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2745_MI = 
{
	"get_data", (methodPointerType)&m2745, &t521_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 919, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t521_m2746_ParameterInfos[] = 
{
	{"value", 0, 134218700, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2746_MI = 
{
	"set_data", (methodPointerType)&m2746, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t521_m2746_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 920, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2747_MI = 
{
	"get_stringParameter", (methodPointerType)&m2747, &t521_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 921, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t521_m2748_ParameterInfos[] = 
{
	{"value", 0, 134218701, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2748_MI = 
{
	"set_stringParameter", (methodPointerType)&m2748, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t521_m2748_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 922, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2749_MI = 
{
	"get_floatParameter", (methodPointerType)&m2749, &t521_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 923, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t521_m2750_ParameterInfos[] = 
{
	{"value", 0, 134218702, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2750_MI = 
{
	"set_floatParameter", (methodPointerType)&m2750, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t521_m2750_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 924, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2751_MI = 
{
	"get_intParameter", (methodPointerType)&m2751, &t521_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 925, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t521_m2752_ParameterInfos[] = 
{
	{"value", 0, 134218703, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2752_MI = 
{
	"set_intParameter", (methodPointerType)&m2752, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t521_m2752_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 926, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2753_MI = 
{
	"get_objectReferenceParameter", (methodPointerType)&m2753, &t521_TI, &t43_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 927, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
static ParameterInfo t521_m2754_ParameterInfos[] = 
{
	{"value", 0, 134218704, &EmptyCustomAttributesCache, &t43_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2754_MI = 
{
	"set_objectReferenceParameter", (methodPointerType)&m2754, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t521_m2754_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 928, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2755_MI = 
{
	"get_functionName", (methodPointerType)&m2755, &t521_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 929, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t521_m2756_ParameterInfos[] = 
{
	{"value", 0, 134218705, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2756_MI = 
{
	"set_functionName", (methodPointerType)&m2756, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t521_m2756_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 930, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2757_MI = 
{
	"get_time", (methodPointerType)&m2757, &t521_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 931, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t521_m2758_ParameterInfos[] = 
{
	{"value", 0, 134218706, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2758_MI = 
{
	"set_time", (methodPointerType)&m2758, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t521_m2758_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 932, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t454_0_0_0;
extern void* RuntimeInvoker_t454 (MethodInfo* method, void* obj, void** args);
MethodInfo m2759_MI = 
{
	"get_messageOptions", (methodPointerType)&m2759, &t521_TI, &t454_0_0_0, RuntimeInvoker_t454, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 933, NULL, (methodPointerType)NULL};
extern Il2CppType t454_0_0_0;
static ParameterInfo t521_m2760_ParameterInfos[] = 
{
	{"value", 0, 134218707, &EmptyCustomAttributesCache, &t454_0_0_0},
};
extern TypeInfo t521_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2760_MI = 
{
	"set_messageOptions", (methodPointerType)&m2760, &t521_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t521_m2760_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 934, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2761_MI = 
{
	"get_isFiredByLegacy", (methodPointerType)&m2761, &t521_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 935, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2762_MI = 
{
	"get_isFiredByAnimator", (methodPointerType)&m2762, &t521_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 936, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t522_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2763_MI = 
{
	"get_animationState", (methodPointerType)&m2763, &t521_TI, &t522_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 937, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t523_0_0_0;
extern void* RuntimeInvoker_t523 (MethodInfo* method, void* obj, void** args);
MethodInfo m2764_MI = 
{
	"get_animatorStateInfo", (methodPointerType)&m2764, &t521_TI, &t523_0_0_0, RuntimeInvoker_t523, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 938, NULL, (methodPointerType)NULL};
extern TypeInfo t521_TI;
extern Il2CppType t524_0_0_0;
extern void* RuntimeInvoker_t524 (MethodInfo* method, void* obj, void** args);
MethodInfo m2765_MI = 
{
	"get_animatorClipInfo", (methodPointerType)&m2765, &t521_TI, &t524_0_0_0, RuntimeInvoker_t524, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 939, NULL, (methodPointerType)NULL};
static MethodInfo* t521_MIs[] =
{
	&m2744_MI,
	&m2745_MI,
	&m2746_MI,
	&m2747_MI,
	&m2748_MI,
	&m2749_MI,
	&m2750_MI,
	&m2751_MI,
	&m2752_MI,
	&m2753_MI,
	&m2754_MI,
	&m2755_MI,
	&m2756_MI,
	&m2757_MI,
	&m2758_MI,
	&m2759_MI,
	&m2760_MI,
	&m2761_MI,
	&m2762_MI,
	&m2763_MI,
	&m2764_MI,
	&m2765_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t521_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t344_TI;
#include "t344.h"
#include "t344MD.h"
extern MethodInfo m2962_MI;
void t521_CustomAttributesCacheGenerator_t521____data_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m2962(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), &m2962_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t521__CustomAttributeCache_t521____data_PropertyInfo = {
1,
NULL,
&t521_CustomAttributesCacheGenerator_t521____data_PropertyInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t521_0_0_0;
extern Il2CppType t521_1_0_0;
extern TypeInfo t28_TI;
struct t521;
extern TypeInfo t521_TI;
extern CustomAttributesCache t521__CustomAttributeCache_t521____data_PropertyInfo;
TypeInfo t521_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimationEvent", "UnityEngine", t521_MIs, t521_PIs, t521_FIs, NULL, &t28_TI, NULL, NULL, &t521_TI, NULL, t521_VT, &EmptyCustomAttributesCache, &t521_TI, &t521_0_0_0, &t521_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t521), 0, -1, 0, 0, -1, 1057033, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 22, 13, 11, 0, 0, 4, 0, 0};
#include "t525.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t525_TI;
#include "t525MD.h"



// Metadata Definition UnityEngine.Keyframe
extern Il2CppType t33_0_0_1;
FieldInfo t525_f0_FieldInfo = 
{
	"m_Time", &t33_0_0_1, &t525_TI, offsetof(t525, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t525_f1_FieldInfo = 
{
	"m_Value", &t33_0_0_1, &t525_TI, offsetof(t525, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t525_f2_FieldInfo = 
{
	"m_InTangent", &t33_0_0_1, &t525_TI, offsetof(t525, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t525_f3_FieldInfo = 
{
	"m_OutTangent", &t33_0_0_1, &t525_TI, offsetof(t525, f3) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t525_FIs[] =
{
	&t525_f0_FieldInfo,
	&t525_f1_FieldInfo,
	&t525_f2_FieldInfo,
	&t525_f3_FieldInfo,
	NULL
};
static MethodInfo* t525_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t525_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t525_0_0_0;
extern Il2CppType t525_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t525_TI;
TypeInfo t525_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Keyframe", "UnityEngine", t525_MIs, NULL, t525_FIs, NULL, &t26_TI, NULL, NULL, &t525_TI, NULL, t525_VT, &EmptyCustomAttributesCache, &t525_TI, &t525_0_0_0, &t525_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t525)+ sizeof (Il2CppObject), 0, sizeof(t525 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 4, 0, 0, 4, 0, 0};
#include "t526.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t526_TI;
#include "t526MD.h"

extern TypeInfo t28_TI;
extern TypeInfo t30_TI;
extern MethodInfo m203_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m2768_MI;
extern MethodInfo m97_MI;


extern MethodInfo m2766_MI;
 void m2766 (t526 * __this, t527* p0, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		m2770(__this, p0, &m2770_MI);
		return;
	}
}
extern MethodInfo m2767_MI;
 void m2767 (t526 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		m2770(__this, (t527*)(t527*)NULL, &m2770_MI);
		return;
	}
}
extern MethodInfo m2768_MI;
 void m2768 (t526 * __this, MethodInfo* method){
	typedef void (*m2768_ftn) (t526 *);
	static m2768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2769_MI;
 void m2769 (t526 * __this, MethodInfo* method){
	int32_t leaveInstructions[1] = {0};
	t321 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t321 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		m2768(__this, &m2768_MI);
		// IL_0006: leave IL_0012
		leaveInstructions[0] = 0x12; // 1
		THROW_SENTINEL(IL_0012);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t321 *)e.ex;
		goto IL_000b;
	}

IL_000b:
	{ // begin finally (depth: 1)
		m97(__this, &m97_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x12:
				goto IL_0012;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t321 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0012:
	{
		return;
	}
}
extern MethodInfo m2770_MI;
 void m2770 (t526 * __this, t527* p0, MethodInfo* method){
	typedef void (*m2770_ftn) (t526 *, t527*);
	static m2770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, p0);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void t526_marshal(const t526& unmarshaled, t526_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t526_marshal_back(const t526_marshaled& marshaled, t526& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void t526_marshal_cleanup(t526_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.AnimationCurve
extern Il2CppType t49_0_0_3;
FieldInfo t526_f0_FieldInfo = 
{
	"m_Ptr", &t49_0_0_3, &t526_TI, offsetof(t526, f0), &EmptyCustomAttributesCache};
static FieldInfo* t526_FIs[] =
{
	&t526_f0_FieldInfo,
	NULL
};
extern Il2CppType t527_0_0_0;
extern CustomAttributesCache t526__CustomAttributeCache_t526_m2766_Arg0_ParameterInfo;
static ParameterInfo t526_m2766_ParameterInfos[] = 
{
	{"keys", 0, 134218708, &t526__CustomAttributeCache_t526_m2766_Arg0_ParameterInfo, &t527_0_0_0},
};
extern TypeInfo t526_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2766_MI = 
{
	".ctor", (methodPointerType)&m2766, &t526_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t526_m2766_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 940, NULL, (methodPointerType)NULL};
extern TypeInfo t526_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2767_MI = 
{
	".ctor", (methodPointerType)&m2767, &t526_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 941, NULL, (methodPointerType)NULL};
extern TypeInfo t526_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t526__CustomAttributeCache_m2768;
MethodInfo m2768_MI = 
{
	"Cleanup", (methodPointerType)&m2768, &t526_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &t526__CustomAttributeCache_m2768, 129, 4096, 255, 0, false, false, 942, NULL, (methodPointerType)NULL};
extern TypeInfo t526_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2769_MI = 
{
	"Finalize", (methodPointerType)&m2769, &t526_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 943, NULL, (methodPointerType)NULL};
extern Il2CppType t527_0_0_0;
static ParameterInfo t526_m2770_ParameterInfos[] = 
{
	{"keys", 0, 134218709, &EmptyCustomAttributesCache, &t527_0_0_0},
};
extern TypeInfo t526_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t526__CustomAttributeCache_m2770;
MethodInfo m2770_MI = 
{
	"Init", (methodPointerType)&m2770, &t526_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t526_m2770_ParameterInfos, &t526__CustomAttributeCache_m2770, 129, 4096, 255, 1, false, false, 944, NULL, (methodPointerType)NULL};
static MethodInfo* t526_MIs[] =
{
	&m2766_MI,
	&m2767_MI,
	&m2768_MI,
	&m2769_MI,
	&m2770_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m2769_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t526_VT[] =
{
	&m204_MI,
	&m2769_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t434_TI;
#include "t434.h"
#include "t434MD.h"
extern MethodInfo m2132_MI;
void t526_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t434 * tmp;
		tmp = (t434 *)il2cpp_codegen_object_new (&t434_TI);
		m2132(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m2132_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t403_TI;
#include "t403.h"
#include "t403MD.h"
extern MethodInfo m1930_MI;
void t526_CustomAttributesCacheGenerator_t526_m2766_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t403 * tmp;
		tmp = (t403 *)il2cpp_codegen_object_new (&t403_TI);
		m1930(tmp, &m1930_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t526_CustomAttributesCacheGenerator_m2768(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t526_CustomAttributesCacheGenerator_m2770(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t526__CustomAttributeCache = {
1,
NULL,
&t526_CustomAttributesCacheGenerator
};
CustomAttributesCache t526__CustomAttributeCache_t526_m2766_Arg0_ParameterInfo = {
1,
NULL,
&t526_CustomAttributesCacheGenerator_t526_m2766_Arg0_ParameterInfo
};
CustomAttributesCache t526__CustomAttributeCache_m2768 = {
1,
NULL,
&t526_CustomAttributesCacheGenerator_m2768
};
CustomAttributesCache t526__CustomAttributeCache_m2770 = {
1,
NULL,
&t526_CustomAttributesCacheGenerator_m2770
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t526_0_0_0;
extern Il2CppType t526_1_0_0;
extern TypeInfo t28_TI;
struct t526;
extern TypeInfo t526_TI;
extern CustomAttributesCache t526__CustomAttributeCache;
extern CustomAttributesCache t526__CustomAttributeCache_m2768;
extern CustomAttributesCache t526__CustomAttributeCache_m2770;
TypeInfo t526_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimationCurve", "UnityEngine", t526_MIs, NULL, t526_FIs, NULL, &t28_TI, NULL, NULL, &t526_TI, NULL, t526_VT, &t526__CustomAttributeCache, &t526_TI, &t526_0_0_0, &t526_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t526_marshal, (methodPointerType)t526_marshal_back, (methodPointerType)t526_marshal_cleanup, sizeof (t526), 0, sizeof(t526_marshaled), 0, 0, -1, 1048841, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 5, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t522_TI;
#include "t522MD.h"



// Metadata Definition UnityEngine.AnimationState
static MethodInfo* t522_MIs[] =
{
	NULL
};
extern MethodInfo m2905_MI;
extern MethodInfo m97_MI;
extern MethodInfo m2906_MI;
extern MethodInfo m206_MI;
static MethodInfo* t522_VT[] =
{
	&m2905_MI,
	&m97_MI,
	&m2906_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t522_0_0_0;
extern Il2CppType t522_1_0_0;
extern TypeInfo t528_TI;
struct t522;
extern TypeInfo t522_TI;
TypeInfo t522_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimationState", "UnityEngine", t522_MIs, NULL, NULL, NULL, &t528_TI, NULL, NULL, &t522_TI, NULL, t522_VT, &EmptyCustomAttributesCache, &t522_TI, &t522_0_0_0, &t522_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t522), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t524_TI;
#include "t524MD.h"



// Metadata Definition UnityEngine.AnimatorClipInfo
extern Il2CppType t47_0_0_1;
FieldInfo t524_f0_FieldInfo = 
{
	"m_ClipInstanceID", &t47_0_0_1, &t524_TI, offsetof(t524, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t524_f1_FieldInfo = 
{
	"m_Weight", &t33_0_0_1, &t524_TI, offsetof(t524, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t524_FIs[] =
{
	&t524_f0_FieldInfo,
	&t524_f1_FieldInfo,
	NULL
};
static MethodInfo* t524_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t524_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t524_0_0_0;
extern Il2CppType t524_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t524_TI;
TypeInfo t524_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimatorClipInfo", "UnityEngine", t524_MIs, NULL, t524_FIs, NULL, &t26_TI, NULL, NULL, &t524_TI, NULL, t524_VT, &EmptyCustomAttributesCache, &t524_TI, &t524_0_0_0, &t524_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t524)+ sizeof (Il2CppObject), 0, sizeof(t524 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t523_TI;
#include "t523MD.h"

extern TypeInfo t523_TI;
#include "t254MD.h"
extern MethodInfo m2789_MI;


extern MethodInfo m2771_MI;
 bool m2771 (t523 * __this, t18* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = m2789(NULL, p0, &m2789_MI);
		V_0 = L_0;
		int32_t L_1 = (__this->f2);
		if ((((int32_t)V_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = (__this->f0);
		if ((((int32_t)V_0) == ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = (__this->f1);
		G_B4_0 = ((((int32_t)V_0) == ((int32_t)L_3))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
extern MethodInfo m2772_MI;
 int32_t m2772 (t523 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2773_MI;
 int32_t m2773 (t523 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2774_MI;
 int32_t m2774 (t523 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2775_MI;
 float m2775 (t523 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m2776_MI;
 float m2776 (t523 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m2777_MI;
 int32_t m2777 (t523 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m2778_MI;
 bool m2778 (t523 * __this, t18* p0, MethodInfo* method){
	{
		int32_t L_0 = m2789(NULL, p0, &m2789_MI);
		int32_t L_1 = (__this->f5);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m2779_MI;
 bool m2779 (t523 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition UnityEngine.AnimatorStateInfo
extern Il2CppType t47_0_0_1;
FieldInfo t523_f0_FieldInfo = 
{
	"m_Name", &t47_0_0_1, &t523_TI, offsetof(t523, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t523_f1_FieldInfo = 
{
	"m_Path", &t47_0_0_1, &t523_TI, offsetof(t523, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t523_f2_FieldInfo = 
{
	"m_FullPath", &t47_0_0_1, &t523_TI, offsetof(t523, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t523_f3_FieldInfo = 
{
	"m_NormalizedTime", &t33_0_0_1, &t523_TI, offsetof(t523, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t523_f4_FieldInfo = 
{
	"m_Length", &t33_0_0_1, &t523_TI, offsetof(t523, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t523_f5_FieldInfo = 
{
	"m_Tag", &t47_0_0_1, &t523_TI, offsetof(t523, f5) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t523_f6_FieldInfo = 
{
	"m_Loop", &t47_0_0_1, &t523_TI, offsetof(t523, f6) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t523_FIs[] =
{
	&t523_f0_FieldInfo,
	&t523_f1_FieldInfo,
	&t523_f2_FieldInfo,
	&t523_f3_FieldInfo,
	&t523_f4_FieldInfo,
	&t523_f5_FieldInfo,
	&t523_f6_FieldInfo,
	NULL
};
extern MethodInfo m2772_MI;
static PropertyInfo t523____fullPathHash_PropertyInfo = 
{
	&t523_TI, "fullPathHash", &m2772_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2773_MI;
extern CustomAttributesCache t523__CustomAttributeCache_t523____nameHash_PropertyInfo;
static PropertyInfo t523____nameHash_PropertyInfo = 
{
	&t523_TI, "nameHash", &m2773_MI, NULL, 0, &t523__CustomAttributeCache_t523____nameHash_PropertyInfo};
extern MethodInfo m2774_MI;
static PropertyInfo t523____shortNameHash_PropertyInfo = 
{
	&t523_TI, "shortNameHash", &m2774_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2775_MI;
static PropertyInfo t523____normalizedTime_PropertyInfo = 
{
	&t523_TI, "normalizedTime", &m2775_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2776_MI;
static PropertyInfo t523____length_PropertyInfo = 
{
	&t523_TI, "length", &m2776_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2777_MI;
static PropertyInfo t523____tagHash_PropertyInfo = 
{
	&t523_TI, "tagHash", &m2777_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2779_MI;
static PropertyInfo t523____loop_PropertyInfo = 
{
	&t523_TI, "loop", &m2779_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t523_PIs[] =
{
	&t523____fullPathHash_PropertyInfo,
	&t523____nameHash_PropertyInfo,
	&t523____shortNameHash_PropertyInfo,
	&t523____normalizedTime_PropertyInfo,
	&t523____length_PropertyInfo,
	&t523____tagHash_PropertyInfo,
	&t523____loop_PropertyInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t523_m2771_ParameterInfos[] = 
{
	{"name", 0, 134218710, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t523_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2771_MI = 
{
	"IsName", (methodPointerType)&m2771, &t523_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t523_m2771_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 945, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2772_MI = 
{
	"get_fullPathHash", (methodPointerType)&m2772, &t523_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 946, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2773_MI = 
{
	"get_nameHash", (methodPointerType)&m2773, &t523_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 947, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2774_MI = 
{
	"get_shortNameHash", (methodPointerType)&m2774, &t523_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 948, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2775_MI = 
{
	"get_normalizedTime", (methodPointerType)&m2775, &t523_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 949, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2776_MI = 
{
	"get_length", (methodPointerType)&m2776, &t523_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 950, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2777_MI = 
{
	"get_tagHash", (methodPointerType)&m2777, &t523_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 951, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t523_m2778_ParameterInfos[] = 
{
	{"tag", 0, 134218711, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t523_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2778_MI = 
{
	"IsTag", (methodPointerType)&m2778, &t523_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t523_m2778_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 952, NULL, (methodPointerType)NULL};
extern TypeInfo t523_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2779_MI = 
{
	"get_loop", (methodPointerType)&m2779, &t523_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 953, NULL, (methodPointerType)NULL};
static MethodInfo* t523_MIs[] =
{
	&m2771_MI,
	&m2772_MI,
	&m2773_MI,
	&m2774_MI,
	&m2775_MI,
	&m2776_MI,
	&m2777_MI,
	&m2778_MI,
	&m2779_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t523_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern TypeInfo t344_TI;
extern MethodInfo m2962_MI;
void t523_CustomAttributesCacheGenerator_t523____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m2962(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), &m2962_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t523__CustomAttributeCache_t523____nameHash_PropertyInfo = {
1,
NULL,
&t523_CustomAttributesCacheGenerator_t523____nameHash_PropertyInfo
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t523_0_0_0;
extern Il2CppType t523_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t523_TI;
extern CustomAttributesCache t523__CustomAttributeCache_t523____nameHash_PropertyInfo;
TypeInfo t523_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimatorStateInfo", "UnityEngine", t523_MIs, t523_PIs, t523_FIs, NULL, &t26_TI, NULL, NULL, &t523_TI, NULL, t523_VT, &EmptyCustomAttributesCache, &t523_TI, &t523_0_0_0, &t523_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t523)+ sizeof (Il2CppObject), 0, sizeof(t523 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 9, 7, 7, 0, 0, 4, 0, 0};
#include "t529.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t529_TI;
#include "t529MD.h"

extern TypeInfo t529_TI;
extern MethodInfo m2789_MI;


extern MethodInfo m2780_MI;
 bool m2780 (t529 * __this, t18* p0, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = m2789(NULL, p0, &m2789_MI);
		int32_t L_1 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = m2789(NULL, p0, &m2789_MI);
		int32_t L_3 = (__this->f0);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2781_MI;
 bool m2781 (t529 * __this, t18* p0, MethodInfo* method){
	{
		int32_t L_0 = m2789(NULL, p0, &m2789_MI);
		int32_t L_1 = (__this->f1);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m2782_MI;
 int32_t m2782 (t529 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2783_MI;
 int32_t m2783 (t529 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2784_MI;
 int32_t m2784 (t529 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2785_MI;
 float m2785 (t529 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m2786_MI;
 bool m2786 (t529 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m2787_MI;
 bool m2787 (t529 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)(L_0&2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m2788_MI;
 bool m2788 (t529 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)(L_0&4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void t529_marshal(const t529& unmarshaled, t529_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t529_marshal_back(const t529_marshaled& marshaled, t529& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void t529_marshal_cleanup(t529_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.AnimatorTransitionInfo
extern Il2CppType t47_0_0_1;
FieldInfo t529_f0_FieldInfo = 
{
	"m_FullPath", &t47_0_0_1, &t529_TI, offsetof(t529, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t529_f1_FieldInfo = 
{
	"m_UserName", &t47_0_0_1, &t529_TI, offsetof(t529, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t529_f2_FieldInfo = 
{
	"m_Name", &t47_0_0_1, &t529_TI, offsetof(t529, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t529_f3_FieldInfo = 
{
	"m_NormalizedTime", &t33_0_0_1, &t529_TI, offsetof(t529, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t529_f4_FieldInfo = 
{
	"m_AnyState", &t31_0_0_1, &t529_TI, offsetof(t529, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t529_f5_FieldInfo = 
{
	"m_TransitionType", &t47_0_0_1, &t529_TI, offsetof(t529, f5) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t529_FIs[] =
{
	&t529_f0_FieldInfo,
	&t529_f1_FieldInfo,
	&t529_f2_FieldInfo,
	&t529_f3_FieldInfo,
	&t529_f4_FieldInfo,
	&t529_f5_FieldInfo,
	NULL
};
extern MethodInfo m2782_MI;
static PropertyInfo t529____fullPathHash_PropertyInfo = 
{
	&t529_TI, "fullPathHash", &m2782_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2783_MI;
static PropertyInfo t529____nameHash_PropertyInfo = 
{
	&t529_TI, "nameHash", &m2783_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2784_MI;
static PropertyInfo t529____userNameHash_PropertyInfo = 
{
	&t529_TI, "userNameHash", &m2784_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2785_MI;
static PropertyInfo t529____normalizedTime_PropertyInfo = 
{
	&t529_TI, "normalizedTime", &m2785_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2786_MI;
static PropertyInfo t529____anyState_PropertyInfo = 
{
	&t529_TI, "anyState", &m2786_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2787_MI;
static PropertyInfo t529____entry_PropertyInfo = 
{
	&t529_TI, "entry", &m2787_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2788_MI;
static PropertyInfo t529____exit_PropertyInfo = 
{
	&t529_TI, "exit", &m2788_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t529_PIs[] =
{
	&t529____fullPathHash_PropertyInfo,
	&t529____nameHash_PropertyInfo,
	&t529____userNameHash_PropertyInfo,
	&t529____normalizedTime_PropertyInfo,
	&t529____anyState_PropertyInfo,
	&t529____entry_PropertyInfo,
	&t529____exit_PropertyInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t529_m2780_ParameterInfos[] = 
{
	{"name", 0, 134218712, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t529_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2780_MI = 
{
	"IsName", (methodPointerType)&m2780, &t529_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t529_m2780_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 954, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t529_m2781_ParameterInfos[] = 
{
	{"name", 0, 134218713, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t529_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2781_MI = 
{
	"IsUserName", (methodPointerType)&m2781, &t529_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t529_m2781_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 955, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2782_MI = 
{
	"get_fullPathHash", (methodPointerType)&m2782, &t529_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 956, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2783_MI = 
{
	"get_nameHash", (methodPointerType)&m2783, &t529_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 957, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2784_MI = 
{
	"get_userNameHash", (methodPointerType)&m2784, &t529_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 958, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2785_MI = 
{
	"get_normalizedTime", (methodPointerType)&m2785, &t529_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 959, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2786_MI = 
{
	"get_anyState", (methodPointerType)&m2786, &t529_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 960, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2787_MI = 
{
	"get_entry", (methodPointerType)&m2787, &t529_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 961, NULL, (methodPointerType)NULL};
extern TypeInfo t529_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2788_MI = 
{
	"get_exit", (methodPointerType)&m2788, &t529_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 962, NULL, (methodPointerType)NULL};
static MethodInfo* t529_MIs[] =
{
	&m2780_MI,
	&m2781_MI,
	&m2782_MI,
	&m2783_MI,
	&m2784_MI,
	&m2785_MI,
	&m2786_MI,
	&m2787_MI,
	&m2788_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t529_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t529_0_0_0;
extern Il2CppType t529_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t529_TI;
TypeInfo t529_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AnimatorTransitionInfo", "UnityEngine", t529_MIs, t529_PIs, t529_FIs, NULL, &t26_TI, NULL, NULL, &t529_TI, NULL, t529_VT, &EmptyCustomAttributesCache, &t529_TI, &t529_0_0_0, &t529_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t529_marshal, (methodPointerType)t529_marshal_back, (methodPointerType)t529_marshal_cleanup, sizeof (t529)+ sizeof (Il2CppObject), 0, sizeof(t529_marshaled), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 9, 7, 6, 0, 0, 4, 0, 0};
#include "t254.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t254_TI;

#include "t410.h"
extern MethodInfo m2790_MI;
extern MethodInfo m2791_MI;


extern MethodInfo m2005_MI;
 void m2005 (t254 * __this, t18* p0, MethodInfo* method){
	{
		m2790(__this, p0, &m2790_MI);
		return;
	}
}
extern MethodInfo m2004_MI;
 void m2004 (t254 * __this, t18* p0, MethodInfo* method){
	{
		m2791(__this, p0, &m2791_MI);
		return;
	}
}
extern MethodInfo m2003_MI;
 t410 * m2003 (t254 * __this, MethodInfo* method){
	typedef t410 * (*m2003_ftn) (t254 *);
	static m2003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2789_MI;
 int32_t m2789 (t28 * __this, t18* p0, MethodInfo* method){
	typedef int32_t (*m2789_ftn) (t18*);
	static m2789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2790_MI;
 void m2790 (t254 * __this, t18* p0, MethodInfo* method){
	typedef void (*m2790_ftn) (t254 *, t18*);
	static m2790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2791_MI;
 void m2791 (t254 * __this, t18* p0, MethodInfo* method){
	typedef void (*m2791_ftn) (t254 *, t18*);
	static m2791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
// Metadata Definition UnityEngine.Animator
extern MethodInfo m2003_MI;
static PropertyInfo t254____runtimeAnimatorController_PropertyInfo = 
{
	&t254_TI, "runtimeAnimatorController", &m2003_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t254_PIs[] =
{
	&t254____runtimeAnimatorController_PropertyInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t254_m2005_ParameterInfos[] = 
{
	{"name", 0, 134218714, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t254_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2005_MI = 
{
	"SetTrigger", (methodPointerType)&m2005, &t254_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t254_m2005_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 963, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t254_m2004_ParameterInfos[] = 
{
	{"name", 0, 134218715, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t254_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2004_MI = 
{
	"ResetTrigger", (methodPointerType)&m2004, &t254_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t254_m2004_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 964, NULL, (methodPointerType)NULL};
extern TypeInfo t254_TI;
extern Il2CppType t410_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t254__CustomAttributeCache_m2003;
MethodInfo m2003_MI = 
{
	"get_runtimeAnimatorController", (methodPointerType)&m2003, &t254_TI, &t410_0_0_0, RuntimeInvoker_t28, NULL, &t254__CustomAttributeCache_m2003, 2182, 4096, 255, 0, false, false, 965, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t254_m2789_ParameterInfos[] = 
{
	{"name", 0, 134218716, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t254_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t254__CustomAttributeCache_m2789;
MethodInfo m2789_MI = 
{
	"StringToHash", (methodPointerType)&m2789, &t254_TI, &t47_0_0_0, RuntimeInvoker_t47_t28, t254_m2789_ParameterInfos, &t254__CustomAttributeCache_m2789, 150, 4096, 255, 1, false, false, 966, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t254_m2790_ParameterInfos[] = 
{
	{"name", 0, 134218717, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t254_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t254__CustomAttributeCache_m2790;
MethodInfo m2790_MI = 
{
	"SetTriggerString", (methodPointerType)&m2790, &t254_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t254_m2790_ParameterInfos, &t254__CustomAttributeCache_m2790, 129, 4096, 255, 1, false, false, 967, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t254_m2791_ParameterInfos[] = 
{
	{"name", 0, 134218718, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t254_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t254__CustomAttributeCache_m2791;
MethodInfo m2791_MI = 
{
	"ResetTriggerString", (methodPointerType)&m2791, &t254_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t254_m2791_ParameterInfos, &t254__CustomAttributeCache_m2791, 129, 4096, 255, 1, false, false, 968, NULL, (methodPointerType)NULL};
static MethodInfo* t254_MIs[] =
{
	&m2005_MI,
	&m2004_MI,
	&m2003_MI,
	&m2789_MI,
	&m2790_MI,
	&m2791_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t254_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t254_CustomAttributesCacheGenerator_m2003(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t254_CustomAttributesCacheGenerator_m2789(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t254_CustomAttributesCacheGenerator_m2790(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t254_CustomAttributesCacheGenerator_m2791(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t254__CustomAttributeCache_m2003 = {
1,
NULL,
&t254_CustomAttributesCacheGenerator_m2003
};
CustomAttributesCache t254__CustomAttributeCache_m2789 = {
1,
NULL,
&t254_CustomAttributesCacheGenerator_m2789
};
CustomAttributesCache t254__CustomAttributeCache_m2790 = {
1,
NULL,
&t254_CustomAttributesCacheGenerator_m2790
};
CustomAttributesCache t254__CustomAttributeCache_m2791 = {
1,
NULL,
&t254_CustomAttributesCacheGenerator_m2791
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t254_0_0_0;
extern Il2CppType t254_1_0_0;
extern TypeInfo t334_TI;
struct t254;
extern TypeInfo t254_TI;
extern CustomAttributesCache t254__CustomAttributeCache_m2003;
extern CustomAttributesCache t254__CustomAttributeCache_m2789;
extern CustomAttributesCache t254__CustomAttributeCache_m2790;
extern CustomAttributesCache t254__CustomAttributeCache_m2791;
TypeInfo t254_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Animator", "UnityEngine", t254_MIs, t254_PIs, NULL, NULL, &t334_TI, NULL, NULL, &t254_TI, NULL, t254_VT, &EmptyCustomAttributesCache, &t254_TI, &t254_0_0_0, &t254_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t254), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 1, 0, 0, 0, 4, 0, 0};
#include "t530.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t530_TI;
#include "t530MD.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void t530_marshal(const t530& unmarshaled, t530_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
}
void t530_marshal_back(const t530_marshaled& marshaled, t530& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void t530_marshal_cleanup(t530_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
// Metadata Definition UnityEngine.SkeletonBone
extern Il2CppType t18_0_0_6;
FieldInfo t530_f0_FieldInfo = 
{
	"name", &t18_0_0_6, &t530_TI, offsetof(t530, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t530_f1_FieldInfo = 
{
	"position", &t11_0_0_6, &t530_TI, offsetof(t530, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t50_0_0_6;
FieldInfo t530_f2_FieldInfo = 
{
	"rotation", &t50_0_0_6, &t530_TI, offsetof(t530, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t530_f3_FieldInfo = 
{
	"scale", &t11_0_0_6, &t530_TI, offsetof(t530, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t530_f4_FieldInfo = 
{
	"transformModified", &t47_0_0_6, &t530_TI, offsetof(t530, f4) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t530_FIs[] =
{
	&t530_f0_FieldInfo,
	&t530_f1_FieldInfo,
	&t530_f2_FieldInfo,
	&t530_f3_FieldInfo,
	&t530_f4_FieldInfo,
	NULL
};
static MethodInfo* t530_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t530_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t530_0_0_0;
extern Il2CppType t530_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t530_TI;
TypeInfo t530_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SkeletonBone", "UnityEngine", t530_MIs, NULL, t530_FIs, NULL, &t26_TI, NULL, NULL, &t530_TI, NULL, t530_VT, &EmptyCustomAttributesCache, &t530_TI, &t530_0_0_0, &t530_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t530_marshal, (methodPointerType)t530_marshal_back, (methodPointerType)t530_marshal_cleanup, sizeof (t530)+ sizeof (Il2CppObject), 0, sizeof(t530_marshaled), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t531.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t531_TI;
#include "t531MD.h"



// Metadata Definition UnityEngine.HumanLimit
extern Il2CppType t11_0_0_1;
FieldInfo t531_f0_FieldInfo = 
{
	"m_Min", &t11_0_0_1, &t531_TI, offsetof(t531, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t531_f1_FieldInfo = 
{
	"m_Max", &t11_0_0_1, &t531_TI, offsetof(t531, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t531_f2_FieldInfo = 
{
	"m_Center", &t11_0_0_1, &t531_TI, offsetof(t531, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_1;
FieldInfo t531_f3_FieldInfo = 
{
	"m_AxisLength", &t33_0_0_1, &t531_TI, offsetof(t531, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t531_f4_FieldInfo = 
{
	"m_UseDefaultValues", &t47_0_0_1, &t531_TI, offsetof(t531, f4) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t531_FIs[] =
{
	&t531_f0_FieldInfo,
	&t531_f1_FieldInfo,
	&t531_f2_FieldInfo,
	&t531_f3_FieldInfo,
	&t531_f4_FieldInfo,
	NULL
};
static MethodInfo* t531_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t531_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t531_0_0_0;
extern Il2CppType t531_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t531_TI;
TypeInfo t531_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "HumanLimit", "UnityEngine", t531_MIs, NULL, t531_FIs, NULL, &t26_TI, NULL, NULL, &t531_TI, NULL, t531_VT, &EmptyCustomAttributesCache, &t531_TI, &t531_0_0_0, &t531_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t531)+ sizeof (Il2CppObject), 0, sizeof(t531 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 5, 0, 0, 4, 0, 0};
#include "t532.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t532_TI;
#include "t532MD.h"

extern TypeInfo t532_TI;


extern MethodInfo m2792_MI;
 t18* m2792 (t532 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2793_MI;
 void m2793 (t532 * __this, t18* p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m2794_MI;
 t18* m2794 (t532 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2795_MI;
 void m2795 (t532 * __this, t18* p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void t532_marshal(const t532& unmarshaled, t532_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t532_marshal_back(const t532_marshaled& marshaled, t532& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void t532_marshal_cleanup(t532_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
// Metadata Definition UnityEngine.HumanBone
extern Il2CppType t18_0_0_1;
FieldInfo t532_f0_FieldInfo = 
{
	"m_BoneName", &t18_0_0_1, &t532_TI, offsetof(t532, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t532_f1_FieldInfo = 
{
	"m_HumanName", &t18_0_0_1, &t532_TI, offsetof(t532, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t531_0_0_6;
FieldInfo t532_f2_FieldInfo = 
{
	"limit", &t531_0_0_6, &t532_TI, offsetof(t532, f2) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t532_FIs[] =
{
	&t532_f0_FieldInfo,
	&t532_f1_FieldInfo,
	&t532_f2_FieldInfo,
	NULL
};
extern MethodInfo m2792_MI;
extern MethodInfo m2793_MI;
static PropertyInfo t532____boneName_PropertyInfo = 
{
	&t532_TI, "boneName", &m2792_MI, &m2793_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2794_MI;
extern MethodInfo m2795_MI;
static PropertyInfo t532____humanName_PropertyInfo = 
{
	&t532_TI, "humanName", &m2794_MI, &m2795_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t532_PIs[] =
{
	&t532____boneName_PropertyInfo,
	&t532____humanName_PropertyInfo,
	NULL
};
extern TypeInfo t532_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2792_MI = 
{
	"get_boneName", (methodPointerType)&m2792, &t532_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 969, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t532_m2793_ParameterInfos[] = 
{
	{"value", 0, 134218719, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t532_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2793_MI = 
{
	"set_boneName", (methodPointerType)&m2793, &t532_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t532_m2793_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 970, NULL, (methodPointerType)NULL};
extern TypeInfo t532_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2794_MI = 
{
	"get_humanName", (methodPointerType)&m2794, &t532_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 971, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t532_m2795_ParameterInfos[] = 
{
	{"value", 0, 134218720, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t532_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2795_MI = 
{
	"set_humanName", (methodPointerType)&m2795, &t532_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t532_m2795_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 972, NULL, (methodPointerType)NULL};
static MethodInfo* t532_MIs[] =
{
	&m2792_MI,
	&m2793_MI,
	&m2794_MI,
	&m2795_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t532_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t532_0_0_0;
extern Il2CppType t532_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t532_TI;
TypeInfo t532_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "HumanBone", "UnityEngine", t532_MIs, t532_PIs, t532_FIs, NULL, &t26_TI, NULL, NULL, &t532_TI, NULL, t532_VT, &EmptyCustomAttributesCache, &t532_TI, &t532_0_0_0, &t532_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t532_marshal, (methodPointerType)t532_marshal_back, (methodPointerType)t532_marshal_cleanup, sizeof (t532)+ sizeof (Il2CppObject), 0, sizeof(t532_marshaled), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 4, 2, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t410_TI;
#include "t410MD.h"



// Metadata Definition UnityEngine.RuntimeAnimatorController
static MethodInfo* t410_MIs[] =
{
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t410_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t410_0_0_0;
extern Il2CppType t410_1_0_0;
extern TypeInfo t43_TI;
struct t410;
extern TypeInfo t410_TI;
TypeInfo t410_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RuntimeAnimatorController", "UnityEngine", t410_MIs, NULL, NULL, NULL, &t43_TI, NULL, NULL, &t410_TI, NULL, t410_VT, &EmptyCustomAttributesCache, &t410_TI, &t410_0_0_0, &t410_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t410), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t533.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t533_TI;
#include "t533MD.h"

#include "t334MD.h"
extern MethodInfo m2598_MI;


extern MethodInfo m2796_MI;
 void m2796 (t533 * __this, MethodInfo* method){
	{
		m2598(__this, &m2598_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Terrain
extern TypeInfo t533_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2796_MI = 
{
	".ctor", (methodPointerType)&m2796, &t533_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 973, NULL, (methodPointerType)NULL};
static MethodInfo* t533_MIs[] =
{
	&m2796_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t533_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t533_0_0_0;
extern Il2CppType t533_1_0_0;
extern TypeInfo t334_TI;
struct t533;
extern TypeInfo t533_TI;
TypeInfo t533_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Terrain", "UnityEngine", t533_MIs, NULL, NULL, NULL, &t334_TI, NULL, NULL, &t533_TI, NULL, t533_VT, &EmptyCustomAttributesCache, &t533_TI, &t533_0_0_0, &t533_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t533), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#include "t175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t175_TI;
#include "t175MD.h"



// Metadata Definition UnityEngine.TextAnchor
extern Il2CppType t47_0_0_1542;
FieldInfo t175_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t175_TI, offsetof(t175, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f2_FieldInfo = 
{
	"UpperLeft", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f3_FieldInfo = 
{
	"UpperCenter", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f4_FieldInfo = 
{
	"UpperRight", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f5_FieldInfo = 
{
	"MiddleLeft", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f6_FieldInfo = 
{
	"MiddleCenter", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f7_FieldInfo = 
{
	"MiddleRight", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f8_FieldInfo = 
{
	"LowerLeft", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f9_FieldInfo = 
{
	"LowerCenter", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_32854;
FieldInfo t175_f10_FieldInfo = 
{
	"LowerRight", &t175_0_0_32854, &t175_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t175_FIs[] =
{
	&t175_f1_FieldInfo,
	&t175_f2_FieldInfo,
	&t175_f3_FieldInfo,
	&t175_f4_FieldInfo,
	&t175_f5_FieldInfo,
	&t175_f6_FieldInfo,
	&t175_f7_FieldInfo,
	&t175_f8_FieldInfo,
	&t175_f9_FieldInfo,
	&t175_f10_FieldInfo,
	NULL
};
static const int32_t t175_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f2_DefaultValue = 
{
	&t175_f2_FieldInfo, { (char*)&t175_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f3_DefaultValue = 
{
	&t175_f3_FieldInfo, { (char*)&t175_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f4_DefaultValue = 
{
	&t175_f4_FieldInfo, { (char*)&t175_f4_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f5_DefaultValueData = 3;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f5_DefaultValue = 
{
	&t175_f5_FieldInfo, { (char*)&t175_f5_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f6_DefaultValueData = 4;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f6_DefaultValue = 
{
	&t175_f6_FieldInfo, { (char*)&t175_f6_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f7_DefaultValueData = 5;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f7_DefaultValue = 
{
	&t175_f7_FieldInfo, { (char*)&t175_f7_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f8_DefaultValueData = 6;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f8_DefaultValue = 
{
	&t175_f8_FieldInfo, { (char*)&t175_f8_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f9_DefaultValueData = 7;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f9_DefaultValue = 
{
	&t175_f9_FieldInfo, { (char*)&t175_f9_DefaultValueData, &t47_0_0_0 }};
static const int32_t t175_f10_DefaultValueData = 8;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t175_f10_DefaultValue = 
{
	&t175_f10_FieldInfo, { (char*)&t175_f10_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t175_FDVs[] = 
{
	&t175_f2_DefaultValue,
	&t175_f3_DefaultValue,
	&t175_f4_DefaultValue,
	&t175_f5_DefaultValue,
	&t175_f6_DefaultValue,
	&t175_f7_DefaultValue,
	&t175_f8_DefaultValue,
	&t175_f9_DefaultValue,
	&t175_f10_DefaultValue,
	NULL
};
static MethodInfo* t175_MIs[] =
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
static MethodInfo* t175_VT[] =
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
static Il2CppInterfaceOffsetPair t175_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t175_0_0_0;
extern Il2CppType t175_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t175_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextAnchor", "UnityEngine", t175_MIs, NULL, t175_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t175_VT, &EmptyCustomAttributesCache, &t47_TI, &t175_0_0_0, &t175_1_0_0, t175_IOs, NULL, NULL, t175_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t175)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t176.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t176_TI;
#include "t176MD.h"



// Metadata Definition UnityEngine.HorizontalWrapMode
extern Il2CppType t47_0_0_1542;
FieldInfo t176_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t176_TI, offsetof(t176, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t176_0_0_32854;
FieldInfo t176_f2_FieldInfo = 
{
	"Wrap", &t176_0_0_32854, &t176_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t176_0_0_32854;
FieldInfo t176_f3_FieldInfo = 
{
	"Overflow", &t176_0_0_32854, &t176_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t176_FIs[] =
{
	&t176_f1_FieldInfo,
	&t176_f2_FieldInfo,
	&t176_f3_FieldInfo,
	NULL
};
static const int32_t t176_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t176_f2_DefaultValue = 
{
	&t176_f2_FieldInfo, { (char*)&t176_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t176_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t176_f3_DefaultValue = 
{
	&t176_f3_FieldInfo, { (char*)&t176_f3_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t176_FDVs[] = 
{
	&t176_f2_DefaultValue,
	&t176_f3_DefaultValue,
	NULL
};
static MethodInfo* t176_MIs[] =
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
static MethodInfo* t176_VT[] =
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
static Il2CppInterfaceOffsetPair t176_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t176_0_0_0;
extern Il2CppType t176_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t176_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "HorizontalWrapMode", "UnityEngine", t176_MIs, NULL, t176_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t176_VT, &EmptyCustomAttributesCache, &t47_TI, &t176_0_0_0, &t176_1_0_0, t176_IOs, NULL, NULL, t176_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t176)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t177.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t177_TI;
#include "t177MD.h"



// Metadata Definition UnityEngine.VerticalWrapMode
extern Il2CppType t47_0_0_1542;
FieldInfo t177_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t177_TI, offsetof(t177, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t177_0_0_32854;
FieldInfo t177_f2_FieldInfo = 
{
	"Truncate", &t177_0_0_32854, &t177_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t177_0_0_32854;
FieldInfo t177_f3_FieldInfo = 
{
	"Overflow", &t177_0_0_32854, &t177_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t177_FIs[] =
{
	&t177_f1_FieldInfo,
	&t177_f2_FieldInfo,
	&t177_f3_FieldInfo,
	NULL
};
static const int32_t t177_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t177_f2_DefaultValue = 
{
	&t177_f2_FieldInfo, { (char*)&t177_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t177_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t177_f3_DefaultValue = 
{
	&t177_f3_FieldInfo, { (char*)&t177_f3_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t177_FDVs[] = 
{
	&t177_f2_DefaultValue,
	&t177_f3_DefaultValue,
	NULL
};
static MethodInfo* t177_MIs[] =
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
static MethodInfo* t177_VT[] =
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
static Il2CppInterfaceOffsetPair t177_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t177_0_0_0;
extern Il2CppType t177_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t177_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "VerticalWrapMode", "UnityEngine", t177_MIs, NULL, t177_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t177_VT, &EmptyCustomAttributesCache, &t47_TI, &t177_0_0_0, &t177_1_0_0, t177_IOs, NULL, NULL, t177_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t177)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t534.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t534_TI;
#include "t534MD.h"

#include "t191.h"
extern TypeInfo t534_TI;
extern TypeInfo t59_TI;
#include "t191MD.h"
#include "t59MD.h"
extern MethodInfo m1691_MI;
extern MethodInfo m1692_MI;
extern MethodInfo m1697_MI;
extern MethodInfo m1698_MI;
extern MethodInfo m195_MI;
extern MethodInfo m2805_MI;
extern MethodInfo m2808_MI;
extern MethodInfo m2806_MI;
extern MethodInfo m2807_MI;


extern MethodInfo m2797_MI;
 int32_t m2797 (t534 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f3);
		return (((int32_t)L_0));
	}
}
extern MethodInfo m2798_MI;
 int32_t m2798 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f2);
		float L_1 = m1691(L_0, &m1691_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m2799_MI;
 int32_t m2799 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f2);
		float L_1 = m1692(L_0, &m1692_MI);
		return (((int32_t)((-L_1))));
	}
}
extern MethodInfo m2800_MI;
 int32_t m2800 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f2);
		float L_1 = m1697(L_0, &m1697_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m2801_MI;
 int32_t m2801 (t534 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f7);
		t191 * L_1 = &(__this->f2);
		float L_2 = m1698(L_1, &m1698_MI);
		t191 * L_3 = &(__this->f2);
		float L_4 = m1692(L_3, &m1692_MI);
		return ((int32_t)(L_0+(((int32_t)((float)(L_2+L_4))))));
	}
}
extern MethodInfo m2802_MI;
 int32_t m2802 (t534 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f7);
		t191 * L_1 = &(__this->f2);
		float L_2 = m1698(L_1, &m1698_MI);
		return ((int32_t)(L_0+(((int32_t)L_2))));
	}
}
extern MethodInfo m2803_MI;
 int32_t m2803 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f2);
		float L_1 = m1697(L_0, &m1697_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m2804_MI;
 int32_t m2804 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f2);
		float L_1 = m1697(L_0, &m1697_MI);
		t191 * L_2 = &(__this->f2);
		float L_3 = m1691(L_2, &m1691_MI);
		return (((int32_t)((float)(L_1+L_3))));
	}
}
extern MethodInfo m2805_MI;
 t59  m2805 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f1);
		float L_1 = m1697(L_0, &m1697_MI);
		t191 * L_2 = &(__this->f1);
		float L_3 = m1698(L_2, &m1698_MI);
		t59  L_4 = {0};
		m195(&L_4, L_1, L_3, &m195_MI);
		return L_4;
	}
}
extern MethodInfo m2806_MI;
 t59  m2806 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f1);
		float L_1 = m1697(L_0, &m1697_MI);
		t191 * L_2 = &(__this->f1);
		float L_3 = m1691(L_2, &m1691_MI);
		t191 * L_4 = &(__this->f1);
		float L_5 = m1698(L_4, &m1698_MI);
		t59  L_6 = {0};
		m195(&L_6, ((float)(L_1+L_3)), L_5, &m195_MI);
		return L_6;
	}
}
extern MethodInfo m2807_MI;
 t59  m2807 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f1);
		float L_1 = m1697(L_0, &m1697_MI);
		t191 * L_2 = &(__this->f1);
		float L_3 = m1691(L_2, &m1691_MI);
		t191 * L_4 = &(__this->f1);
		float L_5 = m1698(L_4, &m1698_MI);
		t191 * L_6 = &(__this->f1);
		float L_7 = m1692(L_6, &m1692_MI);
		t59  L_8 = {0};
		m195(&L_8, ((float)(L_1+L_3)), ((float)(L_5+L_7)), &m195_MI);
		return L_8;
	}
}
extern MethodInfo m2808_MI;
 t59  m2808 (t534 * __this, MethodInfo* method){
	{
		t191 * L_0 = &(__this->f1);
		float L_1 = m1697(L_0, &m1697_MI);
		t191 * L_2 = &(__this->f1);
		float L_3 = m1698(L_2, &m1698_MI);
		t191 * L_4 = &(__this->f1);
		float L_5 = m1692(L_4, &m1692_MI);
		t59  L_6 = {0};
		m195(&L_6, L_1, ((float)(L_3+L_5)), &m195_MI);
		return L_6;
	}
}
extern MethodInfo m2809_MI;
 t59  m2809 (t534 * __this, MethodInfo* method){
	t59  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t59  L_1 = m2805(__this, &m2805_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t59  L_2 = m2805(__this, &m2805_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2810_MI;
 t59  m2810 (t534 * __this, MethodInfo* method){
	t59  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t59  L_1 = m2808(__this, &m2808_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t59  L_2 = m2806(__this, &m2806_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2811_MI;
 t59  m2811 (t534 * __this, MethodInfo* method){
	t59  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t59  L_1 = m2807(__this, &m2807_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t59  L_2 = m2807(__this, &m2807_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2812_MI;
 t59  m2812 (t534 * __this, MethodInfo* method){
	t59  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t59  L_1 = m2806(__this, &m2806_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t59  L_2 = m2808(__this, &m2808_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#include "t174.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void t534_marshal(const t534& unmarshaled, t534_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
	marshaled.f6 = unmarshaled.f6;
	marshaled.f7 = unmarshaled.f7;
}
void t534_marshal_back(const t534_marshaled& marshaled, t534& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
	unmarshaled.f6 = marshaled.f6;
	unmarshaled.f7 = marshaled.f7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void t534_marshal_cleanup(t534_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.CharacterInfo
extern Il2CppType t47_0_0_6;
FieldInfo t534_f0_FieldInfo = 
{
	"index", &t47_0_0_6, &t534_TI, offsetof(t534, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t191_0_0_6;
extern CustomAttributesCache t534__CustomAttributeCache_uv;
FieldInfo t534_f1_FieldInfo = 
{
	"uv", &t191_0_0_6, &t534_TI, offsetof(t534, f1) + sizeof(t28), &t534__CustomAttributeCache_uv};
extern Il2CppType t191_0_0_6;
extern CustomAttributesCache t534__CustomAttributeCache_vert;
FieldInfo t534_f2_FieldInfo = 
{
	"vert", &t191_0_0_6, &t534_TI, offsetof(t534, f2) + sizeof(t28), &t534__CustomAttributeCache_vert};
extern Il2CppType t33_0_0_6;
extern CustomAttributesCache t534__CustomAttributeCache_width;
FieldInfo t534_f3_FieldInfo = 
{
	"width", &t33_0_0_6, &t534_TI, offsetof(t534, f3) + sizeof(t28), &t534__CustomAttributeCache_width};
extern Il2CppType t47_0_0_6;
FieldInfo t534_f4_FieldInfo = 
{
	"size", &t47_0_0_6, &t534_TI, offsetof(t534, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t174_0_0_6;
FieldInfo t534_f5_FieldInfo = 
{
	"style", &t174_0_0_6, &t534_TI, offsetof(t534, f5) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
extern CustomAttributesCache t534__CustomAttributeCache_flipped;
FieldInfo t534_f6_FieldInfo = 
{
	"flipped", &t31_0_0_6, &t534_TI, offsetof(t534, f6) + sizeof(t28), &t534__CustomAttributeCache_flipped};
extern Il2CppType t47_0_0_1;
FieldInfo t534_f7_FieldInfo = 
{
	"ascent", &t47_0_0_1, &t534_TI, offsetof(t534, f7) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t534_FIs[] =
{
	&t534_f0_FieldInfo,
	&t534_f1_FieldInfo,
	&t534_f2_FieldInfo,
	&t534_f3_FieldInfo,
	&t534_f4_FieldInfo,
	&t534_f5_FieldInfo,
	&t534_f6_FieldInfo,
	&t534_f7_FieldInfo,
	NULL
};
extern MethodInfo m2797_MI;
static PropertyInfo t534____advance_PropertyInfo = 
{
	&t534_TI, "advance", &m2797_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2798_MI;
static PropertyInfo t534____glyphWidth_PropertyInfo = 
{
	&t534_TI, "glyphWidth", &m2798_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2799_MI;
static PropertyInfo t534____glyphHeight_PropertyInfo = 
{
	&t534_TI, "glyphHeight", &m2799_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2800_MI;
static PropertyInfo t534____bearing_PropertyInfo = 
{
	&t534_TI, "bearing", &m2800_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2801_MI;
static PropertyInfo t534____minY_PropertyInfo = 
{
	&t534_TI, "minY", &m2801_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2802_MI;
static PropertyInfo t534____maxY_PropertyInfo = 
{
	&t534_TI, "maxY", &m2802_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2803_MI;
static PropertyInfo t534____minX_PropertyInfo = 
{
	&t534_TI, "minX", &m2803_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2804_MI;
static PropertyInfo t534____maxX_PropertyInfo = 
{
	&t534_TI, "maxX", &m2804_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2805_MI;
static PropertyInfo t534____uvBottomLeftUnFlipped_PropertyInfo = 
{
	&t534_TI, "uvBottomLeftUnFlipped", &m2805_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2806_MI;
static PropertyInfo t534____uvBottomRightUnFlipped_PropertyInfo = 
{
	&t534_TI, "uvBottomRightUnFlipped", &m2806_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2807_MI;
static PropertyInfo t534____uvTopRightUnFlipped_PropertyInfo = 
{
	&t534_TI, "uvTopRightUnFlipped", &m2807_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2808_MI;
static PropertyInfo t534____uvTopLeftUnFlipped_PropertyInfo = 
{
	&t534_TI, "uvTopLeftUnFlipped", &m2808_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2809_MI;
static PropertyInfo t534____uvBottomLeft_PropertyInfo = 
{
	&t534_TI, "uvBottomLeft", &m2809_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2810_MI;
static PropertyInfo t534____uvBottomRight_PropertyInfo = 
{
	&t534_TI, "uvBottomRight", &m2810_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2811_MI;
static PropertyInfo t534____uvTopRight_PropertyInfo = 
{
	&t534_TI, "uvTopRight", &m2811_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2812_MI;
static PropertyInfo t534____uvTopLeft_PropertyInfo = 
{
	&t534_TI, "uvTopLeft", &m2812_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t534_PIs[] =
{
	&t534____advance_PropertyInfo,
	&t534____glyphWidth_PropertyInfo,
	&t534____glyphHeight_PropertyInfo,
	&t534____bearing_PropertyInfo,
	&t534____minY_PropertyInfo,
	&t534____maxY_PropertyInfo,
	&t534____minX_PropertyInfo,
	&t534____maxX_PropertyInfo,
	&t534____uvBottomLeftUnFlipped_PropertyInfo,
	&t534____uvBottomRightUnFlipped_PropertyInfo,
	&t534____uvTopRightUnFlipped_PropertyInfo,
	&t534____uvTopLeftUnFlipped_PropertyInfo,
	&t534____uvBottomLeft_PropertyInfo,
	&t534____uvBottomRight_PropertyInfo,
	&t534____uvTopRight_PropertyInfo,
	&t534____uvTopLeft_PropertyInfo,
	NULL
};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2797_MI = 
{
	"get_advance", (methodPointerType)&m2797, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 974, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2798_MI = 
{
	"get_glyphWidth", (methodPointerType)&m2798, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 975, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2799_MI = 
{
	"get_glyphHeight", (methodPointerType)&m2799, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 976, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2800_MI = 
{
	"get_bearing", (methodPointerType)&m2800, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 977, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2801_MI = 
{
	"get_minY", (methodPointerType)&m2801, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 978, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2802_MI = 
{
	"get_maxY", (methodPointerType)&m2802, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 979, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2803_MI = 
{
	"get_minX", (methodPointerType)&m2803, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 980, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2804_MI = 
{
	"get_maxX", (methodPointerType)&m2804, &t534_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 981, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2805_MI = 
{
	"get_uvBottomLeftUnFlipped", (methodPointerType)&m2805, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 982, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2806_MI = 
{
	"get_uvBottomRightUnFlipped", (methodPointerType)&m2806, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 983, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2807_MI = 
{
	"get_uvTopRightUnFlipped", (methodPointerType)&m2807, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 984, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2808_MI = 
{
	"get_uvTopLeftUnFlipped", (methodPointerType)&m2808, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 985, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2809_MI = 
{
	"get_uvBottomLeft", (methodPointerType)&m2809, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 986, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2810_MI = 
{
	"get_uvBottomRight", (methodPointerType)&m2810, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 987, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2811_MI = 
{
	"get_uvTopRight", (methodPointerType)&m2811, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 988, NULL, (methodPointerType)NULL};
extern TypeInfo t534_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2812_MI = 
{
	"get_uvTopLeft", (methodPointerType)&m2812, &t534_TI, &t59_0_0_0, RuntimeInvoker_t59, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 989, NULL, (methodPointerType)NULL};
static MethodInfo* t534_MIs[] =
{
	&m2797_MI,
	&m2798_MI,
	&m2799_MI,
	&m2800_MI,
	&m2801_MI,
	&m2802_MI,
	&m2803_MI,
	&m2804_MI,
	&m2805_MI,
	&m2806_MI,
	&m2807_MI,
	&m2808_MI,
	&m2809_MI,
	&m2810_MI,
	&m2811_MI,
	&m2812_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t534_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern TypeInfo t344_TI;
extern MethodInfo m2962_MI;
void t534_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m2962(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), &m2962_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t344_TI;
extern MethodInfo m2962_MI;
void t534_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m2962(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), &m2962_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t344_TI;
extern MethodInfo m2962_MI;
void t534_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m2962(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), &m2962_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t344_TI;
extern MethodInfo m2962_MI;
void t534_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t344 * tmp;
		tmp = (t344 *)il2cpp_codegen_object_new (&t344_TI);
		m2962(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), &m2962_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t534__CustomAttributeCache_uv = {
1,
NULL,
&t534_CustomAttributesCacheGenerator_uv
};
CustomAttributesCache t534__CustomAttributeCache_vert = {
1,
NULL,
&t534_CustomAttributesCacheGenerator_vert
};
CustomAttributesCache t534__CustomAttributeCache_width = {
1,
NULL,
&t534_CustomAttributesCacheGenerator_width
};
CustomAttributesCache t534__CustomAttributeCache_flipped = {
1,
NULL,
&t534_CustomAttributesCacheGenerator_flipped
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t534_0_0_0;
extern Il2CppType t534_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t534_TI;
extern CustomAttributesCache t534__CustomAttributeCache_uv;
extern CustomAttributesCache t534__CustomAttributeCache_vert;
extern CustomAttributesCache t534__CustomAttributeCache_width;
extern CustomAttributesCache t534__CustomAttributeCache_flipped;
TypeInfo t534_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CharacterInfo", "UnityEngine", t534_MIs, t534_PIs, t534_FIs, NULL, &t26_TI, NULL, NULL, &t534_TI, NULL, t534_VT, &EmptyCustomAttributesCache, &t534_TI, &t534_0_0_0, &t534_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t534_marshal, (methodPointerType)t534_marshal_back, (methodPointerType)t534_marshal_cleanup, sizeof (t534)+ sizeof (Il2CppObject), 0, sizeof(t534_marshaled), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 16, 16, 8, 0, 0, 4, 0, 0};
#include "t535.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t535_TI;
#include "t535MD.h"



extern MethodInfo m2813_MI;
 void m2813 (t535 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m2814_MI;
 void m2814 (t535 * __this, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t28 * __this, MethodInfo* method);
	if (__this->f9)
		m2814((t535 *)__this->f9 , method);
	((FunctionPointerType)__this->f0)(__this->f2, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t535(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m2815_MI;
 t28 * m2815 (t535 * __this, t91 * p0, t28 * p1, MethodInfo* method){
	void *__d_args[1] = {0};
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m2816_MI;
 void m2816 (t535 * __this, t28 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Font/FontTextureRebuildCallback
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t535_m2813_ParameterInfos[] = 
{
	{"object", 0, 134218725, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218726, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t535_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m2813_MI = 
{
	".ctor", (methodPointerType)&m2813, &t535_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t535_m2813_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 997, NULL, (methodPointerType)NULL};
extern TypeInfo t535_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2814_MI = 
{
	"Invoke", (methodPointerType)&m2814, &t535_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 998, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t535_m2815_ParameterInfos[] = 
{
	{"callback", 0, 134218727, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 1, 134218728, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t535_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2815_MI = 
{
	"BeginInvoke", (methodPointerType)&m2815, &t535_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28, t535_m2815_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 999, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t535_m2816_ParameterInfos[] = 
{
	{"result", 0, 134218729, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t535_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2816_MI = 
{
	"EndInvoke", (methodPointerType)&m2816, &t535_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t535_m2816_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1000, NULL, (methodPointerType)NULL};
static MethodInfo* t535_MIs[] =
{
	&m2813_MI,
	&m2814_MI,
	&m2815_MI,
	&m2816_MI,
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
extern MethodInfo m2814_MI;
extern MethodInfo m2815_MI;
extern MethodInfo m2816_MI;
static MethodInfo* t535_VT[] =
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
	&m2814_MI,
	&m2815_MI,
	&m2816_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t535_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern TypeInfo t615_TI;
#include "t615.h"
#include "t615MD.h"
extern MethodInfo m3012_MI;
void t535_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t615 * tmp;
		tmp = (t615 *)il2cpp_codegen_object_new (&t615_TI);
		m3012(tmp, 1, &m3012_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t535__CustomAttributeCache = {
1,
NULL,
&t535_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t535_0_0_0;
extern Il2CppType t535_1_0_0;
extern TypeInfo t221_TI;
struct t535;
extern TypeInfo t535_TI;
extern TypeInfo t173_TI;
extern CustomAttributesCache t535__CustomAttributeCache;
TypeInfo t535_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "FontTextureRebuildCallback", "", t535_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t173_TI, &t535_TI, NULL, t535_VT, &t535__CustomAttributeCache, &t535_TI, &t535_0_0_0, &t535_1_0_0, t535_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t535, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t535), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t173_TI;
#include "t173MD.h"

#include "t39.h"
#include "t363.h"
#include "t365.h"
#include "t220.h"
extern TypeInfo t173_TI;
extern TypeInfo t363_TI;
extern TypeInfo t30_TI;
extern TypeInfo t535_TI;
#include "t365MD.h"
#include "t363MD.h"
extern MethodInfo m1714_MI;
extern MethodInfo m1715_MI;
extern MethodInfo m3026_MI;
extern MethodInfo m2814_MI;


extern MethodInfo m1664_MI;
 void m1664 (t28 * __this, t363 * p0, MethodInfo* method){
	{
		t365 * L_0 = m1714(NULL, (((t173_SFs*)InitializedTypeInfo(&t173_TI)->static_fields)->f2), p0, &m1714_MI);
		((t173_SFs*)InitializedTypeInfo(&t173_TI)->static_fields)->f2 = ((t363 *)Castclass(L_0, InitializedTypeInfo(&t363_TI)));
		return;
	}
}
extern MethodInfo m2817_MI;
 void m2817 (t28 * __this, t363 * p0, MethodInfo* method){
	{
		t365 * L_0 = m1715(NULL, (((t173_SFs*)InitializedTypeInfo(&t173_TI)->static_fields)->f2), p0, &m1715_MI);
		((t173_SFs*)InitializedTypeInfo(&t173_TI)->static_fields)->f2 = ((t363 *)Castclass(L_0, InitializedTypeInfo(&t363_TI)));
		return;
	}
}
extern MethodInfo m2023_MI;
 t39 * m2023 (t173 * __this, MethodInfo* method){
	typedef t39 * (*m2023_ftn) (t173 *);
	static m2023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1870_MI;
 bool m1870 (t173 * __this, uint16_t p0, MethodInfo* method){
	typedef bool (*m1870_ftn) (t173 *, uint16_t);
	static m1870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2818_MI;
 void m2818 (t28 * __this, t173 * p0, MethodInfo* method){
	t363 * V_0 = {0};
	{
		V_0 = (((t173_SFs*)InitializedTypeInfo(&t173_TI)->static_fields)->f2);
		if (!V_0)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker1< t173 * >::Invoke(&m3026_MI, V_0, p0);
	}

IL_0013:
	{
		t535 * L_0 = (p0->f3);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		t535 * L_1 = (p0->f3);
		VirtActionInvoker0::Invoke(&m2814_MI, L_1);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m2025_MI;
 bool m2025 (t173 * __this, MethodInfo* method){
	typedef bool (*m2025_ftn) (t173 *);
	static m2025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2027_MI;
 int32_t m2027 (t173 * __this, MethodInfo* method){
	typedef int32_t (*m2027_ftn) (t173 *);
	static m2027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// Metadata Definition UnityEngine.Font
extern Il2CppType t363_0_0_17;
FieldInfo t173_f2_FieldInfo = 
{
	"textureRebuilt", &t363_0_0_17, &t173_TI, offsetof(t173_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t535_0_0_1;
FieldInfo t173_f3_FieldInfo = 
{
	"m_FontTextureRebuildCallback", &t535_0_0_1, &t173_TI, offsetof(t173, f3), &EmptyCustomAttributesCache};
static FieldInfo* t173_FIs[] =
{
	&t173_f2_FieldInfo,
	&t173_f3_FieldInfo,
	NULL
};
extern MethodInfo m2023_MI;
static PropertyInfo t173____material_PropertyInfo = 
{
	&t173_TI, "material", &m2023_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2025_MI;
static PropertyInfo t173____dynamic_PropertyInfo = 
{
	&t173_TI, "dynamic", &m2025_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2027_MI;
static PropertyInfo t173____fontSize_PropertyInfo = 
{
	&t173_TI, "fontSize", &m2027_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t173_PIs[] =
{
	&t173____material_PropertyInfo,
	&t173____dynamic_PropertyInfo,
	&t173____fontSize_PropertyInfo,
	NULL
};
extern Il2CppType t363_0_0_0;
extern MethodInfo m1664_MI;
extern MethodInfo m2817_MI;
static EventInfo t173____textureRebuilt_EventInfo = 
{
	"textureRebuilt", &t363_0_0_0, &t173_TI, &m1664_MI, &m2817_MI, NULL, &EmptyCustomAttributesCache};
static EventInfo* t173__EventInfos[] =
{
	&t173____textureRebuilt_EventInfo,
	NULL
};
extern Il2CppType t363_0_0_0;
static ParameterInfo t173_m1664_ParameterInfos[] = 
{
	{"value", 0, 134218721, &EmptyCustomAttributesCache, &t363_0_0_0},
};
extern TypeInfo t173_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1664_MI = 
{
	"add_textureRebuilt", (methodPointerType)&m1664, &t173_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t173_m1664_ParameterInfos, &EmptyCustomAttributesCache, 2198, 32, 255, 1, false, false, 990, NULL, (methodPointerType)NULL};
extern Il2CppType t363_0_0_0;
static ParameterInfo t173_m2817_ParameterInfos[] = 
{
	{"value", 0, 134218722, &EmptyCustomAttributesCache, &t363_0_0_0},
};
extern TypeInfo t173_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2817_MI = 
{
	"remove_textureRebuilt", (methodPointerType)&m2817, &t173_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t173_m2817_ParameterInfos, &EmptyCustomAttributesCache, 2198, 32, 255, 1, false, false, 991, NULL, (methodPointerType)NULL};
extern TypeInfo t173_TI;
extern Il2CppType t39_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t173__CustomAttributeCache_m2023;
MethodInfo m2023_MI = 
{
	"get_material", (methodPointerType)&m2023, &t173_TI, &t39_0_0_0, RuntimeInvoker_t28, NULL, &t173__CustomAttributeCache_m2023, 2182, 4096, 255, 0, false, false, 992, NULL, (methodPointerType)NULL};
extern Il2CppType t220_0_0_0;
static ParameterInfo t173_m1870_ParameterInfos[] = 
{
	{"c", 0, 134218723, &EmptyCustomAttributesCache, &t220_0_0_0},
};
extern TypeInfo t173_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t384 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t173__CustomAttributeCache_m1870;
MethodInfo m1870_MI = 
{
	"HasCharacter", (methodPointerType)&m1870, &t173_TI, &t31_0_0_0, RuntimeInvoker_t31_t384, t173_m1870_ParameterInfos, &t173__CustomAttributeCache_m1870, 134, 4096, 255, 1, false, false, 993, NULL, (methodPointerType)NULL};
extern Il2CppType t173_0_0_0;
static ParameterInfo t173_m2818_ParameterInfos[] = 
{
	{"font", 0, 134218724, &EmptyCustomAttributesCache, &t173_0_0_0},
};
extern TypeInfo t173_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2818_MI = 
{
	"InvokeTextureRebuilt_Internal", (methodPointerType)&m2818, &t173_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t173_m2818_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 994, NULL, (methodPointerType)NULL};
extern TypeInfo t173_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t173__CustomAttributeCache_m2025;
MethodInfo m2025_MI = 
{
	"get_dynamic", (methodPointerType)&m2025, &t173_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t173__CustomAttributeCache_m2025, 2182, 4096, 255, 0, false, false, 995, NULL, (methodPointerType)NULL};
extern TypeInfo t173_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t173__CustomAttributeCache_m2027;
MethodInfo m2027_MI = 
{
	"get_fontSize", (methodPointerType)&m2027, &t173_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t173__CustomAttributeCache_m2027, 2182, 4096, 255, 0, false, false, 996, NULL, (methodPointerType)NULL};
static MethodInfo* t173_MIs[] =
{
	&m1664_MI,
	&m2817_MI,
	&m2023_MI,
	&m1870_MI,
	&m2818_MI,
	&m2025_MI,
	&m2027_MI,
	NULL
};
extern TypeInfo t535_TI;
static TypeInfo* t173_TI__nestedTypes[2] =
{
	&t535_TI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t173_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t173_CustomAttributesCacheGenerator_m2023(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t173_CustomAttributesCacheGenerator_m1870(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t173_CustomAttributesCacheGenerator_m2025(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t173_CustomAttributesCacheGenerator_m2027(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t173__CustomAttributeCache_m2023 = {
1,
NULL,
&t173_CustomAttributesCacheGenerator_m2023
};
CustomAttributesCache t173__CustomAttributeCache_m1870 = {
1,
NULL,
&t173_CustomAttributesCacheGenerator_m1870
};
CustomAttributesCache t173__CustomAttributeCache_m2025 = {
1,
NULL,
&t173_CustomAttributesCacheGenerator_m2025
};
CustomAttributesCache t173__CustomAttributeCache_m2027 = {
1,
NULL,
&t173_CustomAttributesCacheGenerator_m2027
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t173_0_0_0;
extern Il2CppType t173_1_0_0;
extern TypeInfo t43_TI;
struct t173;
extern TypeInfo t173_TI;
extern CustomAttributesCache t173__CustomAttributeCache_m2023;
extern CustomAttributesCache t173__CustomAttributeCache_m1870;
extern CustomAttributesCache t173__CustomAttributeCache_m2025;
extern CustomAttributesCache t173__CustomAttributeCache_m2027;
TypeInfo t173_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Font", "UnityEngine", t173_MIs, t173_PIs, t173_FIs, t173__EventInfos, &t43_TI, t173_TI__nestedTypes, NULL, &t173_TI, NULL, t173_VT, &EmptyCustomAttributesCache, &t173_TI, &t173_0_0_0, &t173_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t173), 0, -1, sizeof(t173_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 7, 3, 2, 1, 1, 4, 0, 0};
#include "t392.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t392_TI;
#include "t392MD.h"



// Metadata Definition UnityEngine.UICharInfo
extern Il2CppType t59_0_0_6;
FieldInfo t392_f0_FieldInfo = 
{
	"cursorPos", &t59_0_0_6, &t392_TI, offsetof(t392, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_6;
FieldInfo t392_f1_FieldInfo = 
{
	"charWidth", &t33_0_0_6, &t392_TI, offsetof(t392, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t392_FIs[] =
{
	&t392_f0_FieldInfo,
	&t392_f1_FieldInfo,
	NULL
};
static MethodInfo* t392_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t392_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t392_0_0_0;
extern Il2CppType t392_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t392_TI;
TypeInfo t392_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UICharInfo", "UnityEngine", t392_MIs, NULL, t392_FIs, NULL, &t26_TI, NULL, NULL, &t392_TI, NULL, t392_VT, &EmptyCustomAttributesCache, &t392_TI, &t392_0_0_0, &t392_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t392)+ sizeof (Il2CppObject), 0, sizeof(t392 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t391.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t391_TI;
#include "t391MD.h"



// Metadata Definition UnityEngine.UILineInfo
extern Il2CppType t47_0_0_6;
FieldInfo t391_f0_FieldInfo = 
{
	"startCharIdx", &t47_0_0_6, &t391_TI, offsetof(t391, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t391_f1_FieldInfo = 
{
	"height", &t47_0_0_6, &t391_TI, offsetof(t391, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t391_FIs[] =
{
	&t391_f0_FieldInfo,
	&t391_f1_FieldInfo,
	NULL
};
static MethodInfo* t391_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t391_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t391_0_0_0;
extern Il2CppType t391_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t391_TI;
TypeInfo t391_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UILineInfo", "UnityEngine", t391_MIs, NULL, t391_FIs, NULL, &t26_TI, NULL, NULL, &t391_TI, NULL, t391_VT, &EmptyCustomAttributesCache, &t391_TI, &t391_0_0_0, &t391_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t391)+ sizeof (Il2CppObject), 0, sizeof(t391 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t228.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t228_TI;
#include "t228MD.h"

#include "t190.h"
#include "t536.h"
#include "t537.h"
#include "t210.h"
#include "t263.h"
extern TypeInfo t228_TI;
extern TypeInfo t18_TI;
extern TypeInfo t55_TI;
extern TypeInfo t190_TI;
extern TypeInfo t536_TI;
extern TypeInfo t537_TI;
extern TypeInfo t59_TI;
extern TypeInfo t341_TI;
extern TypeInfo t30_TI;
extern TypeInfo t28_TI;
extern TypeInfo t263_TI;
#include "t55MD.h"
#include "t190MD.h"
#include "t536MD.h"
#include "t537MD.h"
#include "t263MD.h"
extern MethodInfo m1885_MI;
extern MethodInfo m1828_MI;
extern MethodInfo m2825_MI;
extern MethodInfo m1875_MI;
extern MethodInfo m1877_MI;
extern MethodInfo m2837_MI;
extern MethodInfo m2835_MI;
extern MethodInfo m2836_MI;
extern MethodInfo m2021_MI;
extern MethodInfo m203_MI;
extern MethodInfo m3027_MI;
extern MethodInfo m3028_MI;
extern MethodInfo m3029_MI;
extern MethodInfo m2820_MI;
extern MethodInfo m2821_MI;
extern MethodInfo m2823_MI;
extern MethodInfo m2824_MI;
extern MethodInfo m1551_MI;
extern MethodInfo m97_MI;
extern MethodInfo m138_MI;
extern MethodInfo m2025_MI;
extern MethodInfo m2622_MI;
extern MethodInfo m2829_MI;
extern MethodInfo m2831_MI;
extern MethodInfo m2826_MI;
extern MethodInfo m1887_MI;
extern MethodInfo m1889_MI;
extern MethodInfo m1691_MI;
extern MethodInfo m1692_MI;
extern MethodInfo m128_MI;
extern MethodInfo m2904_MI;
extern MethodInfo m2838_MI;
extern MethodInfo m2834_MI;
extern MethodInfo m2822_MI;


extern MethodInfo m1823_MI;
 void m1823 (t228 * __this, MethodInfo* method){
	{
		m2021(__this, ((int32_t)50), &m2021_MI);
		return;
	}
}
extern MethodInfo m2021_MI;
 void m2021 (t228 * __this, int32_t p0, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t190_TI));
		t190 * L_0 = (t190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t190_TI));
		m3027(L_0, ((int32_t)(((int32_t)(p0+1))*4)), &m3027_MI);
		__this->f5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t536_TI));
		t536 * L_1 = (t536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t536_TI));
		m3028(L_1, ((int32_t)(p0+1)), &m3028_MI);
		__this->f6 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t537_TI));
		t537 * L_2 = (t537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t537_TI));
		m3029(L_2, ((int32_t)20), &m3029_MI);
		__this->f7 = L_2;
		m2820(__this, &m2820_MI);
		return;
	}
}
extern MethodInfo m2819_MI;
 void m2819 (t228 * __this, MethodInfo* method){
	{
		m2821(__this, &m2821_MI);
		return;
	}
}
extern MethodInfo m2820_MI;
 void m2820 (t228 * __this, MethodInfo* method){
	typedef void (*m2820_ftn) (t228 *);
	static m2820_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2820_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2821_MI;
 void m2821 (t228 * __this, MethodInfo* method){
	typedef void (*m2821_ftn) (t228 *);
	static m2821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2822_MI;
 bool m2822 (t228 * __this, t18* p0, t173 * p1, t20  p2, int32_t p3, float p4, int32_t p5, bool p6, bool p7, int32_t p8, int32_t p9, int32_t p10, int32_t p11, bool p12, int32_t p13, t59  p14, t59  p15, bool p16, MethodInfo* method){
	{
		float L_0 = ((&p14)->f1);
		float L_1 = ((&p14)->f2);
		float L_2 = ((&p15)->f1);
		float L_3 = ((&p15)->f2);
		bool L_4 = m2823(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, L_0, L_1, L_2, L_3, p16, &m2823_MI);
		return L_4;
	}
}
extern MethodInfo m2823_MI;
 bool m2823 (t228 * __this, t18* p0, t173 * p1, t20  p2, int32_t p3, float p4, int32_t p5, bool p6, bool p7, int32_t p8, int32_t p9, int32_t p10, int32_t p11, bool p12, int32_t p13, float p14, float p15, float p16, float p17, bool p18, MethodInfo* method){
	{
		bool L_0 = m2824(NULL, __this, p0, p1, (&p2), p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, &m2824_MI);
		return L_0;
	}
}
extern MethodInfo m2824_MI;
 bool m2824 (t28 * __this, t228 * p0, t18* p1, t173 * p2, t20 * p3, int32_t p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, float p15, float p16, float p17, float p18, bool p19, MethodInfo* method){
	typedef bool (*m2824_ftn) (t228 *, t18*, t173 *, t20 *, int32_t, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static m2824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19);
}
extern MethodInfo m1889_MI;
 t191  m1889 (t228 * __this, MethodInfo* method){
	typedef t191  (*m1889_ftn) (t228 *);
	static m1889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2825_MI;
 int32_t m2825 (t228 * __this, MethodInfo* method){
	typedef int32_t (*m2825_ftn) (t228 *);
	static m2825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2826_MI;
 void m2826 (t228 * __this, t28 * p0, MethodInfo* method){
	typedef void (*m2826_ftn) (t228 *, t28 *);
	static m2826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2827_MI;
 t227* m2827 (t228 * __this, MethodInfo* method){
	typedef t227* (*m2827_ftn) (t228 *);
	static m2827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2828_MI;
 int32_t m2828 (t228 * __this, MethodInfo* method){
	typedef int32_t (*m2828_ftn) (t228 *);
	static m2828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1863_MI;
 int32_t m1863 (t228 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t18* L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_1 = m1885(NULL, L_0, &m1885_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		t18* L_2 = (__this->f1);
		int32_t L_3 = m1828(L_2, &m1828_MI);
		int32_t L_4 = m2825(__this, &m2825_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		int32_t L_5 = m1875(NULL, 0, ((int32_t)(((int32_t)(L_4-4))/4)), &m1875_MI);
		int32_t L_6 = m1877(NULL, L_3, L_5, &m1877_MI);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2829_MI;
 void m2829 (t228 * __this, t28 * p0, MethodInfo* method){
	typedef void (*m2829_ftn) (t228 *, t28 *);
	static m2829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2830_MI;
 t538* m2830 (t228 * __this, MethodInfo* method){
	typedef t538* (*m2830_ftn) (t228 *);
	static m2830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1862_MI;
 int32_t m1862 (t228 * __this, MethodInfo* method){
	typedef int32_t (*m1862_ftn) (t228 *);
	static m1862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2831_MI;
 void m2831 (t228 * __this, t28 * p0, MethodInfo* method){
	typedef void (*m2831_ftn) (t228 *, t28 *);
	static m2831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2832_MI;
 t539* m2832 (t228 * __this, MethodInfo* method){
	typedef t539* (*m2832_ftn) (t228 *);
	static m2832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1915_MI;
 int32_t m1915 (t228 * __this, MethodInfo* method){
	typedef int32_t (*m1915_ftn) (t228 *);
	static m1915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2833_MI;
 void m2833 (t228 * __this, MethodInfo* method){
	int32_t leaveInstructions[1] = {0};
	t321 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t321 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(&m1551_MI, __this);
		// IL_0006: leave IL_0012
		leaveInstructions[0] = 0x12; // 1
		THROW_SENTINEL(IL_0012);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_000b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t321 *)e.ex;
		goto IL_000b;
	}

IL_000b:
	{ // begin finally (depth: 1)
		m97(__this, &m97_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x12:
				goto IL_0012;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t321 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_0012:
	{
		return;
	}
}
extern MethodInfo m2834_MI;
 t263  m2834 (t228 * __this, t263  p0, MethodInfo* method){
	{
		t173 * L_0 = ((&p0)->f0);
		bool L_1 = m138(NULL, L_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t173 * L_2 = ((&p0)->f0);
		bool L_3 = m2025(L_2, &m2025_MI);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		return p0;
	}

IL_0025:
	{
		int32_t L_4 = ((&p0)->f2);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ((&p0)->f5);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		m2622(NULL, (t18*) &_stringLiteral156, &m2622_MI);
		(&p0)->f2 = 0;
		(&p0)->f5 = 0;
	}

IL_0057:
	{
		bool L_6 = ((&p0)->f7);
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		m2622(NULL, (t18*) &_stringLiteral157, &m2622_MI);
		(&p0)->f7 = 0;
	}

IL_0075:
	{
		return p0;
	}
}
extern MethodInfo m2030_MI;
 void m2030 (t228 * __this, MethodInfo* method){
	{
		__this->f3 = 0;
		return;
	}
}
extern MethodInfo m2835_MI;
 void m2835 (t228 * __this, t536 * p0, MethodInfo* method){
	{
		m2829(__this, p0, &m2829_MI);
		return;
	}
}
extern MethodInfo m2836_MI;
 void m2836 (t228 * __this, t537 * p0, MethodInfo* method){
	{
		m2831(__this, p0, &m2831_MI);
		return;
	}
}
extern MethodInfo m2837_MI;
 void m2837 (t228 * __this, t190 * p0, MethodInfo* method){
	{
		m2826(__this, p0, &m2826_MI);
		return;
	}
}
extern MethodInfo m2028_MI;
 float m2028 (t228 * __this, t18* p0, t263  p1, MethodInfo* method){
	t191  V_0 = {0};
	{
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		(&p1)->f10 = 1;
		m1887(__this, p0, p1, &m1887_MI);
		t191  L_0 = m1889(__this, &m1889_MI);
		V_0 = L_0;
		float L_1 = m1691((&V_0), &m1691_MI);
		return L_1;
	}
}
extern MethodInfo m2029_MI;
 float m2029 (t228 * __this, t18* p0, t263  p1, MethodInfo* method){
	t191  V_0 = {0};
	{
		(&p1)->f11 = 1;
		(&p1)->f10 = 1;
		m1887(__this, p0, p1, &m1887_MI);
		t191  L_0 = m1889(__this, &m1889_MI);
		V_0 = L_0;
		float L_1 = m1692((&V_0), &m1692_MI);
		return L_1;
	}
}
extern MethodInfo m1887_MI;
 bool m1887 (t228 * __this, t18* p0, t263  p1, MethodInfo* method){
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		t18* L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_2 = m128(NULL, p0, L_1, &m128_MI);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		t263  L_3 = (__this->f2);
		bool L_4 = m2904((&p1), L_3, &m2904_MI);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		bool L_5 = (__this->f4);
		return L_5;
	}

IL_0035:
	{
		bool L_6 = m2838(__this, p0, p1, &m2838_MI);
		return L_6;
	}
}
extern MethodInfo m2838_MI;
 bool m2838 (t228 * __this, t18* p0, t263  p1, MethodInfo* method){
	t263  V_0 = {0};
	{
		__this->f1 = p0;
		__this->f3 = 1;
		__this->f8 = 0;
		__this->f9 = 0;
		__this->f10 = 0;
		__this->f2 = p1;
		t263  L_0 = m2834(__this, p1, &m2834_MI);
		V_0 = L_0;
		t173 * L_1 = ((&V_0)->f0);
		t20  L_2 = ((&V_0)->f1);
		int32_t L_3 = ((&V_0)->f2);
		float L_4 = ((&V_0)->f3);
		int32_t L_5 = ((&V_0)->f5);
		bool L_6 = ((&V_0)->f4);
		bool L_7 = ((&V_0)->f7);
		int32_t L_8 = ((&V_0)->f8);
		int32_t L_9 = ((&V_0)->f9);
		int32_t L_10 = ((&V_0)->f11);
		int32_t L_11 = ((&V_0)->f12);
		bool L_12 = ((&V_0)->f10);
		int32_t L_13 = ((&V_0)->f6);
		t59  L_14 = ((&V_0)->f13);
		t59  L_15 = ((&V_0)->f14);
		bool L_16 = ((&V_0)->f15);
		bool L_17 = m2822(__this, p0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, &m2822_MI);
		__this->f4 = L_17;
		bool L_18 = (__this->f4);
		return L_18;
	}
}
extern MethodInfo m2032_MI;
 t28* m2032 (t228 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t190 * L_1 = (__this->f5);
		m2837(__this, L_1, &m2837_MI);
		__this->f8 = 1;
	}

IL_001e:
	{
		t190 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m1864_MI;
 t28* m1864 (t228 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t536 * L_1 = (__this->f6);
		m2835(__this, L_1, &m2835_MI);
		__this->f9 = 1;
	}

IL_001e:
	{
		t536 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m1860_MI;
 t28* m1860 (t228 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t537 * L_1 = (__this->f7);
		m2836(__this, L_1, &m2836_MI);
		__this->f10 = 1;
	}

IL_001e:
	{
		t537 * L_2 = (__this->f7);
		return L_2;
	}
}
// Metadata Definition UnityEngine.TextGenerator
extern Il2CppType t49_0_0_3;
FieldInfo t228_f0_FieldInfo = 
{
	"m_Ptr", &t49_0_0_3, &t228_TI, offsetof(t228, f0), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t228_f1_FieldInfo = 
{
	"m_LastString", &t18_0_0_1, &t228_TI, offsetof(t228, f1), &EmptyCustomAttributesCache};
extern Il2CppType t263_0_0_1;
FieldInfo t228_f2_FieldInfo = 
{
	"m_LastSettings", &t263_0_0_1, &t228_TI, offsetof(t228, f2), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t228_f3_FieldInfo = 
{
	"m_HasGenerated", &t31_0_0_1, &t228_TI, offsetof(t228, f3), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t228_f4_FieldInfo = 
{
	"m_LastValid", &t31_0_0_1, &t228_TI, offsetof(t228, f4), &EmptyCustomAttributesCache};
extern Il2CppType t190_0_0_33;
FieldInfo t228_f5_FieldInfo = 
{
	"m_Verts", &t190_0_0_33, &t228_TI, offsetof(t228, f5), &EmptyCustomAttributesCache};
extern Il2CppType t536_0_0_33;
FieldInfo t228_f6_FieldInfo = 
{
	"m_Characters", &t536_0_0_33, &t228_TI, offsetof(t228, f6), &EmptyCustomAttributesCache};
extern Il2CppType t537_0_0_33;
FieldInfo t228_f7_FieldInfo = 
{
	"m_Lines", &t537_0_0_33, &t228_TI, offsetof(t228, f7), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t228_f8_FieldInfo = 
{
	"m_CachedVerts", &t31_0_0_1, &t228_TI, offsetof(t228, f8), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t228_f9_FieldInfo = 
{
	"m_CachedCharacters", &t31_0_0_1, &t228_TI, offsetof(t228, f9), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t228_f10_FieldInfo = 
{
	"m_CachedLines", &t31_0_0_1, &t228_TI, offsetof(t228, f10), &EmptyCustomAttributesCache};
static FieldInfo* t228_FIs[] =
{
	&t228_f0_FieldInfo,
	&t228_f1_FieldInfo,
	&t228_f2_FieldInfo,
	&t228_f3_FieldInfo,
	&t228_f4_FieldInfo,
	&t228_f5_FieldInfo,
	&t228_f6_FieldInfo,
	&t228_f7_FieldInfo,
	&t228_f8_FieldInfo,
	&t228_f9_FieldInfo,
	&t228_f10_FieldInfo,
	NULL
};
extern MethodInfo m1889_MI;
static PropertyInfo t228____rectExtents_PropertyInfo = 
{
	&t228_TI, "rectExtents", &m1889_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2825_MI;
static PropertyInfo t228____vertexCount_PropertyInfo = 
{
	&t228_TI, "vertexCount", &m2825_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2828_MI;
static PropertyInfo t228____characterCount_PropertyInfo = 
{
	&t228_TI, "characterCount", &m2828_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1863_MI;
static PropertyInfo t228____characterCountVisible_PropertyInfo = 
{
	&t228_TI, "characterCountVisible", &m1863_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1862_MI;
static PropertyInfo t228____lineCount_PropertyInfo = 
{
	&t228_TI, "lineCount", &m1862_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1915_MI;
static PropertyInfo t228____fontSizeUsedForBestFit_PropertyInfo = 
{
	&t228_TI, "fontSizeUsedForBestFit", &m1915_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2032_MI;
static PropertyInfo t228____verts_PropertyInfo = 
{
	&t228_TI, "verts", &m2032_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1864_MI;
static PropertyInfo t228____characters_PropertyInfo = 
{
	&t228_TI, "characters", &m1864_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1860_MI;
static PropertyInfo t228____lines_PropertyInfo = 
{
	&t228_TI, "lines", &m1860_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t228_PIs[] =
{
	&t228____rectExtents_PropertyInfo,
	&t228____vertexCount_PropertyInfo,
	&t228____characterCount_PropertyInfo,
	&t228____characterCountVisible_PropertyInfo,
	&t228____lineCount_PropertyInfo,
	&t228____fontSizeUsedForBestFit_PropertyInfo,
	&t228____verts_PropertyInfo,
	&t228____characters_PropertyInfo,
	&t228____lines_PropertyInfo,
	NULL
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1823_MI = 
{
	".ctor", (methodPointerType)&m1823, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1001, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t228_m2021_ParameterInfos[] = 
{
	{"initialCapacity", 0, 134218730, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2021_MI = 
{
	".ctor", (methodPointerType)&m2021, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t47, t228_m2021_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1002, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2819_MI = 
{
	"System.IDisposable.Dispose", (methodPointerType)&m2819, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 481, 0, 4, 0, false, false, 1003, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2820;
MethodInfo m2820_MI = 
{
	"Init", (methodPointerType)&m2820, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &t228__CustomAttributeCache_m2820, 129, 4096, 255, 0, false, false, 1004, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2821;
MethodInfo m2821_MI = 
{
	"Dispose_cpp", (methodPointerType)&m2821, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &t228__CustomAttributeCache_m2821, 129, 4096, 255, 0, false, false, 1005, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t173_0_0_0;
extern Il2CppType t20_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t174_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t177_0_0_0;
extern Il2CppType t176_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t175_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t228_m2822_ParameterInfos[] = 
{
	{"str", 0, 134218731, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"font", 1, 134218732, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"color", 2, 134218733, &EmptyCustomAttributesCache, &t20_0_0_0},
	{"fontSize", 3, 134218734, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"lineSpacing", 4, 134218735, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"style", 5, 134218736, &EmptyCustomAttributesCache, &t174_0_0_0},
	{"richText", 6, 134218737, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resizeTextForBestFit", 7, 134218738, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resizeTextMinSize", 8, 134218739, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"resizeTextMaxSize", 9, 134218740, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"verticalOverFlow", 10, 134218741, &EmptyCustomAttributesCache, &t177_0_0_0},
	{"horizontalOverflow", 11, 134218742, &EmptyCustomAttributesCache, &t176_0_0_0},
	{"updateBounds", 12, 134218743, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"anchor", 13, 134218744, &EmptyCustomAttributesCache, &t175_0_0_0},
	{"extents", 14, 134218745, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"pivot", 15, 134218746, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"generateOutOfBounds", 16, 134218747, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28_t20_t47_t33_t47_t323_t323_t47_t47_t47_t47_t323_t47_t59_t59_t323 (MethodInfo* method, void* obj, void** args);
MethodInfo m2822_MI = 
{
	"Populate_Internal", (methodPointerType)&m2822, &t228_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28_t20_t47_t33_t47_t323_t323_t47_t47_t47_t47_t323_t47_t59_t59_t323, t228_m2822_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 17, false, false, 1006, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t173_0_0_0;
extern Il2CppType t20_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t174_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t175_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t228_m2823_ParameterInfos[] = 
{
	{"str", 0, 134218748, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"font", 1, 134218749, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"color", 2, 134218750, &EmptyCustomAttributesCache, &t20_0_0_0},
	{"fontSize", 3, 134218751, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"lineSpacing", 4, 134218752, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"style", 5, 134218753, &EmptyCustomAttributesCache, &t174_0_0_0},
	{"richText", 6, 134218754, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resizeTextForBestFit", 7, 134218755, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resizeTextMinSize", 8, 134218756, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"resizeTextMaxSize", 9, 134218757, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"verticalOverFlow", 10, 134218758, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"horizontalOverflow", 11, 134218759, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"updateBounds", 12, 134218760, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"anchor", 13, 134218761, &EmptyCustomAttributesCache, &t175_0_0_0},
	{"extentsX", 14, 134218762, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"extentsY", 15, 134218763, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"pivotX", 16, 134218764, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"pivotY", 17, 134218765, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"generateOutOfBounds", 18, 134218766, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28_t20_t47_t33_t47_t323_t323_t47_t47_t47_t47_t323_t47_t33_t33_t33_t33_t323 (MethodInfo* method, void* obj, void** args);
MethodInfo m2823_MI = 
{
	"Populate_Internal_cpp", (methodPointerType)&m2823, &t228_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28_t20_t47_t33_t47_t323_t323_t47_t47_t47_t47_t323_t47_t33_t33_t33_t33_t323, t228_m2823_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 19, false, false, 1007, NULL, (methodPointerType)NULL};
extern Il2CppType t228_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t173_0_0_0;
extern Il2CppType t20_1_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t174_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t175_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t228_m2824_ParameterInfos[] = 
{
	{"self", 0, 134218767, &EmptyCustomAttributesCache, &t228_0_0_0},
	{"str", 1, 134218768, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"font", 2, 134218769, &EmptyCustomAttributesCache, &t173_0_0_0},
	{"color", 3, 134218770, &EmptyCustomAttributesCache, &t20_1_0_0},
	{"fontSize", 4, 134218771, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"lineSpacing", 5, 134218772, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"style", 6, 134218773, &EmptyCustomAttributesCache, &t174_0_0_0},
	{"richText", 7, 134218774, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resizeTextForBestFit", 8, 134218775, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"resizeTextMinSize", 9, 134218776, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"resizeTextMaxSize", 10, 134218777, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"verticalOverFlow", 11, 134218778, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"horizontalOverflow", 12, 134218779, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"updateBounds", 13, 134218780, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"anchor", 14, 134218781, &EmptyCustomAttributesCache, &t175_0_0_0},
	{"extentsX", 15, 134218782, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"extentsY", 16, 134218783, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"pivotX", 17, 134218784, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"pivotY", 18, 134218785, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"generateOutOfBounds", 19, 134218786, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28_t28_t412_t47_t33_t47_t323_t323_t47_t47_t47_t47_t323_t47_t33_t33_t33_t33_t323 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2824;
MethodInfo m2824_MI = 
{
	"INTERNAL_CALL_Populate_Internal_cpp", (methodPointerType)&m2824, &t228_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28_t28_t412_t47_t33_t47_t323_t323_t47_t47_t47_t47_t323_t47_t33_t33_t33_t33_t323, t228_m2824_ParameterInfos, &t228__CustomAttributeCache_m2824, 145, 4096, 255, 20, false, false, 1008, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t191_0_0_0;
extern void* RuntimeInvoker_t191 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m1889;
MethodInfo m1889_MI = 
{
	"get_rectExtents", (methodPointerType)&m1889, &t228_TI, &t191_0_0_0, RuntimeInvoker_t191, NULL, &t228__CustomAttributeCache_m1889, 2182, 4096, 255, 0, false, false, 1009, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2825;
MethodInfo m2825_MI = 
{
	"get_vertexCount", (methodPointerType)&m2825, &t228_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t228__CustomAttributeCache_m2825, 2182, 4096, 255, 0, false, false, 1010, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t228_m2826_ParameterInfos[] = 
{
	{"vertices", 0, 134218787, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2826;
MethodInfo m2826_MI = 
{
	"GetVerticesInternal", (methodPointerType)&m2826, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t228_m2826_ParameterInfos, &t228__CustomAttributeCache_m2826, 129, 4096, 255, 1, false, false, 1011, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t227_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2827;
MethodInfo m2827_MI = 
{
	"GetVerticesArray", (methodPointerType)&m2827, &t228_TI, &t227_0_0_0, RuntimeInvoker_t28, NULL, &t228__CustomAttributeCache_m2827, 134, 4096, 255, 0, false, false, 1012, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2828;
MethodInfo m2828_MI = 
{
	"get_characterCount", (methodPointerType)&m2828, &t228_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t228__CustomAttributeCache_m2828, 2182, 4096, 255, 0, false, false, 1013, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1863_MI = 
{
	"get_characterCountVisible", (methodPointerType)&m1863, &t228_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1014, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t228_m2829_ParameterInfos[] = 
{
	{"characters", 0, 134218788, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2829;
MethodInfo m2829_MI = 
{
	"GetCharactersInternal", (methodPointerType)&m2829, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t228_m2829_ParameterInfos, &t228__CustomAttributeCache_m2829, 129, 4096, 255, 1, false, false, 1015, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t538_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2830;
MethodInfo m2830_MI = 
{
	"GetCharactersArray", (methodPointerType)&m2830, &t228_TI, &t538_0_0_0, RuntimeInvoker_t28, NULL, &t228__CustomAttributeCache_m2830, 134, 4096, 255, 0, false, false, 1016, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m1862;
MethodInfo m1862_MI = 
{
	"get_lineCount", (methodPointerType)&m1862, &t228_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t228__CustomAttributeCache_m1862, 2182, 4096, 255, 0, false, false, 1017, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t228_m2831_ParameterInfos[] = 
{
	{"lines", 0, 134218789, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2831;
MethodInfo m2831_MI = 
{
	"GetLinesInternal", (methodPointerType)&m2831, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t228_m2831_ParameterInfos, &t228__CustomAttributeCache_m2831, 129, 4096, 255, 1, false, false, 1018, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t539_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m2832;
MethodInfo m2832_MI = 
{
	"GetLinesArray", (methodPointerType)&m2832, &t228_TI, &t539_0_0_0, RuntimeInvoker_t28, NULL, &t228__CustomAttributeCache_m2832, 134, 4096, 255, 0, false, false, 1019, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t228__CustomAttributeCache_m1915;
MethodInfo m1915_MI = 
{
	"get_fontSizeUsedForBestFit", (methodPointerType)&m1915, &t228_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t228__CustomAttributeCache_m1915, 2182, 4096, 255, 0, false, false, 1020, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2833_MI = 
{
	"Finalize", (methodPointerType)&m2833, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 196, 0, 1, 0, false, false, 1021, NULL, (methodPointerType)NULL};
extern Il2CppType t263_0_0_0;
static ParameterInfo t228_m2834_ParameterInfos[] = 
{
	{"settings", 0, 134218790, &EmptyCustomAttributesCache, &t263_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t263_0_0_0;
extern void* RuntimeInvoker_t263_t263 (MethodInfo* method, void* obj, void** args);
MethodInfo m2834_MI = 
{
	"ValidatedSettings", (methodPointerType)&m2834, &t228_TI, &t263_0_0_0, RuntimeInvoker_t263_t263, t228_m2834_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 1022, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2030_MI = 
{
	"Invalidate", (methodPointerType)&m2030, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1023, NULL, (methodPointerType)NULL};
extern Il2CppType t536_0_0_0;
static ParameterInfo t228_m2835_ParameterInfos[] = 
{
	{"characters", 0, 134218791, &EmptyCustomAttributesCache, &t536_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2835_MI = 
{
	"GetCharacters", (methodPointerType)&m2835, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t228_m2835_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1024, NULL, (methodPointerType)NULL};
extern Il2CppType t537_0_0_0;
static ParameterInfo t228_m2836_ParameterInfos[] = 
{
	{"lines", 0, 134218792, &EmptyCustomAttributesCache, &t537_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2836_MI = 
{
	"GetLines", (methodPointerType)&m2836, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t228_m2836_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1025, NULL, (methodPointerType)NULL};
extern Il2CppType t190_0_0_0;
static ParameterInfo t228_m2837_ParameterInfos[] = 
{
	{"vertices", 0, 134218793, &EmptyCustomAttributesCache, &t190_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2837_MI = 
{
	"GetVertices", (methodPointerType)&m2837, &t228_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t228_m2837_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1026, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t263_0_0_0;
static ParameterInfo t228_m2028_ParameterInfos[] = 
{
	{"str", 0, 134218794, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"settings", 1, 134218795, &EmptyCustomAttributesCache, &t263_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t28_t263 (MethodInfo* method, void* obj, void** args);
MethodInfo m2028_MI = 
{
	"GetPreferredWidth", (methodPointerType)&m2028, &t228_TI, &t33_0_0_0, RuntimeInvoker_t33_t28_t263, t228_m2028_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1027, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t263_0_0_0;
static ParameterInfo t228_m2029_ParameterInfos[] = 
{
	{"str", 0, 134218796, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"settings", 1, 134218797, &EmptyCustomAttributesCache, &t263_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33_t28_t263 (MethodInfo* method, void* obj, void** args);
MethodInfo m2029_MI = 
{
	"GetPreferredHeight", (methodPointerType)&m2029, &t228_TI, &t33_0_0_0, RuntimeInvoker_t33_t28_t263, t228_m2029_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1028, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t263_0_0_0;
static ParameterInfo t228_m1887_ParameterInfos[] = 
{
	{"str", 0, 134218798, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"settings", 1, 134218799, &EmptyCustomAttributesCache, &t263_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t263 (MethodInfo* method, void* obj, void** args);
MethodInfo m1887_MI = 
{
	"Populate", (methodPointerType)&m1887, &t228_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t263, t228_m1887_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1029, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t263_0_0_0;
static ParameterInfo t228_m2838_ParameterInfos[] = 
{
	{"str", 0, 134218800, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"settings", 1, 134218801, &EmptyCustomAttributesCache, &t263_0_0_0},
};
extern TypeInfo t228_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t263 (MethodInfo* method, void* obj, void** args);
MethodInfo m2838_MI = 
{
	"PopulateAlways", (methodPointerType)&m2838, &t228_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t263, t228_m2838_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 1030, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t413_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2032_MI = 
{
	"get_verts", (methodPointerType)&m2032, &t228_TI, &t413_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1031, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t399_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1864_MI = 
{
	"get_characters", (methodPointerType)&m1864, &t228_TI, &t399_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1032, NULL, (methodPointerType)NULL};
extern TypeInfo t228_TI;
extern Il2CppType t398_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1860_MI = 
{
	"get_lines", (methodPointerType)&m1860, &t228_TI, &t398_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1033, NULL, (methodPointerType)NULL};
static MethodInfo* t228_MIs[] =
{
	&m1823_MI,
	&m2021_MI,
	&m2819_MI,
	&m2820_MI,
	&m2821_MI,
	&m2822_MI,
	&m2823_MI,
	&m2824_MI,
	&m1889_MI,
	&m2825_MI,
	&m2826_MI,
	&m2827_MI,
	&m2828_MI,
	&m1863_MI,
	&m2829_MI,
	&m2830_MI,
	&m1862_MI,
	&m2831_MI,
	&m2832_MI,
	&m1915_MI,
	&m2833_MI,
	&m2834_MI,
	&m2030_MI,
	&m2835_MI,
	&m2836_MI,
	&m2837_MI,
	&m2028_MI,
	&m2029_MI,
	&m1887_MI,
	&m2838_MI,
	&m2032_MI,
	&m1864_MI,
	&m1860_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m2833_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m2819_MI;
static MethodInfo* t228_VT[] =
{
	&m204_MI,
	&m2833_MI,
	&m205_MI,
	&m206_MI,
	&m2819_MI,
};
extern TypeInfo t341_TI;
static TypeInfo* t228_ITIs[] = 
{
	&t341_TI,
};
extern TypeInfo t341_TI;
static Il2CppInterfaceOffsetPair t228_IOs[] = 
{
	{ &t341_TI, 4},
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2820(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2821(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2824(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m1889(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2825(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2826(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2827(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2828(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2829(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2830(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m1862(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2831(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m2832(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t228_CustomAttributesCacheGenerator_m1915(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t228__CustomAttributeCache_m2820 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2820
};
CustomAttributesCache t228__CustomAttributeCache_m2821 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2821
};
CustomAttributesCache t228__CustomAttributeCache_m2824 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2824
};
CustomAttributesCache t228__CustomAttributeCache_m1889 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m1889
};
CustomAttributesCache t228__CustomAttributeCache_m2825 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2825
};
CustomAttributesCache t228__CustomAttributeCache_m2826 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2826
};
CustomAttributesCache t228__CustomAttributeCache_m2827 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2827
};
CustomAttributesCache t228__CustomAttributeCache_m2828 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2828
};
CustomAttributesCache t228__CustomAttributeCache_m2829 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2829
};
CustomAttributesCache t228__CustomAttributeCache_m2830 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2830
};
CustomAttributesCache t228__CustomAttributeCache_m1862 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m1862
};
CustomAttributesCache t228__CustomAttributeCache_m2831 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2831
};
CustomAttributesCache t228__CustomAttributeCache_m2832 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m2832
};
CustomAttributesCache t228__CustomAttributeCache_m1915 = {
1,
NULL,
&t228_CustomAttributesCacheGenerator_m1915
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t228_0_0_0;
extern Il2CppType t228_1_0_0;
extern TypeInfo t28_TI;
struct t228;
extern TypeInfo t228_TI;
extern CustomAttributesCache t228__CustomAttributeCache_m2820;
extern CustomAttributesCache t228__CustomAttributeCache_m2821;
extern CustomAttributesCache t228__CustomAttributeCache_m2824;
extern CustomAttributesCache t228__CustomAttributeCache_m1889;
extern CustomAttributesCache t228__CustomAttributeCache_m2825;
extern CustomAttributesCache t228__CustomAttributeCache_m2826;
extern CustomAttributesCache t228__CustomAttributeCache_m2827;
extern CustomAttributesCache t228__CustomAttributeCache_m2828;
extern CustomAttributesCache t228__CustomAttributeCache_m2829;
extern CustomAttributesCache t228__CustomAttributeCache_m2830;
extern CustomAttributesCache t228__CustomAttributeCache_m1862;
extern CustomAttributesCache t228__CustomAttributeCache_m2831;
extern CustomAttributesCache t228__CustomAttributeCache_m2832;
extern CustomAttributesCache t228__CustomAttributeCache_m1915;
TypeInfo t228_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextGenerator", "UnityEngine", t228_MIs, t228_PIs, t228_FIs, NULL, &t28_TI, NULL, NULL, &t228_TI, t228_ITIs, t228_VT, &EmptyCustomAttributesCache, &t228_TI, &t228_0_0_0, &t228_1_0_0, t228_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t228), 0, -1, 0, 0, -1, 1048841, 0, false, false, false, false, false, false, false, false, false, true, false, false, false, 33, 9, 11, 0, 0, 5, 1, 1};
#include "t373.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t373_TI;
#include "t373MD.h"



// Metadata Definition UnityEngine.RenderMode
extern Il2CppType t47_0_0_1542;
FieldInfo t373_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t373_TI, offsetof(t373, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t373_0_0_32854;
FieldInfo t373_f2_FieldInfo = 
{
	"ScreenSpaceOverlay", &t373_0_0_32854, &t373_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t373_0_0_32854;
FieldInfo t373_f3_FieldInfo = 
{
	"ScreenSpaceCamera", &t373_0_0_32854, &t373_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t373_0_0_32854;
FieldInfo t373_f4_FieldInfo = 
{
	"WorldSpace", &t373_0_0_32854, &t373_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t373_FIs[] =
{
	&t373_f1_FieldInfo,
	&t373_f2_FieldInfo,
	&t373_f3_FieldInfo,
	&t373_f4_FieldInfo,
	NULL
};
static const int32_t t373_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t373_f2_DefaultValue = 
{
	&t373_f2_FieldInfo, { (char*)&t373_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t373_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t373_f3_DefaultValue = 
{
	&t373_f3_FieldInfo, { (char*)&t373_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t373_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t373_f4_DefaultValue = 
{
	&t373_f4_FieldInfo, { (char*)&t373_f4_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t373_FDVs[] = 
{
	&t373_f2_DefaultValue,
	&t373_f3_DefaultValue,
	&t373_f4_DefaultValue,
	NULL
};
static MethodInfo* t373_MIs[] =
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
static MethodInfo* t373_VT[] =
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
static Il2CppInterfaceOffsetPair t373_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t373_0_0_0;
extern Il2CppType t373_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t373_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RenderMode", "UnityEngine", t373_MIs, NULL, t373_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t373_VT, &EmptyCustomAttributesCache, &t47_TI, &t373_0_0_0, &t373_1_0_0, t373_IOs, NULL, NULL, t373_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t373)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t359.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t359_TI;
#include "t359MD.h"



extern MethodInfo m1642_MI;
 void m1642 (t359 * __this, t28 * p0, t49 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m2839_MI;
 void m2839 (t359 * __this, MethodInfo* method){
	typedef  void (*FunctionPointerType) (t28 * __this, MethodInfo* method);
	if (__this->f9)
		m2839((t359 *)__this->f9 , method);
	((FunctionPointerType)__this->f0)(__this->f2, (MethodInfo*)(__this->f3.f0));
}
void pinvoke_delegate_wrapper_t359(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m2840_MI;
 t28 * m2840 (t359 * __this, t91 * p0, t28 * p1, MethodInfo* method){
	void *__d_args[1] = {0};
	return (t28 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m2841_MI;
 void m2841 (t359 * __this, t28 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition UnityEngine.Canvas/WillRenderCanvases
extern Il2CppType t28_0_0_0;
extern Il2CppType t49_0_0_0;
static ParameterInfo t359_m1642_ParameterInfos[] = 
{
	{"object", 0, 134218806, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218807, &EmptyCustomAttributesCache, &t49_0_0_0},
};
extern TypeInfo t359_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t49 (MethodInfo* method, void* obj, void** args);
MethodInfo m1642_MI = 
{
	".ctor", (methodPointerType)&m1642, &t359_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t49, t359_m1642_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 1051, NULL, (methodPointerType)NULL};
extern TypeInfo t359_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2839_MI = 
{
	"Invoke", (methodPointerType)&m2839, &t359_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 1052, NULL, (methodPointerType)NULL};
extern Il2CppType t91_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t359_m2840_ParameterInfos[] = 
{
	{"callback", 0, 134218808, &EmptyCustomAttributesCache, &t91_0_0_0},
	{"object", 1, 134218809, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t359_TI;
extern Il2CppType t90_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2840_MI = 
{
	"BeginInvoke", (methodPointerType)&m2840, &t359_TI, &t90_0_0_0, RuntimeInvoker_t28_t28_t28, t359_m2840_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 1053, NULL, (methodPointerType)NULL};
extern Il2CppType t90_0_0_0;
static ParameterInfo t359_m2841_ParameterInfos[] = 
{
	{"result", 0, 134218810, &EmptyCustomAttributesCache, &t90_0_0_0},
};
extern TypeInfo t359_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2841_MI = 
{
	"EndInvoke", (methodPointerType)&m2841, &t359_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t359_m2841_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 1054, NULL, (methodPointerType)NULL};
static MethodInfo* t359_MIs[] =
{
	&m1642_MI,
	&m2839_MI,
	&m2840_MI,
	&m2841_MI,
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
extern MethodInfo m2839_MI;
extern MethodInfo m2840_MI;
extern MethodInfo m2841_MI;
static MethodInfo* t359_VT[] =
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
	&m2839_MI,
	&m2840_MI,
	&m2841_MI,
};
extern TypeInfo t385_TI;
extern TypeInfo t386_TI;
static Il2CppInterfaceOffsetPair t359_IOs[] = 
{
	{ &t385_TI, 4},
	{ &t386_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t359_0_0_0;
extern Il2CppType t359_1_0_0;
extern TypeInfo t221_TI;
struct t359;
extern TypeInfo t359_TI;
extern TypeInfo t185_TI;
TypeInfo t359_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WillRenderCanvases", "", t359_MIs, NULL, NULL, NULL, &t221_TI, NULL, &t185_TI, &t359_TI, NULL, t359_VT, &EmptyCustomAttributesCache, &t359_TI, &t359_0_0_0, &t359_1_0_0, t359_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t359, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t359), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t185.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t185_TI;
#include "t185MD.h"

#include "t38.h"
extern TypeInfo t185_TI;
extern TypeInfo t359_TI;
extern TypeInfo t30_TI;
extern MethodInfo m1714_MI;
extern MethodInfo m1715_MI;
extern MethodInfo m2839_MI;
extern MethodInfo m2843_MI;


extern MethodInfo m1643_MI;
 void m1643 (t28 * __this, t359 * p0, MethodInfo* method){
	{
		t365 * L_0 = m1714(NULL, (((t185_SFs*)InitializedTypeInfo(&t185_TI)->static_fields)->f2), p0, &m1714_MI);
		((t185_SFs*)InitializedTypeInfo(&t185_TI)->static_fields)->f2 = ((t359 *)Castclass(L_0, InitializedTypeInfo(&t359_TI)));
		return;
	}
}
extern MethodInfo m2842_MI;
 void m2842 (t28 * __this, t359 * p0, MethodInfo* method){
	{
		t365 * L_0 = m1715(NULL, (((t185_SFs*)InitializedTypeInfo(&t185_TI)->static_fields)->f2), p0, &m1715_MI);
		((t185_SFs*)InitializedTypeInfo(&t185_TI)->static_fields)->f2 = ((t359 *)Castclass(L_0, InitializedTypeInfo(&t359_TI)));
		return;
	}
}
extern MethodInfo m1722_MI;
 int32_t m1722 (t185 * __this, MethodInfo* method){
	typedef int32_t (*m1722_ftn) (t185 *);
	static m1722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2055_MI;
 bool m2055 (t185 * __this, MethodInfo* method){
	typedef bool (*m2055_ftn) (t185 *);
	static m2055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1726_MI;
 t38 * m1726 (t185 * __this, MethodInfo* method){
	typedef t38 * (*m1726_ftn) (t185 *);
	static m1726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2026_MI;
 float m2026 (t185 * __this, MethodInfo* method){
	typedef float (*m2026_ftn) (t185 *);
	static m2026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2026_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2059_MI;
 void m2059 (t185 * __this, float p0, MethodInfo* method){
	typedef void (*m2059_ftn) (t185 *, float);
	static m2059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1762_MI;
 float m1762 (t185 * __this, MethodInfo* method){
	typedef float (*m1762_ftn) (t185 *);
	static m1762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2060_MI;
 void m2060 (t185 * __this, float p0, MethodInfo* method){
	typedef void (*m2060_ftn) (t185 *, float);
	static m2060_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2060_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1706_MI;
 bool m1706 (t185 * __this, MethodInfo* method){
	typedef bool (*m1706_ftn) (t185 *);
	static m1706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1724_MI;
 int32_t m1724 (t185 * __this, MethodInfo* method){
	typedef int32_t (*m1724_ftn) (t185 *);
	static m1724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1723_MI;
 int32_t m1723 (t185 * __this, MethodInfo* method){
	typedef int32_t (*m1723_ftn) (t185 *);
	static m1723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1737_MI;
 int32_t m1737 (t185 * __this, MethodInfo* method){
	typedef int32_t (*m1737_ftn) (t185 *);
	static m1737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1669_MI;
 t39 * m1669 (t28 * __this, MethodInfo* method){
	typedef t39 * (*m1669_ftn) ();
	static m1669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2022_MI;
 t39 * m2022 (t28 * __this, MethodInfo* method){
	typedef t39 * (*m2022_ftn) ();
	static m2022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2843_MI;
 void m2843 (t28 * __this, MethodInfo* method){
	{
		if (!(((t185_SFs*)InitializedTypeInfo(&t185_TI)->static_fields)->f2))
		{
			goto IL_0014;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m2839_MI, (((t185_SFs*)InitializedTypeInfo(&t185_TI)->static_fields)->f2));
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m1959_MI;
 void m1959 (t28 * __this, MethodInfo* method){
	{
		m2843(NULL, &m2843_MI);
		return;
	}
}
// Metadata Definition UnityEngine.Canvas
extern Il2CppType t359_0_0_17;
FieldInfo t185_f2_FieldInfo = 
{
	"willRenderCanvases", &t359_0_0_17, &t185_TI, offsetof(t185_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t185_FIs[] =
{
	&t185_f2_FieldInfo,
	NULL
};
extern MethodInfo m1722_MI;
static PropertyInfo t185____renderMode_PropertyInfo = 
{
	&t185_TI, "renderMode", &m1722_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2055_MI;
static PropertyInfo t185____isRootCanvas_PropertyInfo = 
{
	&t185_TI, "isRootCanvas", &m2055_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1726_MI;
static PropertyInfo t185____worldCamera_PropertyInfo = 
{
	&t185_TI, "worldCamera", &m1726_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2026_MI;
extern MethodInfo m2059_MI;
static PropertyInfo t185____scaleFactor_PropertyInfo = 
{
	&t185_TI, "scaleFactor", &m2026_MI, &m2059_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1762_MI;
extern MethodInfo m2060_MI;
static PropertyInfo t185____referencePixelsPerUnit_PropertyInfo = 
{
	&t185_TI, "referencePixelsPerUnit", &m1762_MI, &m2060_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1706_MI;
static PropertyInfo t185____pixelPerfect_PropertyInfo = 
{
	&t185_TI, "pixelPerfect", &m1706_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1724_MI;
static PropertyInfo t185____renderOrder_PropertyInfo = 
{
	&t185_TI, "renderOrder", &m1724_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1723_MI;
static PropertyInfo t185____sortingOrder_PropertyInfo = 
{
	&t185_TI, "sortingOrder", &m1723_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1737_MI;
static PropertyInfo t185____sortingLayerID_PropertyInfo = 
{
	&t185_TI, "sortingLayerID", &m1737_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t185_PIs[] =
{
	&t185____renderMode_PropertyInfo,
	&t185____isRootCanvas_PropertyInfo,
	&t185____worldCamera_PropertyInfo,
	&t185____scaleFactor_PropertyInfo,
	&t185____referencePixelsPerUnit_PropertyInfo,
	&t185____pixelPerfect_PropertyInfo,
	&t185____renderOrder_PropertyInfo,
	&t185____sortingOrder_PropertyInfo,
	&t185____sortingLayerID_PropertyInfo,
	NULL
};
extern Il2CppType t359_0_0_0;
extern MethodInfo m1643_MI;
extern MethodInfo m2842_MI;
static EventInfo t185____willRenderCanvases_EventInfo = 
{
	"willRenderCanvases", &t359_0_0_0, &t185_TI, &m1643_MI, &m2842_MI, NULL, &EmptyCustomAttributesCache};
static EventInfo* t185__EventInfos[] =
{
	&t185____willRenderCanvases_EventInfo,
	NULL
};
extern Il2CppType t359_0_0_0;
static ParameterInfo t185_m1643_ParameterInfos[] = 
{
	{"value", 0, 134218802, &EmptyCustomAttributesCache, &t359_0_0_0},
};
extern TypeInfo t185_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1643_MI = 
{
	"add_willRenderCanvases", (methodPointerType)&m1643, &t185_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t185_m1643_ParameterInfos, &EmptyCustomAttributesCache, 2198, 32, 255, 1, false, false, 1034, NULL, (methodPointerType)NULL};
extern Il2CppType t359_0_0_0;
static ParameterInfo t185_m2842_ParameterInfos[] = 
{
	{"value", 0, 134218803, &EmptyCustomAttributesCache, &t359_0_0_0},
};
extern TypeInfo t185_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2842_MI = 
{
	"remove_willRenderCanvases", (methodPointerType)&m2842, &t185_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t185_m2842_ParameterInfos, &EmptyCustomAttributesCache, 2198, 32, 255, 1, false, false, 1035, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t373_0_0_0;
extern void* RuntimeInvoker_t373 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1722;
MethodInfo m1722_MI = 
{
	"get_renderMode", (methodPointerType)&m1722, &t185_TI, &t373_0_0_0, RuntimeInvoker_t373, NULL, &t185__CustomAttributeCache_m1722, 2182, 4096, 255, 0, false, false, 1036, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m2055;
MethodInfo m2055_MI = 
{
	"get_isRootCanvas", (methodPointerType)&m2055, &t185_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t185__CustomAttributeCache_m2055, 2182, 4096, 255, 0, false, false, 1037, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t38_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1726;
MethodInfo m1726_MI = 
{
	"get_worldCamera", (methodPointerType)&m1726, &t185_TI, &t38_0_0_0, RuntimeInvoker_t28, NULL, &t185__CustomAttributeCache_m1726, 2182, 4096, 255, 0, false, false, 1038, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m2026;
MethodInfo m2026_MI = 
{
	"get_scaleFactor", (methodPointerType)&m2026, &t185_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &t185__CustomAttributeCache_m2026, 2182, 4096, 255, 0, false, false, 1039, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t185_m2059_ParameterInfos[] = 
{
	{"value", 0, 134218804, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t185_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m2059;
MethodInfo m2059_MI = 
{
	"set_scaleFactor", (methodPointerType)&m2059, &t185_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t185_m2059_ParameterInfos, &t185__CustomAttributeCache_m2059, 2182, 4096, 255, 1, false, false, 1040, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1762;
MethodInfo m1762_MI = 
{
	"get_referencePixelsPerUnit", (methodPointerType)&m1762, &t185_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &t185__CustomAttributeCache_m1762, 2182, 4096, 255, 0, false, false, 1041, NULL, (methodPointerType)NULL};
extern Il2CppType t33_0_0_0;
static ParameterInfo t185_m2060_ParameterInfos[] = 
{
	{"value", 0, 134218805, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t185_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m2060;
MethodInfo m2060_MI = 
{
	"set_referencePixelsPerUnit", (methodPointerType)&m2060, &t185_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t185_m2060_ParameterInfos, &t185__CustomAttributeCache_m2060, 2182, 4096, 255, 1, false, false, 1042, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1706;
MethodInfo m1706_MI = 
{
	"get_pixelPerfect", (methodPointerType)&m1706, &t185_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t185__CustomAttributeCache_m1706, 2182, 4096, 255, 0, false, false, 1043, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1724;
MethodInfo m1724_MI = 
{
	"get_renderOrder", (methodPointerType)&m1724, &t185_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t185__CustomAttributeCache_m1724, 2182, 4096, 255, 0, false, false, 1044, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1723;
MethodInfo m1723_MI = 
{
	"get_sortingOrder", (methodPointerType)&m1723, &t185_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t185__CustomAttributeCache_m1723, 2182, 4096, 255, 0, false, false, 1045, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1737;
MethodInfo m1737_MI = 
{
	"get_sortingLayerID", (methodPointerType)&m1737, &t185_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t185__CustomAttributeCache_m1737, 2182, 4096, 255, 0, false, false, 1046, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t39_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m1669;
MethodInfo m1669_MI = 
{
	"GetDefaultCanvasMaterial", (methodPointerType)&m1669, &t185_TI, &t39_0_0_0, RuntimeInvoker_t28, NULL, &t185__CustomAttributeCache_m1669, 150, 4096, 255, 0, false, false, 1047, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t39_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t185__CustomAttributeCache_m2022;
MethodInfo m2022_MI = 
{
	"GetDefaultCanvasTextMaterial", (methodPointerType)&m2022, &t185_TI, &t39_0_0_0, RuntimeInvoker_t28, NULL, &t185__CustomAttributeCache_m2022, 150, 4096, 255, 0, false, false, 1048, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2843_MI = 
{
	"SendWillRenderCanvases", (methodPointerType)&m2843, &t185_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 1049, NULL, (methodPointerType)NULL};
extern TypeInfo t185_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1959_MI = 
{
	"ForceUpdateCanvases", (methodPointerType)&m1959, &t185_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 1050, NULL, (methodPointerType)NULL};
static MethodInfo* t185_MIs[] =
{
	&m1643_MI,
	&m2842_MI,
	&m1722_MI,
	&m2055_MI,
	&m1726_MI,
	&m2026_MI,
	&m2059_MI,
	&m1762_MI,
	&m2060_MI,
	&m1706_MI,
	&m1724_MI,
	&m1723_MI,
	&m1737_MI,
	&m1669_MI,
	&m2022_MI,
	&m2843_MI,
	&m1959_MI,
	NULL
};
extern TypeInfo t359_TI;
static TypeInfo* t185_TI__nestedTypes[2] =
{
	&t359_TI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t185_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1722(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m2055(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1726(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m2026(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m2059(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1762(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m2060(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1706(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1724(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1723(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1737(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m1669(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t185_CustomAttributesCacheGenerator_m2022(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t185__CustomAttributeCache_m1722 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1722
};
CustomAttributesCache t185__CustomAttributeCache_m2055 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m2055
};
CustomAttributesCache t185__CustomAttributeCache_m1726 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1726
};
CustomAttributesCache t185__CustomAttributeCache_m2026 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m2026
};
CustomAttributesCache t185__CustomAttributeCache_m2059 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m2059
};
CustomAttributesCache t185__CustomAttributeCache_m1762 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1762
};
CustomAttributesCache t185__CustomAttributeCache_m2060 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m2060
};
CustomAttributesCache t185__CustomAttributeCache_m1706 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1706
};
CustomAttributesCache t185__CustomAttributeCache_m1724 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1724
};
CustomAttributesCache t185__CustomAttributeCache_m1723 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1723
};
CustomAttributesCache t185__CustomAttributeCache_m1737 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1737
};
CustomAttributesCache t185__CustomAttributeCache_m1669 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m1669
};
CustomAttributesCache t185__CustomAttributeCache_m2022 = {
1,
NULL,
&t185_CustomAttributesCacheGenerator_m2022
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t185_0_0_0;
extern Il2CppType t185_1_0_0;
extern TypeInfo t334_TI;
struct t185;
extern TypeInfo t185_TI;
extern CustomAttributesCache t185__CustomAttributeCache_m1722;
extern CustomAttributesCache t185__CustomAttributeCache_m2055;
extern CustomAttributesCache t185__CustomAttributeCache_m1726;
extern CustomAttributesCache t185__CustomAttributeCache_m2026;
extern CustomAttributesCache t185__CustomAttributeCache_m2059;
extern CustomAttributesCache t185__CustomAttributeCache_m1762;
extern CustomAttributesCache t185__CustomAttributeCache_m2060;
extern CustomAttributesCache t185__CustomAttributeCache_m1706;
extern CustomAttributesCache t185__CustomAttributeCache_m1724;
extern CustomAttributesCache t185__CustomAttributeCache_m1723;
extern CustomAttributesCache t185__CustomAttributeCache_m1737;
extern CustomAttributesCache t185__CustomAttributeCache_m1669;
extern CustomAttributesCache t185__CustomAttributeCache_m2022;
TypeInfo t185_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "Canvas", "UnityEngine", t185_MIs, t185_PIs, t185_FIs, t185__EventInfos, &t334_TI, t185_TI__nestedTypes, NULL, &t185_TI, NULL, t185_VT, &EmptyCustomAttributesCache, &t185_TI, &t185_0_0_0, &t185_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t185), 0, -1, sizeof(t185_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 17, 9, 1, 1, 1, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t369_TI;



// Metadata Definition UnityEngine.ICanvasRaycastFilter
extern Il2CppType t59_0_0_0;
extern Il2CppType t38_0_0_0;
static ParameterInfo t369_m1705_ParameterInfos[] = 
{
	{"sp", 0, 134218811, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"eventCamera", 1, 134218812, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern TypeInfo t369_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t59_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1705_MI = 
{
	"IsRaycastLocationValid", NULL, &t369_TI, &t31_0_0_0, RuntimeInvoker_t31_t59_t28, t369_m1705_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 2, false, false, 1055, NULL, (methodPointerType)NULL};
static MethodInfo* t369_MIs[] =
{
	&m1705_MI,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t369_0_0_0;
extern Il2CppType t369_1_0_0;
struct t369;
extern TypeInfo t369_TI;
TypeInfo t369_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ICanvasRaycastFilter", "UnityEngine", t369_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t369_TI, NULL, NULL, &EmptyCustomAttributesCache, &t369_TI, &t369_0_0_0, &t369_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 0, 0, 0};
#include "t364.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t364_TI;
#include "t364MD.h"

extern MethodInfo m2844_MI;


extern MethodInfo m1990_MI;
 bool m1990 (t364 * __this, MethodInfo* method){
	typedef bool (*m1990_ftn) (t364 *);
	static m1990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2844_MI;
 bool m2844 (t364 * __this, MethodInfo* method){
	typedef bool (*m2844_ftn) (t364 *);
	static m2844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1704_MI;
 bool m1704 (t364 * __this, MethodInfo* method){
	typedef bool (*m1704_ftn) (t364 *);
	static m1704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2845_MI;
 bool m2845 (t364 * __this, t59  p0, t38 * p1, MethodInfo* method){
	{
		bool L_0 = m2844(__this, &m2844_MI);
		return L_0;
	}
}
// Metadata Definition UnityEngine.CanvasGroup
extern MethodInfo m1990_MI;
static PropertyInfo t364____interactable_PropertyInfo = 
{
	&t364_TI, "interactable", &m1990_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2844_MI;
static PropertyInfo t364____blocksRaycasts_PropertyInfo = 
{
	&t364_TI, "blocksRaycasts", &m2844_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1704_MI;
static PropertyInfo t364____ignoreParentGroups_PropertyInfo = 
{
	&t364_TI, "ignoreParentGroups", &m1704_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t364_PIs[] =
{
	&t364____interactable_PropertyInfo,
	&t364____blocksRaycasts_PropertyInfo,
	&t364____ignoreParentGroups_PropertyInfo,
	NULL
};
extern TypeInfo t364_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t364__CustomAttributeCache_m1990;
MethodInfo m1990_MI = 
{
	"get_interactable", (methodPointerType)&m1990, &t364_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t364__CustomAttributeCache_m1990, 2182, 4096, 255, 0, false, false, 1056, NULL, (methodPointerType)NULL};
extern TypeInfo t364_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t364__CustomAttributeCache_m2844;
MethodInfo m2844_MI = 
{
	"get_blocksRaycasts", (methodPointerType)&m2844, &t364_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t364__CustomAttributeCache_m2844, 2182, 4096, 255, 0, false, false, 1057, NULL, (methodPointerType)NULL};
extern TypeInfo t364_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t364__CustomAttributeCache_m1704;
MethodInfo m1704_MI = 
{
	"get_ignoreParentGroups", (methodPointerType)&m1704, &t364_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &t364__CustomAttributeCache_m1704, 2182, 4096, 255, 0, false, false, 1058, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t38_0_0_0;
static ParameterInfo t364_m2845_ParameterInfos[] = 
{
	{"sp", 0, 134218813, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"eventCamera", 1, 134218814, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern TypeInfo t364_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t59_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2845_MI = 
{
	"IsRaycastLocationValid", (methodPointerType)&m2845, &t364_TI, &t31_0_0_0, RuntimeInvoker_t31_t59_t28, t364_m2845_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 1059, NULL, (methodPointerType)NULL};
static MethodInfo* t364_MIs[] =
{
	&m1990_MI,
	&m2844_MI,
	&m1704_MI,
	&m2845_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
extern MethodInfo m2845_MI;
static MethodInfo* t364_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
	&m2845_MI,
};
extern TypeInfo t369_TI;
static TypeInfo* t364_ITIs[] = 
{
	&t369_TI,
};
extern TypeInfo t369_TI;
static Il2CppInterfaceOffsetPair t364_IOs[] = 
{
	{ &t369_TI, 4},
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t364_CustomAttributesCacheGenerator_m1990(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t364_CustomAttributesCacheGenerator_m2844(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t364_CustomAttributesCacheGenerator_m1704(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t364__CustomAttributeCache_m1990 = {
1,
NULL,
&t364_CustomAttributesCacheGenerator_m1990
};
CustomAttributesCache t364__CustomAttributeCache_m2844 = {
1,
NULL,
&t364_CustomAttributesCacheGenerator_m2844
};
CustomAttributesCache t364__CustomAttributeCache_m1704 = {
1,
NULL,
&t364_CustomAttributesCacheGenerator_m1704
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t364_0_0_0;
extern Il2CppType t364_1_0_0;
extern TypeInfo t35_TI;
struct t364;
extern TypeInfo t364_TI;
extern CustomAttributesCache t364__CustomAttributeCache_m1990;
extern CustomAttributesCache t364__CustomAttributeCache_m2844;
extern CustomAttributesCache t364__CustomAttributeCache_m1704;
TypeInfo t364_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CanvasGroup", "UnityEngine", t364_MIs, t364_PIs, NULL, NULL, &t35_TI, NULL, NULL, &t364_TI, t364_ITIs, t364_VT, &EmptyCustomAttributesCache, &t364_TI, &t364_0_0_0, &t364_1_0_0, t364_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t364), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 4, 3, 0, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t210_TI;
#include "t210MD.h"

#include "t313.h"
#include "t360.h"
#include "t209.h"
extern TypeInfo t313_TI;
extern TypeInfo t210_TI;
extern TypeInfo t209_TI;
#include "t313MD.h"
#include "t209MD.h"
extern MethodInfo m1655_MI;
extern MethodInfo m1699_MI;
extern MethodInfo m137_MI;
extern MethodInfo m2438_MI;
extern MethodInfo m1518_MI;


extern MethodInfo m2846_MI;
 void m2846 (t28 * __this, MethodInfo* method){
	t210  V_0 = {0};
	{
		t313  L_0 = {0};
		m1655(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), &m1655_MI);
		((t210_SFs*)InitializedTypeInfo(&t210_TI)->static_fields)->f6 = L_0;
		t209  L_1 = {0};
		m1699(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), &m1699_MI);
		((t210_SFs*)InitializedTypeInfo(&t210_TI)->static_fields)->f7 = L_1;
		Initobj (&t210_TI, (&V_0));
		t11  L_2 = m137(NULL, &m137_MI);
		(&V_0)->f0 = L_2;
		t11  L_3 = m2438(NULL, &m2438_MI);
		(&V_0)->f1 = L_3;
		(&V_0)->f5 = (((t210_SFs*)InitializedTypeInfo(&t210_TI)->static_fields)->f7);
		(&V_0)->f2 = (((t210_SFs*)InitializedTypeInfo(&t210_TI)->static_fields)->f6);
		t59  L_4 = m1518(NULL, &m1518_MI);
		(&V_0)->f3 = L_4;
		t59  L_5 = m1518(NULL, &m1518_MI);
		(&V_0)->f4 = L_5;
		((t210_SFs*)InitializedTypeInfo(&t210_TI)->static_fields)->f8 = V_0;
		return;
	}
}
// Metadata Definition UnityEngine.UIVertex
extern Il2CppType t11_0_0_6;
FieldInfo t210_f0_FieldInfo = 
{
	"position", &t11_0_0_6, &t210_TI, offsetof(t210, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t210_f1_FieldInfo = 
{
	"normal", &t11_0_0_6, &t210_TI, offsetof(t210, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t313_0_0_6;
FieldInfo t210_f2_FieldInfo = 
{
	"color", &t313_0_0_6, &t210_TI, offsetof(t210, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t210_f3_FieldInfo = 
{
	"uv0", &t59_0_0_6, &t210_TI, offsetof(t210, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t210_f4_FieldInfo = 
{
	"uv1", &t59_0_0_6, &t210_TI, offsetof(t210, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t209_0_0_6;
FieldInfo t210_f5_FieldInfo = 
{
	"tangent", &t209_0_0_6, &t210_TI, offsetof(t210, f5) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t313_0_0_49;
FieldInfo t210_f6_FieldInfo = 
{
	"s_DefaultColor", &t313_0_0_49, &t210_TI, offsetof(t210_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t209_0_0_49;
FieldInfo t210_f7_FieldInfo = 
{
	"s_DefaultTangent", &t209_0_0_49, &t210_TI, offsetof(t210_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t210_0_0_22;
FieldInfo t210_f8_FieldInfo = 
{
	"simpleVert", &t210_0_0_22, &t210_TI, offsetof(t210_SFs, f8), &EmptyCustomAttributesCache};
static FieldInfo* t210_FIs[] =
{
	&t210_f0_FieldInfo,
	&t210_f1_FieldInfo,
	&t210_f2_FieldInfo,
	&t210_f3_FieldInfo,
	&t210_f4_FieldInfo,
	&t210_f5_FieldInfo,
	&t210_f6_FieldInfo,
	&t210_f7_FieldInfo,
	&t210_f8_FieldInfo,
	NULL
};
extern TypeInfo t210_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2846_MI = 
{
	".cctor", (methodPointerType)&m2846, &t210_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 1060, NULL, (methodPointerType)NULL};
static MethodInfo* t210_MIs[] =
{
	&m2846_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t210_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t210_0_0_0;
extern Il2CppType t210_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t210_TI;
TypeInfo t210_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UIVertex", "UnityEngine", t210_MIs, NULL, t210_FIs, NULL, &t26_TI, NULL, NULL, &t210_TI, NULL, t210_VT, &EmptyCustomAttributesCache, &t210_TI, &t210_0_0_0, &t210_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t210)+ sizeof (Il2CppObject), 0, sizeof(t210 ), sizeof(t210_SFs), 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, true, true, true, 1, 0, 9, 0, 0, 4, 0, 0};
#include "t184.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t184_TI;
#include "t184MD.h"

#include "t189.h"
#include "t623.h"
extern TypeInfo t190_TI;
extern TypeInfo t47_TI;
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t623_TI;
extern TypeInfo t30_TI;
#include "t502MD.h"
extern MethodInfo m2847_MI;
extern MethodInfo m1899_MI;
extern MethodInfo m2589_MI;
extern MethodInfo m2013_MI;
extern MethodInfo m1718_MI;
extern MethodInfo m2848_MI;
extern MethodInfo m2849_MI;


extern MethodInfo m1711_MI;
 void m1711 (t184 * __this, t20  p0, MethodInfo* method){
	{
		m2847(NULL, __this, (&p0), &m2847_MI);
		return;
	}
}
extern MethodInfo m2847_MI;
 void m2847 (t28 * __this, t184 * p0, t20 * p1, MethodInfo* method){
	typedef void (*m2847_ftn) (t184 *, t20 *);
	static m2847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1709_MI;
 t20  m1709 (t184 * __this, MethodInfo* method){
	typedef t20  (*m1709_ftn) (t184 *);
	static m1709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2112_MI;
 void m2112 (t184 * __this, bool p0, MethodInfo* method){
	typedef void (*m2112_ftn) (t184 *, bool);
	static m2112_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2112_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1696_MI;
 void m1696 (t184 * __this, t39 * p0, t189 * p1, MethodInfo* method){
	typedef void (*m1696_ftn) (t184 *, t39 *, t189 *);
	static m1696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m1694_MI;
 void m1694 (t184 * __this, t190 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m1899_MI, p0);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		t333* L_1 = ((t333*)SZArrayNew(InitializedTypeInfo(&t333_TI), 1));
		uint16_t L_2 = ((int32_t)65535);
		t28 * L_3 = Box(InitializedTypeInfo(&t623_TI), &L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t28 **)(t28 **)SZArrayLdElema(L_1, 0)) = (t28 *)L_3;
		t18* L_4 = m2589(NULL, (t18*) &_stringLiteral158, L_1, &m2589_MI);
		m2013(NULL, L_4, __this, &m2013_MI);
		VirtActionInvoker0::Invoke(&m1718_MI, p0);
	}

IL_0039:
	{
		m2848(__this, p0, &m2848_MI);
		return;
	}
}
extern MethodInfo m2848_MI;
 void m2848 (t184 * __this, t28 * p0, MethodInfo* method){
	typedef void (*m2848_ftn) (t184 *, t28 *);
	static m2848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1851_MI;
 void m1851 (t184 * __this, t227* p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		t333* L_0 = ((t333*)SZArrayNew(InitializedTypeInfo(&t333_TI), 1));
		uint16_t L_1 = ((int32_t)65535);
		t28 * L_2 = Box(InitializedTypeInfo(&t623_TI), &L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((t28 **)(t28 **)SZArrayLdElema(L_0, 0)) = (t28 *)L_2;
		t18* L_3 = m2589(NULL, (t18*) &_stringLiteral158, L_0, &m2589_MI);
		m2013(NULL, L_3, __this, &m2013_MI);
		p1 = 0;
	}

IL_0031:
	{
		m2849(__this, p0, p1, &m2849_MI);
		return;
	}
}
extern MethodInfo m2849_MI;
 void m2849 (t184 * __this, t227* p0, int32_t p1, MethodInfo* method){
	typedef void (*m2849_ftn) (t184 *, t227*, int32_t);
	static m2849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m1687_MI;
 void m1687 (t184 * __this, MethodInfo* method){
	typedef void (*m1687_ftn) (t184 *);
	static m1687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m1670_MI;
 int32_t m1670 (t184 * __this, MethodInfo* method){
	typedef int32_t (*m1670_ftn) (t184 *);
	static m1670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// Metadata Definition UnityEngine.CanvasRenderer
extern MethodInfo m2112_MI;
static PropertyInfo t184____isMask_PropertyInfo = 
{
	&t184_TI, "isMask", NULL, &m2112_MI, 0, &EmptyCustomAttributesCache};
extern MethodInfo m1670_MI;
static PropertyInfo t184____absoluteDepth_PropertyInfo = 
{
	&t184_TI, "absoluteDepth", &m1670_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t184_PIs[] =
{
	&t184____isMask_PropertyInfo,
	&t184____absoluteDepth_PropertyInfo,
	NULL
};
extern Il2CppType t20_0_0_0;
static ParameterInfo t184_m1711_ParameterInfos[] = 
{
	{"color", 0, 134218815, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m1711_MI = 
{
	"SetColor", (methodPointerType)&m1711, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t20, t184_m1711_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1061, NULL, (methodPointerType)NULL};
extern Il2CppType t184_0_0_0;
extern Il2CppType t20_1_0_0;
static ParameterInfo t184_m2847_ParameterInfos[] = 
{
	{"self", 0, 134218816, &EmptyCustomAttributesCache, &t184_0_0_0},
	{"color", 1, 134218817, &EmptyCustomAttributesCache, &t20_1_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t412 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m2847;
MethodInfo m2847_MI = 
{
	"INTERNAL_CALL_SetColor", (methodPointerType)&m2847, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t412, t184_m2847_ParameterInfos, &t184__CustomAttributeCache_m2847, 145, 4096, 255, 2, false, false, 1062, NULL, (methodPointerType)NULL};
extern TypeInfo t184_TI;
extern Il2CppType t20_0_0_0;
extern void* RuntimeInvoker_t20 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m1709;
MethodInfo m1709_MI = 
{
	"GetColor", (methodPointerType)&m1709, &t184_TI, &t20_0_0_0, RuntimeInvoker_t20, NULL, &t184__CustomAttributeCache_m1709, 134, 4096, 255, 0, false, false, 1063, NULL, (methodPointerType)NULL};
extern Il2CppType t31_0_0_0;
static ParameterInfo t184_m2112_ParameterInfos[] = 
{
	{"value", 0, 134218818, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t323 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m2112;
MethodInfo m2112_MI = 
{
	"set_isMask", (methodPointerType)&m2112, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t323, t184_m2112_ParameterInfos, &t184__CustomAttributeCache_m2112, 2182, 4096, 255, 1, false, false, 1064, NULL, (methodPointerType)NULL};
extern Il2CppType t39_0_0_0;
extern Il2CppType t189_0_0_0;
static ParameterInfo t184_m1696_ParameterInfos[] = 
{
	{"material", 0, 134218819, &EmptyCustomAttributesCache, &t39_0_0_0},
	{"texture", 1, 134218820, &EmptyCustomAttributesCache, &t189_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m1696;
MethodInfo m1696_MI = 
{
	"SetMaterial", (methodPointerType)&m1696, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t184_m1696_ParameterInfos, &t184__CustomAttributeCache_m1696, 134, 4096, 255, 2, false, false, 1065, NULL, (methodPointerType)NULL};
extern Il2CppType t190_0_0_0;
static ParameterInfo t184_m1694_ParameterInfos[] = 
{
	{"vertices", 0, 134218821, &EmptyCustomAttributesCache, &t190_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1694_MI = 
{
	"SetVertices", (methodPointerType)&m1694, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t184_m1694_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1066, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t184_m2848_ParameterInfos[] = 
{
	{"vertices", 0, 134218822, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m2848;
MethodInfo m2848_MI = 
{
	"SetVerticesInternal", (methodPointerType)&m2848, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t184_m2848_ParameterInfos, &t184__CustomAttributeCache_m2848, 129, 4096, 255, 1, false, false, 1067, NULL, (methodPointerType)NULL};
extern Il2CppType t227_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t184_m1851_ParameterInfos[] = 
{
	{"vertices", 0, 134218823, &EmptyCustomAttributesCache, &t227_0_0_0},
	{"size", 1, 134218824, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1851_MI = 
{
	"SetVertices", (methodPointerType)&m1851, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t184_m1851_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1068, NULL, (methodPointerType)NULL};
extern Il2CppType t227_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t184_m2849_ParameterInfos[] = 
{
	{"vertices", 0, 134218825, &EmptyCustomAttributesCache, &t227_0_0_0},
	{"size", 1, 134218826, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m2849;
MethodInfo m2849_MI = 
{
	"SetVerticesInternalArray", (methodPointerType)&m2849, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t184_m2849_ParameterInfos, &t184__CustomAttributeCache_m2849, 129, 4096, 255, 2, false, false, 1069, NULL, (methodPointerType)NULL};
extern TypeInfo t184_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m1687;
MethodInfo m1687_MI = 
{
	"Clear", (methodPointerType)&m1687, &t184_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &t184__CustomAttributeCache_m1687, 134, 4096, 255, 0, false, false, 1070, NULL, (methodPointerType)NULL};
extern TypeInfo t184_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t184__CustomAttributeCache_m1670;
MethodInfo m1670_MI = 
{
	"get_absoluteDepth", (methodPointerType)&m1670, &t184_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &t184__CustomAttributeCache_m1670, 2182, 4096, 255, 0, false, false, 1071, NULL, (methodPointerType)NULL};
static MethodInfo* t184_MIs[] =
{
	&m1711_MI,
	&m2847_MI,
	&m1709_MI,
	&m2112_MI,
	&m1696_MI,
	&m1694_MI,
	&m2848_MI,
	&m1851_MI,
	&m2849_MI,
	&m1687_MI,
	&m1670_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
static MethodInfo* t184_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m2847(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m1709(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m2112(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m1696(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m2848(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m2849(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m1687(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t184_CustomAttributesCacheGenerator_m1670(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t184__CustomAttributeCache_m2847 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m2847
};
CustomAttributesCache t184__CustomAttributeCache_m1709 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m1709
};
CustomAttributesCache t184__CustomAttributeCache_m2112 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m2112
};
CustomAttributesCache t184__CustomAttributeCache_m1696 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m1696
};
CustomAttributesCache t184__CustomAttributeCache_m2848 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m2848
};
CustomAttributesCache t184__CustomAttributeCache_m2849 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m2849
};
CustomAttributesCache t184__CustomAttributeCache_m1687 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m1687
};
CustomAttributesCache t184__CustomAttributeCache_m1670 = {
1,
NULL,
&t184_CustomAttributesCacheGenerator_m1670
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t184_0_0_0;
extern Il2CppType t184_1_0_0;
extern TypeInfo t35_TI;
struct t184;
extern TypeInfo t184_TI;
extern CustomAttributesCache t184__CustomAttributeCache_m2847;
extern CustomAttributesCache t184__CustomAttributeCache_m1709;
extern CustomAttributesCache t184__CustomAttributeCache_m2112;
extern CustomAttributesCache t184__CustomAttributeCache_m1696;
extern CustomAttributesCache t184__CustomAttributeCache_m2848;
extern CustomAttributesCache t184__CustomAttributeCache_m2849;
extern CustomAttributesCache t184__CustomAttributeCache_m1687;
extern CustomAttributesCache t184__CustomAttributeCache_m1670;
TypeInfo t184_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CanvasRenderer", "UnityEngine", t184_MIs, t184_PIs, NULL, NULL, &t35_TI, NULL, NULL, &t184_TI, NULL, t184_VT, &EmptyCustomAttributesCache, &t184_TI, &t184_0_0_0, &t184_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t184), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 11, 2, 0, 0, 0, 4, 0, 0};
#include "t370.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t370_TI;
#include "t370MD.h"

#include "t53.h"
extern TypeInfo t63_TI;
extern TypeInfo t11_TI;
extern TypeInfo t370_TI;
extern TypeInfo t45_TI;
extern TypeInfo t183_TI;
extern TypeInfo t59_TI;
#include "t53MD.h"
#include "t38MD.h"
#include "t183MD.h"
extern MethodInfo m2851_MI;
extern MethodInfo m2852_MI;
extern MethodInfo m2853_MI;
extern MethodInfo m1518_MI;
extern MethodInfo m1585_MI;
extern MethodInfo m2855_MI;
extern MethodInfo m151_MI;
extern MethodInfo m2438_MI;
extern MethodInfo m157_MI;
extern MethodInfo m91_MI;
extern MethodInfo m158_MI;
extern MethodInfo m1858_MI;
extern MethodInfo m1859_MI;
extern MethodInfo m2854_MI;
extern MethodInfo m1857_MI;
extern MethodInfo m1542_MI;
extern MethodInfo m138_MI;
extern MethodInfo m1586_MI;
extern MethodInfo m1736_MI;
extern MethodInfo m143_MI;
extern MethodInfo m147_MI;
extern MethodInfo m2098_MI;
extern MethodInfo m1949_MI;
extern MethodInfo m2100_MI;
extern MethodInfo m1771_MI;
extern MethodInfo m1786_MI;
extern MethodInfo m1801_MI;
extern MethodInfo m1912_MI;
extern MethodInfo m1906_MI;
extern MethodInfo m1911_MI;
extern MethodInfo m1775_MI;
extern MethodInfo m1905_MI;
extern MethodInfo m1910_MI;
extern MethodInfo m1776_MI;
extern MethodInfo m1948_MI;
extern MethodInfo m2856_MI;
extern MethodInfo m1907_MI;
extern MethodInfo m1777_MI;
extern MethodInfo m195_MI;


extern MethodInfo m2850_MI;
 void m2850 (t28 * __this, MethodInfo* method){
	{
		((t370_SFs*)InitializedTypeInfo(&t370_TI)->static_fields)->f0 = ((t63*)SZArrayNew(InitializedTypeInfo(&t63_TI), 4));
		return;
	}
}
extern MethodInfo m1740_MI;
 bool m1740 (t28 * __this, t183 * p0, t59  p1, t38 * p2, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		bool L_0 = m2851(NULL, p0, (&p1), p2, &m2851_MI);
		return L_0;
	}
}
extern MethodInfo m2851_MI;
 bool m2851 (t28 * __this, t183 * p0, t59 * p1, t38 * p2, MethodInfo* method){
	typedef bool (*m2851_ftn) (t183 *, t59 *, t38 *);
	static m2851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m1707_MI;
 t59  m1707 (t28 * __this, t59  p0, t32 * p1, t185 * p2, MethodInfo* method){
	t59  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		m2852(NULL, p0, p1, p2, (&V_0), &m2852_MI);
		return V_0;
	}
}
extern MethodInfo m2852_MI;
 void m2852 (t28 * __this, t59  p0, t32 * p1, t185 * p2, t59 * p3, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		m2853(NULL, (&p0), p1, p2, p3, &m2853_MI);
		return;
	}
}
extern MethodInfo m2853_MI;
 void m2853 (t28 * __this, t59 * p0, t32 * p1, t185 * p2, t59 * p3, MethodInfo* method){
	typedef void (*m2853_ftn) (t59 *, t32 *, t185 *, t59 *);
	static m2853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m1708_MI;
 t191  m1708 (t28 * __this, t183 * p0, t185 * p1, MethodInfo* method){
	typedef t191  (*m1708_ftn) (t183 *, t185 *);
	static m1708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2854_MI;
 bool m2854 (t28 * __this, t183 * p0, t59  p1, t38 * p2, t11 * p3, MethodInfo* method){
	t45  V_0 = {0};
	t53  V_1 = {0};
	float V_2 = 0.0f;
	{
		t59  L_0 = m1518(NULL, &m1518_MI);
		t11  L_1 = m1585(NULL, L_0, &m1585_MI);
		*p3 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		t45  L_2 = m2855(NULL, p2, p1, &m2855_MI);
		V_0 = L_2;
		t50  L_3 = m151(p0, &m151_MI);
		t11  L_4 = m2438(NULL, &m2438_MI);
		t11  L_5 = m157(NULL, L_3, L_4, &m157_MI);
		t11  L_6 = m91(p0, &m91_MI);
		m158((&V_1), L_5, L_6, &m158_MI);
		bool L_7 = m1858((&V_1), V_0, (&V_2), &m1858_MI);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		t11  L_8 = m1859((&V_0), V_2, &m1859_MI);
		*p3 = L_8;
		return 1;
	}
}
extern MethodInfo m1791_MI;
 bool m1791 (t28 * __this, t183 * p0, t59  p1, t38 * p2, t59 * p3, MethodInfo* method){
	t11  V_0 = {0};
	{
		t59  L_0 = m1518(NULL, &m1518_MI);
		*p3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		bool L_1 = m2854(NULL, p0, p1, p2, (&V_0), &m2854_MI);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		t11  L_2 = m1857(p0, V_0, &m1857_MI);
		t59  L_3 = m1542(NULL, L_2, &m1542_MI);
		*p3 = L_3;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
extern MethodInfo m2855_MI;
 t45  m2855 (t28 * __this, t38 * p0, t59  p1, MethodInfo* method){
	t11  V_0 = {0};
	{
		bool L_0 = m138(NULL, p0, (t43 *)NULL, &m138_MI);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		t11  L_1 = m1585(NULL, p1, &m1585_MI);
		t45  L_2 = m1586(p0, L_1, &m1586_MI);
		return L_2;
	}

IL_0019:
	{
		t11  L_3 = m1585(NULL, p1, &m1585_MI);
		V_0 = L_3;
		t11 * L_4 = (&V_0);
		float L_5 = (L_4->f3);
		L_4->f3 = ((float)(L_5-(100.0f)));
		t11  L_6 = m1736(NULL, &m1736_MI);
		t45  L_7 = {0};
		m143(&L_7, V_0, L_6, &m143_MI);
		return L_7;
	}
}
extern MethodInfo m1949_MI;
 void m1949 (t28 * __this, t183 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method){
	int32_t V_0 = 0;
	t183 * V_1 = {0};
	t59  V_2 = {0};
	t59  V_3 = {0};
	t59  V_4 = {0};
	t59  V_5 = {0};
	float V_6 = 0.0f;
	{
		bool L_0 = m147(NULL, p0, (t43 *)NULL, &m147_MI);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		if (!p3)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		t32 * L_1 = m2098(p0, V_0, &m2098_MI);
		V_1 = ((t183 *)IsInst(L_1, InitializedTypeInfo(&t183_TI)));
		bool L_2 = m138(NULL, V_1, (t43 *)NULL, &m138_MI);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		m1949(NULL, V_1, p1, 0, 1, &m1949_MI);
	}

IL_003c:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0040:
	{
		int32_t L_3 = m2100(p0, &m2100_MI);
		if ((((int32_t)V_0) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		t59  L_4 = m1771(p0, &m1771_MI);
		V_2 = L_4;
		float L_5 = m1786((&V_2), p1, &m1786_MI);
		m1801((&V_2), p1, ((float)((1.0f)-L_5)), &m1801_MI);
		m1912(p0, V_2, &m1912_MI);
		if (!p2)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		t59  L_6 = m1906(p0, &m1906_MI);
		V_3 = L_6;
		float L_7 = m1786((&V_3), p1, &m1786_MI);
		m1801((&V_3), p1, ((-L_7)), &m1801_MI);
		m1911(p0, V_3, &m1911_MI);
		t59  L_8 = m1775(p0, &m1775_MI);
		V_4 = L_8;
		t59  L_9 = m1905(p0, &m1905_MI);
		V_5 = L_9;
		float L_10 = m1786((&V_4), p1, &m1786_MI);
		V_6 = L_10;
		float L_11 = m1786((&V_5), p1, &m1786_MI);
		m1801((&V_4), p1, ((float)((1.0f)-L_11)), &m1801_MI);
		m1801((&V_5), p1, ((float)((1.0f)-V_6)), &m1801_MI);
		m1910(p0, V_4, &m1910_MI);
		m1776(p0, V_5, &m1776_MI);
		return;
	}
}
extern MethodInfo m1948_MI;
 void m1948 (t28 * __this, t183 * p0, bool p1, bool p2, MethodInfo* method){
	int32_t V_0 = 0;
	t183 * V_1 = {0};
	{
		bool L_0 = m147(NULL, p0, (t43 *)NULL, &m147_MI);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		if (!p2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		t32 * L_1 = m2098(p0, V_0, &m2098_MI);
		V_1 = ((t183 *)IsInst(L_1, InitializedTypeInfo(&t183_TI)));
		bool L_2 = m138(NULL, V_1, (t43 *)NULL, &m138_MI);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		m1948(NULL, V_1, 0, 1, &m1948_MI);
	}

IL_003b:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_003f:
	{
		int32_t L_3 = m2100(p0, &m2100_MI);
		if ((((int32_t)V_0) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		t59  L_4 = m1771(p0, &m1771_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		t59  L_5 = m2856(NULL, L_4, &m2856_MI);
		m1912(p0, L_5, &m1912_MI);
		t59  L_6 = m1907(p0, &m1907_MI);
		t59  L_7 = m2856(NULL, L_6, &m2856_MI);
		m1777(p0, L_7, &m1777_MI);
		if (!p1)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		t59  L_8 = m1906(p0, &m1906_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t370_TI));
		t59  L_9 = m2856(NULL, L_8, &m2856_MI);
		m1911(p0, L_9, &m1911_MI);
		t59  L_10 = m1775(p0, &m1775_MI);
		t59  L_11 = m2856(NULL, L_10, &m2856_MI);
		m1910(p0, L_11, &m1910_MI);
		t59  L_12 = m1905(p0, &m1905_MI);
		t59  L_13 = m2856(NULL, L_12, &m2856_MI);
		m1776(p0, L_13, &m1776_MI);
		return;
	}
}
extern MethodInfo m2856_MI;
 t59  m2856 (t28 * __this, t59  p0, MethodInfo* method){
	{
		float L_0 = ((&p0)->f2);
		float L_1 = ((&p0)->f1);
		t59  L_2 = {0};
		m195(&L_2, L_0, L_1, &m195_MI);
		return L_2;
	}
}
// Metadata Definition UnityEngine.RectTransformUtility
extern Il2CppType t63_0_0_17;
FieldInfo t370_f0_FieldInfo = 
{
	"s_Corners", &t63_0_0_17, &t370_TI, offsetof(t370_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t370_FIs[] =
{
	&t370_f0_FieldInfo,
	NULL
};
extern TypeInfo t370_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2850_MI = 
{
	".cctor", (methodPointerType)&m2850, &t370_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 1072, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t38_0_0_0;
static ParameterInfo t370_m1740_ParameterInfos[] = 
{
	{"rect", 0, 134218827, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"screenPoint", 1, 134218828, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"cam", 2, 134218829, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t59_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1740_MI = 
{
	"RectangleContainsScreenPoint", (methodPointerType)&m1740, &t370_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t59_t28, t370_m1740_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1073, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t59_1_0_0;
extern Il2CppType t38_0_0_0;
static ParameterInfo t370_m2851_ParameterInfos[] = 
{
	{"rect", 0, 134218830, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"screenPoint", 1, 134218831, &EmptyCustomAttributesCache, &t59_1_0_0},
	{"cam", 2, 134218832, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t602_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t370__CustomAttributeCache_m2851;
MethodInfo m2851_MI = 
{
	"INTERNAL_CALL_RectangleContainsScreenPoint", (methodPointerType)&m2851, &t370_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t602_t28, t370_m2851_ParameterInfos, &t370__CustomAttributeCache_m2851, 145, 4096, 255, 3, false, false, 1074, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t32_0_0_0;
extern Il2CppType t185_0_0_0;
static ParameterInfo t370_m1707_ParameterInfos[] = 
{
	{"point", 0, 134218833, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"elementTransform", 1, 134218834, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"canvas", 2, 134218835, &EmptyCustomAttributesCache, &t185_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59_t59_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1707_MI = 
{
	"PixelAdjustPoint", (methodPointerType)&m1707, &t370_TI, &t59_0_0_0, RuntimeInvoker_t59_t59_t28_t28, t370_m1707_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1075, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t32_0_0_0;
extern Il2CppType t185_0_0_0;
extern Il2CppType t59_1_0_0;
static ParameterInfo t370_m2852_ParameterInfos[] = 
{
	{"point", 0, 134218836, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"elementTransform", 1, 134218837, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"canvas", 2, 134218838, &EmptyCustomAttributesCache, &t185_0_0_0},
	{"output", 3, 134218839, &EmptyCustomAttributesCache, &t59_1_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t59_t28_t28_t602 (MethodInfo* method, void* obj, void** args);
MethodInfo m2852_MI = 
{
	"PixelAdjustPoint", (methodPointerType)&m2852, &t370_TI, &t30_0_0_0, RuntimeInvoker_t30_t59_t28_t28_t602, t370_m2852_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 1076, NULL, (methodPointerType)NULL};
extern Il2CppType t59_1_0_0;
extern Il2CppType t32_0_0_0;
extern Il2CppType t185_0_0_0;
extern Il2CppType t59_1_0_0;
static ParameterInfo t370_m2853_ParameterInfos[] = 
{
	{"point", 0, 134218840, &EmptyCustomAttributesCache, &t59_1_0_0},
	{"elementTransform", 1, 134218841, &EmptyCustomAttributesCache, &t32_0_0_0},
	{"canvas", 2, 134218842, &EmptyCustomAttributesCache, &t185_0_0_0},
	{"output", 3, 134218843, &EmptyCustomAttributesCache, &t59_1_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t602_t28_t28_t602 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t370__CustomAttributeCache_m2853;
MethodInfo m2853_MI = 
{
	"INTERNAL_CALL_PixelAdjustPoint", (methodPointerType)&m2853, &t370_TI, &t30_0_0_0, RuntimeInvoker_t30_t602_t28_t28_t602, t370_m2853_ParameterInfos, &t370__CustomAttributeCache_m2853, 145, 4096, 255, 4, false, false, 1077, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t185_0_0_0;
static ParameterInfo t370_m1708_ParameterInfos[] = 
{
	{"rectTransform", 0, 134218844, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"canvas", 1, 134218845, &EmptyCustomAttributesCache, &t185_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t191_0_0_0;
extern void* RuntimeInvoker_t191_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t370__CustomAttributeCache_m1708;
MethodInfo m1708_MI = 
{
	"PixelAdjustRect", (methodPointerType)&m1708, &t370_TI, &t191_0_0_0, RuntimeInvoker_t191_t28_t28, t370_m1708_ParameterInfos, &t370__CustomAttributeCache_m1708, 150, 4096, 255, 2, false, false, 1078, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t38_0_0_0;
extern Il2CppType t11_1_0_0;
static ParameterInfo t370_m2854_ParameterInfos[] = 
{
	{"rect", 0, 134218846, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"screenPoint", 1, 134218847, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"cam", 2, 134218848, &EmptyCustomAttributesCache, &t38_0_0_0},
	{"worldPoint", 3, 134218849, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t59_t28_t595 (MethodInfo* method, void* obj, void** args);
MethodInfo m2854_MI = 
{
	"ScreenPointToWorldPointInRectangle", (methodPointerType)&m2854, &t370_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t59_t28_t595, t370_m2854_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 1079, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t59_0_0_0;
extern Il2CppType t38_0_0_0;
extern Il2CppType t59_1_0_0;
static ParameterInfo t370_m1791_ParameterInfos[] = 
{
	{"rect", 0, 134218850, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"screenPoint", 1, 134218851, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"cam", 2, 134218852, &EmptyCustomAttributesCache, &t38_0_0_0},
	{"localPoint", 3, 134218853, &EmptyCustomAttributesCache, &t59_1_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t59_t28_t602 (MethodInfo* method, void* obj, void** args);
MethodInfo m1791_MI = 
{
	"ScreenPointToLocalPointInRectangle", (methodPointerType)&m1791, &t370_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t59_t28_t602, t370_m1791_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 1080, NULL, (methodPointerType)NULL};
extern Il2CppType t38_0_0_0;
extern Il2CppType t59_0_0_0;
static ParameterInfo t370_m2855_ParameterInfos[] = 
{
	{"cam", 0, 134218854, &EmptyCustomAttributesCache, &t38_0_0_0},
	{"screenPos", 1, 134218855, &EmptyCustomAttributesCache, &t59_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t45_0_0_0;
extern void* RuntimeInvoker_t45_t28_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2855_MI = 
{
	"ScreenPointToRay", (methodPointerType)&m2855, &t370_TI, &t45_0_0_0, RuntimeInvoker_t45_t28_t59, t370_m2855_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 1081, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t47_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t370_m1949_ParameterInfos[] = 
{
	{"rect", 0, 134218856, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"axis", 1, 134218857, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"keepPositioning", 2, 134218858, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"recursive", 3, 134218859, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47_t323_t323 (MethodInfo* method, void* obj, void** args);
MethodInfo m1949_MI = 
{
	"FlipLayoutOnAxis", (methodPointerType)&m1949, &t370_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47_t323_t323, t370_m1949_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 1082, NULL, (methodPointerType)NULL};
extern Il2CppType t183_0_0_0;
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t370_m1948_ParameterInfos[] = 
{
	{"rect", 0, 134218860, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"keepPositioning", 1, 134218861, &EmptyCustomAttributesCache, &t31_0_0_0},
	{"recursive", 2, 134218862, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t323_t323 (MethodInfo* method, void* obj, void** args);
MethodInfo m1948_MI = 
{
	"FlipLayoutAxes", (methodPointerType)&m1948, &t370_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t323_t323, t370_m1948_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1083, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
static ParameterInfo t370_m2856_ParameterInfos[] = 
{
	{"input", 0, 134218863, &EmptyCustomAttributesCache, &t59_0_0_0},
};
extern TypeInfo t370_TI;
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t59_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2856_MI = 
{
	"GetTransposed", (methodPointerType)&m2856, &t370_TI, &t59_0_0_0, RuntimeInvoker_t59_t59, t370_m2856_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1084, NULL, (methodPointerType)NULL};
static MethodInfo* t370_MIs[] =
{
	&m2850_MI,
	&m1740_MI,
	&m2851_MI,
	&m1707_MI,
	&m2852_MI,
	&m2853_MI,
	&m1708_MI,
	&m2854_MI,
	&m1791_MI,
	&m2855_MI,
	&m1949_MI,
	&m1948_MI,
	&m2856_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t370_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t370_CustomAttributesCacheGenerator_m2851(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t370_CustomAttributesCacheGenerator_m2853(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t540_TI;
extern MethodInfo m2857_MI;
void t370_CustomAttributesCacheGenerator_m1708(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t540 * tmp;
		tmp = (t540 *)il2cpp_codegen_object_new (&t540_TI);
		m2857(tmp, &m2857_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t370__CustomAttributeCache_m2851 = {
1,
NULL,
&t370_CustomAttributesCacheGenerator_m2851
};
CustomAttributesCache t370__CustomAttributeCache_m2853 = {
1,
NULL,
&t370_CustomAttributesCacheGenerator_m2853
};
CustomAttributesCache t370__CustomAttributeCache_m1708 = {
1,
NULL,
&t370_CustomAttributesCacheGenerator_m1708
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t370_0_0_0;
extern Il2CppType t370_1_0_0;
extern TypeInfo t28_TI;
struct t370;
extern TypeInfo t370_TI;
extern CustomAttributesCache t370__CustomAttributeCache_m2851;
extern CustomAttributesCache t370__CustomAttributeCache_m2853;
extern CustomAttributesCache t370__CustomAttributeCache_m1708;
TypeInfo t370_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RectTransformUtility", "UnityEngine", t370_MIs, NULL, t370_FIs, NULL, &t28_TI, NULL, NULL, &t370_TI, NULL, t370_VT, &EmptyCustomAttributesCache, &t370_TI, &t370_0_0_0, &t370_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t370), 0, -1, sizeof(t370_SFs), 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 13, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t540_TI;

#include "t498MD.h"
extern MethodInfo m3007_MI;


extern MethodInfo m2857_MI;
 void m2857 (t540 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.WrapperlessIcall
extern TypeInfo t540_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2857_MI = 
{
	".ctor", (methodPointerType)&m2857, &t540_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1085, NULL, (methodPointerType)NULL};
static MethodInfo* t540_MIs[] =
{
	&m2857_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t540_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t540_IOs[] = 
{
	{ &t613_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t540_0_0_0;
extern Il2CppType t540_1_0_0;
extern TypeInfo t498_TI;
struct t540;
extern TypeInfo t540_TI;
TypeInfo t540_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WrapperlessIcall", "UnityEngine", t540_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t540_TI, NULL, t540_VT, &EmptyCustomAttributesCache, &t540_TI, &t540_0_0_0, &t540_1_0_0, t540_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t540), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t541.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t541_TI;
#include "t541MD.h"

#include "t371.h"
#include "t372.h"
#include "t335.h"
#include "t624.h"
#include "t3.h"
#include "t37.h"
#include "t322.h"
#include "t625.h"
extern TypeInfo t542_TI;
extern TypeInfo t371_TI;
extern TypeInfo t541_TI;
extern TypeInfo t543_TI;
extern TypeInfo t372_TI;
extern TypeInfo t544_TI;
extern TypeInfo t335_TI;
extern TypeInfo t624_TI;
extern TypeInfo t36_TI;
extern TypeInfo t3_TI;
extern TypeInfo t322_TI;
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t31_TI;
extern TypeInfo t47_TI;
extern TypeInfo t545_TI;
extern TypeInfo t625_TI;
extern TypeInfo t30_TI;
#include "t624MD.h"
#include "t36MD.h"
#include "t322MD.h"
#include "t625MD.h"
extern Il2CppType t3_0_0_0;
extern Il2CppType t371_0_0_0;
extern Il2CppType t335_0_0_0;
extern Il2CppType t372_0_0_0;
extern MethodInfo m3030_MI;
extern MethodInfo m3031_MI;
extern MethodInfo m3032_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3033_MI;
extern MethodInfo m3034_MI;
extern MethodInfo m3035_MI;
extern MethodInfo m3036_MI;
extern MethodInfo m3037_MI;
extern MethodInfo m3038_MI;


extern MethodInfo m2858_MI;
 void m2858 (t28 * __this, MethodInfo* method){
	{
		((t541_SFs*)InitializedTypeInfo(&t541_TI)->static_fields)->f0 = ((t542*)SZArrayNew(InitializedTypeInfo(&t542_TI), 1));
		((t541_SFs*)InitializedTypeInfo(&t541_TI)->static_fields)->f1 = ((t543*)SZArrayNew(InitializedTypeInfo(&t543_TI), 1));
		((t541_SFs*)InitializedTypeInfo(&t541_TI)->static_fields)->f2 = ((t544*)SZArrayNew(InitializedTypeInfo(&t544_TI), 1));
		return;
	}
}
extern MethodInfo m2859_MI;
 t36 * m2859 (t28 * __this, t36 * p0, MethodInfo* method){
	t624 * V_0 = {0};
	t36 * V_1 = {0};
	t333* V_2 = {0};
	{
		t624 * L_0 = (t624 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t624_TI));
		m3030(L_0, &m3030_MI);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		m3031(V_0, p0, &m3031_MI);
		t36 * L_1 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3032_MI, p0);
		p0 = L_1;
	}

IL_001a:
	{
		if (!p0)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_2 = m1673(NULL, LoadTypeToken(&t3_0_0_0), &m1673_MI);
		if ((((t36 *)p0) != ((t36 *)L_2)))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (t36 *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		t36 * L_3 = m3033(V_0, &m3033_MI);
		V_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_4 = m1673(NULL, LoadTypeToken(&t371_0_0_0), &m1673_MI);
		t333* L_5 = (t333*)VirtFuncInvoker2< t333*, t36 *, bool >::Invoke(&m3034_MI, V_1, L_4, 0);
		V_2 = L_5;
		if (!(((int32_t)(((t29 *)V_2)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		return V_1;
	}

IL_005a:
	{
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3035_MI, V_0);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (t36 *)NULL;
	}
}
extern MethodInfo m2860_MI;
 t545* m2860 (t28 * __this, t36 * p0, MethodInfo* method){
	t625 * V_0 = {0};
	t333* V_1 = {0};
	int32_t V_2 = 0;
	t335 * V_3 = {0};
	t545* V_4 = {0};
	{
		V_0 = (t625 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_0 = m1673(NULL, LoadTypeToken(&t335_0_0_0), &m1673_MI);
		t333* L_1 = (t333*)VirtFuncInvoker2< t333*, t36 *, bool >::Invoke(&m3034_MI, p0, L_0, 0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		V_3 = ((t335 *)Castclass((*(t28 **)(t28 **)SZArrayLdElema(V_1, V_2)), InitializedTypeInfo(&t335_TI)));
		if (V_0)
		{
			goto IL_0073;
		}
	}
	{
		if ((((uint32_t)(((int32_t)(((t29 *)V_1)->max_length)))) != ((uint32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		t36 * L_2 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3032_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_3 = m1673(NULL, LoadTypeToken(&t3_0_0_0), &m1673_MI);
		if ((((t36 *)L_2) != ((t36 *)L_3)))
		{
			goto IL_0073;
		}
	}
	{
		t545* L_4 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 3));
		t36 * L_5 = (V_3->f0);
		ArrayElementTypeCheck (L_4, L_5);
		*((t36 **)(t36 **)SZArrayLdElema(L_4, 0)) = (t36 *)L_5;
		t545* L_6 = L_4;
		t36 * L_7 = (V_3->f1);
		ArrayElementTypeCheck (L_6, L_7);
		*((t36 **)(t36 **)SZArrayLdElema(L_6, 1)) = (t36 *)L_7;
		t545* L_8 = L_6;
		t36 * L_9 = (V_3->f2);
		ArrayElementTypeCheck (L_8, L_9);
		*((t36 **)(t36 **)SZArrayLdElema(L_8, 2)) = (t36 *)L_9;
		V_4 = L_8;
		return V_4;
	}

IL_0073:
	{
		if (V_0)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t625_TI));
		t625 * L_10 = (t625 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t625_TI));
		m3036(L_10, &m3036_MI);
		V_0 = L_10;
	}

IL_007f:
	{
		t36 * L_11 = (V_3->f0);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		t36 * L_12 = (V_3->f0);
		VirtActionInvoker1< t36 * >::Invoke(&m3037_MI, V_0, L_12);
	}

IL_0096:
	{
		t36 * L_13 = (V_3->f1);
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		t36 * L_14 = (V_3->f1);
		VirtActionInvoker1< t36 * >::Invoke(&m3037_MI, V_0, L_14);
	}

IL_00ad:
	{
		t36 * L_15 = (V_3->f2);
		if (!L_15)
		{
			goto IL_00c4;
		}
	}
	{
		t36 * L_16 = (V_3->f2);
		VirtActionInvoker1< t36 * >::Invoke(&m3037_MI, V_0, L_16);
	}

IL_00c4:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00c8:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t29 *)V_1)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		t36 * L_17 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3032_MI, p0);
		p0 = L_17;
	}

IL_00d9:
	{
		if (!p0)
		{
			goto IL_00ef;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_18 = m1673(NULL, LoadTypeToken(&t3_0_0_0), &m1673_MI);
		if ((((t36 *)p0) != ((t36 *)L_18)))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		if (V_0)
		{
			goto IL_00f7;
		}
	}
	{
		return (t545*)NULL;
	}

IL_00f7:
	{
		t545* L_19 = m3038(V_0, &m3038_MI);
		return L_19;
	}
}
extern MethodInfo m2861_MI;
 bool m2861 (t28 * __this, t36 * p0, MethodInfo* method){
	t333* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_0 = m1673(NULL, LoadTypeToken(&t372_0_0_0), &m1673_MI);
		t333* L_1 = (t333*)VirtFuncInvoker2< t333*, t36 *, bool >::Invoke(&m3034_MI, p0, L_0, 0);
		V_0 = L_1;
		if (!(((int32_t)(((t29 *)V_0)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		t36 * L_2 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3032_MI, p0);
		p0 = L_2;
	}

IL_0029:
	{
		if (!p0)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_3 = m1673(NULL, LoadTypeToken(&t3_0_0_0), &m1673_MI);
		if ((((t36 *)p0) != ((t36 *)L_3)))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
// Metadata Definition UnityEngine.AttributeHelperEngine
extern Il2CppType t542_0_0_22;
FieldInfo t541_f0_FieldInfo = 
{
	"_disallowMultipleComponentArray", &t542_0_0_22, &t541_TI, offsetof(t541_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t543_0_0_22;
FieldInfo t541_f1_FieldInfo = 
{
	"_executeInEditModeArray", &t543_0_0_22, &t541_TI, offsetof(t541_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t544_0_0_22;
FieldInfo t541_f2_FieldInfo = 
{
	"_requireComponentArray", &t544_0_0_22, &t541_TI, offsetof(t541_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t541_FIs[] =
{
	&t541_f0_FieldInfo,
	&t541_f1_FieldInfo,
	&t541_f2_FieldInfo,
	NULL
};
extern TypeInfo t541_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2858_MI = 
{
	".cctor", (methodPointerType)&m2858, &t541_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 1086, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t541_m2859_ParameterInfos[] = 
{
	{"type", 0, 134218864, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t541_TI;
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2859_MI = 
{
	"GetParentTypeDisallowingMultipleInclusion", (methodPointerType)&m2859, &t541_TI, &t36_0_0_0, RuntimeInvoker_t28_t28, t541_m2859_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1087, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t541_m2860_ParameterInfos[] = 
{
	{"klass", 0, 134218865, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t541_TI;
extern Il2CppType t545_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2860_MI = 
{
	"GetRequiredComponents", (methodPointerType)&m2860, &t541_TI, &t545_0_0_0, RuntimeInvoker_t28_t28, t541_m2860_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1088, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t541_m2861_ParameterInfos[] = 
{
	{"klass", 0, 134218866, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t541_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2861_MI = 
{
	"CheckIsEditorScript", (methodPointerType)&m2861, &t541_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t541_m2861_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1089, NULL, (methodPointerType)NULL};
static MethodInfo* t541_MIs[] =
{
	&m2858_MI,
	&m2859_MI,
	&m2860_MI,
	&m2861_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t541_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t541_0_0_0;
extern Il2CppType t541_1_0_0;
extern TypeInfo t28_TI;
struct t541;
extern TypeInfo t541_TI;
TypeInfo t541_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AttributeHelperEngine", "UnityEngine", t541_MIs, NULL, t541_FIs, NULL, &t28_TI, NULL, NULL, &t541_TI, NULL, t541_VT, &EmptyCustomAttributesCache, &t541_TI, &t541_0_0_0, &t541_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t541), 0, -1, sizeof(t541_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t371_TI;
#include "t371MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m1720_MI;
 void m1720 (t371 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.DisallowMultipleComponent
extern TypeInfo t371_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1720_MI = 
{
	".ctor", (methodPointerType)&m1720, &t371_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1090, NULL, (methodPointerType)NULL};
static MethodInfo* t371_MIs[] =
{
	&m1720_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t371_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t371_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
#include "t626.h"
#include "t626MD.h"
extern MethodInfo m3039_MI;
void t371_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 4, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, false, &m3040_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t371__CustomAttributeCache = {
1,
NULL,
&t371_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t371_0_0_0;
extern Il2CppType t371_1_0_0;
extern TypeInfo t498_TI;
struct t371;
extern TypeInfo t371_TI;
extern CustomAttributesCache t371__CustomAttributeCache;
TypeInfo t371_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DisallowMultipleComponent", "UnityEngine", t371_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t371_TI, NULL, t371_VT, &t371__CustomAttributeCache, &t371_TI, &t371_0_0_0, &t371_1_0_0, t371_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t371), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t335_TI;
#include "t335MD.h"

extern TypeInfo t335_TI;
extern MethodInfo m3007_MI;


extern MethodInfo m1526_MI;
 void m1526 (t335 * __this, t36 * p0, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition UnityEngine.RequireComponent
extern Il2CppType t36_0_0_6;
FieldInfo t335_f0_FieldInfo = 
{
	"m_Type0", &t36_0_0_6, &t335_TI, offsetof(t335, f0), &EmptyCustomAttributesCache};
extern Il2CppType t36_0_0_6;
FieldInfo t335_f1_FieldInfo = 
{
	"m_Type1", &t36_0_0_6, &t335_TI, offsetof(t335, f1), &EmptyCustomAttributesCache};
extern Il2CppType t36_0_0_6;
FieldInfo t335_f2_FieldInfo = 
{
	"m_Type2", &t36_0_0_6, &t335_TI, offsetof(t335, f2), &EmptyCustomAttributesCache};
static FieldInfo* t335_FIs[] =
{
	&t335_f0_FieldInfo,
	&t335_f1_FieldInfo,
	&t335_f2_FieldInfo,
	NULL
};
extern Il2CppType t36_0_0_0;
static ParameterInfo t335_m1526_ParameterInfos[] = 
{
	{"requiredComponent", 0, 134218867, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern TypeInfo t335_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1526_MI = 
{
	".ctor", (methodPointerType)&m1526, &t335_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t335_m1526_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1091, NULL, (methodPointerType)NULL};
static MethodInfo* t335_MIs[] =
{
	&m1526_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t335_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t335_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t335_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 4, &m3039_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, true, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t335__CustomAttributeCache = {
1,
NULL,
&t335_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t335_0_0_0;
extern Il2CppType t335_1_0_0;
extern TypeInfo t498_TI;
struct t335;
extern TypeInfo t335_TI;
extern CustomAttributesCache t335__CustomAttributeCache;
TypeInfo t335_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RequireComponent", "UnityEngine", t335_MIs, NULL, t335_FIs, NULL, &t498_TI, NULL, NULL, &t335_TI, NULL, t335_VT, &t335__CustomAttributeCache, &t335_TI, &t335_0_0_0, &t335_1_0_0, t335_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t335), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 1};
#include "t324.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t324_TI;
#include "t324MD.h"

extern TypeInfo t324_TI;
extern MethodInfo m3007_MI;


extern MethodInfo m1455_MI;
 void m1455 (t324 * __this, t18* p0, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		__this->f0 = p0;
		__this->f1 = 0;
		return;
	}
}
extern MethodInfo m1637_MI;
 void m1637 (t324 * __this, t18* p0, int32_t p1, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition UnityEngine.AddComponentMenu
extern Il2CppType t18_0_0_1;
FieldInfo t324_f0_FieldInfo = 
{
	"m_AddComponentMenu", &t18_0_0_1, &t324_TI, offsetof(t324, f0), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t324_f1_FieldInfo = 
{
	"m_Ordering", &t47_0_0_1, &t324_TI, offsetof(t324, f1), &EmptyCustomAttributesCache};
static FieldInfo* t324_FIs[] =
{
	&t324_f0_FieldInfo,
	&t324_f1_FieldInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t324_m1455_ParameterInfos[] = 
{
	{"menuName", 0, 134218868, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t324_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m1455_MI = 
{
	".ctor", (methodPointerType)&m1455, &t324_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t324_m1455_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1092, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t324_m1637_ParameterInfos[] = 
{
	{"menuName", 0, 134218869, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"order", 1, 134218870, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t324_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m1637_MI = 
{
	".ctor", (methodPointerType)&m1637, &t324_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t324_m1637_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1093, NULL, (methodPointerType)NULL};
static MethodInfo* t324_MIs[] =
{
	&m1455_MI,
	&m1637_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t324_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t324_IOs[] = 
{
	{ &t613_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t324_0_0_0;
extern Il2CppType t324_1_0_0;
extern TypeInfo t498_TI;
struct t324;
extern TypeInfo t324_TI;
TypeInfo t324_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AddComponentMenu", "UnityEngine", t324_MIs, NULL, t324_FIs, NULL, &t498_TI, NULL, NULL, &t324_TI, NULL, t324_VT, &EmptyCustomAttributesCache, &t324_TI, &t324_0_0_0, &t324_1_0_0, t324_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t324), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t372_TI;
#include "t372MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m1721_MI;
 void m1721 (t372 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.ExecuteInEditMode
extern TypeInfo t372_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1721_MI = 
{
	".ctor", (methodPointerType)&m1721, &t372_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1094, NULL, (methodPointerType)NULL};
static MethodInfo* t372_MIs[] =
{
	&m1721_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t372_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t372_IOs[] = 
{
	{ &t613_TI, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t372_0_0_0;
extern Il2CppType t372_1_0_0;
extern TypeInfo t498_TI;
struct t372;
extern TypeInfo t372_TI;
TypeInfo t372_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ExecuteInEditMode", "UnityEngine", t372_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t372_TI, NULL, t372_VT, &EmptyCustomAttributesCache, &t372_TI, &t372_0_0_0, &t372_1_0_0, t372_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t372), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t546.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t546_TI;
#include "t546MD.h"

#include "t627.h"
#include "t628.h"
#include "t629.h"
#include "t630.h"
extern TypeInfo t333_TI;
extern TypeInfo t28_TI;
extern TypeInfo t36_TI;
extern TypeInfo t18_TI;
extern TypeInfo t627_TI;
extern TypeInfo t628_TI;
extern TypeInfo t631_TI;
extern TypeInfo t629_TI;
extern TypeInfo t630_TI;
extern TypeInfo t455_TI;
extern MethodInfo m203_MI;
extern MethodInfo m1553_MI;
extern MethodInfo m3042_MI;


extern MethodInfo m2862_MI;
 void m2862 (t546 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2863_MI;
 t28 * m2863 (t28 * __this, t28 * p0, t18* p1, t28 * p2, MethodInfo* method){
	t333* V_0 = {0};
	{
		V_0 = (t333*)NULL;
		if (!p2)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((t333*)SZArrayNew(InitializedTypeInfo(&t333_TI), 1));
		ArrayElementTypeCheck (V_0, p2);
		*((t28 **)(t28 **)SZArrayLdElema(V_0, 0)) = (t28 *)p2;
	}

IL_0013:
	{
		t36 * L_0 = m1553(p0, &m1553_MI);
		t28 * L_1 = (t28 *)VirtFuncInvoker8< t28 *, t18*, int32_t, t628 *, t28 *, t333*, t631*, t630 *, t455* >::Invoke(&m3042_MI, L_0, p1, ((int32_t)308), (t628 *)NULL, p0, V_0, (t631*)(t631*)NULL, (t630 *)NULL, (t455*)(t455*)NULL);
		return L_1;
	}
}
extern MethodInfo m2864_MI;
 t28 * m2864 (t28 * __this, t36 * p0, t18* p1, t28 * p2, MethodInfo* method){
	t333* V_0 = {0};
	{
		V_0 = (t333*)NULL;
		if (!p2)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((t333*)SZArrayNew(InitializedTypeInfo(&t333_TI), 1));
		ArrayElementTypeCheck (V_0, p2);
		*((t28 **)(t28 **)SZArrayLdElema(V_0, 0)) = (t28 *)p2;
	}

IL_0013:
	{
		t28 * L_0 = (t28 *)VirtFuncInvoker8< t28 *, t18*, int32_t, t628 *, t28 *, t333*, t631*, t630 *, t455* >::Invoke(&m3042_MI, p0, p1, ((int32_t)312), (t628 *)NULL, NULL, V_0, (t631*)(t631*)NULL, (t630 *)NULL, (t455*)(t455*)NULL);
		return L_0;
	}
}
// Metadata Definition UnityEngine.SetupCoroutine
extern TypeInfo t546_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2862_MI = 
{
	".ctor", (methodPointerType)&m2862, &t546_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1095, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t546_m2863_ParameterInfos[] = 
{
	{"behaviour", 0, 134218871, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"name", 1, 134218872, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"variable", 2, 134218873, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t546_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2863_MI = 
{
	"InvokeMember", (methodPointerType)&m2863, &t546_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t546_m2863_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1096, NULL, (methodPointerType)NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t28_0_0_0;
static ParameterInfo t546_m2864_ParameterInfos[] = 
{
	{"klass", 0, 134218874, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"name", 1, 134218875, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"variable", 2, 134218876, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t546_TI;
extern Il2CppType t28_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2864_MI = 
{
	"InvokeStatic", (methodPointerType)&m2864, &t546_TI, &t28_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t546_m2864_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 1097, NULL, (methodPointerType)NULL};
static MethodInfo* t546_MIs[] =
{
	&m2862_MI,
	&m2863_MI,
	&m2864_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t546_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t546_0_0_0;
extern Il2CppType t546_1_0_0;
extern TypeInfo t28_TI;
struct t546;
extern TypeInfo t546_TI;
TypeInfo t546_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SetupCoroutine", "UnityEngine", t546_MIs, NULL, NULL, NULL, &t28_TI, NULL, NULL, &t546_TI, NULL, t546_VT, &EmptyCustomAttributesCache, &t546_TI, &t546_0_0_0, &t546_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t546), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t547_TI;

extern MethodInfo m3007_MI;


extern MethodInfo m2865_MI;
 void m2865 (t547 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.WritableAttribute
extern TypeInfo t547_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2865_MI = 
{
	".ctor", (methodPointerType)&m2865, &t547_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1098, NULL, (methodPointerType)NULL};
static MethodInfo* t547_MIs[] =
{
	&m2865_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t547_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t547_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t547_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 2048, &m3039_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t547__CustomAttributeCache = {
1,
NULL,
&t547_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t547_0_0_0;
extern Il2CppType t547_1_0_0;
extern TypeInfo t498_TI;
struct t547;
extern TypeInfo t547_TI;
extern CustomAttributesCache t547__CustomAttributeCache;
TypeInfo t547_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "WritableAttribute", "UnityEngine", t547_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t547_TI, NULL, t547_VT, &t547__CustomAttributeCache, &t547_TI, &t547_0_0_0, &t547_1_0_0, t547_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t547), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t548.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t548_TI;
#include "t548MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m2866_MI;
 void m2866 (t548 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.AssemblyIsEditorAssembly
extern TypeInfo t548_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2866_MI = 
{
	".ctor", (methodPointerType)&m2866, &t548_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1099, NULL, (methodPointerType)NULL};
static MethodInfo* t548_MIs[] =
{
	&m2866_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t548_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t548_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t548_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 1, &m3039_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t548__CustomAttributeCache = {
1,
NULL,
&t548_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t548_0_0_0;
extern Il2CppType t548_1_0_0;
extern TypeInfo t498_TI;
struct t548;
extern TypeInfo t548_TI;
extern CustomAttributesCache t548__CustomAttributeCache;
TypeInfo t548_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "AssemblyIsEditorAssembly", "UnityEngine", t548_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t548_TI, NULL, t548_VT, &t548__CustomAttributeCache, &t548_TI, &t548_0_0_0, &t548_1_0_0, t548_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t548), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t511.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t511_TI;
#include "t511MD.h"



// Metadata Definition UnityEngine.RenderBuffer
extern Il2CppType t47_0_0_3;
FieldInfo t511_f0_FieldInfo = 
{
	"m_RenderTextureInstanceID", &t47_0_0_3, &t511_TI, offsetof(t511, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t49_0_0_3;
FieldInfo t511_f1_FieldInfo = 
{
	"m_BufferPtr", &t49_0_0_3, &t511_TI, offsetof(t511, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t511_FIs[] =
{
	&t511_f0_FieldInfo,
	&t511_f1_FieldInfo,
	NULL
};
static MethodInfo* t511_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t511_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t511_0_0_0;
extern Il2CppType t511_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t511_TI;
TypeInfo t511_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RenderBuffer", "UnityEngine", t511_MIs, NULL, t511_FIs, NULL, &t26_TI, NULL, NULL, &t511_TI, NULL, t511_VT, &EmptyCustomAttributesCache, &t511_TI, &t511_0_0_0, &t511_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t511)+ sizeof (Il2CppObject), 0, sizeof(t511 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t506.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t506_TI;
#include "t506MD.h"



// Metadata Definition UnityEngine.CameraClearFlags
extern Il2CppType t47_0_0_1542;
FieldInfo t506_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t506_TI, offsetof(t506, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t506_0_0_32854;
FieldInfo t506_f2_FieldInfo = 
{
	"Skybox", &t506_0_0_32854, &t506_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t506_0_0_32854;
FieldInfo t506_f3_FieldInfo = 
{
	"Color", &t506_0_0_32854, &t506_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t506_0_0_32854;
FieldInfo t506_f4_FieldInfo = 
{
	"SolidColor", &t506_0_0_32854, &t506_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t506_0_0_32854;
FieldInfo t506_f5_FieldInfo = 
{
	"Depth", &t506_0_0_32854, &t506_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t506_0_0_32854;
FieldInfo t506_f6_FieldInfo = 
{
	"Nothing", &t506_0_0_32854, &t506_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t506_FIs[] =
{
	&t506_f1_FieldInfo,
	&t506_f2_FieldInfo,
	&t506_f3_FieldInfo,
	&t506_f4_FieldInfo,
	&t506_f5_FieldInfo,
	&t506_f6_FieldInfo,
	NULL
};
static const int32_t t506_f2_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t506_f2_DefaultValue = 
{
	&t506_f2_FieldInfo, { (char*)&t506_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t506_f3_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t506_f3_DefaultValue = 
{
	&t506_f3_FieldInfo, { (char*)&t506_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t506_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t506_f4_DefaultValue = 
{
	&t506_f4_FieldInfo, { (char*)&t506_f4_DefaultValueData, &t47_0_0_0 }};
static const int32_t t506_f5_DefaultValueData = 3;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t506_f5_DefaultValue = 
{
	&t506_f5_FieldInfo, { (char*)&t506_f5_DefaultValueData, &t47_0_0_0 }};
static const int32_t t506_f6_DefaultValueData = 4;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t506_f6_DefaultValue = 
{
	&t506_f6_FieldInfo, { (char*)&t506_f6_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t506_FDVs[] = 
{
	&t506_f2_DefaultValue,
	&t506_f3_DefaultValue,
	&t506_f4_DefaultValue,
	&t506_f5_DefaultValue,
	&t506_f6_DefaultValue,
	NULL
};
static MethodInfo* t506_MIs[] =
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
static MethodInfo* t506_VT[] =
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
static Il2CppInterfaceOffsetPair t506_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t506_0_0_0;
extern Il2CppType t506_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t506_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CameraClearFlags", "UnityEngine", t506_MIs, NULL, t506_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t506_VT, &EmptyCustomAttributesCache, &t47_TI, &t506_0_0_0, &t506_1_0_0, t506_IOs, NULL, NULL, t506_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t506)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t549.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t549_TI;
#include "t549MD.h"



// Metadata Definition UnityEngine.Rendering.ReflectionProbeBlendInfo
extern Il2CppType t463_0_0_6;
FieldInfo t549_f0_FieldInfo = 
{
	"probe", &t463_0_0_6, &t549_TI, offsetof(t549, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_6;
FieldInfo t549_f1_FieldInfo = 
{
	"weight", &t33_0_0_6, &t549_TI, offsetof(t549, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t549_FIs[] =
{
	&t549_f0_FieldInfo,
	&t549_f1_FieldInfo,
	NULL
};
static MethodInfo* t549_MIs[] =
{
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t549_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t549_0_0_0;
extern Il2CppType t549_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t549_TI;
TypeInfo t549_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ReflectionProbeBlendInfo", "UnityEngine.Rendering", t549_MIs, NULL, t549_FIs, NULL, &t26_TI, NULL, NULL, &t549_TI, NULL, t549_VT, &EmptyCustomAttributesCache, &t549_TI, &t549_0_0_0, &t549_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t549)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t550.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t550_TI;
#include "t550MD.h"

extern TypeInfo t550_TI;
extern MethodInfo m2676_MI;
extern MethodInfo m147_MI;
extern MethodInfo m138_MI;


extern MethodInfo m2867_MI;
 void m2867 (t550 * __this, t18* p0, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		m2676(L_0, p0, NULL, 1, &m2676_MI);
		return;
	}
}
extern MethodInfo m2868_MI;
 bool m2868 (t28 * __this, t550  p0, t550  p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t5 * L_0 = ((&p0)->f0);
		t5 * L_1 = ((&p1)->f0);
		bool L_2 = m147(NULL, L_0, L_1, &m147_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		t38 * L_3 = ((&p0)->f1);
		t38 * L_4 = ((&p1)->f1);
		bool L_5 = m147(NULL, L_3, L_4, &m147_MI);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2869_MI;
 bool m2869 (t28 * __this, t550  p0, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t5 * L_0 = ((&p0)->f0);
		bool L_1 = m138(NULL, L_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t38 * L_2 = ((&p0)->f1);
		bool L_3 = m138(NULL, L_2, (t43 *)NULL, &m138_MI);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.SendMouseEvents/HitInfo
extern Il2CppType t5_0_0_6;
FieldInfo t550_f0_FieldInfo = 
{
	"target", &t5_0_0_6, &t550_TI, offsetof(t550, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t38_0_0_6;
FieldInfo t550_f1_FieldInfo = 
{
	"camera", &t38_0_0_6, &t550_TI, offsetof(t550, f1) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t550_FIs[] =
{
	&t550_f0_FieldInfo,
	&t550_f1_FieldInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t550_m2867_ParameterInfos[] = 
{
	{"name", 0, 134218881, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t550_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2867_MI = 
{
	"SendMessage", (methodPointerType)&m2867, &t550_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t550_m2867_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1103, NULL, (methodPointerType)NULL};
extern Il2CppType t550_0_0_0;
extern Il2CppType t550_0_0_0;
static ParameterInfo t550_m2868_ParameterInfos[] = 
{
	{"lhs", 0, 134218882, &EmptyCustomAttributesCache, &t550_0_0_0},
	{"rhs", 1, 134218883, &EmptyCustomAttributesCache, &t550_0_0_0},
};
extern TypeInfo t550_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t550_t550 (MethodInfo* method, void* obj, void** args);
MethodInfo m2868_MI = 
{
	"Compare", (methodPointerType)&m2868, &t550_TI, &t31_0_0_0, RuntimeInvoker_t31_t550_t550, t550_m2868_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 1104, NULL, (methodPointerType)NULL};
extern Il2CppType t550_0_0_0;
static ParameterInfo t550_m2869_ParameterInfos[] = 
{
	{"exists", 0, 134218884, &EmptyCustomAttributesCache, &t550_0_0_0},
};
extern TypeInfo t550_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t550 (MethodInfo* method, void* obj, void** args);
MethodInfo m2869_MI = 
{
	"op_Implicit", (methodPointerType)&m2869, &t550_TI, &t31_0_0_0, RuntimeInvoker_t31_t550, t550_m2869_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 1, false, false, 1105, NULL, (methodPointerType)NULL};
static MethodInfo* t550_MIs[] =
{
	&m2867_MI,
	&m2868_MI,
	&m2869_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t550_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t550_0_0_0;
extern Il2CppType t550_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t550_TI;
extern TypeInfo t551_TI;
TypeInfo t550_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "HitInfo", "", t550_MIs, NULL, t550_FIs, NULL, &t26_TI, NULL, &t551_TI, &t550_TI, NULL, t550_VT, &EmptyCustomAttributesCache, &t550_TI, &t550_0_0_0, &t550_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t550)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048843, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 4, 0, 0};
#include "t551.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t551_TI;
#include "t551MD.h"

#include "t465.h"
#include "t464.h"
#include "t462.h"
extern TypeInfo t552_TI;
extern TypeInfo t550_TI;
extern TypeInfo t551_TI;
extern TypeInfo t34_TI;
extern TypeInfo t505_TI;
extern TypeInfo t38_TI;
extern TypeInfo t11_TI;
extern TypeInfo t55_TI;
#include "t465MD.h"
extern MethodInfo m1541_MI;
extern MethodInfo m2610_MI;
extern MethodInfo m2611_MI;
extern MethodInfo m147_MI;
extern MethodInfo m2606_MI;
extern MethodInfo m138_MI;
extern MethodInfo m2605_MI;
extern MethodInfo m2457_MI;
extern MethodInfo m3043_MI;
extern MethodInfo m1433_MI;
extern MethodInfo m2220_MI;
extern MethodInfo m94_MI;
extern MethodInfo m2603_MI;
extern MethodInfo m1586_MI;
extern MethodInfo m1590_MI;
extern MethodInfo m1564_MI;
extern MethodInfo m1587_MI;
extern MethodInfo m1588_MI;
extern MethodInfo m185_MI;
extern MethodInfo m1600_MI;
extern MethodInfo m2615_MI;
extern MethodInfo m2607_MI;
extern MethodInfo m2617_MI;
extern MethodInfo m2872_MI;
extern MethodInfo m1539_MI;
extern MethodInfo m1582_MI;
extern MethodInfo m2869_MI;
extern MethodInfo m2867_MI;
extern MethodInfo m2868_MI;
struct t35;
struct t35;
 t28 * m134_gshared (t35 * __this, MethodInfo* method);
#define m134(__this, method) (t28 *)m134_gshared((t35 *)__this, method)
#define m3043(__this, method) (t465 *)m134_gshared((t35 *)__this, method)
extern MethodInfo m3043_MI;


extern MethodInfo m2870_MI;
 void m2870 (t28 * __this, MethodInfo* method){
	t550  V_0 = {0};
	t550  V_1 = {0};
	t550  V_2 = {0};
	t550  V_3 = {0};
	t550  V_4 = {0};
	t550  V_5 = {0};
	t550  V_6 = {0};
	t550  V_7 = {0};
	t550  V_8 = {0};
	{
		t552* L_0 = ((t552*)SZArrayNew(InitializedTypeInfo(&t552_TI), 3));
		Initobj (&t550_TI, (&V_0));
		*((t550 *)(t550 *)SZArrayLdElema(L_0, 0)) = V_0;
		t552* L_1 = L_0;
		Initobj (&t550_TI, (&V_1));
		*((t550 *)(t550 *)SZArrayLdElema(L_1, 1)) = V_1;
		t552* L_2 = L_1;
		Initobj (&t550_TI, (&V_2));
		*((t550 *)(t550 *)SZArrayLdElema(L_2, 2)) = V_2;
		((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f3 = L_2;
		t552* L_3 = ((t552*)SZArrayNew(InitializedTypeInfo(&t552_TI), 3));
		Initobj (&t550_TI, (&V_3));
		*((t550 *)(t550 *)SZArrayLdElema(L_3, 0)) = V_3;
		t552* L_4 = L_3;
		Initobj (&t550_TI, (&V_4));
		*((t550 *)(t550 *)SZArrayLdElema(L_4, 1)) = V_4;
		t552* L_5 = L_4;
		Initobj (&t550_TI, (&V_5));
		*((t550 *)(t550 *)SZArrayLdElema(L_5, 2)) = V_5;
		((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4 = L_5;
		t552* L_6 = ((t552*)SZArrayNew(InitializedTypeInfo(&t552_TI), 3));
		Initobj (&t550_TI, (&V_6));
		*((t550 *)(t550 *)SZArrayLdElema(L_6, 0)) = V_6;
		t552* L_7 = L_6;
		Initobj (&t550_TI, (&V_7));
		*((t550 *)(t550 *)SZArrayLdElema(L_7, 1)) = V_7;
		t552* L_8 = L_7;
		Initobj (&t550_TI, (&V_8));
		*((t550 *)(t550 *)SZArrayLdElema(L_8, 2)) = V_8;
		((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5 = L_8;
		return;
	}
}
extern MethodInfo m2871_MI;
 void m2871 (t28 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	t11  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t38 * V_3 = {0};
	t505* V_4 = {0};
	int32_t V_5 = 0;
	t191  V_6 = {0};
	t465 * V_7 = {0};
	t464 * V_8 = {0};
	t45  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	t5 * V_12 = {0};
	t5 * V_13 = {0};
	int32_t V_14 = 0;
	t550  V_15 = {0};
	t11  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t34_TI));
		t11  L_0 = m1541(NULL, &m1541_MI);
		V_0 = L_0;
		int32_t L_1 = m2610(NULL, &m2610_MI);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		if (!(((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f6))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		if ((((int32_t)(((int32_t)(((t29 *)(((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f6))->max_length)))) == ((int32_t)V_1)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f6 = ((t505*)SZArrayNew(InitializedTypeInfo(&t505_TI), V_1));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		m2611(NULL, (((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f6), &m2611_MI);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		Initobj (&t550_TI, (&V_15));
		*((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), V_2)) = V_15;
		V_2 = ((int32_t)(V_2+1));
	}

IL_005e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t29 *)(((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5))->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		if (p0)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		V_4 = (((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f6);
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		V_3 = (*(t38 **)(t38 **)SZArrayLdElema(V_4, V_5));
		bool L_2 = m147(NULL, V_3, (t43 *)NULL, &m147_MI);
		if (L_2)
		{
			goto IL_00a9;
		}
	}
	{
		if (!p1)
		{
			goto IL_00ae;
		}
	}
	{
		t462 * L_3 = m2606(V_3, &m2606_MI);
		bool L_4 = m138(NULL, L_3, (t43 *)NULL, &m138_MI);
		if (!L_4)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		t191  L_5 = m2605(V_3, &m2605_MI);
		V_6 = L_5;
		bool L_6 = m2457((&V_6), V_0, &m2457_MI);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		t465 * L_7 = m3043(V_3, &m3043_MI);
		V_7 = L_7;
		bool L_8 = m1433(NULL, V_7, &m1433_MI);
		if (!L_8)
		{
			goto IL_0141;
		}
	}
	{
		t464 * L_9 = m2220(V_7, V_0, &m2220_MI);
		V_8 = L_9;
		bool L_10 = m1433(NULL, V_8, &m1433_MI);
		if (!L_10)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		t5 * L_11 = m94(V_8, &m94_MI);
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 0))->f0 = L_11;
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 0))->f1 = V_3;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 0))->f0 = (t5 *)NULL;
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 0))->f1 = (t38 *)NULL;
	}

IL_0141:
	{
		int32_t L_12 = m2603(V_3, &m2603_MI);
		if (L_12)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		t45  L_13 = m1586(V_3, V_0, &m1586_MI);
		V_9 = L_13;
		t11  L_14 = m1590((&V_9), &m1590_MI);
		V_16 = L_14;
		float L_15 = ((&V_16)->f3);
		V_10 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		bool L_16 = m1564(NULL, (0.0f), V_10, &m1564_MI);
		if (!L_16)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		float L_17 = m1587(V_3, &m1587_MI);
		float L_18 = m1588(V_3, &m1588_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		float L_19 = fabsf(((float)(((float)(L_17-L_18))/V_10)));
		G_B23_0 = L_19;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		int32_t L_20 = m1600(V_3, &m1600_MI);
		int32_t L_21 = m2603(V_3, &m2603_MI);
		t5 * L_22 = m2615(V_3, V_9, V_11, ((int32_t)(L_20&L_21)), &m2615_MI);
		V_12 = L_22;
		bool L_23 = m138(NULL, V_12, (t43 *)NULL, &m138_MI);
		if (!L_23)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 1))->f0 = V_12;
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 1))->f1 = V_3;
		goto IL_0226;
	}

IL_01ec:
	{
		int32_t L_24 = m2607(V_3, &m2607_MI);
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		int32_t L_25 = m2607(V_3, &m2607_MI);
		if ((((uint32_t)L_25) != ((uint32_t)2)))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 1))->f0 = (t5 *)NULL;
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 1))->f1 = (t38 *)NULL;
	}

IL_0226:
	{
		int32_t L_26 = m1600(V_3, &m1600_MI);
		int32_t L_27 = m2603(V_3, &m2603_MI);
		t5 * L_28 = m2617(V_3, V_9, V_11, ((int32_t)(L_26&L_27)), &m2617_MI);
		V_13 = L_28;
		bool L_29 = m138(NULL, V_13, (t43 *)NULL, &m138_MI);
		if (!L_29)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 2))->f0 = V_13;
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 2))->f1 = V_3;
		goto IL_02ae;
	}

IL_0274:
	{
		int32_t L_30 = m2607(V_3, &m2607_MI);
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_31 = m2607(V_3, &m2607_MI);
		if ((((uint32_t)L_31) != ((uint32_t)2)))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 2))->f0 = (t5 *)NULL;
		((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), 2))->f1 = (t38 *)NULL;
	}

IL_02ae:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_02b4:
	{
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t29 *)V_4)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		m2872(NULL, V_14, (*(t550 *)((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5), V_14))), &m2872_MI);
		V_14 = ((int32_t)(V_14+1));
	}

IL_02e5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		if ((((int32_t)V_14) < ((int32_t)(((int32_t)(((t29 *)(((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f5))->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
extern MethodInfo m2872_MI;
 void m2872 (t28 * __this, int32_t p0, t550  p1, MethodInfo* method){
	bool V_0 = false;
	bool V_1 = false;
	t550  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t34_TI));
		bool L_0 = m1539(NULL, 0, &m1539_MI);
		V_0 = L_0;
		bool L_1 = m1582(NULL, 0, &m1582_MI);
		V_1 = L_1;
		if (!V_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_2 = m2869(NULL, p1, &m2869_MI);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		*((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0)) = p1;
		m2867(((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0)), (t18*) &_stringLiteral159, &m2867_MI);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		if (V_1)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		bool L_3 = m2869(NULL, (*(t550 *)((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0))), &m2869_MI);
		if (!L_3)
		{
			goto IL_00c8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		bool L_4 = m2868(NULL, p1, (*(t550 *)((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0))), &m2868_MI);
		if (!L_4)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		m2867(((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0)), (t18*) &_stringLiteral160, &m2867_MI);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		m2867(((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0)), (t18*) &_stringLiteral161, &m2867_MI);
		Initobj (&t550_TI, (&V_2));
		*((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0)) = V_2;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		bool L_5 = m2869(NULL, (*(t550 *)((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0))), &m2869_MI);
		if (!L_5)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		m2867(((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f4), p0)), (t18*) &_stringLiteral162, &m2867_MI);
	}

IL_00fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		bool L_6 = m2868(NULL, p1, (*(t550 *)((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f3), p0))), &m2868_MI);
		if (!L_6)
		{
			goto IL_0133;
		}
	}
	{
		bool L_7 = m2869(NULL, p1, &m2869_MI);
		if (!L_7)
		{
			goto IL_012e;
		}
	}
	{
		m2867((&p1), (t18*) &_stringLiteral163, &m2867_MI);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		bool L_8 = m2869(NULL, (*(t550 *)((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f3), p0))), &m2869_MI);
		if (!L_8)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		m2867(((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f3), p0)), (t18*) &_stringLiteral164, &m2867_MI);
	}

IL_0162:
	{
		bool L_9 = m2869(NULL, p1, &m2869_MI);
		if (!L_9)
		{
			goto IL_0185;
		}
	}
	{
		m2867((&p1), (t18*) &_stringLiteral165, &m2867_MI);
		m2867((&p1), (t18*) &_stringLiteral163, &m2867_MI);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t551_TI));
		*((t550 *)(t550 *)SZArrayLdElema((((t551_SFs*)InitializedTypeInfo(&t551_TI)->static_fields)->f3), p0)) = p1;
		return;
	}
}
// Metadata Definition UnityEngine.SendMouseEvents
extern Il2CppType t47_0_0_32849;
FieldInfo t551_f0_FieldInfo = 
{
	"m_HitIndexGUI", &t47_0_0_32849, &t551_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32849;
FieldInfo t551_f1_FieldInfo = 
{
	"m_HitIndexPhysics3D", &t47_0_0_32849, &t551_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_32849;
FieldInfo t551_f2_FieldInfo = 
{
	"m_HitIndexPhysics2D", &t47_0_0_32849, &t551_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t552_0_0_49;
FieldInfo t551_f3_FieldInfo = 
{
	"m_LastHit", &t552_0_0_49, &t551_TI, offsetof(t551_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t552_0_0_49;
FieldInfo t551_f4_FieldInfo = 
{
	"m_MouseDownHit", &t552_0_0_49, &t551_TI, offsetof(t551_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t552_0_0_49;
FieldInfo t551_f5_FieldInfo = 
{
	"m_CurrentHit", &t552_0_0_49, &t551_TI, offsetof(t551_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t505_0_0_17;
FieldInfo t551_f6_FieldInfo = 
{
	"m_Cameras", &t505_0_0_17, &t551_TI, offsetof(t551_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t551_FIs[] =
{
	&t551_f0_FieldInfo,
	&t551_f1_FieldInfo,
	&t551_f2_FieldInfo,
	&t551_f3_FieldInfo,
	&t551_f4_FieldInfo,
	&t551_f5_FieldInfo,
	&t551_f6_FieldInfo,
	NULL
};
static const int32_t t551_f0_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t551_f0_DefaultValue = 
{
	&t551_f0_FieldInfo, { (char*)&t551_f0_DefaultValueData, &t47_0_0_0 }};
static const int32_t t551_f1_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t551_f1_DefaultValue = 
{
	&t551_f1_FieldInfo, { (char*)&t551_f1_DefaultValueData, &t47_0_0_0 }};
static const int32_t t551_f2_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t551_f2_DefaultValue = 
{
	&t551_f2_FieldInfo, { (char*)&t551_f2_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t551_FDVs[] = 
{
	&t551_f0_DefaultValue,
	&t551_f1_DefaultValue,
	&t551_f2_DefaultValue,
	NULL
};
extern TypeInfo t551_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2870_MI = 
{
	".cctor", (methodPointerType)&m2870, &t551_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 1100, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t551_m2871_ParameterInfos[] = 
{
	{"mouseUsed", 0, 134218877, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"skipRTCameras", 1, 134218878, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t551_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2871_MI = 
{
	"DoSendMouseEvents", (methodPointerType)&m2871, &t551_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t551_m2871_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 1101, NULL, (methodPointerType)NULL};
extern Il2CppType t47_0_0_0;
extern Il2CppType t550_0_0_0;
static ParameterInfo t551_m2872_ParameterInfos[] = 
{
	{"i", 0, 134218879, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"hit", 1, 134218880, &EmptyCustomAttributesCache, &t550_0_0_0},
};
extern TypeInfo t551_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t550 (MethodInfo* method, void* obj, void** args);
MethodInfo m2872_MI = 
{
	"SendEvents", (methodPointerType)&m2872, &t551_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t550, t551_m2872_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 1102, NULL, (methodPointerType)NULL};
static MethodInfo* t551_MIs[] =
{
	&m2870_MI,
	&m2871_MI,
	&m2872_MI,
	NULL
};
extern TypeInfo t550_TI;
static TypeInfo* t551_TI__nestedTypes[2] =
{
	&t550_TI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t551_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t551_0_0_0;
extern Il2CppType t551_1_0_0;
extern TypeInfo t28_TI;
struct t551;
extern TypeInfo t551_TI;
TypeInfo t551_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SendMouseEvents", "UnityEngine", t551_MIs, NULL, t551_FIs, NULL, &t28_TI, t551_TI__nestedTypes, NULL, &t551_TI, NULL, t551_VT, &EmptyCustomAttributesCache, &t551_TI, &t551_0_0_0, &t551_1_0_0, NULL, NULL, NULL, t551_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t551), 0, -1, sizeof(t551_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 3, 0, 7, 0, 1, 4, 0, 0};
#include "t553.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t553_TI;
#include "t553MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m2873_MI;
 void m2873 (t553 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.PropertyAttribute
extern TypeInfo t553_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2873_MI = 
{
	".ctor", (methodPointerType)&m2873, &t553_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1106, NULL, (methodPointerType)NULL};
static MethodInfo* t553_MIs[] =
{
	&m2873_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t553_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t553_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t553_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 256, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, true, &m3040_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t553__CustomAttributeCache = {
1,
NULL,
&t553_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t553_0_0_0;
extern Il2CppType t553_1_0_0;
extern TypeInfo t498_TI;
struct t553;
extern TypeInfo t553_TI;
extern CustomAttributesCache t553__CustomAttributeCache;
TypeInfo t553_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PropertyAttribute", "UnityEngine", t553_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t553_TI, NULL, t553_VT, &t553__CustomAttributeCache, &t553_TI, &t553_0_0_0, &t553_1_0_0, t553_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t553), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t411.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t411_TI;
#include "t411MD.h"

extern TypeInfo t411_TI;
extern MethodInfo m2873_MI;


extern MethodInfo m2006_MI;
 void m2006 (t411 * __this, t18* p0, MethodInfo* method){
	{
		m2873(__this, &m2873_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition UnityEngine.TooltipAttribute
extern Il2CppType t18_0_0_38;
FieldInfo t411_f0_FieldInfo = 
{
	"tooltip", &t18_0_0_38, &t411_TI, offsetof(t411, f0), &EmptyCustomAttributesCache};
static FieldInfo* t411_FIs[] =
{
	&t411_f0_FieldInfo,
	NULL
};
extern Il2CppType t18_0_0_0;
static ParameterInfo t411_m2006_ParameterInfos[] = 
{
	{"tooltip", 0, 134218885, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t411_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2006_MI = 
{
	".ctor", (methodPointerType)&m2006, &t411_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t411_m2006_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1107, NULL, (methodPointerType)NULL};
static MethodInfo* t411_MIs[] =
{
	&m2006_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t411_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t411_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t411_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 256, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, true, &m3040_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t411__CustomAttributeCache = {
1,
NULL,
&t411_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t411_0_0_0;
extern Il2CppType t411_1_0_0;
extern TypeInfo t553_TI;
struct t411;
extern TypeInfo t411_TI;
extern CustomAttributesCache t411__CustomAttributeCache;
TypeInfo t411_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TooltipAttribute", "UnityEngine", t411_MIs, NULL, t411_FIs, NULL, &t553_TI, NULL, NULL, &t411_TI, NULL, t411_VT, &t411__CustomAttributeCache, &t411_TI, &t411_0_0_0, &t411_1_0_0, t411_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t411), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t406.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t406_TI;
#include "t406MD.h"

extern TypeInfo t406_TI;
extern MethodInfo m2873_MI;


extern MethodInfo m1950_MI;
 void m1950 (t406 * __this, float p0, MethodInfo* method){
	{
		m2873(__this, &m2873_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition UnityEngine.SpaceAttribute
extern Il2CppType t33_0_0_38;
FieldInfo t406_f0_FieldInfo = 
{
	"height", &t33_0_0_38, &t406_TI, offsetof(t406, f0), &EmptyCustomAttributesCache};
static FieldInfo* t406_FIs[] =
{
	&t406_f0_FieldInfo,
	NULL
};
extern Il2CppType t33_0_0_0;
static ParameterInfo t406_m1950_ParameterInfos[] = 
{
	{"height", 0, 134218886, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t406_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m1950_MI = 
{
	".ctor", (methodPointerType)&m1950, &t406_TI, &t30_0_0_0, RuntimeInvoker_t30_t33, t406_m1950_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1108, NULL, (methodPointerType)NULL};
static MethodInfo* t406_MIs[] =
{
	&m1950_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t406_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t406_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t406_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 256, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, true, &m3040_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, true, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t406__CustomAttributeCache = {
1,
NULL,
&t406_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t406_0_0_0;
extern Il2CppType t406_1_0_0;
extern TypeInfo t553_TI;
struct t406;
extern TypeInfo t406_TI;
extern CustomAttributesCache t406__CustomAttributeCache;
TypeInfo t406_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SpaceAttribute", "UnityEngine", t406_MIs, NULL, t406_FIs, NULL, &t553_TI, NULL, NULL, &t406_TI, NULL, t406_VT, &t406__CustomAttributeCache, &t406_TI, &t406_0_0_0, &t406_1_0_0, t406_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t406), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t361.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t361_TI;
#include "t361MD.h"

extern TypeInfo t361_TI;
extern MethodInfo m2873_MI;


extern MethodInfo m1657_MI;
 void m1657 (t361 * __this, float p0, float p1, MethodInfo* method){
	{
		m2873(__this, &m2873_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition UnityEngine.RangeAttribute
extern Il2CppType t33_0_0_38;
FieldInfo t361_f0_FieldInfo = 
{
	"min", &t33_0_0_38, &t361_TI, offsetof(t361, f0), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_38;
FieldInfo t361_f1_FieldInfo = 
{
	"max", &t33_0_0_38, &t361_TI, offsetof(t361, f1), &EmptyCustomAttributesCache};
static FieldInfo* t361_FIs[] =
{
	&t361_f0_FieldInfo,
	&t361_f1_FieldInfo,
	NULL
};
extern Il2CppType t33_0_0_0;
extern Il2CppType t33_0_0_0;
static ParameterInfo t361_m1657_ParameterInfos[] = 
{
	{"min", 0, 134218887, &EmptyCustomAttributesCache, &t33_0_0_0},
	{"max", 1, 134218888, &EmptyCustomAttributesCache, &t33_0_0_0},
};
extern TypeInfo t361_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t33_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m1657_MI = 
{
	".ctor", (methodPointerType)&m1657, &t361_TI, &t30_0_0_0, RuntimeInvoker_t30_t33_t33, t361_m1657_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1109, NULL, (methodPointerType)NULL};
static MethodInfo* t361_MIs[] =
{
	&m1657_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t361_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t361_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t361_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 256, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, true, &m3040_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t361__CustomAttributeCache = {
1,
NULL,
&t361_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t361_0_0_0;
extern Il2CppType t361_1_0_0;
extern TypeInfo t553_TI;
struct t361;
extern TypeInfo t361_TI;
extern CustomAttributesCache t361__CustomAttributeCache;
TypeInfo t361_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "RangeAttribute", "UnityEngine", t361_MIs, NULL, t361_FIs, NULL, &t553_TI, NULL, NULL, &t361_TI, NULL, t361_VT, &t361__CustomAttributeCache, &t361_TI, &t361_0_0_0, &t361_1_0_0, t361_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t361), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 1};
#include "t415.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t415_TI;
#include "t415MD.h"

extern TypeInfo t415_TI;
extern MethodInfo m2873_MI;


extern MethodInfo m2035_MI;
 void m2035 (t415 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m2873(__this, &m2873_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition UnityEngine.TextAreaAttribute
extern Il2CppType t47_0_0_38;
FieldInfo t415_f0_FieldInfo = 
{
	"minLines", &t47_0_0_38, &t415_TI, offsetof(t415, f0), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_38;
FieldInfo t415_f1_FieldInfo = 
{
	"maxLines", &t47_0_0_38, &t415_TI, offsetof(t415, f1), &EmptyCustomAttributesCache};
static FieldInfo* t415_FIs[] =
{
	&t415_f0_FieldInfo,
	&t415_f1_FieldInfo,
	NULL
};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t415_m2035_ParameterInfos[] = 
{
	{"minLines", 0, 134218889, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"maxLines", 1, 134218890, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t415_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t47_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2035_MI = 
{
	".ctor", (methodPointerType)&m2035, &t415_TI, &t30_0_0_0, RuntimeInvoker_t30_t47_t47, t415_m2035_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1110, NULL, (methodPointerType)NULL};
static MethodInfo* t415_MIs[] =
{
	&m2035_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t415_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t415_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t415_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 256, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, true, &m3040_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t415__CustomAttributeCache = {
1,
NULL,
&t415_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t415_0_0_0;
extern Il2CppType t415_1_0_0;
extern TypeInfo t553_TI;
struct t415;
extern TypeInfo t415_TI;
extern CustomAttributesCache t415__CustomAttributeCache;
TypeInfo t415_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextAreaAttribute", "UnityEngine", t415_MIs, NULL, t415_FIs, NULL, &t553_TI, NULL, NULL, &t415_TI, NULL, t415_VT, &t415__CustomAttributeCache, &t415_TI, &t415_0_0_0, &t415_1_0_0, t415_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t415), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 1};
#include "t409.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t409_TI;
#include "t409MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m1978_MI;
 void m1978 (t409 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.SelectionBaseAttribute
extern TypeInfo t409_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1978_MI = 
{
	".ctor", (methodPointerType)&m1978, &t409_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1111, NULL, (methodPointerType)NULL};
static MethodInfo* t409_MIs[] =
{
	&m1978_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t409_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t409_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t409_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 4, &m3039_MI);
		extern MethodInfo m3040_MI;
		m3040(tmp, true, &m3040_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t409__CustomAttributeCache = {
1,
NULL,
&t409_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t409_0_0_0;
extern Il2CppType t409_1_0_0;
extern TypeInfo t498_TI;
struct t409;
extern TypeInfo t409_TI;
extern CustomAttributesCache t409__CustomAttributeCache;
TypeInfo t409_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SelectionBaseAttribute", "UnityEngine", t409_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t409_TI, NULL, t409_VT, &t409__CustomAttributeCache, &t409_TI, &t409_0_0_0, &t409_1_0_0, t409_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t409), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t554.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t554_TI;
#include "t554MD.h"

extern MethodInfo m203_MI;


extern MethodInfo m2874_MI;
 void m2874 (t554 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
// Metadata Definition UnityEngine.SliderState
extern Il2CppType t33_0_0_6;
FieldInfo t554_f0_FieldInfo = 
{
	"dragStartPos", &t33_0_0_6, &t554_TI, offsetof(t554, f0), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_6;
FieldInfo t554_f1_FieldInfo = 
{
	"dragStartValue", &t33_0_0_6, &t554_TI, offsetof(t554, f1), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t554_f2_FieldInfo = 
{
	"isDragging", &t31_0_0_6, &t554_TI, offsetof(t554, f2), &EmptyCustomAttributesCache};
static FieldInfo* t554_FIs[] =
{
	&t554_f0_FieldInfo,
	&t554_f1_FieldInfo,
	&t554_f2_FieldInfo,
	NULL
};
extern TypeInfo t554_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2874_MI = 
{
	".ctor", (methodPointerType)&m2874, &t554_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1112, NULL, (methodPointerType)NULL};
static MethodInfo* t554_MIs[] =
{
	&m2874_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t554_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t554_0_0_0;
extern Il2CppType t554_1_0_0;
extern TypeInfo t28_TI;
struct t554;
extern TypeInfo t554_TI;
TypeInfo t554_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SliderState", "UnityEngine", t554_MIs, NULL, t554_FIs, NULL, &t28_TI, NULL, NULL, &t554_TI, NULL, t554_VT, &EmptyCustomAttributesCache, &t554_TI, &t554_0_0_0, &t554_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t554), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t555.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t555_TI;
#include "t555MD.h"

#include "t556.h"
#include "t321.h"
#include "t319.h"
#include "t632.h"
#include "t633.h"
#include "t634.h"
extern TypeInfo t18_TI;
extern TypeInfo t555_TI;
extern TypeInfo t556_TI;
extern TypeInfo t331_TI;
extern TypeInfo t321_TI;
extern TypeInfo t319_TI;
extern TypeInfo t36_TI;
extern TypeInfo t322_TI;
extern TypeInfo t226_TI;
extern TypeInfo t220_TI;
extern TypeInfo t632_TI;
extern TypeInfo t47_TI;
extern TypeInfo t633_TI;
extern TypeInfo t635_TI;
extern TypeInfo t634_TI;
#include "t556MD.h"
#include "t321MD.h"
#include "t319MD.h"
#include "t632MD.h"
#include "t633MD.h"
#include "t634MD.h"
#include "t47MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m3044_MI;
extern MethodInfo m2883_MI;
extern MethodInfo m3045_MI;
extern MethodInfo m3046_MI;
extern MethodInfo m2881_MI;
extern MethodInfo m1799_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m2984_MI;
extern MethodInfo m1828_MI;
extern MethodInfo m3047_MI;
extern MethodInfo m2985_MI;
extern MethodInfo m3048_MI;
extern MethodInfo m1798_MI;
extern MethodInfo m3049_MI;
extern MethodInfo m1878_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m3050_MI;
extern MethodInfo m3051_MI;
extern MethodInfo m1453_MI;
extern MethodInfo m3052_MI;
extern MethodInfo m1854_MI;
extern MethodInfo m2879_MI;
extern MethodInfo m3053_MI;
extern MethodInfo m1855_MI;
extern MethodInfo m3054_MI;
extern MethodInfo m1879_MI;
extern MethodInfo m3055_MI;
extern MethodInfo m3056_MI;
extern MethodInfo m3057_MI;
extern MethodInfo m3058_MI;
extern MethodInfo m1881_MI;
extern MethodInfo m3059_MI;
extern MethodInfo m3060_MI;
extern MethodInfo m3061_MI;
extern MethodInfo m3062_MI;
extern MethodInfo m3063_MI;
extern MethodInfo m3064_MI;
extern MethodInfo m3065_MI;
extern MethodInfo m128_MI;
extern MethodInfo m3066_MI;
extern MethodInfo m3067_MI;
extern MethodInfo m3068_MI;


extern MethodInfo m2875_MI;
 void m2875 (t555 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2876_MI;
 void m2876 (t28 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		((t555_SFs*)InitializedTypeInfo(&t555_TI)->static_fields)->f0 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		return;
	}
}
extern MethodInfo m2877_MI;
 void m2877 (t28 * __this, t18* p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		((t555_SFs*)InitializedTypeInfo(&t555_TI)->static_fields)->f0 = p0;
		return;
	}
}
extern MethodInfo m2878_MI;
 t18* m2878 (t28 * __this, MethodInfo* method){
	t556 * V_0 = {0};
	t18* V_1 = {0};
	{
		t556 * L_0 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m3044(L_0, 1, 1, &m3044_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		t18* L_1 = m2883(NULL, V_0, &m2883_MI);
		t18* L_2 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3045_MI, L_1);
		V_1 = L_2;
		return V_1;
	}
}
extern MethodInfo m2879_MI;
 bool m2879 (t28 * __this, t28 * p0, MethodInfo* method){
	t18* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		V_0 = ((t18*)Castclass(p0, (&t18_TI)));
		bool L_0 = m3046(V_0, (t18*) &_stringLiteral166, &m3046_MI);
		if (L_0)
		{
			goto IL_0064;
		}
	}
	{
		bool L_1 = m3046(V_0, (t18*) &_stringLiteral167, &m3046_MI);
		if (L_1)
		{
			goto IL_0064;
		}
	}
	{
		bool L_2 = m3046(V_0, (t18*) &_stringLiteral168, &m3046_MI);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		bool L_3 = m3046(V_0, (t18*) &_stringLiteral169, &m3046_MI);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		bool L_4 = m3046(V_0, (t18*) &_stringLiteral170, &m3046_MI);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		bool L_5 = m3046(V_0, (t18*) &_stringLiteral171, &m3046_MI);
		G_B7_0 = ((int32_t)(L_5));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
extern MethodInfo m2880_MI;
 t18* m2880 (t28 * __this, t28 * p0, MethodInfo* method){
	t18* V_0 = {0};
	t18* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		V_0 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		V_1 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		m2881(NULL, p0, (&V_0), (&V_1), &m2881_MI);
		t18* L_0 = m1799(NULL, V_0, (t18*) &_stringLiteral93, V_1, &m1799_MI);
		return L_0;
	}
}
extern MethodInfo m2881_MI;
 void m2881 (t28 * __this, t28 * p0, t18** p1, t18** p2, MethodInfo* method){
	t321 * V_0 = {0};
	t319 * V_1 = {0};
	t18* V_2 = {0};
	t18* V_3 = {0};
	t18* V_4 = {0};
	t556 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		if (p0)
		{
			goto IL_0011;
		}
	}
	{
		t331 * L_0 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m2043(L_0, (t18*) &_stringLiteral172, &m2043_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0011:
	{
		V_0 = ((t321 *)IsInst(p0, InitializedTypeInfo(&t321_TI)));
		if (V_0)
		{
			goto IL_0029;
		}
	}
	{
		t331 * L_1 = (t331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t331_TI));
		m2043(L_1, (t18*) &_stringLiteral173, &m2043_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0029:
	{
		t18* L_2 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m2984_MI, V_0);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		t18* L_3 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m2984_MI, V_0);
		int32_t L_4 = m1828(L_3, &m1828_MI);
		G_B7_0 = ((int32_t)(L_4*2));
	}

IL_004b:
	{
		t319 * L_5 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m3047(L_5, G_B7_0, &m3047_MI);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		*((t28 **)(p1)) = (t28 *)(((t18_SFs*)(&t18_TI)->static_fields)->f2);
		V_2 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		goto IL_00ff;
	}

IL_0063:
	{
		int32_t L_6 = m1828(V_2, &m1828_MI);
		if (L_6)
		{
			goto IL_007a;
		}
	}
	{
		t18* L_7 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m2984_MI, V_0);
		V_2 = L_7;
		goto IL_008c;
	}

IL_007a:
	{
		t18* L_8 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m2984_MI, V_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_9 = m1799(NULL, L_8, (t18*) &_stringLiteral93, V_2, &m1799_MI);
		V_2 = L_9;
	}

IL_008c:
	{
		t36 * L_10 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m2985_MI, V_0);
		t18* L_11 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3048_MI, L_10);
		V_3 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		V_4 = (((t18_SFs*)(&t18_TI)->static_fields)->f2);
		t18* L_12 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m1798_MI, V_0);
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		t18* L_13 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m1798_MI, V_0);
		V_4 = L_13;
	}

IL_00b2:
	{
		t18* L_14 = m3049(V_4, &m3049_MI);
		int32_t L_15 = m1828(L_14, &m1828_MI);
		if (!L_15)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_16 = m1878(NULL, V_3, (t18*) &_stringLiteral174, &m1878_MI);
		V_3 = L_16;
		t18* L_17 = m1878(NULL, V_3, V_4, &m1878_MI);
		V_3 = L_17;
	}

IL_00d8:
	{
		*((t28 **)(p1)) = (t28 *)V_3;
		t321 * L_18 = (t321 *)VirtFuncInvoker0< t321 * >::Invoke(&m2982_MI, V_0);
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_19 = m3050(NULL, (t18*) &_stringLiteral175, V_3, (t18*) &_stringLiteral93, V_2, &m3050_MI);
		V_2 = L_19;
	}

IL_00f8:
	{
		t321 * L_20 = (t321 *)VirtFuncInvoker0< t321 * >::Invoke(&m2982_MI, V_0);
		V_0 = L_20;
	}

IL_00ff:
	{
		if (V_0)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_21 = m1878(NULL, V_2, (t18*) &_stringLiteral93, &m1878_MI);
		m3051(V_1, L_21, &m3051_MI);
		t556 * L_22 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m3044(L_22, 1, 1, &m3044_MI);
		V_5 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		t18* L_23 = m2883(NULL, V_5, &m2883_MI);
		m3051(V_1, L_23, &m3051_MI);
		t18* L_24 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m1453_MI, V_1);
		*((t28 **)(p2)) = (t28 *)L_24;
		return;
	}
}
extern MethodInfo m2882_MI;
 t18* m2882 (t28 * __this, t18* p0, bool p1, MethodInfo* method){
	t455* V_0 = {0};
	t319 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t18* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		if (p0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		return (((t18_SFs*)(&t18_TI)->static_fields)->f2);
	}

IL_000c:
	{
		t226* L_0 = ((t226*)SZArrayNew(InitializedTypeInfo(&t226_TI), 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)10);
		t455* L_1 = m3052(p0, L_0, &m3052_MI);
		V_0 = L_1;
		int32_t L_2 = m1828(p0, &m1828_MI);
		t319 * L_3 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m3047(L_3, L_2, &m3047_MI);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		t18* L_4 = m3049((*(t18**)(t18**)SZArrayLdElema(V_0, V_2)), &m3049_MI);
		ArrayElementTypeCheck (V_0, L_4);
		*((t18**)(t18**)SZArrayLdElema(V_0, V_2)) = (t18*)L_4;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0040:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t29 *)V_0)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		V_4 = (*(t18**)(t18**)SZArrayLdElema(V_0, V_3));
		int32_t L_5 = m1828(V_4, &m1828_MI);
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		uint16_t L_6 = m1854(V_4, 0, &m1854_MI);
		if ((((uint32_t)L_6) != ((uint32_t)((int32_t)10))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		bool L_7 = m3046(V_4, (t18*) &_stringLiteral176, &m3046_MI);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		if (!p1)
		{
			goto IL_00a7;
		}
	}
	{
		bool L_8 = m3046(V_4, (t18*) &_stringLiteral177, &m3046_MI);
		if (!L_8)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		if (!p1)
		{
			goto IL_00fa;
		}
	}
	{
		if ((((int32_t)V_3) >= ((int32_t)((int32_t)((((int32_t)(((t29 *)V_0)->max_length)))-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		bool L_9 = m2879(NULL, V_4, &m2879_MI);
		if (!L_9)
		{
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		bool L_10 = m2879(NULL, (*(t18**)(t18**)SZArrayLdElema(V_0, ((int32_t)(V_3+1)))), &m2879_MI);
		if (!L_10)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		int32_t L_11 = m3053(V_4, (t18*) &_stringLiteral178, &m3053_MI);
		V_5 = L_11;
		if ((((int32_t)V_5) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		t18* L_12 = m1855(V_4, 0, V_5, &m1855_MI);
		V_4 = L_12;
	}

IL_00fa:
	{
		int32_t L_13 = m3053(V_4, (t18*) &_stringLiteral179, &m3053_MI);
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		int32_t L_14 = m3053(V_4, (t18*) &_stringLiteral180, &m3053_MI);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		int32_t L_15 = m3053(V_4, (t18*) &_stringLiteral181, &m3053_MI);
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		if (!p1)
		{
			goto IL_016c;
		}
	}
	{
		bool L_16 = m3046(V_4, (t18*) &_stringLiteral182, &m3046_MI);
		if (!L_16)
		{
			goto IL_016c;
		}
	}
	{
		bool L_17 = m3054(V_4, (t18*) &_stringLiteral183, &m3054_MI);
		if (!L_17)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		bool L_18 = m3046(V_4, (t18*) &_stringLiteral184, &m3046_MI);
		if (!L_18)
		{
			goto IL_0188;
		}
	}
	{
		t18* L_19 = m1879(V_4, 0, 3, &m1879_MI);
		V_4 = L_19;
	}

IL_0188:
	{
		int32_t L_20 = m3053(V_4, (t18*) &_stringLiteral185, &m3053_MI);
		V_6 = L_20;
		V_7 = (-1);
		if ((((int32_t)V_6) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		int32_t L_21 = m3055(V_4, (t18*) &_stringLiteral183, V_6, &m3055_MI);
		V_7 = L_21;
	}

IL_01b1:
	{
		if ((((int32_t)V_6) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_6)))
		{
			goto IL_01d4;
		}
	}
	{
		t18* L_22 = m1879(V_4, V_6, ((int32_t)(((int32_t)(V_7-V_6))+1)), &m1879_MI);
		V_4 = L_22;
	}

IL_01d4:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_23 = m3056(V_4, (t18*) &_stringLiteral186, (((t18_SFs*)(&t18_TI)->static_fields)->f2), &m3056_MI);
		V_4 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		t18* L_24 = m3056(V_4, (((t555_SFs*)InitializedTypeInfo(&t555_TI)->static_fields)->f0), (((t18_SFs*)(&t18_TI)->static_fields)->f2), &m3056_MI);
		V_4 = L_24;
		t18* L_25 = m3057(V_4, ((int32_t)92), ((int32_t)47), &m3057_MI);
		V_4 = L_25;
		int32_t L_26 = m3058(V_4, (t18*) &_stringLiteral187, &m3058_MI);
		V_8 = L_26;
		if ((((int32_t)V_8) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		t18* L_27 = m1879(V_4, V_8, 5, &m1879_MI);
		V_4 = L_27;
		t18* L_28 = m1881(V_4, V_8, (t18*) &_stringLiteral188, &m1881_MI);
		V_4 = L_28;
		int32_t L_29 = m1828(V_4, &m1828_MI);
		t18* L_30 = m1881(V_4, L_29, (t18*) &_stringLiteral65, &m1881_MI);
		V_4 = L_30;
	}

IL_024e:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_31 = m1878(NULL, V_4, (t18*) &_stringLiteral93, &m1878_MI);
		m3051(V_1, L_31, &m3051_MI);
	}

IL_0261:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0265:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t29 *)V_0)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		t18* L_32 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m1453_MI, V_1);
		return L_32;
	}
}
extern MethodInfo m2883_MI;
 t18* m2883 (t28 * __this, t556 * p0, MethodInfo* method){
	t319 * V_0 = {0};
	int32_t V_1 = 0;
	t632 * V_2 = {0};
	t633 * V_3 = {0};
	t36 * V_4 = {0};
	t18* V_5 = {0};
	int32_t V_6 = 0;
	t635* V_7 = {0};
	bool V_8 = false;
	t18* V_9 = {0};
	int32_t V_10 = 0;
	{
		t319 * L_0 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m3047(L_0, ((int32_t)255), &m3047_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		t632 * L_1 = (t632 *)VirtFuncInvoker1< t632 *, int32_t >::Invoke(&m3059_MI, p0, V_1);
		V_2 = L_1;
		t633 * L_2 = (t633 *)VirtFuncInvoker0< t633 * >::Invoke(&m3060_MI, V_2);
		V_3 = L_2;
		if (V_3)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		t36 * L_3 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3061_MI, V_3);
		V_4 = L_3;
		if (V_4)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		t18* L_4 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3062_MI, V_4);
		V_5 = L_4;
		if (!V_5)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_5 = m1828(V_5, &m1828_MI);
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		m3051(V_0, V_5, &m3051_MI);
		m3051(V_0, (t18*) &_stringLiteral57, &m3051_MI);
	}

IL_0071:
	{
		t18* L_6 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3048_MI, V_4);
		m3051(V_0, L_6, &m3051_MI);
		m3051(V_0, (t18*) &_stringLiteral189, &m3051_MI);
		t18* L_7 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3048_MI, V_3);
		m3051(V_0, L_7, &m3051_MI);
		m3051(V_0, (t18*) &_stringLiteral190, &m3051_MI);
		V_6 = 0;
		t635* L_8 = (t635*)VirtFuncInvoker0< t635* >::Invoke(&m3063_MI, V_3);
		V_7 = L_8;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		if (V_8)
		{
			goto IL_00cf;
		}
	}
	{
		m3051(V_0, (t18*) &_stringLiteral191, &m3051_MI);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		t36 * L_9 = (t36 *)VirtFuncInvoker0< t36 * >::Invoke(&m3064_MI, (*(t634 **)(t634 **)SZArrayLdElema(V_7, V_6)));
		t18* L_10 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3048_MI, L_9);
		m3051(V_0, L_10, &m3051_MI);
		V_6 = ((int32_t)(V_6+1));
	}

IL_00ee:
	{
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((t29 *)V_7)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		m3051(V_0, (t18*) &_stringLiteral65, &m3051_MI);
		t18* L_11 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3065_MI, V_2);
		V_9 = L_11;
		if (!V_9)
		{
			goto IL_01b9;
		}
	}
	{
		t18* L_12 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3048_MI, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_13 = m128(NULL, L_12, (t18*) &_stringLiteral192, &m128_MI);
		if (!L_13)
		{
			goto IL_0140;
		}
	}
	{
		t18* L_14 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m3062_MI, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_15 = m128(NULL, L_14, (t18*) &_stringLiteral193, &m128_MI);
		if (L_15)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		m3051(V_0, (t18*) &_stringLiteral188, &m3051_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		bool L_16 = m3046(V_9, (((t555_SFs*)InitializedTypeInfo(&t555_TI)->static_fields)->f0), &m3046_MI);
		if (!L_16)
		{
			goto IL_0182;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t555_TI));
		int32_t L_17 = m1828((((t555_SFs*)InitializedTypeInfo(&t555_TI)->static_fields)->f0), &m1828_MI);
		int32_t L_18 = m1828(V_9, &m1828_MI);
		int32_t L_19 = m1828((((t555_SFs*)InitializedTypeInfo(&t555_TI)->static_fields)->f0), &m1828_MI);
		t18* L_20 = m1855(V_9, L_17, ((int32_t)(L_18-L_19)), &m1855_MI);
		V_9 = L_20;
	}

IL_0182:
	{
		m3051(V_0, V_9, &m3051_MI);
		m3051(V_0, (t18*) &_stringLiteral189, &m3051_MI);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3066_MI, V_2);
		V_10 = L_21;
		t18* L_22 = m3067((&V_10), &m3067_MI);
		m3051(V_0, L_22, &m3051_MI);
		m3051(V_0, (t18*) &_stringLiteral65, &m3051_MI);
	}

IL_01b9:
	{
		m3051(V_0, (t18*) &_stringLiteral93, &m3051_MI);
	}

IL_01c5:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_01c9:
	{
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3068_MI, p0);
		if ((((int32_t)V_1) < ((int32_t)L_23)))
		{
			goto IL_0012;
		}
	}
	{
		t18* L_24 = (t18*)VirtFuncInvoker0< t18* >::Invoke(&m1453_MI, V_0);
		return L_24;
	}
}
// Metadata Definition UnityEngine.StackTraceUtility
extern Il2CppType t18_0_0_17;
FieldInfo t555_f0_FieldInfo = 
{
	"projectFolder", &t18_0_0_17, &t555_TI, offsetof(t555_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t555_FIs[] =
{
	&t555_f0_FieldInfo,
	NULL
};
extern TypeInfo t555_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2875_MI = 
{
	".ctor", (methodPointerType)&m2875, &t555_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1113, NULL, (methodPointerType)NULL};
extern TypeInfo t555_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2876_MI = 
{
	".cctor", (methodPointerType)&m2876, &t555_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 1114, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t555_m2877_ParameterInfos[] = 
{
	{"folder", 0, 134218891, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t555_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2877_MI = 
{
	"SetProjectFolder", (methodPointerType)&m2877, &t555_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t555_m2877_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 1115, NULL, (methodPointerType)NULL};
extern TypeInfo t555_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t555__CustomAttributeCache_m2878;
MethodInfo m2878_MI = 
{
	"ExtractStackTrace", (methodPointerType)&m2878, &t555_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &t555__CustomAttributeCache_m2878, 150, 0, 255, 0, false, false, 1116, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t555_m2879_ParameterInfos[] = 
{
	{"name", 0, 134218892, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t555_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2879_MI = 
{
	"IsSystemStacktraceType", (methodPointerType)&m2879, &t555_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t555_m2879_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1117, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
static ParameterInfo t555_m2880_ParameterInfos[] = 
{
	{"exception", 0, 134218893, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t555_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2880_MI = 
{
	"ExtractStringFromException", (methodPointerType)&m2880, &t555_TI, &t18_0_0_0, RuntimeInvoker_t28_t28, t555_m2880_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 1118, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t18_1_0_0;
extern Il2CppType t18_1_0_0;
static ParameterInfo t555_m2881_ParameterInfos[] = 
{
	{"exceptiono", 0, 134218894, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"message", 1, 134218895, &EmptyCustomAttributesCache, &t18_1_0_0},
	{"stackTrace", 2, 134218896, &EmptyCustomAttributesCache, &t18_1_0_0},
};
extern TypeInfo t555_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t636_t636 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t555__CustomAttributeCache_m2881;
MethodInfo m2881_MI = 
{
	"ExtractStringFromExceptionInternal", (methodPointerType)&m2881, &t555_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t636_t636, t555_m2881_ParameterInfos, &t555__CustomAttributeCache_m2881, 147, 0, 255, 3, false, false, 1119, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t555_m2882_ParameterInfos[] = 
{
	{"oldString", 0, 134218897, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"stripEngineInternalInformation", 1, 134218898, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern TypeInfo t555_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28_t28_t323 (MethodInfo* method, void* obj, void** args);
MethodInfo m2882_MI = 
{
	"PostprocessStacktrace", (methodPointerType)&m2882, &t555_TI, &t18_0_0_0, RuntimeInvoker_t28_t28_t323, t555_m2882_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 1120, NULL, (methodPointerType)NULL};
extern Il2CppType t556_0_0_0;
static ParameterInfo t555_m2883_ParameterInfos[] = 
{
	{"stackTrace", 0, 134218899, &EmptyCustomAttributesCache, &t556_0_0_0},
};
extern TypeInfo t555_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t555__CustomAttributeCache_m2883;
MethodInfo m2883_MI = 
{
	"ExtractFormattedStackTrace", (methodPointerType)&m2883, &t555_TI, &t18_0_0_0, RuntimeInvoker_t28_t28, t555_m2883_ParameterInfos, &t555__CustomAttributeCache_m2883, 147, 0, 255, 1, false, false, 1121, NULL, (methodPointerType)NULL};
static MethodInfo* t555_MIs[] =
{
	&m2875_MI,
	&m2876_MI,
	&m2877_MI,
	&m2878_MI,
	&m2879_MI,
	&m2880_MI,
	&m2881_MI,
	&m2882_MI,
	&m2883_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t555_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t618_TI;
extern MethodInfo m3019_MI;
void t555_CustomAttributesCacheGenerator_m2878(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t618_TI;
extern MethodInfo m3019_MI;
void t555_CustomAttributesCacheGenerator_m2881(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t618_TI;
extern MethodInfo m3019_MI;
void t555_CustomAttributesCacheGenerator_m2883(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t618 * tmp;
		tmp = (t618 *)il2cpp_codegen_object_new (&t618_TI);
		m3019(tmp, &m3019_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t555__CustomAttributeCache_m2878 = {
1,
NULL,
&t555_CustomAttributesCacheGenerator_m2878
};
CustomAttributesCache t555__CustomAttributeCache_m2881 = {
1,
NULL,
&t555_CustomAttributesCacheGenerator_m2881
};
CustomAttributesCache t555__CustomAttributeCache_m2883 = {
1,
NULL,
&t555_CustomAttributesCacheGenerator_m2883
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t555_0_0_0;
extern Il2CppType t555_1_0_0;
extern TypeInfo t28_TI;
struct t555;
extern TypeInfo t555_TI;
extern CustomAttributesCache t555__CustomAttributeCache_m2878;
extern CustomAttributesCache t555__CustomAttributeCache_m2881;
extern CustomAttributesCache t555__CustomAttributeCache_m2883;
TypeInfo t555_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "StackTraceUtility", "UnityEngine", t555_MIs, NULL, t555_FIs, NULL, &t28_TI, NULL, NULL, &t555_TI, NULL, t555_VT, &EmptyCustomAttributesCache, &t555_TI, &t555_0_0_0, &t555_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t555), 0, -1, sizeof(t555_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, true, false, false, 9, 0, 1, 0, 0, 4, 0, 0};
#include "t379.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t379_TI;
#include "t379MD.h"

extern MethodInfo m3069_MI;
extern MethodInfo m3070_MI;
extern MethodInfo m3071_MI;


extern MethodInfo m2884_MI;
 void m2884 (t379 * __this, MethodInfo* method){
	{
		m3069(__this, (t18*) &_stringLiteral194, &m3069_MI);
		m3070(__this, ((int32_t)-2147467261), &m3070_MI);
		return;
	}
}
extern MethodInfo m2885_MI;
 void m2885 (t379 * __this, t18* p0, MethodInfo* method){
	{
		m3069(__this, p0, &m3069_MI);
		m3070(__this, ((int32_t)-2147467261), &m3070_MI);
		return;
	}
}
extern MethodInfo m2886_MI;
 void m2886 (t379 * __this, t18* p0, t321 * p1, MethodInfo* method){
	{
		m3071(__this, p0, p1, &m3071_MI);
		m3070(__this, ((int32_t)-2147467261), &m3070_MI);
		return;
	}
}
// Metadata Definition UnityEngine.UnityException
extern Il2CppType t47_0_0_32849;
FieldInfo t379_f11_FieldInfo = 
{
	"Result", &t47_0_0_32849, &t379_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t379_f12_FieldInfo = 
{
	"unityStackTrace", &t18_0_0_1, &t379_TI, offsetof(t379, f12), &EmptyCustomAttributesCache};
static FieldInfo* t379_FIs[] =
{
	&t379_f11_FieldInfo,
	&t379_f12_FieldInfo,
	NULL
};
static const int32_t t379_f11_DefaultValueData = -2147467261;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t379_f11_DefaultValue = 
{
	&t379_f11_FieldInfo, { (char*)&t379_f11_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t379_FDVs[] = 
{
	&t379_f11_DefaultValue,
	NULL
};
extern TypeInfo t379_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2884_MI = 
{
	".ctor", (methodPointerType)&m2884, &t379_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1122, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t379_m2885_ParameterInfos[] = 
{
	{"message", 0, 134218900, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t379_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2885_MI = 
{
	".ctor", (methodPointerType)&m2885, &t379_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t379_m2885_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1123, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
extern Il2CppType t321_0_0_0;
static ParameterInfo t379_m2886_ParameterInfos[] = 
{
	{"message", 0, 134218901, &EmptyCustomAttributesCache, &t18_0_0_0},
	{"innerException", 1, 134218902, &EmptyCustomAttributesCache, &t321_0_0_0},
};
extern TypeInfo t379_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2886_MI = 
{
	".ctor", (methodPointerType)&m2886, &t379_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t379_m2886_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1124, NULL, (methodPointerType)NULL};
static MethodInfo* t379_MIs[] =
{
	&m2884_MI,
	&m2885_MI,
	&m2886_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m2980_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m2982_MI;
extern MethodInfo m1798_MI;
extern MethodInfo m2983_MI;
extern MethodInfo m2984_MI;
extern MethodInfo m2981_MI;
extern MethodInfo m2985_MI;
static MethodInfo* t379_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m2980_MI,
	&m2981_MI,
	&m2982_MI,
	&m1798_MI,
	&m2983_MI,
	&m2984_MI,
	&m2981_MI,
	&m2985_MI,
};
extern TypeInfo t386_TI;
extern TypeInfo t598_TI;
static Il2CppInterfaceOffsetPair t379_IOs[] = 
{
	{ &t386_TI, 4},
	{ &t598_TI, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t379_0_0_0;
extern Il2CppType t379_1_0_0;
extern TypeInfo t321_TI;
struct t379;
extern TypeInfo t379_TI;
TypeInfo t379_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityException", "UnityEngine", t379_MIs, NULL, t379_FIs, NULL, &t321_TI, NULL, NULL, &t379_TI, NULL, t379_VT, &EmptyCustomAttributesCache, &t379_TI, &t379_0_0_0, &t379_1_0_0, t379_IOs, NULL, NULL, t379_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t379), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 11, 0, 2};
#include "t557.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t557_TI;
#include "t557MD.h"

extern MethodInfo m3007_MI;


extern MethodInfo m2887_MI;
 void m2887 (t557 * __this, MethodInfo* method){
	{
		m3007(__this, &m3007_MI);
		return;
	}
}
// Metadata Definition UnityEngine.SharedBetweenAnimatorsAttribute
extern TypeInfo t557_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2887_MI = 
{
	".ctor", (methodPointerType)&m2887, &t557_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1125, NULL, (methodPointerType)NULL};
static MethodInfo* t557_MIs[] =
{
	&m2887_MI,
	NULL
};
extern MethodInfo m3008_MI;
extern MethodInfo m97_MI;
extern MethodInfo m3009_MI;
extern MethodInfo m206_MI;
static MethodInfo* t557_VT[] =
{
	&m3008_MI,
	&m97_MI,
	&m3009_MI,
	&m206_MI,
};
extern TypeInfo t613_TI;
static Il2CppInterfaceOffsetPair t557_IOs[] = 
{
	{ &t613_TI, 4},
};
extern TypeInfo t626_TI;
extern MethodInfo m3039_MI;
void t557_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t626 * tmp;
		tmp = (t626 *)il2cpp_codegen_object_new (&t626_TI);
		m3039(tmp, 4, &m3039_MI);
		extern MethodInfo m3041_MI;
		m3041(tmp, false, &m3041_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t557__CustomAttributeCache = {
1,
NULL,
&t557_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t557_0_0_0;
extern Il2CppType t557_1_0_0;
extern TypeInfo t498_TI;
struct t557;
extern TypeInfo t557_TI;
extern CustomAttributesCache t557__CustomAttributeCache;
TypeInfo t557_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "SharedBetweenAnimatorsAttribute", "UnityEngine", t557_MIs, NULL, NULL, NULL, &t498_TI, NULL, NULL, &t557_TI, NULL, t557_VT, &t557__CustomAttributeCache, &t557_TI, &t557_0_0_0, &t557_1_0_0, t557_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t557), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t558.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t558_TI;
#include "t558MD.h"

#include "t459MD.h"
extern MethodInfo m2181_MI;


extern MethodInfo m2888_MI;
 void m2888 (t558 * __this, MethodInfo* method){
	{
		m2181(__this, &m2181_MI);
		return;
	}
}
extern MethodInfo m2889_MI;
 void m2889 (t558 * __this, t254 * p0, t523  p1, int32_t p2, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2890_MI;
 void m2890 (t558 * __this, t254 * p0, t523  p1, int32_t p2, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2891_MI;
 void m2891 (t558 * __this, t254 * p0, t523  p1, int32_t p2, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2892_MI;
 void m2892 (t558 * __this, t254 * p0, t523  p1, int32_t p2, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2893_MI;
 void m2893 (t558 * __this, t254 * p0, t523  p1, int32_t p2, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2894_MI;
 void m2894 (t558 * __this, t254 * p0, int32_t p1, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m2895_MI;
 void m2895 (t558 * __this, t254 * p0, int32_t p1, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition UnityEngine.StateMachineBehaviour
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2888_MI = 
{
	".ctor", (methodPointerType)&m2888, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1126, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2889_ParameterInfos[] = 
{
	{"animator", 0, 134218903, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateInfo", 1, 134218904, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"layerIndex", 2, 134218905, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t523_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2889_MI = 
{
	"OnStateEnter", (methodPointerType)&m2889, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t523_t47, t558_m2889_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 4, 3, false, false, 1127, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2890_ParameterInfos[] = 
{
	{"animator", 0, 134218906, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateInfo", 1, 134218907, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"layerIndex", 2, 134218908, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t523_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2890_MI = 
{
	"OnStateUpdate", (methodPointerType)&m2890, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t523_t47, t558_m2890_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 5, 3, false, false, 1128, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2891_ParameterInfos[] = 
{
	{"animator", 0, 134218909, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateInfo", 1, 134218910, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"layerIndex", 2, 134218911, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t523_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2891_MI = 
{
	"OnStateExit", (methodPointerType)&m2891, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t523_t47, t558_m2891_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 3, false, false, 1129, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2892_ParameterInfos[] = 
{
	{"animator", 0, 134218912, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateInfo", 1, 134218913, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"layerIndex", 2, 134218914, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t523_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2892_MI = 
{
	"OnStateMove", (methodPointerType)&m2892, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t523_t47, t558_m2892_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 3, false, false, 1130, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t523_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2893_ParameterInfos[] = 
{
	{"animator", 0, 134218915, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateInfo", 1, 134218916, &EmptyCustomAttributesCache, &t523_0_0_0},
	{"layerIndex", 2, 134218917, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t523_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2893_MI = 
{
	"OnStateIK", (methodPointerType)&m2893, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t523_t47, t558_m2893_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 3, false, false, 1131, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2894_ParameterInfos[] = 
{
	{"animator", 0, 134218918, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateMachinePathHash", 1, 134218919, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2894_MI = 
{
	"OnStateMachineEnter", (methodPointerType)&m2894, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t558_m2894_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 2, false, false, 1132, NULL, (methodPointerType)NULL};
extern Il2CppType t254_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t558_m2895_ParameterInfos[] = 
{
	{"animator", 0, 134218920, &EmptyCustomAttributesCache, &t254_0_0_0},
	{"stateMachinePathHash", 1, 134218921, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern TypeInfo t558_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2895_MI = 
{
	"OnStateMachineExit", (methodPointerType)&m2895, &t558_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t47, t558_m2895_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 2, false, false, 1133, NULL, (methodPointerType)NULL};
static MethodInfo* t558_MIs[] =
{
	&m2888_MI,
	&m2889_MI,
	&m2890_MI,
	&m2891_MI,
	&m2892_MI,
	&m2893_MI,
	&m2894_MI,
	&m2895_MI,
	NULL
};
extern MethodInfo m96_MI;
extern MethodInfo m97_MI;
extern MethodInfo m98_MI;
extern MethodInfo m99_MI;
extern MethodInfo m2889_MI;
extern MethodInfo m2890_MI;
extern MethodInfo m2891_MI;
extern MethodInfo m2892_MI;
extern MethodInfo m2893_MI;
extern MethodInfo m2894_MI;
extern MethodInfo m2895_MI;
static MethodInfo* t558_VT[] =
{
	&m96_MI,
	&m97_MI,
	&m98_MI,
	&m99_MI,
	&m2889_MI,
	&m2890_MI,
	&m2891_MI,
	&m2892_MI,
	&m2893_MI,
	&m2894_MI,
	&m2895_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t558_0_0_0;
extern Il2CppType t558_1_0_0;
extern TypeInfo t459_TI;
struct t558;
extern TypeInfo t558_TI;
TypeInfo t558_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "StateMachineBehaviour", "UnityEngine", t558_MIs, NULL, NULL, NULL, &t459_TI, NULL, NULL, &t558_TI, NULL, t558_VT, &EmptyCustomAttributesCache, &t558_TI, &t558_0_0_0, &t558_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t558), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 0, 0, 0, 11, 0, 0};
#include "t559.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t559_TI;
#include "t559MD.h"



// Metadata Definition UnityEngine.TextEditor/DblClickSnapping
extern Il2CppType t360_0_0_1542;
FieldInfo t559_f1_FieldInfo = 
{
	"value__", &t360_0_0_1542, &t559_TI, offsetof(t559, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t559_0_0_32854;
FieldInfo t559_f2_FieldInfo = 
{
	"WORDS", &t559_0_0_32854, &t559_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t559_0_0_32854;
FieldInfo t559_f3_FieldInfo = 
{
	"PARAGRAPHS", &t559_0_0_32854, &t559_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t559_FIs[] =
{
	&t559_f1_FieldInfo,
	&t559_f2_FieldInfo,
	&t559_f3_FieldInfo,
	NULL
};
static const uint8_t t559_f2_DefaultValueData = 0;
extern Il2CppType t360_0_0_0;
static Il2CppFieldDefaultValueEntry t559_f2_DefaultValue = 
{
	&t559_f2_FieldInfo, { (char*)&t559_f2_DefaultValueData, &t360_0_0_0 }};
static const uint8_t t559_f3_DefaultValueData = 1;
extern Il2CppType t360_0_0_0;
static Il2CppFieldDefaultValueEntry t559_f3_DefaultValue = 
{
	&t559_f3_FieldInfo, { (char*)&t559_f3_DefaultValueData, &t360_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t559_FDVs[] = 
{
	&t559_f2_DefaultValue,
	&t559_f3_DefaultValue,
	NULL
};
static MethodInfo* t559_MIs[] =
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
static MethodInfo* t559_VT[] =
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
static Il2CppInterfaceOffsetPair t559_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t559_0_0_0;
extern Il2CppType t559_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t360_TI;
extern TypeInfo t360_TI;
extern TypeInfo t389_TI;
TypeInfo t559_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "DblClickSnapping", "", t559_MIs, NULL, t559_FIs, NULL, &t72_TI, NULL, &t389_TI, &t360_TI, NULL, t559_VT, &EmptyCustomAttributesCache, &t360_TI, &t559_0_0_0, &t559_1_0_0, t559_IOs, NULL, NULL, t559_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t559)+ sizeof (Il2CppObject), sizeof (uint8_t), sizeof(uint8_t), 0, 0, -1, 258, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#include "t560.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t560_TI;
#include "t560MD.h"



// Metadata Definition UnityEngine.TextEditor/TextEditOp
extern Il2CppType t47_0_0_1542;
FieldInfo t560_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t560_TI, offsetof(t560, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f2_FieldInfo = 
{
	"MoveLeft", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f3_FieldInfo = 
{
	"MoveRight", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f4_FieldInfo = 
{
	"MoveUp", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f5_FieldInfo = 
{
	"MoveDown", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f6_FieldInfo = 
{
	"MoveLineStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f7_FieldInfo = 
{
	"MoveLineEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f8_FieldInfo = 
{
	"MoveTextStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f9_FieldInfo = 
{
	"MoveTextEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f10_FieldInfo = 
{
	"MovePageUp", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f11_FieldInfo = 
{
	"MovePageDown", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f12_FieldInfo = 
{
	"MoveGraphicalLineStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f13_FieldInfo = 
{
	"MoveGraphicalLineEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f14_FieldInfo = 
{
	"MoveWordLeft", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f15_FieldInfo = 
{
	"MoveWordRight", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f16_FieldInfo = 
{
	"MoveParagraphForward", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f17_FieldInfo = 
{
	"MoveParagraphBackward", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f18_FieldInfo = 
{
	"MoveToStartOfNextWord", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f19_FieldInfo = 
{
	"MoveToEndOfPreviousWord", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f20_FieldInfo = 
{
	"SelectLeft", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f21_FieldInfo = 
{
	"SelectRight", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f22_FieldInfo = 
{
	"SelectUp", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f23_FieldInfo = 
{
	"SelectDown", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f24_FieldInfo = 
{
	"SelectTextStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f25_FieldInfo = 
{
	"SelectTextEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f26_FieldInfo = 
{
	"SelectPageUp", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f27_FieldInfo = 
{
	"SelectPageDown", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f28_FieldInfo = 
{
	"ExpandSelectGraphicalLineStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f29_FieldInfo = 
{
	"ExpandSelectGraphicalLineEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f30_FieldInfo = 
{
	"SelectGraphicalLineStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f31_FieldInfo = 
{
	"SelectGraphicalLineEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f32_FieldInfo = 
{
	"SelectWordLeft", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f33_FieldInfo = 
{
	"SelectWordRight", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f34_FieldInfo = 
{
	"SelectToEndOfPreviousWord", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f35_FieldInfo = 
{
	"SelectToStartOfNextWord", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f36_FieldInfo = 
{
	"SelectParagraphBackward", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f37_FieldInfo = 
{
	"SelectParagraphForward", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f38_FieldInfo = 
{
	"Delete", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f39_FieldInfo = 
{
	"Backspace", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f40_FieldInfo = 
{
	"DeleteWordBack", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f41_FieldInfo = 
{
	"DeleteWordForward", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f42_FieldInfo = 
{
	"DeleteLineBack", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f43_FieldInfo = 
{
	"Cut", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f44_FieldInfo = 
{
	"Copy", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f45_FieldInfo = 
{
	"Paste", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f46_FieldInfo = 
{
	"SelectAll", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f47_FieldInfo = 
{
	"SelectNone", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f48_FieldInfo = 
{
	"ScrollStart", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f49_FieldInfo = 
{
	"ScrollEnd", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f50_FieldInfo = 
{
	"ScrollPageUp", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t560_0_0_32854;
FieldInfo t560_f51_FieldInfo = 
{
	"ScrollPageDown", &t560_0_0_32854, &t560_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t560_FIs[] =
{
	&t560_f1_FieldInfo,
	&t560_f2_FieldInfo,
	&t560_f3_FieldInfo,
	&t560_f4_FieldInfo,
	&t560_f5_FieldInfo,
	&t560_f6_FieldInfo,
	&t560_f7_FieldInfo,
	&t560_f8_FieldInfo,
	&t560_f9_FieldInfo,
	&t560_f10_FieldInfo,
	&t560_f11_FieldInfo,
	&t560_f12_FieldInfo,
	&t560_f13_FieldInfo,
	&t560_f14_FieldInfo,
	&t560_f15_FieldInfo,
	&t560_f16_FieldInfo,
	&t560_f17_FieldInfo,
	&t560_f18_FieldInfo,
	&t560_f19_FieldInfo,
	&t560_f20_FieldInfo,
	&t560_f21_FieldInfo,
	&t560_f22_FieldInfo,
	&t560_f23_FieldInfo,
	&t560_f24_FieldInfo,
	&t560_f25_FieldInfo,
	&t560_f26_FieldInfo,
	&t560_f27_FieldInfo,
	&t560_f28_FieldInfo,
	&t560_f29_FieldInfo,
	&t560_f30_FieldInfo,
	&t560_f31_FieldInfo,
	&t560_f32_FieldInfo,
	&t560_f33_FieldInfo,
	&t560_f34_FieldInfo,
	&t560_f35_FieldInfo,
	&t560_f36_FieldInfo,
	&t560_f37_FieldInfo,
	&t560_f38_FieldInfo,
	&t560_f39_FieldInfo,
	&t560_f40_FieldInfo,
	&t560_f41_FieldInfo,
	&t560_f42_FieldInfo,
	&t560_f43_FieldInfo,
	&t560_f44_FieldInfo,
	&t560_f45_FieldInfo,
	&t560_f46_FieldInfo,
	&t560_f47_FieldInfo,
	&t560_f48_FieldInfo,
	&t560_f49_FieldInfo,
	&t560_f50_FieldInfo,
	&t560_f51_FieldInfo,
	NULL
};
static const int32_t t560_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f2_DefaultValue = 
{
	&t560_f2_FieldInfo, { (char*)&t560_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f3_DefaultValue = 
{
	&t560_f3_FieldInfo, { (char*)&t560_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f4_DefaultValue = 
{
	&t560_f4_FieldInfo, { (char*)&t560_f4_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f5_DefaultValueData = 3;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f5_DefaultValue = 
{
	&t560_f5_FieldInfo, { (char*)&t560_f5_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f6_DefaultValueData = 4;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f6_DefaultValue = 
{
	&t560_f6_FieldInfo, { (char*)&t560_f6_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f7_DefaultValueData = 5;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f7_DefaultValue = 
{
	&t560_f7_FieldInfo, { (char*)&t560_f7_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f8_DefaultValueData = 6;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f8_DefaultValue = 
{
	&t560_f8_FieldInfo, { (char*)&t560_f8_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f9_DefaultValueData = 7;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f9_DefaultValue = 
{
	&t560_f9_FieldInfo, { (char*)&t560_f9_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f10_DefaultValueData = 8;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f10_DefaultValue = 
{
	&t560_f10_FieldInfo, { (char*)&t560_f10_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f11_DefaultValueData = 9;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f11_DefaultValue = 
{
	&t560_f11_FieldInfo, { (char*)&t560_f11_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f12_DefaultValueData = 10;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f12_DefaultValue = 
{
	&t560_f12_FieldInfo, { (char*)&t560_f12_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f13_DefaultValueData = 11;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f13_DefaultValue = 
{
	&t560_f13_FieldInfo, { (char*)&t560_f13_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f14_DefaultValueData = 12;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f14_DefaultValue = 
{
	&t560_f14_FieldInfo, { (char*)&t560_f14_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f15_DefaultValueData = 13;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f15_DefaultValue = 
{
	&t560_f15_FieldInfo, { (char*)&t560_f15_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f16_DefaultValueData = 14;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f16_DefaultValue = 
{
	&t560_f16_FieldInfo, { (char*)&t560_f16_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f17_DefaultValueData = 15;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f17_DefaultValue = 
{
	&t560_f17_FieldInfo, { (char*)&t560_f17_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f18_DefaultValueData = 16;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f18_DefaultValue = 
{
	&t560_f18_FieldInfo, { (char*)&t560_f18_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f19_DefaultValueData = 17;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f19_DefaultValue = 
{
	&t560_f19_FieldInfo, { (char*)&t560_f19_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f20_DefaultValueData = 18;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f20_DefaultValue = 
{
	&t560_f20_FieldInfo, { (char*)&t560_f20_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f21_DefaultValueData = 19;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f21_DefaultValue = 
{
	&t560_f21_FieldInfo, { (char*)&t560_f21_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f22_DefaultValueData = 20;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f22_DefaultValue = 
{
	&t560_f22_FieldInfo, { (char*)&t560_f22_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f23_DefaultValueData = 21;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f23_DefaultValue = 
{
	&t560_f23_FieldInfo, { (char*)&t560_f23_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f24_DefaultValueData = 22;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f24_DefaultValue = 
{
	&t560_f24_FieldInfo, { (char*)&t560_f24_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f25_DefaultValueData = 23;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f25_DefaultValue = 
{
	&t560_f25_FieldInfo, { (char*)&t560_f25_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f26_DefaultValueData = 24;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f26_DefaultValue = 
{
	&t560_f26_FieldInfo, { (char*)&t560_f26_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f27_DefaultValueData = 25;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f27_DefaultValue = 
{
	&t560_f27_FieldInfo, { (char*)&t560_f27_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f28_DefaultValueData = 26;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f28_DefaultValue = 
{
	&t560_f28_FieldInfo, { (char*)&t560_f28_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f29_DefaultValueData = 27;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f29_DefaultValue = 
{
	&t560_f29_FieldInfo, { (char*)&t560_f29_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f30_DefaultValueData = 28;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f30_DefaultValue = 
{
	&t560_f30_FieldInfo, { (char*)&t560_f30_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f31_DefaultValueData = 29;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f31_DefaultValue = 
{
	&t560_f31_FieldInfo, { (char*)&t560_f31_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f32_DefaultValueData = 30;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f32_DefaultValue = 
{
	&t560_f32_FieldInfo, { (char*)&t560_f32_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f33_DefaultValueData = 31;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f33_DefaultValue = 
{
	&t560_f33_FieldInfo, { (char*)&t560_f33_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f34_DefaultValueData = 32;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f34_DefaultValue = 
{
	&t560_f34_FieldInfo, { (char*)&t560_f34_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f35_DefaultValueData = 33;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f35_DefaultValue = 
{
	&t560_f35_FieldInfo, { (char*)&t560_f35_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f36_DefaultValueData = 34;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f36_DefaultValue = 
{
	&t560_f36_FieldInfo, { (char*)&t560_f36_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f37_DefaultValueData = 35;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f37_DefaultValue = 
{
	&t560_f37_FieldInfo, { (char*)&t560_f37_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f38_DefaultValueData = 36;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f38_DefaultValue = 
{
	&t560_f38_FieldInfo, { (char*)&t560_f38_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f39_DefaultValueData = 37;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f39_DefaultValue = 
{
	&t560_f39_FieldInfo, { (char*)&t560_f39_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f40_DefaultValueData = 38;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f40_DefaultValue = 
{
	&t560_f40_FieldInfo, { (char*)&t560_f40_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f41_DefaultValueData = 39;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f41_DefaultValue = 
{
	&t560_f41_FieldInfo, { (char*)&t560_f41_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f42_DefaultValueData = 40;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f42_DefaultValue = 
{
	&t560_f42_FieldInfo, { (char*)&t560_f42_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f43_DefaultValueData = 41;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f43_DefaultValue = 
{
	&t560_f43_FieldInfo, { (char*)&t560_f43_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f44_DefaultValueData = 42;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f44_DefaultValue = 
{
	&t560_f44_FieldInfo, { (char*)&t560_f44_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f45_DefaultValueData = 43;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f45_DefaultValue = 
{
	&t560_f45_FieldInfo, { (char*)&t560_f45_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f46_DefaultValueData = 44;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f46_DefaultValue = 
{
	&t560_f46_FieldInfo, { (char*)&t560_f46_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f47_DefaultValueData = 45;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f47_DefaultValue = 
{
	&t560_f47_FieldInfo, { (char*)&t560_f47_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f48_DefaultValueData = 46;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f48_DefaultValue = 
{
	&t560_f48_FieldInfo, { (char*)&t560_f48_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f49_DefaultValueData = 47;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f49_DefaultValue = 
{
	&t560_f49_FieldInfo, { (char*)&t560_f49_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f50_DefaultValueData = 48;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f50_DefaultValue = 
{
	&t560_f50_FieldInfo, { (char*)&t560_f50_DefaultValueData, &t47_0_0_0 }};
static const int32_t t560_f51_DefaultValueData = 49;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t560_f51_DefaultValue = 
{
	&t560_f51_FieldInfo, { (char*)&t560_f51_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t560_FDVs[] = 
{
	&t560_f2_DefaultValue,
	&t560_f3_DefaultValue,
	&t560_f4_DefaultValue,
	&t560_f5_DefaultValue,
	&t560_f6_DefaultValue,
	&t560_f7_DefaultValue,
	&t560_f8_DefaultValue,
	&t560_f9_DefaultValue,
	&t560_f10_DefaultValue,
	&t560_f11_DefaultValue,
	&t560_f12_DefaultValue,
	&t560_f13_DefaultValue,
	&t560_f14_DefaultValue,
	&t560_f15_DefaultValue,
	&t560_f16_DefaultValue,
	&t560_f17_DefaultValue,
	&t560_f18_DefaultValue,
	&t560_f19_DefaultValue,
	&t560_f20_DefaultValue,
	&t560_f21_DefaultValue,
	&t560_f22_DefaultValue,
	&t560_f23_DefaultValue,
	&t560_f24_DefaultValue,
	&t560_f25_DefaultValue,
	&t560_f26_DefaultValue,
	&t560_f27_DefaultValue,
	&t560_f28_DefaultValue,
	&t560_f29_DefaultValue,
	&t560_f30_DefaultValue,
	&t560_f31_DefaultValue,
	&t560_f32_DefaultValue,
	&t560_f33_DefaultValue,
	&t560_f34_DefaultValue,
	&t560_f35_DefaultValue,
	&t560_f36_DefaultValue,
	&t560_f37_DefaultValue,
	&t560_f38_DefaultValue,
	&t560_f39_DefaultValue,
	&t560_f40_DefaultValue,
	&t560_f41_DefaultValue,
	&t560_f42_DefaultValue,
	&t560_f43_DefaultValue,
	&t560_f44_DefaultValue,
	&t560_f45_DefaultValue,
	&t560_f46_DefaultValue,
	&t560_f47_DefaultValue,
	&t560_f48_DefaultValue,
	&t560_f49_DefaultValue,
	&t560_f50_DefaultValue,
	&t560_f51_DefaultValue,
	NULL
};
static MethodInfo* t560_MIs[] =
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
static MethodInfo* t560_VT[] =
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
static Il2CppInterfaceOffsetPair t560_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t560_0_0_0;
extern Il2CppType t560_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
extern TypeInfo t389_TI;
TypeInfo t560_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextEditOp", "", t560_MIs, NULL, t560_FIs, NULL, &t72_TI, NULL, &t389_TI, &t47_TI, NULL, t560_VT, &EmptyCustomAttributesCache, &t47_TI, &t560_0_0_0, &t560_1_0_0, t560_IOs, NULL, NULL, t560_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t560)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 259, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 51, 0, 0, 23, 0, 3};
#include "t389.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t389_TI;
#include "t389MD.h"

#include "t390.h"
#include "t475.h"
#include "t289.h"
extern TypeInfo t390_TI;
extern TypeInfo t389_TI;
extern TypeInfo t475_TI;
extern TypeInfo t18_TI;
extern TypeInfo t191_TI;
extern TypeInfo t59_TI;
extern TypeInfo t488_TI;
#include "t390MD.h"
#include "t475MD.h"
#include "t289MD.h"
#include "t488MD.h"
extern MethodInfo m2352_MI;
extern MethodInfo m2399_MI;
extern MethodInfo m1518_MI;
extern MethodInfo m203_MI;
extern MethodInfo m2897_MI;
extern MethodInfo m1843_MI;
extern MethodInfo m1828_MI;
extern MethodInfo m2896_MI;
extern MethodInfo m1855_MI;
extern MethodInfo m1878_MI;
extern MethodInfo m2354_MI;
extern MethodInfo m2898_MI;
extern MethodInfo m1881_MI;
extern MethodInfo m2900_MI;
extern MethodInfo m1691_MI;
extern MethodInfo m1692_MI;
extern MethodInfo m1935_MI;
extern MethodInfo m2400_MI;
extern MethodInfo m2388_MI;
extern MethodInfo m2375_MI;
extern MethodInfo m2403_MI;
extern MethodInfo m2405_MI;
extern MethodInfo m195_MI;
extern MethodInfo m2075_MI;
extern MethodInfo m2397_MI;
extern MethodInfo m2076_MI;
extern MethodInfo m2373_MI;
extern MethodInfo m2284_MI;
extern MethodInfo m3056_MI;
extern MethodInfo m3057_MI;
extern MethodInfo m2283_MI;
extern MethodInfo m127_MI;
extern MethodInfo m2901_MI;
extern MethodInfo m2899_MI;


extern MethodInfo m1841_MI;
 void m1841 (t389 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t390_TI));
		t390 * L_0 = (t390 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t390_TI));
		m2352(L_0, &m2352_MI);
		__this->f3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t475_TI));
		t475 * L_1 = m2399(NULL, &m2399_MI);
		__this->f4 = L_1;
		t59  L_2 = m1518(NULL, &m1518_MI);
		__this->f10 = L_2;
		__this->f18 = (-1);
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2896_MI;
 void m2896 (t389 * __this, MethodInfo* method){
	{
		__this->f7 = 0;
		__this->f18 = (-1);
		return;
	}
}
extern MethodInfo m1845_MI;
 void m1845 (t389 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->f1 = L_1;
		__this->f0 = V_0;
		goto IL_0026;
	}

IL_0020:
	{
		m2897(__this, &m2897_MI);
	}

IL_0026:
	{
		__this->f9 = 1;
		return;
	}
}
extern MethodInfo m2897_MI;
 void m2897 (t389 * __this, MethodInfo* method){
	{
		__this->f0 = 0;
		t390 * L_0 = (__this->f3);
		t18* L_1 = m1843(L_0, &m1843_MI);
		int32_t L_2 = m1828(L_1, &m1828_MI);
		__this->f1 = L_2;
		m2896(__this, &m2896_MI);
		return;
	}
}
extern MethodInfo m2898_MI;
 bool m2898 (t389 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t390 * L_0 = (__this->f3);
		t18* L_1 = m1843(L_0, &m1843_MI);
		int32_t L_2 = m1828(L_1, &m1828_MI);
		V_0 = L_2;
		int32_t L_3 = (__this->f0);
		if ((((int32_t)L_3) <= ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		__this->f0 = V_0;
	}

IL_0024:
	{
		int32_t L_4 = (__this->f1);
		if ((((int32_t)L_4) <= ((int32_t)V_0)))
		{
			goto IL_0037;
		}
	}
	{
		__this->f1 = V_0;
	}

IL_0037:
	{
		int32_t L_5 = (__this->f0);
		int32_t L_6 = (__this->f1);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_00c0;
		}
	}
	{
		t390 * L_9 = (__this->f3);
		t390 * L_10 = (__this->f3);
		t18* L_11 = m1843(L_10, &m1843_MI);
		int32_t L_12 = (__this->f0);
		t18* L_13 = m1855(L_11, 0, L_12, &m1855_MI);
		t390 * L_14 = (__this->f3);
		t18* L_15 = m1843(L_14, &m1843_MI);
		int32_t L_16 = (__this->f1);
		t390 * L_17 = (__this->f3);
		t18* L_18 = m1843(L_17, &m1843_MI);
		int32_t L_19 = m1828(L_18, &m1828_MI);
		int32_t L_20 = (__this->f1);
		t18* L_21 = m1855(L_15, L_16, ((int32_t)(L_19-L_20)), &m1855_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_22 = m1878(NULL, L_13, L_21, &m1878_MI);
		m2354(L_9, L_22, &m2354_MI);
		int32_t L_23 = (__this->f0);
		__this->f1 = L_23;
		goto IL_0120;
	}

IL_00c0:
	{
		t390 * L_24 = (__this->f3);
		t390 * L_25 = (__this->f3);
		t18* L_26 = m1843(L_25, &m1843_MI);
		int32_t L_27 = (__this->f1);
		t18* L_28 = m1855(L_26, 0, L_27, &m1855_MI);
		t390 * L_29 = (__this->f3);
		t18* L_30 = m1843(L_29, &m1843_MI);
		int32_t L_31 = (__this->f0);
		t390 * L_32 = (__this->f3);
		t18* L_33 = m1843(L_32, &m1843_MI);
		int32_t L_34 = m1828(L_33, &m1828_MI);
		int32_t L_35 = (__this->f0);
		t18* L_36 = m1855(L_30, L_31, ((int32_t)(L_34-L_35)), &m1855_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		t18* L_37 = m1878(NULL, L_28, L_36, &m1878_MI);
		m2354(L_24, L_37, &m2354_MI);
		int32_t L_38 = (__this->f1);
		__this->f0 = L_38;
	}

IL_0120:
	{
		m2896(__this, &m2896_MI);
		return 1;
	}
}
extern MethodInfo m2899_MI;
 void m2899 (t389 * __this, t18* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m2898(__this, &m2898_MI);
		t390 * L_0 = (__this->f3);
		t390 * L_1 = (__this->f3);
		t18* L_2 = m1843(L_1, &m1843_MI);
		int32_t L_3 = (__this->f0);
		t18* L_4 = m1881(L_2, L_3, p0, &m1881_MI);
		m2354(L_0, L_4, &m2354_MI);
		int32_t L_5 = (__this->f0);
		int32_t L_6 = m1828(p0, &m1828_MI);
		int32_t L_7 = ((int32_t)(L_5+L_6));
		V_0 = L_7;
		__this->f0 = L_7;
		__this->f1 = V_0;
		m2896(__this, &m2896_MI);
		m2900(__this, &m2900_MI);
		__this->f11 = 1;
		return;
	}
}
extern MethodInfo m2900_MI;
 void m2900 (t389 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t191  V_1 = {0};
	t59  V_2 = {0};
	t59  V_3 = {0};
	t59 * G_B17_0 = {0};
	t59 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	t59 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		t475 * L_1 = (__this->f4);
		t191 * L_2 = &(__this->f5);
		float L_3 = m1691(L_2, &m1691_MI);
		t191 * L_4 = &(__this->f5);
		float L_5 = m1692(L_4, &m1692_MI);
		t191  L_6 = {0};
		m1935(&L_6, (0.0f), (0.0f), L_3, L_5, &m1935_MI);
		t390 * L_7 = (__this->f3);
		t59  L_8 = m2400(L_1, L_6, L_7, V_0, &m2400_MI);
		__this->f12 = L_8;
		t475 * L_9 = (__this->f4);
		t289 * L_10 = m2388(L_9, &m2388_MI);
		t191  L_11 = (__this->f5);
		t191  L_12 = m2375(L_10, L_11, &m2375_MI);
		V_1 = L_12;
		t475 * L_13 = (__this->f4);
		t390 * L_14 = (__this->f3);
		t59  L_15 = m2403(L_13, L_14, &m2403_MI);
		V_3 = L_15;
		float L_16 = ((&V_3)->f1);
		t475 * L_17 = (__this->f4);
		t390 * L_18 = (__this->f3);
		t191 * L_19 = &(__this->f5);
		float L_20 = m1691(L_19, &m1691_MI);
		float L_21 = m2405(L_17, L_18, L_20, &m2405_MI);
		m195((&V_2), L_16, L_21, &m195_MI);
		float L_22 = ((&V_2)->f1);
		t191 * L_23 = &(__this->f5);
		float L_24 = m1691(L_23, &m1691_MI);
		if ((((float)L_22) >= ((float)L_24)))
		{
			goto IL_00c3;
		}
	}
	{
		t59 * L_25 = &(__this->f10);
		L_25->f1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		t59 * L_26 = &(__this->f12);
		float L_27 = (L_26->f1);
		t59 * L_28 = &(__this->f10);
		float L_29 = (L_28->f1);
		float L_30 = m1691((&V_1), &m1691_MI);
		if ((((float)((float)(L_27+(1.0f)))) <= ((float)((float)(L_29+L_30)))))
		{
			goto IL_010a;
		}
	}
	{
		t59 * L_31 = &(__this->f10);
		t59 * L_32 = &(__this->f12);
		float L_33 = (L_32->f1);
		float L_34 = m1691((&V_1), &m1691_MI);
		L_31->f1 = ((float)(L_33-L_34));
	}

IL_010a:
	{
		t59 * L_35 = &(__this->f12);
		float L_36 = (L_35->f1);
		t59 * L_37 = &(__this->f10);
		float L_38 = (L_37->f1);
		t475 * L_39 = (__this->f4);
		t289 * L_40 = m2388(L_39, &m2388_MI);
		int32_t L_41 = m2075(L_40, &m2075_MI);
		if ((((float)L_36) >= ((float)((float)(L_38+(((float)L_41)))))))
		{
			goto IL_015f;
		}
	}
	{
		t59 * L_42 = &(__this->f10);
		t59 * L_43 = &(__this->f12);
		float L_44 = (L_43->f1);
		t475 * L_45 = (__this->f4);
		t289 * L_46 = m2388(L_45, &m2388_MI);
		int32_t L_47 = m2075(L_46, &m2075_MI);
		L_42->f1 = ((float)(L_44-(((float)L_47))));
	}

IL_015f:
	{
		float L_48 = ((&V_2)->f2);
		float L_49 = m1692((&V_1), &m1692_MI);
		if ((((float)L_48) >= ((float)L_49)))
		{
			goto IL_0187;
		}
	}
	{
		t59 * L_50 = &(__this->f10);
		L_50->f2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		t59 * L_51 = &(__this->f12);
		float L_52 = (L_51->f2);
		t475 * L_53 = (__this->f4);
		float L_54 = m2397(L_53, &m2397_MI);
		t59 * L_55 = &(__this->f10);
		float L_56 = (L_55->f2);
		float L_57 = m1692((&V_1), &m1692_MI);
		t475 * L_58 = (__this->f4);
		t289 * L_59 = m2388(L_58, &m2388_MI);
		int32_t L_60 = m2076(L_59, &m2076_MI);
		if ((((float)((float)(L_52+L_54))) <= ((float)((float)(((float)(L_56+L_57))+(((float)L_60)))))))
		{
			goto IL_0204;
		}
	}
	{
		t59 * L_61 = &(__this->f10);
		t59 * L_62 = &(__this->f12);
		float L_63 = (L_62->f2);
		float L_64 = m1692((&V_1), &m1692_MI);
		t475 * L_65 = (__this->f4);
		t289 * L_66 = m2388(L_65, &m2388_MI);
		int32_t L_67 = m2076(L_66, &m2076_MI);
		t475 * L_68 = (__this->f4);
		float L_69 = m2397(L_68, &m2397_MI);
		L_61->f2 = ((float)(((float)(((float)(L_63-L_64))-(((float)L_67))))+L_69));
	}

IL_0204:
	{
		t59 * L_70 = &(__this->f12);
		float L_71 = (L_70->f2);
		t59 * L_72 = &(__this->f10);
		float L_73 = (L_72->f2);
		t475 * L_74 = (__this->f4);
		t289 * L_75 = m2388(L_74, &m2388_MI);
		int32_t L_76 = m2076(L_75, &m2076_MI);
		if ((((float)L_71) >= ((float)((float)(L_73+(((float)L_76)))))))
		{
			goto IL_0259;
		}
	}
	{
		t59 * L_77 = &(__this->f10);
		t59 * L_78 = &(__this->f12);
		float L_79 = (L_78->f2);
		t475 * L_80 = (__this->f4);
		t289 * L_81 = m2388(L_80, &m2388_MI);
		int32_t L_82 = m2076(L_81, &m2076_MI);
		L_77->f2 = ((float)(L_79-(((float)L_82))));
	}

IL_0259:
	{
		t59 * L_83 = &(__this->f10);
		float L_84 = (L_83->f2);
		if ((((float)L_84) <= ((float)(0.0f))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_85 = ((&V_2)->f2);
		t59 * L_86 = &(__this->f10);
		float L_87 = (L_86->f2);
		float L_88 = m1692((&V_1), &m1692_MI);
		if ((((float)((float)(L_85-L_87))) >= ((float)L_88)))
		{
			goto IL_02cb;
		}
	}
	{
		t59 * L_89 = &(__this->f10);
		float L_90 = ((&V_2)->f2);
		float L_91 = m1692((&V_1), &m1692_MI);
		t475 * L_92 = (__this->f4);
		t289 * L_93 = m2388(L_92, &m2388_MI);
		int32_t L_94 = m2076(L_93, &m2076_MI);
		t475 * L_95 = (__this->f4);
		t289 * L_96 = m2388(L_95, &m2388_MI);
		int32_t L_97 = m2373(L_96, &m2373_MI);
		L_89->f2 = ((float)(((float)(((float)(L_90-L_91))-(((float)L_94))))-(((float)L_97))));
	}

IL_02cb:
	{
		t59 * L_98 = &(__this->f10);
		t59 * L_99 = &(__this->f10);
		float L_100 = (L_99->f2);
		G_B16_0 = L_98;
		if ((((float)L_100) >= ((float)(0.0f))))
		{
			G_B17_0 = L_98;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		t59 * L_101 = &(__this->f10);
		float L_102 = (L_101->f2);
		G_B18_0 = L_102;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->f2 = G_B18_0;
		return;
	}
}
extern MethodInfo m1846_MI;
 void m1846 (t389 * __this, MethodInfo* method){
	t18* V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (__this->f0);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->f8);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		t390 * L_5 = (__this->f3);
		t18* L_6 = m1843(L_5, &m1843_MI);
		int32_t L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		int32_t L_9 = (__this->f0);
		t18* L_10 = m1855(L_6, L_7, ((int32_t)(L_8-L_9)), &m1855_MI);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		t390 * L_11 = (__this->f3);
		t18* L_12 = m1843(L_11, &m1843_MI);
		int32_t L_13 = (__this->f1);
		int32_t L_14 = (__this->f0);
		int32_t L_15 = (__this->f1);
		t18* L_16 = m1855(L_12, L_13, ((int32_t)(L_14-L_15)), &m1855_MI);
		V_0 = L_16;
	}

IL_007c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t488_TI));
		m2284(NULL, V_0, &m2284_MI);
		return;
	}
}
extern MethodInfo m2901_MI;
 t18* m2901 (t28 * __this, t18* p0, MethodInfo* method){
	{
		t18* L_0 = m3056(p0, (t18*) &_stringLiteral195, (t18*) &_stringLiteral84, &m3056_MI);
		p0 = L_0;
		t18* L_1 = m3057(p0, ((int32_t)10), ((int32_t)32), &m3057_MI);
		p0 = L_1;
		t18* L_2 = m3057(p0, ((int32_t)13), ((int32_t)32), &m3057_MI);
		p0 = L_2;
		return p0;
	}
}
extern MethodInfo m1842_MI;
 bool m1842 (t389 * __this, MethodInfo* method){
	t18* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t488_TI));
		t18* L_0 = m2283(NULL, &m2283_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_1 = m127(NULL, V_0, (((t18_SFs*)(&t18_TI)->static_fields)->f2), &m127_MI);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		bool L_2 = (__this->f6);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		t18* L_3 = m2901(NULL, V_0, &m2901_MI);
		V_0 = L_3;
	}

IL_0028:
	{
		m2899(__this, V_0, &m2899_MI);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// Metadata Definition UnityEngine.TextEditor
extern Il2CppType t47_0_0_6;
FieldInfo t389_f0_FieldInfo = 
{
	"pos", &t47_0_0_6, &t389_TI, offsetof(t389, f0), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t389_f1_FieldInfo = 
{
	"selectPos", &t47_0_0_6, &t389_TI, offsetof(t389, f1), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t389_f2_FieldInfo = 
{
	"controlID", &t47_0_0_6, &t389_TI, offsetof(t389, f2), &EmptyCustomAttributesCache};
extern Il2CppType t390_0_0_6;
FieldInfo t389_f3_FieldInfo = 
{
	"content", &t390_0_0_6, &t389_TI, offsetof(t389, f3), &EmptyCustomAttributesCache};
extern Il2CppType t475_0_0_6;
FieldInfo t389_f4_FieldInfo = 
{
	"style", &t475_0_0_6, &t389_TI, offsetof(t389, f4), &EmptyCustomAttributesCache};
extern Il2CppType t191_0_0_6;
FieldInfo t389_f5_FieldInfo = 
{
	"position", &t191_0_0_6, &t389_TI, offsetof(t389, f5), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t389_f6_FieldInfo = 
{
	"multiline", &t31_0_0_6, &t389_TI, offsetof(t389, f6), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t389_f7_FieldInfo = 
{
	"hasHorizontalCursorPos", &t31_0_0_6, &t389_TI, offsetof(t389, f7), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t389_f8_FieldInfo = 
{
	"isPasswordField", &t31_0_0_6, &t389_TI, offsetof(t389, f8), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_3;
FieldInfo t389_f9_FieldInfo = 
{
	"m_HasFocus", &t31_0_0_3, &t389_TI, offsetof(t389, f9), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t389_f10_FieldInfo = 
{
	"scrollOffset", &t59_0_0_6, &t389_TI, offsetof(t389, f10), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t389_f11_FieldInfo = 
{
	"m_TextHeightPotentiallyChanged", &t31_0_0_1, &t389_TI, offsetof(t389, f11), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t389_f12_FieldInfo = 
{
	"graphicalCursorPos", &t59_0_0_6, &t389_TI, offsetof(t389, f12), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t389_f13_FieldInfo = 
{
	"graphicalSelectCursorPos", &t59_0_0_6, &t389_TI, offsetof(t389, f13), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t389_f14_FieldInfo = 
{
	"m_MouseDragSelectsWholeWords", &t31_0_0_1, &t389_TI, offsetof(t389, f14), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t389_f15_FieldInfo = 
{
	"m_DblClickInitPos", &t47_0_0_1, &t389_TI, offsetof(t389, f15), &EmptyCustomAttributesCache};
extern Il2CppType t559_0_0_1;
FieldInfo t389_f16_FieldInfo = 
{
	"m_DblClickSnap", &t559_0_0_1, &t389_TI, offsetof(t389, f16), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_1;
FieldInfo t389_f17_FieldInfo = 
{
	"m_bJustSelected", &t31_0_0_1, &t389_TI, offsetof(t389, f17), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t389_f18_FieldInfo = 
{
	"m_iAltCursorPos", &t47_0_0_1, &t389_TI, offsetof(t389, f18), &EmptyCustomAttributesCache};
extern Il2CppType t18_0_0_1;
FieldInfo t389_f19_FieldInfo = 
{
	"oldText", &t18_0_0_1, &t389_TI, offsetof(t389, f19), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t389_f20_FieldInfo = 
{
	"oldPos", &t47_0_0_1, &t389_TI, offsetof(t389, f20), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t389_f21_FieldInfo = 
{
	"oldSelectPos", &t47_0_0_1, &t389_TI, offsetof(t389, f21), &EmptyCustomAttributesCache};
extern Il2CppType t561_0_0_17;
FieldInfo t389_f22_FieldInfo = 
{
	"s_Keyactions", &t561_0_0_17, &t389_TI, offsetof(t389_SFs, f22), &EmptyCustomAttributesCache};
static FieldInfo* t389_FIs[] =
{
	&t389_f0_FieldInfo,
	&t389_f1_FieldInfo,
	&t389_f2_FieldInfo,
	&t389_f3_FieldInfo,
	&t389_f4_FieldInfo,
	&t389_f5_FieldInfo,
	&t389_f6_FieldInfo,
	&t389_f7_FieldInfo,
	&t389_f8_FieldInfo,
	&t389_f9_FieldInfo,
	&t389_f10_FieldInfo,
	&t389_f11_FieldInfo,
	&t389_f12_FieldInfo,
	&t389_f13_FieldInfo,
	&t389_f14_FieldInfo,
	&t389_f15_FieldInfo,
	&t389_f16_FieldInfo,
	&t389_f17_FieldInfo,
	&t389_f18_FieldInfo,
	&t389_f19_FieldInfo,
	&t389_f20_FieldInfo,
	&t389_f21_FieldInfo,
	&t389_f22_FieldInfo,
	NULL
};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1841_MI = 
{
	".ctor", (methodPointerType)&m1841, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1134, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2896_MI = 
{
	"ClearCursorPos", (methodPointerType)&m2896, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1135, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1845_MI = 
{
	"OnFocus", (methodPointerType)&m1845, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1136, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2897_MI = 
{
	"SelectAll", (methodPointerType)&m2897, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1137, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2898_MI = 
{
	"DeleteSelection", (methodPointerType)&m2898, &t389_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1138, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t389_m2899_ParameterInfos[] = 
{
	{"replace", 0, 134218922, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2899_MI = 
{
	"ReplaceSelection", (methodPointerType)&m2899, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t389_m2899_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1139, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2900_MI = 
{
	"UpdateScrollOffset", (methodPointerType)&m2900, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 1140, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m1846_MI = 
{
	"Copy", (methodPointerType)&m1846, &t389_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1141, NULL, (methodPointerType)NULL};
extern Il2CppType t18_0_0_0;
static ParameterInfo t389_m2901_ParameterInfos[] = 
{
	{"value", 0, 134218923, &EmptyCustomAttributesCache, &t18_0_0_0},
};
extern TypeInfo t389_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2901_MI = 
{
	"ReplaceNewlinesWithSpaces", (methodPointerType)&m2901, &t389_TI, &t18_0_0_0, RuntimeInvoker_t28_t28, t389_m2901_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 1142, NULL, (methodPointerType)NULL};
extern TypeInfo t389_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m1842_MI = 
{
	"Paste", (methodPointerType)&m1842, &t389_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1143, NULL, (methodPointerType)NULL};
static MethodInfo* t389_MIs[] =
{
	&m1841_MI,
	&m2896_MI,
	&m1845_MI,
	&m2897_MI,
	&m2898_MI,
	&m2899_MI,
	&m2900_MI,
	&m1846_MI,
	&m2901_MI,
	&m1842_MI,
	NULL
};
extern TypeInfo t559_TI;
extern TypeInfo t560_TI;
static TypeInfo* t389_TI__nestedTypes[3] =
{
	&t559_TI,
	&t560_TI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t389_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t389_0_0_0;
extern Il2CppType t389_1_0_0;
extern TypeInfo t28_TI;
struct t389;
extern TypeInfo t389_TI;
TypeInfo t389_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextEditor", "UnityEngine", t389_MIs, NULL, t389_FIs, NULL, &t28_TI, t389_TI__nestedTypes, NULL, &t389_TI, NULL, t389_VT, &EmptyCustomAttributesCache, &t389_TI, &t389_0_0_0, &t389_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t389), 0, -1, sizeof(t389_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 10, 0, 23, 0, 2, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t263_TI;

#include "t26.h"
extern TypeInfo t313_TI;
extern TypeInfo t26_TI;
extern TypeInfo t31_TI;
extern TypeInfo t28_TI;
extern TypeInfo t59_TI;
extern TypeInfo t55_TI;
extern TypeInfo t263_TI;
#include "t26MD.h"
extern MethodInfo m1700_MI;
extern MethodInfo m200_MI;
extern MethodInfo m1564_MI;
extern MethodInfo m2902_MI;
extern MethodInfo m2903_MI;
extern MethodInfo m147_MI;


extern MethodInfo m2902_MI;
 bool m2902 (t263 * __this, t20  p0, t20  p1, MethodInfo* method){
	t313  V_0 = {0};
	t313  V_1 = {0};
	{
		t313  L_0 = m1700(NULL, p0, &m1700_MI);
		V_0 = L_0;
		t313  L_1 = m1700(NULL, p1, &m1700_MI);
		V_1 = L_1;
		t313  L_2 = V_0;
		t28 * L_3 = Box(InitializedTypeInfo(&t313_TI), &L_2);
		t313  L_4 = V_1;
		t28 * L_5 = Box(InitializedTypeInfo(&t313_TI), &L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t28 * >::Invoke(&m200_MI, L_3, L_5);
		return L_6;
	}
}
extern MethodInfo m2903_MI;
 bool m2903 (t263 * __this, t59  p0, t59  p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		bool L_2 = m1564(NULL, L_0, L_1, &m1564_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		bool L_5 = m1564(NULL, L_3, L_4, &m1564_MI);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2904_MI;
 bool m2904 (t263 * __this, t263  p0, MethodInfo* method){
	int32_t G_B19_0 = 0;
	{
		t20  L_0 = (__this->f1);
		t20  L_1 = ((&p0)->f1);
		bool L_2 = m2902(__this, L_0, L_1, &m2902_MI);
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		int32_t L_4 = ((&p0)->f2);
		if ((((uint32_t)L_3) != ((uint32_t)L_4)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_5 = (__this->f8);
		int32_t L_6 = ((&p0)->f8);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_7 = (__this->f9);
		int32_t L_8 = ((&p0)->f9);
		if ((((uint32_t)L_7) != ((uint32_t)L_8)))
		{
			goto IL_015d;
		}
	}
	{
		float L_9 = (__this->f3);
		float L_10 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t55_TI));
		bool L_11 = m1564(NULL, L_9, L_10, &m1564_MI);
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_12 = (__this->f5);
		int32_t L_13 = ((&p0)->f5);
		if ((((uint32_t)L_12) != ((uint32_t)L_13)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_14 = (__this->f4);
		bool L_15 = ((&p0)->f4);
		if ((((uint32_t)L_14) != ((uint32_t)L_15)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_16 = (__this->f6);
		int32_t L_17 = ((&p0)->f6);
		if ((((uint32_t)L_16) != ((uint32_t)L_17)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_18 = (__this->f7);
		bool L_19 = ((&p0)->f7);
		if ((((uint32_t)L_18) != ((uint32_t)L_19)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_20 = (__this->f8);
		int32_t L_21 = ((&p0)->f8);
		if ((((uint32_t)L_20) != ((uint32_t)L_21)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_22 = (__this->f9);
		int32_t L_23 = ((&p0)->f9);
		if ((((uint32_t)L_22) != ((uint32_t)L_23)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_24 = (__this->f7);
		bool L_25 = ((&p0)->f7);
		if ((((uint32_t)L_24) != ((uint32_t)L_25)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_26 = (__this->f10);
		bool L_27 = ((&p0)->f10);
		if ((((uint32_t)L_26) != ((uint32_t)L_27)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_28 = (__this->f12);
		int32_t L_29 = ((&p0)->f12);
		if ((((uint32_t)L_28) != ((uint32_t)L_29)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_30 = (__this->f11);
		int32_t L_31 = ((&p0)->f11);
		if ((((uint32_t)L_30) != ((uint32_t)L_31)))
		{
			goto IL_015d;
		}
	}
	{
		t59  L_32 = (__this->f13);
		t59  L_33 = ((&p0)->f13);
		bool L_34 = m2903(__this, L_32, L_33, &m2903_MI);
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		t59  L_35 = (__this->f14);
		t59  L_36 = ((&p0)->f14);
		bool L_37 = m2903(__this, L_35, L_36, &m2903_MI);
		if (!L_37)
		{
			goto IL_015d;
		}
	}
	{
		t173 * L_38 = (__this->f0);
		t173 * L_39 = ((&p0)->f0);
		bool L_40 = m147(NULL, L_38, L_39, &m147_MI);
		G_B19_0 = ((int32_t)(L_40));
		goto IL_015e;
	}

IL_015d:
	{
		G_B19_0 = 0;
	}

IL_015e:
	{
		return G_B19_0;
	}
}
// Metadata Definition UnityEngine.TextGenerationSettings
extern Il2CppType t173_0_0_6;
FieldInfo t263_f0_FieldInfo = 
{
	"font", &t173_0_0_6, &t263_TI, offsetof(t263, f0) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_6;
FieldInfo t263_f1_FieldInfo = 
{
	"color", &t20_0_0_6, &t263_TI, offsetof(t263, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t263_f2_FieldInfo = 
{
	"fontSize", &t47_0_0_6, &t263_TI, offsetof(t263, f2) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_6;
FieldInfo t263_f3_FieldInfo = 
{
	"lineSpacing", &t33_0_0_6, &t263_TI, offsetof(t263, f3) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t263_f4_FieldInfo = 
{
	"richText", &t31_0_0_6, &t263_TI, offsetof(t263, f4) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t174_0_0_6;
FieldInfo t263_f5_FieldInfo = 
{
	"fontStyle", &t174_0_0_6, &t263_TI, offsetof(t263, f5) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t175_0_0_6;
FieldInfo t263_f6_FieldInfo = 
{
	"textAnchor", &t175_0_0_6, &t263_TI, offsetof(t263, f6) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t263_f7_FieldInfo = 
{
	"resizeTextForBestFit", &t31_0_0_6, &t263_TI, offsetof(t263, f7) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t263_f8_FieldInfo = 
{
	"resizeTextMinSize", &t47_0_0_6, &t263_TI, offsetof(t263, f8) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_6;
FieldInfo t263_f9_FieldInfo = 
{
	"resizeTextMaxSize", &t47_0_0_6, &t263_TI, offsetof(t263, f9) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t263_f10_FieldInfo = 
{
	"updateBounds", &t31_0_0_6, &t263_TI, offsetof(t263, f10) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t177_0_0_6;
FieldInfo t263_f11_FieldInfo = 
{
	"verticalOverflow", &t177_0_0_6, &t263_TI, offsetof(t263, f11) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t176_0_0_6;
FieldInfo t263_f12_FieldInfo = 
{
	"horizontalOverflow", &t176_0_0_6, &t263_TI, offsetof(t263, f12) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t263_f13_FieldInfo = 
{
	"generationExtents", &t59_0_0_6, &t263_TI, offsetof(t263, f13) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t59_0_0_6;
FieldInfo t263_f14_FieldInfo = 
{
	"pivot", &t59_0_0_6, &t263_TI, offsetof(t263, f14) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t31_0_0_6;
FieldInfo t263_f15_FieldInfo = 
{
	"generateOutOfBounds", &t31_0_0_6, &t263_TI, offsetof(t263, f15) + sizeof(t28), &EmptyCustomAttributesCache};
static FieldInfo* t263_FIs[] =
{
	&t263_f0_FieldInfo,
	&t263_f1_FieldInfo,
	&t263_f2_FieldInfo,
	&t263_f3_FieldInfo,
	&t263_f4_FieldInfo,
	&t263_f5_FieldInfo,
	&t263_f6_FieldInfo,
	&t263_f7_FieldInfo,
	&t263_f8_FieldInfo,
	&t263_f9_FieldInfo,
	&t263_f10_FieldInfo,
	&t263_f11_FieldInfo,
	&t263_f12_FieldInfo,
	&t263_f13_FieldInfo,
	&t263_f14_FieldInfo,
	&t263_f15_FieldInfo,
	NULL
};
extern Il2CppType t20_0_0_0;
extern Il2CppType t20_0_0_0;
static ParameterInfo t263_m2902_ParameterInfos[] = 
{
	{"left", 0, 134218924, &EmptyCustomAttributesCache, &t20_0_0_0},
	{"right", 1, 134218925, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern TypeInfo t263_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t20_t20 (MethodInfo* method, void* obj, void** args);
MethodInfo m2902_MI = 
{
	"CompareColors", (methodPointerType)&m2902, &t263_TI, &t31_0_0_0, RuntimeInvoker_t31_t20_t20, t263_m2902_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 1144, NULL, (methodPointerType)NULL};
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_0_0_0;
static ParameterInfo t263_m2903_ParameterInfos[] = 
{
	{"left", 0, 134218926, &EmptyCustomAttributesCache, &t59_0_0_0},
	{"right", 1, 134218927, &EmptyCustomAttributesCache, &t59_0_0_0},
};
extern TypeInfo t263_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t59_t59 (MethodInfo* method, void* obj, void** args);
MethodInfo m2903_MI = 
{
	"CompareVector2", (methodPointerType)&m2903, &t263_TI, &t31_0_0_0, RuntimeInvoker_t31_t59_t59, t263_m2903_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 1145, NULL, (methodPointerType)NULL};
extern Il2CppType t263_0_0_0;
static ParameterInfo t263_m2904_ParameterInfos[] = 
{
	{"other", 0, 134218928, &EmptyCustomAttributesCache, &t263_0_0_0},
};
extern TypeInfo t263_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t263 (MethodInfo* method, void* obj, void** args);
MethodInfo m2904_MI = 
{
	"Equals", (methodPointerType)&m2904, &t263_TI, &t31_0_0_0, RuntimeInvoker_t31_t263, t263_m2904_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1146, NULL, (methodPointerType)NULL};
static MethodInfo* t263_MIs[] =
{
	&m2902_MI,
	&m2903_MI,
	&m2904_MI,
	NULL
};
extern MethodInfo m200_MI;
extern MethodInfo m97_MI;
extern MethodInfo m201_MI;
extern MethodInfo m202_MI;
static MethodInfo* t263_VT[] =
{
	&m200_MI,
	&m97_MI,
	&m201_MI,
	&m202_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t263_0_0_0;
extern Il2CppType t263_1_0_0;
extern TypeInfo t26_TI;
extern TypeInfo t263_TI;
TypeInfo t263_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TextGenerationSettings", "UnityEngine", t263_MIs, NULL, t263_FIs, NULL, &t26_TI, NULL, NULL, &t263_TI, NULL, t263_VT, &EmptyCustomAttributesCache, &t263_TI, &t263_0_0_0, &t263_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t263)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 16, 0, 0, 4, 0, 0};
#include "t528.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t528_TI;
#include "t528MD.h"

extern TypeInfo t528_TI;
extern TypeInfo t49_TI;
extern MethodInfo m2907_MI;
extern MethodInfo m3072_MI;
extern MethodInfo m3073_MI;


extern MethodInfo m2905_MI;
 bool m2905 (t528 * __this, t28 * p0, MethodInfo* method){
	{
		bool L_0 = m2907(NULL, ((t528 *)IsInst(p0, InitializedTypeInfo(&t528_TI))), __this, &m2907_MI);
		return L_0;
	}
}
extern MethodInfo m2906_MI;
 int32_t m2906 (t528 * __this, MethodInfo* method){
	{
		t49 L_0 = (__this->f0);
		int32_t L_1 = m3072(NULL, L_0, &m3072_MI);
		return L_1;
	}
}
extern MethodInfo m2907_MI;
 bool m2907 (t28 * __this, t528 * p0, t528 * p1, MethodInfo* method){
	t28 * V_0 = {0};
	t28 * V_1 = {0};
	{
		V_0 = p0;
		V_1 = p1;
		if (V_1)
		{
			goto IL_0012;
		}
	}
	{
		if (V_0)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		if (V_1)
		{
			goto IL_0029;
		}
	}
	{
		t49 L_0 = (p0->f0);
		bool L_1 = m3073(NULL, L_0, (((t49_SFs*)InitializedTypeInfo(&t49_TI)->static_fields)->f1), &m3073_MI);
		return L_1;
	}

IL_0029:
	{
		if (V_0)
		{
			goto IL_0040;
		}
	}
	{
		t49 L_2 = (p1->f0);
		bool L_3 = m3073(NULL, L_2, (((t49_SFs*)InitializedTypeInfo(&t49_TI)->static_fields)->f1), &m3073_MI);
		return L_3;
	}

IL_0040:
	{
		t49 L_4 = (p0->f0);
		t49 L_5 = (p1->f0);
		bool L_6 = m3073(NULL, L_4, L_5, &m3073_MI);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void t528_marshal(const t528& unmarshaled, t528_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t528_marshal_back(const t528_marshaled& marshaled, t528& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void t528_marshal_cleanup(t528_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.TrackedReference
extern Il2CppType t49_0_0_3;
FieldInfo t528_f0_FieldInfo = 
{
	"m_Ptr", &t49_0_0_3, &t528_TI, offsetof(t528, f0), &EmptyCustomAttributesCache};
static FieldInfo* t528_FIs[] =
{
	&t528_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
static ParameterInfo t528_m2905_ParameterInfos[] = 
{
	{"o", 0, 134218929, &EmptyCustomAttributesCache, &t28_0_0_0},
};
extern TypeInfo t528_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2905_MI = 
{
	"Equals", (methodPointerType)&m2905, &t528_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t528_m2905_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 1147, NULL, (methodPointerType)NULL};
extern TypeInfo t528_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2906_MI = 
{
	"GetHashCode", (methodPointerType)&m2906, &t528_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 1148, NULL, (methodPointerType)NULL};
extern Il2CppType t528_0_0_0;
extern Il2CppType t528_0_0_0;
static ParameterInfo t528_m2907_ParameterInfos[] = 
{
	{"x", 0, 134218930, &EmptyCustomAttributesCache, &t528_0_0_0},
	{"y", 1, 134218931, &EmptyCustomAttributesCache, &t528_0_0_0},
};
extern TypeInfo t528_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2907_MI = 
{
	"op_Equality", (methodPointerType)&m2907, &t528_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t528_m2907_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 1149, NULL, (methodPointerType)NULL};
static MethodInfo* t528_MIs[] =
{
	&m2905_MI,
	&m2906_MI,
	&m2907_MI,
	NULL
};
extern MethodInfo m2905_MI;
extern MethodInfo m97_MI;
extern MethodInfo m2906_MI;
extern MethodInfo m206_MI;
static MethodInfo* t528_VT[] =
{
	&m2905_MI,
	&m97_MI,
	&m2906_MI,
	&m206_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t528_0_0_0;
extern Il2CppType t528_1_0_0;
extern TypeInfo t28_TI;
struct t528;
extern TypeInfo t528_TI;
TypeInfo t528_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "TrackedReference", "UnityEngine", t528_MIs, NULL, t528_FIs, NULL, &t28_TI, NULL, NULL, &t528_TI, NULL, t528_VT, &EmptyCustomAttributesCache, &t528_TI, &t528_0_0_0, &t528_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t528_marshal, (methodPointerType)t528_marshal_back, (methodPointerType)t528_marshal_cleanup, sizeof (t528), 0, sizeof(t528_marshaled), 0, 0, -1, 1048585, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 4, 0, 0};
#include "t562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t562_TI;
#include "t562MD.h"



// Metadata Definition UnityEngine.Events.PersistentListenerMode
extern Il2CppType t47_0_0_1542;
FieldInfo t562_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t562_TI, offsetof(t562, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f2_FieldInfo = 
{
	"EventDefined", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f3_FieldInfo = 
{
	"Void", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f4_FieldInfo = 
{
	"Object", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f5_FieldInfo = 
{
	"Int", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f6_FieldInfo = 
{
	"Float", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f7_FieldInfo = 
{
	"String", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t562_0_0_32854;
FieldInfo t562_f8_FieldInfo = 
{
	"Bool", &t562_0_0_32854, &t562_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t562_FIs[] =
{
	&t562_f1_FieldInfo,
	&t562_f2_FieldInfo,
	&t562_f3_FieldInfo,
	&t562_f4_FieldInfo,
	&t562_f5_FieldInfo,
	&t562_f6_FieldInfo,
	&t562_f7_FieldInfo,
	&t562_f8_FieldInfo,
	NULL
};
static const int32_t t562_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f2_DefaultValue = 
{
	&t562_f2_FieldInfo, { (char*)&t562_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t562_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f3_DefaultValue = 
{
	&t562_f3_FieldInfo, { (char*)&t562_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t562_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f4_DefaultValue = 
{
	&t562_f4_FieldInfo, { (char*)&t562_f4_DefaultValueData, &t47_0_0_0 }};
static const int32_t t562_f5_DefaultValueData = 3;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f5_DefaultValue = 
{
	&t562_f5_FieldInfo, { (char*)&t562_f5_DefaultValueData, &t47_0_0_0 }};
static const int32_t t562_f6_DefaultValueData = 4;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f6_DefaultValue = 
{
	&t562_f6_FieldInfo, { (char*)&t562_f6_DefaultValueData, &t47_0_0_0 }};
static const int32_t t562_f7_DefaultValueData = 5;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f7_DefaultValue = 
{
	&t562_f7_FieldInfo, { (char*)&t562_f7_DefaultValueData, &t47_0_0_0 }};
static const int32_t t562_f8_DefaultValueData = 6;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t562_f8_DefaultValue = 
{
	&t562_f8_FieldInfo, { (char*)&t562_f8_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t562_FDVs[] = 
{
	&t562_f2_DefaultValue,
	&t562_f3_DefaultValue,
	&t562_f4_DefaultValue,
	&t562_f5_DefaultValue,
	&t562_f6_DefaultValue,
	&t562_f7_DefaultValue,
	&t562_f8_DefaultValue,
	NULL
};
static MethodInfo* t562_MIs[] =
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
static MethodInfo* t562_VT[] =
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
static Il2CppInterfaceOffsetPair t562_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t562_0_0_0;
extern Il2CppType t562_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t562_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PersistentListenerMode", "UnityEngine.Events", t562_MIs, NULL, t562_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t562_VT, &EmptyCustomAttributesCache, &t47_TI, &t562_0_0_0, &t562_1_0_0, t562_IOs, NULL, NULL, t562_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t562)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 8, 0, 0, 23, 0, 3};
#include "t563.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t563_TI;
#include "t563MD.h"

extern TypeInfo t563_TI;
extern MethodInfo m203_MI;


extern MethodInfo m2908_MI;
 void m2908 (t563 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2909_MI;
 t43 * m2909 (t563 * __this, MethodInfo* method){
	{
		t43 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2910_MI;
 t18* m2910 (t563 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2911_MI;
 int32_t m2911 (t563 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2912_MI;
 float m2912 (t563 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m2913_MI;
 t18* m2913 (t563 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m2914_MI;
 bool m2914 (t563 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.ArgumentCache
extern Il2CppType t43_0_0_1;
extern CustomAttributesCache t563__CustomAttributeCache_m_ObjectArgument;
FieldInfo t563_f0_FieldInfo = 
{
	"m_ObjectArgument", &t43_0_0_1, &t563_TI, offsetof(t563, f0), &t563__CustomAttributeCache_m_ObjectArgument};
extern Il2CppType t18_0_0_1;
extern CustomAttributesCache t563__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
FieldInfo t563_f1_FieldInfo = 
{
	"m_ObjectArgumentAssemblyTypeName", &t18_0_0_1, &t563_TI, offsetof(t563, f1), &t563__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName};
extern Il2CppType t47_0_0_1;
extern CustomAttributesCache t563__CustomAttributeCache_m_IntArgument;
FieldInfo t563_f2_FieldInfo = 
{
	"m_IntArgument", &t47_0_0_1, &t563_TI, offsetof(t563, f2), &t563__CustomAttributeCache_m_IntArgument};
extern Il2CppType t33_0_0_1;
extern CustomAttributesCache t563__CustomAttributeCache_m_FloatArgument;
FieldInfo t563_f3_FieldInfo = 
{
	"m_FloatArgument", &t33_0_0_1, &t563_TI, offsetof(t563, f3), &t563__CustomAttributeCache_m_FloatArgument};
extern Il2CppType t18_0_0_1;
extern CustomAttributesCache t563__CustomAttributeCache_m_StringArgument;
FieldInfo t563_f4_FieldInfo = 
{
	"m_StringArgument", &t18_0_0_1, &t563_TI, offsetof(t563, f4), &t563__CustomAttributeCache_m_StringArgument};
extern Il2CppType t31_0_0_1;
extern CustomAttributesCache t563__CustomAttributeCache_m_BoolArgument;
FieldInfo t563_f5_FieldInfo = 
{
	"m_BoolArgument", &t31_0_0_1, &t563_TI, offsetof(t563, f5), &t563__CustomAttributeCache_m_BoolArgument};
static FieldInfo* t563_FIs[] =
{
	&t563_f0_FieldInfo,
	&t563_f1_FieldInfo,
	&t563_f2_FieldInfo,
	&t563_f3_FieldInfo,
	&t563_f4_FieldInfo,
	&t563_f5_FieldInfo,
	NULL
};
extern MethodInfo m2909_MI;
static PropertyInfo t563____unityObjectArgument_PropertyInfo = 
{
	&t563_TI, "unityObjectArgument", &m2909_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2910_MI;
static PropertyInfo t563____unityObjectArgumentAssemblyTypeName_PropertyInfo = 
{
	&t563_TI, "unityObjectArgumentAssemblyTypeName", &m2910_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2911_MI;
static PropertyInfo t563____intArgument_PropertyInfo = 
{
	&t563_TI, "intArgument", &m2911_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2912_MI;
static PropertyInfo t563____floatArgument_PropertyInfo = 
{
	&t563_TI, "floatArgument", &m2912_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2913_MI;
static PropertyInfo t563____stringArgument_PropertyInfo = 
{
	&t563_TI, "stringArgument", &m2913_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2914_MI;
static PropertyInfo t563____boolArgument_PropertyInfo = 
{
	&t563_TI, "boolArgument", &m2914_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t563_PIs[] =
{
	&t563____unityObjectArgument_PropertyInfo,
	&t563____unityObjectArgumentAssemblyTypeName_PropertyInfo,
	&t563____intArgument_PropertyInfo,
	&t563____floatArgument_PropertyInfo,
	&t563____stringArgument_PropertyInfo,
	&t563____boolArgument_PropertyInfo,
	NULL
};
extern TypeInfo t563_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2908_MI = 
{
	".ctor", (methodPointerType)&m2908, &t563_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1150, NULL, (methodPointerType)NULL};
extern TypeInfo t563_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2909_MI = 
{
	"get_unityObjectArgument", (methodPointerType)&m2909, &t563_TI, &t43_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1151, NULL, (methodPointerType)NULL};
extern TypeInfo t563_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2910_MI = 
{
	"get_unityObjectArgumentAssemblyTypeName", (methodPointerType)&m2910, &t563_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1152, NULL, (methodPointerType)NULL};
extern TypeInfo t563_TI;
extern Il2CppType t47_0_0_0;
extern void* RuntimeInvoker_t47 (MethodInfo* method, void* obj, void** args);
MethodInfo m2911_MI = 
{
	"get_intArgument", (methodPointerType)&m2911, &t563_TI, &t47_0_0_0, RuntimeInvoker_t47, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1153, NULL, (methodPointerType)NULL};
extern TypeInfo t563_TI;
extern Il2CppType t33_0_0_0;
extern void* RuntimeInvoker_t33 (MethodInfo* method, void* obj, void** args);
MethodInfo m2912_MI = 
{
	"get_floatArgument", (methodPointerType)&m2912, &t563_TI, &t33_0_0_0, RuntimeInvoker_t33, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1154, NULL, (methodPointerType)NULL};
extern TypeInfo t563_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2913_MI = 
{
	"get_stringArgument", (methodPointerType)&m2913, &t563_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1155, NULL, (methodPointerType)NULL};
extern TypeInfo t563_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2914_MI = 
{
	"get_boolArgument", (methodPointerType)&m2914, &t563_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1156, NULL, (methodPointerType)NULL};
static MethodInfo* t563_MIs[] =
{
	&m2908_MI,
	&m2909_MI,
	&m2910_MI,
	&m2911_MI,
	&m2912_MI,
	&m2913_MI,
	&m2914_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t563_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t325_TI;
#include "t325.h"
#include "t325MD.h"
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
#include "t326.h"
#include "t326MD.h"
extern MethodInfo m1457_MI;
void t563_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), &m1456_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t563_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), &m1456_MI);
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
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
void t563_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), &m1456_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t563_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), &m1456_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t563_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), &m1456_MI);
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
void t563_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t563__CustomAttributeCache_m_ObjectArgument = {
2,
NULL,
&t563_CustomAttributesCacheGenerator_m_ObjectArgument
};
CustomAttributesCache t563__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName = {
2,
NULL,
&t563_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName
};
CustomAttributesCache t563__CustomAttributeCache_m_IntArgument = {
2,
NULL,
&t563_CustomAttributesCacheGenerator_m_IntArgument
};
CustomAttributesCache t563__CustomAttributeCache_m_FloatArgument = {
2,
NULL,
&t563_CustomAttributesCacheGenerator_m_FloatArgument
};
CustomAttributesCache t563__CustomAttributeCache_m_StringArgument = {
2,
NULL,
&t563_CustomAttributesCacheGenerator_m_StringArgument
};
CustomAttributesCache t563__CustomAttributeCache_m_BoolArgument = {
1,
NULL,
&t563_CustomAttributesCacheGenerator_m_BoolArgument
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t563_0_0_0;
extern Il2CppType t563_1_0_0;
extern TypeInfo t28_TI;
struct t563;
extern TypeInfo t563_TI;
extern CustomAttributesCache t563__CustomAttributeCache_m_ObjectArgument;
extern CustomAttributesCache t563__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
extern CustomAttributesCache t563__CustomAttributeCache_m_IntArgument;
extern CustomAttributesCache t563__CustomAttributeCache_m_FloatArgument;
extern CustomAttributesCache t563__CustomAttributeCache_m_StringArgument;
extern CustomAttributesCache t563__CustomAttributeCache_m_BoolArgument;
TypeInfo t563_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "ArgumentCache", "UnityEngine.Events", t563_MIs, t563_PIs, t563_FIs, NULL, &t28_TI, NULL, NULL, &t563_TI, NULL, t563_VT, &EmptyCustomAttributesCache, &t563_TI, &t563_0_0_0, &t563_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t563), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 7, 6, 6, 0, 0, 4, 0, 0};
#include "t564.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t564_TI;
#include "t564MD.h"

#include "t565.h"
#include "t350.h"
extern TypeInfo t350_TI;
extern TypeInfo t633_TI;
extern TypeInfo t31_TI;
#include "t350MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m3074_MI;
extern MethodInfo m3075_MI;
extern MethodInfo m3076_MI;
extern MethodInfo m3077_MI;


extern MethodInfo m2915_MI;
 void m2915 (t564 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2916_MI;
 void m2916 (t564 * __this, t28 * p0, t565 * p1, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		if (p0)
		{
			goto IL_0017;
		}
	}
	{
		t350 * L_0 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_0, (t18*) &_stringLiteral196, &m3074_MI);
		il2cpp_codegen_raise_exception (L_0);
	}

IL_0017:
	{
		if (p1)
		{
			goto IL_0028;
		}
	}
	{
		t350 * L_1 = (t350 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t350_TI));
		m3074(L_1, (t18*) &_stringLiteral197, &m3074_MI);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0028:
	{
		return;
	}
}
extern MethodInfo m2917_MI;
 bool m2917 (t28 * __this, t365 * p0, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t565 * L_0 = m3075(p0, &m3075_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3076_MI, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		t28 * L_2 = m3077(p0, &m3077_MI);
		G_B3_0 = ((((int32_t)((((t28 *)L_2) == ((t28 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.BaseInvokableCall
extern TypeInfo t564_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2915_MI = 
{
	".ctor", (methodPointerType)&m2915, &t564_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 1157, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t564_m2916_ParameterInfos[] = 
{
	{"target", 0, 134218932, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"function", 1, 134218933, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t564_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2916_MI = 
{
	".ctor", (methodPointerType)&m2916, &t564_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t564_m2916_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 1158, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t564_m3078_ParameterInfos[] = 
{
	{"args", 0, 134218934, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t564_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3078_MI = 
{
	"Invoke", NULL, &t564_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t564_m3078_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 1, false, false, 1159, NULL, (methodPointerType)NULL};
extern TypeInfo t564_TI;
extern Il2CppType t30_0_0_0;
extern Il2CppGenericContainer m3079_IGC;
extern TypeInfo m3079_gp_T_0_TI;
Il2CppGenericParamFull m3079_gp_T_0_TI_GenericParamFull = { { &m3079_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m3079_IGPA[1] = 
{
	&m3079_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m3079_MI;
Il2CppGenericContainer m3079_IGC = { { NULL, NULL }, NULL, &m3079_MI, 1, 1, m3079_IGPA };
MethodInfo m3079_MI = 
{
	"ThrowOnInvalidArg", NULL, &t564_TI, &t30_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 148, 0, 255, 0, true, false, 1160, NULL, (methodPointerType)NULL};
extern Il2CppType t365_0_0_0;
static ParameterInfo t564_m2917_ParameterInfos[] = 
{
	{"delegate", 0, 134218936, &EmptyCustomAttributesCache, &t365_0_0_0},
};
extern TypeInfo t564_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2917_MI = 
{
	"AllowInvoke", (methodPointerType)&m2917, &t564_TI, &t31_0_0_0, RuntimeInvoker_t31_t28, t564_m2917_ParameterInfos, &EmptyCustomAttributesCache, 148, 0, 255, 1, false, false, 1161, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t564_m3080_ParameterInfos[] = 
{
	{"targetObj", 0, 134218937, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218938, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t564_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m3080_MI = 
{
	"Find", NULL, &t564_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t564_m3080_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 1162, NULL, (methodPointerType)NULL};
static MethodInfo* t564_MIs[] =
{
	&m2915_MI,
	&m2916_MI,
	&m3078_MI,
	&m3079_MI,
	&m2917_MI,
	&m3080_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t564_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	NULL,
	NULL,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t564_0_0_0;
extern Il2CppType t564_1_0_0;
extern TypeInfo t28_TI;
struct t564;
extern TypeInfo t564_TI;
TypeInfo t564_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "BaseInvokableCall", "UnityEngine.Events", t564_MIs, NULL, NULL, NULL, &t28_TI, NULL, NULL, &t564_TI, NULL, t564_VT, &EmptyCustomAttributesCache, &t564_TI, &t564_0_0_0, &t564_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t564), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 6, 0, 0};
#include "t566.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t566_TI;
#include "t566MD.h"

#include "t186.h"
extern TypeInfo t566_TI;
extern TypeInfo t186_TI;
extern TypeInfo t36_TI;
extern TypeInfo t30_TI;
#include "t186MD.h"
extern Il2CppType t186_0_0_0;
extern MethodInfo m2916_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m3081_MI;
extern MethodInfo m1714_MI;
extern MethodInfo m2917_MI;
extern MethodInfo m1682_MI;
extern MethodInfo m3077_MI;
extern MethodInfo m3075_MI;


extern MethodInfo m2918_MI;
 void m2918 (t566 * __this, t28 * p0, t565 * p1, MethodInfo* method){
	{
		m2916(__this, p0, p1, &m2916_MI);
		t186 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_1 = m1673(NULL, LoadTypeToken(&t186_0_0_0), &m1673_MI);
		t365 * L_2 = m3081(NULL, L_1, p0, p1, &m3081_MI);
		t365 * L_3 = m1714(NULL, L_0, ((t186 *)IsInst(L_2, InitializedTypeInfo(&t186_TI))), &m1714_MI);
		__this->f0 = ((t186 *)Castclass(L_3, InitializedTypeInfo(&t186_TI)));
		return;
	}
}
extern MethodInfo m2919_MI;
 void m2919 (t566 * __this, t333* p0, MethodInfo* method){
	{
		t186 * L_0 = (__this->f0);
		bool L_1 = m2917(NULL, L_0, &m2917_MI);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		t186 * L_2 = (__this->f0);
		VirtActionInvoker0::Invoke(&m1682_MI, L_2);
	}

IL_001b:
	{
		return;
	}
}
extern MethodInfo m2920_MI;
 bool m2920 (t566 * __this, t28 * p0, t565 * p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t186 * L_0 = (__this->f0);
		t28 * L_1 = m3077(L_0, &m3077_MI);
		if ((((t28 *)L_1) != ((t28 *)p0)))
		{
			goto IL_0021;
		}
	}
	{
		t186 * L_2 = (__this->f0);
		t565 * L_3 = m3075(L_2, &m3075_MI);
		G_B3_0 = ((((t565 *)L_3) == ((t565 *)p1))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall
extern Il2CppType t186_0_0_1;
FieldInfo t566_f0_FieldInfo = 
{
	"Delegate", &t186_0_0_1, &t566_TI, offsetof(t566, f0), &EmptyCustomAttributesCache};
static FieldInfo* t566_FIs[] =
{
	&t566_f0_FieldInfo,
	NULL
};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t566_m2918_ParameterInfos[] = 
{
	{"target", 0, 134218939, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218940, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t566_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2918_MI = 
{
	".ctor", (methodPointerType)&m2918, &t566_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t566_m2918_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1163, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t566_m2919_ParameterInfos[] = 
{
	{"args", 0, 134218941, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t566_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2919_MI = 
{
	"Invoke", (methodPointerType)&m2919, &t566_TI, &t30_0_0_0, RuntimeInvoker_t30_t28, t566_m2919_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1164, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t566_m2920_ParameterInfos[] = 
{
	{"targetObj", 0, 134218942, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218943, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t566_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2920_MI = 
{
	"Find", (methodPointerType)&m2920, &t566_TI, &t31_0_0_0, RuntimeInvoker_t31_t28_t28, t566_m2920_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1165, NULL, (methodPointerType)NULL};
static MethodInfo* t566_MIs[] =
{
	&m2918_MI,
	&m2919_MI,
	&m2920_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
extern MethodInfo m2919_MI;
extern MethodInfo m2920_MI;
static MethodInfo* t566_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
	&m2919_MI,
	&m2920_MI,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t566_0_0_0;
extern Il2CppType t566_1_0_0;
extern TypeInfo t564_TI;
struct t566;
extern TypeInfo t566_TI;
TypeInfo t566_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall", "UnityEngine.Events", t566_MIs, NULL, t566_FIs, NULL, &t564_TI, NULL, NULL, &t566_TI, NULL, t566_VT, &EmptyCustomAttributesCache, &t566_TI, &t566_0_0_0, &t566_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t566), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 6, 0, 0};
#include "t567.h"
extern Il2CppGenericContainer t567_IGC;
extern TypeInfo t567_gp_T1_0_TI;
Il2CppGenericParamFull t567_gp_T1_0_TI_GenericParamFull = { { &t567_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* t567_IGPA[1] = 
{
	&t567_gp_T1_0_TI_GenericParamFull,
};
extern TypeInfo t567_TI;
Il2CppGenericContainer t567_IGC = { { NULL, NULL }, NULL, &t567_TI, 1, 0, t567_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t567_m3082_ParameterInfos[] = 
{
	{"target", 0, 134218944, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218945, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t567_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3082_MI = 
{
	".ctor", NULL, &t567_TI, &t30_0_0_0, NULL, t567_m3082_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1166, NULL, (methodPointerType)NULL};
extern Il2CppType t637_0_0_0;
static ParameterInfo t567_m3083_ParameterInfos[] = 
{
	{"callback", 0, 134218946, &EmptyCustomAttributesCache, &t637_0_0_0},
};
extern TypeInfo t567_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3083_MI = 
{
	".ctor", NULL, &t567_TI, &t30_0_0_0, NULL, t567_m3083_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 1167, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t567_m3084_ParameterInfos[] = 
{
	{"args", 0, 134218947, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t567_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3084_MI = 
{
	"Invoke", NULL, &t567_TI, &t30_0_0_0, NULL, t567_m3084_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1168, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t567_m3085_ParameterInfos[] = 
{
	{"targetObj", 0, 134218948, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218949, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t567_TI;
extern Il2CppType t31_0_0_0;
MethodInfo m3085_MI = 
{
	"Find", NULL, &t567_TI, &t31_0_0_0, NULL, t567_m3085_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1169, NULL, (methodPointerType)NULL};
static MethodInfo* t567_MIs[] =
{
	&m3082_MI,
	&m3083_MI,
	&m3084_MI,
	&m3085_MI,
	NULL
};
extern Il2CppType t637_0_0_1;
FieldInfo t567_f0_FieldInfo = 
{
	"Delegate", &t637_0_0_1, &t567_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t567_FIs[] =
{
	&t567_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t567_0_0_0;
extern Il2CppType t567_1_0_0;
struct t567;
extern TypeInfo t567_TI;
TypeInfo t567_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`1", "UnityEngine.Events", t567_MIs, NULL, t567_FIs, NULL, NULL, NULL, NULL, &t567_TI, NULL, NULL, NULL, NULL, &t567_0_0_0, &t567_1_0_0, NULL, NULL, &t567_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 0, 0, 0};
#include "t568.h"
extern Il2CppGenericContainer t568_IGC;
extern TypeInfo t568_gp_T1_0_TI;
Il2CppGenericParamFull t568_gp_T1_0_TI_GenericParamFull = { { &t568_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t568_gp_T2_1_TI;
Il2CppGenericParamFull t568_gp_T2_1_TI_GenericParamFull = { { &t568_IGC, 1}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* t568_IGPA[2] = 
{
	&t568_gp_T1_0_TI_GenericParamFull,
	&t568_gp_T2_1_TI_GenericParamFull,
};
extern TypeInfo t568_TI;
Il2CppGenericContainer t568_IGC = { { NULL, NULL }, NULL, &t568_TI, 2, 0, t568_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t568_m3086_ParameterInfos[] = 
{
	{"target", 0, 134218950, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218951, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t568_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3086_MI = 
{
	".ctor", NULL, &t568_TI, &t30_0_0_0, NULL, t568_m3086_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1170, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t568_m3087_ParameterInfos[] = 
{
	{"args", 0, 134218952, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t568_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3087_MI = 
{
	"Invoke", NULL, &t568_TI, &t30_0_0_0, NULL, t568_m3087_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1171, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t568_m3088_ParameterInfos[] = 
{
	{"targetObj", 0, 134218953, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218954, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t568_TI;
extern Il2CppType t31_0_0_0;
MethodInfo m3088_MI = 
{
	"Find", NULL, &t568_TI, &t31_0_0_0, NULL, t568_m3088_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1172, NULL, (methodPointerType)NULL};
static MethodInfo* t568_MIs[] =
{
	&m3086_MI,
	&m3087_MI,
	&m3088_MI,
	NULL
};
extern Il2CppType t639_0_0_1;
FieldInfo t568_f0_FieldInfo = 
{
	"Delegate", &t639_0_0_1, &t568_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t568_FIs[] =
{
	&t568_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t568_0_0_0;
extern Il2CppType t568_1_0_0;
struct t568;
extern TypeInfo t568_TI;
TypeInfo t568_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`2", "UnityEngine.Events", t568_MIs, NULL, t568_FIs, NULL, NULL, NULL, NULL, &t568_TI, NULL, NULL, NULL, NULL, &t568_0_0_0, &t568_1_0_0, NULL, NULL, &t568_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t569.h"
extern Il2CppGenericContainer t569_IGC;
extern TypeInfo t569_gp_T1_0_TI;
Il2CppGenericParamFull t569_gp_T1_0_TI_GenericParamFull = { { &t569_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t569_gp_T2_1_TI;
Il2CppGenericParamFull t569_gp_T2_1_TI_GenericParamFull = { { &t569_IGC, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t569_gp_T3_2_TI;
Il2CppGenericParamFull t569_gp_T3_2_TI_GenericParamFull = { { &t569_IGC, 2}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* t569_IGPA[3] = 
{
	&t569_gp_T1_0_TI_GenericParamFull,
	&t569_gp_T2_1_TI_GenericParamFull,
	&t569_gp_T3_2_TI_GenericParamFull,
};
extern TypeInfo t569_TI;
Il2CppGenericContainer t569_IGC = { { NULL, NULL }, NULL, &t569_TI, 3, 0, t569_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t569_m3089_ParameterInfos[] = 
{
	{"target", 0, 134218955, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218956, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t569_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3089_MI = 
{
	".ctor", NULL, &t569_TI, &t30_0_0_0, NULL, t569_m3089_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1173, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t569_m3090_ParameterInfos[] = 
{
	{"args", 0, 134218957, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t569_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3090_MI = 
{
	"Invoke", NULL, &t569_TI, &t30_0_0_0, NULL, t569_m3090_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1174, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t569_m3091_ParameterInfos[] = 
{
	{"targetObj", 0, 134218958, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218959, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t569_TI;
extern Il2CppType t31_0_0_0;
MethodInfo m3091_MI = 
{
	"Find", NULL, &t569_TI, &t31_0_0_0, NULL, t569_m3091_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1175, NULL, (methodPointerType)NULL};
static MethodInfo* t569_MIs[] =
{
	&m3089_MI,
	&m3090_MI,
	&m3091_MI,
	NULL
};
extern Il2CppType t642_0_0_1;
FieldInfo t569_f0_FieldInfo = 
{
	"Delegate", &t642_0_0_1, &t569_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t569_FIs[] =
{
	&t569_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t569_0_0_0;
extern Il2CppType t569_1_0_0;
struct t569;
extern TypeInfo t569_TI;
TypeInfo t569_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`3", "UnityEngine.Events", t569_MIs, NULL, t569_FIs, NULL, NULL, NULL, NULL, &t569_TI, NULL, NULL, NULL, NULL, &t569_0_0_0, &t569_1_0_0, NULL, NULL, &t569_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t570.h"
extern Il2CppGenericContainer t570_IGC;
extern TypeInfo t570_gp_T1_0_TI;
Il2CppGenericParamFull t570_gp_T1_0_TI_GenericParamFull = { { &t570_IGC, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo t570_gp_T2_1_TI;
Il2CppGenericParamFull t570_gp_T2_1_TI_GenericParamFull = { { &t570_IGC, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo t570_gp_T3_2_TI;
Il2CppGenericParamFull t570_gp_T3_2_TI_GenericParamFull = { { &t570_IGC, 2}, {NULL, "T3", 0, 0, NULL} };
extern TypeInfo t570_gp_T4_3_TI;
Il2CppGenericParamFull t570_gp_T4_3_TI_GenericParamFull = { { &t570_IGC, 3}, {NULL, "T4", 0, 0, NULL} };
static Il2CppGenericParamFull* t570_IGPA[4] = 
{
	&t570_gp_T1_0_TI_GenericParamFull,
	&t570_gp_T2_1_TI_GenericParamFull,
	&t570_gp_T3_2_TI_GenericParamFull,
	&t570_gp_T4_3_TI_GenericParamFull,
};
extern TypeInfo t570_TI;
Il2CppGenericContainer t570_IGC = { { NULL, NULL }, NULL, &t570_TI, 4, 0, t570_IGPA };
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t570_m3092_ParameterInfos[] = 
{
	{"target", 0, 134218960, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"theFunction", 1, 134218961, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t570_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3092_MI = 
{
	".ctor", NULL, &t570_TI, &t30_0_0_0, NULL, t570_m3092_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 1176, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t570_m3093_ParameterInfos[] = 
{
	{"args", 0, 134218962, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t570_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3093_MI = 
{
	"Invoke", NULL, &t570_TI, &t30_0_0_0, NULL, t570_m3093_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1177, NULL, (methodPointerType)NULL};
extern Il2CppType t28_0_0_0;
extern Il2CppType t565_0_0_0;
static ParameterInfo t570_m3094_ParameterInfos[] = 
{
	{"targetObj", 0, 134218963, &EmptyCustomAttributesCache, &t28_0_0_0},
	{"method", 1, 134218964, &EmptyCustomAttributesCache, &t565_0_0_0},
};
extern TypeInfo t570_TI;
extern Il2CppType t31_0_0_0;
MethodInfo m3094_MI = 
{
	"Find", NULL, &t570_TI, &t31_0_0_0, NULL, t570_m3094_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 1178, NULL, (methodPointerType)NULL};
static MethodInfo* t570_MIs[] =
{
	&m3092_MI,
	&m3093_MI,
	&m3094_MI,
	NULL
};
extern Il2CppType t646_0_0_1;
FieldInfo t570_f0_FieldInfo = 
{
	"Delegate", &t646_0_0_1, &t570_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t570_FIs[] =
{
	&t570_f0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t570_0_0_0;
extern Il2CppType t570_1_0_0;
struct t570;
extern TypeInfo t570_TI;
TypeInfo t570_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "InvokableCall`4", "UnityEngine.Events", t570_MIs, NULL, t570_FIs, NULL, NULL, NULL, NULL, &t570_TI, NULL, NULL, NULL, NULL, &t570_0_0_0, &t570_1_0_0, NULL, NULL, &t570_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 3, 0, 1, 0, 0, 0, 0, 0};
#include "t571.h"
extern Il2CppGenericContainer t571_IGC;
extern TypeInfo t571_gp_T_0_TI;
Il2CppGenericParamFull t571_gp_T_0_TI_GenericParamFull = { { &t571_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* t571_IGPA[1] = 
{
	&t571_gp_T_0_TI_GenericParamFull,
};
extern TypeInfo t571_TI;
Il2CppGenericContainer t571_IGC = { { NULL, NULL }, NULL, &t571_TI, 1, 0, t571_IGPA };
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t571_gp_0_0_0_0;
static ParameterInfo t571_m3095_ParameterInfos[] = 
{
	{"target", 0, 134218965, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"theFunction", 1, 134218966, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"argument", 2, 134218967, &EmptyCustomAttributesCache, &t571_gp_0_0_0_0},
};
extern TypeInfo t571_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3095_MI = 
{
	".ctor", NULL, &t571_TI, &t30_0_0_0, NULL, t571_m3095_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 1179, NULL, (methodPointerType)NULL};
extern Il2CppType t333_0_0_0;
static ParameterInfo t571_m3096_ParameterInfos[] = 
{
	{"args", 0, 134218968, &EmptyCustomAttributesCache, &t333_0_0_0},
};
extern TypeInfo t571_TI;
extern Il2CppType t30_0_0_0;
MethodInfo m3096_MI = 
{
	"Invoke", NULL, &t571_TI, &t30_0_0_0, NULL, t571_m3096_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 1, false, false, 1180, NULL, (methodPointerType)NULL};
static MethodInfo* t571_MIs[] =
{
	&m3095_MI,
	&m3096_MI,
	NULL
};
extern Il2CppType t333_0_0_33;
FieldInfo t571_f1_FieldInfo = 
{
	"m_Arg1", &t333_0_0_33, &t571_TI, 0, &EmptyCustomAttributesCache};
static FieldInfo* t571_FIs[] =
{
	&t571_f1_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t571_0_0_0;
extern Il2CppType t571_1_0_0;
struct t571;
extern TypeInfo t571_TI;
TypeInfo t571_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "CachedInvokableCall`1", "UnityEngine.Events", t571_MIs, NULL, t571_FIs, NULL, NULL, NULL, NULL, &t571_TI, NULL, NULL, NULL, NULL, &t571_0_0_0, &t571_1_0_0, NULL, NULL, &t571_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, true, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 0, 0, 0};
#include "t572.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t572_TI;
#include "t572MD.h"



// Metadata Definition UnityEngine.Events.UnityEventCallState
extern Il2CppType t47_0_0_1542;
FieldInfo t572_f1_FieldInfo = 
{
	"value__", &t47_0_0_1542, &t572_TI, offsetof(t572, f1) + sizeof(t28), &EmptyCustomAttributesCache};
extern Il2CppType t572_0_0_32854;
FieldInfo t572_f2_FieldInfo = 
{
	"Off", &t572_0_0_32854, &t572_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t572_0_0_32854;
FieldInfo t572_f3_FieldInfo = 
{
	"EditorAndRuntime", &t572_0_0_32854, &t572_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t572_0_0_32854;
FieldInfo t572_f4_FieldInfo = 
{
	"RuntimeOnly", &t572_0_0_32854, &t572_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t572_FIs[] =
{
	&t572_f1_FieldInfo,
	&t572_f2_FieldInfo,
	&t572_f3_FieldInfo,
	&t572_f4_FieldInfo,
	NULL
};
static const int32_t t572_f2_DefaultValueData = 0;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t572_f2_DefaultValue = 
{
	&t572_f2_FieldInfo, { (char*)&t572_f2_DefaultValueData, &t47_0_0_0 }};
static const int32_t t572_f3_DefaultValueData = 1;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t572_f3_DefaultValue = 
{
	&t572_f3_FieldInfo, { (char*)&t572_f3_DefaultValueData, &t47_0_0_0 }};
static const int32_t t572_f4_DefaultValueData = 2;
extern Il2CppType t47_0_0_0;
static Il2CppFieldDefaultValueEntry t572_f4_DefaultValue = 
{
	&t572_f4_FieldInfo, { (char*)&t572_f4_DefaultValueData, &t47_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t572_FDVs[] = 
{
	&t572_f2_DefaultValue,
	&t572_f3_DefaultValue,
	&t572_f4_DefaultValue,
	NULL
};
static MethodInfo* t572_MIs[] =
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
static MethodInfo* t572_VT[] =
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
static Il2CppInterfaceOffsetPair t572_IOs[] = 
{
	{ &t314_TI, 4},
	{ &t315_TI, 5},
	{ &t316_TI, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t572_0_0_0;
extern Il2CppType t572_1_0_0;
extern TypeInfo t72_TI;
extern TypeInfo t47_TI;
extern TypeInfo t47_TI;
TypeInfo t572_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "UnityEventCallState", "UnityEngine.Events", t572_MIs, NULL, t572_FIs, NULL, &t72_TI, NULL, NULL, &t47_TI, NULL, t572_VT, &EmptyCustomAttributesCache, &t47_TI, &t572_0_0_0, &t572_1_0_0, t572_IOs, NULL, NULL, t572_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t572)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t573.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t573_TI;
#include "t573MD.h"

#include "t574.h"
#include "t652.h"
#include "t653.h"
#include "t654.h"
#include "t655.h"
#include "t656.h"
extern TypeInfo t573_TI;
extern TypeInfo t563_TI;
extern TypeInfo t18_TI;
extern TypeInfo t574_TI;
extern TypeInfo t564_TI;
extern TypeInfo t28_TI;
extern TypeInfo t565_TI;
extern TypeInfo t652_TI;
extern TypeInfo t653_TI;
extern TypeInfo t654_TI;
extern TypeInfo t655_TI;
extern TypeInfo t566_TI;
extern TypeInfo t43_TI;
extern TypeInfo t36_TI;
extern TypeInfo t571_TI;
extern TypeInfo t545_TI;
extern TypeInfo t656_TI;
extern TypeInfo t31_TI;
extern TypeInfo t333_TI;
#include "t574MD.h"
#include "t652MD.h"
#include "t653MD.h"
#include "t654MD.h"
#include "t655MD.h"
#include "t656MD.h"
extern Il2CppType t43_0_0_0;
extern Il2CppType t571_0_0_0;
extern Il2CppType t565_0_0_0;
extern MethodInfo m2908_MI;
extern MethodInfo m203_MI;
extern MethodInfo m2922_MI;
extern MethodInfo m138_MI;
extern MethodInfo m2923_MI;
extern MethodInfo m1885_MI;
extern MethodInfo m2938_MI;
extern MethodInfo m3097_MI;
extern MethodInfo m2928_MI;
extern MethodInfo m2912_MI;
extern MethodInfo m3098_MI;
extern MethodInfo m2911_MI;
extern MethodInfo m3099_MI;
extern MethodInfo m2913_MI;
extern MethodInfo m3100_MI;
extern MethodInfo m2914_MI;
extern MethodInfo m3101_MI;
extern MethodInfo m2918_MI;
extern MethodInfo m1673_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m3102_MI;
extern MethodInfo m3103_MI;
extern MethodInfo m3104_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m1553_MI;
extern MethodInfo m3105_MI;
extern MethodInfo m3106_MI;


extern MethodInfo m2921_MI;
 void m2921 (t573 * __this, MethodInfo* method){
	{
		t563 * L_0 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2908(L_0, &m2908_MI);
		__this->f3 = L_0;
		__this->f4 = 2;
		m203(__this, &m203_MI);
		return;
	}
}
extern MethodInfo m2922_MI;
 t43 * m2922 (t573 * __this, MethodInfo* method){
	{
		t43 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2923_MI;
 t18* m2923 (t573 * __this, MethodInfo* method){
	{
		t18* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2924_MI;
 int32_t m2924 (t573 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2925_MI;
 t563 * m2925 (t573 * __this, MethodInfo* method){
	{
		t563 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m2926_MI;
 bool m2926 (t573 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t43 * L_0 = m2922(__this, &m2922_MI);
		bool L_1 = m138(NULL, L_0, (t43 *)NULL, &m138_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t18* L_2 = m2923(__this, &m2923_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_3 = m1885(NULL, L_2, &m1885_MI);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2927_MI;
 t564 * m2927 (t573 * __this, t574 * p0, MethodInfo* method){
	t565 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		if (p0)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (t564 *)NULL;
	}

IL_0013:
	{
		t565 * L_1 = m2938(p0, __this, &m2938_MI);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_0023;
		}
	}
	{
		return (t564 *)NULL;
	}

IL_0023:
	{
		int32_t L_2 = (__this->f2);
		V_1 = L_2;
		if (V_1 == 0)
		{
			goto IL_0051;
		}
		if (V_1 == 1)
		{
			goto IL_00d2;
		}
		if (V_1 == 2)
		{
			goto IL_005f;
		}
		if (V_1 == 3)
		{
			goto IL_008a;
		}
		if (V_1 == 4)
		{
			goto IL_0072;
		}
		if (V_1 == 5)
		{
			goto IL_00a2;
		}
		if (V_1 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		t43 * L_3 = m2922(__this, &m2922_MI);
		t564 * L_4 = (t564 *)VirtFuncInvoker2< t564 *, t28 *, t565 * >::Invoke(&m3097_MI, p0, L_3, V_0);
		return L_4;
	}

IL_005f:
	{
		t43 * L_5 = m2922(__this, &m2922_MI);
		t563 * L_6 = (__this->f3);
		t564 * L_7 = m2928(NULL, L_5, V_0, L_6, &m2928_MI);
		return L_7;
	}

IL_0072:
	{
		t43 * L_8 = m2922(__this, &m2922_MI);
		t563 * L_9 = (__this->f3);
		float L_10 = m2912(L_9, &m2912_MI);
		t652 * L_11 = (t652 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t652_TI));
		m3098(L_11, L_8, V_0, L_10, &m3098_MI);
		return L_11;
	}

IL_008a:
	{
		t43 * L_12 = m2922(__this, &m2922_MI);
		t563 * L_13 = (__this->f3);
		int32_t L_14 = m2911(L_13, &m2911_MI);
		t653 * L_15 = (t653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t653_TI));
		m3099(L_15, L_12, V_0, L_14, &m3099_MI);
		return L_15;
	}

IL_00a2:
	{
		t43 * L_16 = m2922(__this, &m2922_MI);
		t563 * L_17 = (__this->f3);
		t18* L_18 = m2913(L_17, &m2913_MI);
		t654 * L_19 = (t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t654_TI));
		m3100(L_19, L_16, V_0, L_18, &m3100_MI);
		return L_19;
	}

IL_00ba:
	{
		t43 * L_20 = m2922(__this, &m2922_MI);
		t563 * L_21 = (__this->f3);
		bool L_22 = m2914(L_21, &m2914_MI);
		t655 * L_23 = (t655 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t655_TI));
		m3101(L_23, L_20, V_0, L_22, &m3101_MI);
		return L_23;
	}

IL_00d2:
	{
		t43 * L_24 = m2922(__this, &m2922_MI);
		t566 * L_25 = (t566 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t566_TI));
		m2918(L_25, L_24, V_0, &m2918_MI);
		return L_25;
	}

IL_00df:
	{
		return (t564 *)NULL;
	}
}
extern MethodInfo m2928_MI;
 t564 * m2928 (t28 * __this, t43 * p0, t565 * p1, t563 * p2, MethodInfo* method){
	t36 * V_0 = {0};
	t36 * V_1 = {0};
	t36 * V_2 = {0};
	t656 * V_3 = {0};
	t43 * V_4 = {0};
	t36 * G_B3_0 = {0};
	t36 * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_0 = m1673(NULL, LoadTypeToken(&t43_0_0_0), &m1673_MI);
		V_0 = L_0;
		t18* L_1 = m2910(p2, &m2910_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t18_TI));
		bool L_2 = m1885(NULL, L_1, &m1885_MI);
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		t18* L_3 = m2910(p2, &m2910_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_4 = m3102(NULL, L_3, 0, &m3102_MI);
		t36 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_6 = m1673(NULL, LoadTypeToken(&t43_0_0_0), &m1673_MI);
		G_B3_0 = L_6;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t36_TI));
		t36 * L_7 = m1673(NULL, LoadTypeToken(&t571_0_0_0), &m1673_MI);
		V_1 = L_7;
		t545* L_8 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 1));
		ArrayElementTypeCheck (L_8, V_0);
		*((t36 **)(t36 **)SZArrayLdElema(L_8, 0)) = (t36 *)V_0;
		t36 * L_9 = (t36 *)VirtFuncInvoker1< t36 *, t545* >::Invoke(&m3103_MI, V_1, L_8);
		V_2 = L_9;
		t545* L_10 = ((t545*)SZArrayNew(InitializedTypeInfo(&t545_TI), 3));
		t36 * L_11 = m1673(NULL, LoadTypeToken(&t43_0_0_0), &m1673_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t36 **)(t36 **)SZArrayLdElema(L_10, 0)) = (t36 *)L_11;
		t545* L_12 = L_10;
		t36 * L_13 = m1673(NULL, LoadTypeToken(&t565_0_0_0), &m1673_MI);
		ArrayElementTypeCheck (L_12, L_13);
		*((t36 **)(t36 **)SZArrayLdElema(L_12, 1)) = (t36 *)L_13;
		t545* L_14 = L_12;
		ArrayElementTypeCheck (L_14, V_0);
		*((t36 **)(t36 **)SZArrayLdElema(L_14, 2)) = (t36 *)V_0;
		t656 * L_15 = (t656 *)VirtFuncInvoker1< t656 *, t545* >::Invoke(&m3104_MI, V_2, L_14);
		V_3 = L_15;
		t43 * L_16 = m2909(p2, &m2909_MI);
		V_4 = L_16;
		bool L_17 = m138(NULL, V_4, (t43 *)NULL, &m138_MI);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		t36 * L_18 = m1553(V_4, &m1553_MI);
		bool L_19 = (bool)VirtFuncInvoker1< bool, t36 * >::Invoke(&m3105_MI, V_0, L_18);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (t43 *)NULL;
	}

IL_00aa:
	{
		t333* L_20 = ((t333*)SZArrayNew(InitializedTypeInfo(&t333_TI), 3));
		ArrayElementTypeCheck (L_20, p0);
		*((t28 **)(t28 **)SZArrayLdElema(L_20, 0)) = (t28 *)p0;
		t333* L_21 = L_20;
		ArrayElementTypeCheck (L_21, p1);
		*((t28 **)(t28 **)SZArrayLdElema(L_21, 1)) = (t28 *)p1;
		t333* L_22 = L_21;
		ArrayElementTypeCheck (L_22, V_4);
		*((t28 **)(t28 **)SZArrayLdElema(L_22, 2)) = (t28 *)V_4;
		t28 * L_23 = m3106(V_3, L_22, &m3106_MI);
		return ((t564 *)IsInst(L_23, InitializedTypeInfo(&t564_TI)));
	}
}
// Metadata Definition UnityEngine.Events.PersistentCall
extern Il2CppType t43_0_0_1;
extern CustomAttributesCache t573__CustomAttributeCache_m_Target;
FieldInfo t573_f0_FieldInfo = 
{
	"m_Target", &t43_0_0_1, &t573_TI, offsetof(t573, f0), &t573__CustomAttributeCache_m_Target};
extern Il2CppType t18_0_0_1;
extern CustomAttributesCache t573__CustomAttributeCache_m_MethodName;
FieldInfo t573_f1_FieldInfo = 
{
	"m_MethodName", &t18_0_0_1, &t573_TI, offsetof(t573, f1), &t573__CustomAttributeCache_m_MethodName};
extern Il2CppType t562_0_0_1;
extern CustomAttributesCache t573__CustomAttributeCache_m_Mode;
FieldInfo t573_f2_FieldInfo = 
{
	"m_Mode", &t562_0_0_1, &t573_TI, offsetof(t573, f2), &t573__CustomAttributeCache_m_Mode};
extern Il2CppType t563_0_0_1;
extern CustomAttributesCache t573__CustomAttributeCache_m_Arguments;
FieldInfo t573_f3_FieldInfo = 
{
	"m_Arguments", &t563_0_0_1, &t573_TI, offsetof(t573, f3), &t573__CustomAttributeCache_m_Arguments};
extern Il2CppType t572_0_0_1;
extern CustomAttributesCache t573__CustomAttributeCache_m_CallState;
FieldInfo t573_f4_FieldInfo = 
{
	"m_CallState", &t572_0_0_1, &t573_TI, offsetof(t573, f4), &t573__CustomAttributeCache_m_CallState};
static FieldInfo* t573_FIs[] =
{
	&t573_f0_FieldInfo,
	&t573_f1_FieldInfo,
	&t573_f2_FieldInfo,
	&t573_f3_FieldInfo,
	&t573_f4_FieldInfo,
	NULL
};
extern MethodInfo m2922_MI;
static PropertyInfo t573____target_PropertyInfo = 
{
	&t573_TI, "target", &m2922_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2923_MI;
static PropertyInfo t573____methodName_PropertyInfo = 
{
	&t573_TI, "methodName", &m2923_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2924_MI;
static PropertyInfo t573____mode_PropertyInfo = 
{
	&t573_TI, "mode", &m2924_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m2925_MI;
static PropertyInfo t573____arguments_PropertyInfo = 
{
	&t573_TI, "arguments", &m2925_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t573_PIs[] =
{
	&t573____target_PropertyInfo,
	&t573____methodName_PropertyInfo,
	&t573____mode_PropertyInfo,
	&t573____arguments_PropertyInfo,
	NULL
};
extern TypeInfo t573_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2921_MI = 
{
	".ctor", (methodPointerType)&m2921, &t573_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1181, NULL, (methodPointerType)NULL};
extern TypeInfo t573_TI;
extern Il2CppType t43_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2922_MI = 
{
	"get_target", (methodPointerType)&m2922, &t573_TI, &t43_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1182, NULL, (methodPointerType)NULL};
extern TypeInfo t573_TI;
extern Il2CppType t18_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2923_MI = 
{
	"get_methodName", (methodPointerType)&m2923, &t573_TI, &t18_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1183, NULL, (methodPointerType)NULL};
extern TypeInfo t573_TI;
extern Il2CppType t562_0_0_0;
extern void* RuntimeInvoker_t562 (MethodInfo* method, void* obj, void** args);
MethodInfo m2924_MI = 
{
	"get_mode", (methodPointerType)&m2924, &t573_TI, &t562_0_0_0, RuntimeInvoker_t562, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1184, NULL, (methodPointerType)NULL};
extern TypeInfo t573_TI;
extern Il2CppType t563_0_0_0;
extern void* RuntimeInvoker_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2925_MI = 
{
	"get_arguments", (methodPointerType)&m2925, &t573_TI, &t563_0_0_0, RuntimeInvoker_t28, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 1185, NULL, (methodPointerType)NULL};
extern TypeInfo t573_TI;
extern Il2CppType t31_0_0_0;
extern void* RuntimeInvoker_t31 (MethodInfo* method, void* obj, void** args);
MethodInfo m2926_MI = 
{
	"IsValid", (methodPointerType)&m2926, &t573_TI, &t31_0_0_0, RuntimeInvoker_t31, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 1186, NULL, (methodPointerType)NULL};
extern Il2CppType t574_0_0_0;
static ParameterInfo t573_m2927_ParameterInfos[] = 
{
	{"theEvent", 0, 134218969, &EmptyCustomAttributesCache, &t574_0_0_0},
};
extern TypeInfo t573_TI;
extern Il2CppType t564_0_0_0;
extern void* RuntimeInvoker_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2927_MI = 
{
	"GetRuntimeCall", (methodPointerType)&m2927, &t573_TI, &t564_0_0_0, RuntimeInvoker_t28_t28, t573_m2927_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 1187, NULL, (methodPointerType)NULL};
extern Il2CppType t43_0_0_0;
extern Il2CppType t565_0_0_0;
extern Il2CppType t563_0_0_0;
static ParameterInfo t573_m2928_ParameterInfos[] = 
{
	{"target", 0, 134218970, &EmptyCustomAttributesCache, &t43_0_0_0},
	{"method", 1, 134218971, &EmptyCustomAttributesCache, &t565_0_0_0},
	{"arguments", 2, 134218972, &EmptyCustomAttributesCache, &t563_0_0_0},
};
extern TypeInfo t573_TI;
extern Il2CppType t564_0_0_0;
extern void* RuntimeInvoker_t28_t28_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2928_MI = 
{
	"GetObjectCall", (methodPointerType)&m2928, &t573_TI, &t564_0_0_0, RuntimeInvoker_t28_t28_t28_t28, t573_m2928_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 1188, NULL, (methodPointerType)NULL};
static MethodInfo* t573_MIs[] =
{
	&m2921_MI,
	&m2922_MI,
	&m2923_MI,
	&m2924_MI,
	&m2925_MI,
	&m2926_MI,
	&m2927_MI,
	&m2928_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t573_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t573_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("instance"), &m1456_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t573_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("methodName"), &m1456_MI);
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
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
void t573_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("mode"), &m1456_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
void t573_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("arguments"), &m1456_MI);
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
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
void t573_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), &m1456_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("enabled"), &m1456_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t573__CustomAttributeCache_m_Target = {
2,
NULL,
&t573_CustomAttributesCacheGenerator_m_Target
};
CustomAttributesCache t573__CustomAttributeCache_m_MethodName = {
2,
NULL,
&t573_CustomAttributesCacheGenerator_m_MethodName
};
CustomAttributesCache t573__CustomAttributeCache_m_Mode = {
2,
NULL,
&t573_CustomAttributesCacheGenerator_m_Mode
};
CustomAttributesCache t573__CustomAttributeCache_m_Arguments = {
2,
NULL,
&t573_CustomAttributesCacheGenerator_m_Arguments
};
CustomAttributesCache t573__CustomAttributeCache_m_CallState = {
3,
NULL,
&t573_CustomAttributesCacheGenerator_m_CallState
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t573_0_0_0;
extern Il2CppType t573_1_0_0;
extern TypeInfo t28_TI;
struct t573;
extern TypeInfo t573_TI;
extern CustomAttributesCache t573__CustomAttributeCache_m_Target;
extern CustomAttributesCache t573__CustomAttributeCache_m_MethodName;
extern CustomAttributesCache t573__CustomAttributeCache_m_Mode;
extern CustomAttributesCache t573__CustomAttributeCache_m_Arguments;
extern CustomAttributesCache t573__CustomAttributeCache_m_CallState;
TypeInfo t573_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PersistentCall", "UnityEngine.Events", t573_MIs, t573_PIs, t573_FIs, NULL, &t28_TI, NULL, NULL, &t573_TI, NULL, t573_VT, &EmptyCustomAttributesCache, &t573_TI, &t573_0_0_0, &t573_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t573), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 8, 4, 5, 0, 0, 4, 0, 0};
#include "t575.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t575_TI;
#include "t575MD.h"

#include "t576.h"
#include "t577.h"
#include "t657.h"
extern TypeInfo t576_TI;
extern TypeInfo t575_TI;
extern TypeInfo t657_TI;
extern TypeInfo t573_TI;
extern TypeInfo t31_TI;
extern TypeInfo t341_TI;
extern TypeInfo t30_TI;
#include "t576MD.h"
#include "t657MD.h"
#include "t577MD.h"
extern MethodInfo m203_MI;
extern MethodInfo m3107_MI;
extern MethodInfo m3108_MI;
extern MethodInfo m3109_MI;
extern MethodInfo m2926_MI;
extern MethodInfo m2927_MI;
extern MethodInfo m2932_MI;
extern MethodInfo m3110_MI;
extern MethodInfo m1551_MI;


extern MethodInfo m2929_MI;
 void m2929 (t575 * __this, MethodInfo* method){
	{
		m203(__this, &m203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		t576 * L_0 = (t576 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t576_TI));
		m3107(L_0, &m3107_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m2930_MI;
 void m2930 (t575 * __this, t577 * p0, t574 * p1, MethodInfo* method){
	t573 * V_0 = {0};
	t657  V_1 = {0};
	t564 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t321 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t321 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t576 * L_0 = (__this->f0);
		t657  L_1 = m3108(L_0, &m3108_MI);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			t573 * L_2 = m3109((&V_1), &m3109_MI);
			V_0 = L_2;
			bool L_3 = m2926(V_0, &m2926_MI);
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			t564 * L_4 = m2927(V_0, p1, &m2927_MI);
			V_2 = L_4;
			if (!V_2)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			m2932(p0, V_2, &m2932_MI);
		}

IL_003e:
		{
			bool L_5 = m3110((&V_1), &m3110_MI);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			// IL_004a: leave IL_005b
			leaveInstructions[0] = 0x5B; // 1
			THROW_SENTINEL(IL_005b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t321 *)e.ex;
		goto IL_004f;
	}

IL_004f:
	{ // begin finally (depth: 1)
		t657  L_6 = V_1;
		t28 * L_7 = Box(InitializedTypeInfo(&t657_TI), &L_6);
		InterfaceActionInvoker0::Invoke(&m1551_MI, L_7);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5B:
				goto IL_005b;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				t321 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_005b:
	{
		return;
	}
}
// Metadata Definition UnityEngine.Events.PersistentCallGroup
extern Il2CppType t576_0_0_1;
extern CustomAttributesCache t575__CustomAttributeCache_m_Calls;
FieldInfo t575_f0_FieldInfo = 
{
	"m_Calls", &t576_0_0_1, &t575_TI, offsetof(t575, f0), &t575__CustomAttributeCache_m_Calls};
static FieldInfo* t575_FIs[] =
{
	&t575_f0_FieldInfo,
	NULL
};
extern TypeInfo t575_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30 (MethodInfo* method, void* obj, void** args);
MethodInfo m2929_MI = 
{
	".ctor", (methodPointerType)&m2929, &t575_TI, &t30_0_0_0, RuntimeInvoker_t30, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 1189, NULL, (methodPointerType)NULL};
extern Il2CppType t577_0_0_0;
extern Il2CppType t574_0_0_0;
static ParameterInfo t575_m2930_ParameterInfos[] = 
{
	{"invokableList", 0, 134218973, &EmptyCustomAttributesCache, &t577_0_0_0},
	{"unityEventBase", 1, 134218974, &EmptyCustomAttributesCache, &t574_0_0_0},
};
extern TypeInfo t575_TI;
extern Il2CppType t30_0_0_0;
extern void* RuntimeInvoker_t30_t28_t28 (MethodInfo* method, void* obj, void** args);
MethodInfo m2930_MI = 
{
	"Initialize", (methodPointerType)&m2930, &t575_TI, &t30_0_0_0, RuntimeInvoker_t30_t28_t28, t575_m2930_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 1190, NULL, (methodPointerType)NULL};
static MethodInfo* t575_MIs[] =
{
	&m2929_MI,
	&m2930_MI,
	NULL
};
extern MethodInfo m204_MI;
extern MethodInfo m97_MI;
extern MethodInfo m205_MI;
extern MethodInfo m206_MI;
static MethodInfo* t575_VT[] =
{
	&m204_MI,
	&m97_MI,
	&m205_MI,
	&m206_MI,
};
extern TypeInfo t326_TI;
extern MethodInfo m1457_MI;
extern TypeInfo t325_TI;
extern MethodInfo m1456_MI;
void t575_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t326 * tmp;
		tmp = (t326 *)il2cpp_codegen_object_new (&t326_TI);
		m1457(tmp, &m1457_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t325 * tmp;
		tmp = (t325 *)il2cpp_codegen_object_new (&t325_TI);
		m1456(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), &m1456_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t575__CustomAttributeCache_m_Calls = {
2,
NULL,
&t575_CustomAttributesCacheGenerator_m_Calls
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType t575_0_0_0;
extern Il2CppType t575_1_0_0;
extern TypeInfo t28_TI;
struct t575;
extern TypeInfo t575_TI;
extern CustomAttributesCache t575__CustomAttributeCache_m_Calls;
TypeInfo t575_TI = 
{
	&g_UnityEngine_dll_Image, NULL, "PersistentCallGroup", "UnityEngine.Events", t575_MIs, NULL, t575_FIs, NULL, &t28_TI, NULL, NULL, &t575_TI, NULL, t575_VT, &EmptyCustomAttributesCache, &t575_TI, &t575_0_0_0, &t575_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t575), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
