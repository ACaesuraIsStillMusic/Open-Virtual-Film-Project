// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVFPVPUtilitiesAdd/Public/OVFPVPUtilitiesAddBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVFPVPUtilitiesAddBPLibrary() {}
// Cross Module References
	OVFPVPUTILITIESADD_API UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_NoRegister();
	OVFPVPUTILITIESADD_API UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd();
	OVFPVPUTILITIESADD_API UScriptStruct* Z_Construct_UScriptStruct_FOVFPVPUtilitySettings();
// End Cross Module References
	DEFINE_FUNCTION(UOVFPVPUtilitiesAddBPLibrary::execOVFPVPUtilitySettingArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOVFPVPUtilitySettings>*)Z_Param__Result=UOVFPVPUtilitiesAddBPLibrary::OVFPVPUtilitySettingArray();
		P_NATIVE_END;
	}
	void UOVFPVPUtilitiesAddBPLibrary::StaticRegisterNativesUOVFPVPUtilitiesAddBPLibrary()
	{
		UClass* Class = UOVFPVPUtilitiesAddBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OVFPVPUtilitySettingArray", &UOVFPVPUtilitiesAddBPLibrary::execOVFPVPUtilitySettingArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics
	{
		struct OVFPVPUtilitiesAddBPLibrary_eventOVFPVPUtilitySettingArray_Parms
		{
			TArray<FOVFPVPUtilitySettings> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOVFPVPUtilitySettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPVPUtilitiesAddBPLibrary_eventOVFPVPUtilitySettingArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get OVFP VP Utility Settings" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary, nullptr, "OVFPVPUtilitySettingArray", nullptr, nullptr, sizeof(OVFPVPUtilitiesAddBPLibrary_eventOVFPVPUtilitySettingArray_Parms), Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_NoRegister()
	{
		return UOVFPVPUtilitiesAddBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVFPVPUtilitiesAddBPLibrary_OVFPVPUtilitySettingArray, "OVFPVPUtilitySettingArray" }, // 2165231020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OVFPVPUtilitiesAddBPLibrary.h" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVFPVPUtilitiesAddBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::ClassParams = {
		&UOVFPVPUtilitiesAddBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVFPVPUtilitiesAddBPLibrary, 3095847039);
	template<> OVFPVPUTILITIESADD_API UClass* StaticClass<UOVFPVPUtilitiesAddBPLibrary>()
	{
		return UOVFPVPUtilitiesAddBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVFPVPUtilitiesAddBPLibrary(Z_Construct_UClass_UOVFPVPUtilitiesAddBPLibrary, &UOVFPVPUtilitiesAddBPLibrary::StaticClass, TEXT("/Script/OVFPVPUtilitiesAdd"), TEXT("UOVFPVPUtilitiesAddBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVFPVPUtilitiesAddBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
