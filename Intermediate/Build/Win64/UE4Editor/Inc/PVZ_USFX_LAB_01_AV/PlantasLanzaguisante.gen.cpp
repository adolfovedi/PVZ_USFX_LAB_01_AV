// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/PlantasLanzaguisante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlantasLanzaguisante() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantasLanzaguisante_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantasLanzaguisante();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantas();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void APlantasLanzaguisante::StaticRegisterNativesAPlantasLanzaguisante()
	{
	}
	UClass* Z_Construct_UClass_APlantasLanzaguisante_NoRegister()
	{
		return APlantasLanzaguisante::StaticClass();
	}
	struct Z_Construct_UClass_APlantasLanzaguisante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlantasLanzaguisante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantas,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlantasLanzaguisante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Factory_Method/PlantasLanzaguisante.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/PlantasLanzaguisante.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlantasLanzaguisante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlantasLanzaguisante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlantasLanzaguisante_Statics::ClassParams = {
		&APlantasLanzaguisante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlantasLanzaguisante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlantasLanzaguisante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlantasLanzaguisante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlantasLanzaguisante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlantasLanzaguisante, 1650045946);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APlantasLanzaguisante>()
	{
		return APlantasLanzaguisante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlantasLanzaguisante(Z_Construct_UClass_APlantasLanzaguisante, &APlantasLanzaguisante::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APlantasLanzaguisante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlantasLanzaguisante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
