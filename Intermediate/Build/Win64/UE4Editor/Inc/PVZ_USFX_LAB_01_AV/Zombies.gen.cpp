// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/Zombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombies() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombies_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombies();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AZombies::StaticRegisterNativesAZombies()
	{
	}
	UClass* Z_Construct_UClass_AZombies_NoRegister()
	{
		return AZombies::StaticClass();
	}
	struct Z_Construct_UClass_AZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieBoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Factory_Method/Zombies.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/Zombies.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_ZombieMeshComponent_MetaData[] = {
		{ "Category", "Zombies" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_ZombieMeshComponent = { "ZombieMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombies, ZombieMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_ZombieMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_ZombieMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_ZombieBoxComponent_MetaData[] = {
		{ "Category", "Zombies" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_ZombieBoxComponent = { "ZombieBoxComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombies, ZombieBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_ZombieBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_ZombieBoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_ZombieMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_ZombieBoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombies_Statics::ClassParams = {
		&AZombies::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombies_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombies, 3770171499);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AZombies>()
	{
		return AZombies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombies(Z_Construct_UClass_AZombies, &AZombies::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
