#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352;
// System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>
struct Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506;
// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.FullSerializer.fsBaseConverter>
struct Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71;
// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.FullSerializer.fsDirectConverter>
struct Dictionary_2_tD2289B37A259A866C6F8DFE40E244CC51C972B96;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IDictionary`2<Ludiq.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct IDictionary_2_t3EE87462A8E22246B64CADCCD597120951DD3EE5;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ludiq.FullSerializer.fsData>
struct KeyCollection_t5F613E33F55C7CF69D6A368E0F0D6D17FB97A76D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>>
struct KeyCollection_tC110134E084BE19B3470E73D7D454A1C2C126C4D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Ludiq.FullSerializer.fsConverter>
struct List_1_t40048BC374084B7099FD6D7B65702FA6E9CAB101;
// System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>
struct List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ludiq.FullSerializer.fsData>
struct ValueCollection_tAFB409867976DD1E77BA03E35C53988B367BC6DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>>
struct ValueCollection_t61D6FC99A7CDE10F28C0E7D1F8FFA14FC60763DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ludiq.FullSerializer.fsData>[]
struct EntryU5BU5D_t3DDC36B8D5AD407451F1E6557CEAF5BB40E482AC;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>>[]
struct EntryU5BU5D_t01B9EB77B986749F5BDD1AD48E3137EF304F64B9;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Ludiq.FullSerializer.fsObjectProcessor[]
struct fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6;
// Ludiq.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_t7B3C0CD2BBFC34F69F0634A10D7372A8673424B2;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Ludiq.FullSerializer.fsBaseConverter
struct fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233;
// Ludiq.FullSerializer.fsConfig
struct fsConfig_tEDB5C8932416ACE05CD738A7EBB5453B548E31C6;
// Ludiq.FullSerializer.fsContext
struct fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24;
// Ludiq.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tB40DC2F7A2B0B25E27ACFA21AF474FCB9CA28E5E;
// Ludiq.FullSerializer.fsData
struct fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641;
// Ludiq.FullSerializer.fsObjectProcessor
struct fsObjectProcessor_t4D68F1E2683049984B9FE65A6AFE6AB5A071FB5A;
// Ludiq.FullSerializer.fsSerializer
struct fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC;
// Ludiq.AttributeUtility/AttributeCache
struct AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE;
// Ludiq.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_tE681278AFEA133EF7F7662CFAA8C3BB5D78F8941;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356;
IL2CPP_EXTERN_C String_t* _stringLiteral537F955588893B499438876FBA6FFDB5522EB027;
IL2CPP_EXTERN_C String_t* _stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E;
IL2CPP_EXTERN_C String_t* _stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5680033C07F4FCC6EA1600D2F9CFB767D7DFD575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0583560FE66A0CCFD67DBB4F7D98354AC74126C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6989EE72727B4ABDD5E0AF9A64955C29947764AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF71BD3DE351497C5C11E0CC0838ACFD29350C276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsContext_Get_TisRuntimeObject_m7EF6598A6904573DDDC408717DF2CE7CEA741EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16C6A5DE749370DBBDB6E2CA8EAEDB40E5FFEAEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mDD7CC8236216E9DD6EB924CB435F85AFC3299DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mD43E3F28CA73E76894ECDFD4575BF8E421875690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisRuntimeObject_m1A7487B058382B093B263193188EE86BE16CE488_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshaled_com;
struct fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>
struct Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3DDC36B8D5AD407451F1E6557CEAF5BB40E482AC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5F613E33F55C7CF69D6A368E0F0D6D17FB97A76D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tAFB409867976DD1E77BA03E35C53988B367BC6DB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___entries_1)); }
	inline EntryU5BU5D_t3DDC36B8D5AD407451F1E6557CEAF5BB40E482AC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3DDC36B8D5AD407451F1E6557CEAF5BB40E482AC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3DDC36B8D5AD407451F1E6557CEAF5BB40E482AC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___keys_7)); }
	inline KeyCollection_t5F613E33F55C7CF69D6A368E0F0D6D17FB97A76D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5F613E33F55C7CF69D6A368E0F0D6D17FB97A76D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5F613E33F55C7CF69D6A368E0F0D6D17FB97A76D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ___values_8)); }
	inline ValueCollection_tAFB409867976DD1E77BA03E35C53988B367BC6DB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tAFB409867976DD1E77BA03E35C53988B367BC6DB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tAFB409867976DD1E77BA03E35C53988B367BC6DB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t01B9EB77B986749F5BDD1AD48E3137EF304F64B9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC110134E084BE19B3470E73D7D454A1C2C126C4D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t61D6FC99A7CDE10F28C0E7D1F8FFA14FC60763DB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___entries_1)); }
	inline EntryU5BU5D_t01B9EB77B986749F5BDD1AD48E3137EF304F64B9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t01B9EB77B986749F5BDD1AD48E3137EF304F64B9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t01B9EB77B986749F5BDD1AD48E3137EF304F64B9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___keys_7)); }
	inline KeyCollection_tC110134E084BE19B3470E73D7D454A1C2C126C4D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC110134E084BE19B3470E73D7D454A1C2C126C4D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC110134E084BE19B3470E73D7D454A1C2C126C4D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ___values_8)); }
	inline ValueCollection_t61D6FC99A7CDE10F28C0E7D1F8FFA14FC60763DB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t61D6FC99A7CDE10F28C0E7D1F8FFA14FC60763DB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t61D6FC99A7CDE10F28C0E7D1F8FFA14FC60763DB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___entries_1)); }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___keys_7)); }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___values_8)); }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____slots_8)); }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____items_1)); }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* get__items_1() const { return ____items_1; }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_StaticFields, ____emptyArray_5)); }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>
struct List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E, ____items_1)); }
	inline fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6* get__items_1() const { return ____items_1; }
	inline fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E_StaticFields, ____emptyArray_5)); }
	inline fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(fsObjectProcessorU5BU5D_tBBFC8C81BDE620977F2472D3D5D75C13C446AAE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____array_0)); }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* get__array_0() const { return ____array_0; }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Ludiq.FullSerializer.fsBaseConverter
struct fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233  : public RuntimeObject
{
public:
	// Ludiq.FullSerializer.fsSerializer Ludiq.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * ___Serializer_0;

public:
	inline static int32_t get_offset_of_Serializer_0() { return static_cast<int32_t>(offsetof(fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233, ___Serializer_0)); }
	inline fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * get_Serializer_0() const { return ___Serializer_0; }
	inline fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC ** get_address_of_Serializer_0() { return &___Serializer_0; }
	inline void set_Serializer_0(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * value)
	{
		___Serializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Serializer_0), (void*)value);
	}
};


// Ludiq.FullSerializer.fsContext
struct fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Ludiq.FullSerializer.fsContext::_contextObjects
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ____contextObjects_0;

public:
	inline static int32_t get_offset_of__contextObjects_0() { return static_cast<int32_t>(offsetof(fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24, ____contextObjects_0)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get__contextObjects_0() const { return ____contextObjects_0; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of__contextObjects_0() { return &____contextObjects_0; }
	inline void set__contextObjects_0(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		____contextObjects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contextObjects_0), (void*)value);
	}
};


// Ludiq.FullSerializer.fsData
struct fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641  : public RuntimeObject
{
public:
	// System.Object Ludiq.FullSerializer.fsData::_value
	RuntimeObject * ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}
};

struct fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641_StaticFields
{
public:
	// Ludiq.FullSerializer.fsData Ludiq.FullSerializer.fsData::True
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * ___True_1;
	// Ludiq.FullSerializer.fsData Ludiq.FullSerializer.fsData::False
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * ___False_2;
	// Ludiq.FullSerializer.fsData Ludiq.FullSerializer.fsData::Null
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * ___Null_3;

public:
	inline static int32_t get_offset_of_True_1() { return static_cast<int32_t>(offsetof(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641_StaticFields, ___True_1)); }
	inline fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * get_True_1() const { return ___True_1; }
	inline fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** get_address_of_True_1() { return &___True_1; }
	inline void set_True_1(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * value)
	{
		___True_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___True_1), (void*)value);
	}

	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641_StaticFields, ___False_2)); }
	inline fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * get_False_2() const { return ___False_2; }
	inline fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * value)
	{
		___False_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___False_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641_StaticFields, ___Null_3)); }
	inline fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * get_Null_3() const { return ___Null_3; }
	inline fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// Ludiq.FullSerializer.fsObjectProcessor
struct fsObjectProcessor_t4D68F1E2683049984B9FE65A6AFE6AB5A071FB5A  : public RuntimeObject
{
public:

public:
};


// Ludiq.FullSerializer.Internal.fsOption
struct fsOption_tF96A006C52FB96E18F96D0AB6D7F878DEB47E97D  : public RuntimeObject
{
public:

public:
};


// Ludiq.FullSerializer.fsSerializer
struct fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Ludiq.FullSerializer.fsConverter> Ludiq.FullSerializer.fsSerializer::_availableConverters
	List_1_t40048BC374084B7099FD6D7B65702FA6E9CAB101 * ____availableConverters_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.FullSerializer.fsDirectConverter> Ludiq.FullSerializer.fsSerializer::_availableDirectConverters
	Dictionary_2_tD2289B37A259A866C6F8DFE40E244CC51C972B96 * ____availableDirectConverters_1;
	// System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor> Ludiq.FullSerializer.fsSerializer::_processors
	List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * ____processors_2;
	// Ludiq.FullSerializer.Internal.fsCyclicReferenceManager Ludiq.FullSerializer.fsSerializer::_references
	fsCyclicReferenceManager_tB40DC2F7A2B0B25E27ACFA21AF474FCB9CA28E5E * ____references_3;
	// Ludiq.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter Ludiq.FullSerializer.fsSerializer::_lazyReferenceWriter
	fsLazyCycleDefinitionWriter_tE681278AFEA133EF7F7662CFAA8C3BB5D78F8941 * ____lazyReferenceWriter_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Ludiq.FullSerializer.fsSerializer::_abstractTypeRemap
	Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * ____abstractTypeRemap_5;
	// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.FullSerializer.fsBaseConverter> Ludiq.FullSerializer.fsSerializer::_cachedConverterTypeInstances
	Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 * ____cachedConverterTypeInstances_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Ludiq.FullSerializer.fsBaseConverter> Ludiq.FullSerializer.fsSerializer::_cachedConverters
	Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 * ____cachedConverters_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>> Ludiq.FullSerializer.fsSerializer::_cachedProcessors
	Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 * ____cachedProcessors_8;
	// Ludiq.FullSerializer.fsContext Ludiq.FullSerializer.fsSerializer::Context
	fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 * ___Context_9;
	// Ludiq.FullSerializer.fsConfig Ludiq.FullSerializer.fsSerializer::Config
	fsConfig_tEDB5C8932416ACE05CD738A7EBB5453B548E31C6 * ___Config_10;

public:
	inline static int32_t get_offset_of__availableConverters_0() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____availableConverters_0)); }
	inline List_1_t40048BC374084B7099FD6D7B65702FA6E9CAB101 * get__availableConverters_0() const { return ____availableConverters_0; }
	inline List_1_t40048BC374084B7099FD6D7B65702FA6E9CAB101 ** get_address_of__availableConverters_0() { return &____availableConverters_0; }
	inline void set__availableConverters_0(List_1_t40048BC374084B7099FD6D7B65702FA6E9CAB101 * value)
	{
		____availableConverters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____availableConverters_0), (void*)value);
	}

	inline static int32_t get_offset_of__availableDirectConverters_1() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____availableDirectConverters_1)); }
	inline Dictionary_2_tD2289B37A259A866C6F8DFE40E244CC51C972B96 * get__availableDirectConverters_1() const { return ____availableDirectConverters_1; }
	inline Dictionary_2_tD2289B37A259A866C6F8DFE40E244CC51C972B96 ** get_address_of__availableDirectConverters_1() { return &____availableDirectConverters_1; }
	inline void set__availableDirectConverters_1(Dictionary_2_tD2289B37A259A866C6F8DFE40E244CC51C972B96 * value)
	{
		____availableDirectConverters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____availableDirectConverters_1), (void*)value);
	}

	inline static int32_t get_offset_of__processors_2() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____processors_2)); }
	inline List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * get__processors_2() const { return ____processors_2; }
	inline List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E ** get_address_of__processors_2() { return &____processors_2; }
	inline void set__processors_2(List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * value)
	{
		____processors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processors_2), (void*)value);
	}

	inline static int32_t get_offset_of__references_3() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____references_3)); }
	inline fsCyclicReferenceManager_tB40DC2F7A2B0B25E27ACFA21AF474FCB9CA28E5E * get__references_3() const { return ____references_3; }
	inline fsCyclicReferenceManager_tB40DC2F7A2B0B25E27ACFA21AF474FCB9CA28E5E ** get_address_of__references_3() { return &____references_3; }
	inline void set__references_3(fsCyclicReferenceManager_tB40DC2F7A2B0B25E27ACFA21AF474FCB9CA28E5E * value)
	{
		____references_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____references_3), (void*)value);
	}

	inline static int32_t get_offset_of__lazyReferenceWriter_4() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____lazyReferenceWriter_4)); }
	inline fsLazyCycleDefinitionWriter_tE681278AFEA133EF7F7662CFAA8C3BB5D78F8941 * get__lazyReferenceWriter_4() const { return ____lazyReferenceWriter_4; }
	inline fsLazyCycleDefinitionWriter_tE681278AFEA133EF7F7662CFAA8C3BB5D78F8941 ** get_address_of__lazyReferenceWriter_4() { return &____lazyReferenceWriter_4; }
	inline void set__lazyReferenceWriter_4(fsLazyCycleDefinitionWriter_tE681278AFEA133EF7F7662CFAA8C3BB5D78F8941 * value)
	{
		____lazyReferenceWriter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lazyReferenceWriter_4), (void*)value);
	}

	inline static int32_t get_offset_of__abstractTypeRemap_5() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____abstractTypeRemap_5)); }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * get__abstractTypeRemap_5() const { return ____abstractTypeRemap_5; }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 ** get_address_of__abstractTypeRemap_5() { return &____abstractTypeRemap_5; }
	inline void set__abstractTypeRemap_5(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * value)
	{
		____abstractTypeRemap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____abstractTypeRemap_5), (void*)value);
	}

	inline static int32_t get_offset_of__cachedConverterTypeInstances_6() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____cachedConverterTypeInstances_6)); }
	inline Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 * get__cachedConverterTypeInstances_6() const { return ____cachedConverterTypeInstances_6; }
	inline Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 ** get_address_of__cachedConverterTypeInstances_6() { return &____cachedConverterTypeInstances_6; }
	inline void set__cachedConverterTypeInstances_6(Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 * value)
	{
		____cachedConverterTypeInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedConverterTypeInstances_6), (void*)value);
	}

	inline static int32_t get_offset_of__cachedConverters_7() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____cachedConverters_7)); }
	inline Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 * get__cachedConverters_7() const { return ____cachedConverters_7; }
	inline Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 ** get_address_of__cachedConverters_7() { return &____cachedConverters_7; }
	inline void set__cachedConverters_7(Dictionary_2_tDDA39B2D6A71F70D8FF0463CA4DA1F4FEF909B71 * value)
	{
		____cachedConverters_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedConverters_7), (void*)value);
	}

	inline static int32_t get_offset_of__cachedProcessors_8() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ____cachedProcessors_8)); }
	inline Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 * get__cachedProcessors_8() const { return ____cachedProcessors_8; }
	inline Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 ** get_address_of__cachedProcessors_8() { return &____cachedProcessors_8; }
	inline void set__cachedProcessors_8(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 * value)
	{
		____cachedProcessors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedProcessors_8), (void*)value);
	}

	inline static int32_t get_offset_of_Context_9() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ___Context_9)); }
	inline fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 * get_Context_9() const { return ___Context_9; }
	inline fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 ** get_address_of_Context_9() { return &___Context_9; }
	inline void set_Context_9(fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 * value)
	{
		___Context_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Context_9), (void*)value);
	}

	inline static int32_t get_offset_of_Config_10() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC, ___Config_10)); }
	inline fsConfig_tEDB5C8932416ACE05CD738A7EBB5453B548E31C6 * get_Config_10() const { return ___Config_10; }
	inline fsConfig_tEDB5C8932416ACE05CD738A7EBB5453B548E31C6 ** get_address_of_Config_10() { return &___Config_10; }
	inline void set_Config_10(fsConfig_tEDB5C8932416ACE05CD738A7EBB5453B548E31C6 * value)
	{
		___Config_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Config_10), (void*)value);
	}
};

struct fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Ludiq.FullSerializer.fsSerializer::_reservedKeywords
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____reservedKeywords_11;
	// System.String Ludiq.FullSerializer.fsSerializer::Key_ObjectReference
	String_t* ___Key_ObjectReference_12;
	// System.String Ludiq.FullSerializer.fsSerializer::Key_ObjectDefinition
	String_t* ___Key_ObjectDefinition_13;
	// System.String Ludiq.FullSerializer.fsSerializer::Key_InstanceType
	String_t* ___Key_InstanceType_14;
	// System.String Ludiq.FullSerializer.fsSerializer::Key_Version
	String_t* ___Key_Version_15;
	// System.String Ludiq.FullSerializer.fsSerializer::Key_Content
	String_t* ___Key_Content_16;

public:
	inline static int32_t get_offset_of__reservedKeywords_11() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields, ____reservedKeywords_11)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__reservedKeywords_11() const { return ____reservedKeywords_11; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__reservedKeywords_11() { return &____reservedKeywords_11; }
	inline void set__reservedKeywords_11(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____reservedKeywords_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reservedKeywords_11), (void*)value);
	}

	inline static int32_t get_offset_of_Key_ObjectReference_12() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields, ___Key_ObjectReference_12)); }
	inline String_t* get_Key_ObjectReference_12() const { return ___Key_ObjectReference_12; }
	inline String_t** get_address_of_Key_ObjectReference_12() { return &___Key_ObjectReference_12; }
	inline void set_Key_ObjectReference_12(String_t* value)
	{
		___Key_ObjectReference_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_ObjectReference_12), (void*)value);
	}

	inline static int32_t get_offset_of_Key_ObjectDefinition_13() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields, ___Key_ObjectDefinition_13)); }
	inline String_t* get_Key_ObjectDefinition_13() const { return ___Key_ObjectDefinition_13; }
	inline String_t** get_address_of_Key_ObjectDefinition_13() { return &___Key_ObjectDefinition_13; }
	inline void set_Key_ObjectDefinition_13(String_t* value)
	{
		___Key_ObjectDefinition_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_ObjectDefinition_13), (void*)value);
	}

	inline static int32_t get_offset_of_Key_InstanceType_14() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields, ___Key_InstanceType_14)); }
	inline String_t* get_Key_InstanceType_14() const { return ___Key_InstanceType_14; }
	inline String_t** get_address_of_Key_InstanceType_14() { return &___Key_InstanceType_14; }
	inline void set_Key_InstanceType_14(String_t* value)
	{
		___Key_InstanceType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_InstanceType_14), (void*)value);
	}

	inline static int32_t get_offset_of_Key_Version_15() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields, ___Key_Version_15)); }
	inline String_t* get_Key_Version_15() const { return ___Key_Version_15; }
	inline String_t** get_address_of_Key_Version_15() { return &___Key_Version_15; }
	inline void set_Key_Version_15(String_t* value)
	{
		___Key_Version_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_Version_15), (void*)value);
	}

	inline static int32_t get_offset_of_Key_Content_16() { return static_cast<int32_t>(offsetof(fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC_StaticFields, ___Key_Content_16)); }
	inline String_t* get_Key_Content_16() const { return ___Key_Content_16; }
	inline String_t** get_address_of_Key_Content_16() { return &___Key_Content_16; }
	inline void set_Key_Content_16(String_t* value)
	{
		___Key_Content_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_Content_16), (void*)value);
	}
};


// Ludiq.AttributeUtility/AttributeCache
struct AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Ludiq.AttributeUtility/AttributeCache::<inheritedAttributes>k__BackingField
	List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * ___U3CinheritedAttributesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Attribute> Ludiq.AttributeUtility/AttributeCache::<definedAttributes>k__BackingField
	List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * ___U3CdefinedAttributesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CinheritedAttributesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB, ___U3CinheritedAttributesU3Ek__BackingField_0)); }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * get_U3CinheritedAttributesU3Ek__BackingField_0() const { return ___U3CinheritedAttributesU3Ek__BackingField_0; }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 ** get_address_of_U3CinheritedAttributesU3Ek__BackingField_0() { return &___U3CinheritedAttributesU3Ek__BackingField_0; }
	inline void set_U3CinheritedAttributesU3Ek__BackingField_0(List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * value)
	{
		___U3CinheritedAttributesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinheritedAttributesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefinedAttributesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB, ___U3CdefinedAttributesU3Ek__BackingField_1)); }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * get_U3CdefinedAttributesU3Ek__BackingField_1() const { return ___U3CdefinedAttributesU3Ek__BackingField_1; }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 ** get_address_of_U3CdefinedAttributesU3Ek__BackingField_1() { return &___U3CdefinedAttributesU3Ek__BackingField_1; }
	inline void set_U3CdefinedAttributesU3Ek__BackingField_1(List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * value)
	{
		___U3CdefinedAttributesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinedAttributesU3Ek__BackingField_1), (void*)value);
	}
};


// Ludiq.FullSerializer.Internal.fsOption`1<System.Object>
struct fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6 
{
public:
	// System.Boolean Ludiq.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Ludiq.FullSerializer.Internal.fsOption`1::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__hasValue_0() { return static_cast<int32_t>(offsetof(fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6, ____hasValue_0)); }
	inline bool get__hasValue_0() const { return ____hasValue_0; }
	inline bool* get_address_of__hasValue_0() { return &____hasValue_0; }
	inline void set__hasValue_0(bool value)
	{
		____hasValue_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

struct fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6_StaticFields
{
public:
	// Ludiq.FullSerializer.Internal.fsOption`1<T> Ludiq.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6_StaticFields, ___Empty_2)); }
	inline fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6  get_Empty_2() const { return ___Empty_2; }
	inline fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_2))->____value_1), (void*)NULL);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_3() const { return ____body_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Ludiq.FullSerializer.fsConverter
struct fsConverter_t9ECEE5209C8008A1E79C34E7F0D1AECFE005159A  : public fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233
{
public:

public:
};


// Ludiq.FullSerializer.fsResult
struct fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B 
{
public:
	// System.Boolean Ludiq.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Ludiq.FullSerializer.fsResult::_messages
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____messages_2;

public:
	inline static int32_t get_offset_of__success_1() { return static_cast<int32_t>(offsetof(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B, ____success_1)); }
	inline bool get__success_1() const { return ____success_1; }
	inline bool* get_address_of__success_1() { return &____success_1; }
	inline void set__success_1(bool value)
	{
		____success_1 = value;
	}

	inline static int32_t get_offset_of__messages_2() { return static_cast<int32_t>(offsetof(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B, ____messages_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__messages_2() const { return ____messages_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__messages_2() { return &____messages_2; }
	inline void set__messages_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____messages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messages_2), (void*)value);
	}
};

struct fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_StaticFields
{
public:
	// System.String[] Ludiq.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___EmptyStringArray_0;
	// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsResult::Success
	fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  ___Success_3;

public:
	inline static int32_t get_offset_of_EmptyStringArray_0() { return static_cast<int32_t>(offsetof(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_StaticFields, ___EmptyStringArray_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_EmptyStringArray_0() const { return ___EmptyStringArray_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_EmptyStringArray_0() { return &___EmptyStringArray_0; }
	inline void set_EmptyStringArray_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___EmptyStringArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyStringArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_Success_3() { return static_cast<int32_t>(offsetof(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_StaticFields, ___Success_3)); }
	inline fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  get_Success_3() const { return ___Success_3; }
	inline fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B * get_address_of_Success_3() { return &___Success_3; }
	inline void set_Success_3(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  value)
	{
		___Success_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Success_3))->____messages_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Ludiq.FullSerializer.fsResult
struct fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____messages_2;
};
// Native definition for COM marshalling of Ludiq.FullSerializer.fsResult
struct fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B_marshaled_com
{
	int32_t ____success_1;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____messages_2;
};

// Ludiq.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090 
{
public:
	// Ludiq.FullSerializer.Internal.fsVersionedType[] Ludiq.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_t7B3C0CD2BBFC34F69F0634A10D7372A8673424B2* ___Ancestors_0;
	// System.String Ludiq.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Ludiq.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t * ___ModelType_2;

public:
	inline static int32_t get_offset_of_Ancestors_0() { return static_cast<int32_t>(offsetof(fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090, ___Ancestors_0)); }
	inline fsVersionedTypeU5BU5D_t7B3C0CD2BBFC34F69F0634A10D7372A8673424B2* get_Ancestors_0() const { return ___Ancestors_0; }
	inline fsVersionedTypeU5BU5D_t7B3C0CD2BBFC34F69F0634A10D7372A8673424B2** get_address_of_Ancestors_0() { return &___Ancestors_0; }
	inline void set_Ancestors_0(fsVersionedTypeU5BU5D_t7B3C0CD2BBFC34F69F0634A10D7372A8673424B2* value)
	{
		___Ancestors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ancestors_0), (void*)value);
	}

	inline static int32_t get_offset_of_VersionString_1() { return static_cast<int32_t>(offsetof(fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090, ___VersionString_1)); }
	inline String_t* get_VersionString_1() const { return ___VersionString_1; }
	inline String_t** get_address_of_VersionString_1() { return &___VersionString_1; }
	inline void set_VersionString_1(String_t* value)
	{
		___VersionString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VersionString_1), (void*)value);
	}

	inline static int32_t get_offset_of_ModelType_2() { return static_cast<int32_t>(offsetof(fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090, ___ModelType_2)); }
	inline Type_t * get_ModelType_2() const { return ___ModelType_2; }
	inline Type_t ** get_address_of_ModelType_2() { return &___ModelType_2; }
	inline void set_ModelType_2(Type_t * value)
	{
		___ModelType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModelType_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Ludiq.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshaled_pinvoke
{
	fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t * ___ModelType_2;
};
// Native definition for COM marshalling of Ludiq.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshaled_com
{
	fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t * ___ModelType_2;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ____hoistedParameters_1;

public:
	inline static int32_t get_offset_of__definedParameters_0() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____definedParameters_0)); }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * get__definedParameters_0() const { return ____definedParameters_0; }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** get_address_of__definedParameters_0() { return &____definedParameters_0; }
	inline void set__definedParameters_0(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * value)
	{
		____definedParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____definedParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of__hoistedParameters_1() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____hoistedParameters_1)); }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * get__hoistedParameters_1() const { return ____hoistedParameters_1; }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 ** get_address_of__hoistedParameters_1() { return &____hoistedParameters_1; }
	inline void set__hoistedParameters_1(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * value)
	{
		____hoistedParameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoistedParameters_1), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * ____shadowedVars_2;

