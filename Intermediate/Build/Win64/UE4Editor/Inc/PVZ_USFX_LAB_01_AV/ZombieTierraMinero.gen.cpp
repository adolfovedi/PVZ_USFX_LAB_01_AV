// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieTierraMinero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieTierraMinero() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieTierraMinero_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieTierraMinero();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void AZombieTierraMinero::StaticRegisterNativesAZombieTierraMinero()
	{
	}
	UClass* Z_Construct_UClass_AZombieTierraMinero_NoRegister()
	{
		return AZombieTierraMinero::StaticClass();
	}
	struct Z_Construct_UClass_AZombieTierraMinero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieTierraMinero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieTierraMinero_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Factory_Method/ZombieTierraMinero.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieTierraMinero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieTierraMinero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieTierraMinero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieTierraMinero_Statics::ClassParams = {
		&AZombieTierraMinero::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieTierraMinero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraMinero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieTierraMinero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieTierraMinero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieTierraMinero, 1593613260);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AZombieTierraMinero>()
	{
		return AZombieTierraMinero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieTierraMinero(Z_Construct_UClass_AZombieTierraMinero, &AZombieTierraMinero::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AZombieTierraMinero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieTierraMinero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
