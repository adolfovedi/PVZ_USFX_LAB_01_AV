// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/OrdenarZombieVertical.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrdenarZombieVertical() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AOrdenarZombieVertical_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AOrdenarZombieVertical();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
// End Cross Module References
	void AOrdenarZombieVertical::StaticRegisterNativesAOrdenarZombieVertical()
	{
	}
	UClass* Z_Construct_UClass_AOrdenarZombieVertical_NoRegister()
	{
		return AOrdenarZombieVertical::StaticClass();
	}
	struct Z_Construct_UClass_AOrdenarZombieVertical_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrdenarZombieVertical_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrdenarZombieVertical_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Estrategy/OrdenarZombieVertical.h" },
		{ "ModuleRelativePath", "EJEMPLO/Estrategy/OrdenarZombieVertical.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOrdenarZombieVertical_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategias_NoRegister, (int32)VTABLE_OFFSET(AOrdenarZombieVertical, IEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrdenarZombieVertical_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrdenarZombieVertical>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrdenarZombieVertical_Statics::ClassParams = {
		&AOrdenarZombieVertical::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrdenarZombieVertical_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrdenarZombieVertical_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrdenarZombieVertical()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrdenarZombieVertical_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrdenarZombieVertical, 3684263568);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AOrdenarZombieVertical>()
	{
		return AOrdenarZombieVertical::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrdenarZombieVertical(Z_Construct_UClass_AOrdenarZombieVertical, &AOrdenarZombieVertical::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AOrdenarZombieVertical"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrdenarZombieVertical);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
