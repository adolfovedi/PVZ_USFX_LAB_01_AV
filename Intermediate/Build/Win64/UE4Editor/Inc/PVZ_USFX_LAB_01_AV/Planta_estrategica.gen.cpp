// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/Planta_estrategica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanta_estrategica() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlanta_estrategica_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlanta_estrategica();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantas();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void APlanta_estrategica::StaticRegisterNativesAPlanta_estrategica()
	{
	}
	UClass* Z_Construct_UClass_APlanta_estrategica_NoRegister()
	{
		return APlanta_estrategica::StaticClass();
	}
	struct Z_Construct_UClass_APlanta_estrategica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanta_estrategica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantas,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanta_estrategica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Estrategy/Planta_estrategica.h" },
		{ "ModuleRelativePath", "EJEMPLO/Estrategy/Planta_estrategica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanta_estrategica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanta_estrategica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanta_estrategica_Statics::ClassParams = {
		&APlanta_estrategica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlanta_estrategica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanta_estrategica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanta_estrategica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanta_estrategica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanta_estrategica, 1511339203);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APlanta_estrategica>()
	{
		return APlanta_estrategica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanta_estrategica(Z_Construct_UClass_APlanta_estrategica, &APlanta_estrategica::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APlanta_estrategica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanta_estrategica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
