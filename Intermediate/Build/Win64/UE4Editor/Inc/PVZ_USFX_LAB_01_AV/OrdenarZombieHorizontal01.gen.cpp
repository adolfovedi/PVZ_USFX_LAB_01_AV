// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/OrdenarZombieHorizontal01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrdenarZombieHorizontal01() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AOrdenarZombieHorizontal01_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AOrdenarZombieHorizontal01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
// End Cross Module References
	void AOrdenarZombieHorizontal01::StaticRegisterNativesAOrdenarZombieHorizontal01()
	{
	}
	UClass* Z_Construct_UClass_AOrdenarZombieHorizontal01_NoRegister()
	{
		return AOrdenarZombieHorizontal01::StaticClass();
	}
	struct Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Estrategy/OrdenarZombieHorizontal01.h" },
		{ "ModuleRelativePath", "EJEMPLO/Estrategy/OrdenarZombieHorizontal01.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategias_NoRegister, (int32)VTABLE_OFFSET(AOrdenarZombieHorizontal01, IEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrdenarZombieHorizontal01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::ClassParams = {
		&AOrdenarZombieHorizontal01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrdenarZombieHorizontal01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrdenarZombieHorizontal01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrdenarZombieHorizontal01, 4066407025);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AOrdenarZombieHorizontal01>()
	{
		return AOrdenarZombieHorizontal01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrdenarZombieHorizontal01(Z_Construct_UClass_AOrdenarZombieHorizontal01, &AOrdenarZombieHorizontal01::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AOrdenarZombieHorizontal01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrdenarZombieHorizontal01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
