// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkIHandPointerPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkIHandPointerPose() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIHandPointerPose Function GetPointerPose ************************
struct IsdkIHandPointerPose_eventGetPointerPose_Parms
{
	FTransform PointerPose;
	bool IsValid;
};
void IIsdkIHandPointerPose::GetPointerPose(FTransform& PointerPose, bool& IsValid)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPointerPose instead.");
}
static FName NAME_UIsdkIHandPointerPose_GetPointerPose = FName(TEXT("GetPointerPose"));
void IIsdkIHandPointerPose::Execute_GetPointerPose(UObject* O, FTransform& PointerPose, bool& IsValid)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandPointerPose::StaticClass()));
	IsdkIHandPointerPose_eventGetPointerPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandPointerPose_GetPointerPose);
	if (Func)
	{
		Parms.PointerPose=std::move(PointerPose);
		Parms.IsValid=std::move(IsValid);
		O->ProcessEvent(Func, &Parms);
		PointerPose=std::move(Parms.PointerPose);
		IsValid=std::move(Parms.IsValid);
	}
	else if (auto I = (IIsdkIHandPointerPose*)(O->GetNativeInterfaceAddress(UIsdkIHandPointerPose::StaticClass())))
	{
		I->GetPointerPose_Implementation(PointerPose,IsValid);
	}
}
struct Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandPointerPose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "transform used for raycast origin, world space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPointerPose constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerPose;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPointerPose constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPointerPose Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::NewProp_PointerPose = { "PointerPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHandPointerPose_eventGetPointerPose_Parms, PointerPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((IsdkIHandPointerPose_eventGetPointerPose_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHandPointerPose_eventGetPointerPose_Parms), &Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::NewProp_PointerPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::NewProp_IsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::PropPointers) < 2048);
// ********** End Function GetPointerPose Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandPointerPose, nullptr, "GetPointerPose", 	Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::PropPointers), 
sizeof(IsdkIHandPointerPose_eventGetPointerPose_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandPointerPose_eventGetPointerPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandPointerPose::execGetPointerPose)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_PointerPose);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPointerPose_Implementation(Z_Param_Out_PointerPose,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandPointerPose Function GetPointerPose **************************

// ********** Begin Interface UIsdkIHandPointerPose Function GetRelativePointerPose ****************
struct IsdkIHandPointerPose_eventGetRelativePointerPose_Parms
{
	FTransform PointerRelativePose;
	bool IsValid;
};
void IIsdkIHandPointerPose::GetRelativePointerPose(FTransform& PointerRelativePose, bool& IsValid)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRelativePointerPose instead.");
}
static FName NAME_UIsdkIHandPointerPose_GetRelativePointerPose = FName(TEXT("GetRelativePointerPose"));
void IIsdkIHandPointerPose::Execute_GetRelativePointerPose(UObject* O, FTransform& PointerRelativePose, bool& IsValid)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandPointerPose::StaticClass()));
	IsdkIHandPointerPose_eventGetRelativePointerPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandPointerPose_GetRelativePointerPose);
	if (Func)
	{
		Parms.PointerRelativePose=std::move(PointerRelativePose);
		Parms.IsValid=std::move(IsValid);
		O->ProcessEvent(Func, &Parms);
		PointerRelativePose=std::move(Parms.PointerRelativePose);
		IsValid=std::move(Parms.IsValid);
	}
	else if (auto I = (IIsdkIHandPointerPose*)(O->GetNativeInterfaceAddress(UIsdkIHandPointerPose::StaticClass())))
	{
		I->GetRelativePointerPose_Implementation(PointerRelativePose,IsValid);
	}
}
struct Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandPointerPose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "transform used for raycast origin, relative to tracking space." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRelativePointerPose constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerRelativePose;
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRelativePointerPose constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRelativePointerPose Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::NewProp_PointerRelativePose = { "PointerRelativePose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHandPointerPose_eventGetRelativePointerPose_Parms, PointerRelativePose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((IsdkIHandPointerPose_eventGetRelativePointerPose_Parms*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHandPointerPose_eventGetRelativePointerPose_Parms), &Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::NewProp_PointerRelativePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::NewProp_IsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::PropPointers) < 2048);
// ********** End Function GetRelativePointerPose Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandPointerPose, nullptr, "GetRelativePointerPose", 	Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::PropPointers), 
sizeof(IsdkIHandPointerPose_eventGetRelativePointerPose_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandPointerPose_eventGetRelativePointerPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandPointerPose::execGetRelativePointerPose)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_PointerRelativePose);
	P_GET_UBOOL_REF(Z_Param_Out_IsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRelativePointerPose_Implementation(Z_Param_Out_PointerRelativePose,Z_Param_Out_IsValid);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandPointerPose Function GetRelativePointerPose ******************

// ********** Begin Interface UIsdkIHandPointerPose Function IsPointerPoseValid ********************
struct IsdkIHandPointerPose_eventIsPointerPoseValid_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIHandPointerPose_eventIsPointerPoseValid_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIsdkIHandPointerPose::IsPointerPoseValid()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsPointerPoseValid instead.");
	IsdkIHandPointerPose_eventIsPointerPoseValid_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIHandPointerPose_IsPointerPoseValid = FName(TEXT("IsPointerPoseValid"));
bool IIsdkIHandPointerPose::Execute_IsPointerPoseValid(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandPointerPose::StaticClass()));
	IsdkIHandPointerPose_eventIsPointerPoseValid_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandPointerPose_IsPointerPoseValid);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIHandPointerPose*)(O->GetNativeInterfaceAddress(UIsdkIHandPointerPose::StaticClass())))
	{
		Parms.ReturnValue = I->IsPointerPoseValid_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns whether or not the pointer pose on this object is valid */" },
#endif
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandPointerPose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not the pointer pose on this object is valid" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPointerPoseValid constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPointerPoseValid constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPointerPoseValid Property Definitions *******************************
void Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkIHandPointerPose_eventIsPointerPoseValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHandPointerPose_eventIsPointerPoseValid_Parms), &Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::PropPointers) < 2048);
// ********** End Function IsPointerPoseValid Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandPointerPose, nullptr, "IsPointerPoseValid", 	Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::PropPointers), 
sizeof(IsdkIHandPointerPose_eventIsPointerPoseValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandPointerPose_eventIsPointerPoseValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandPointerPose::execIsPointerPoseValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPointerPoseValid_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandPointerPose Function IsPointerPoseValid **********************

// ********** Begin Interface UIsdkIHandPointerPose ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIHandPointerPose;
UClass* UIsdkIHandPointerPose::GetPrivateStaticClass()
{
	using TClass = UIsdkIHandPointerPose;
	if (!Z_Registration_Info_UClass_UIsdkIHandPointerPose.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkIHandPointerPose"),
			Z_Registration_Info_UClass_UIsdkIHandPointerPose.InnerSingleton,
			StaticRegisterNativesUIsdkIHandPointerPose,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UIsdkIHandPointerPose.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister()
{
	return UIsdkIHandPointerPose::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIHandPointerPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "DisplayName", "ISDK Hand Pointer Pose" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandPointerPose.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UIsdkIHandPointerPose constinit property declarations ****************
// ********** End Interface UIsdkIHandPointerPose constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPointerPose"), .Pointer = &IIsdkIHandPointerPose::execGetPointerPose },
		{ .NameUTF8 = UTF8TEXT("GetRelativePointerPose"), .Pointer = &IIsdkIHandPointerPose::execGetRelativePointerPose },
		{ .NameUTF8 = UTF8TEXT("IsPointerPoseValid"), .Pointer = &IIsdkIHandPointerPose::execIsPointerPoseValid },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIHandPointerPose_GetPointerPose, "GetPointerPose" }, // 21448519
		{ &Z_Construct_UFunction_UIsdkIHandPointerPose_GetRelativePointerPose, "GetRelativePointerPose" }, // 3099956892
		{ &Z_Construct_UFunction_UIsdkIHandPointerPose_IsPointerPoseValid, "IsPointerPoseValid" }, // 2942272198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIHandPointerPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkIHandPointerPose_Statics
UObject* (*const Z_Construct_UClass_UIsdkIHandPointerPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIHandPointerPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIHandPointerPose_Statics::ClassParams = {
	&UIsdkIHandPointerPose::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIHandPointerPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIHandPointerPose_Statics::Class_MetaDataParams)
};
void UIsdkIHandPointerPose::StaticRegisterNativesUIsdkIHandPointerPose()
{
	UClass* Class = UIsdkIHandPointerPose::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkIHandPointerPose_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkIHandPointerPose()
{
	if (!Z_Registration_Info_UClass_UIsdkIHandPointerPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIHandPointerPose.OuterSingleton, Z_Construct_UClass_UIsdkIHandPointerPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIHandPointerPose.OuterSingleton;
}
UIsdkIHandPointerPose::UIsdkIHandPointerPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkIHandPointerPose);
// ********** End Interface UIsdkIHandPointerPose **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIHandPointerPose, UIsdkIHandPointerPose::StaticClass, TEXT("UIsdkIHandPointerPose"), &Z_Registration_Info_UClass_UIsdkIHandPointerPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIHandPointerPose), 920478983U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h__Script_OculusInteraction_2305808576{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
