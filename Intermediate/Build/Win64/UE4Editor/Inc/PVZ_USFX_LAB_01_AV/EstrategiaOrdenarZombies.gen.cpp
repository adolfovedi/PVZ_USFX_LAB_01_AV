// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/EstrategiaOrdenarZombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaOrdenarZombies() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AEstrategiaOrdenarZombies_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AEstrategiaOrdenarZombies();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
// End Cross Module References
	void AEstrategiaOrdenarZombies::StaticRegisterNativesAEstrategiaOrdenarZombies()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaOrdenarZombies_NoRegister()
	{
		return AEstrategiaOrdenarZombies::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Estrategy/EstrategiaOrdenarZombies.h" },
		{ "ModuleRelativePath", "EJEMPLO/Estrategy/EstrategiaOrdenarZombies.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategias_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaOrdenarZombies, IEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaOrdenarZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::ClassParams = {
		&AEstrategiaOrdenarZombies::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaOrdenarZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaOrdenarZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaOrdenarZombies, 504397985);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AEstrategiaOrdenarZombies>()
	{
		return AEstrategiaOrdenarZombies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaOrdenarZombies(Z_Construct_UClass_AEstrategiaOrdenarZombies, &AEstrategiaOrdenarZombies::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AEstrategiaOrdenarZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaOrdenarZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
