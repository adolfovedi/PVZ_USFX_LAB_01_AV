// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieTierraGlobo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieTierraGlobo() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieTierraGlobo_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieTierraGlobo();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZombieTierraGlobo::StaticRegisterNativesAZombieTierraGlobo()
	{
	}
	UClass* Z_Construct_UClass_AZombieTierraGlobo_NoRegister()
	{
		return AZombieTierraGlobo::StaticClass();
	}
	struct Z_Construct_UClass_AZombieTierraGlobo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieMeshGlobo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieMeshGlobo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieTierraGlobo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieTierraGlobo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Factory_Method/ZombieTierraGlobo.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieTierraGlobo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieTierraGlobo_Statics::NewProp_ZombieMeshGlobo_MetaData[] = {
		{ "Category", "ZombieTierraGlobo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieTierraGlobo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieTierraGlobo_Statics::NewProp_ZombieMeshGlobo = { "ZombieMeshGlobo", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieTierraGlobo, ZombieMeshGlobo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieTierraGlobo_Statics::NewProp_ZombieMeshGlobo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraGlobo_Statics::NewProp_ZombieMeshGlobo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieTierraGlobo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieTierraGlobo_Statics::NewProp_ZombieMeshGlobo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieTierraGlobo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieTierraGlobo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieTierraGlobo_Statics::ClassParams = {
		&AZombieTierraGlobo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieTierraGlobo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraGlobo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieTierraGlobo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraGlobo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieTierraGlobo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieTierraGlobo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieTierraGlobo, 149698459);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AZombieTierraGlobo>()
	{
		return AZombieTierraGlobo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieTierraGlobo(Z_Construct_UClass_AZombieTierraGlobo, &AZombieTierraGlobo::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AZombieTierraGlobo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieTierraGlobo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
