#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>
struct Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>
struct Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885;
// Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>
struct G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D;
// Tobii.G2OM.G2OM_ObjectDistinguisher`1<System.Object>
struct G2OM_ObjectDistinguisher_1_t09C85F5D51811EF579E8BBFED5B0227BFBEA4612;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>
struct IEnumerable_1_tE1ACEBE100B67ADFF2D7E054C7CE08F9092AE947;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>
struct IOrderedEnumerable_1_t88B0D2FB9DA2CD3B8AE34F269077EEB0A5B35F1F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject>
struct KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Tobii.G2OM.InternalCandidate>
struct KeyCollection_t595B092D769054832BA7246009C32A4254954B73;
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7;
// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>
struct List_1_tC918FC177054D8B7059326D036E2BCF54C760A74;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Tobii.G2OM.InternalCandidate>
struct ValueCollection_t256A0F4028AF68E2EA050456CA339F226784912A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject>[]
struct EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Tobii.G2OM.InternalCandidate>[]
struct EntryU5BU5D_t530707E55E5B30C24F7EB4E6C77CB9DD2A8503EB;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Tobii.G2OM.FocusedCandidate[]
struct FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B;
// Tobii.G2OM.G2OM_Candidate[]
struct G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387;
// Tobii.G2OM.G2OM_CandidateResult[]
struct G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41;
// Tobii.G2OM.G2OM_GazeRay[]
struct G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700;
// Tobii.G2OM.G2OM_Vector3[]
struct G2OM_Vector3U5BU5D_t4264784ECB6D5BC434090BEB3E8C4364F52729A7;
// Tobii.G2OM.IGazeFocusable[]
struct IGazeFocusableU5BU5D_t411BD38AF1D620C2FC3C763C03A9058395AD08E1;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// Tobii.G2OM.G2OM
struct G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1;
// Tobii.G2OM.G2OM_ColliderDataProvider
struct G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D;
// Tobii.G2OM.G2OM_Context
struct G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD;
// Tobii.G2OM.G2OM_Description
struct G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC;
// Tobii.G2OM.G2OM_ObjectFinder
struct G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9;
// Tobii.G2OM.G2OM_PostTicker
struct G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Tobii.G2OM.IG2OM_ColliderDataProvider
struct IG2OM_ColliderDataProvider_t9C7594DAA822CD5669C72D09EC25C989EF1BFD1E;
// Tobii.G2OM.IG2OM_Context
struct IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25;
// Tobii.G2OM.IG2OM_ObjectDistinguisher
struct IG2OM_ObjectDistinguisher_t10AFF01409034BD560F3DAE946ABCFB0A98E78BA;
// Tobii.G2OM.IG2OM_ObjectFinder
struct IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2;
// Tobii.G2OM.IG2OM_PostTicker
struct IG2OM_PostTicker_t9E9FFFEA170B1541B1D5EB0AFCFC8E36E119E7D0;
// Tobii.G2OM.IGazeFocusable
struct IGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Tobii.G2OM.G2OM/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_ColliderDataProvider_t9C7594DAA822CD5669C72D09EC25C989EF1BFD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_ObjectDistinguisher_t10AFF01409034BD560F3DAE946ABCFB0A98E78BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_PostTicker_t9E9FFFEA170B1541B1D5EB0AFCFC8E36E119E7D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC918FC177054D8B7059326D036E2BCF54C760A74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral416CD7784FACF85FBEDA83A8E1A615217DEE0BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A;
IL2CPP_EXTERN_C String_t* _stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB89372175E5CFDD9BFADE2FD7CC661A545D8F71;
IL2CPP_EXTERN_C String_t* _stringLiteralB77AEA6B66613896145DC025F0AD1733A45CF12E;
IL2CPP_EXTERN_C String_t* _stringLiteralBA47B4D74A80D7EF612B02030F48C705DEAF5E1E;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB23CCB98895143359167F61DE647BB288C8617;
IL2CPP_EXTERN_C String_t* _stringLiteralBB7B05EBF47D4A2FDC065778B7A7FBBA2170A9EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA;
IL2CPP_EXTERN_C String_t* _stringLiteralD0FFC6F0B394A5845018E5A614F136DB3D9632DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF077DE34F8D000C950F1CF5F29A4D148ABDAB85;
IL2CPP_EXTERN_C String_t* _stringLiteralE4E462BC9DC120BFC793A317769C9C55CD84D332;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B38E94C8437E25C92E3A501F5A942C9C0634825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* G2OM_ColliderDataProvider_GetColliderData_mA12311851F0963C0EEF7A70EB1873E7D8006D541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* G2OM_ObjectDistinguisher_1__ctor_m32FC6131643CFDF62D3AA780AF43C18576E2B642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisIGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_m348456E419BB40C60ACE980DB12CCE489140D00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m253A96D58361C013754F5F5213A4E8168909AA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1EFB40849934AB14FC5BB7BE5732265D13B95B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_mD968F93DC315B8E2F99158FE61E66016A306B940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m6EE198D283BE27F6EF2181F185912760154CDC1C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B;
struct G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387;
struct G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41;
struct G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700;
struct G2OM_Vector3U5BU5D_t4264784ECB6D5BC434090BEB3E8C4364F52729A7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t40C9EA77C6B182737C9DB147FD59EECBDA8046A8 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t530707E55E5B30C24F7EB4E6C77CB9DD2A8503EB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t595B092D769054832BA7246009C32A4254954B73* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t256A0F4028AF68E2EA050456CA339F226784912A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>
struct G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Tobii.G2OM.G2OM_ObjectDistinguisher`1::_components
	List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* ____components_1;
};

// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>
struct List_1_tC918FC177054D8B7059326D036E2BCF54C760A74  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IGazeFocusableU5BU5D_t411BD38AF1D620C2FC3C763C03A9058395AD08E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// Tobii.G2OM.G2OM_ColliderDataProvider
struct G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D  : public RuntimeObject
{
};

// Tobii.G2OM.G2OM_ExtensionMethods
struct G2OM_ExtensionMethods_t64116AD3702097FEC23ADC8DCB08C645AF94491A  : public RuntimeObject
{
};

// Tobii.G2OM.G2OM_PostTicker
struct G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288  : public RuntimeObject
{
	// UnityEngine.GameObject Tobii.G2OM.G2OM_PostTicker::_previousGazeFocusedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____previousGazeFocusedObject_1;
	// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable> Tobii.G2OM.G2OM_PostTicker::_gazeFocusableComponents
	List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* ____gazeFocusableComponents_2;
};

// Tobii.G2OM.G2OM_UnityExtensionMethods
struct G2OM_UnityExtensionMethods_tD4A189C9B2D4A20E1ED9306829C74FB5BA9E67AC  : public RuntimeObject
{
};

// Tobii.G2OM.Interop
struct Interop_t04F7DE7B26DC9C243D713E9DCA8F59700AD43F84  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Tobii.G2OM.G2OM/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Int32> Tobii.G2OM.G2OM/<>c__DisplayClass32_0::keysToRemove
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___keysToRemove_0;
	// System.Single Tobii.G2OM.G2OM/<>c__DisplayClass32_0::now
	float ___now_1;
};

// System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>
struct Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>
struct KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 
{
	// System.UInt32 Tobii.G2OM.G2OM_ContextCreateOptions::capacity
	uint32_t ___capacity_0;
	// System.UInt32 Tobii.G2OM.G2OM_ContextCreateOptions::thread_count
	uint32_t ___thread_count_1;
	// System.String Tobii.G2OM.G2OM_ContextCreateOptions::license_content
	String_t* ___license_content_2;
};
// Native definition for P/Invoke marshalling of Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_pinvoke
{
	uint32_t ___capacity_0;
	uint32_t ___thread_count_1;
	char* ___license_content_2;
};
// Native definition for COM marshalling of Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_com
{
	uint32_t ___capacity_0;
	uint32_t ___thread_count_1;
	Il2CppChar* ___license_content_2;
};

// Tobii.G2OM.G2OM_Matrix4x4
struct G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B 
{
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m00
	float ___m00_0;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m10
	float ___m10_1;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m20
	float ___m20_2;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m30
	float ___m30_3;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m01
	float ___m01_4;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m11
	float ___m11_5;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m21
	float ___m21_6;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m31
	float ___m31_7;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m02
	float ___m02_8;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m12
	float ___m12_9;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m22
	float ___m22_10;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m32
	float ___m32_11;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m03
	float ___m03_12;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m13
	float ___m13_13;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m23
	float ___m23_14;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m33
	float ___m33_15;
};

// Tobii.G2OM.G2OM_Raycast
struct G2OM_Raycast_t7CCE5D9E512912976ABD132E80795C64E6797586 
{
	// System.Byte Tobii.G2OM.G2OM_Raycast::is_raycast_id_valid
	uint8_t ___is_raycast_id_valid_0;
	// System.UInt64 Tobii.G2OM.G2OM_Raycast::candidate_id
	uint64_t ___candidate_id_1;
};

// Tobii.G2OM.G2OM_Vector3
struct G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC 
{
	// System.Single Tobii.G2OM.G2OM_Vector3::x
	float ___x_0;
	// System.Single Tobii.G2OM.G2OM_Vector3::y
	float ___y_1;
	// System.Single Tobii.G2OM.G2OM_Vector3::z
	float ___z_2;
};

// Tobii.G2OM.G2OM_Version
struct G2OM_Version_t48A7D2ED91D8424E8711E675E27F55F33E87AB26 
{
	// System.UInt32 Tobii.G2OM.G2OM_Version::major
	uint32_t ___major_0;
	// System.UInt32 Tobii.G2OM.G2OM_Version::minor
	uint32_t ___minor_1;
	// System.UInt32 Tobii.G2OM.G2OM_Version::buildVersion
	uint32_t ___buildVersion_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Tobii.G2OM.InternalCandidate
struct InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 
{
	// UnityEngine.GameObject Tobii.G2OM.InternalCandidate::GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_0;
	// System.Single Tobii.G2OM.InternalCandidate::Timestamp
	float ___Timestamp_1;
};
// Native definition for P/Invoke marshalling of Tobii.G2OM.InternalCandidate
struct InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_0;
	float ___Timestamp_1;
};
// Native definition for COM marshalling of Tobii.G2OM.InternalCandidate
struct InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_0;
	float ___Timestamp_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>
struct Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 ___value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Tobii.G2OM.FocusedCandidate
struct FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 
{
	// UnityEngine.GameObject Tobii.G2OM.FocusedCandidate::GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_0;
	// System.Boolean Tobii.G2OM.FocusedCandidate::IsRayValid
	bool ___IsRayValid_1;
	// UnityEngine.Vector3 Tobii.G2OM.FocusedCandidate::Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Origin_2;
	// UnityEngine.Vector3 Tobii.G2OM.FocusedCandidate::Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_3;
};
// Native definition for P/Invoke marshalling of Tobii.G2OM.FocusedCandidate
struct FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_0;
	int32_t ___IsRayValid_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Origin_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_3;
};
// Native definition for COM marshalling of Tobii.G2OM.FocusedCandidate
struct FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_0;
	int32_t ___IsRayValid_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Origin_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Direction_3;
};

// Tobii.G2OM.G2OM_Candidate
struct G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 
{
	// System.UInt64 Tobii.G2OM.G2OM_Candidate::candidate_id
	uint64_t ___candidate_id_0;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Candidate::aabb_max_local_space
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___aabb_max_local_space_1;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Candidate::aabb_min_local_space
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___aabb_min_local_space_2;
	// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_Candidate::world_to_local_matrix
	G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B ___world_to_local_matrix_3;
	// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_Candidate::local_to_world_matrix
	G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B ___local_to_world_matrix_4;
};

// Tobii.G2OM.G2OM_Context
struct G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD  : public RuntimeObject
{
	// System.IntPtr Tobii.G2OM.G2OM_Context::_context
	intptr_t ____context_0;
};

// Tobii.G2OM.G2OM_Description
struct G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC  : public RuntimeObject
{
	// System.Single Tobii.G2OM.G2OM_Description::HowLongToKeepCandidatesInSeconds
	float ___HowLongToKeepCandidatesInSeconds_2;
	// UnityEngine.LayerMask Tobii.G2OM.G2OM_Description::LayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___LayerMask_3;
	// Tobii.G2OM.IG2OM_ObjectFinder Tobii.G2OM.G2OM_Description::ObjectFinder
	RuntimeObject* ___ObjectFinder_4;
	// Tobii.G2OM.IG2OM_ColliderDataProvider Tobii.G2OM.G2OM_Description::ColliderDataProvider
	RuntimeObject* ___ColliderDataProvider_5;
	// Tobii.G2OM.IG2OM_ObjectDistinguisher Tobii.G2OM.G2OM_Description::Distinguisher
	RuntimeObject* ___Distinguisher_6;
	// Tobii.G2OM.IG2OM_PostTicker Tobii.G2OM.G2OM_Description::PostTicker
	RuntimeObject* ___PostTicker_7;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM_Description::Context
	RuntimeObject* ___Context_8;
	// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.G2OM_Description::Options
	G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 ___Options_9;
};

// Tobii.G2OM.G2OM_ObjectFinder
struct G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9  : public RuntimeObject
{
	// System.Boolean Tobii.G2OM.G2OM_ObjectFinder::ShouldDrawDebugRays
	bool ___ShouldDrawDebugRays_0;
	// Tobii.G2OM.G2OM_GazeRay[] Tobii.G2OM.G2OM_ObjectFinder::_rays
	G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ____rays_5;
	// UnityEngine.LayerMask Tobii.G2OM.G2OM_ObjectFinder::_layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____layerMask_6;
	// System.Single Tobii.G2OM.G2OM_ObjectFinder::_previousTimestamp
	float ____previousTimestamp_7;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM_ObjectFinder::_context
	RuntimeObject* ____context_8;
};

// Tobii.G2OM.G2OM_Ray
struct G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 
{
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Ray::origin
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___origin_0;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Ray::direction
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___direction_1;
};

// Tobii.G2OM.G2OM_RaycastResult
struct G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4 
{
	// Tobii.G2OM.G2OM_Raycast Tobii.G2OM.G2OM_RaycastResult::gaze_ray
	G2OM_Raycast_t7CCE5D9E512912976ABD132E80795C64E6797586 ___gaze_ray_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions
struct G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A 
{
	// System.UInt32 Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::capacity
	uint32_t ___capacity_0;
	// System.UInt32 Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::thread_count
	uint32_t ___thread_count_1;
	// System.IntPtr Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::license_ptr
	intptr_t ___license_ptr_2;
	// System.UInt32 Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::license_length
	uint32_t ___license_length_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>
struct Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Tobii.G2OM.G2OM_GazeRay
struct G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D 
{
	// Tobii.G2OM.G2OM_Ray Tobii.G2OM.G2OM_GazeRay::ray
	G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 ___ray_0;
	// System.Byte Tobii.G2OM.G2OM_GazeRay::is_valid
	uint8_t ___is_valid_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>
struct Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>
struct Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885  : public MulticastDelegate_t
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Tobii.G2OM.G2OM_CandidateResult
struct G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 
{
	// System.UInt64 Tobii.G2OM.G2OM_CandidateResult::candidate_id
	uint64_t ___candidate_id_0;
	// System.Single Tobii.G2OM.G2OM_CandidateResult::score
	float ___score_1;
	// Tobii.G2OM.G2OM_GazeRay Tobii.G2OM.G2OM_CandidateResult::adjusted_gaze_ray_world_space
	G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D ___adjusted_gaze_ray_world_space_2;
};

// Tobii.G2OM.G2OM_DeviceData
struct G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1 
{
	// System.Single Tobii.G2OM.G2OM_DeviceData::timestamp
	float ___timestamp_0;
	// Tobii.G2OM.G2OM_GazeRay Tobii.G2OM.G2OM_DeviceData::gaze_ray_world_space
	G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D ___gaze_ray_world_space_1;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_DeviceData::camera_up_direction_world_space
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___camera_up_direction_world_space_2;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_DeviceData::camera_right_direction_world_space
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___camera_right_direction_world_space_3;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// Tobii.G2OM.G2OM
struct G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1  : public RuntimeObject
{
	// Tobii.G2OM.IG2OM_ObjectFinder Tobii.G2OM.G2OM::_objectFinder
	RuntimeObject* ____objectFinder_0;
	// Tobii.G2OM.IG2OM_ColliderDataProvider Tobii.G2OM.G2OM::_colliderDataProvider
	RuntimeObject* ____colliderDataProvider_1;
	// Tobii.G2OM.IG2OM_ObjectDistinguisher Tobii.G2OM.G2OM::_distinguisher
	RuntimeObject* ____distinguisher_2;
	// Tobii.G2OM.IG2OM_PostTicker Tobii.G2OM.G2OM::_postTicker
	RuntimeObject* ____postTicker_3;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM::_context
	RuntimeObject* ____context_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate> Tobii.G2OM.G2OM::_internalCandidates
	Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ____internalCandidates_5;
	// System.Single Tobii.G2OM.G2OM::_howLongToKeepCandidatesInMemory
	float ____howLongToKeepCandidatesInMemory_6;
	// System.Int32 Tobii.G2OM.G2OM::_internalCapacity
	int32_t ____internalCapacity_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> Tobii.G2OM.G2OM::_newCandidates
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____newCandidates_8;
	// System.Collections.Generic.List`1<System.Int32> Tobii.G2OM.G2OM::_keysToRemove
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keysToRemove_9;
	// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.G2OM.G2OM::_gazeFocusedObjects
	List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* ____gazeFocusedObjects_10;
	// Tobii.G2OM.G2OM_DeviceData Tobii.G2OM.G2OM::_deviceData
	G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1 ____deviceData_11;
	// Tobii.G2OM.G2OM_Candidate[] Tobii.G2OM.G2OM::_nativeCandidates
	G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* ____nativeCandidates_12;
	// Tobii.G2OM.G2OM_CandidateResult[] Tobii.G2OM.G2OM::_nativeCandidatesResult
	G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* ____nativeCandidatesResult_13;
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>

// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>

// Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>

// Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>

// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>

// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>
struct List_1_tC918FC177054D8B7059326D036E2BCF54C760A74_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IGazeFocusableU5BU5D_t411BD38AF1D620C2FC3C763C03A9058395AD08E1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// Tobii.G2OM.G2OM_ColliderDataProvider

// Tobii.G2OM.G2OM_ColliderDataProvider

// Tobii.G2OM.G2OM_ExtensionMethods

// Tobii.G2OM.G2OM_ExtensionMethods

// Tobii.G2OM.G2OM_PostTicker

// Tobii.G2OM.G2OM_PostTicker

// Tobii.G2OM.G2OM_UnityExtensionMethods

// Tobii.G2OM.G2OM_UnityExtensionMethods

// Tobii.G2OM.Interop

// Tobii.G2OM.Interop

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Tobii.G2OM.G2OM/<>c__DisplayClass32_0

// Tobii.G2OM.G2OM/<>c__DisplayClass32_0

// System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>

// System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// Tobii.G2OM.G2OM_ContextCreateOptions

// Tobii.G2OM.G2OM_ContextCreateOptions

// Tobii.G2OM.G2OM_Matrix4x4

// Tobii.G2OM.G2OM_Matrix4x4

// Tobii.G2OM.G2OM_Raycast

// Tobii.G2OM.G2OM_Raycast

// Tobii.G2OM.G2OM_Vector3

// Tobii.G2OM.G2OM_Vector3

// Tobii.G2OM.G2OM_Version

// Tobii.G2OM.G2OM_Version

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Tobii.G2OM.InternalCandidate

// Tobii.G2OM.InternalCandidate

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>

// System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Tobii.G2OM.FocusedCandidate

// Tobii.G2OM.FocusedCandidate

// Tobii.G2OM.G2OM_Candidate

// Tobii.G2OM.G2OM_Candidate

// Tobii.G2OM.G2OM_Context

// Tobii.G2OM.G2OM_Context

// Tobii.G2OM.G2OM_Description

// Tobii.G2OM.G2OM_Description

// Tobii.G2OM.G2OM_ObjectFinder

// Tobii.G2OM.G2OM_ObjectFinder

// Tobii.G2OM.G2OM_Ray

// Tobii.G2OM.G2OM_Ray

// Tobii.G2OM.G2OM_RaycastResult

// Tobii.G2OM.G2OM_RaycastResult

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions

// Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>

// UnityEngine.Component

// UnityEngine.Component

// Tobii.G2OM.G2OM_GazeRay

// Tobii.G2OM.G2OM_GazeRay

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>

// UnityEngine.Collider

// UnityEngine.Collider

// Tobii.G2OM.G2OM_CandidateResult

// Tobii.G2OM.G2OM_CandidateResult

// Tobii.G2OM.G2OM_DeviceData

// Tobii.G2OM.G2OM_DeviceData

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// Tobii.G2OM.G2OM

// Tobii.G2OM.G2OM

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.G2OM_Candidate[]
struct G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387  : public RuntimeArray
{
	ALIGN_FIELD (8) G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 m_Items[1];

	inline G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.G2OM_CandidateResult[]
struct G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41  : public RuntimeArray
{
	ALIGN_FIELD (8) G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 m_Items[1];

	inline G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.G2OM_Vector3[]
struct G2OM_Vector3U5BU5D_t4264784ECB6D5BC434090BEB3E8C4364F52729A7  : public RuntimeArray
{
	ALIGN_FIELD (8) G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC m_Items[1];

	inline G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.G2OM_GazeRay[]
struct G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700  : public RuntimeArray
{
	ALIGN_FIELD (8) G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D m_Items[1];

	inline G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.FocusedCandidate[]
struct FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B  : public RuntimeArray
{
	ALIGN_FIELD (8) FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 m_Items[1];