public:
	inline static int32_t get_offset_of__variables_0() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____variables_0)); }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * get__variables_0() const { return ____variables_0; }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 ** get_address_of__variables_0() { return &____variables_0; }
	inline void set__variables_0(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * value)
	{
		____variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____variables_0), (void*)value);
	}

	inline static int32_t get_offset_of__frame_1() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____frame_1)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__frame_1() const { return ____frame_1; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__frame_1() { return &____frame_1; }
	inline void set__frame_1(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frame_1), (void*)value);
	}

	inline static int32_t get_offset_of__shadowedVars_2() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____shadowedVars_2)); }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * get__shadowedVars_2() const { return ____shadowedVars_2; }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 ** get_address_of__shadowedVars_2() { return &____shadowedVars_2; }
	inline void set__shadowedVars_2(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * value)
	{
		____shadowedVars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowedVars_2), (void*)value);
	}
};


// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F  : public LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474
{
public:

public:
};


// Ludiq.FullSerializer.Internal.fsOption`1<Ludiq.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB 
{
public:
	// System.Boolean Ludiq.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Ludiq.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  ____value_1;

public:
	inline static int32_t get_offset_of__hasValue_0() { return static_cast<int32_t>(offsetof(fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB, ____hasValue_0)); }
	inline bool get__hasValue_0() const { return ____hasValue_0; }
	inline bool* get_address_of__hasValue_0() { return &____hasValue_0; }
	inline void set__hasValue_0(bool value)
	{
		____hasValue_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB, ____value_1)); }
	inline fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  get__value_1() const { return ____value_1; }
	inline fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090 * get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_1))->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_1))->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_1))->___ModelType_2), (void*)NULL);
		#endif
	}
};

