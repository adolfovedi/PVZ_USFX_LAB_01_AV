// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/PVZ_USFX_LAB_0Q1_AVGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVZ_USFX_LAB_0Q1_AVGameStateBase() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticRegisterNativesAPVZ_USFX_LAB_0Q1_AVGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_NoRegister()
	{
		return APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVZ_USFX_LAB_0Q1_AVGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::ClassParams = {
		&APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVZ_USFX_LAB_0Q1_AVGameStateBase, 2551943291);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APVZ_USFX_LAB_0Q1_AVGameStateBase>()
	{
		return APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase, &APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APVZ_USFX_LAB_0Q1_AVGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVZ_USFX_LAB_0Q1_AVGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
