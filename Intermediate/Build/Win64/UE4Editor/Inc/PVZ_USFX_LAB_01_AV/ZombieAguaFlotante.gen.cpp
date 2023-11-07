// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieAguaFlotante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAguaFlotante() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieAguaFlotante_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombieAguaFlotante();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZombieAguaFlotante::StaticRegisterNativesAZombieAguaFlotante()
	{
	}
	UClass* Z_Construct_UClass_AZombieAguaFlotante_NoRegister()
	{
		return AZombieAguaFlotante::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAguaFlotante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieMeshFlotante_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieMeshFlotante;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAguaFlotante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAguaFlotante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Factory_Method/ZombieAguaFlotante.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieAguaFlotante.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAguaFlotante_Statics::NewProp_ZombieMeshFlotante_MetaData[] = {
		{ "Category", "ZombieAguaFlotante" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/ZombieAguaFlotante.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAguaFlotante_Statics::NewProp_ZombieMeshFlotante = { "ZombieMeshFlotante", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAguaFlotante, ZombieMeshFlotante), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAguaFlotante_Statics::NewProp_ZombieMeshFlotante_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAguaFlotante_Statics::NewProp_ZombieMeshFlotante_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieAguaFlotante_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAguaFlotante_Statics::NewProp_ZombieMeshFlotante,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAguaFlotante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAguaFlotante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAguaFlotante_Statics::ClassParams = {
		&AZombieAguaFlotante::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieAguaFlotante_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAguaFlotante_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAguaFlotante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAguaFlotante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAguaFlotante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAguaFlotante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAguaFlotante, 2244949614);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AZombieAguaFlotante>()
	{
		return AZombieAguaFlotante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAguaFlotante(Z_Construct_UClass_AZombieAguaFlotante, &AZombieAguaFlotante::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AZombieAguaFlotante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAguaFlotante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
