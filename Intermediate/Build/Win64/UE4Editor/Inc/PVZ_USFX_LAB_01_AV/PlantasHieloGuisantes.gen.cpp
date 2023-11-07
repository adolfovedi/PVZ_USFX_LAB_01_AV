// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/PlantasHieloGuisantes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlantasHieloGuisantes() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantasHieloGuisantes_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantasHieloGuisantes();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantas();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void APlantasHieloGuisantes::StaticRegisterNativesAPlantasHieloGuisantes()
	{
	}
	UClass* Z_Construct_UClass_APlantasHieloGuisantes_NoRegister()
	{
		return APlantasHieloGuisantes::StaticClass();
	}
	struct Z_Construct_UClass_APlantasHieloGuisantes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlantasHieloGuisantes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantas,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlantasHieloGuisantes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Factory_Method/PlantasHieloGuisantes.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/PlantasHieloGuisantes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlantasHieloGuisantes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlantasHieloGuisantes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlantasHieloGuisantes_Statics::ClassParams = {
		&APlantasHieloGuisantes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlantasHieloGuisantes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlantasHieloGuisantes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlantasHieloGuisantes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlantasHieloGuisantes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlantasHieloGuisantes, 1971874453);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APlantasHieloGuisantes>()
	{
		return APlantasHieloGuisantes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlantasHieloGuisantes(Z_Construct_UClass_APlantasHieloGuisantes, &APlantasHieloGuisantes::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APlantasHieloGuisantes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlantasHieloGuisantes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