	inline FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___GameObject_0), (void*)NULL);
	}
	inline FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___GameObject_0), (void*)NULL);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Tobii.G2OM.G2OM_ObjectDistinguisher`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectDistinguisher_1__ctor_mB3D92E6039AFFBB3D3D103FD12A25E7308CBFBF2_gshared (G2OM_ObjectDistinguisher_1_t09C85F5D51811EF579E8BBFED5B0227BFBEA4612* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_gshared_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B_gshared (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_gshared (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_gshared_inline (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_gshared_inline (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_gshared_inline (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_gshared (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m62133AEDF1D67023776EABE2CA972D71391A0ED2_gshared (Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7_gshared (RuntimeObject* ___0_source, Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m05813BD6389039B4C6B502AC8B0E4D65E79E06BD_gshared (Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7_gshared (RuntimeObject* ___0_source, Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885* ___1_keySelector, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129_gshared (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383_gshared (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_gshared_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_gshared_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18_gshared (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_results, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;

// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_InitializeOptions(Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_InitializeOptions_mD4486BC548349ACB703D95991CDE7BF88CA007EF (G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* ___0_options, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_mC7F740390CD5B60AD4D9228FFFAA759105CE79A5 (intptr_t* ___0_context, G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* ___1_options, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m1599BF08E46980615294A6E6A259048B9A3B8E65 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM_ObjectFinder::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder__ctor_m2F924C7D168C8744C01D595B1046892414624952 (G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9* __this, float ___0_now, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM_ColliderDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ColliderDataProvider__ctor_m316C607A7FA6A9569AAD06E73D0C29351E965E83 (G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D* __this, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>::.ctor()
inline void G2OM_ObjectDistinguisher_1__ctor_m32FC6131643CFDF62D3AA780AF43C18576E2B642 (G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D* __this, const RuntimeMethod* method)
{
	((  void (*) (G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D*, const RuntimeMethod*))G2OM_ObjectDistinguisher_1__ctor_mB3D92E6039AFFBB3D3D103FD12A25E7308CBFBF2_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM_PostTicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker__ctor_mAFEFC39D7269995238298C8D40C640A1C34C5B2B (G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288* __this, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM_Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Context__ctor_mC4EA2521BD164B451D589873885A2C39D1C8BD6C (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.Interop::G2OM_InitializeOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 Interop_G2OM_InitializeOptions_m635E78F2EA5060651A04DB4DBB0BE55A981DD26B (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM::.ctor(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM__ctor_m22CA418C8B226B50A57F25C55F6CDA4BDD387D3E (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* ___0_description, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM_Description::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Description__ctor_m32DB172B51E38A6900FD55B7052123FFB2DF0512 (G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Count()
inline int32_t Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, const RuntimeMethod*))Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Count()
inline int32_t List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*, const RuntimeMethod*))List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m3B38E94C8437E25C92E3A501F5A942C9C0634825 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::.ctor(System.Int32)
inline void List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*, int32_t, const RuntimeMethod*))List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Clear()
inline void Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16 (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, const RuntimeMethod*))Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM::AddNewCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_AddNewCandidates_m590BC21E79FAFE331FDC2ADED1B1A622E1D4A1E7 (float ___0_now, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___1_allCandidates, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___2_newCandidates, const RuntimeMethod* method) ;
// System.Single Tobii.G2OM.G2OM::get_MaxHistoryInSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float G2OM_get_MaxHistoryInSeconds_mC129385AEE33748D15B02C8D60898D8A5D94BC76_inline (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM::RemoveOldCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single,System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_RemoveOldCandidates_m821BEE6917FB7A88E1739727B98AF19002DA35EF (float ___0_now, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___1_allCandidates, float ___2_maxHistory, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___3_keysToRemove, int32_t ___4_maxKeysToKeep, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM::UpdateListOfFocusedCandidates(Tobii.G2OM.G2OM_CandidateResult[],System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_UpdateListOfFocusedCandidates_m3D32B6ED835920F38DE091E86764082D2D6ED5F6 (G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* ___0_candidateResult, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___1_allCandidates, List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* ___2_gazeFocusedObjects, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8 (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::get_Current()
inline KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_inline (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 (*) (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_inline (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Value()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_inline (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Item(TKey)
inline InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806 (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, int32_t, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3, const RuntimeMethod*))Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8 (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m4E7E39B5874DDF544FED2456011B5CE28C6E2EFB (U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::GetEnumerator()
inline Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::Dispose()
inline void Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6 (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9*, const RuntimeMethod*))Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::get_Current()
inline KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_inline (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 (*) (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9*, const RuntimeMethod*))Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Value()
inline InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_inline (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5* __this, const RuntimeMethod* method)
{
	return ((  InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 (*) (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_inline (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5*, const RuntimeMethod*))KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::MoveNext()
inline bool Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9*, const RuntimeMethod*))Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m62133AEDF1D67023776EABE2CA972D71391A0ED2 (Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m62133AEDF1D67023776EABE2CA972D71391A0ED2_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7 (RuntimeObject* ___0_source, Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m05813BD6389039B4C6B502AC8B0E4D65E79E06BD (Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m05813BD6389039B4C6B502AC8B0E4D65E79E06BD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7 (RuntimeObject* ___0_source, Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885*, const RuntimeMethod*))Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7_gshared)(___0_source, ___1_keySelector, method);
}
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129 (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129_gshared)(___0_source, ___1_index, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Remove(TKey)
inline bool Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383 (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Clear()
inline void List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*, const RuntimeMethod*))List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Tobii.G2OM.G2OM_ExtensionMethods::ToBool(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ExtensionMethods_ToBool_m44DCAAA34CCB249A942D3398CE3E6F0A1948EECB (uint8_t ___0_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::Vector(Tobii.G2OM.G2OM_Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416 (G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___0_vector, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Add(T)
inline void List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444, const RuntimeMethod*))List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___0_item, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CapsuleCollider::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCollider_get_direction_mE6D56B0990E3F2FACA983679C251949FE3FC6DFA (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.G2OM_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_m810A2D06EA2C08AA718387696751236F8749AE61 (intptr_t* ___0_context, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_Process(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.UInt32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_Process_mF889732164E0B90354A6628C1A15CD1A7C3D5EAA (intptr_t ___0_context, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___1_deviceData, G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4* ___2_raycastResult, uint32_t ___3_candidatesCount, G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* ___4_candidates, G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* ___5_candidateResults, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextDestroy(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextDestroy_m84CAE08B3EE5DB2E7A9AEBF6F98DF2C23EBD76A8 (intptr_t* ___0_context, const RuntimeMethod* method) ;
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_GetCandidateSearchPattern(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,System.UInt32,Tobii.G2OM.G2OM_GazeRay[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_GetCandidateSearchPattern_m706EF6356A565B4304DEB2C3DD99A445FE8C05D6 (intptr_t ___0_context, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___1_deviceData, uint32_t ___2_numberOfRays, G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ___3_mutatedRays, const RuntimeMethod* method) ;
// System.Int32 Tobii.G2OM.G2OM_ObjectFinder::GetNumberOfRays(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_ObjectFinder_GetNumberOfRays_m21C79AB9B552DD6610D345369A4995B73100ABEA (float ___0_dt, const RuntimeMethod* method) ;
// System.Void Tobii.G2OM.G2OM_ObjectFinder::FindObjects(Tobii.G2OM.G2OM_GazeRay[],System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher,UnityEngine.LayerMask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_FindObjects_m9B58CF5CA4861FCEB2728E7CC259CA0EFDD8D0FB (G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ___0_rays, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___1_foundObjects, RuntimeObject* ___2_distinguisher, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___3_layerMask, int32_t ___4_numberOfRaysThisFrame, const RuntimeMethod* method) ;
// System.Boolean Tobii.G2OM.G2OM_ObjectFinder::FindGameObject(Tobii.G2OM.G2OM_Ray&,UnityEngine.LayerMask,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ObjectFinder_FindGameObject_m09D5C59EEE738F74704D7AF008DC50AB4113A692 (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* ___0_ray, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_layerMask, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___2_gameObject, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Byte Tobii.G2OM.G2OM_ExtensionMethods::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t G2OM_ExtensionMethods_ToByte_m84B897A12FB3A8F40C0E958BBBEA6AE2D30485E5 (bool ___0_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Clear()
inline void Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Item(System.Int32)
inline FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18 (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 (*) (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*, int32_t, const RuntimeMethod*))List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18_gshared)(__this, ___0_index, method);
}
// System.Void Tobii.G2OM.G2OM_PostTicker::UpdateFocusableComponents(UnityEngine.GameObject,UnityEngine.GameObject&,System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker_UpdateFocusableComponents_mB0B04D481AF576110B3C3CE1DE0178BA5BBDEE64 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_focusedObject, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___1_previousFocusedObject, List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* ___2_gazeFocusableComponents, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>::GetEnumerator()
inline Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5 List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5 (*) (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>::Dispose()
inline void Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4 (Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_inline (Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>::MoveNext()
inline bool Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382 (Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>::Clear()
inline void List_1_Clear_m253A96D58361C013754F5F5213A4E8168909AA3E_inline (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponents<Tobii.G2OM.IGazeFocusable>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisIGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_m348456E419BB40C60ACE980DB12CCE489140D00C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tC918FC177054D8B7059326D036E2BCF54C760A74*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___0_results, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>::.ctor(System.Int32)
inline void List_1__ctor_m1EFB40849934AB14FC5BB7BE5732265D13B95B96 (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_options_init(G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_create(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_create_ex(intptr_t*, G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_process(intptr_t, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4*, uint32_t, G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55*, G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_destroy(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_get_version(G2OM_Version_t48A7D2ED91D8424E8711E675E27F55F33E87AB26*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_get_worldspace_corner_of_candidate(G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55*, uint32_t, G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_get_candidate_search_pattern(intptr_t, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, uint32_t, G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_InitializeOptions(Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_InitializeOptions_mD4486BC548349ACB703D95991CDE7BF88CA007EF (G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* ___0_options, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_options_init", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_options_init)(___0_options);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_options);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.Interop::G2OM_InitializeOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 Interop_G2OM_InitializeOptions_m635E78F2EA5060651A04DB4DBB0BE55A981DD26B (const RuntimeMethod* method) 
{
	G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A V_0;
	memset((&V_0), 0, sizeof(V_0));
	G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var internalOptions = new G2OM_Internal_ContextCreateOptions();
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A));
		// var options = new G2OM_ContextCreateOptions();
		il2cpp_codegen_initobj((&V_1), sizeof(G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5));
		// var result = G2OM_InitializeOptions(ref internalOptions);
		int32_t L_0;
		L_0 = Interop_G2OM_InitializeOptions_mD4486BC548349ACB703D95991CDE7BF88CA007EF((&V_0), NULL);
		// if(result == G2OM_Error.Ok) // What to do if this fails?
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		// options.capacity = internalOptions.capacity;
		G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A L_1 = V_0;
		uint32_t L_2 = L_1.___capacity_0;
		(&V_1)->___capacity_0 = L_2;
		// options.thread_count = internalOptions.thread_count;
		G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A L_3 = V_0;
		uint32_t L_4 = L_3.___thread_count_1;
		(&V_1)->___thread_count_1 = L_4;
	}

IL_0033:
	{
		// return options;
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 L_5 = V_1;
		return L_5;
	}
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreate(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreate_m66E8611809606A4FF7EC80A22DE6AD2A7573A58E (intptr_t* ___0_context, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_create)(___0_context);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_context);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_mC7F740390CD5B60AD4D9228FFFAA759105CE79A5 (intptr_t* ___0_context, G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* ___1_options, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*, G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_create_ex", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_create_ex)(___0_context, ___1_options);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_context, ___1_options);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.G2OM_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_m810A2D06EA2C08AA718387696751236F8749AE61 (intptr_t* ___0_context, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* G_B8_0 = NULL;
	G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* G_B7_0 = NULL;
	intptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A* G_B9_1 = NULL;
	{
		// var has_license = !string.IsNullOrEmpty(options.license_content);
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* L_0 = ___1_options;
		String_t* L_1 = L_0->___license_content_2;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// var internalOptions = new G2OM_Internal_ContextCreateOptions();
		il2cpp_codegen_initobj((&V_1), sizeof(G2OM_Internal_ContextCreateOptions_tFA59BA9250B812AF656DDC92FE94F9999F4AD77A));
		// var license = has_license ? options.license_content : "" ;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0027;
	}

IL_0021:
	{
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* L_4 = ___1_options;
		String_t* L_5 = L_4->___license_content_2;
		G_B3_0 = L_5;
	}

IL_0027:
	{
		V_2 = G_B3_0;
		// var bytes = has_license ? Encoding.UTF8.GetBytes(options.license_content) : new byte[0];
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B6_0 = L_7;
		goto IL_0043;
	}

IL_0033:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* L_9 = ___1_options;
		String_t* L_10 = L_9->___license_content_2;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, L_10);
		G_B6_0 = L_11;
	}

IL_0043:
	{
		V_3 = G_B6_0;
		// var ptr = Marshal.AllocHGlobal(license.Length);
		String_t* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_14;
		L_14 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_13, NULL);
		V_4 = L_14;
		// Marshal.Copy(bytes, 0, ptr, bytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
		intptr_t L_16 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_3;
		NullCheck(L_17);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_15, 0, L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		// internalOptions.capacity = options.capacity;
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* L_18 = ___1_options;
		uint32_t L_19 = L_18->___capacity_0;
		(&V_1)->___capacity_0 = L_19;
		// internalOptions.license_length = (uint) license.Length;
		String_t* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		(&V_1)->___license_length_3 = L_21;
		// internalOptions.thread_count = options.thread_count;
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* L_22 = ___1_options;
		uint32_t L_23 = L_22->___thread_count_1;
		(&V_1)->___thread_count_1 = L_23;
		// internalOptions.license_ptr = has_license ? ptr : IntPtr.Zero;
		bool L_24 = V_0;
		G_B7_0 = (&V_1);
		if (L_24)
		{
			G_B8_0 = (&V_1);
			goto IL_0090;
		}
	}
	{
		intptr_t L_25 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B9_0 = L_25;
		G_B9_1 = G_B7_0;
		goto IL_0092;
	}

IL_0090:
	{
		intptr_t L_26 = V_4;
		G_B9_0 = L_26;
		G_B9_1 = G_B8_0;
	}

IL_0092:
	{
		G_B9_1->___license_ptr_2 = G_B9_0;
		// var result = G2OM_ContextCreateEx(out context, ref internalOptions);
		intptr_t* L_27 = ___0_context;
		int32_t L_28;
		L_28 = Interop_G2OM_ContextCreateEx_mC7F740390CD5B60AD4D9228FFFAA759105CE79A5(L_27, (&V_1), NULL);
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_29 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_29, NULL);
		// return result;
		return L_28;
	}
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_Process(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.UInt32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_Process_mF889732164E0B90354A6628C1A15CD1A7C3D5EAA (intptr_t ___0_context, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___1_deviceData, G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4* ___2_raycastResult, uint32_t ___3_candidatesCount, G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* ___4_candidates, G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* ___5_candidateResults, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4*, uint32_t, G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55*, G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*) + sizeof(G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4*) + sizeof(uint32_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_process", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___4_candidates' to native representation
	G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55* ____4_candidates_marshaled = NULL;
	if (___4_candidates != NULL)
	{
		____4_candidates_marshaled = reinterpret_cast<G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55*>((___4_candidates)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___5_candidateResults' to native representation
	G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6* ____5_candidateResults_marshaled = NULL;
	if (___5_candidateResults != NULL)
	{
		____5_candidateResults_marshaled = reinterpret_cast<G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6*>((___5_candidateResults)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_process)(___0_context, ___1_deviceData, ___2_raycastResult, ___3_candidatesCount, ____4_candidates_marshaled, ____5_candidateResults_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_context, ___1_deviceData, ___2_raycastResult, ___3_candidatesCount, ____4_candidates_marshaled, ____5_candidateResults_marshaled);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextDestroy(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextDestroy_m84CAE08B3EE5DB2E7A9AEBF6F98DF2C23EBD76A8 (intptr_t* ___0_context, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_destroy)(___0_context);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_context);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_GetVersion(Tobii.G2OM.G2OM_Version&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_GetVersion_m3FFDA33B94E81BE250F050F382835AA0C733C4C8 (G2OM_Version_t48A7D2ED91D8424E8711E675E27F55F33E87AB26* ___0_version, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (G2OM_Version_t48A7D2ED91D8424E8711E675E27F55F33E87AB26*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(G2OM_Version_t48A7D2ED91D8424E8711E675E27F55F33E87AB26*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_get_version", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_get_version)(___0_version);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_version);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_GetWorldspaceCornerOfCandidate(Tobii.G2OM.G2OM_Candidate&,System.UInt32,Tobii.G2OM.G2OM_Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_GetWorldspaceCornerOfCandidate_mE5D0DC0A545981EAA70EA5E174E3F6ACDD7327DA (G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55* ___0_candidate, uint32_t ___1_numberOfCorners, G2OM_Vector3U5BU5D_t4264784ECB6D5BC434090BEB3E8C4364F52729A7* ___2_cornersOfCandidateInWorldSpace, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55*, uint32_t, G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55*) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_get_worldspace_corner_of_candidate", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_cornersOfCandidateInWorldSpace' to native representation
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC* ____2_cornersOfCandidateInWorldSpace_marshaled = NULL;
	if (___2_cornersOfCandidateInWorldSpace != NULL)
	{
		____2_cornersOfCandidateInWorldSpace_marshaled = reinterpret_cast<G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC*>((___2_cornersOfCandidateInWorldSpace)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_get_worldspace_corner_of_candidate)(___0_candidate, ___1_numberOfCorners, ____2_cornersOfCandidateInWorldSpace_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_candidate, ___1_numberOfCorners, ____2_cornersOfCandidateInWorldSpace_marshaled);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_GetCandidateSearchPattern(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,System.UInt32,Tobii.G2OM.G2OM_GazeRay[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_GetCandidateSearchPattern_m706EF6356A565B4304DEB2C3DD99A445FE8C05D6 (intptr_t ___0_context, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___1_deviceData, uint32_t ___2_numberOfRays, G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ___3_mutatedRays, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, uint32_t, G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_get_candidate_search_pattern", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___3_mutatedRays' to native representation
	G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D* ____3_mutatedRays_marshaled = NULL;
	if (___3_mutatedRays != NULL)
	{
		____3_mutatedRays_marshaled = reinterpret_cast<G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D*>((___3_mutatedRays)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_get_candidate_search_pattern)(___0_context, ___1_deviceData, ___2_numberOfRays, ____3_mutatedRays_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_context, ___1_deviceData, ___2_numberOfRays, ____3_mutatedRays_marshaled);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshal_pinvoke(const G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5& unmarshaled, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_pinvoke& marshaled)
{
	marshaled.___capacity_0 = unmarshaled.___capacity_0;
	marshaled.___thread_count_1 = unmarshaled.___thread_count_1;
	marshaled.___license_content_2 = il2cpp_codegen_marshal_string(unmarshaled.___license_content_2);
}
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshal_pinvoke_back(const G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_pinvoke& marshaled, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5& unmarshaled)
{
	uint32_t unmarshaledcapacity_temp_0 = 0;
	unmarshaledcapacity_temp_0 = marshaled.___capacity_0;
	unmarshaled.___capacity_0 = unmarshaledcapacity_temp_0;
	uint32_t unmarshaledthread_count_temp_1 = 0;
	unmarshaledthread_count_temp_1 = marshaled.___thread_count_1;
	unmarshaled.___thread_count_1 = unmarshaledthread_count_temp_1;
	unmarshaled.___license_content_2 = il2cpp_codegen_marshal_string_result(marshaled.___license_content_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___license_content_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___license_content_2));
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshal_pinvoke_cleanup(G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___license_content_2);
	marshaled.___license_content_2 = NULL;
}
// Conversion methods for marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshal_com(const G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5& unmarshaled, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_com& marshaled)
{
	marshaled.___capacity_0 = unmarshaled.___capacity_0;
	marshaled.___thread_count_1 = unmarshaled.___thread_count_1;
	marshaled.___license_content_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___license_content_2);
}
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshal_com_back(const G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_com& marshaled, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5& unmarshaled)
{
	uint32_t unmarshaledcapacity_temp_0 = 0;
	unmarshaledcapacity_temp_0 = marshaled.___capacity_0;
	unmarshaled.___capacity_0 = unmarshaledcapacity_temp_0;
	uint32_t unmarshaledthread_count_temp_1 = 0;
	unmarshaledthread_count_temp_1 = marshaled.___thread_count_1;
	unmarshaled.___thread_count_1 = unmarshaledthread_count_temp_1;
	unmarshaled.___license_content_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___license_content_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___license_content_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___license_content_2));
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshal_com_cleanup(G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___license_content_2);
	marshaled.___license_content_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte Tobii.G2OM.G2OM_ExtensionMethods::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t G2OM_ExtensionMethods_ToByte_m84B897A12FB3A8F40C0E958BBBEA6AE2D30485E5 (bool ___0_b, const RuntimeMethod* method) 
{
	{
		// return b ? (byte) 1 : (byte) 0;
		bool L_0 = ___0_b;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (uint8_t)0;
	}

IL_0005:
	{
		return (uint8_t)1;
	}
}
// System.Boolean Tobii.G2OM.G2OM_ExtensionMethods::ToBool(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ExtensionMethods_ToBool_m44DCAAA34CCB249A942D3398CE3E6F0A1948EECB (uint8_t ___0_b, const RuntimeMethod* method) 
{
	{
		// return b == 1;
		uint8_t L_0 = ___0_b;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.G2OM.G2OM_Candidate Tobii.G2OM.G2OM_UnityExtensionMethods::CreateCandidate(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 G2OM_UnityExtensionMethods_CreateCandidate_m1DF03FB4179AA2725C937C6F8EF149A5C8C94723 (int32_t ___0_candidateId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_max, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_min, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_worldToLocal, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_localToWorld, const RuntimeMethod* method) 
{
	G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Candidate
		// {
		//     candidate_id = (ulong) candidateId,
		//     aabb_max_local_space = max.AsG2OMVector3(),
		//     aabb_min_local_space = min.AsG2OMVector3(),
		//     world_to_local_matrix = worldToLocal.AsG2OMMatrix4x4(),
		//     local_to_world_matrix = localToWorld.AsG2OMMatrix4x4(),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55));
		int32_t L_0 = ___0_candidateId;
		(&V_0)->___candidate_id_0 = ((int64_t)L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_max;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_2;
		L_2 = G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF(L_1, NULL);
		(&V_0)->___aabb_max_local_space_1 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_min;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_4;
		L_4 = G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF(L_3, NULL);
		(&V_0)->___aabb_min_local_space_2 = L_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___3_worldToLocal;
		G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B L_6;
		L_6 = G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m1599BF08E46980615294A6E6A259048B9A3B8E65(L_5, NULL);
		(&V_0)->___world_to_local_matrix_3 = L_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ___4_localToWorld;
		G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B L_8;
		L_8 = G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m1599BF08E46980615294A6E6A259048B9A3B8E65(L_7, NULL);
		(&V_0)->___local_to_world_matrix_4 = L_8;
		G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 L_9 = V_0;
		return L_9;
	}
}
// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m1599BF08E46980615294A6E6A259048B9A3B8E65 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Matrix4x4
		// {
		//     m00 = matrix.m00,
		//     m01 = matrix.m01,
		//     m02 = matrix.m02,
		//     m03 = matrix.m03,
		//     m10 = matrix.m10,
		//     m11 = matrix.m11,
		//     m12 = matrix.m12,
		//     m13 = matrix.m13,
		//     m20 = matrix.m20,
		//     m21 = matrix.m21,
		//     m22 = matrix.m22,
		//     m23 = matrix.m23,
		//     m30 = matrix.m30,
		//     m31 = matrix.m31,
		//     m32 = matrix.m32,
		//     m33 = matrix.m33,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m00_0;
		(&V_0)->___m00_0 = L_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m01_4;
		(&V_0)->___m01_4 = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m02_8;
		(&V_0)->___m02_8 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_matrix;
		float L_7 = L_6.___m03_12;
		(&V_0)->___m03_12 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_matrix;
		float L_9 = L_8.___m10_1;
		(&V_0)->___m10_1 = L_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_matrix;
		float L_11 = L_10.___m11_5;
		(&V_0)->___m11_5 = L_11;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___0_matrix;
		float L_13 = L_12.___m12_9;
		(&V_0)->___m12_9 = L_13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___0_matrix;
		float L_15 = L_14.___m13_13;
		(&V_0)->___m13_13 = L_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___0_matrix;
		float L_17 = L_16.___m20_2;
		(&V_0)->___m20_2 = L_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = ___0_matrix;
		float L_19 = L_18.___m21_6;
		(&V_0)->___m21_6 = L_19;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = ___0_matrix;
		float L_21 = L_20.___m22_10;
		(&V_0)->___m22_10 = L_21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ___0_matrix;
		float L_23 = L_22.___m23_14;
		(&V_0)->___m23_14 = L_23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___0_matrix;
		float L_25 = L_24.___m30_3;
		(&V_0)->___m30_3 = L_25;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___0_matrix;
		float L_27 = L_26.___m31_7;
		(&V_0)->___m31_7 = L_27;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28 = ___0_matrix;
		float L_29 = L_28.___m32_11;
		(&V_0)->___m32_11 = L_29;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30 = ___0_matrix;
		float L_31 = L_30.___m33_15;
		(&V_0)->___m33_15 = L_31;
		G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B L_32 = V_0;
		return L_32;
	}
}
// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Vector3
		// {
		//     x = vector.x,
		//     y = vector.y,
		//     z = vector.z,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		(&V_0)->___x_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___y_3;
		(&V_0)->___y_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___z_4;
		(&V_0)->___z_2 = L_5;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::Vector(Tobii.G2OM.G2OM_Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416 (G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC ___0_vector, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3
		// {
		//     x = vector.x,
		//     y = vector.y,
		//     z = vector.z,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_0 = ___0_vector;
		float L_1 = L_0.___x_0;
		(&V_0)->___x_2 = L_1;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_2 = ___0_vector;
		float L_3 = L_2.___y_1;
		(&V_0)->___y_3 = L_3;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_4 = ___0_vector;
		float L_5 = L_4.___z_2;
		(&V_0)->___z_4 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// Tobii.G2OM.G2OM_Ray Tobii.G2OM.G2OM_UnityExtensionMethods::CreateRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 G2OM_UnityExtensionMethods_CreateRay_mB946464D54770F8D908594BF5F67F234FEB527FF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_rayOrigin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rayDirection, const RuntimeMethod* method) 
{
	G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Ray
		// {
		//     origin = rayOrigin.AsG2OMVector3(),
		//     direction = rayDirection.AsG2OMVector3(),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_rayOrigin;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_1;
		L_1 = G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF(L_0, NULL);
		(&V_0)->___origin_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rayDirection;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_3;
		L_3 = G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF(L_2, NULL);
		(&V_0)->___direction_1 = L_3;
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM_Description::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Description__ctor_m32DB172B51E38A6900FD55B7052123FFB2DF0512 (G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ObjectDistinguisher_1__ctor_m32FC6131643CFDF62D3AA780AF43C18576E2B642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float HowLongToKeepCandidatesInSeconds = DefaultCandidateMemoryInSeconds;
		__this->___HowLongToKeepCandidatesInSeconds_2 = (1.0f);
		// public LayerMask LayerMask = DefaultLayerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___LayerMask_3 = L_0;
		// public IG2OM_ObjectFinder ObjectFinder = new G2OM_ObjectFinder();
		G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9* L_1 = (G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9*)il2cpp_codegen_object_new(G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		G2OM_ObjectFinder__ctor_m2F924C7D168C8744C01D595B1046892414624952(L_1, (0.0f), NULL);
		__this->___ObjectFinder_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ObjectFinder_4), (void*)L_1);
		// public IG2OM_ColliderDataProvider ColliderDataProvider = new G2OM_ColliderDataProvider();
		G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D* L_2 = (G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D*)il2cpp_codegen_object_new(G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		G2OM_ColliderDataProvider__ctor_m316C607A7FA6A9569AAD06E73D0C29351E965E83(L_2, NULL);
		__this->___ColliderDataProvider_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ColliderDataProvider_5), (void*)L_2);
		// public IG2OM_ObjectDistinguisher Distinguisher = new G2OM_ObjectDistinguisher<IGazeFocusable>();
		G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D* L_3 = (G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D*)il2cpp_codegen_object_new(G2OM_ObjectDistinguisher_1_t595A478704F59A5787F5B731E5BE8524507AEC1D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		G2OM_ObjectDistinguisher_1__ctor_m32FC6131643CFDF62D3AA780AF43C18576E2B642(L_3, G2OM_ObjectDistinguisher_1__ctor_m32FC6131643CFDF62D3AA780AF43C18576E2B642_RuntimeMethod_var);
		__this->___Distinguisher_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Distinguisher_6), (void*)L_3);
		// public IG2OM_PostTicker PostTicker = new G2OM_PostTicker();
		G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288* L_4 = (G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288*)il2cpp_codegen_object_new(G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		G2OM_PostTicker__ctor_mAFEFC39D7269995238298C8D40C640A1C34C5B2B(L_4, NULL);
		__this->___PostTicker_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PostTicker_7), (void*)L_4);
		// public IG2OM_Context Context = new G2OM_Context();
		G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* L_5 = (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD*)il2cpp_codegen_object_new(G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		G2OM_Context__ctor_mC4EA2521BD164B451D589873885A2C39D1C8BD6C(L_5, NULL);
		__this->___Context_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Context_8), (void*)L_5);
		// public G2OM_ContextCreateOptions Options = Interop.G2OM_InitializeOptions();
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 L_6;
		L_6 = Interop_G2OM_InitializeOptions_m635E78F2EA5060651A04DB4DBB0BE55A981DD26B(NULL);
		__this->___Options_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Options_9))->___license_content_2), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshal_pinvoke(const InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3& unmarshaled, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshal_pinvoke_back(const InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_pinvoke& marshaled, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshal_pinvoke_cleanup(InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshal_com(const InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3& unmarshaled, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_com& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshal_com_back(const InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_com& marshaled, InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshal_com_cleanup(InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshal_pinvoke(const FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444& unmarshaled, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_pinvoke& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshal_pinvoke_back(const FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_pinvoke& marshaled, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshal_pinvoke_cleanup(FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshal_com(const FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444& unmarshaled, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_com& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshal_com_back(const FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_com& marshaled, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshal_com_cleanup(FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tobii.G2OM.G2OM Tobii.G2OM.G2OM::Create(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* G2OM_Create_m292F25A8DF06F9A7AA78DE9EBDD11CF0A7F3CB67 (G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* ___0_description, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new G2OM(description);
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_0 = ___0_description;
		G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* L_1 = (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1*)il2cpp_codegen_object_new(G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		G2OM__ctor_m22CA418C8B226B50A57F25C55F6CDA4BDD387D3E(L_1, L_0, NULL);
		return L_1;
	}
}
// Tobii.G2OM.G2OM Tobii.G2OM.G2OM::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* G2OM_Create_m1FC791C45E971F8F4D68C99DB430C4B6164E422A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new G2OM(new G2OM_Description());
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_0 = (G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC*)il2cpp_codegen_object_new(G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		G2OM_Description__ctor_m32DB172B51E38A6900FD55B7052123FFB2DF0512(L_0, NULL);
		G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* L_1 = (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1*)il2cpp_codegen_object_new(G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		G2OM__ctor_m22CA418C8B226B50A57F25C55F6CDA4BDD387D3E(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Single Tobii.G2OM.G2OM::get_MaxHistoryInSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float G2OM_get_MaxHistoryInSeconds_mC129385AEE33748D15B02C8D60898D8A5D94BC76 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxHistoryInSeconds { get { return _howLongToKeepCandidatesInMemory; } }
		float L_0 = __this->____howLongToKeepCandidatesInMemory_6;
		return L_0;
	}
}
// System.Int32 Tobii.G2OM.G2OM::get_TotalNumberOfGazeObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_get_TotalNumberOfGazeObjects_mD956EE002A0271CFBD6071653D85AAF6E47A1AC0 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int TotalNumberOfGazeObjects { get { return _internalCandidates.Count; } }
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_0 = __this->____internalCandidates_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_0, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 Tobii.G2OM.G2OM::get_NumberOfGazeFocusedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_get_NumberOfGazeFocusedObjects_mC2BF0416846716AB5BC8765E33DF730DC7810295 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int NumberOfGazeFocusedObjects { get { return _gazeFocusedObjects.Count; } }
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_0 = __this->____gazeFocusedObjects_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_inline(L_0, List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.G2OM.G2OM::get_GazeFocusedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* G2OM_get_GazeFocusedObjects_m8C123996FD67AD1C41CE9E3F7F74353BB251EA92 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	{
		// public List<FocusedCandidate> GazeFocusedObjects { get { return _gazeFocusedObjects; } }
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_0 = __this->____gazeFocusedObjects_10;
		return L_0;
	}
}
// System.Void Tobii.G2OM.G2OM::.ctor(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM__ctor_m22CA418C8B226B50A57F25C55F6CDA4BDD387D3E (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* ___0_description, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B38E94C8437E25C92E3A501F5A942C9C0634825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private G2OM(G2OM_Description description)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _internalCapacity = (int)description.Options.capacity;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_0 = ___0_description;
		NullCheck(L_0);
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5* L_1 = (G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5*)(&L_0->___Options_9);
		uint32_t L_2 = L_1->___capacity_0;
		__this->____internalCapacity_7 = L_2;
		// _howLongToKeepCandidatesInMemory = description.HowLongToKeepCandidatesInSeconds;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_3 = ___0_description;
		NullCheck(L_3);
		float L_4 = L_3->___HowLongToKeepCandidatesInSeconds_2;
		__this->____howLongToKeepCandidatesInMemory_6 = L_4;
		// _context = description.Context;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_5 = ___0_description;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___Context_8;
		__this->____context_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____context_4), (void*)L_6);
		// _context.Setup(description.Options);
		RuntimeObject* L_7 = __this->____context_4;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_8 = ___0_description;
		NullCheck(L_8);
		G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 L_9 = L_8->___Options_9;
		NullCheck(L_7);
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 >::Invoke(0 /* System.Boolean Tobii.G2OM.IG2OM_Context::Setup(Tobii.G2OM.G2OM_ContextCreateOptions) */, IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var, L_7, L_9);
		// _objectFinder = description.ObjectFinder;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_11 = ___0_description;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___ObjectFinder_4;
		__this->____objectFinder_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectFinder_0), (void*)L_12);
		// _objectFinder.Setup(_context, description.LayerMask);
		RuntimeObject* L_13 = __this->____objectFinder_0;
		RuntimeObject* L_14 = __this->____context_4;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_15 = ___0_description;
		NullCheck(L_15);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = L_15->___LayerMask_3;
		NullCheck(L_13);
		InterfaceActionInvoker2< RuntimeObject*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(2 /* System.Void Tobii.G2OM.IG2OM_ObjectFinder::Setup(Tobii.G2OM.IG2OM_Context,UnityEngine.LayerMask) */, IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2_il2cpp_TypeInfo_var, L_13, L_14, L_16);
		// _colliderDataProvider = description.ColliderDataProvider;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_17 = ___0_description;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___ColliderDataProvider_5;
		__this->____colliderDataProvider_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____colliderDataProvider_1), (void*)L_18);
		// _distinguisher = description.Distinguisher;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_19 = ___0_description;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___Distinguisher_6;
		__this->____distinguisher_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distinguisher_2), (void*)L_20);
		// _postTicker = description.PostTicker;
		G2OM_Description_tA489D49E7DDB2EFF7E65220A6FF4C761BD3984FC* L_21 = ___0_description;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___PostTicker_7;
		__this->____postTicker_3 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postTicker_3), (void*)L_22);
		// _newCandidates = new Dictionary<int, GameObject>(_internalCapacity);
		int32_t L_23 = __this->____internalCapacity_7;
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_24 = (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*)il2cpp_codegen_object_new(Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Dictionary_2__ctor_m3B38E94C8437E25C92E3A501F5A942C9C0634825(L_24, L_23, Dictionary_2__ctor_m3B38E94C8437E25C92E3A501F5A942C9C0634825_RuntimeMethod_var);
		__this->____newCandidates_8 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____newCandidates_8), (void*)L_24);
		// _internalCandidates = new Dictionary<int, InternalCandidate>(_internalCapacity);
		int32_t L_25 = __this->____internalCapacity_7;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_26 = (Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*)il2cpp_codegen_object_new(Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D(L_26, L_25, Dictionary_2__ctor_m41FFC4624E73117DDCB9355CB033CF6D72E0780D_RuntimeMethod_var);
		__this->____internalCandidates_5 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____internalCandidates_5), (void*)L_26);
		// _gazeFocusedObjects = new List<FocusedCandidate>(_internalCapacity);
		int32_t L_27 = __this->____internalCapacity_7;
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_28 = (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*)il2cpp_codegen_object_new(List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B(L_28, L_27, List_1__ctor_m8C1ACB8A0F90420A374CD8168CD5A517A14FCF2B_RuntimeMethod_var);
		__this->____gazeFocusedObjects_10 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazeFocusedObjects_10), (void*)L_28);
		// _keysToRemove = new List<int>(_internalCapacity);
		int32_t L_29 = __this->____internalCapacity_7;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_30, L_29, List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		__this->____keysToRemove_9 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keysToRemove_9), (void*)L_30);
		// _nativeCandidates = new G2OM_Candidate[_internalCapacity];
		int32_t L_31 = __this->____internalCapacity_7;
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_32 = (G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*)(G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*)SZArrayNew(G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var, (uint32_t)L_31);
		__this->____nativeCandidates_12 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeCandidates_12), (void*)L_32);
		// _nativeCandidatesResult = new G2OM_CandidateResult[_internalCapacity];
		int32_t L_33 = __this->____internalCapacity_7;
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_34 = (G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41*)(G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41*)SZArrayNew(G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var, (uint32_t)L_33);
		__this->____nativeCandidatesResult_13 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeCandidatesResult_13), (void*)L_34);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Clear_m41CF88C37B398429B7E855B9E33847861A1DB002 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _internalCandidates.Clear();
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_0 = __this->____internalCandidates_5;
		NullCheck(L_0);
		Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16(L_0, Dictionary_2_Clear_m1B8F97AA6064E1B2785A850FEEA2A5D4B3AC7B16_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::Tick(Tobii.G2OM.G2OM_DeviceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Tick_m575A4BCEE66D532F631159035C8D29C46DC92BED (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1 ___0_deviceData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ColliderDataProvider_t9C7594DAA822CD5669C72D09EC25C989EF1BFD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_PostTicker_t9E9FFFEA170B1541B1D5EB0AFCFC8E36E119E7D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _deviceData = deviceData;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1 L_0 = ___0_deviceData;
		__this->____deviceData_11 = L_0;
		// var now = _deviceData.timestamp;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_1 = (G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*)(&__this->____deviceData_11);
		float L_2 = L_1->___timestamp_0;
		// _objectFinder.GetRelevantGazeObjects(ref _deviceData, _newCandidates, _distinguisher);
		RuntimeObject* L_3 = __this->____objectFinder_0;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_4 = (G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*)(&__this->____deviceData_11);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_5 = __this->____newCandidates_8;
		RuntimeObject* L_6 = __this->____distinguisher_2;
		NullCheck(L_3);
		InterfaceActionInvoker3< G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, RuntimeObject* >::Invoke(0 /* System.Void Tobii.G2OM.IG2OM_ObjectFinder::GetRelevantGazeObjects(Tobii.G2OM.G2OM_DeviceData&,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher) */, IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6);
		// AddNewCandidates(now, _internalCandidates, _newCandidates);
		float L_7 = L_2;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_8 = __this->____internalCandidates_5;
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_9 = __this->____newCandidates_8;
		G2OM_AddNewCandidates_m590BC21E79FAFE331FDC2ADED1B1A622E1D4A1E7(L_7, L_8, L_9, NULL);
		// RemoveOldCandidates(now, _internalCandidates, MaxHistoryInSeconds, _keysToRemove, _internalCapacity);
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_10 = __this->____internalCandidates_5;
		float L_11;
		L_11 = G2OM_get_MaxHistoryInSeconds_mC129385AEE33748D15B02C8D60898D8A5D94BC76_inline(__this, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = __this->____keysToRemove_9;
		int32_t L_13 = __this->____internalCapacity_7;
		G2OM_RemoveOldCandidates_m821BEE6917FB7A88E1739727B98AF19002DA35EF(L_7, L_10, L_11, L_12, L_13, NULL);
		// if (_internalCandidates.Count > _nativeCandidates.Length)
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_14 = __this->____internalCandidates_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_14, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_16 = __this->____nativeCandidates_12;
		NullCheck(L_16);
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_009f;
		}
	}
	{
		// _nativeCandidates = new G2OM_Candidate[_internalCandidates.Count];
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_17 = __this->____internalCandidates_5;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_17, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_19 = (G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*)(G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*)SZArrayNew(G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->____nativeCandidates_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeCandidates_12), (void*)L_19);
		// _nativeCandidatesResult = new G2OM_CandidateResult[_internalCandidates.Count];
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_20 = __this->____internalCandidates_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_20, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_22 = (G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41*)(G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41*)SZArrayNew(G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->____nativeCandidatesResult_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeCandidatesResult_13), (void*)L_22);
	}

IL_009f:
	{
		// _colliderDataProvider.GetColliderData(_internalCandidates, _nativeCandidates);
		RuntimeObject* L_23 = __this->____colliderDataProvider_1;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_24 = __this->____internalCandidates_5;
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_25 = __this->____nativeCandidates_12;
		NullCheck(L_23);
		InterfaceActionInvoker2< Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23*, G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* >::Invoke(0 /* System.Void Tobii.G2OM.IG2OM_ColliderDataProvider::GetColliderData(System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,Tobii.G2OM.G2OM_Candidate[]) */, IG2OM_ColliderDataProvider_t9C7594DAA822CD5669C72D09EC25C989EF1BFD1E_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		// var raycastResult = _objectFinder.GetRaycastResult(ref _deviceData, _distinguisher);
		RuntimeObject* L_26 = __this->____objectFinder_0;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_27 = (G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*)(&__this->____deviceData_11);
		RuntimeObject* L_28 = __this->____distinguisher_2;
		NullCheck(L_26);
		G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4 L_29;
		L_29 = InterfaceFuncInvoker2< G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, RuntimeObject* >::Invoke(1 /* Tobii.G2OM.G2OM_RaycastResult Tobii.G2OM.IG2OM_ObjectFinder::GetRaycastResult(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.IG2OM_ObjectDistinguisher) */, IG2OM_ObjectFinder_t5137FF245D8462AFD3F0FB86467C8BADED4705A2_il2cpp_TypeInfo_var, L_26, L_27, L_28);
		V_0 = L_29;
		// _context.Process(ref _deviceData, ref raycastResult, _internalCandidates.Count, _nativeCandidates, _nativeCandidatesResult); // TODO: What to do if this call fails??
		RuntimeObject* L_30 = __this->____context_4;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_31 = (G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*)(&__this->____deviceData_11);
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_32 = __this->____internalCandidates_5;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_32, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_34 = __this->____nativeCandidates_12;
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_35 = __this->____nativeCandidatesResult_13;
		NullCheck(L_30);
		bool L_36;
		L_36 = InterfaceFuncInvoker5< bool, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4*, int32_t, G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*, G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* >::Invoke(1 /* System.Boolean Tobii.G2OM.IG2OM_Context::Process(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.Int32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[]) */, IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var, L_30, L_31, (&V_0), L_33, L_34, L_35);
		// UpdateListOfFocusedCandidates(_nativeCandidatesResult, _internalCandidates, _gazeFocusedObjects);
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_37 = __this->____nativeCandidatesResult_13;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_38 = __this->____internalCandidates_5;
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_39 = __this->____gazeFocusedObjects_10;
		G2OM_UpdateListOfFocusedCandidates_m3D32B6ED835920F38DE091E86764082D2D6ED5F6(L_37, L_38, L_39, NULL);
		// _postTicker.TickComplete(_gazeFocusedObjects);
		RuntimeObject* L_40 = __this->____postTicker_3;
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_41 = __this->____gazeFocusedObjects_10;
		NullCheck(L_40);
		InterfaceActionInvoker1< List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* >::Invoke(0 /* System.Void Tobii.G2OM.IG2OM_PostTicker::TickComplete(System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>) */, IG2OM_PostTicker_t9E9FFFEA170B1541B1D5EB0AFCFC8E36E119E7D0_il2cpp_TypeInfo_var, L_40, L_41);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Destroy_m96FF6F615C2B728A734F886018884429529F7355 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _context.Destroy();
		RuntimeObject* L_0 = __this->____context_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Tobii.G2OM.IG2OM_Context::Destroy() */, IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// Tobii.G2OM.G2OM_Candidate[] Tobii.G2OM.G2OM::GetCandidates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* G2OM_GetCandidates_m2DCC442A4CFA8B52961FB5D8D918327D726F1CDC (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var array = new G2OM_Candidate[_internalCandidates.Count];
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_0 = __this->____internalCandidates_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_0, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_2 = (G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*)(G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387*)SZArrayNew(G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < array.Length; i++)
		V_1 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// array[i] = _nativeCandidates[i];
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_3 = V_0;
		int32_t L_4 = V_1;
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_5 = __this->____nativeCandidates_12;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55)L_8);
		// for (int i = 0; i < array.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_10 = V_1;
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// return array;
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_12 = V_0;
		return L_12;
	}
}
// Tobii.G2OM.G2OM_CandidateResult[] Tobii.G2OM.G2OM::GetCandidateResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* G2OM_GetCandidateResult_m1C38A1B6B6B9FC58F1FCC4DEEB44CF65FE512368 (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var array = new G2OM_CandidateResult[_internalCandidates.Count];
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_0 = __this->____internalCandidates_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_0, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_2 = (G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41*)(G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41*)SZArrayNew(G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < array.Length; i++)
		V_1 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// array[i] = _nativeCandidatesResult[i];
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_3 = V_0;
		int32_t L_4 = V_1;
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_5 = __this->____nativeCandidatesResult_13;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6)L_8);
		// for (int i = 0; i < array.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_10 = V_1;
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// return array;
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_12 = V_0;
		return L_12;
	}
}
// Tobii.G2OM.G2OM_DeviceData Tobii.G2OM.G2OM::GetDeviceData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1 G2OM_GetDeviceData_m44D080FE443AF7ED6CB0BCEB9F287CC1E828F94D (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	{
		// return _deviceData;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1 L_0 = __this->____deviceData_11;
		return L_0;
	}
}
// System.Void Tobii.G2OM.G2OM::AddNewCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_AddNewCandidates_m590BC21E79FAFE331FDC2ADED1B1A622E1D4A1E7 (float ___0_now, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___1_allCandidates, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___2_newCandidates, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// foreach (var newCandidate in newCandidates)
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = ___2_newCandidates;
		NullCheck(L_0);
		Enumerator_tB528BCD318DDD3422B24D81EF0BF177F56B2E4FB L_1;
		L_1 = Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7(L_0, Dictionary_2_GetEnumerator_m48AB1DC89BC633DFBA85999481CACE5CBDB6D4D7_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8((&V_0), Enumerator_Dispose_m9D681B3790175BA58928D0731C678FA8D3AC08E8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0009_1:
			{
				// foreach (var newCandidate in newCandidates)
				KeyValuePair_2_tE51B4AA1B587AD85A79363114EB7C474634D1AD8 L_2;
				L_2 = Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_inline((&V_0), Enumerator_get_Current_m0217E3869711E12C240F3BE879F1699162514F50_RuntimeMethod_var);
				V_1 = L_2;
				// var id = newCandidate.Key;
				int32_t L_3;
				L_3 = KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_inline((&V_1), KeyValuePair_2_get_Key_m9C6DABAD84B892AB2F79F0AFB1497258CF3CC79A_RuntimeMethod_var);
				V_2 = L_3;
				// var candidate = allCandidates.ContainsKey(id) ? allCandidates[id] : new InternalCandidate { GameObject = newCandidate.Value };
				Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_4 = ___1_allCandidates;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC(L_4, L_5, Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_003c_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_inline((&V_1), KeyValuePair_2_get_Value_mD4081DDFBF79080BB1E9CEDD9893305890320300_RuntimeMethod_var);
				(&V_4)->___GameObject_0 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___GameObject_0), (void*)L_7);
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_8 = V_4;
				G_B5_0 = L_8;
				goto IL_0043_1;
			}

IL_003c_1:
			{
				Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_9 = ___1_allCandidates;
				int32_t L_10 = V_2;
				NullCheck(L_9);
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_11;
				L_11 = Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F(L_9, L_10, Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_RuntimeMethod_var);
				G_B5_0 = L_11;
			}

IL_0043_1:
			{
				V_3 = G_B5_0;
				// candidate.Timestamp = now;
				float L_12 = ___0_now;
				(&V_3)->___Timestamp_1 = L_12;
				// allCandidates[id] = candidate;
				Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_13 = ___1_allCandidates;
				int32_t L_14 = V_2;
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_15 = V_3;
				NullCheck(L_13);
				Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806(L_13, L_14, L_15, Dictionary_2_set_Item_m5CBDCD90213ECAD62DD7D949C11950C828FC4806_RuntimeMethod_var);
			}

IL_0054_1:
			{
				// foreach (var newCandidate in newCandidates)
				bool L_16;
				L_16 = Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8((&V_0), Enumerator_MoveNext_m12F712A18AFF893F08B98E7DEC338D929F2745D8_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::RemoveOldCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single,System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_RemoveOldCandidates_m821BEE6917FB7A88E1739727B98AF19002DA35EF (float ___0_now, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___1_allCandidates, float ___2_maxHistory, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___3_keysToRemove, int32_t ___4_maxKeysToKeep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_mD968F93DC315B8E2F99158FE61E66016A306B940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m6EE198D283BE27F6EF2181F185912760154CDC1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	{
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_0 = (U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass32_0__ctor_m4E7E39B5874DDF544FED2456011B5CE28C6E2EFB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_1 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___3_keysToRemove;
		NullCheck(L_1);
		L_1->___keysToRemove_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___keysToRemove_0), (void*)L_2);
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_3 = V_0;
		float L_4 = ___0_now;
		NullCheck(L_3);
		L_3->___now_1 = L_4;
		// keysToRemove.Clear();
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_5 = V_0;
		NullCheck(L_5);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5->___keysToRemove_0;
		NullCheck(L_6);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_6, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// foreach (var candidate in allCandidates)
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_7 = ___1_allCandidates;
		NullCheck(L_7);
		Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 L_8;
		L_8 = Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB(L_7, Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_RuntimeMethod_var);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6((&V_2), Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_0028_1:
			{
				// foreach (var candidate in allCandidates)
				KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 L_9;
				L_9 = Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_inline((&V_2), Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_RuntimeMethod_var);
				V_3 = L_9;
				// var internalCandidate = candidate.Value;
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_10;
				L_10 = KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_inline((&V_3), KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var);
				V_4 = L_10;
				// var diff = now - internalCandidate.Timestamp;
				U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_11 = V_0;
				NullCheck(L_11);
				float L_12 = L_11->___now_1;
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_13 = V_4;
				float L_14 = L_13.___Timestamp_1;
				// if (diff <= maxHistory && internalCandidate.GameObject != null) continue;
				float L_15 = ___2_maxHistory;
				if ((!(((float)((float)il2cpp_codegen_subtract(L_12, L_14))) <= ((float)L_15))))
				{
					goto IL_0059_1;
				}
			}
			{
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_16 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16.___GameObject_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_18)
				{
					goto IL_006b_1;
				}
			}

IL_0059_1:
			{
				// keysToRemove.Add(candidate.Key);
				U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_19 = V_0;
				NullCheck(L_19);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = L_19->___keysToRemove_0;
				int32_t L_21;
				L_21 = KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_inline((&V_3), KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
				NullCheck(L_20);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_20, L_21, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
			}

IL_006b_1:
			{
				// foreach (var candidate in allCandidates)
				bool L_22;
				L_22 = Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A((&V_2), Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// var remainCount = allCandidates.Count - keysToRemove.Count;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_23 = ___1_allCandidates;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_23, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_25 = V_0;
		NullCheck(L_25);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = L_25->___keysToRemove_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_26, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_24, L_27));
		// if(remainCount > maxKeysToKeep)
		int32_t L_28 = V_1;
		int32_t L_29 = ___4_maxKeysToKeep;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_013c;
		}
	}
	{
		// var removeCount = remainCount - maxKeysToKeep;
		int32_t L_30 = V_1;
		int32_t L_31 = ___4_maxKeysToKeep;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_30, L_31));
		// var ordered = allCandidates.Where(k => keysToRemove.Contains(k.Key) == false).OrderByDescending(k => now - k.Value.Timestamp);
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_32 = ___1_allCandidates;
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_33 = V_0;
		Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5* L_34 = (Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5*)il2cpp_codegen_object_new(Func_2_t6C1DCB3AC16E05F04C60C3CF9537B8A39D6842F5_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Func_2__ctor_m62133AEDF1D67023776EABE2CA972D71391A0ED2(L_34, L_33, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_mD968F93DC315B8E2F99158FE61E66016A306B940_RuntimeMethod_var), NULL);
		RuntimeObject* L_35;
		L_35 = Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7(L_32, L_34, Enumerable_Where_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_m8A045176A9F95E975C23E6872E736F3615AD9FF7_RuntimeMethod_var);
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_36 = V_0;
		Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885* L_37 = (Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885*)il2cpp_codegen_object_new(Func_2_tFF7605CCD275FAC1B7D67A30321CBC3B007C3885_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Func_2__ctor_m05813BD6389039B4C6B502AC8B0E4D65E79E06BD(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m6EE198D283BE27F6EF2181F185912760154CDC1C_RuntimeMethod_var), NULL);
		RuntimeObject* L_38;
		L_38 = Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7(L_35, L_37, Enumerable_OrderByDescending_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m954FA3BB5581C36A362F80B422A7D01F5A34AAC7_RuntimeMethod_var);
		V_6 = L_38;
		// for(int i = 0; i < removeCount; i++)
		V_7 = 0;
		goto IL_00f2;
	}

IL_00cf:
	{
		// keysToRemove.Add(ordered.ElementAt(i).Key);
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_39 = V_0;
		NullCheck(L_39);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = L_39->___keysToRemove_0;
		RuntimeObject* L_41 = V_6;
		int32_t L_42 = V_7;
		KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 L_43;
		L_43 = Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129(L_41, L_42, Enumerable_ElementAt_TisKeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5_mBDB1BF5EDB96142627DCDF0A27CB8B3DE3A38129_RuntimeMethod_var);
		V_8 = L_43;
		int32_t L_44;
		L_44 = KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_inline((&V_8), KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
		NullCheck(L_40);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_40, L_44, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for(int i = 0; i < removeCount; i++)
		int32_t L_45 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f2:
	{
		// for(int i = 0; i < removeCount; i++)
		int32_t L_46 = V_7;
		int32_t L_47 = V_5;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00cf;
		}
	}
	{
		// Debug.LogWarning("G2OM was initialized with a capacity of " + maxKeysToKeep + ", but was supplied with " + allCandidates.Count + ". Purging overflowing elements.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___4_maxKeysToKeep), NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_54 = ___1_allCandidates;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_54, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		V_9 = L_55;
		String_t* L_56;
		L_56 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_9), NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_53;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A);
		String_t* L_58;
		L_58 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_57, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_58, NULL);
	}

IL_013c:
	{
		// foreach (var key in keysToRemove)
		U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* L_59 = V_0;
		NullCheck(L_59);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_60 = L_59->___keysToRemove_0;
		NullCheck(L_60);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_61;
		L_61 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_60, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_10 = L_61;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0168:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_10), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_015d_1;
			}

IL_014b_1:
			{
				// foreach (var key in keysToRemove)
				int32_t L_62;
				L_62 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_10), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_11 = L_62;
				// allCandidates.Remove(key);
				Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_63 = ___1_allCandidates;
				int32_t L_64 = V_11;
				NullCheck(L_63);
				bool L_65;
				L_65 = Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383(L_63, L_64, Dictionary_2_Remove_m4DD13BFC1E8019BF56EDD7BCD27A4071D64FE383_RuntimeMethod_var);
			}

IL_015d_1:
			{
				// foreach (var key in keysToRemove)
				bool L_66;
				L_66 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_10), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_66)
				{
					goto IL_014b_1;
				}
			}
			{
				goto IL_0176;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0176:
	{
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::UpdateListOfFocusedCandidates(Tobii.G2OM.G2OM_CandidateResult[],System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_UpdateListOfFocusedCandidates_m3D32B6ED835920F38DE091E86764082D2D6ED5F6 (G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* ___0_candidateResult, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___1_allCandidates, List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* ___2_gazeFocusedObjects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0FFC6F0B394A5845018E5A614F136DB3D9632DE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 V_3;
	memset((&V_3), 0, sizeof(V_3));
	FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// gazeFocusedObjects.Clear();
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_0 = ___2_gazeFocusedObjects;
		NullCheck(L_0);
		List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_inline(L_0, List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_RuntimeMethod_var);
		// for (int i = 0; i < allCandidates.Count; i++)
		V_0 = 0;
		goto IL_00ba;
	}

IL_000d:
	{
		// var candidate = candidateResult[i];
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_1 = ___0_candidateResult;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (candidate.score <= Mathf.Epsilon) break;
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_5 = V_1;
		float L_6 = L_5.___score_1;
		float L_7 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((((float)L_6) <= ((float)L_7)))
		{
			goto IL_00c6;
		}
	}
	{
		// var id = (int) candidate.candidate_id;
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_8 = V_1;
		uint64_t L_9 = L_8.___candidate_id_0;
		V_2 = ((int32_t)L_9);
		// if (allCandidates.ContainsKey(id) == false)
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_10 = ___1_allCandidates;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC(L_10, L_11, Dictionary_2_ContainsKey_m43CAAA86B14D3DFD3532B8932FE9E18E61009FFC_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError("This should not happen"); // TODO: What should we do if this happens? -- swik 2019-09-04
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD0FFC6F0B394A5845018E5A614F136DB3D9632DE, NULL);
		// continue;
		goto IL_00b6;
	}

IL_0042:
	{
		// var gazeFocusedObject = new FocusedCandidate
		// {
		//     GameObject = allCandidates[id].GameObject,
		//     IsRayValid = candidate.adjusted_gaze_ray_world_space.is_valid.ToBool(),
		//     Direction = candidate.adjusted_gaze_ray_world_space.ray.direction.Vector(),
		//     Origin = candidate.adjusted_gaze_ray_world_space.ray.origin.Vector(),
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444));
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_13 = ___1_allCandidates;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_15;
		L_15 = Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F(L_13, L_14, Dictionary_2_get_Item_m6D98793315C203D8AEF42FAC9D13BF6F7C564E4F_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15.___GameObject_0;
		(&V_4)->___GameObject_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___GameObject_0), (void*)L_16);
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_17 = V_1;
		G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D L_18 = L_17.___adjusted_gaze_ray_world_space_2;
		uint8_t L_19 = L_18.___is_valid_1;
		bool L_20;
		L_20 = G2OM_ExtensionMethods_ToBool_m44DCAAA34CCB249A942D3398CE3E6F0A1948EECB(L_19, NULL);
		(&V_4)->___IsRayValid_1 = L_20;
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_21 = V_1;
		G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D L_22 = L_21.___adjusted_gaze_ray_world_space_2;
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 L_23 = L_22.___ray_0;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_24 = L_23.___direction_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_24, NULL);
		(&V_4)->___Direction_3 = L_25;
		G2OM_CandidateResult_tE20516807F4B35D954748850A959622FA906EDD6 L_26 = V_1;
		G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D L_27 = L_26.___adjusted_gaze_ray_world_space_2;
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6 L_28 = L_27.___ray_0;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_29 = L_28.___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_29, NULL);
		(&V_4)->___Origin_2 = L_30;
		FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 L_31 = V_4;
		V_3 = L_31;
		// gazeFocusedObjects.Add(gazeFocusedObject);
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_32 = ___2_gazeFocusedObjects;
		FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 L_33 = V_3;
		NullCheck(L_32);
		List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_inline(L_32, L_33, List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_RuntimeMethod_var);
	}

IL_00b6:
	{
		// for (int i = 0; i < allCandidates.Count; i++)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		// for (int i = 0; i < allCandidates.Count; i++)
		int32_t L_35 = V_0;
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_36 = ___1_allCandidates;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB(L_36, Dictionary_2_get_Count_mE2DF354163CC114E60E153FC458A177DC80C25DB_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_000d;
		}
	}

IL_00c6:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m4E7E39B5874DDF544FED2456011B5CE28C6E2EFB (U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Tobii.G2OM.G2OM/<>c__DisplayClass32_0::<RemoveOldCandidates>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_mD968F93DC315B8E2F99158FE61E66016A306B940 (U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* __this, KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var ordered = allCandidates.Where(k => keysToRemove.Contains(k.Key) == false).OrderByDescending(k => now - k.Value.Timestamp);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___keysToRemove_0;
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_inline((&___0_k), KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_0, L_1, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Tobii.G2OM.G2OM/<>c__DisplayClass32_0::<RemoveOldCandidates>b__1(System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m6EE198D283BE27F6EF2181F185912760154CDC1C (U3CU3Ec__DisplayClass32_0_t71D7255A2F20CB13E873D136F29D2C77EC837FC7* __this, KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var ordered = allCandidates.Where(k => keysToRemove.Contains(k.Key) == false).OrderByDescending(k => now - k.Value.Timestamp);
		float L_0 = __this->___now_1;
		InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_1;
		L_1 = KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_inline((&___0_k), KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var);
		float L_2 = L_1.___Timestamp_1;
		return ((float)il2cpp_codegen_subtract(L_0, L_2));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM_ColliderDataProvider::GetColliderData(System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,Tobii.G2OM.G2OM_Candidate[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ColliderDataProvider_GetColliderData_mA12311851F0963C0EEF7A70EB1873E7D8006D541 (G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D* __this, Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* ___0_gameObjects, G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* ___1_candidates, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416CD7784FACF85FBEDA83A8E1A615217DEE0BDD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_5 = NULL;
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* V_6 = NULL;
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* V_7 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_10 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	float V_19 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_21;
	memset((&V_21), 0, sizeof(V_21));
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_22 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_23;
	memset((&V_23), 0, sizeof(V_23));
	G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 V_24;
	memset((&V_24), 0, sizeof(V_24));
	{
		// var i = 0;
		V_0 = 0;
		// foreach (var candidate in gameObjects)
		Dictionary_2_t37A33F2CE6C076C338DCADF311D5330232F27F23* L_0 = ___0_gameObjects;
		NullCheck(L_0);
		Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9 L_1;
		L_1 = Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB(L_0, Dictionary_2_GetEnumerator_mA30F4ECDEF3F57CAB9A0333E872BE3D6F07E0DCB_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_029a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6((&V_1), Enumerator_Dispose_m3BD24564A3ED0973AD91BD68037B4C055F353EF6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_028c_1;
			}

IL_000e_1:
			{
				// foreach (var candidate in gameObjects)
				KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 L_2;
				L_2 = Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_inline((&V_1), Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_RuntimeMethod_var);
				V_2 = L_2;
				// var id = candidate.Key;
				int32_t L_3;
				L_3 = KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_inline((&V_2), KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_RuntimeMethod_var);
				V_3 = L_3;
				// var go = candidate.Value.GameObject;
				InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_4;
				L_4 = KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_inline((&V_2), KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4.___GameObject_0;
				V_4 = L_5;
				// var collider = go.GetComponent<Collider>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_4;
				NullCheck(L_6);
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
				L_7 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_6, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
				// var box = collider as BoxCollider;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = L_7;
				V_5 = ((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_8, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var));
				// var sphereCollider = collider as SphereCollider;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = L_8;
				V_6 = ((SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)IsInstClass((RuntimeObject*)L_9, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var));
				// var capsuleCollider = collider as CapsuleCollider;
				V_7 = ((CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)IsInstClass((RuntimeObject*)L_9, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var));
				// if (box != null)
				BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_11)
				{
					goto IL_009a_1;
				}
			}
			{
				// var size = box.size;
				BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_12 = V_5;
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_12, NULL);
				V_11 = L_13;
				// var center = box.center;
				BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_14 = V_5;
				NullCheck(L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_14, NULL);
				V_12 = L_15;
				// min = -size / 2 + center;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_11;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_16, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
				L_18 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_17, (2.0f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_19, NULL);
				V_8 = L_20;
				// max = size / 2 + center;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_11;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				L_22 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_21, (2.0f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_23, NULL);
				V_9 = L_24;
				goto IL_0223_1;
			}

IL_009a_1:
			{
				// else if (sphereCollider != null)
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_25 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_26;
				L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_26)
				{
					goto IL_00e9_1;
				}
			}
			{
				// var center = sphereCollider.center;
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_27 = V_6;
				NullCheck(L_27);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
				L_28 = SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E(L_27, NULL);
				V_13 = L_28;
				// var r = sphereCollider.radius;
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_29 = V_6;
				NullCheck(L_29);
				float L_30;
				L_30 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_29, NULL);
				V_14 = L_30;
				// var radius = new Vector3(r, r, r);
				float L_31 = V_14;
				float L_32 = V_14;
				float L_33 = V_14;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_15), L_31, L_32, L_33, NULL);
				// radius = Vector3.ClampMagnitude(radius, r);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_15;
				float L_35 = V_14;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
				L_36 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_34, L_35, NULL);
				V_15 = L_36;
				// min = center - radius;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_13;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_15;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
				L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_38, NULL);
				V_8 = L_39;
				// max = center + radius;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_13;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_15;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_41, NULL);
				V_9 = L_42;
				goto IL_0223_1;
			}

IL_00e9_1:
			{
				// else if (capsuleCollider != null)
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_43 = V_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_44;
				L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_44)
				{
					goto IL_01ca_1;
				}
			}
			{
				// var center = capsuleCollider.center;
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_45 = V_7;
				NullCheck(L_45);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
				L_46 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_45, NULL);
				V_16 = L_46;
				// var height = capsuleCollider.height;
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_47 = V_7;
				NullCheck(L_47);
				float L_48;
				L_48 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_47, NULL);
				V_17 = L_48;
				// var direction = capsuleCollider.direction;
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_49 = V_7;
				NullCheck(L_49);
				int32_t L_50;
				L_50 = CapsuleCollider_get_direction_mE6D56B0990E3F2FACA983679C251949FE3FC6DFA(L_49, NULL);
				V_18 = L_50;
				// var r = capsuleCollider.radius;
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_51 = V_7;
				NullCheck(L_51);
				float L_52;
				L_52 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_51, NULL);
				V_19 = L_52;
				// var radius = new Vector3(r, r, r);
				float L_53 = V_19;
				float L_54 = V_19;
				float L_55 = V_19;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_20), L_53, L_54, L_55, NULL);
				// height -= r * 2;
				float L_56 = V_17;
				float L_57 = V_19;
				V_17 = ((float)il2cpp_codegen_subtract(L_56, ((float)il2cpp_codegen_multiply(L_57, (2.0f)))));
				// radius = Vector3.ClampMagnitude(radius, r);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_20;
				float L_59 = V_19;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
				L_60 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_58, L_59, NULL);
				V_20 = L_60;
				// height -= (r - radius.x) * 2;
				float L_61 = V_17;
				float L_62 = V_19;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_20;
				float L_64 = L_63.___x_2;
				V_17 = ((float)il2cpp_codegen_subtract(L_61, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_62, L_64)), (2.0f)))));
				int32_t L_65 = V_18;
				switch (L_65)
				{
					case 0:
					{
						goto IL_0169_1;
					}
					case 1:
					{
						goto IL_0179_1;
					}
					case 2:
					{
						goto IL_0189_1;
					}
				}
			}
			{
				goto IL_0199_1;
			}

IL_0169_1:
			{
				// offset = Vector3.right * height;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
				L_66 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
				float L_67 = V_17;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
				L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_67, NULL);
				V_21 = L_68;
				// break;
				goto IL_01a4_1;
			}

IL_0179_1:
			{
				// offset = Vector3.up * height;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
				L_69 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
				float L_70 = V_17;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
				L_71 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, L_70, NULL);
				V_21 = L_71;
				// break;
				goto IL_01a4_1;
			}

IL_0189_1:
			{
				// offset = Vector3.forward * height;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
				L_72 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
				float L_73 = V_17;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
				L_74 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_72, L_73, NULL);
				V_21 = L_74;
				// break;
				goto IL_01a4_1;
			}

IL_0199_1:
			{
				// throw new Exception("This should never happen! If it does check Unity documentation for capsule colliders direction.");
				Exception_t* L_75 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_75);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_75, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA47B4D74A80D7EF612B02030F48C705DEAF5E1E)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&G2OM_ColliderDataProvider_GetColliderData_mA12311851F0963C0EEF7A70EB1873E7D8006D541_RuntimeMethod_var)));
			}

IL_01a4_1:
			{
				// min = center - radius - offset;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_16;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_20;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
				L_78 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_76, L_77, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_21;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
				L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_79, NULL);
				V_8 = L_80;
				// max = center + radius + offset;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_16;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_20;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
				L_83 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_81, L_82, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_21;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
				L_85 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_83, L_84, NULL);
				V_9 = L_85;
				goto IL_0223_1;
			}

IL_01ca_1:
			{
				// var meshFilter = go.GetComponent<MeshFilter>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_4;
				NullCheck(L_86);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_87;
				L_87 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_86, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
				V_22 = L_87;
				// if (meshFilter != null)
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_88 = V_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_89;
				L_89 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_88, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_89)
				{
					goto IL_01ff_1;
				}
			}
			{
				// var mesh = meshFilter.mesh;
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_90 = V_22;
				NullCheck(L_90);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_91;
				L_91 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_90, NULL);
				// var bounds = mesh.bounds;
				NullCheck(L_91);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_92;
				L_92 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_91, NULL);
				V_23 = L_92;
				// min = bounds.min;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
				L_93 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_23), NULL);
				V_8 = L_93;
				// max = bounds.max;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
				L_94 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_23), NULL);
				V_9 = L_94;
				goto IL_0223_1;
			}

IL_01ff_1:
			{
				// min = Vector3.zero;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				V_8 = L_95;
				// max = Vector3.zero;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
				L_96 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				V_9 = L_96;
				// Debug.LogWarning(string.Format("Failed to find bounds for object {0}. Reverting to zero bounds. Please fix this issue.", go.name));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = V_4;
				NullCheck(L_97);
				String_t* L_98;
				L_98 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_97, NULL);
				String_t* L_99;
				L_99 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral416CD7784FACF85FBEDA83A8E1A615217DEE0BDD, L_98, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_99, NULL);
			}

IL_0223_1:
			{
				// var transform = go.transform;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = V_4;
				NullCheck(L_100);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
				L_101 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_100, NULL);
				V_10 = L_101;
				// candidates[i] = new G2OM_Candidate
				// {
				//     candidate_id = (ulong)id,
				//     aabb_max_local_space = max.AsG2OMVector3(),
				//     aabb_min_local_space = min.AsG2OMVector3(),
				//     local_to_world_matrix = transform.localToWorldMatrix.AsG2OMMatrix4x4(),
				//     world_to_local_matrix = transform.worldToLocalMatrix.AsG2OMMatrix4x4(),
				// };
				G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_102 = ___1_candidates;
				int32_t L_103 = V_0;
				il2cpp_codegen_initobj((&V_24), sizeof(G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55));
				int32_t L_104 = V_3;
				(&V_24)->___candidate_id_0 = ((int64_t)L_104);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = V_9;
				G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_106;
				L_106 = G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF(L_105, NULL);
				(&V_24)->___aabb_max_local_space_1 = L_106;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_8;
				G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_108;
				L_108 = G2OM_UnityExtensionMethods_AsG2OMVector3_m0EE9B3B4F1D6BE58C9EEAD001BC26B7490B05BAF(L_107, NULL);
				(&V_24)->___aabb_min_local_space_2 = L_108;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = V_10;
				NullCheck(L_109);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_110;
				L_110 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_109, NULL);
				G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B L_111;
				L_111 = G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m1599BF08E46980615294A6E6A259048B9A3B8E65(L_110, NULL);
				(&V_24)->___local_to_world_matrix_4 = L_111;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = V_10;
				NullCheck(L_112);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_113;
				L_113 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_112, NULL);
				G2OM_Matrix4x4_t3694F5D6DACEC6C3DFB914D89934283D2D8AA11B L_114;
				L_114 = G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m1599BF08E46980615294A6E6A259048B9A3B8E65(L_113, NULL);
				(&V_24)->___world_to_local_matrix_3 = L_114;
				G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55 L_115 = V_24;
				NullCheck(L_102);
				(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (G2OM_Candidate_tA1CB20BFD0A11EC85F26F085D704DB84C2F67F55)L_115);
				// i++;
				int32_t L_116 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_116, 1));
			}

IL_028c_1:
			{
				// foreach (var candidate in gameObjects)
				bool L_117;
				L_117 = Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A((&V_1), Enumerator_MoveNext_m74B3956183A775A357DD43F929F0F60E31F9199A_RuntimeMethod_var);
				if (L_117)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_02a8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a8:
	{
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_ColliderDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ColliderDataProvider__ctor_m316C607A7FA6A9569AAD06E73D0C29351E965E83 (G2OM_ColliderDataProvider_t90C0AEC5120ECA4742C6DAF0134D45A707DC635D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Tobii.G2OM.G2OM_Context::Setup(Tobii.G2OM.G2OM_ContextCreateOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_Context_Setup_mD5A40FB5756452F3234B19E92DA2272596C34C93 (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, G2OM_ContextCreateOptions_tC95FE52B169E1291C4C71EBBCB5B2F19DCACD2A5 ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB23CCB98895143359167F61DE647BB288C8617);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4E462BC9DC120BFC793A317769C9C55CD84D332);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var result = Interop.G2OM_ContextCreateEx(out _context, ref options);
		intptr_t* L_0 = (intptr_t*)(&__this->____context_0);
		int32_t L_1;
		L_1 = Interop_G2OM_ContextCreateEx_m810A2D06EA2C08AA718387696751236F8749AE61(L_0, (&___0_options), NULL);
		V_0 = L_1;
		// if (result == G2OM_Error.Ok)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log("Created G2OM context.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBAB23CCB98895143359167F61DE647BB288C8617, NULL);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// Debug.LogError("Failed to create G2OM context. Error code " + result);
		Il2CppFakeBox<int32_t> L_3(G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE4E462BC9DC120BFC793A317769C9C55CD84D332, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Tobii.G2OM.G2OM_Context::Process(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.Int32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_Context_Process_mED7A6F40A6799DDCE5AA3927D10C465318B2B45C (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___0_deviceData, G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4* ___1_raycastResult, int32_t ___2_candidateCount, G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* ___3_candidates, G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* ___4_candidateResults, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF077DE34F8D000C950F1CF5F29A4D148ABDAB85);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var result = Interop.G2OM_Process(_context, ref deviceData, ref raycastResult, (uint)candidateCount, candidates, candidateResults);
		intptr_t L_0 = __this->____context_0;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_1 = ___0_deviceData;
		G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4* L_2 = ___1_raycastResult;
		int32_t L_3 = ___2_candidateCount;
		G2OM_CandidateU5BU5D_t265FAF5AB2D1F7E444D70DECF371E43E6D06C387* L_4 = ___3_candidates;
		G2OM_CandidateResultU5BU5D_t7CBE555DAA6FCFC9E28E8818B15FF76E08819E41* L_5 = ___4_candidateResults;
		int32_t L_6;
		L_6 = Interop_G2OM_Process_mF889732164E0B90354A6628C1A15CD1A7C3D5EAA(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		// if (result == G2OM_Error.Ok) return true;
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		// if (result == G2OM_Error.Ok) return true;
		return (bool)1;
	}

IL_0018:
	{
		// Debug.LogError("Failed to process G2OM. Error code " + result);
		Il2CppFakeBox<int32_t> L_8(G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDF077DE34F8D000C950F1CF5F29A4D148ABDAB85, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Tobii.G2OM.G2OM_Context::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_Context_Destroy_mABAB5986DAE9DB7BDAF5C2CDB01D1179A63B0373 (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77AEA6B66613896145DC025F0AD1733A45CF12E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB7B05EBF47D4A2FDC065778B7A7FBBA2170A9EE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_context == IntPtr.Zero) return true;
		intptr_t L_0 = __this->____context_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (_context == IntPtr.Zero) return true;
		return (bool)1;
	}

IL_0014:
	{
		// var result = Interop.G2OM_ContextDestroy(ref _context);
		intptr_t* L_3 = (intptr_t*)(&__this->____context_0);
		int32_t L_4;
		L_4 = Interop_G2OM_ContextDestroy_m84CAE08B3EE5DB2E7A9AEBF6F98DF2C23EBD76A8(L_3, NULL);
		V_0 = L_4;
		// _context = IntPtr.Zero;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____context_0 = L_5;
		// if (result == G2OM_Error.Ok)
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.Log("Destroyed G2OM context.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBB7B05EBF47D4A2FDC065778B7A7FBBA2170A9EE, NULL);
		// return true;
		return (bool)1;
	}

IL_003a:
	{
		// Debug.LogError("Failed to destroy G2OM context. Error code " + result);
		Il2CppFakeBox<int32_t> L_7(G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB77AEA6B66613896145DC025F0AD1733A45CF12E, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// return false;
		return (bool)0;
	}
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.G2OM_Context::GetCandidateSearchPattern(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_GazeRay[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_Context_GetCandidateSearchPattern_m9D642747FF347AA99026B4B7E2D26572061C068A (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___0_deviceData, G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ___1_rays, const RuntimeMethod* method) 
{
	{
		// return Interop.G2OM_GetCandidateSearchPattern(_context, ref deviceData, (uint)rays.Length, rays);
		intptr_t L_0 = __this->____context_0;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_1 = ___0_deviceData;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_2 = ___1_rays;
		NullCheck(L_2);
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_3 = ___1_rays;
		int32_t L_4;
		L_4 = Interop_G2OM_GetCandidateSearchPattern_m706EF6356A565B4304DEB2C3DD99A445FE8C05D6(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, NULL);
		return L_4;
	}
}
// System.IntPtr Tobii.G2OM.G2OM_Context::GetPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t G2OM_Context_GetPtr_mFE18D7752D9C2AA7FA0FDFC915CFAEC1C0421B22 (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, const RuntimeMethod* method) 
{
	{
		// return _context;
		intptr_t L_0 = __this->____context_0;
		return L_0;
	}
}
// System.Void Tobii.G2OM.G2OM_Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Context__ctor_mC4EA2521BD164B451D589873885A2C39D1C8BD6C (G2OM_Context_t143837090C7C0BB157030BB5F52E84CBA0DD32FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM_ObjectFinder::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder__ctor_m2F924C7D168C8744C01D595B1046892414624952 (G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9* __this, float ___0_now, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly G2OM_GazeRay[] _rays = new G2OM_GazeRay[MaxRaysPerFrame];
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_0 = (G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700*)(G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700*)SZArrayNew(G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->____rays_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rays_5), (void*)L_0);
		// private LayerMask _layerMask = ~0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->____layerMask_6 = L_1;
		// public G2OM_ObjectFinder(float now = 0)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _previousTimestamp = now;
		float L_2 = ___0_now;
		__this->____previousTimestamp_7 = L_2;
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::GetRelevantGazeObjects(Tobii.G2OM.G2OM_DeviceData&,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_GetRelevantGazeObjects_mF831125B47C5E72C4DC0D61171CAABDCD04A6BDF (G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9* __this, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___0_deviceData, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___1_foundObjects, RuntimeObject* ___2_distinguisher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB89372175E5CFDD9BFADE2FD7CC661A545D8F71);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var result = _context.GetCandidateSearchPattern(ref deviceData, _rays);
		RuntimeObject* L_0 = __this->____context_8;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_1 = ___0_deviceData;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_2 = __this->____rays_5;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1*, G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* >::Invoke(2 /* Tobii.G2OM.G2OM_Error Tobii.G2OM.IG2OM_Context::GetCandidateSearchPattern(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_GazeRay[]) */, IG2OM_Context_t169FDA9105EB79CDA362284EADAF111A30CCEA25_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		// if (result != G2OM_Error.Ok)
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError("GetCandidateSearchPattern failed with error: " + result);
		Il2CppFakeBox<int32_t> L_5(G2OM_Error_tB623F798092C84EB479C43704E4B7F44A1C7A523_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAB89372175E5CFDD9BFADE2FD7CC661A545D8F71, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// var numberOfRaysThisFrame = GetNumberOfRays(deviceData.timestamp - _previousTimestamp);
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_8 = ___0_deviceData;
		float L_9 = L_8->___timestamp_0;
		float L_10 = __this->____previousTimestamp_7;
		int32_t L_11;
		L_11 = G2OM_ObjectFinder_GetNumberOfRays_m21C79AB9B552DD6610D345369A4995B73100ABEA(((float)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		V_1 = L_11;
		// _previousTimestamp = deviceData.timestamp;
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_12 = ___0_deviceData;
		float L_13 = L_12->___timestamp_0;
		__this->____previousTimestamp_7 = L_13;
		// FindObjects(_rays, foundObjects, distinguisher, _layerMask, numberOfRaysThisFrame);
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_14 = __this->____rays_5;
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_15 = ___1_foundObjects;
		RuntimeObject* L_16 = ___2_distinguisher;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = __this->____layerMask_6;
		int32_t L_18 = V_1;
		G2OM_ObjectFinder_FindObjects_m9B58CF5CA4861FCEB2728E7CC259CA0EFDD8D0FB(L_14, L_15, L_16, L_17, L_18, NULL);
		// }
		return;
	}
}
// Tobii.G2OM.G2OM_RaycastResult Tobii.G2OM.G2OM_ObjectFinder::GetRaycastResult(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.IG2OM_ObjectDistinguisher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4 G2OM_ObjectFinder_GetRaycastResult_m2FF86183B1BF468516DD78889BD03BE65E7E728E (G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9* __this, G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___0_deviceData, RuntimeObject* ___1_distinguisher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectDistinguisher_t10AFF01409034BD560F3DAE946ABCFB0A98E78BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	G2OM_Raycast_t7CCE5D9E512912976ABD132E80795C64E6797586 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var raycastResult = new G2OM_RaycastResult();
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4));
		// var result = FindGameObject(ref deviceData.gaze_ray_world_space.ray, _layerMask, out go);
		G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* L_0 = ___0_deviceData;
		G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D* L_1 = (G2OM_GazeRay_t292057B03B29BCB2999C7A29476FBE622343AA0D*)(&L_0->___gaze_ray_world_space_1);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_2 = (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6*)(&L_1->___ray_0);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->____layerMask_6;
		bool L_4;
		L_4 = G2OM_ObjectFinder_FindGameObject_m09D5C59EEE738F74704D7AF008DC50AB4113A692(L_2, L_3, (&V_1), NULL);
		// if (result)
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// var id = go.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		V_2 = L_6;
		// var hitACandidate = distinguisher.IsGameObjectGazeFocusable(id, go);
		RuntimeObject* L_7 = ___1_distinguisher;
		int32_t L_8 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		NullCheck(L_7);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* System.Boolean Tobii.G2OM.IG2OM_ObjectDistinguisher::IsGameObjectGazeFocusable(System.Int32,UnityEngine.GameObject) */, IG2OM_ObjectDistinguisher_t10AFF01409034BD560F3DAE946ABCFB0A98E78BA_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		V_3 = L_10;
		// raycastResult.gaze_ray = new G2OM_Raycast
		// {
		//     candidate_id = (ulong)id,
		//     is_raycast_id_valid = hitACandidate.ToByte()
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(G2OM_Raycast_t7CCE5D9E512912976ABD132E80795C64E6797586));
		int32_t L_11 = V_2;
		(&V_4)->___candidate_id_1 = ((int64_t)L_11);
		bool L_12 = V_3;
		uint8_t L_13;
		L_13 = G2OM_ExtensionMethods_ToByte_m84B897A12FB3A8F40C0E958BBBEA6AE2D30485E5(L_12, NULL);
		(&V_4)->___is_raycast_id_valid_0 = L_13;
		G2OM_Raycast_t7CCE5D9E512912976ABD132E80795C64E6797586 L_14 = V_4;
		(&V_0)->___gaze_ray_0 = L_14;
	}

IL_0059:
	{
		// return raycastResult;
		G2OM_RaycastResult_t7AC075A91847615921DA958BD117DE6F35CB3AC4 L_15 = V_0;
		return L_15;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::Setup(Tobii.G2OM.IG2OM_Context,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_Setup_mD97985F2D0FB7EA8408E41B2D351BBF777F8828F (G2OM_ObjectFinder_t65ECD96302BC0340D971449F28FD9DF0E9FC59C9* __this, RuntimeObject* ___0_context, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_layerMask, const RuntimeMethod* method) 
{
	{
		// _layerMask = layerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___1_layerMask;
		__this->____layerMask_6 = L_0;
		// _context = context;
		RuntimeObject* L_1 = ___0_context;
		__this->____context_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____context_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::DrawDebugRays(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_GazeRay[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_DrawDebugRays_m33124BCB59675AAE163865A9A8FAC29BC46E9445 (G2OM_DeviceData_tF7886857DCBB7A47CD3D391D31A80C54A85E9FC1* ___0_deviceData, G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ___1_rays, int32_t ___2_numberOfRaysThisFrame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(rays.Length <= 0) return;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_0 = ___1_rays;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// if(rays.Length <= 0) return;
		return;
	}

IL_0005:
	{
		// if(rays[0].is_valid.ToBool() == false) return;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_1 = ___1_rays;
		NullCheck(L_1);
		uint8_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___is_valid_1;
		bool L_3;
		L_3 = G2OM_ExtensionMethods_ToBool_m44DCAAA34CCB249A942D3398CE3E6F0A1948EECB(L_2, NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		// if(rays[0].is_valid.ToBool() == false) return;
		return;
	}

IL_0019:
	{
		// Debug.DrawRay(rays[0].ray.origin.Vector(), rays[0].ray.direction.Vector() * 100, Color.red);
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_4 = ___1_rays;
		NullCheck(L_4);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_5 = (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___ray_0);
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_6 = L_5->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_6, NULL);
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_8 = ___1_rays;
		NullCheck(L_8);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_9 = (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6*)(&((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___ray_0);
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_10 = L_9->___direction_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (100.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_7, L_12, L_13, NULL);
		// for (int i = 1; i < numberOfRaysThisFrame; i++)
		V_0 = 1;
		goto IL_00b4;
	}

IL_005d:
	{
		// if (rays[i].is_valid.ToBool() == false) break;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_14 = ___1_rays;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___is_valid_1;
		bool L_17;
		L_17 = G2OM_ExtensionMethods_ToBool_m44DCAAA34CCB249A942D3398CE3E6F0A1948EECB(L_16, NULL);
		if (!L_17)
		{
			goto IL_00b8;
		}
	}
	{
		// Debug.DrawRay(rays[i].ray.origin.Vector(), rays[i].ray.direction.Vector() * 100, Color.green);
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_18 = ___1_rays;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_20 = (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6*)(&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___ray_0);
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_21 = L_20->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_21, NULL);
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_23 = ___1_rays;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_25 = (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6*)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___ray_0);
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_26 = L_25->___direction_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (100.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_22, L_28, L_29, NULL);
		// for (int i = 1; i < numberOfRaysThisFrame; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b4:
	{
		// for (int i = 1; i < numberOfRaysThisFrame; i++)
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_numberOfRaysThisFrame;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_005d;
		}
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Int32 Tobii.G2OM.G2OM_ObjectFinder::GetNumberOfRays(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_ObjectFinder_GetNumberOfRays_m21C79AB9B552DD6610D345369A4995B73100ABEA (float ___0_dt, const RuntimeMethod* method) 
{
	{
		// var rays = Mathf.CeilToInt(RaysPerSecond * dt);
		float L_0 = ___0_dt;
		int32_t L_1;
		L_1 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply((900.0f), L_0)), NULL);
		// return Mathf.Clamp(rays, MinimumRaysPerFrame, MaxRaysPerFrame);
		int32_t L_2;
		L_2 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_1, 3, ((int32_t)15), NULL);
		return L_2;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::FindObjects(Tobii.G2OM.G2OM_GazeRay[],System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher,UnityEngine.LayerMask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_FindObjects_m9B58CF5CA4861FCEB2728E7CC259CA0EFDD8D0FB (G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* ___0_rays, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___1_foundObjects, RuntimeObject* ___2_distinguisher, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___3_layerMask, int32_t ___4_numberOfRaysThisFrame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectDistinguisher_t10AFF01409034BD560F3DAE946ABCFB0A98E78BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foundObjects.Clear();
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = ___1_foundObjects;
		NullCheck(L_0);
		Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686(L_0, Dictionary_2_Clear_m92298CA3F2C40724B4D2D9E4D9C4122A70E0C686_RuntimeMethod_var);
		// for (int i = 0; i < numberOfRaysThisFrame; i++)
		V_0 = 0;
		goto IL_0059;
	}

IL_000a:
	{
		// if (rays[i].is_valid.ToBool() == false) break;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_1 = ___0_rays;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint8_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___is_valid_1;
		bool L_4;
		L_4 = G2OM_ExtensionMethods_ToBool_m44DCAAA34CCB249A942D3398CE3E6F0A1948EECB(L_3, NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// if (FindGameObject(ref rays[i].ray, layerMask, out go) == false) continue;
		G2OM_GazeRayU5BU5D_tBF1236A4D469EB1DA852998108BB1D1E7EC60700* L_5 = ___0_rays;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_7 = (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6*)(&((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___ray_0);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = ___3_layerMask;
		bool L_9;
		L_9 = G2OM_ObjectFinder_FindGameObject_m09D5C59EEE738F74704D7AF008DC50AB4113A692(L_7, L_8, (&V_1), NULL);
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// var id = go.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_10, NULL);
		V_2 = L_11;
		// if (foundObjects.ContainsKey(id)) continue;
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_12 = ___1_foundObjects;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F(L_12, L_13, Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		// if (distinguisher.IsGameObjectGazeFocusable(id, go) == false) continue;
		RuntimeObject* L_15 = ___2_distinguisher;
		int32_t L_16 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		NullCheck(L_15);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* System.Boolean Tobii.G2OM.IG2OM_ObjectDistinguisher::IsGameObjectGazeFocusable(System.Int32,UnityEngine.GameObject) */, IG2OM_ObjectDistinguisher_t10AFF01409034BD560F3DAE946ABCFB0A98E78BA_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		// foundObjects.Add(id, go);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_19 = ___1_foundObjects;
		int32_t L_20 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		NullCheck(L_19);
		Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF(L_19, L_20, L_21, Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
	}

IL_0055:
	{
		// for (int i = 0; i < numberOfRaysThisFrame; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < numberOfRaysThisFrame; i++)
		int32_t L_23 = V_0;
		int32_t L_24 = ___4_numberOfRaysThisFrame;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_000a;
		}
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Boolean Tobii.G2OM.G2OM_ObjectFinder::FindGameObject(Tobii.G2OM.G2OM_Ray&,UnityEngine.LayerMask,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ObjectFinder_FindGameObject_m09D5C59EEE738F74704D7AF008DC50AB4113A692 (G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* ___0_ray, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_layerMask, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___2_gameObject, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// gameObject = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___2_gameObject;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (Physics.Raycast(ray.origin.Vector(), ray.direction.Vector(), out hit, RaycastLength, layerMask) == false) return false;
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_1 = ___0_ray;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_2 = L_1->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_2, NULL);
		G2OM_Ray_tCD4D5844E9D0FEA8A2FF191039A025B352BFEEF6* L_4 = ___0_ray;
		G2OM_Vector3_t34F399F4D5A7F57FFC44CE0E2CE44CD737EF1FAC L_5 = L_4->___direction_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = G2OM_UnityExtensionMethods_Vector_m3A95ABC8F0BD05DE005C9A1B6502D3AE89C37416(L_5, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = ___1_layerMask;
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_7, NULL);
		bool L_9;
		L_9 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_3, L_6, (&V_0), ((std::numeric_limits<float>::max)()), L_8, NULL);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		// if (Physics.Raycast(ray.origin.Vector(), ray.direction.Vector(), out hit, RaycastLength, layerMask) == false) return false;
		return (bool)0;
	}

IL_002f:
	{
		// gameObject = hit.collider.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_10 = ___2_gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		*((RuntimeObject**)L_10) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)L_12);
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM_PostTicker::TickComplete(System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker_TickComplete_m36272646DC1A118E15B43C642F9B6490692CD7CC (G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288* __this, List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* ___0_focusedObjects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject focusedObject = focusedObjects.Count == 0 ? null : focusedObjects[0].GameObject;
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_0 = ___0_focusedObjects;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_inline(L_0, List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* L_2 = ___0_focusedObjects;
		NullCheck(L_2);
		FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 L_3;
		L_3 = List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18(L_2, 0, List_1_get_Item_m6DE074EFDDED9A977A01440EFFC21558091AFB18_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3.___GameObject_0;
		G_B3_0 = L_4;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
	}

IL_0017:
	{
		// UpdateFocusableComponents(focusedObject, ref _previousGazeFocusedObject, _gazeFocusableComponents);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)(&__this->____previousGazeFocusedObject_1);
		List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* L_6 = __this->____gazeFocusableComponents_2;
		G2OM_PostTicker_UpdateFocusableComponents_mB0B04D481AF576110B3C3CE1DE0178BA5BBDEE64(G_B3_0, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_PostTicker::UpdateFocusableComponents(UnityEngine.GameObject,UnityEngine.GameObject&,System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker_UpdateFocusableComponents_mB0B04D481AF576110B3C3CE1DE0178BA5BBDEE64 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_focusedObject, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___1_previousFocusedObject, List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* ___2_gazeFocusableComponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisIGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_m348456E419BB40C60ACE980DB12CCE489140D00C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m253A96D58361C013754F5F5213A4E8168909AA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (focusedObject == previousFocusedObject) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_focusedObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_1 = ___1_previousFocusedObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_1);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		// if (focusedObject == previousFocusedObject) return;
		return;
	}

IL_000b:
	{
		// if (previousFocusedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_4 = ___1_previousFocusedObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_4);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// foreach (var focusableComponent in gazeFocusableComponents)
		List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* L_7 = ___2_gazeFocusableComponents;
		NullCheck(L_7);
		Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5 L_8;
		L_8 = List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE(L_7, List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4((&V_0), Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_001e_1:
			{
				// foreach (var focusableComponent in gazeFocusableComponents)
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_inline((&V_0), Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_RuntimeMethod_var);
				// focusableComponent.GazeFocusChanged(false);
				NullCheck(L_9);
				InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Tobii.G2OM.IGazeFocusable::GazeFocusChanged(System.Boolean) */, IGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_il2cpp_TypeInfo_var, L_9, (bool)0);
			}

IL_002b_1:
			{
				// foreach (var focusableComponent in gazeFocusableComponents)
				bool L_10;
				L_10 = Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382((&V_0), Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// gazeFocusableComponents.Clear();
		List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* L_11 = ___2_gazeFocusableComponents;
		NullCheck(L_11);
		List_1_Clear_m253A96D58361C013754F5F5213A4E8168909AA3E_inline(L_11, List_1_Clear_m253A96D58361C013754F5F5213A4E8168909AA3E_RuntimeMethod_var);
	}

IL_004a:
	{
		// if (focusedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___0_focusedObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// focusedObject.GetComponents(gazeFocusableComponents);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___0_focusedObject;
		List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* L_15 = ___2_gazeFocusableComponents;
		NullCheck(L_14);
		GameObject_GetComponents_TisIGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_m348456E419BB40C60ACE980DB12CCE489140D00C(L_14, L_15, GameObject_GetComponents_TisIGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_m348456E419BB40C60ACE980DB12CCE489140D00C_RuntimeMethod_var);
		// foreach (var focusableComponent in gazeFocusableComponents)
		List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* L_16 = ___2_gazeFocusableComponents;
		NullCheck(L_16);
		Enumerator_t16C0E31D7C7464995CA9F5465E4BEE8BBC1AA2A5 L_17;
		L_17 = List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE(L_16, List_1_GetEnumerator_m4B235209288D47016A392E7DF1B6253DC4A0C2FE_RuntimeMethod_var);
		V_0 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4((&V_0), Enumerator_Dispose_m6600F9ED5D50028295002896686BCAAF053B00E4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_0063_1:
			{
				// foreach (var focusableComponent in gazeFocusableComponents)
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_inline((&V_0), Enumerator_get_Current_m630FBF9BA679E3B1B502BB4BCC9D86ECEAC187AF_RuntimeMethod_var);
				// focusableComponent.GazeFocusChanged(true);
				NullCheck(L_18);
				InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Tobii.G2OM.IGazeFocusable::GazeFocusChanged(System.Boolean) */, IGazeFocusable_t0E5C45F4854B80F21B2F1A0389869039870DCAA0_il2cpp_TypeInfo_var, L_18, (bool)1);
			}

IL_0070_1:
			{
				// foreach (var focusableComponent in gazeFocusableComponents)
				bool L_19;
				L_19 = Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382((&V_0), Enumerator_MoveNext_mFB79139911E0D5A24008EDF9C7973A3C348AA382_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0063_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// previousFocusedObject = focusedObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_20 = ___1_previousFocusedObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___0_focusedObject;
		*((RuntimeObject**)L_20) = (RuntimeObject*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)L_21);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_PostTicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker__ctor_mAFEFC39D7269995238298C8D40C640A1C34C5B2B (G2OM_PostTicker_t4D0E2690B6F5BC4E3D7B62C34CE3EA303A1B0288* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1EFB40849934AB14FC5BB7BE5732265D13B95B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC918FC177054D8B7059326D036E2BCF54C760A74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<IGazeFocusable> _gazeFocusableComponents = new List<IGazeFocusable>(ExpectedNumerOfGazeFocusableComponentsPerObject);
		List_1_tC918FC177054D8B7059326D036E2BCF54C760A74* L_0 = (List_1_tC918FC177054D8B7059326D036E2BCF54C760A74*)il2cpp_codegen_object_new(List_1_tC918FC177054D8B7059326D036E2BCF54C760A74_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1EFB40849934AB14FC5BB7BE5732265D13B95B96(L_0, 6, List_1__ctor_m1EFB40849934AB14FC5BB7BE5732265D13B95B96_RuntimeMethod_var);
		__this->____gazeFocusableComponents_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazeFocusableComponents_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float G2OM_get_MaxHistoryInSeconds_mC129385AEE33748D15B02C8D60898D8A5D94BC76_inline (G2OM_t3012CB8D216E16F631DFFFCAE19FE36E8A1DDCE1* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxHistoryInSeconds { get { return _howLongToKeepCandidatesInMemory; } }
		float L_0 = __this->____howLongToKeepCandidatesInMemory_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m67609E5ABD4B013526B2E192C0CF440E77EC1B42_gshared_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 Enumerator_get_Current_mC2231CF16961F7118A2131E060E8FAE6B22D805F_gshared_inline (Enumerator_t5005CBFBFE309EED87928D6479F258C0F0C94BA9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 KeyValuePair_2_get_Value_m7240BF7611051DCE1C69FD3FF738A923D5928B4A_gshared_inline (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5* __this, const RuntimeMethod* method) 
{
	{
		InternalCandidate_t3DA1E731936884F6251BEA848BAE13CF59AD8FC3 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m19A9C5C859D69A8F83795C7E4266CA957F99031F_gshared_inline (KeyValuePair_2_tD3ABECDE39520A2DA73B480F79D9E0AC43E2F5D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m546244D8E8A4722565A1B7D80AA95BD30B0E51AD_gshared_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m799E239EDFE66B2E5AB0EABD3F0D0491B6AF90B5_gshared_inline (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7* __this, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 ___0_item, const RuntimeMethod* method) 
{
	FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		FocusedCandidateU5BU5D_t0692C3E881F9BACD5C01D894747B8A131F91EB3B* L_6 = V_0;
		int32_t L_7 = V_1;
		FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444)L_8);
		return;
	}

IL_0034:
	{
		FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444 L_9 = ___0_item;
		((  void (*) (List_1_t914FBFD2C4CDD1D19D4C70C3EDB745F3B5C109D7*, FocusedCandidate_tC9AFF3F22E8550E6B32189E5DD9EE3BD13BE3444, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
