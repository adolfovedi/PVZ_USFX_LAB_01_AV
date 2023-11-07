// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieTierraSaltarin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieTierraSaltarin() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieTierraSaltarin_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieTierraSaltarin();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZombieTierraSaltarin::StaticRegisterNativesAZombieTierraSaltarin()
	{
	}
	UClass* Z_Construct_UClass_AZombieTierraSaltarin_NoRegister()
	{
		return AZombieTierraSaltarin::StaticClass();
	}
	struct Z_Construct_UClass_AZombieTierraSaltarin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieMeshSaltarin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieMeshSaltarin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieTierraSaltarin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieTierraSaltarin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Factory_Method/ZombieTierraSaltarin.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieTierraSaltarin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieTierraSaltarin_Statics::NewProp_ZombieMeshSaltarin_MetaData[] = {
		{ "Category", "ZombieTierraSaltarin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieTierraSaltarin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieTierraSaltarin_Statics::NewProp_ZombieMeshSaltarin = { "ZombieMeshSaltarin", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieTierraSaltarin, ZombieMeshSaltarin), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieTierraSaltarin_Statics::NewProp_ZombieMeshSaltarin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraSaltarin_Statics::NewProp_ZombieMeshSaltarin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieTierraSaltarin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieTierraSaltarin_Statics::NewProp_ZombieMeshSaltarin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieTierraSaltarin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieTierraSaltarin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieTierraSaltarin_Statics::ClassParams = {
		&AZombieTierraSaltarin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieTierraSaltarin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraSaltarin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieTierraSaltarin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieTierraSaltarin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieTierraSaltarin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieTierraSaltarin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieTierraSaltarin, 2088873913);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AZombieTierraSaltarin>()
	{
		return AZombieTierraSaltarin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieTierraSaltarin(Z_Construct_UClass_AZombieTierraSaltarin, &AZombieTierraSaltarin::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AZombieTierraSaltarin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieTierraSaltarin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
