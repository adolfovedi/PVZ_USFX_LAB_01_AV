// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/Grilla_Pasto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrilla_Pasto() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AGrilla_Pasto_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AGrilla_Pasto();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AGrilla();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void AGrilla_Pasto::StaticRegisterNativesAGrilla_Pasto()
	{
	}
	UClass* Z_Construct_UClass_AGrilla_Pasto_NoRegister()
	{
		return AGrilla_Pasto::StaticClass();
	}
	struct Z_Construct_UClass_AGrilla_Pasto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrilla_Pasto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrilla,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrilla_Pasto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Grilla_Pasto.h" },
		{ "ModuleRelativePath", "Grilla_Pasto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrilla_Pasto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrilla_Pasto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrilla_Pasto_Statics::ClassParams = {
		&AGrilla_Pasto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrilla_Pasto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrilla_Pasto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrilla_Pasto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrilla_Pasto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrilla_Pasto, 497193862);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AGrilla_Pasto>()
	{
		return AGrilla_Pasto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrilla_Pasto(Z_Construct_UClass_AGrilla_Pasto, &AGrilla_Pasto::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AGrilla_Pasto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrilla_Pasto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