struct fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB_StaticFields
{
public:
	// Ludiq.FullSerializer.Internal.fsOption`1<T> Ludiq.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB_StaticFields, ___Empty_2)); }
	inline fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB  get_Empty_2() const { return ___Empty_2; }
	inline fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____value_1))->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____value_1))->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____value_1))->___ModelType_2), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Ludiq.FullSerializer.fsEnumConverter
struct fsEnumConverter_t86F30EB4E2C30B20B652B8EE5BA8E75B1A100732  : public fsConverter_t9ECEE5209C8008A1E79C34E7F0D1AECFE005159A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Ludiq.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0  : public RuntimeObject
{
public:

public:
};

struct fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_StaticFields
{
public:
	// System.Type[] Ludiq.FullSerializer.Internal.fsPortableReflection::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_0;
	// System.Collections.Generic.IDictionary`2<Ludiq.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute> Ludiq.FullSerializer.Internal.fsPortableReflection::_cachedAttributeQueries
	RuntimeObject* ____cachedAttributeQueries_1;
	// System.Reflection.BindingFlags Ludiq.FullSerializer.Internal.fsPortableReflection::DeclaredFlags
	int32_t ___DeclaredFlags_2;

public:
	inline static int32_t get_offset_of_EmptyTypes_0() { return static_cast<int32_t>(offsetof(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_StaticFields, ___EmptyTypes_0)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_0() const { return ___EmptyTypes_0; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_0() { return &___EmptyTypes_0; }
	inline void set_EmptyTypes_0(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_0), (void*)value);
	}

	inline static int32_t get_offset_of__cachedAttributeQueries_1() { return static_cast<int32_t>(offsetof(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_StaticFields, ____cachedAttributeQueries_1)); }
	inline RuntimeObject* get__cachedAttributeQueries_1() const { return ____cachedAttributeQueries_1; }
	inline RuntimeObject** get_address_of__cachedAttributeQueries_1() { return &____cachedAttributeQueries_1; }
	inline void set__cachedAttributeQueries_1(RuntimeObject* value)
	{
		____cachedAttributeQueries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedAttributeQueries_1), (void*)value);
	}

	inline static int32_t get_offset_of_DeclaredFlags_2() { return static_cast<int32_t>(offsetof(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_StaticFields, ___DeclaredFlags_2)); }
	inline int32_t get_DeclaredFlags_2() const { return ___DeclaredFlags_2; }
	inline int32_t* get_address_of_DeclaredFlags_2() { return &___DeclaredFlags_2; }
	inline void set_DeclaredFlags_2(int32_t value)
	{
		___DeclaredFlags_2 = value;
	}
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void Ludiq.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_mE04C09B33E9DCA509802EEB6E8863B82B09A5643_gshared (fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Ludiq.FullSerializer.Internal.fsOption`1<Ludiq.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_mC048390D604789148950C3718F04DAC8CDD9A3FF_gshared (fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB * __this, fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Type,System.Object,Ludiq.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsSerializer_TrySerialize_mAE3BE4991D6BECB13683E3ADBFFFD1B2D96A44CA (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * __this, Type_t * ___storageType0, Type_t * ___overrideConverterType1, RuntimeObject * ___instance2, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** ___data3, const RuntimeMethod* method);
// System.Boolean Ludiq.FullSerializer.fsResult::get_Succeeded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148 (Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * __this, String_t* ___key0, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 *, String_t*, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3 (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Ludiq.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
inline void fsOption_1__ctor_mE04C09B33E9DCA509802EEB6E8863B82B09A5643 (fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6 *, RuntimeObject *, const RuntimeMethod*))fsOption_1__ctor_mE04C09B33E9DCA509802EEB6E8863B82B09A5643_gshared)(__this, ___value0, method);
}
// System.Void Ludiq.FullSerializer.Internal.fsOption`1<Ludiq.FullSerializer.Internal.fsVersionedType>::.ctor(T)
inline void fsOption_1__ctor_mC048390D604789148950C3718F04DAC8CDD9A3FF (fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB * __this, fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB *, fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090 , const RuntimeMethod*))fsOption_1__ctor_mC048390D604789148950C3718F04DAC8CDD9A3FF_gshared)(__this, ___value0, method);
}
// System.Attribute Ludiq.FullSerializer.Internal.fsPortableReflection::GetAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * fsPortableReflection_GetAttribute_m7B649DEA970D740D1175EAF8F165CEC1F3EE9BAE (MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method);
// System.Boolean Ludiq.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m44F9495EC601F66514439DBCC464E22C46BCD0E4 (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Boolean Ludiq.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m6B9AE3ED3961BEB2D320A9405F50923AA5C78DED (MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>::get_Item(System.Int32)
inline fsObjectProcessor_t4D68F1E2683049984B9FE65A6AFE6AB5A071FB5A * List_1_get_Item_mF71BD3DE351497C5C11E0CC0838ACFD29350C276_inline (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  fsObjectProcessor_t4D68F1E2683049984B9FE65A6AFE6AB5A071FB5A * (*) (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0583560FE66A0CCFD67DBB4F7D98354AC74126C5 (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>::get_Count()
inline int32_t List_1_get_Count_m6989EE72727B4ABDD5E0AF9A64955C29947764AE_inline (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Ludiq.FullSerializer.fsObjectProcessor>>::.ctor()
inline void Dictionary_2__ctor_m5680033C07F4FCC6EA1600D2F9CFB767D7DFD575 (Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsSerializer::TryDeserialize(Ludiq.FullSerializer.fsData,System.Type,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsSerializer_TryDeserialize_mA5B4441767156E46D52CD8D90386878EF015E3E4 (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * __this, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * ___data0, Type_t * ___storageType1, RuntimeObject ** ___result2, const RuntimeMethod* method);
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Object,Ludiq.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsSerializer_TrySerialize_m874721E6F2B31AE995405EDD8354D43A33631929 (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * __this, Type_t * ___storageType0, RuntimeObject * ___instance1, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** ___data2, const RuntimeMethod* method);
// System.Attribute Ludiq.AttributeUtility/AttributeCache::GetAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * AttributeCache_GetAttribute_mC6832DCE2D09BF39126B643F7215271BFB27FE74 (AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB * __this, Type_t * ___attributeType0, bool ___inherit1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Attribute> Ludiq.AttributeUtility/AttributeCache::GetAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_m452CA225DAFBDA6E8D5F6FA47D593B33FAF1BB41 (AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB * __this, Type_t * ___attributeType0, bool ___inherit1, const RuntimeMethod* method);
// System.Boolean Ludiq.AttributeUtility/AttributeCache::HasAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_m52906077D69F1946E767E1AAEDBCEBA96E489F40 (AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB * __this, Type_t * ___attributeType0, bool ___inherit1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30 (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(!0)
inline void List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708 (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(!0)
inline void Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsBaseConverter::SerializeMember<System.Object>(System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>,System.Type,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsBaseConverter_SerializeMember_TisRuntimeObject_m622395C2DC494A43F7DCDB60FE8F231155F3843E_gshared (fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233 * __this, Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * ___data0, Type_t * ___overrideConverterType1, String_t* ___name2, RuntimeObject * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * V_0 = NULL;
	fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * L_0 = (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)__this->get_Serializer_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		Type_t * L_3 = ___overrideConverterType1;
		RuntimeObject * L_4 = ___value3;
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_5;
		L_5 = fsSerializer_TrySerialize_mAE3BE4991D6BECB13683E3ADBFFFD1B2D96A44CA((fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)L_0, (Type_t *)L_2, (Type_t *)L_3, (RuntimeObject *)L_4, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(&V_0), /*hidden argument*/NULL);
		V_1 = (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_5;
		bool L_6;
		L_6 = fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline((fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(&V_1), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * L_7 = ___data0;
		String_t* L_8 = ___name2;
		fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * L_9 = V_0;
		Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148((Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 *)L_7, (String_t*)L_8, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 *)L_9, /*hidden argument*/Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
	}

IL_0031:
	{
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_10 = V_1;
		return (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_10;
	}
}
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsBaseConverter::SerializeMember<System.Single>(System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>,System.Type,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsBaseConverter_SerializeMember_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF09606D521FBBE79F5E92ED2E588F764E94FF94_gshared (fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233 * __this, Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * ___data0, Type_t * ___overrideConverterType1, String_t* ___name2, float ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * V_0 = NULL;
	fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * L_0 = (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)__this->get_Serializer_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		Type_t * L_3 = ___overrideConverterType1;
		float L_4 = ___value3;
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_5);
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_7;
		L_7 = fsSerializer_TrySerialize_mAE3BE4991D6BECB13683E3ADBFFFD1B2D96A44CA((fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)L_0, (Type_t *)L_2, (Type_t *)L_3, (RuntimeObject *)L_6, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(&V_0), /*hidden argument*/NULL);
		V_1 = (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline((fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(&V_1), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * L_9 = ___data0;
		String_t* L_10 = ___name2;
		fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * L_11 = V_0;
		Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148((Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 *)L_9, (String_t*)L_10, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 *)L_11, /*hidden argument*/Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
	}

IL_0031:
	{
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_12 = V_1;
		return (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_12;
	}
}
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsBaseConverter::SerializeMember<UnityEngine.Vector2>(System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>,System.Type,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsBaseConverter_SerializeMember_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m3A89A2150D179107F11F7E676EC5E4950274E84B_gshared (fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233 * __this, Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * ___data0, Type_t * ___overrideConverterType1, String_t* ___name2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * V_0 = NULL;
	fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * L_0 = (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)__this->get_Serializer_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		Type_t * L_3 = ___overrideConverterType1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___value3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_5);
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_7;
		L_7 = fsSerializer_TrySerialize_mAE3BE4991D6BECB13683E3ADBFFFD1B2D96A44CA((fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)L_0, (Type_t *)L_2, (Type_t *)L_3, (RuntimeObject *)L_6, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(&V_0), /*hidden argument*/NULL);
		V_1 = (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline((fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(&V_1), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * L_9 = ___data0;
		String_t* L_10 = ___name2;
		fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * L_11 = V_0;
		Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148((Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 *)L_9, (String_t*)L_10, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 *)L_11, /*hidden argument*/Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
	}

IL_0031:
	{
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_12 = V_1;
		return (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_12;
	}
}
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsBaseConverter::SerializeMember<UnityEngine.Vector3>(System.Collections.Generic.Dictionary`2<System.String,Ludiq.FullSerializer.fsData>,System.Type,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsBaseConverter_SerializeMember_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mB7A87484903CCED0D0F3A573365C0DC56147880B_gshared (fsBaseConverter_t97C642752EE8536363B91CE447905468590F8233 * __this, Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * ___data0, Type_t * ___overrideConverterType1, String_t* ___name2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * V_0 = NULL;
	fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * L_0 = (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)__this->get_Serializer_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		Type_t * L_3 = ___overrideConverterType1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_5);
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_7;
		L_7 = fsSerializer_TrySerialize_mAE3BE4991D6BECB13683E3ADBFFFD1B2D96A44CA((fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)L_0, (Type_t *)L_2, (Type_t *)L_3, (RuntimeObject *)L_6, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(&V_0), /*hidden argument*/NULL);
		V_1 = (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_7;
		bool L_8;
		L_8 = fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline((fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(&V_1), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 * L_9 = ___data0;
		String_t* L_10 = ___name2;
		fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * L_11 = V_0;
		Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148((Dictionary_2_tBD8410B0ED3208A466FF6953B376BFA4273A2A17 *)L_9, (String_t*)L_10, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 *)L_11, /*hidden argument*/Dictionary_2_set_Item_m25977983BDFDB8CAB55F2BED56AE3FEA3AADA148_RuntimeMethod_var);
	}

IL_0031:
	{
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_12 = V_1;
		return (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_12;
	}
}
// T Ludiq.FullSerializer.fsContext::Get<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * fsContext_Get_TisRuntimeObject_m7EF6598A6904573DDDC408717DF2CE7CEA741EF6_gshared (fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Type_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_0 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)__this->get__contextObjects_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F((Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)L_0, (Type_t *)L_2, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0020:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		Type_t * L_7 = (Type_t *)L_6;
		G_B3_0 = L_7;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B4_0);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)G_B5_1, (String_t*)G_B5_0, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_10 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_10, (String_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsContext_Get_TisRuntimeObject_m7EF6598A6904573DDDC408717DF2CE7CEA741EF6_RuntimeMethod_var)));
	}
}
// System.Boolean Ludiq.FullSerializer.fsContext::Has<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsContext_Has_TisRuntimeObject_mEF0D81BA5E57CCAA2B6E7549FC9B41BD6A6E0580_gshared (fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_0 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)__this->get__contextObjects_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2((Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)L_0, (Type_t *)L_2, /*hidden argument*/Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var);
		return (bool)L_3;
	}
}
// System.Void Ludiq.FullSerializer.fsContext::Set<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Set_TisRuntimeObject_mC34294D5D6FD94FD72E1008E4EF64298CF44DE0E_gshared (fsContext_t9C3107421FF2F4366ABA425001946BB00A0FAB24 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_0 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)__this->get__contextObjects_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___obj0;
		Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4((Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)L_0, (Type_t *)L_2, (RuntimeObject *)L_3, /*hidden argument*/Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		return;
	}
}
// T Ludiq.FullSerializer.fsData::Cast<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsData_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16C6A5DE749370DBBDB6E2CA8EAEDB40E5FFEAEC_gshared (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	Type_t * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Type_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__value_0();
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__value_0();
		return (bool)((*(bool*)((bool*)UnBox(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))));
	}

IL_0019:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_3;
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_4;
		G_B3_3 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_4;
			G_B4_3 = L_4;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0036;
	}

IL_0031:
	{
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0036:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B5_3;
		ArrayElementTypeCheck (L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_6;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get__value_0();
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_8, /*hidden argument*/NULL);
		Type_t * L_10 = (Type_t *)L_9;
		G_B6_0 = L_10;
		G_B6_1 = 3;
		G_B6_2 = L_7;
		G_B6_3 = L_7;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_7;
			G_B7_3 = L_7;
			goto IL_0053;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0058;
	}

IL_0053:
	{
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B7_0);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0058:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		Type_t * L_16 = (Type_t *)L_15;
		G_B9_0 = L_16;
		G_B9_1 = 5;
		G_B9_2 = L_13;
		G_B9_3 = L_13;
		if (L_16)
		{
			G_B10_0 = L_16;
			G_B10_1 = 5;
			G_B10_2 = L_13;
			G_B10_3 = L_13;
			goto IL_0074;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0079;
	}

IL_0074:
	{
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B10_0);
		G_B11_0 = L_17;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0079:
	{
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B11_3, /*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_19 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m16C6A5DE749370DBBDB6E2CA8EAEDB40E5FFEAEC_RuntimeMethod_var)));
	}
}
// T Ludiq.FullSerializer.fsData::Cast<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double fsData_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mDD7CC8236216E9DD6EB924CB435F85AFC3299DB9_gshared (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	Type_t * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Type_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__value_0();
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__value_0();
		return (double)((*(double*)((double*)UnBox(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))));
	}

IL_0019:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_3;
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_4;
		G_B3_3 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_4;
			G_B4_3 = L_4;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0036;
	}

IL_0031:
	{
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0036:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B5_3;
		ArrayElementTypeCheck (L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_6;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get__value_0();
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_8, /*hidden argument*/NULL);
		Type_t * L_10 = (Type_t *)L_9;
		G_B6_0 = L_10;
		G_B6_1 = 3;
		G_B6_2 = L_7;
		G_B6_3 = L_7;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_7;
			G_B7_3 = L_7;
			goto IL_0053;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0058;
	}

IL_0053:
	{
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B7_0);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0058:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		Type_t * L_16 = (Type_t *)L_15;
		G_B9_0 = L_16;
		G_B9_1 = 5;
		G_B9_2 = L_13;
		G_B9_3 = L_13;
		if (L_16)
		{
			G_B10_0 = L_16;
			G_B10_1 = 5;
			G_B10_2 = L_13;
			G_B10_3 = L_13;
			goto IL_0074;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0079;
	}

IL_0074:
	{
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B10_0);
		G_B11_0 = L_17;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0079:
	{
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B11_3, /*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_19 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mDD7CC8236216E9DD6EB924CB435F85AFC3299DB9_RuntimeMethod_var)));
	}
}
// T Ludiq.FullSerializer.fsData::Cast<System.Int64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t fsData_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mD43E3F28CA73E76894ECDFD4575BF8E421875690_gshared (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	Type_t * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Type_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__value_0();
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__value_0();
		return (int64_t)((*(int64_t*)((int64_t*)UnBox(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))));
	}

IL_0019:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_3;
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_4;
		G_B3_3 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_4;
			G_B4_3 = L_4;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0036;
	}

IL_0031:
	{
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0036:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B5_3;
		ArrayElementTypeCheck (L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_6;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get__value_0();
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_8, /*hidden argument*/NULL);
		Type_t * L_10 = (Type_t *)L_9;
		G_B6_0 = L_10;
		G_B6_1 = 3;
		G_B6_2 = L_7;
		G_B6_3 = L_7;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_7;
			G_B7_3 = L_7;
			goto IL_0053;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0058;
	}

IL_0053:
	{
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B7_0);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0058:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		Type_t * L_16 = (Type_t *)L_15;
		G_B9_0 = L_16;
		G_B9_1 = 5;
		G_B9_2 = L_13;
		G_B9_3 = L_13;
		if (L_16)
		{
			G_B10_0 = L_16;
			G_B10_1 = 5;
			G_B10_2 = L_13;
			G_B10_3 = L_13;
			goto IL_0074;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0079;
	}

IL_0074:
	{
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B10_0);
		G_B11_0 = L_17;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0079:
	{
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B11_3, /*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_19 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mD43E3F28CA73E76894ECDFD4575BF8E421875690_RuntimeMethod_var)));
	}
}
// T Ludiq.FullSerializer.fsData::Cast<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * fsData_Cast_TisRuntimeObject_m1A7487B058382B093B263193188EE86BE16CE488_gshared (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		s_Il2CppMethodInitialized = true;
	}
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	Type_t * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Type_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__value_0();
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__value_0();
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_0019:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_3;
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_4;
		G_B3_3 = L_4;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_4;
			G_B4_3 = L_4;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0036;
	}

IL_0031:
	{
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0036:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B5_3;
		ArrayElementTypeCheck (L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_6;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get__value_0();
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_8, /*hidden argument*/NULL);
		Type_t * L_10 = (Type_t *)L_9;
		G_B6_0 = L_10;
		G_B6_1 = 3;
		G_B6_2 = L_7;
		G_B6_3 = L_7;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_7;
			G_B7_3 = L_7;
			goto IL_0053;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0058;
	}

IL_0053:
	{
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B7_0);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0058:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		Type_t * L_16 = (Type_t *)L_15;
		G_B9_0 = L_16;
		G_B9_1 = 5;
		G_B9_2 = L_13;
		G_B9_3 = L_13;
		if (L_16)
		{
			G_B10_0 = L_16;
			G_B10_1 = 5;
			G_B10_2 = L_13;
			G_B10_3 = L_13;
			goto IL_0074;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0079;
	}

IL_0074:
	{
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B10_0);
		G_B11_0 = L_17;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0079:
	{
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B11_3, /*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_19 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisRuntimeObject_m1A7487B058382B093B263193188EE86BE16CE488_RuntimeMethod_var)));
	}
}
// System.Boolean Ludiq.FullSerializer.fsEnumConverter::ArrayContains<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsEnumConverter_ArrayContains_TisRuntimeObject_mF95F8C22AC329A5685B05E461691C8B26E9EDDFE_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_001e;
	}

IL_0004:
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___values0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		RuntimeObject * L_5 = ___value1;
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		if (!L_6)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_8 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___values0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// Ludiq.FullSerializer.Internal.fsOption`1<T> Ludiq.FullSerializer.Internal.fsOption::Just<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6  fsOption_Just_TisRuntimeObject_mE9FB72584BCFE08410E0773E1234669507455A44_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6  L_1;
		memset((&L_1), 0, sizeof(L_1));
		fsOption_1__ctor_mE04C09B33E9DCA509802EEB6E8863B82B09A5643((&L_1), (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (fsOption_1_t577D24FD436DC0C4BA6E6115F612A5770ECE1FF6 )L_1;
	}
}
// Ludiq.FullSerializer.Internal.fsOption`1<T> Ludiq.FullSerializer.Internal.fsOption::Just<Ludiq.FullSerializer.Internal.fsVersionedType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB  fsOption_Just_TisfsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090_m67A790DA29E4A01FFB9B0489E089008DDB2067CD_gshared (fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  ___value0, const RuntimeMethod* method)
{
	{
		fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090  L_0 = ___value0;
		fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB  L_1;
		memset((&L_1), 0, sizeof(L_1));
		fsOption_1__ctor_mC048390D604789148950C3718F04DAC8CDD9A3FF((&L_1), (fsVersionedType_tA5B9C39108E747BDA3430FFB9F338920F7D6A090 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (fsOption_1_tA76B68E2D60BD31A1696206C68E3AA9D9D71C2CB )L_1;
	}
}
// TAttribute Ludiq.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * fsPortableReflection_GetAttribute_TisRuntimeObject_mD66139F3520EB3C005ED4F5637947F668424C7A0_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___element0;
		IL2CPP_RUNTIME_CLASS_INIT(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (MemberInfo_t *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((MemberInfo_t *)L_0, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// TAttribute Ludiq.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * fsPortableReflection_GetAttribute_TisRuntimeObject_mC6A45724EB26F48153339C56793C420C31253E66_gshared (MemberInfo_t * ___element0, bool ___shouldCache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___element0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		bool L_3 = ___shouldCache1;
		IL2CPP_RUNTIME_CLASS_INIT(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_4;
		L_4 = fsPortableReflection_GetAttribute_m7B649DEA970D740D1175EAF8F165CEC1F3EE9BAE((MemberInfo_t *)L_0, (Type_t *)L_2, (bool)L_3, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Boolean Ludiq.FullSerializer.Internal.fsPortableReflection::HasAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisRuntimeObject_m966FE8AF62A0DCBAD8787D8ADB32BF269B47266D_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___element0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = fsPortableReflection_HasAttribute_m44F9495EC601F66514439DBCC464E22C46BCD0E4((MemberInfo_t *)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return (bool)L_3;
	}
}
// System.Boolean Ludiq.FullSerializer.Internal.fsPortableReflection::HasAttribute<System.Object>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisRuntimeObject_m4433D26AB25EF6234B1656FBBCB8A0FE4F51F62C_gshared (MemberInfo_t * ___element0, bool ___shouldCache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___element0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		bool L_3 = ___shouldCache1;
		IL2CPP_RUNTIME_CLASS_INIT(fsPortableReflection_tE892064F7088B6016B106B7B0783DD8104562AC0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = fsPortableReflection_HasAttribute_m6B9AE3ED3961BEB2D320A9405F50923AA5C78DED((MemberInfo_t *)L_0, (Type_t *)L_2, (bool)L_3, /*hidden argument*/NULL);
		return (bool)L_4;
	}
}
// System.Void Ludiq.FullSerializer.fsSerializer::RemoveProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsSerializer_RemoveProcessor_TisRuntimeObject_m3FCD8ACC7AE3FA1F23D3005F4502AFAE0C1EC55B_gshared (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5680033C07F4FCC6EA1600D2F9CFB767D7DFD575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0583560FE66A0CCFD67DBB4F7D98354AC74126C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6989EE72727B4ABDD5E0AF9A64955C29947764AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF71BD3DE351497C5C11E0CC0838ACFD29350C276_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0029;
	}

IL_0004:
	{
		List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * L_0 = (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *)__this->get__processors_2();
		int32_t L_1 = V_0;
		fsObjectProcessor_t4D68F1E2683049984B9FE65A6AFE6AB5A071FB5A * L_2;
		L_2 = List_1_get_Item_mF71BD3DE351497C5C11E0CC0838ACFD29350C276_inline((List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *)L_0, (int32_t)L_1, /*hidden argument*/List_1_get_Item_mF71BD3DE351497C5C11E0CC0838ACFD29350C276_RuntimeMethod_var);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * L_3 = (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *)__this->get__processors_2();
		int32_t L_4 = V_0;
		List_1_RemoveAt_m0583560FE66A0CCFD67DBB4F7D98354AC74126C5((List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *)L_3, (int32_t)L_4, /*hidden argument*/List_1_RemoveAt_m0583560FE66A0CCFD67DBB4F7D98354AC74126C5_RuntimeMethod_var);
		goto IL_0029;
	}

IL_0025:
	{
		int32_t L_5 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_6 = V_0;
		List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E * L_7 = (List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *)__this->get__processors_2();
		int32_t L_8;
		L_8 = List_1_get_Count_m6989EE72727B4ABDD5E0AF9A64955C29947764AE_inline((List_1_t1DD65D210C8C0E9FD7B2B478DAF5F0BB83DC485E *)L_7, /*hidden argument*/List_1_get_Count_m6989EE72727B4ABDD5E0AF9A64955C29947764AE_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 * L_9 = (Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56 *)il2cpp_codegen_object_new(Dictionary_2_t9672CAEB065D5FAB15E4907C4458894588B15D56_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5680033C07F4FCC6EA1600D2F9CFB767D7DFD575(L_9, /*hidden argument*/Dictionary_2__ctor_m5680033C07F4FCC6EA1600D2F9CFB767D7DFD575_RuntimeMethod_var);
		__this->set__cachedProcessors_8(L_9);
		return;
	}
}
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsSerializer::TryDeserialize<System.Object>(Ludiq.FullSerializer.fsData,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsSerializer_TryDeserialize_TisRuntimeObject_mD85DAB121D023B1491C55E666BB50DC91760DC25_gshared (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * __this, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * ___data0, RuntimeObject ** ___instance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject ** L_0 = ___instance1;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		V_0 = (RuntimeObject *)L_1;
		fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 * L_2 = ___data0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_5;
		L_5 = fsSerializer_TryDeserialize_mA5B4441767156E46D52CD8D90386878EF015E3E4((fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)__this, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 *)L_2, (Type_t *)L_4, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		V_1 = (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_5;
		bool L_6;
		L_6 = fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline((fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B *)(&V_1), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject ** L_7 = ___instance1;
		RuntimeObject * L_8 = V_0;
		*(RuntimeObject **)L_7 = ((RuntimeObject *)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
	}

IL_0035:
	{
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_9 = V_1;
		return (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_9;
	}
}
// Ludiq.FullSerializer.fsResult Ludiq.FullSerializer.fsSerializer::TrySerialize<System.Object>(T,Ludiq.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  fsSerializer_TrySerialize_TisRuntimeObject_m978A0BE0FA958EC5EC5C630A3912CBE66207270D_gshared (fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC * __this, RuntimeObject * ___instance0, fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___instance0;
		fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 ** L_3 = ___data1;
		fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B  L_4;
		L_4 = fsSerializer_TrySerialize_m874721E6F2B31AE995405EDD8354D43A33631929((fsSerializer_tE2F4E795923129D223098DDC6D1B8DEA45D606FC *)__this, (Type_t *)L_1, (RuntimeObject *)L_2, (fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)(fsData_t0FAA5C76EAF7B92FB1A8D3134EBA770076B08641 **)L_3, /*hidden argument*/NULL);
		return (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B )L_4;
	}
}
// TAttribute Ludiq.AttributeUtility/AttributeCache::GetAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AttributeCache_GetAttribute_TisRuntimeObject_m4686B70C9E825009F4A53497906BAED6B95C5624_gshared (AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB * __this, bool ___inherit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___inherit0;
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_3;
		L_3 = AttributeCache_GetAttribute_mC6832DCE2D09BF39126B643F7215271BFB27FE74((AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Collections.Generic.IEnumerable`1<TAttribute> Ludiq.AttributeUtility/AttributeCache::GetAttributes<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_TisRuntimeObject_m66A8AA24292A5EE636EAAF73E13BC19FE7C0294A_gshared (AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB * __this, bool ___inherit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___inherit0;
		RuntimeObject* L_3;
		L_3 = AttributeCache_GetAttributes_m452CA225DAFBDA6E8D5F6FA47D593B33FAF1BB41((AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject*)L_4;
	}
}
// System.Boolean Ludiq.AttributeUtility/AttributeCache::HasAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_TisRuntimeObject_mDAAF47C2642DFBB5E503C682BC8A6B06B5308F85_gshared (AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB * __this, bool ___inherit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___inherit0;
		bool L_3;
		L_3 = AttributeCache_HasAttribute_m52906077D69F1946E767E1AAEDBCEBA96E489F40((AttributeCache_t215B5F42969748B74EB568F842B0FFFDFF91F4AB *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		return (bool)L_3;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * QuoteVisitor_VisitLambda_TisRuntimeObject_mF0A4AC2198AACA7CB1D4527BC7E79D3D9DAF8F72_gshared (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_0;
		L_0 = Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_inline(/*hidden argument*/Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_1 = ___node0;
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_1);
		V_1 = (int32_t)L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_5 = (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)il2cpp_codegen_object_new(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var);
		List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30(L_5, (int32_t)L_4, /*hidden argument*/List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var);
		V_2 = (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_5;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_6 = V_2;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_7 = ___node0;
		int32_t L_8 = V_3;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_9;
		L_9 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_7, (int32_t)L_8);
		List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708((List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_6, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_9, /*hidden argument*/List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this, (RuntimeObject*)L_14, /*hidden argument*/NULL);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = ((  Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * (*) (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this, (RuntimeObject*)L_17, /*hidden argument*/NULL);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_gshared (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_0 = ___node0;
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_2 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_2, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		V_1 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_2;
		V_2 = (int32_t)0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_3 = ___node0;
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		V_3 = (int32_t)L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_5 = V_1;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_6 = ___node0;
		int32_t L_7 = V_2;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8;
		L_8 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6, (int32_t)L_7);
		bool L_9;
		L_9 = HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_8, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_13 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_14 = V_1;
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13, (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_14, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_17;
		L_17 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16);
		V_0 = (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_17;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_20 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_21;
		L_21 = Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_22 = V_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_23 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_24;
		L_24 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_22) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_25 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_25;
	}

IL_0069:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_26 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_27 = V_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_28;
		L_28 = VirtFuncInvoker2< Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_27, (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)NULL);
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m68C0E245F3B891A8F46D87D7C8EF8B7AB553551D_inline (fsResult_t3E20358FB2391D3781287A37A919F68DCB36006B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__success_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get__body_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
