// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Decorator/EnemigoCualquiera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCualquiera() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AEnemigoCualquiera_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AEnemigoCualquiera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void AEnemigoCualquiera::StaticRegisterNativesAEnemigoCualquiera()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoCualquiera_NoRegister()
	{
		return AEnemigoCualquiera::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoCualquiera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoCualquiera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoCualquiera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Decorator/EnemigoCualquiera.h" },
		{ "ModuleRelativePath", "EJEMPLO/Decorator/EnemigoCualquiera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoCualquiera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCualquiera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCualquiera_Statics::ClassParams = {
		&AEnemigoCualquiera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoCualquiera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCualquiera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoCualquiera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoCualquiera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoCualquiera, 3602602301);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AEnemigoCualquiera>()
	{
		return AEnemigoCualquiera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoCualquiera(Z_Construct_UClass_AEnemigoCualquiera, &AEnemigoCualquiera::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AEnemigoCualquiera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCualquiera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
