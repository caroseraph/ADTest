#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.MethodDefinition>
struct Dictionary_2_t3550A4C8B8F309AD8ACA516083084FB996533535;
// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.TypeDefinition>
struct Dictionary_2_t3F982AE54B775251C27974F0B413E65B9987A583;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C;
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6;
// ILRuntime.Mono.Cecil.ModuleDefinition
struct ModuleDefinition_t8C198596F298EC0DD3F17A8E23EDE87B8B297FCD;
// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
struct Guid_t;
struct IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C;
struct IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.ModuleDefinition ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::module
	ModuleDefinition_t8C198596F298EC0DD3F17A8E23EDE87B8B297FCD* ___module_0;
	// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.TypeDefinition> ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::types
	Dictionary_2_t3F982AE54B775251C27974F0B413E65B9987A583* ___types_1;
	// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.MethodDefinition> ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::methods
	Dictionary_2_t3550A4C8B8F309AD8ACA516083084FB996533535* ___methods_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct NOVTABLE IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_mC840D267A76322DADE1DEDE3FBFFF958E62FB11B(Il2CppChar* ___0_szName) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_mD7DE1DBE869B25B19E3C61159D8D3B8D9E823361(Il2CppChar* ___0_szFile, uint32_t ___1_dwSaveFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_mF0B30D2FEA42E410D07AD074811C750873A83771(intptr_t ___0_pIStream, uint32_t ___1_dwSaveFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_mB411D8C978902BD04F8A5070DEA72ECD43966D6D(uint32_t ___0_fSave, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m30F3731627CE239DD393E9FBA8EB40B94E15BBAA(intptr_t ___0_szTypeDef, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m99A22EF3C693256D2E3FD9968FF91C1692870352(intptr_t ___0_szTypeDef, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, uint32_t ___4_tdEncloser, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_m9598AB0ECED5D385E9C2A5BF762BBE4B769143C4(Il2CppIUnknown* ___0_pUnk) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m6822B9D4B1A925EF7316AC820A5B311070E4FA57(uint32_t ___0_td, intptr_t ___1_zName, uint32_t ___2_dwMethodFlags, intptr_t ___3_pvSigBlob, uint32_t ___4_cbSigBlob, uint32_t ___5_ulCodeRVA, uint32_t ___6_dwImplFlags, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_mCB1E4D7121893198D517483DE0570309DC55149E(uint32_t ___0_td, uint32_t ___1_tkBody, uint32_t ___2_tkDecl) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_mA71AF6950531F406E5C70CB1B7E283B210A3BDBA(uint32_t ___0_tkResolutionScope, intptr_t ___1_szName, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_mB05AC384B3C4B20E304AB7227425B2972323A22E(intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___3_pImport, uint32_t ___4_tdImport, intptr_t ___5_pAssemEmit, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_mFDC9D352D6E542EF7C7AE640AABD62E401536A90(uint32_t ___0_tkImport, Il2CppChar* ___1_szName, intptr_t ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_m25879DCE4C0919C40E3BC2BFCE14B56316F5F2B4(intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___3_pImport, uint32_t ___4_mbMember, intptr_t ___5_pAssemEmit, uint32_t ___6_tkParent, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mB315268B4BFA33C370554195B8C23EB2EFBD814B(uint32_t ___0_td, Il2CppChar* ___1_szEvent, uint32_t ___2_dwEventFlags, uint32_t ___3_tkEventType, uint32_t ___4_mdAddOn, uint32_t ___5_mdRemoveOn, uint32_t ___6_mdFire, intptr_t ___7_rmdOtherMethods, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_mCC56685D20CCE7AFBEA9214C34B5507EA7AE8AFB(uint32_t ___0_td, uint32_t ___1_dwPackSize, intptr_t ___2_rFieldOffsets, uint32_t ___3_ulClassSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m6CC8D7F911CD44CC3B21B12155D78E0659490558(uint32_t ___0_td) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_m7116BAD13B4048ED1E7B9FEBDF07922C43B3C0A3(uint32_t ___0_tk, intptr_t ___1_pvNativeType, uint32_t ___2_cbNativeType) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_mD1944C516D21C884A1DA3F807599C1B9BCB33765(uint32_t ___0_tk) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_m99ED99DD439D590E468869301EF8ED4189D32EC8(uint32_t ___0_tk, uint32_t ___1_dwAction, intptr_t ___2_pvPermission, uint32_t ___3_cbPermission, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m74ED3B6A540A726DFEF4FB08E3DA3D23DDF2A297(uint32_t ___0_md, uint32_t ___1_ulRVA) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_m16B82D4C5EC78EA6FE384F3BEDE55EBB429628AE(intptr_t ___0_pvSig, uint32_t ___1_cbSig, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m6A25DAD7A4B992F691976E14A40618871550B241(Il2CppChar* ___0_szName, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_mCC3CA4223E008E542A474CC7456F732810377E17(uint32_t ___0_mr, uint32_t ___1_tk) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_mC0D2C76EF9FFAFA0D03736D2A0F0E472039F04EA(intptr_t ___0_pvSig, uint32_t ___1_cbSig, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_m7FEAB7C1D1E8B0EE3E48BDB569A3EA7C30E614F2(intptr_t ___0_pbData, uint32_t ___1_cbData) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_mAE24A2C7A880E41BD78283C15DC86C6F4BFEF83F(Il2CppChar* ___0_szString, uint32_t ___1_cchString, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_mC5D88FC045064A14C25E50E37DAA7CF575735784(uint32_t ___0_tkObj) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m7F6EC119814599A6E4F2A4A2A73187323219CC80(uint32_t ___0_md, uint32_t ___1_dwMethodFlags, uint32_t ___2_ulCodeRVA, uint32_t ___3_dwImplFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m54EC5EEF2B606C92D069BBBF50760BAFE7BCA364(uint32_t ___0_td, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m328BD4765E26BBA8895C57243E6E056BCFEFF0A0(uint32_t ___0_ev, uint32_t ___1_dwEventFlags, uint32_t ___2_tkEventType, uint32_t ___3_mdAddOn, uint32_t ___4_mdRemoveOn, uint32_t ___5_mdFire, intptr_t ___6_rmdOtherMethods) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_mACC0013B0012A5F935FAFAEB2B432C73EACAF2E7(uint32_t ___0_tk, uint32_t ___1_dwAction, intptr_t ___2_pvPermission, uint32_t ___3_cbPermission, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_mB58EBD77CA3E28BB2407111DE5AF36758AF4AF25(uint32_t ___0_tk, uint32_t ___1_dwMappingFlags, Il2CppChar* ___2_szImportName, uint32_t ___3_mrImportDLL) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_mB24D05CA82DD5D085367ADFFD14E3586C55E9022(uint32_t ___0_tk, uint32_t ___1_dwMappingFlags, Il2CppChar* ___2_szImportName, uint32_t ___3_mrImportDLL) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_mCFD654830FD481AEE52B7F6B826264375BF34069(uint32_t ___0_tk) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_mFCA5ADB87A1D4990B3CE82A0731A834843042ADC(uint32_t ___0_tkObj, uint32_t ___1_tkType, intptr_t ___2_pCustomAttribute, uint32_t ___3_cbCustomAttribute, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m69FBF2BB93E17B190F24FEB694CDF863EE45E9FD(uint32_t ___0_pcv, intptr_t ___1_pCustomAttribute, uint32_t ___2_cbCustomAttribute) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_m6139CB67CE6CE32E38867B3043A7A1F6D89DB3F0(uint32_t ___0_td, Il2CppChar* ___1_szName, uint32_t ___2_dwFieldFlags, intptr_t ___3_pvSigBlob, uint32_t ___4_cbSigBlob, uint32_t ___5_dwCPlusTypeFlag, intptr_t ___6_pValue, uint32_t ___7_cchValue, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m0A994B3C50886C213EB4E54F20E13DC96E33B1BC(uint32_t ___0_td, Il2CppChar* ___1_szProperty, uint32_t ___2_dwPropFlags, intptr_t ___3_pvSig, uint32_t ___4_cbSig, uint32_t ___5_dwCPlusTypeFlag, intptr_t ___6_pValue, uint32_t ___7_cchValue, uint32_t ___8_mdSetter, uint32_t ___9_mdGetter, intptr_t ___10_rmdOtherMethods, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_m110CADED8CE4A3F9B2143B685F5B6E495ACFF071(uint32_t ___0_md, uint32_t ___1_ulParamSeq, Il2CppChar* ___2_szName, uint32_t ___3_dwParamFlags, uint32_t ___4_dwCPlusTypeFlag, intptr_t ___5_pValue, uint32_t ___6_cchValue, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_m404DF79CABC6647A74292B892321F782B59A4240(uint32_t ___0_fd, uint32_t ___1_dwFieldFlags, uint32_t ___2_dwCPlusTypeFlag, intptr_t ___3_pValue, uint32_t ___4_cchValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_m74BA1D6F2BD3D05E798B4596D0F36011AA57BE83(uint32_t ___0_pr, uint32_t ___1_dwPropFlags, uint32_t ___2_dwCPlusTypeFlag, intptr_t ___3_pValue, uint32_t ___4_cchValue, uint32_t ___5_mdSetter, uint32_t ___6_mdGetter, intptr_t ___7_rmdOtherMethods) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m9735EB1611160EF08CB275EA4642EF5B828BF8A9(uint32_t ___0_pd, Il2CppChar* ___1_szName, uint32_t ___2_dwParamFlags, uint32_t ___3_dwCPlusTypeFlag, intptr_t ___4_pValue, uint32_t ___5_cchValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_m7DE694D3199F275E1D1883A80344947EE709B315(uint32_t ___0_tkObj, intptr_t ___1_rSecAttrs, uint32_t ___2_cSecAttrs, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_m98F63F07409155922E4F13A85872D1C677E138F6(Il2CppIUnknown* ___0_pImport) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_m785C5478EEEF26D4B625E2B6EA412E64E46578AB(intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___3_import, intptr_t ___4_pbSigBlob, uint32_t ___5_cbSigBlob, intptr_t ___6_pAssemEmit, IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C* ___7_emit, intptr_t ___8_pvTranslatedSig, uint32_t ___9_cbTranslatedSigMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_m48FD07FE2CE84331028AB24C45D6ED9B7ED2940F(uint32_t ___0_md, uint32_t ___1_dwImplFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_mF2FF5F0955BAB625A1BC340C3EA585FC65E75814(uint32_t ___0_fd, uint32_t ___1_ulRVA) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_m1BA4D0504F10BB734435C3A32064735496C18271(IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___0_pImport, intptr_t ___1_pHostMapToken, Il2CppIUnknown* ___2_pHandler) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_mA4C8A0BF5FCB3A858EE1A4D8BE9E4F077F52CA4C() = 0;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct NOVTABLE IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IMetaDataImport_CloseEnum_m310C13C72081C3A7FDAFE41E34B863EB392A876C(uint32_t ___0_hEnum) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m823E43D3A263850E298529646B8CBAE22D34C03C(uint32_t ___0_hEnum, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_m280AA7B10625D848A6B0645D266FBA89679387DA(uint32_t ___0_hEnum, uint32_t ___1_ulPos) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_m6481834CC2528E4E612DA8A9DD984DC8183830DB(uint32_t* ___0_phEnum, uint32_t* ___1_rTypeDefs, uint32_t ___2_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_mE1E0B8165E3A3C4642FAF1A305559C9B2E2ED634(uint32_t* ___0_phEnum, uint32_t ___1_td, uint32_t* ___2_rImpls, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_m721506E5BD34CAC28C5339ECB26CD74F1A7CAF8E(uint32_t* ___0_phEnum, uint32_t* ___1_rTypeRefs, uint32_t ___2_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_mF2E3130D9E90C90E09B9E27874847C25D62D7AB9(Il2CppChar* ___0_szTypeDef, uint32_t ___1_tkEnclosingClass, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_m29C9981D00A1EEE8D4C7A3F84A25A6A9D7CEE249(Il2CppChar* ___0_szName, uint32_t ___1_cchName, uint32_t* ___2_pchName, Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mCA37CF0F851AB797A20F037BB2DF6B347533779A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_m5A32D5C939952C9F4D8A17920E66994915F46F2D(uint32_t ___0_td, intptr_t ___1_szTypeDef, uint32_t ___2_cchTypeDef, uint32_t* ___3_pchTypeDef, intptr_t ___4_pdwTypeDefFlags, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_m5DA7865CDF02F9D32177D7217C698E47158CCA9A(uint32_t ___0_iiImpl, uint32_t* ___1_pClass, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m3B584009C0F1670712EEC5D0C1130D95B9428FC4(uint32_t ___0_tr, uint32_t* ___1_ptkResolutionScope, Il2CppChar* ___2_szName, uint32_t ___3_cchName, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mA45CC81D7A807808D32571D48319A9532AE1A56F(uint32_t ___0_tr, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppIScope, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_m9DD4D628291029E8124D603D9E3B7467271B4E40(uint32_t* ___0_phEnum, uint32_t ___1_cl, uint32_t* ___2_rMembers, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_m02922DB6B166BC48A2AB0B969ECBDD64B43068E2(uint32_t* ___0_phEnum, uint32_t ___1_cl, Il2CppChar* ___2_szName, uint32_t* ___3_rMembers, uint32_t ___4_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m7EF7B26995F0861A0A848374FE5D6EEC1173871A(uint32_t* ___0_phEnum, uint32_t ___1_cl, intptr_t ___2_rMethods, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m80F19424E334DFE223E0F229E70BC5ACABB3E9C0(uint32_t* ___0_phEnum, uint32_t ___1_cl, Il2CppChar* ___2_szName, uint32_t* ___3_rMethods, uint32_t ___4_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_m3F62CA7DF6B92ADEB6178B073E69B2442BB9591F(uint32_t* ___0_phEnum, uint32_t ___1_cl, intptr_t ___2_rFields, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_m6CC323CA641E58F4BCA856B832BB6F358C1344BE(uint32_t* ___0_phEnum, uint32_t ___1_cl, Il2CppChar* ___2_szName, uint32_t* ___3_rFields, uint32_t ___4_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_m0F22BEFA40D238C64A23E92C02252824BA31164F(uint32_t* ___0_phEnum, uint32_t ___1_mb, uint32_t* ___2_rParams, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m9294B6F7F2E10004207590E1C5BB74A904DA2D03(uint32_t* ___0_phEnum, uint32_t ___1_tkParent, uint32_t* ___2_rMemberRefs, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_mC6D871056A7366E9BB435B72CA348A878CE76AB3(uint32_t* ___0_phEnum, uint32_t ___1_td, uint32_t* ___2_rMethodBody, uint32_t* ___3_rMethodDecl, uint32_t ___4_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m26600BE1C9CCF9F8B71684CCD7C5212528F7EC1A(uint32_t* ___0_phEnum, uint32_t ___1_tk, uint32_t ___2_dwActions, uint32_t* ___3_rPermission, uint32_t ___4_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mDDCC9CC98E60D8D5A6EC024EA551F58F9B1EBE2E(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_mDFD229591597FCAC8ADCDB940E4676F75FA53046(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_mAD74A5812E92D020760493ACDB145907F674E2AC(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mC6A7E418448EBB3080D92AD74D4B925B5970775B(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_mEFACC432F0160025F5197FDF0606C45CC0611FC3(uint32_t ___0_mb, uint32_t* ___1_pClass, intptr_t ___2_szMethod, uint32_t ___3_cchMethod, uint32_t* ___4_pchMethod, intptr_t ___5_pdwAttr, intptr_t ___6_ppvSigBlob, intptr_t ___7_pcbSigBlob, intptr_t ___8_pulCodeRVA, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_m991E6806B40BDA5FB76207D26B3EA6E703112588(uint32_t ___0_mr, uint32_t* ___1_ptk, Il2CppChar* ___2_szMember, uint32_t ___3_cchMember, uint32_t* ___4_pchMember, intptr_t* ___5_ppvSigBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mB60344A5562BDE26FC6D36A8B8332C02B81D3E9E(uint32_t* ___0_phEnum, uint32_t ___1_td, intptr_t ___2_rProperties, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_m84AD7CB71CC743B956A492A3552F030DBD15363E(uint32_t* ___0_phEnum, uint32_t ___1_td, intptr_t ___2_rEvents, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_m324E64B5E7891770D5E41DAB3CED38C8E6DC3CF7(uint32_t ___0_ev, uint32_t* ___1_pClass, Il2CppChar* ___2_szEvent, uint32_t ___3_cchEvent, uint32_t* ___4_pchEvent, uint32_t* ___5_pdwEventFlags, uint32_t* ___6_ptkEventType, uint32_t* ___7_pmdAddOn, uint32_t* ___8_pmdRemoveOn, uint32_t* ___9_pmdFire, uint32_t* ___10_rmdOtherMethod, uint32_t ___11_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m73AF9164145EEF98A27CEAD68AE89696D8802DFC(uint32_t* ___0_phEnum, uint32_t ___1_mb, uint32_t* ___2_rEventProp, uint32_t ___3_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_mC1C1BE975C52FE0E4A33BE76427FAA04BEEDE8CC(uint32_t ___0_mb, uint32_t ___1_tkEventProp, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_m82BEF5233202F78B64501CACD86AB75A4B8B58AF(uint32_t ___0_td, uint32_t* ___1_pdwPackSize, intptr_t ___2_rFieldOffset, uint32_t ___3_cMax, uint32_t* ___4_pcFieldOffset, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_mF66AF1CA91704F4834BAD4E302D2A2A22D456FB4(uint32_t ___0_tk, intptr_t* ___1_ppvNativeType, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m966A46E321154BEFF702D8AE65E00348A09FD1DF(uint32_t ___0_tk, uint32_t* ___1_pulCodeRVA, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_mD211E233325CA81166BDC469672A2F530C13D7A4(uint32_t ___0_pm, uint32_t* ___1_pdwAction, intptr_t* ___2_ppvPermission, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_m4E7A28C2755BE530F2E47812A8387BB0E5366EAB(uint32_t ___0_mdSig, intptr_t* ___1_ppvSig, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m18B35B5BBB834EE0E737826DBC1AD2D1F6CAF420(uint32_t ___0_mur, Il2CppChar* ___1_szName, uint32_t ___2_cchName, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_m6AA7CA2777C5008449A0C0D03B2B1CFFF3C7ADD1(uint32_t* ___0_phEnum, uint32_t* ___1_rModuleRefs, uint32_t ___2_cmax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m441F2AA549A09B7345BECAFFF4444BB799DC3AD4(uint32_t ___0_typespec, intptr_t* ___1_ppvSig, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m31D57A947ACED822F6267DD7A85B5E2581FB434A(uint32_t ___0_tk, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_m2F949D8A6BCC14AC679A2B875A5B6B3F69DD9876(uint32_t* ___0_phEnum, uint32_t* ___1_rMethods, uint32_t ___2_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m1E2D0282CE6E121D966524737D47A0E54198BC71(uint32_t ___0_stk, Il2CppChar* ___1_szString, uint32_t ___2_cchString, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_m9B17B03B6B31AE63368E1B2410B03B7019531D8A(uint32_t ___0_tk, uint32_t* ___1_pdwMappingFlags, Il2CppChar* ___2_szImportName, uint32_t ___3_cchImportName, uint32_t* ___4_pchImportName, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m07BDED2BC34DAE35BF9E271EAC56458EB9D07BBE(uint32_t* ___0_phEnum, uint32_t* ___1_rSignatures, uint32_t ___2_cmax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m4E85D3D62F6745C072DFD629B4EB111CC84C0454(uint32_t* ___0_phEnum, uint32_t* ___1_rTypeSpecs, uint32_t ___2_cmax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m00D146F142405717EB949A12F76A6A6C5A54A1C1(uint32_t* ___0_phEnum, uint32_t* ___1_rStrings, uint32_t ___2_cmax, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_mCBBFD3190A2B2135CABAC4C8B74D59A8BA56E532(uint32_t ___0_md, uint32_t ___1_ulParamSeq, uint32_t* ___2_pParam) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_m150AAE4F9C8EB7B2ED6407B3C00D40920041C035(uint32_t* ___0_phEnum, uint32_t ___1_tk, uint32_t ___2_tkType, uint32_t* ___3_rCustomAttributes, uint32_t ___4_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_m2C7D85E0C4469CA0B0A22083380C917EB390A7AE(uint32_t ___0_cv, uint32_t* ___1_ptkObj, uint32_t* ___2_ptkType, intptr_t* ___3_ppBlob, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_mB031CA8927A8E8C5A89E0542758FE08D860D94E2(uint32_t ___0_tkResolutionScope, Il2CppChar* ___1_szName, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m705554544233D93420572E09373B3D879028CC74(uint32_t ___0_mb, uint32_t* ___1_pClass, Il2CppChar* ___2_szMember, uint32_t ___3_cchMember, uint32_t* ___4_pchMember, uint32_t* ___5_pdwAttr, intptr_t* ___6_ppvSigBlob, uint32_t* ___7_pcbSigBlob, uint32_t* ___8_pulCodeRVA, uint32_t* ___9_pdwImplFlags, uint32_t* ___10_pdwCPlusTypeFlag, intptr_t* ___11_ppValue, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_m8B4CB0E0AC7300E75BB85B8995CB0A678E16F603(uint32_t ___0_mb, uint32_t* ___1_pClass, Il2CppChar* ___2_szField, uint32_t ___3_cchField, uint32_t* ___4_pchField, uint32_t* ___5_pdwAttr, intptr_t* ___6_ppvSigBlob, uint32_t* ___7_pcbSigBlob, uint32_t* ___8_pdwCPlusTypeFlag, intptr_t* ___9_ppValue, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_m1052916C42674704A3DFC12FBA066257C654157C(uint32_t ___0_prop, uint32_t* ___1_pClass, Il2CppChar* ___2_szProperty, uint32_t ___3_cchProperty, uint32_t* ___4_pchProperty, uint32_t* ___5_pdwPropFlags, intptr_t* ___6_ppvSig, uint32_t* ___7_pbSig, uint32_t* ___8_pdwCPlusTypeFlag, intptr_t* ___9_ppDefaultValue, uint32_t* ___10_pcchDefaultValue, uint32_t* ___11_pmdSetter, uint32_t* ___12_pmdGetter, uint32_t* ___13_rmdOtherMethod, uint32_t ___14_cMax, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_m198461F87BDDAF573B02D64C083F826E1B528321(uint32_t ___0_tk, uint32_t* ___1_pmd, uint32_t* ___2_pulSequence, Il2CppChar* ___3_szName, uint32_t ___4_cchName, uint32_t* ___5_pchName, uint32_t* ___6_pdwAttr, uint32_t* ___7_pdwCPlusTypeFlag, intptr_t* ___8_ppValue, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m917AB8DC144552B8BE73EEE0C033869715834EB5(uint32_t ___0_tkObj, Il2CppChar* ___1_szName, intptr_t* ___2_ppData, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_IsValidToken_mD62AC24BBC10542D87BFBBE4C25C3B4ECAF7FEB4(uint32_t ___0_tk) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mEBA3D1888E36C41231878DF70F5644B3D2808112(uint32_t ___0_tdNestedClass, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_m2ED7F998312F16D32BC3B9371CC90B3B3BAF3C57(intptr_t ___0_pvSig, uint32_t ___1_cbSig, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m3A0FAB8CB8D045EA53B1ED1456F242BD768EEBBD(uint32_t ___0_pd, int32_t* comReturnValue) = 0;
};

// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata

// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Byte

// System.Byte

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.UInt32

// System.UInt32
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
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



// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetModuleProps(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetModuleProps_mCE46E963301C71CB9A9F3EC53EA60476EC1229E0 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___0_szName, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::Save(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_Save_m2758C37F408777679004F165C98BFF99F11ADDCE (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___0_szFile, uint32_t ___1_dwSaveFlags, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SaveToStream(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SaveToStream_m32DE965FA39DDD619D82F59EF423D67234F12E95 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pIStream, uint32_t ___1_dwSaveFlags, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetSaveSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetSaveSize_m30B13D28B24C8CB9E460BB17999D7162CA075494 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_fSave, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineTypeDef(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineTypeDef_mBD6173726A6704E99C96891D10AEFB56E27C0822 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_szTypeDef, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineNestedType(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineNestedType_mBD1DF07C67315171E027F5537BEFD55BE6B80419 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_szTypeDef, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, uint32_t ___4_tdEncloser, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetHandler(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetHandler_m95DE7219A51A433DFA220F76EFD699D82DF806BA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, RuntimeObject* ___0_pUnk, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMethod(System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineMethod_mE94AFE3D216C57DF18AD213A13E215EA0910F90D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, intptr_t ___1_zName, uint32_t ___2_dwMethodFlags, intptr_t ___3_pvSigBlob, uint32_t ___4_cbSigBlob, uint32_t ___5_ulCodeRVA, uint32_t ___6_dwImplFlags, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMethodImpl(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DefineMethodImpl_mD10655AB14FA21A546DE3D8996364EA49680B3DA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, uint32_t ___1_tkBody, uint32_t ___2_tkDecl, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineTypeRefByName(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineTypeRefByName_m3700F2ECD2AB0140C72C6B44B75200D5FBBB6A55 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkResolutionScope, intptr_t ___1_szName, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineImportType(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineImportType_m850CD4A95CE566CCC43B331F6C0392DF000DDF45 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, RuntimeObject* ___3_pImport, uint32_t ___4_tdImport, intptr_t ___5_pAssemEmit, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMemberRef(System.UInt32,System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineMemberRef_m198FAE6EA5419F8C7A868FE059C8CFFB976C4C27 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkImport, String_t* ___1_szName, intptr_t ___2_pvSigBlob, uint32_t ___3_cbSigBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineImportMember(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineImportMember_m6092404810C238E1D85268F1588D214ABA60C0BD (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, RuntimeObject* ___3_pImport, uint32_t ___4_mbMember, intptr_t ___5_pAssemEmit, uint32_t ___6_tkParent, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineEvent(System.UInt32,System.String,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineEvent_mA48F3BB2063BF853A34B7E61A2807474362E81CF (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szEvent, uint32_t ___2_dwEventFlags, uint32_t ___3_tkEventType, uint32_t ___4_mdAddOn, uint32_t ___5_mdRemoveOn, uint32_t ___6_mdFire, intptr_t ___7_rmdOtherMethods, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetClassLayout(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetClassLayout_m4B86699A26A90D6AACC61583732C20D8BE1FA62F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, uint32_t ___1_dwPackSize, intptr_t ___2_rFieldOffsets, uint32_t ___3_ulClassSize, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteClassLayout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteClassLayout_m8186ADB05C1E5276A25A3B1675CEC5FCD39120AD (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldMarshal(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldMarshal_mE3C10867C43645A469038FD2EE2908AD6137E10F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, intptr_t ___1_pvNativeType, uint32_t ___2_cbNativeType, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteFieldMarshal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteFieldMarshal_m3CD03AED762D31C1AA98611E7194E50F8E30C786 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefinePermissionSet(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefinePermissionSet_mA2CA877A21684F9D3581CB82968EC4A6154ADEE8 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t ___1_dwAction, intptr_t ___2_pvPermission, uint32_t ___3_cbPermission, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetRVA(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetRVA_m0EDF65A51965BE5CD1748FD550C947F9B629A5DB (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_md, uint32_t ___1_ulRVA, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTokenFromSig(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTokenFromSig_mDB0748D3B0392F1B7C62766AF8314BFFA4A729A5 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pvSig, uint32_t ___1_cbSig, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineModuleRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineModuleRef_mFD84C88DF9946045DEC5BBC1C18C45516FAC88B7 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___0_szName, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetParent(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetParent_mDD08ED17C9832F8E79CDF64664681C8D41BC1439 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mr, uint32_t ___1_tk, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTokenFromTypeSpec(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTokenFromTypeSpec_m75D90A94493C469887FD643C6711EE98949841D7 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pvSig, uint32_t ___1_cbSig, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SaveToMemory(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SaveToMemory_m1BB314516E225848BC5AC3ABF12A29D3147E14DC (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pbData, uint32_t ___1_cbData, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineUserString(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineUserString_mE0304D32360FFCA0882AABC1E5F5320A855F16FB (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___0_szString, uint32_t ___1_cchString, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteToken_m81C6FC9D77ED80054AE1B78F4D1DEBB3B8D0ABEB (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkObj, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetMethodProps(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetMethodProps_m0523F9671BEDFDADD3B5B9D61B1951695457E237 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_md, uint32_t ___1_dwMethodFlags, uint32_t ___2_ulCodeRVA, uint32_t ___3_dwImplFlags, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetTypeDefProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetTypeDefProps_m446AEB656E77EDF6BF4DAC5D753891033AAB8500 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetEventProps(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetEventProps_m97F4B0F98DBCC146C65D6C5C1152B777FAB9AE3D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_ev, uint32_t ___1_dwEventFlags, uint32_t ___2_tkEventType, uint32_t ___3_mdAddOn, uint32_t ___4_mdRemoveOn, uint32_t ___5_mdFire, intptr_t ___6_rmdOtherMethods, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPermissionSetProps(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_SetPermissionSetProps_m009D2504ED3AD6EAD6DD2A6D4DEE5DF19377440E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t ___1_dwAction, intptr_t ___2_pvPermission, uint32_t ___3_cbPermission, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefinePinvokeMap(System.UInt32,System.UInt32,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DefinePinvokeMap_mB95420D7A2808959DF8651C61D26EC2EA98E2F13 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t ___1_dwMappingFlags, String_t* ___2_szImportName, uint32_t ___3_mrImportDLL, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPinvokeMap(System.UInt32,System.UInt32,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetPinvokeMap_m33DB31CFFC151A89C09728E9244191EA16A057CA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t ___1_dwMappingFlags, String_t* ___2_szImportName, uint32_t ___3_mrImportDLL, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeletePinvokeMap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeletePinvokeMap_m7A596DA14192526B84A2356464BBDEBE155E9060 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineCustomAttribute(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineCustomAttribute_m94311B28536622EF08A0FD191D88986D631AC0F0 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkObj, uint32_t ___1_tkType, intptr_t ___2_pCustomAttribute, uint32_t ___3_cbCustomAttribute, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetCustomAttributeValue(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetCustomAttributeValue_m06C22B847A09C30DB8B968805165D5A701CE8E80 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_pcv, intptr_t ___1_pCustomAttribute, uint32_t ___2_cbCustomAttribute, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineField(System.UInt32,System.String,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineField_m2DFF9242A88F1C1BA714EDD9C7FCB41980938A67 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szName, uint32_t ___2_dwFieldFlags, intptr_t ___3_pvSigBlob, uint32_t ___4_cbSigBlob, uint32_t ___5_dwCPlusTypeFlag, intptr_t ___6_pValue, uint32_t ___7_cchValue, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineProperty(System.UInt32,System.String,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineProperty_m167902C6B1933BD66A58E844F041F3CC98221629 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szProperty, uint32_t ___2_dwPropFlags, intptr_t ___3_pvSig, uint32_t ___4_cbSig, uint32_t ___5_dwCPlusTypeFlag, intptr_t ___6_pValue, uint32_t ___7_cchValue, uint32_t ___8_mdSetter, uint32_t ___9_mdGetter, intptr_t ___10_rmdOtherMethods, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineParam(System.UInt32,System.UInt32,System.String,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineParam_mE54F47B775580576FA760812D70B20959A64E065 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_md, uint32_t ___1_ulParamSeq, String_t* ___2_szName, uint32_t ___3_dwParamFlags, uint32_t ___4_dwCPlusTypeFlag, intptr_t ___5_pValue, uint32_t ___6_cchValue, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldProps_mB13583DE91C748F7E6F377A00DD3ABD32715BA7B (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_fd, uint32_t ___1_dwFieldFlags, uint32_t ___2_dwCPlusTypeFlag, intptr_t ___3_pValue, uint32_t ___4_cchValue, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPropertyProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetPropertyProps_mD51FA31D3E50BC225FBBF20F9BA506929A30E22E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_pr, uint32_t ___1_dwPropFlags, uint32_t ___2_dwCPlusTypeFlag, intptr_t ___3_pValue, uint32_t ___4_cchValue, uint32_t ___5_mdSetter, uint32_t ___6_mdGetter, intptr_t ___7_rmdOtherMethods, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetParamProps(System.UInt32,System.String,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetParamProps_mDB8C3FF8DB7539732D428A4D525910C73443989C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_pd, String_t* ___1_szName, uint32_t ___2_dwParamFlags, uint32_t ___3_dwCPlusTypeFlag, intptr_t ___4_pValue, uint32_t ___5_cchValue, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineSecurityAttributeSet(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineSecurityAttributeSet_m5218825037BF1F696CFA8B37480CE6509046F754 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkObj, intptr_t ___1_rSecAttrs, uint32_t ___2_cSecAttrs, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ApplyEditAndContinue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_ApplyEditAndContinue_mFF75718802A6E58C2DCED0E052BB3E148A78A10C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, RuntimeObject* ___0_pImport, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::TranslateSigWithScope(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.IntPtr,System.UInt32,System.IntPtr,ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_TranslateSigWithScope_mA87F28C79E5076B75175E1E49AA6CEF5137BC2EC (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, RuntimeObject* ___3_import, intptr_t ___4_pbSigBlob, uint32_t ___5_cbSigBlob, intptr_t ___6_pAssemEmit, RuntimeObject* ___7_emit, intptr_t ___8_pvTranslatedSig, uint32_t ___9_cbTranslatedSigMax, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetMethodImplFlags(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetMethodImplFlags_mC5BF4B22764946E606A094286B0489560F29F70E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_md, uint32_t ___1_dwImplFlags, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldRVA(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldRVA_m669CDE4CADAFBC3869DBCE3F99758EB78C9B7A03 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_fd, uint32_t ___1_ulRVA, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::Merge(ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_Merge_m5C313FE69A9CF5C9F18AE94B3C7F29B69C259679 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, RuntimeObject* ___0_pImport, intptr_t ___1_pHostMapToken, RuntimeObject* ___2_pHandler, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::MergeEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_MergeEnd_m8F7BFA31EEED280BA75CCD1DB5318B51394EA36C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::CloseEnum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_CloseEnum_mB517553756918251874C744D9A4B422D03BF013D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_hEnum, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::CountEnum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_CountEnum_mBEC6C0E435DA4449D9D52A9A3DD8CB58B24581A3 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_hEnum, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ResetEnum(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_ResetEnum_mED68573292C20DCC9D05F8C646007DFD46B2FECE (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_hEnum, uint32_t ___1_ulPos, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeDefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeDefs_m2A6657D77BA9380C62AD54E2E2E6FA0D1A19FA7F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rTypeDefs, uint32_t ___2_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumInterfaceImpls(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumInterfaceImpls_m9F3A2A1A353DCE48C5A86CC8CF6D2B9C92AEB47A (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_td, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rImpls, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeRefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeRefs_m7D4AC70083F349902E95B6A76DCB5965A46C0E16 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rTypeRefs, uint32_t ___2_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindTypeDefByName(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindTypeDefByName_mB153E2C25B9B16DABBF8E3C9C1F83A64F073E512 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___0_szTypeDef, uint32_t ___1_tkEnclosingClass, const RuntimeMethod* method) ;
// System.Guid ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetScopeProps(System.Text.StringBuilder,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ModuleMetadata_GetScopeProps_mB192EB125BC0D1D87E4BC0287775FFBF9C6D904D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, StringBuilder_t* ___0_szName, uint32_t ___1_cchName, uint32_t* ___2_pchName, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetModuleFromScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetModuleFromScope_mD32437F4034B07A96025312FC32C7AEF12DFBCF1 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeDefProps(System.UInt32,System.IntPtr,System.UInt32,System.UInt32&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeDefProps_m9BC8D3FAB79A7ECD1F9B0855741F20DAC31C23ED (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, intptr_t ___1_szTypeDef, uint32_t ___2_cchTypeDef, uint32_t* ___3_pchTypeDef, intptr_t ___4_pdwTypeDefFlags, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetInterfaceImplProps(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetInterfaceImplProps_m9BE32202360432DB9C04BA3BF075DFA0A3DE62AF (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_iiImpl, uint32_t* ___1_pClass, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeRefProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeRefProps_m9C663823EAF20DDD434C963B3FDE5FBD08C7976F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tr, uint32_t* ___1_ptkResolutionScope, StringBuilder_t* ___2_szName, uint32_t ___3_cchName, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ResolveTypeRef(System.UInt32,System.Guid&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_ResolveTypeRef_m204BBB70AAD1921BF1FBCCA4B274A1AC3233225E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tr, Guid_t* ___1_riid, RuntimeObject** ___2_ppIScope, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMembers(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMembers_m07B0AA12B8E3C05B7A13FB6FA9114BE390D1F6B4 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_cl, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rMembers, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMembersWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMembersWithName_mD171E228467EA6C345067A4B44F6069E91D84509 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_cl, String_t* ___2_szName, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_rMembers, uint32_t ___4_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethods(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethods_mA5FFD0DCFDF1D8E0CFC7F2356BA2B1A8BF8A59AF (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_cl, intptr_t ___2_rMethods, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodsWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodsWithName_m51DCF5C180142A0D88D255078304B07C96B474EC (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_cl, String_t* ___2_szName, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_rMethods, uint32_t ___4_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumFields(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumFields_mD9E1D6DC12C1DD88D39EF5FBA0F5FD982EEF4A49 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_cl, intptr_t ___2_rFields, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumFieldsWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumFieldsWithName_m836DC6B4D5A03CF429F641A42D8C87E00CEA7F08 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_cl, String_t* ___2_szName, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_rFields, uint32_t ___4_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumParams(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumParams_m9486735D04CD910E895FDA2E9EB8AAF12EF9E686 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_mb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rParams, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMemberRefs(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMemberRefs_m8F2284665D71E8A99D1065ADF82F3A664492CD98 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_tkParent, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rMemberRefs, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodImpls(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodImpls_m4B19F3D0092E4CE661FC01A808089E72E79F2037 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_td, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rMethodBody, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_rMethodDecl, uint32_t ___4_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumPermissionSets(System.UInt32&,System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumPermissionSets_m88682A7FA4F22E3887B04E47C3C21FB8136CBD4D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_tk, uint32_t ___2_dwActions, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_rPermission, uint32_t ___4_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMember(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMember_m923256560837C0A205A63BF75B13B7BE70F3ED68 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szName, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMethod(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMethod_m9FDCA4F8FB3E6F349800A3220B17960EB4F06828 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szName, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindField(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindField_m584ABF30B71A04D3F3EF123DBAF321D660F90D52 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szName, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMemberRef(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMemberRef_m033FEF39C37D75F3B290FE3333AD8A3E1638A26F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, String_t* ___1_szName, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMethodProps(System.UInt32,System.UInt32&,System.IntPtr,System.UInt32,System.UInt32&,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMethodProps_mE40BA9931085101D0AB62A2457E49D4F7D95A6F8 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mb, uint32_t* ___1_pClass, intptr_t ___2_szMethod, uint32_t ___3_cchMethod, uint32_t* ___4_pchMethod, intptr_t ___5_pdwAttr, intptr_t ___6_ppvSigBlob, intptr_t ___7_pcbSigBlob, intptr_t ___8_pulCodeRVA, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMemberRefProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMemberRefProps_mF81334E0100448943EB3DBB7F846EF74996EA51F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mr, uint32_t* ___1_ptk, StringBuilder_t* ___2_szMember, uint32_t ___3_cchMember, uint32_t* ___4_pchMember, intptr_t* ___5_ppvSigBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumProperties(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumProperties_mF196AD10419823D5407DD5DEBAE744A2C5BE4886 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_td, intptr_t ___2_rProperties, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumEvents(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumEvents_mC2CF18857D166559E9CBCF51BCBB237FF4EE55AD (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_td, intptr_t ___2_rEvents, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetEventProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetEventProps_mB6D640E0CE3B97AA01A40582B8B755F1DD7A89DA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_ev, uint32_t* ___1_pClass, StringBuilder_t* ___2_szEvent, uint32_t ___3_cchEvent, uint32_t* ___4_pchEvent, uint32_t* ___5_pdwEventFlags, uint32_t* ___6_ptkEventType, uint32_t* ___7_pmdAddOn, uint32_t* ___8_pmdRemoveOn, uint32_t* ___9_pmdFire, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___10_rmdOtherMethod, uint32_t ___11_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodSemantics(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodSemantics_mDB47921155483623AC3B6A86B4B72526A1ACA846 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_mb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rEventProp, uint32_t ___3_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMethodSemantics(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMethodSemantics_m5BED806CE50A4605B7FF39B702704FE7534CACF0 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mb, uint32_t ___1_tkEventProp, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetClassLayout(System.UInt32,System.UInt32&,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetClassLayout_m663BC6556C6CB6F12D13E425E1B69F77EABB6F35 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_td, uint32_t* ___1_pdwPackSize, intptr_t ___2_rFieldOffset, uint32_t ___3_cMax, uint32_t* ___4_pcFieldOffset, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetFieldMarshal(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetFieldMarshal_mE0986F50E3C130603817345A4F3ADF9B47F1FCD5 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, intptr_t* ___1_ppvNativeType, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetRVA(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetRVA_m8DB3C662268009E449B7D75BC3A4B30402222818 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t* ___1_pulCodeRVA, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPermissionSetProps(System.UInt32,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPermissionSetProps_m09653A469FC719751ED854A130453F53C43208A7 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_pm, uint32_t* ___1_pdwAction, intptr_t* ___2_ppvPermission, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetSigFromToken(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetSigFromToken_m724A75B606FCC4ACCB70E8CA0DCBEDB3DD613F23 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mdSig, intptr_t* ___1_ppvSig, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetModuleRefProps(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetModuleRefProps_mE1F146F5740FED57A267FDB72260DC65790B0911 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mur, StringBuilder_t* ___1_szName, uint32_t ___2_cchName, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumModuleRefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumModuleRefs_m8D62524559F44EA421928728CFC992F6F6B046B9 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rModuleRefs, uint32_t ___2_cmax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeSpecFromToken(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeSpecFromToken_m2B449BFAD118FA5AA76D3C78975CFCBC87641866 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_typespec, intptr_t* ___1_ppvSig, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNameFromToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNameFromToken_m6BA516BE418E4332F1C435938E4BEF1DD17B5F3A (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumUnresolvedMethods(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumUnresolvedMethods_m3A6F207459B66B6864E29F30AE8B7B82ABC1174F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rMethods, uint32_t ___2_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetUserString(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetUserString_m3CD2D5827F947F26A3A25B6F6446C6DA9595D4E5 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_stk, StringBuilder_t* ___1_szString, uint32_t ___2_cchString, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPinvokeMap(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPinvokeMap_m959C1E8D69755B350C530C219489228B946E0C73 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t* ___1_pdwMappingFlags, StringBuilder_t* ___2_szImportName, uint32_t ___3_cchImportName, uint32_t* ___4_pchImportName, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumSignatures(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumSignatures_m244A3353FF53F10E6E2544BE10C144D4D03E6607 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rSignatures, uint32_t ___2_cmax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeSpecs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeSpecs_m6C50ADE4D30480365A419A989C541F087D9BEA6F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rTypeSpecs, uint32_t ___2_cmax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumUserStrings(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumUserStrings_m7CBA61DB30CDE754E6944A5BF6600E34DFDF4241 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rStrings, uint32_t ___2_cmax, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetParamForMethodIndex(System.UInt32,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleMetadata_GetParamForMethodIndex_m789576602B44A5FFB3D4FD33C21B31BC26D52560 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_md, uint32_t ___1_ulParamSeq, uint32_t* ___2_pParam, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumCustomAttributes(System.UInt32&,System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumCustomAttributes_m6634A3B66B71BE5ECEB87A00EDAC1CB248E74987 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___0_phEnum, uint32_t ___1_tk, uint32_t ___2_tkType, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_rCustomAttributes, uint32_t ___4_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetCustomAttributeProps(System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetCustomAttributeProps_m4EE1C3F0B81A3C60E772DDC4DABB4C33E24C9FD1 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_cv, uint32_t* ___1_ptkObj, uint32_t* ___2_ptkType, intptr_t* ___3_ppBlob, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindTypeRef(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindTypeRef_m2B092E2C9EEB524CB9313DA55717BE10E1AAD231 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkResolutionScope, String_t* ___1_szName, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMemberProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMemberProps_mE84578A3ADCE3EEAD5A69A2D66D241ABAF40F453 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mb, uint32_t* ___1_pClass, StringBuilder_t* ___2_szMember, uint32_t ___3_cchMember, uint32_t* ___4_pchMember, uint32_t* ___5_pdwAttr, intptr_t* ___6_ppvSigBlob, uint32_t* ___7_pcbSigBlob, uint32_t* ___8_pulCodeRVA, uint32_t* ___9_pdwImplFlags, uint32_t* ___10_pdwCPlusTypeFlag, intptr_t* ___11_ppValue, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetFieldProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetFieldProps_m107F45370E062093334EE961DF6180C746560694 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_mb, uint32_t* ___1_pClass, StringBuilder_t* ___2_szField, uint32_t ___3_cchField, uint32_t* ___4_pchField, uint32_t* ___5_pdwAttr, intptr_t* ___6_ppvSigBlob, uint32_t* ___7_pcbSigBlob, uint32_t* ___8_pdwCPlusTypeFlag, intptr_t* ___9_ppValue, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPropertyProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPropertyProps_m20A20481F4A024E7A0EB3A766AD3EA52BE3C6D10 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_prop, uint32_t* ___1_pClass, StringBuilder_t* ___2_szProperty, uint32_t ___3_cchProperty, uint32_t* ___4_pchProperty, uint32_t* ___5_pdwPropFlags, intptr_t* ___6_ppvSig, uint32_t* ___7_pbSig, uint32_t* ___8_pdwCPlusTypeFlag, intptr_t* ___9_ppDefaultValue, uint32_t* ___10_pcchDefaultValue, uint32_t* ___11_pmdSetter, uint32_t* ___12_pmdGetter, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___13_rmdOtherMethod, uint32_t ___14_cMax, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetParamProps(System.UInt32,System.UInt32&,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetParamProps_m28585EEFB3DF1A629B9ABD023250123AAE9CD90F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, uint32_t* ___1_pmd, uint32_t* ___2_pulSequence, StringBuilder_t* ___3_szName, uint32_t ___4_cchName, uint32_t* ___5_pchName, uint32_t* ___6_pdwAttr, uint32_t* ___7_pdwCPlusTypeFlag, intptr_t* ___8_ppValue, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetCustomAttributeByName(System.UInt32,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetCustomAttributeByName_mF8B0A6D4827069ED3E022BA30A18D4683FF15E23 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tkObj, String_t* ___1_szName, intptr_t* ___2_ppData, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::IsValidToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleMetadata_IsValidToken_m998BA35F4BB592150050AC80174D326AEDE7AE82 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tk, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNestedClassProps(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNestedClassProps_mFD67FE2CCE2F314EE0C795FE79F1165C0FB75EE3 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_tdNestedClass, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNativeCallConvFromSig(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNativeCallConvFromSig_m0E79A248E0EB746359069B461EB6FC2CF9AC8321 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___0_pvSig, uint32_t ___1_cbSig, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::IsGlobal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleMetadata_IsGlobal_m884DE62EFEA9B313BF83F93AD79B73148716123C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___0_pd, const RuntimeMethod* method) ;

// COM Callable Wrapper for ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper>, IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6
{
	inline ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_mC840D267A76322DADE1DEDE3FBFFF958E62FB11B(Il2CppChar* ___0_szName) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_szName' to managed representation
		String_t* ____0_szName_unmarshaled = NULL;
		____0_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_szName);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetModuleProps_mCE46E963301C71CB9A9F3EC53EA60476EC1229E0(__thisValue, ____0_szName_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_mD7DE1DBE869B25B19E3C61159D8D3B8D9E823361(Il2CppChar* ___0_szFile, uint32_t ___1_dwSaveFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_szFile' to managed representation
		String_t* ____0_szFile_unmarshaled = NULL;
		____0_szFile_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_szFile);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_Save_m2758C37F408777679004F165C98BFF99F11ADDCE(__thisValue, ____0_szFile_unmarshaled, ___1_dwSaveFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_mF0B30D2FEA42E410D07AD074811C750873A83771(intptr_t ___0_pIStream, uint32_t ___1_dwSaveFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SaveToStream_m32DE965FA39DDD619D82F59EF423D67234F12E95(__thisValue, ___0_pIStream, ___1_dwSaveFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_mB411D8C978902BD04F8A5070DEA72ECD43966D6D(uint32_t ___0_fSave, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetSaveSize_m30B13D28B24C8CB9E460BB17999D7162CA075494(__thisValue, ___0_fSave, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m30F3731627CE239DD393E9FBA8EB40B94E15BBAA(intptr_t ___0_szTypeDef, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineTypeDef_mBD6173726A6704E99C96891D10AEFB56E27C0822(__thisValue, ___0_szTypeDef, ___1_dwTypeDefFlags, ___2_tkExtends, ___3_rtkImplements, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m99A22EF3C693256D2E3FD9968FF91C1692870352(intptr_t ___0_szTypeDef, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements, uint32_t ___4_tdEncloser, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineNestedType_mBD1DF07C67315171E027F5537BEFD55BE6B80419(__thisValue, ___0_szTypeDef, ___1_dwTypeDefFlags, ___2_tkExtends, ___3_rtkImplements, ___4_tdEncloser, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_m9598AB0ECED5D385E9C2A5BF762BBE4B769143C4(Il2CppIUnknown* ___0_pUnk) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_pUnk' to managed representation
		RuntimeObject* ____0_pUnk_unmarshaled = NULL;
		if (___0_pUnk != NULL)
		{
			____0_pUnk_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___0_pUnk, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_pUnk_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_pUnk_unmarshaled), Il2CppIUnknown::IID, ___0_pUnk);
			}
		}
		else
		{
			____0_pUnk_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetHandler_m95DE7219A51A433DFA220F76EFD699D82DF806BA(__thisValue, ____0_pUnk_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m6822B9D4B1A925EF7316AC820A5B311070E4FA57(uint32_t ___0_td, intptr_t ___1_zName, uint32_t ___2_dwMethodFlags, intptr_t ___3_pvSigBlob, uint32_t ___4_cbSigBlob, uint32_t ___5_ulCodeRVA, uint32_t ___6_dwImplFlags, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineMethod_mE94AFE3D216C57DF18AD213A13E215EA0910F90D(__thisValue, ___0_td, ___1_zName, ___2_dwMethodFlags, ___3_pvSigBlob, ___4_cbSigBlob, ___5_ulCodeRVA, ___6_dwImplFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_mCB1E4D7121893198D517483DE0570309DC55149E(uint32_t ___0_td, uint32_t ___1_tkBody, uint32_t ___2_tkDecl) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DefineMethodImpl_mD10655AB14FA21A546DE3D8996364EA49680B3DA(__thisValue, ___0_td, ___1_tkBody, ___2_tkDecl, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_mA71AF6950531F406E5C70CB1B7E283B210A3BDBA(uint32_t ___0_tkResolutionScope, intptr_t ___1_szName, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineTypeRefByName_m3700F2ECD2AB0140C72C6B44B75200D5FBBB6A55(__thisValue, ___0_tkResolutionScope, ___1_szName, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_mB05AC384B3C4B20E304AB7227425B2972323A22E(intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___3_pImport, uint32_t ___4_tdImport, intptr_t ___5_pAssemEmit, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___3_pImport' to managed representation
		RuntimeObject* ____3_pImport_unmarshaled = NULL;
		if (___3_pImport != NULL)
		{
			____3_pImport_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___3_pImport, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____3_pImport_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____3_pImport_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___3_pImport);
			}
		}
		else
		{
			____3_pImport_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineImportType_m850CD4A95CE566CCC43B331F6C0392DF000DDF45(__thisValue, ___0_pAssemImport, ___1_pbHashValue, ___2_cbHashValue, ____3_pImport_unmarshaled, ___4_tdImport, ___5_pAssemEmit, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_mFDC9D352D6E542EF7C7AE640AABD62E401536A90(uint32_t ___0_tkImport, Il2CppChar* ___1_szName, intptr_t ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineMemberRef_m198FAE6EA5419F8C7A868FE059C8CFFB976C4C27(__thisValue, ___0_tkImport, ____1_szName_unmarshaled, ___2_pvSigBlob, ___3_cbSigBlob, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_m25879DCE4C0919C40E3BC2BFCE14B56316F5F2B4(intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___3_pImport, uint32_t ___4_mbMember, intptr_t ___5_pAssemEmit, uint32_t ___6_tkParent, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___3_pImport' to managed representation
		RuntimeObject* ____3_pImport_unmarshaled = NULL;
		if (___3_pImport != NULL)
		{
			____3_pImport_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___3_pImport, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____3_pImport_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____3_pImport_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___3_pImport);
			}
		}
		else
		{
			____3_pImport_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineImportMember_m6092404810C238E1D85268F1588D214ABA60C0BD(__thisValue, ___0_pAssemImport, ___1_pbHashValue, ___2_cbHashValue, ____3_pImport_unmarshaled, ___4_mbMember, ___5_pAssemEmit, ___6_tkParent, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mB315268B4BFA33C370554195B8C23EB2EFBD814B(uint32_t ___0_td, Il2CppChar* ___1_szEvent, uint32_t ___2_dwEventFlags, uint32_t ___3_tkEventType, uint32_t ___4_mdAddOn, uint32_t ___5_mdRemoveOn, uint32_t ___6_mdFire, intptr_t ___7_rmdOtherMethods, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szEvent' to managed representation
		String_t* ____1_szEvent_unmarshaled = NULL;
		____1_szEvent_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szEvent);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineEvent_mA48F3BB2063BF853A34B7E61A2807474362E81CF(__thisValue, ___0_td, ____1_szEvent_unmarshaled, ___2_dwEventFlags, ___3_tkEventType, ___4_mdAddOn, ___5_mdRemoveOn, ___6_mdFire, ___7_rmdOtherMethods, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_mCC56685D20CCE7AFBEA9214C34B5507EA7AE8AFB(uint32_t ___0_td, uint32_t ___1_dwPackSize, intptr_t ___2_rFieldOffsets, uint32_t ___3_ulClassSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetClassLayout_m4B86699A26A90D6AACC61583732C20D8BE1FA62F(__thisValue, ___0_td, ___1_dwPackSize, ___2_rFieldOffsets, ___3_ulClassSize, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m6CC8D7F911CD44CC3B21B12155D78E0659490558(uint32_t ___0_td) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeleteClassLayout_m8186ADB05C1E5276A25A3B1675CEC5FCD39120AD(__thisValue, ___0_td, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_m7116BAD13B4048ED1E7B9FEBDF07922C43B3C0A3(uint32_t ___0_tk, intptr_t ___1_pvNativeType, uint32_t ___2_cbNativeType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetFieldMarshal_mE3C10867C43645A469038FD2EE2908AD6137E10F(__thisValue, ___0_tk, ___1_pvNativeType, ___2_cbNativeType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_mD1944C516D21C884A1DA3F807599C1B9BCB33765(uint32_t ___0_tk) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeleteFieldMarshal_m3CD03AED762D31C1AA98611E7194E50F8E30C786(__thisValue, ___0_tk, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_m99ED99DD439D590E468869301EF8ED4189D32EC8(uint32_t ___0_tk, uint32_t ___1_dwAction, intptr_t ___2_pvPermission, uint32_t ___3_cbPermission, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefinePermissionSet_mA2CA877A21684F9D3581CB82968EC4A6154ADEE8(__thisValue, ___0_tk, ___1_dwAction, ___2_pvPermission, ___3_cbPermission, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m74ED3B6A540A726DFEF4FB08E3DA3D23DDF2A297(uint32_t ___0_md, uint32_t ___1_ulRVA) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetRVA_m0EDF65A51965BE5CD1748FD550C947F9B629A5DB(__thisValue, ___0_md, ___1_ulRVA, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_m16B82D4C5EC78EA6FE384F3BEDE55EBB429628AE(intptr_t ___0_pvSig, uint32_t ___1_cbSig, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTokenFromSig_mDB0748D3B0392F1B7C62766AF8314BFFA4A729A5(__thisValue, ___0_pvSig, ___1_cbSig, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m6A25DAD7A4B992F691976E14A40618871550B241(Il2CppChar* ___0_szName, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_szName' to managed representation
		String_t* ____0_szName_unmarshaled = NULL;
		____0_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineModuleRef_mFD84C88DF9946045DEC5BBC1C18C45516FAC88B7(__thisValue, ____0_szName_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_mCC3CA4223E008E542A474CC7456F732810377E17(uint32_t ___0_mr, uint32_t ___1_tk) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetParent_mDD08ED17C9832F8E79CDF64664681C8D41BC1439(__thisValue, ___0_mr, ___1_tk, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_mC0D2C76EF9FFAFA0D03736D2A0F0E472039F04EA(intptr_t ___0_pvSig, uint32_t ___1_cbSig, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTokenFromTypeSpec_m75D90A94493C469887FD643C6711EE98949841D7(__thisValue, ___0_pvSig, ___1_cbSig, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_m7FEAB7C1D1E8B0EE3E48BDB569A3EA7C30E614F2(intptr_t ___0_pbData, uint32_t ___1_cbData) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SaveToMemory_m1BB314516E225848BC5AC3ABF12A29D3147E14DC(__thisValue, ___0_pbData, ___1_cbData, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_mAE24A2C7A880E41BD78283C15DC86C6F4BFEF83F(Il2CppChar* ___0_szString, uint32_t ___1_cchString, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_szString' to managed representation
		String_t* ____0_szString_unmarshaled = NULL;
		____0_szString_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_szString);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineUserString_mE0304D32360FFCA0882AABC1E5F5320A855F16FB(__thisValue, ____0_szString_unmarshaled, ___1_cchString, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_mC5D88FC045064A14C25E50E37DAA7CF575735784(uint32_t ___0_tkObj) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeleteToken_m81C6FC9D77ED80054AE1B78F4D1DEBB3B8D0ABEB(__thisValue, ___0_tkObj, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m7F6EC119814599A6E4F2A4A2A73187323219CC80(uint32_t ___0_md, uint32_t ___1_dwMethodFlags, uint32_t ___2_ulCodeRVA, uint32_t ___3_dwImplFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetMethodProps_m0523F9671BEDFDADD3B5B9D61B1951695457E237(__thisValue, ___0_md, ___1_dwMethodFlags, ___2_ulCodeRVA, ___3_dwImplFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m54EC5EEF2B606C92D069BBBF50760BAFE7BCA364(uint32_t ___0_td, uint32_t ___1_dwTypeDefFlags, uint32_t ___2_tkExtends, intptr_t ___3_rtkImplements) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetTypeDefProps_m446AEB656E77EDF6BF4DAC5D753891033AAB8500(__thisValue, ___0_td, ___1_dwTypeDefFlags, ___2_tkExtends, ___3_rtkImplements, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m328BD4765E26BBA8895C57243E6E056BCFEFF0A0(uint32_t ___0_ev, uint32_t ___1_dwEventFlags, uint32_t ___2_tkEventType, uint32_t ___3_mdAddOn, uint32_t ___4_mdRemoveOn, uint32_t ___5_mdFire, intptr_t ___6_rmdOtherMethods) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetEventProps_m97F4B0F98DBCC146C65D6C5C1152B777FAB9AE3D(__thisValue, ___0_ev, ___1_dwEventFlags, ___2_tkEventType, ___3_mdAddOn, ___4_mdRemoveOn, ___5_mdFire, ___6_rmdOtherMethods, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_mACC0013B0012A5F935FAFAEB2B432C73EACAF2E7(uint32_t ___0_tk, uint32_t ___1_dwAction, intptr_t ___2_pvPermission, uint32_t ___3_cbPermission, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_SetPermissionSetProps_m009D2504ED3AD6EAD6DD2A6D4DEE5DF19377440E(__thisValue, ___0_tk, ___1_dwAction, ___2_pvPermission, ___3_cbPermission, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_mB58EBD77CA3E28BB2407111DE5AF36758AF4AF25(uint32_t ___0_tk, uint32_t ___1_dwMappingFlags, Il2CppChar* ___2_szImportName, uint32_t ___3_mrImportDLL) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szImportName' to managed representation
		String_t* ____2_szImportName_unmarshaled = NULL;
		____2_szImportName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_szImportName);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DefinePinvokeMap_mB95420D7A2808959DF8651C61D26EC2EA98E2F13(__thisValue, ___0_tk, ___1_dwMappingFlags, ____2_szImportName_unmarshaled, ___3_mrImportDLL, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_mB24D05CA82DD5D085367ADFFD14E3586C55E9022(uint32_t ___0_tk, uint32_t ___1_dwMappingFlags, Il2CppChar* ___2_szImportName, uint32_t ___3_mrImportDLL) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szImportName' to managed representation
		String_t* ____2_szImportName_unmarshaled = NULL;
		____2_szImportName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_szImportName);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetPinvokeMap_m33DB31CFFC151A89C09728E9244191EA16A057CA(__thisValue, ___0_tk, ___1_dwMappingFlags, ____2_szImportName_unmarshaled, ___3_mrImportDLL, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_mCFD654830FD481AEE52B7F6B826264375BF34069(uint32_t ___0_tk) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeletePinvokeMap_m7A596DA14192526B84A2356464BBDEBE155E9060(__thisValue, ___0_tk, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_mFCA5ADB87A1D4990B3CE82A0731A834843042ADC(uint32_t ___0_tkObj, uint32_t ___1_tkType, intptr_t ___2_pCustomAttribute, uint32_t ___3_cbCustomAttribute, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineCustomAttribute_m94311B28536622EF08A0FD191D88986D631AC0F0(__thisValue, ___0_tkObj, ___1_tkType, ___2_pCustomAttribute, ___3_cbCustomAttribute, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m69FBF2BB93E17B190F24FEB694CDF863EE45E9FD(uint32_t ___0_pcv, intptr_t ___1_pCustomAttribute, uint32_t ___2_cbCustomAttribute) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetCustomAttributeValue_m06C22B847A09C30DB8B968805165D5A701CE8E80(__thisValue, ___0_pcv, ___1_pCustomAttribute, ___2_cbCustomAttribute, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_m6139CB67CE6CE32E38867B3043A7A1F6D89DB3F0(uint32_t ___0_td, Il2CppChar* ___1_szName, uint32_t ___2_dwFieldFlags, intptr_t ___3_pvSigBlob, uint32_t ___4_cbSigBlob, uint32_t ___5_dwCPlusTypeFlag, intptr_t ___6_pValue, uint32_t ___7_cchValue, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineField_m2DFF9242A88F1C1BA714EDD9C7FCB41980938A67(__thisValue, ___0_td, ____1_szName_unmarshaled, ___2_dwFieldFlags, ___3_pvSigBlob, ___4_cbSigBlob, ___5_dwCPlusTypeFlag, ___6_pValue, ___7_cchValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m0A994B3C50886C213EB4E54F20E13DC96E33B1BC(uint32_t ___0_td, Il2CppChar* ___1_szProperty, uint32_t ___2_dwPropFlags, intptr_t ___3_pvSig, uint32_t ___4_cbSig, uint32_t ___5_dwCPlusTypeFlag, intptr_t ___6_pValue, uint32_t ___7_cchValue, uint32_t ___8_mdSetter, uint32_t ___9_mdGetter, intptr_t ___10_rmdOtherMethods, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szProperty' to managed representation
		String_t* ____1_szProperty_unmarshaled = NULL;
		____1_szProperty_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szProperty);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineProperty_m167902C6B1933BD66A58E844F041F3CC98221629(__thisValue, ___0_td, ____1_szProperty_unmarshaled, ___2_dwPropFlags, ___3_pvSig, ___4_cbSig, ___5_dwCPlusTypeFlag, ___6_pValue, ___7_cchValue, ___8_mdSetter, ___9_mdGetter, ___10_rmdOtherMethods, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_m110CADED8CE4A3F9B2143B685F5B6E495ACFF071(uint32_t ___0_md, uint32_t ___1_ulParamSeq, Il2CppChar* ___2_szName, uint32_t ___3_dwParamFlags, uint32_t ___4_dwCPlusTypeFlag, intptr_t ___5_pValue, uint32_t ___6_cchValue, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szName' to managed representation
		String_t* ____2_szName_unmarshaled = NULL;
		____2_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineParam_mE54F47B775580576FA760812D70B20959A64E065(__thisValue, ___0_md, ___1_ulParamSeq, ____2_szName_unmarshaled, ___3_dwParamFlags, ___4_dwCPlusTypeFlag, ___5_pValue, ___6_cchValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_m404DF79CABC6647A74292B892321F782B59A4240(uint32_t ___0_fd, uint32_t ___1_dwFieldFlags, uint32_t ___2_dwCPlusTypeFlag, intptr_t ___3_pValue, uint32_t ___4_cchValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetFieldProps_mB13583DE91C748F7E6F377A00DD3ABD32715BA7B(__thisValue, ___0_fd, ___1_dwFieldFlags, ___2_dwCPlusTypeFlag, ___3_pValue, ___4_cchValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_m74BA1D6F2BD3D05E798B4596D0F36011AA57BE83(uint32_t ___0_pr, uint32_t ___1_dwPropFlags, uint32_t ___2_dwCPlusTypeFlag, intptr_t ___3_pValue, uint32_t ___4_cchValue, uint32_t ___5_mdSetter, uint32_t ___6_mdGetter, intptr_t ___7_rmdOtherMethods) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetPropertyProps_mD51FA31D3E50BC225FBBF20F9BA506929A30E22E(__thisValue, ___0_pr, ___1_dwPropFlags, ___2_dwCPlusTypeFlag, ___3_pValue, ___4_cchValue, ___5_mdSetter, ___6_mdGetter, ___7_rmdOtherMethods, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m9735EB1611160EF08CB275EA4642EF5B828BF8A9(uint32_t ___0_pd, Il2CppChar* ___1_szName, uint32_t ___2_dwParamFlags, uint32_t ___3_dwCPlusTypeFlag, intptr_t ___4_pValue, uint32_t ___5_cchValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetParamProps_mDB8C3FF8DB7539732D428A4D525910C73443989C(__thisValue, ___0_pd, ____1_szName_unmarshaled, ___2_dwParamFlags, ___3_dwCPlusTypeFlag, ___4_pValue, ___5_cchValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_m7DE694D3199F275E1D1883A80344947EE709B315(uint32_t ___0_tkObj, intptr_t ___1_rSecAttrs, uint32_t ___2_cSecAttrs, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineSecurityAttributeSet_m5218825037BF1F696CFA8B37480CE6509046F754(__thisValue, ___0_tkObj, ___1_rSecAttrs, ___2_cSecAttrs, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_m98F63F07409155922E4F13A85872D1C677E138F6(Il2CppIUnknown* ___0_pImport) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_pImport' to managed representation
		RuntimeObject* ____0_pImport_unmarshaled = NULL;
		if (___0_pImport != NULL)
		{
			____0_pImport_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___0_pImport, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_pImport_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_pImport_unmarshaled), Il2CppIUnknown::IID, ___0_pImport);
			}
		}
		else
		{
			____0_pImport_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_ApplyEditAndContinue_mFF75718802A6E58C2DCED0E052BB3E148A78A10C(__thisValue, ____0_pImport_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_m785C5478EEEF26D4B625E2B6EA412E64E46578AB(intptr_t ___0_pAssemImport, intptr_t ___1_pbHashValue, uint32_t ___2_cbHashValue, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___3_import, intptr_t ___4_pbSigBlob, uint32_t ___5_cbSigBlob, intptr_t ___6_pAssemEmit, IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C* ___7_emit, intptr_t ___8_pvTranslatedSig, uint32_t ___9_cbTranslatedSigMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___3_import' to managed representation
		RuntimeObject* ____3_import_unmarshaled = NULL;
		if (___3_import != NULL)
		{
			____3_import_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___3_import, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____3_import_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____3_import_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___3_import);
			}
		}
		else
		{
			____3_import_unmarshaled = NULL;
		}

		// Marshaling of parameter '___7_emit' to managed representation
		RuntimeObject* ____7_emit_unmarshaled = NULL;
		if (___7_emit != NULL)
		{
			____7_emit_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___7_emit, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____7_emit_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____7_emit_unmarshaled), IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C::IID, ___7_emit);
			}
		}
		else
		{
			____7_emit_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_TranslateSigWithScope_mA87F28C79E5076B75175E1E49AA6CEF5137BC2EC(__thisValue, ___0_pAssemImport, ___1_pbHashValue, ___2_cbHashValue, ____3_import_unmarshaled, ___4_pbSigBlob, ___5_cbSigBlob, ___6_pAssemEmit, ____7_emit_unmarshaled, ___8_pvTranslatedSig, ___9_cbTranslatedSigMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_m48FD07FE2CE84331028AB24C45D6ED9B7ED2940F(uint32_t ___0_md, uint32_t ___1_dwImplFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetMethodImplFlags_mC5BF4B22764946E606A094286B0489560F29F70E(__thisValue, ___0_md, ___1_dwImplFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_mF2FF5F0955BAB625A1BC340C3EA585FC65E75814(uint32_t ___0_fd, uint32_t ___1_ulRVA) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetFieldRVA_m669CDE4CADAFBC3869DBCE3F99758EB78C9B7A03(__thisValue, ___0_fd, ___1_ulRVA, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_m1BA4D0504F10BB734435C3A32064735496C18271(IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___0_pImport, intptr_t ___1_pHostMapToken, Il2CppIUnknown* ___2_pHandler) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_pImport' to managed representation
		RuntimeObject* ____0_pImport_unmarshaled = NULL;
		if (___0_pImport != NULL)
		{
			____0_pImport_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___0_pImport, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_pImport_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_pImport_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___0_pImport);
			}
		}
		else
		{
			____0_pImport_unmarshaled = NULL;
		}

		// Marshaling of parameter '___2_pHandler' to managed representation
		RuntimeObject* ____2_pHandler_unmarshaled = NULL;
		if (___2_pHandler != NULL)
		{
			____2_pHandler_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___2_pHandler, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____2_pHandler_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____2_pHandler_unmarshaled), Il2CppIUnknown::IID, ___2_pHandler);
			}
		}
		else
		{
			____2_pHandler_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_Merge_m5C313FE69A9CF5C9F18AE94B3C7F29B69C259679(__thisValue, ____0_pImport_unmarshaled, ___1_pHostMapToken, ____2_pHandler_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_mA4C8A0BF5FCB3A858EE1A4D8BE9E4F077F52CA4C() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_MergeEnd_m8F7BFA31EEED280BA75CCD1DB5318B51394EA36C(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual void STDCALL IMetaDataImport_CloseEnum_m310C13C72081C3A7FDAFE41E34B863EB392A876C(uint32_t ___0_hEnum) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_CloseEnum_mB517553756918251874C744D9A4B422D03BF013D(__thisValue, ___0_hEnum, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		}

	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m823E43D3A263850E298529646B8CBAE22D34C03C(uint32_t ___0_hEnum, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_CountEnum_mBEC6C0E435DA4449D9D52A9A3DD8CB58B24581A3(__thisValue, ___0_hEnum, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_m280AA7B10625D848A6B0645D266FBA89679387DA(uint32_t ___0_hEnum, uint32_t ___1_ulPos) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_ResetEnum_mED68573292C20DCC9D05F8C646007DFD46B2FECE(__thisValue, ___0_hEnum, ___1_ulPos, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_m6481834CC2528E4E612DA8A9DD984DC8183830DB(uint32_t* ___0_phEnum, uint32_t* ___1_rTypeDefs, uint32_t ___2_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rTypeDefs' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rTypeDefs_unmarshaled = NULL;
		if (___1_rTypeDefs != NULL)
		{
			____1_rTypeDefs_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cMax)); i++)
			{
				(____1_rTypeDefs_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rTypeDefs)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeDefs_m2A6657D77BA9380C62AD54E2E2E6FA0D1A19FA7F(__thisValue, ___0_phEnum, ____1_rTypeDefs_unmarshaled, ___2_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_mE1E0B8165E3A3C4642FAF1A305559C9B2E2ED634(uint32_t* ___0_phEnum, uint32_t ___1_td, uint32_t* ___2_rImpls, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_rImpls' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____2_rImpls_unmarshaled = NULL;
		if (___2_rImpls != NULL)
		{
			____2_rImpls_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cMax)); i++)
			{
				(____2_rImpls_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_rImpls)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumInterfaceImpls_m9F3A2A1A353DCE48C5A86CC8CF6D2B9C92AEB47A(__thisValue, ___0_phEnum, ___1_td, ____2_rImpls_unmarshaled, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_m721506E5BD34CAC28C5339ECB26CD74F1A7CAF8E(uint32_t* ___0_phEnum, uint32_t* ___1_rTypeRefs, uint32_t ___2_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rTypeRefs' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rTypeRefs_unmarshaled = NULL;
		if (___1_rTypeRefs != NULL)
		{
			____1_rTypeRefs_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cMax)); i++)
			{
				(____1_rTypeRefs_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rTypeRefs)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeRefs_m7D4AC70083F349902E95B6A76DCB5965A46C0E16(__thisValue, ___0_phEnum, ____1_rTypeRefs_unmarshaled, ___2_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_mF2E3130D9E90C90E09B9E27874847C25D62D7AB9(Il2CppChar* ___0_szTypeDef, uint32_t ___1_tkEnclosingClass, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_szTypeDef' to managed representation
		String_t* ____0_szTypeDef_unmarshaled = NULL;
		____0_szTypeDef_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_szTypeDef);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindTypeDefByName_mB153E2C25B9B16DABBF8E3C9C1F83A64F073E512(__thisValue, ____0_szTypeDef_unmarshaled, ___1_tkEnclosingClass, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_m29C9981D00A1EEE8D4C7A3F84A25A6A9D7CEE249(Il2CppChar* ___0_szName, uint32_t ___1_cchName, uint32_t* ___2_pchName, Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_szName' to managed representation
		StringBuilder_t* ____0_szName_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____0_szName_unmarshaled, ___0_szName);

		// Marshaling of parameter '___2_pchName' to managed representation
		uint32_t ____2_pchName_empty = 0;

		// Managed method invocation
		Guid_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetScopeProps_mB192EB125BC0D1D87E4BC0287775FFBF9C6D904D(__thisValue, ____0_szName_unmarshaled, ___1_cchName, (&____2_pchName_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___2_pchName' back from managed representation
		*___2_pchName = ____2_pchName_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mCA37CF0F851AB797A20F037BB2DF6B347533779A(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetModuleFromScope_mD32437F4034B07A96025312FC32C7AEF12DFBCF1(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_m5A32D5C939952C9F4D8A17920E66994915F46F2D(uint32_t ___0_td, intptr_t ___1_szTypeDef, uint32_t ___2_cchTypeDef, uint32_t* ___3_pchTypeDef, intptr_t ___4_pdwTypeDefFlags, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___3_pchTypeDef' to managed representation
		uint32_t ____3_pchTypeDef_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeDefProps_m9BC8D3FAB79A7ECD1F9B0855741F20DAC31C23ED(__thisValue, ___0_td, ___1_szTypeDef, ___2_cchTypeDef, (&____3_pchTypeDef_empty), ___4_pdwTypeDefFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___3_pchTypeDef' back from managed representation
		*___3_pchTypeDef = ____3_pchTypeDef_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_m5DA7865CDF02F9D32177D7217C698E47158CCA9A(uint32_t ___0_iiImpl, uint32_t* ___1_pClass, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pClass' to managed representation
		uint32_t ____1_pClass_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetInterfaceImplProps_m9BE32202360432DB9C04BA3BF075DFA0A3DE62AF(__thisValue, ___0_iiImpl, (&____1_pClass_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pClass' back from managed representation
		*___1_pClass = ____1_pClass_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m3B584009C0F1670712EEC5D0C1130D95B9428FC4(uint32_t ___0_tr, uint32_t* ___1_ptkResolutionScope, Il2CppChar* ___2_szName, uint32_t ___3_cchName, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_ptkResolutionScope' to managed representation
		uint32_t ____1_ptkResolutionScope_empty = 0;

		// Marshaling of parameter '___2_szName' to managed representation
		StringBuilder_t* ____2_szName_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szName_unmarshaled, ___2_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeRefProps_m9C663823EAF20DDD434C963B3FDE5FBD08C7976F(__thisValue, ___0_tr, (&____1_ptkResolutionScope_empty), ____2_szName_unmarshaled, ___3_cchName, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_ptkResolutionScope' back from managed representation
		*___1_ptkResolutionScope = ____1_ptkResolutionScope_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mA45CC81D7A807808D32571D48319A9532AE1A56F(uint32_t ___0_tr, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppIScope, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_ppIScope' to managed representation
		RuntimeObject* ____2_ppIScope_empty = NULL;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_ResolveTypeRef_m204BBB70AAD1921BF1FBCCA4B274A1AC3233225E(__thisValue, ___0_tr, ___1_riid, (&____2_ppIScope_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___2_ppIScope' back from managed representation
		if (____2_ppIScope_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____2_ppIScope_empty))
			{
				*___2_ppIScope = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(____2_ppIScope_empty));
				(*___2_ppIScope)->AddRef();
			}
			else
			{
				*___2_ppIScope = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(____2_ppIScope_empty);
			}
		}
		else
		{
			*___2_ppIScope = NULL;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_m9DD4D628291029E8124D603D9E3B7467271B4E40(uint32_t* ___0_phEnum, uint32_t ___1_cl, uint32_t* ___2_rMembers, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_rMembers' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____2_rMembers_unmarshaled = NULL;
		if (___2_rMembers != NULL)
		{
			____2_rMembers_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cMax)); i++)
			{
				(____2_rMembers_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_rMembers)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMembers_m07B0AA12B8E3C05B7A13FB6FA9114BE390D1F6B4(__thisValue, ___0_phEnum, ___1_cl, ____2_rMembers_unmarshaled, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_m02922DB6B166BC48A2AB0B969ECBDD64B43068E2(uint32_t* ___0_phEnum, uint32_t ___1_cl, Il2CppChar* ___2_szName, uint32_t* ___3_rMembers, uint32_t ___4_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szName' to managed representation
		String_t* ____2_szName_unmarshaled = NULL;
		____2_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_szName);

		// Marshaling of parameter '___3_rMembers' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____3_rMembers_unmarshaled = NULL;
		if (___3_rMembers != NULL)
		{
			____3_rMembers_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____3_rMembers_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___3_rMembers)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMembersWithName_mD171E228467EA6C345067A4B44F6069E91D84509(__thisValue, ___0_phEnum, ___1_cl, ____2_szName_unmarshaled, ____3_rMembers_unmarshaled, ___4_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m7EF7B26995F0861A0A848374FE5D6EEC1173871A(uint32_t* ___0_phEnum, uint32_t ___1_cl, intptr_t ___2_rMethods, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethods_mA5FFD0DCFDF1D8E0CFC7F2356BA2B1A8BF8A59AF(__thisValue, ___0_phEnum, ___1_cl, ___2_rMethods, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m80F19424E334DFE223E0F229E70BC5ACABB3E9C0(uint32_t* ___0_phEnum, uint32_t ___1_cl, Il2CppChar* ___2_szName, uint32_t* ___3_rMethods, uint32_t ___4_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szName' to managed representation
		String_t* ____2_szName_unmarshaled = NULL;
		____2_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_szName);

		// Marshaling of parameter '___3_rMethods' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____3_rMethods_unmarshaled = NULL;
		if (___3_rMethods != NULL)
		{
			____3_rMethods_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____3_rMethods_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___3_rMethods)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodsWithName_m51DCF5C180142A0D88D255078304B07C96B474EC(__thisValue, ___0_phEnum, ___1_cl, ____2_szName_unmarshaled, ____3_rMethods_unmarshaled, ___4_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_m3F62CA7DF6B92ADEB6178B073E69B2442BB9591F(uint32_t* ___0_phEnum, uint32_t ___1_cl, intptr_t ___2_rFields, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumFields_mD9E1D6DC12C1DD88D39EF5FBA0F5FD982EEF4A49(__thisValue, ___0_phEnum, ___1_cl, ___2_rFields, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_m6CC323CA641E58F4BCA856B832BB6F358C1344BE(uint32_t* ___0_phEnum, uint32_t ___1_cl, Il2CppChar* ___2_szName, uint32_t* ___3_rFields, uint32_t ___4_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szName' to managed representation
		String_t* ____2_szName_unmarshaled = NULL;
		____2_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_szName);

		// Marshaling of parameter '___3_rFields' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____3_rFields_unmarshaled = NULL;
		if (___3_rFields != NULL)
		{
			____3_rFields_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____3_rFields_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___3_rFields)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumFieldsWithName_m836DC6B4D5A03CF429F641A42D8C87E00CEA7F08(__thisValue, ___0_phEnum, ___1_cl, ____2_szName_unmarshaled, ____3_rFields_unmarshaled, ___4_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_m0F22BEFA40D238C64A23E92C02252824BA31164F(uint32_t* ___0_phEnum, uint32_t ___1_mb, uint32_t* ___2_rParams, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_rParams' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____2_rParams_unmarshaled = NULL;
		if (___2_rParams != NULL)
		{
			____2_rParams_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cMax)); i++)
			{
				(____2_rParams_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_rParams)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumParams_m9486735D04CD910E895FDA2E9EB8AAF12EF9E686(__thisValue, ___0_phEnum, ___1_mb, ____2_rParams_unmarshaled, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m9294B6F7F2E10004207590E1C5BB74A904DA2D03(uint32_t* ___0_phEnum, uint32_t ___1_tkParent, uint32_t* ___2_rMemberRefs, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_rMemberRefs' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____2_rMemberRefs_unmarshaled = NULL;
		if (___2_rMemberRefs != NULL)
		{
			____2_rMemberRefs_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cMax)); i++)
			{
				(____2_rMemberRefs_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_rMemberRefs)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMemberRefs_m8F2284665D71E8A99D1065ADF82F3A664492CD98(__thisValue, ___0_phEnum, ___1_tkParent, ____2_rMemberRefs_unmarshaled, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_mC6D871056A7366E9BB435B72CA348A878CE76AB3(uint32_t* ___0_phEnum, uint32_t ___1_td, uint32_t* ___2_rMethodBody, uint32_t* ___3_rMethodDecl, uint32_t ___4_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_rMethodBody' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____2_rMethodBody_unmarshaled = NULL;
		if (___2_rMethodBody != NULL)
		{
			____2_rMethodBody_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____2_rMethodBody_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_rMethodBody)[i]);
			}
		}

		// Marshaling of parameter '___3_rMethodDecl' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____3_rMethodDecl_unmarshaled = NULL;
		if (___3_rMethodDecl != NULL)
		{
			____3_rMethodDecl_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____3_rMethodDecl_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___3_rMethodDecl)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodImpls_m4B19F3D0092E4CE661FC01A808089E72E79F2037(__thisValue, ___0_phEnum, ___1_td, ____2_rMethodBody_unmarshaled, ____3_rMethodDecl_unmarshaled, ___4_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m26600BE1C9CCF9F8B71684CCD7C5212528F7EC1A(uint32_t* ___0_phEnum, uint32_t ___1_tk, uint32_t ___2_dwActions, uint32_t* ___3_rPermission, uint32_t ___4_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___3_rPermission' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____3_rPermission_unmarshaled = NULL;
		if (___3_rPermission != NULL)
		{
			____3_rPermission_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____3_rPermission_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___3_rPermission)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumPermissionSets_m88682A7FA4F22E3887B04E47C3C21FB8136CBD4D(__thisValue, ___0_phEnum, ___1_tk, ___2_dwActions, ____3_rPermission_unmarshaled, ___4_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mDDCC9CC98E60D8D5A6EC024EA551F58F9B1EBE2E(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Marshaling of parameter '___2_pvSigBlob' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____2_pvSigBlob_unmarshaled = NULL;
		if (___2_pvSigBlob != NULL)
		{
			____2_pvSigBlob_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cbSigBlob)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cbSigBlob)); i++)
			{
				(____2_pvSigBlob_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_pvSigBlob)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMember_m923256560837C0A205A63BF75B13B7BE70F3ED68(__thisValue, ___0_td, ____1_szName_unmarshaled, ____2_pvSigBlob_unmarshaled, ___3_cbSigBlob, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_mDFD229591597FCAC8ADCDB940E4676F75FA53046(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Marshaling of parameter '___2_pvSigBlob' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____2_pvSigBlob_unmarshaled = NULL;
		if (___2_pvSigBlob != NULL)
		{
			____2_pvSigBlob_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cbSigBlob)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cbSigBlob)); i++)
			{
				(____2_pvSigBlob_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_pvSigBlob)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMethod_m9FDCA4F8FB3E6F349800A3220B17960EB4F06828(__thisValue, ___0_td, ____1_szName_unmarshaled, ____2_pvSigBlob_unmarshaled, ___3_cbSigBlob, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_mAD74A5812E92D020760493ACDB145907F674E2AC(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Marshaling of parameter '___2_pvSigBlob' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____2_pvSigBlob_unmarshaled = NULL;
		if (___2_pvSigBlob != NULL)
		{
			____2_pvSigBlob_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cbSigBlob)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cbSigBlob)); i++)
			{
				(____2_pvSigBlob_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_pvSigBlob)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindField_m584ABF30B71A04D3F3EF123DBAF321D660F90D52(__thisValue, ___0_td, ____1_szName_unmarshaled, ____2_pvSigBlob_unmarshaled, ___3_cbSigBlob, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mC6A7E418448EBB3080D92AD74D4B925B5970775B(uint32_t ___0_td, Il2CppChar* ___1_szName, uint8_t* ___2_pvSigBlob, uint32_t ___3_cbSigBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Marshaling of parameter '___2_pvSigBlob' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____2_pvSigBlob_unmarshaled = NULL;
		if (___2_pvSigBlob != NULL)
		{
			____2_pvSigBlob_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cbSigBlob)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cbSigBlob)); i++)
			{
				(____2_pvSigBlob_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_pvSigBlob)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMemberRef_m033FEF39C37D75F3B290FE3333AD8A3E1638A26F(__thisValue, ___0_td, ____1_szName_unmarshaled, ____2_pvSigBlob_unmarshaled, ___3_cbSigBlob, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_mEFACC432F0160025F5197FDF0606C45CC0611FC3(uint32_t ___0_mb, uint32_t* ___1_pClass, intptr_t ___2_szMethod, uint32_t ___3_cchMethod, uint32_t* ___4_pchMethod, intptr_t ___5_pdwAttr, intptr_t ___6_ppvSigBlob, intptr_t ___7_pcbSigBlob, intptr_t ___8_pulCodeRVA, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pClass' to managed representation
		uint32_t ____1_pClass_empty = 0;

		// Marshaling of parameter '___4_pchMethod' to managed representation
		uint32_t ____4_pchMethod_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMethodProps_mE40BA9931085101D0AB62A2457E49D4F7D95A6F8(__thisValue, ___0_mb, (&____1_pClass_empty), ___2_szMethod, ___3_cchMethod, (&____4_pchMethod_empty), ___5_pdwAttr, ___6_ppvSigBlob, ___7_pcbSigBlob, ___8_pulCodeRVA, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pClass' back from managed representation
		*___1_pClass = ____1_pClass_empty;

		// Marshaling of parameter '___4_pchMethod' back from managed representation
		*___4_pchMethod = ____4_pchMethod_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_m991E6806B40BDA5FB76207D26B3EA6E703112588(uint32_t ___0_mr, uint32_t* ___1_ptk, Il2CppChar* ___2_szMember, uint32_t ___3_cchMember, uint32_t* ___4_pchMember, intptr_t* ___5_ppvSigBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_szMember' to managed representation
		StringBuilder_t* ____2_szMember_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szMember_unmarshaled, ___2_szMember);

		// Marshaling of parameter '___4_pchMember' to managed representation
		uint32_t ____4_pchMember_empty = 0;

		// Marshaling of parameter '___5_ppvSigBlob' to managed representation
		intptr_t ____5_ppvSigBlob_empty;
		memset((&____5_ppvSigBlob_empty), 0, sizeof(____5_ppvSigBlob_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMemberRefProps_mF81334E0100448943EB3DBB7F846EF74996EA51F(__thisValue, ___0_mr, ___1_ptk, ____2_szMember_unmarshaled, ___3_cchMember, (&____4_pchMember_empty), (&____5_ppvSigBlob_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___4_pchMember' back from managed representation
		*___4_pchMember = ____4_pchMember_empty;

		// Marshaling of parameter '___5_ppvSigBlob' back from managed representation
		*___5_ppvSigBlob = ____5_ppvSigBlob_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mB60344A5562BDE26FC6D36A8B8332C02B81D3E9E(uint32_t* ___0_phEnum, uint32_t ___1_td, intptr_t ___2_rProperties, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumProperties_mF196AD10419823D5407DD5DEBAE744A2C5BE4886(__thisValue, ___0_phEnum, ___1_td, ___2_rProperties, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_m84AD7CB71CC743B956A492A3552F030DBD15363E(uint32_t* ___0_phEnum, uint32_t ___1_td, intptr_t ___2_rEvents, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumEvents_mC2CF18857D166559E9CBCF51BCBB237FF4EE55AD(__thisValue, ___0_phEnum, ___1_td, ___2_rEvents, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_m324E64B5E7891770D5E41DAB3CED38C8E6DC3CF7(uint32_t ___0_ev, uint32_t* ___1_pClass, Il2CppChar* ___2_szEvent, uint32_t ___3_cchEvent, uint32_t* ___4_pchEvent, uint32_t* ___5_pdwEventFlags, uint32_t* ___6_ptkEventType, uint32_t* ___7_pmdAddOn, uint32_t* ___8_pmdRemoveOn, uint32_t* ___9_pmdFire, uint32_t* ___10_rmdOtherMethod, uint32_t ___11_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pClass' to managed representation
		uint32_t ____1_pClass_empty = 0;

		// Marshaling of parameter '___2_szEvent' to managed representation
		StringBuilder_t* ____2_szEvent_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szEvent_unmarshaled, ___2_szEvent);

		// Marshaling of parameter '___4_pchEvent' to managed representation
		uint32_t ____4_pchEvent_empty = 0;

		// Marshaling of parameter '___5_pdwEventFlags' to managed representation
		uint32_t ____5_pdwEventFlags_empty = 0;

		// Marshaling of parameter '___6_ptkEventType' to managed representation
		uint32_t ____6_ptkEventType_empty = 0;

		// Marshaling of parameter '___7_pmdAddOn' to managed representation
		uint32_t ____7_pmdAddOn_empty = 0;

		// Marshaling of parameter '___8_pmdRemoveOn' to managed representation
		uint32_t ____8_pmdRemoveOn_empty = 0;

		// Marshaling of parameter '___9_pmdFire' to managed representation
		uint32_t ____9_pmdFire_empty = 0;

		// Marshaling of parameter '___10_rmdOtherMethod' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____10_rmdOtherMethod_unmarshaled = NULL;
		if (___10_rmdOtherMethod != NULL)
		{
			____10_rmdOtherMethod_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___11_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___11_cMax)); i++)
			{
				(____10_rmdOtherMethod_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___10_rmdOtherMethod)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetEventProps_mB6D640E0CE3B97AA01A40582B8B755F1DD7A89DA(__thisValue, ___0_ev, (&____1_pClass_empty), ____2_szEvent_unmarshaled, ___3_cchEvent, (&____4_pchEvent_empty), (&____5_pdwEventFlags_empty), (&____6_ptkEventType_empty), (&____7_pmdAddOn_empty), (&____8_pmdRemoveOn_empty), (&____9_pmdFire_empty), ____10_rmdOtherMethod_unmarshaled, ___11_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pClass' back from managed representation
		*___1_pClass = ____1_pClass_empty;

		// Marshaling of parameter '___4_pchEvent' back from managed representation
		*___4_pchEvent = ____4_pchEvent_empty;

		// Marshaling of parameter '___5_pdwEventFlags' back from managed representation
		*___5_pdwEventFlags = ____5_pdwEventFlags_empty;

		// Marshaling of parameter '___6_ptkEventType' back from managed representation
		*___6_ptkEventType = ____6_ptkEventType_empty;

		// Marshaling of parameter '___7_pmdAddOn' back from managed representation
		*___7_pmdAddOn = ____7_pmdAddOn_empty;

		// Marshaling of parameter '___8_pmdRemoveOn' back from managed representation
		*___8_pmdRemoveOn = ____8_pmdRemoveOn_empty;

		// Marshaling of parameter '___9_pmdFire' back from managed representation
		*___9_pmdFire = ____9_pmdFire_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m73AF9164145EEF98A27CEAD68AE89696D8802DFC(uint32_t* ___0_phEnum, uint32_t ___1_mb, uint32_t* ___2_rEventProp, uint32_t ___3_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_rEventProp' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____2_rEventProp_unmarshaled = NULL;
		if (___2_rEventProp != NULL)
		{
			____2_rEventProp_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___3_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___3_cMax)); i++)
			{
				(____2_rEventProp_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___2_rEventProp)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodSemantics_mDB47921155483623AC3B6A86B4B72526A1ACA846(__thisValue, ___0_phEnum, ___1_mb, ____2_rEventProp_unmarshaled, ___3_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_mC1C1BE975C52FE0E4A33BE76427FAA04BEEDE8CC(uint32_t ___0_mb, uint32_t ___1_tkEventProp, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMethodSemantics_m5BED806CE50A4605B7FF39B702704FE7534CACF0(__thisValue, ___0_mb, ___1_tkEventProp, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_m82BEF5233202F78B64501CACD86AB75A4B8B58AF(uint32_t ___0_td, uint32_t* ___1_pdwPackSize, intptr_t ___2_rFieldOffset, uint32_t ___3_cMax, uint32_t* ___4_pcFieldOffset, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pdwPackSize' to managed representation
		uint32_t ____1_pdwPackSize_empty = 0;

		// Marshaling of parameter '___4_pcFieldOffset' to managed representation
		uint32_t ____4_pcFieldOffset_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetClassLayout_m663BC6556C6CB6F12D13E425E1B69F77EABB6F35(__thisValue, ___0_td, (&____1_pdwPackSize_empty), ___2_rFieldOffset, ___3_cMax, (&____4_pcFieldOffset_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pdwPackSize' back from managed representation
		*___1_pdwPackSize = ____1_pdwPackSize_empty;

		// Marshaling of parameter '___4_pcFieldOffset' back from managed representation
		*___4_pcFieldOffset = ____4_pcFieldOffset_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_mF66AF1CA91704F4834BAD4E302D2A2A22D456FB4(uint32_t ___0_tk, intptr_t* ___1_ppvNativeType, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_ppvNativeType' to managed representation
		intptr_t ____1_ppvNativeType_empty;
		memset((&____1_ppvNativeType_empty), 0, sizeof(____1_ppvNativeType_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetFieldMarshal_mE0986F50E3C130603817345A4F3ADF9B47F1FCD5(__thisValue, ___0_tk, (&____1_ppvNativeType_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_ppvNativeType' back from managed representation
		*___1_ppvNativeType = ____1_ppvNativeType_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m966A46E321154BEFF702D8AE65E00348A09FD1DF(uint32_t ___0_tk, uint32_t* ___1_pulCodeRVA, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pulCodeRVA' to managed representation
		uint32_t ____1_pulCodeRVA_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetRVA_m8DB3C662268009E449B7D75BC3A4B30402222818(__thisValue, ___0_tk, (&____1_pulCodeRVA_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pulCodeRVA' back from managed representation
		*___1_pulCodeRVA = ____1_pulCodeRVA_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_mD211E233325CA81166BDC469672A2F530C13D7A4(uint32_t ___0_pm, uint32_t* ___1_pdwAction, intptr_t* ___2_ppvPermission, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pdwAction' to managed representation
		uint32_t ____1_pdwAction_empty = 0;

		// Marshaling of parameter '___2_ppvPermission' to managed representation
		intptr_t ____2_ppvPermission_empty;
		memset((&____2_ppvPermission_empty), 0, sizeof(____2_ppvPermission_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPermissionSetProps_m09653A469FC719751ED854A130453F53C43208A7(__thisValue, ___0_pm, (&____1_pdwAction_empty), (&____2_ppvPermission_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pdwAction' back from managed representation
		*___1_pdwAction = ____1_pdwAction_empty;

		// Marshaling of parameter '___2_ppvPermission' back from managed representation
		*___2_ppvPermission = ____2_ppvPermission_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_m4E7A28C2755BE530F2E47812A8387BB0E5366EAB(uint32_t ___0_mdSig, intptr_t* ___1_ppvSig, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_ppvSig' to managed representation
		intptr_t ____1_ppvSig_empty;
		memset((&____1_ppvSig_empty), 0, sizeof(____1_ppvSig_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetSigFromToken_m724A75B606FCC4ACCB70E8CA0DCBEDB3DD613F23(__thisValue, ___0_mdSig, (&____1_ppvSig_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_ppvSig' back from managed representation
		*___1_ppvSig = ____1_ppvSig_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m18B35B5BBB834EE0E737826DBC1AD2D1F6CAF420(uint32_t ___0_mur, Il2CppChar* ___1_szName, uint32_t ___2_cchName, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		StringBuilder_t* ____1_szName_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____1_szName_unmarshaled, ___1_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetModuleRefProps_mE1F146F5740FED57A267FDB72260DC65790B0911(__thisValue, ___0_mur, ____1_szName_unmarshaled, ___2_cchName, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_m6AA7CA2777C5008449A0C0D03B2B1CFFF3C7ADD1(uint32_t* ___0_phEnum, uint32_t* ___1_rModuleRefs, uint32_t ___2_cmax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rModuleRefs' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rModuleRefs_unmarshaled = NULL;
		if (___1_rModuleRefs != NULL)
		{
			____1_rModuleRefs_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cmax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cmax)); i++)
			{
				(____1_rModuleRefs_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rModuleRefs)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumModuleRefs_m8D62524559F44EA421928728CFC992F6F6B046B9(__thisValue, ___0_phEnum, ____1_rModuleRefs_unmarshaled, ___2_cmax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m441F2AA549A09B7345BECAFFF4444BB799DC3AD4(uint32_t ___0_typespec, intptr_t* ___1_ppvSig, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_ppvSig' to managed representation
		intptr_t ____1_ppvSig_empty;
		memset((&____1_ppvSig_empty), 0, sizeof(____1_ppvSig_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeSpecFromToken_m2B449BFAD118FA5AA76D3C78975CFCBC87641866(__thisValue, ___0_typespec, (&____1_ppvSig_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_ppvSig' back from managed representation
		*___1_ppvSig = ____1_ppvSig_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m31D57A947ACED822F6267DD7A85B5E2581FB434A(uint32_t ___0_tk, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNameFromToken_m6BA516BE418E4332F1C435938E4BEF1DD17B5F3A(__thisValue, ___0_tk, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_m2F949D8A6BCC14AC679A2B875A5B6B3F69DD9876(uint32_t* ___0_phEnum, uint32_t* ___1_rMethods, uint32_t ___2_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rMethods' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rMethods_unmarshaled = NULL;
		if (___1_rMethods != NULL)
		{
			____1_rMethods_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cMax)); i++)
			{
				(____1_rMethods_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rMethods)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumUnresolvedMethods_m3A6F207459B66B6864E29F30AE8B7B82ABC1174F(__thisValue, ___0_phEnum, ____1_rMethods_unmarshaled, ___2_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m1E2D0282CE6E121D966524737D47A0E54198BC71(uint32_t ___0_stk, Il2CppChar* ___1_szString, uint32_t ___2_cchString, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szString' to managed representation
		StringBuilder_t* ____1_szString_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____1_szString_unmarshaled, ___1_szString);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetUserString_m3CD2D5827F947F26A3A25B6F6446C6DA9595D4E5(__thisValue, ___0_stk, ____1_szString_unmarshaled, ___2_cchString, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_m9B17B03B6B31AE63368E1B2410B03B7019531D8A(uint32_t ___0_tk, uint32_t* ___1_pdwMappingFlags, Il2CppChar* ___2_szImportName, uint32_t ___3_cchImportName, uint32_t* ___4_pchImportName, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pdwMappingFlags' to managed representation
		uint32_t ____1_pdwMappingFlags_empty = 0;

		// Marshaling of parameter '___2_szImportName' to managed representation
		StringBuilder_t* ____2_szImportName_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szImportName_unmarshaled, ___2_szImportName);

		// Marshaling of parameter '___4_pchImportName' to managed representation
		uint32_t ____4_pchImportName_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPinvokeMap_m959C1E8D69755B350C530C219489228B946E0C73(__thisValue, ___0_tk, (&____1_pdwMappingFlags_empty), ____2_szImportName_unmarshaled, ___3_cchImportName, (&____4_pchImportName_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pdwMappingFlags' back from managed representation
		*___1_pdwMappingFlags = ____1_pdwMappingFlags_empty;

		// Marshaling of parameter '___4_pchImportName' back from managed representation
		*___4_pchImportName = ____4_pchImportName_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m07BDED2BC34DAE35BF9E271EAC56458EB9D07BBE(uint32_t* ___0_phEnum, uint32_t* ___1_rSignatures, uint32_t ___2_cmax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rSignatures' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rSignatures_unmarshaled = NULL;
		if (___1_rSignatures != NULL)
		{
			____1_rSignatures_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cmax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cmax)); i++)
			{
				(____1_rSignatures_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rSignatures)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumSignatures_m244A3353FF53F10E6E2544BE10C144D4D03E6607(__thisValue, ___0_phEnum, ____1_rSignatures_unmarshaled, ___2_cmax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m4E85D3D62F6745C072DFD629B4EB111CC84C0454(uint32_t* ___0_phEnum, uint32_t* ___1_rTypeSpecs, uint32_t ___2_cmax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rTypeSpecs' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rTypeSpecs_unmarshaled = NULL;
		if (___1_rTypeSpecs != NULL)
		{
			____1_rTypeSpecs_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cmax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cmax)); i++)
			{
				(____1_rTypeSpecs_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rTypeSpecs)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeSpecs_m6C50ADE4D30480365A419A989C541F087D9BEA6F(__thisValue, ___0_phEnum, ____1_rTypeSpecs_unmarshaled, ___2_cmax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m00D146F142405717EB949A12F76A6A6C5A54A1C1(uint32_t* ___0_phEnum, uint32_t* ___1_rStrings, uint32_t ___2_cmax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_rStrings' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____1_rStrings_unmarshaled = NULL;
		if (___1_rStrings != NULL)
		{
			____1_rStrings_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___2_cmax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___2_cmax)); i++)
			{
				(____1_rStrings_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_rStrings)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumUserStrings_m7CBA61DB30CDE754E6944A5BF6600E34DFDF4241(__thisValue, ___0_phEnum, ____1_rStrings_unmarshaled, ___2_cmax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_mCBBFD3190A2B2135CABAC4C8B74D59A8BA56E532(uint32_t ___0_md, uint32_t ___1_ulParamSeq, uint32_t* ___2_pParam) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_pParam' to managed representation
		uint32_t ____2_pParam_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetParamForMethodIndex_m789576602B44A5FFB3D4FD33C21B31BC26D52560(__thisValue, ___0_md, ___1_ulParamSeq, (&____2_pParam_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_pParam' back from managed representation
		*___2_pParam = ____2_pParam_empty;

		return returnValue;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_m150AAE4F9C8EB7B2ED6407B3C00D40920041C035(uint32_t* ___0_phEnum, uint32_t ___1_tk, uint32_t ___2_tkType, uint32_t* ___3_rCustomAttributes, uint32_t ___4_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___3_rCustomAttributes' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____3_rCustomAttributes_unmarshaled = NULL;
		if (___3_rCustomAttributes != NULL)
		{
			____3_rCustomAttributes_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___4_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___4_cMax)); i++)
			{
				(____3_rCustomAttributes_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___3_rCustomAttributes)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumCustomAttributes_m6634A3B66B71BE5ECEB87A00EDAC1CB248E74987(__thisValue, ___0_phEnum, ___1_tk, ___2_tkType, ____3_rCustomAttributes_unmarshaled, ___4_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_m2C7D85E0C4469CA0B0A22083380C917EB390A7AE(uint32_t ___0_cv, uint32_t* ___1_ptkObj, uint32_t* ___2_ptkType, intptr_t* ___3_ppBlob, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_ptkObj' to managed representation
		uint32_t ____1_ptkObj_empty = 0;

		// Marshaling of parameter '___2_ptkType' to managed representation
		uint32_t ____2_ptkType_empty = 0;

		// Marshaling of parameter '___3_ppBlob' to managed representation
		intptr_t ____3_ppBlob_empty;
		memset((&____3_ppBlob_empty), 0, sizeof(____3_ppBlob_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetCustomAttributeProps_m4EE1C3F0B81A3C60E772DDC4DABB4C33E24C9FD1(__thisValue, ___0_cv, (&____1_ptkObj_empty), (&____2_ptkType_empty), (&____3_ppBlob_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_ptkObj' back from managed representation
		*___1_ptkObj = ____1_ptkObj_empty;

		// Marshaling of parameter '___2_ptkType' back from managed representation
		*___2_ptkType = ____2_ptkType_empty;

		// Marshaling of parameter '___3_ppBlob' back from managed representation
		*___3_ppBlob = ____3_ppBlob_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_mB031CA8927A8E8C5A89E0542758FE08D860D94E2(uint32_t ___0_tkResolutionScope, Il2CppChar* ___1_szName, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindTypeRef_m2B092E2C9EEB524CB9313DA55717BE10E1AAD231(__thisValue, ___0_tkResolutionScope, ____1_szName_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m705554544233D93420572E09373B3D879028CC74(uint32_t ___0_mb, uint32_t* ___1_pClass, Il2CppChar* ___2_szMember, uint32_t ___3_cchMember, uint32_t* ___4_pchMember, uint32_t* ___5_pdwAttr, intptr_t* ___6_ppvSigBlob, uint32_t* ___7_pcbSigBlob, uint32_t* ___8_pulCodeRVA, uint32_t* ___9_pdwImplFlags, uint32_t* ___10_pdwCPlusTypeFlag, intptr_t* ___11_ppValue, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pClass' to managed representation
		uint32_t ____1_pClass_empty = 0;

		// Marshaling of parameter '___2_szMember' to managed representation
		StringBuilder_t* ____2_szMember_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szMember_unmarshaled, ___2_szMember);

		// Marshaling of parameter '___4_pchMember' to managed representation
		uint32_t ____4_pchMember_empty = 0;

		// Marshaling of parameter '___5_pdwAttr' to managed representation
		uint32_t ____5_pdwAttr_empty = 0;

		// Marshaling of parameter '___6_ppvSigBlob' to managed representation
		intptr_t ____6_ppvSigBlob_empty;
		memset((&____6_ppvSigBlob_empty), 0, sizeof(____6_ppvSigBlob_empty));

		// Marshaling of parameter '___7_pcbSigBlob' to managed representation
		uint32_t ____7_pcbSigBlob_empty = 0;

		// Marshaling of parameter '___8_pulCodeRVA' to managed representation
		uint32_t ____8_pulCodeRVA_empty = 0;

		// Marshaling of parameter '___9_pdwImplFlags' to managed representation
		uint32_t ____9_pdwImplFlags_empty = 0;

		// Marshaling of parameter '___10_pdwCPlusTypeFlag' to managed representation
		uint32_t ____10_pdwCPlusTypeFlag_empty = 0;

		// Marshaling of parameter '___11_ppValue' to managed representation
		intptr_t ____11_ppValue_empty;
		memset((&____11_ppValue_empty), 0, sizeof(____11_ppValue_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMemberProps_mE84578A3ADCE3EEAD5A69A2D66D241ABAF40F453(__thisValue, ___0_mb, (&____1_pClass_empty), ____2_szMember_unmarshaled, ___3_cchMember, (&____4_pchMember_empty), (&____5_pdwAttr_empty), (&____6_ppvSigBlob_empty), (&____7_pcbSigBlob_empty), (&____8_pulCodeRVA_empty), (&____9_pdwImplFlags_empty), (&____10_pdwCPlusTypeFlag_empty), (&____11_ppValue_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pClass' back from managed representation
		*___1_pClass = ____1_pClass_empty;

		// Marshaling of parameter '___4_pchMember' back from managed representation
		*___4_pchMember = ____4_pchMember_empty;

		// Marshaling of parameter '___5_pdwAttr' back from managed representation
		*___5_pdwAttr = ____5_pdwAttr_empty;

		// Marshaling of parameter '___6_ppvSigBlob' back from managed representation
		*___6_ppvSigBlob = ____6_ppvSigBlob_empty;

		// Marshaling of parameter '___7_pcbSigBlob' back from managed representation
		*___7_pcbSigBlob = ____7_pcbSigBlob_empty;

		// Marshaling of parameter '___8_pulCodeRVA' back from managed representation
		*___8_pulCodeRVA = ____8_pulCodeRVA_empty;

		// Marshaling of parameter '___9_pdwImplFlags' back from managed representation
		*___9_pdwImplFlags = ____9_pdwImplFlags_empty;

		// Marshaling of parameter '___10_pdwCPlusTypeFlag' back from managed representation
		*___10_pdwCPlusTypeFlag = ____10_pdwCPlusTypeFlag_empty;

		// Marshaling of parameter '___11_ppValue' back from managed representation
		*___11_ppValue = ____11_ppValue_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_m8B4CB0E0AC7300E75BB85B8995CB0A678E16F603(uint32_t ___0_mb, uint32_t* ___1_pClass, Il2CppChar* ___2_szField, uint32_t ___3_cchField, uint32_t* ___4_pchField, uint32_t* ___5_pdwAttr, intptr_t* ___6_ppvSigBlob, uint32_t* ___7_pcbSigBlob, uint32_t* ___8_pdwCPlusTypeFlag, intptr_t* ___9_ppValue, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pClass' to managed representation
		uint32_t ____1_pClass_empty = 0;

		// Marshaling of parameter '___2_szField' to managed representation
		StringBuilder_t* ____2_szField_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szField_unmarshaled, ___2_szField);

		// Marshaling of parameter '___4_pchField' to managed representation
		uint32_t ____4_pchField_empty = 0;

		// Marshaling of parameter '___5_pdwAttr' to managed representation
		uint32_t ____5_pdwAttr_empty = 0;

		// Marshaling of parameter '___6_ppvSigBlob' to managed representation
		intptr_t ____6_ppvSigBlob_empty;
		memset((&____6_ppvSigBlob_empty), 0, sizeof(____6_ppvSigBlob_empty));

		// Marshaling of parameter '___7_pcbSigBlob' to managed representation
		uint32_t ____7_pcbSigBlob_empty = 0;

		// Marshaling of parameter '___8_pdwCPlusTypeFlag' to managed representation
		uint32_t ____8_pdwCPlusTypeFlag_empty = 0;

		// Marshaling of parameter '___9_ppValue' to managed representation
		intptr_t ____9_ppValue_empty;
		memset((&____9_ppValue_empty), 0, sizeof(____9_ppValue_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetFieldProps_m107F45370E062093334EE961DF6180C746560694(__thisValue, ___0_mb, (&____1_pClass_empty), ____2_szField_unmarshaled, ___3_cchField, (&____4_pchField_empty), (&____5_pdwAttr_empty), (&____6_ppvSigBlob_empty), (&____7_pcbSigBlob_empty), (&____8_pdwCPlusTypeFlag_empty), (&____9_ppValue_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pClass' back from managed representation
		*___1_pClass = ____1_pClass_empty;

		// Marshaling of parameter '___4_pchField' back from managed representation
		*___4_pchField = ____4_pchField_empty;

		// Marshaling of parameter '___5_pdwAttr' back from managed representation
		*___5_pdwAttr = ____5_pdwAttr_empty;

		// Marshaling of parameter '___6_ppvSigBlob' back from managed representation
		*___6_ppvSigBlob = ____6_ppvSigBlob_empty;

		// Marshaling of parameter '___7_pcbSigBlob' back from managed representation
		*___7_pcbSigBlob = ____7_pcbSigBlob_empty;

		// Marshaling of parameter '___8_pdwCPlusTypeFlag' back from managed representation
		*___8_pdwCPlusTypeFlag = ____8_pdwCPlusTypeFlag_empty;

		// Marshaling of parameter '___9_ppValue' back from managed representation
		*___9_ppValue = ____9_ppValue_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_m1052916C42674704A3DFC12FBA066257C654157C(uint32_t ___0_prop, uint32_t* ___1_pClass, Il2CppChar* ___2_szProperty, uint32_t ___3_cchProperty, uint32_t* ___4_pchProperty, uint32_t* ___5_pdwPropFlags, intptr_t* ___6_ppvSig, uint32_t* ___7_pbSig, uint32_t* ___8_pdwCPlusTypeFlag, intptr_t* ___9_ppDefaultValue, uint32_t* ___10_pcchDefaultValue, uint32_t* ___11_pmdSetter, uint32_t* ___12_pmdGetter, uint32_t* ___13_rmdOtherMethod, uint32_t ___14_cMax, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pClass' to managed representation
		uint32_t ____1_pClass_empty = 0;

		// Marshaling of parameter '___2_szProperty' to managed representation
		StringBuilder_t* ____2_szProperty_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____2_szProperty_unmarshaled, ___2_szProperty);

		// Marshaling of parameter '___4_pchProperty' to managed representation
		uint32_t ____4_pchProperty_empty = 0;

		// Marshaling of parameter '___5_pdwPropFlags' to managed representation
		uint32_t ____5_pdwPropFlags_empty = 0;

		// Marshaling of parameter '___6_ppvSig' to managed representation
		intptr_t ____6_ppvSig_empty;
		memset((&____6_ppvSig_empty), 0, sizeof(____6_ppvSig_empty));

		// Marshaling of parameter '___7_pbSig' to managed representation
		uint32_t ____7_pbSig_empty = 0;

		// Marshaling of parameter '___8_pdwCPlusTypeFlag' to managed representation
		uint32_t ____8_pdwCPlusTypeFlag_empty = 0;

		// Marshaling of parameter '___9_ppDefaultValue' to managed representation
		intptr_t ____9_ppDefaultValue_empty;
		memset((&____9_ppDefaultValue_empty), 0, sizeof(____9_ppDefaultValue_empty));

		// Marshaling of parameter '___10_pcchDefaultValue' to managed representation
		uint32_t ____10_pcchDefaultValue_empty = 0;

		// Marshaling of parameter '___11_pmdSetter' to managed representation
		uint32_t ____11_pmdSetter_empty = 0;

		// Marshaling of parameter '___12_pmdGetter' to managed representation
		uint32_t ____12_pmdGetter_empty = 0;

		// Marshaling of parameter '___13_rmdOtherMethod' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____13_rmdOtherMethod_unmarshaled = NULL;
		if (___13_rmdOtherMethod != NULL)
		{
			____13_rmdOtherMethod_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___14_cMax)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___14_cMax)); i++)
			{
				(____13_rmdOtherMethod_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___13_rmdOtherMethod)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPropertyProps_m20A20481F4A024E7A0EB3A766AD3EA52BE3C6D10(__thisValue, ___0_prop, (&____1_pClass_empty), ____2_szProperty_unmarshaled, ___3_cchProperty, (&____4_pchProperty_empty), (&____5_pdwPropFlags_empty), (&____6_ppvSig_empty), (&____7_pbSig_empty), (&____8_pdwCPlusTypeFlag_empty), (&____9_ppDefaultValue_empty), (&____10_pcchDefaultValue_empty), (&____11_pmdSetter_empty), (&____12_pmdGetter_empty), ____13_rmdOtherMethod_unmarshaled, ___14_cMax, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pClass' back from managed representation
		*___1_pClass = ____1_pClass_empty;

		// Marshaling of parameter '___4_pchProperty' back from managed representation
		*___4_pchProperty = ____4_pchProperty_empty;

		// Marshaling of parameter '___5_pdwPropFlags' back from managed representation
		*___5_pdwPropFlags = ____5_pdwPropFlags_empty;

		// Marshaling of parameter '___6_ppvSig' back from managed representation
		*___6_ppvSig = ____6_ppvSig_empty;

		// Marshaling of parameter '___7_pbSig' back from managed representation
		*___7_pbSig = ____7_pbSig_empty;

		// Marshaling of parameter '___8_pdwCPlusTypeFlag' back from managed representation
		*___8_pdwCPlusTypeFlag = ____8_pdwCPlusTypeFlag_empty;

		// Marshaling of parameter '___9_ppDefaultValue' back from managed representation
		*___9_ppDefaultValue = ____9_ppDefaultValue_empty;

		// Marshaling of parameter '___10_pcchDefaultValue' back from managed representation
		*___10_pcchDefaultValue = ____10_pcchDefaultValue_empty;

		// Marshaling of parameter '___11_pmdSetter' back from managed representation
		*___11_pmdSetter = ____11_pmdSetter_empty;

		// Marshaling of parameter '___12_pmdGetter' back from managed representation
		*___12_pmdGetter = ____12_pmdGetter_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_m198461F87BDDAF573B02D64C083F826E1B528321(uint32_t ___0_tk, uint32_t* ___1_pmd, uint32_t* ___2_pulSequence, Il2CppChar* ___3_szName, uint32_t ___4_cchName, uint32_t* ___5_pchName, uint32_t* ___6_pdwAttr, uint32_t* ___7_pdwCPlusTypeFlag, intptr_t* ___8_ppValue, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_pmd' to managed representation
		uint32_t ____1_pmd_empty = 0;

		// Marshaling of parameter '___2_pulSequence' to managed representation
		uint32_t ____2_pulSequence_empty = 0;

		// Marshaling of parameter '___3_szName' to managed representation
		StringBuilder_t* ____3_szName_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____3_szName_unmarshaled, ___3_szName);

		// Marshaling of parameter '___5_pchName' to managed representation
		uint32_t ____5_pchName_empty = 0;

		// Marshaling of parameter '___6_pdwAttr' to managed representation
		uint32_t ____6_pdwAttr_empty = 0;

		// Marshaling of parameter '___7_pdwCPlusTypeFlag' to managed representation
		uint32_t ____7_pdwCPlusTypeFlag_empty = 0;

		// Marshaling of parameter '___8_ppValue' to managed representation
		intptr_t ____8_ppValue_empty;
		memset((&____8_ppValue_empty), 0, sizeof(____8_ppValue_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetParamProps_m28585EEFB3DF1A629B9ABD023250123AAE9CD90F(__thisValue, ___0_tk, (&____1_pmd_empty), (&____2_pulSequence_empty), ____3_szName_unmarshaled, ___4_cchName, (&____5_pchName_empty), (&____6_pdwAttr_empty), (&____7_pdwCPlusTypeFlag_empty), (&____8_ppValue_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___1_pmd' back from managed representation
		*___1_pmd = ____1_pmd_empty;

		// Marshaling of parameter '___2_pulSequence' back from managed representation
		*___2_pulSequence = ____2_pulSequence_empty;

		// Marshaling of parameter '___5_pchName' back from managed representation
		*___5_pchName = ____5_pchName_empty;

		// Marshaling of parameter '___6_pdwAttr' back from managed representation
		*___6_pdwAttr = ____6_pdwAttr_empty;

		// Marshaling of parameter '___7_pdwCPlusTypeFlag' back from managed representation
		*___7_pdwCPlusTypeFlag = ____7_pdwCPlusTypeFlag_empty;

		// Marshaling of parameter '___8_ppValue' back from managed representation
		*___8_ppValue = ____8_ppValue_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m917AB8DC144552B8BE73EEE0C033869715834EB5(uint32_t ___0_tkObj, Il2CppChar* ___1_szName, intptr_t* ___2_ppData, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_szName' to managed representation
		String_t* ____1_szName_unmarshaled = NULL;
		____1_szName_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_szName);

		// Marshaling of parameter '___2_ppData' to managed representation
		intptr_t ____2_ppData_empty;
		memset((&____2_ppData_empty), 0, sizeof(____2_ppData_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetCustomAttributeByName_mF8B0A6D4827069ED3E022BA30A18D4683FF15E23(__thisValue, ___0_tkObj, ____1_szName_unmarshaled, (&____2_ppData_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___2_ppData' back from managed representation
		*___2_ppData = ____2_ppData_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IMetaDataImport_IsValidToken_mD62AC24BBC10542D87BFBBE4C25C3B4ECAF7FEB4(uint32_t ___0_tk) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_IsValidToken_m998BA35F4BB592150050AC80174D326AEDE7AE82(__thisValue, ___0_tk, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(0);
		}

		return static_cast<int32_t>(returnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mEBA3D1888E36C41231878DF70F5644B3D2808112(uint32_t ___0_tdNestedClass, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNestedClassProps_mFD67FE2CCE2F314EE0C795FE79F1165C0FB75EE3(__thisValue, ___0_tdNestedClass, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_m2ED7F998312F16D32BC3B9371CC90B3B3BAF3C57(intptr_t ___0_pvSig, uint32_t ___1_cbSig, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNativeCallConvFromSig_m0E79A248E0EB746359069B461EB6FC2CF9AC8321(__thisValue, ___0_pvSig, ___1_cbSig, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m3A0FAB8CB8D045EA53B1ED1456F242BD768EEBBD(uint32_t ___0_pd, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_IsGlobal_m884DE62EFEA9B313BF83F93AD79B73148716123C(__thisValue, ___0_pd, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper(obj));
}
