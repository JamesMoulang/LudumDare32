#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t69_TI;
#include "t69.h"
#include "t69MD.h"
extern MethodInfo m208_MI;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t28 *) * cache->count, 0);
	{
		t69 * tmp;
		tmp = (t69 *)il2cpp_codegen_object_new (&t69_TI);
		m208(tmp, &m208_MI);
		extern MethodInfo m209_MI;
		m209(tmp, true, &m209_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
1,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
