// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/TorreLocalizacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTorreLocalizacion() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_ATorreLocalizacion_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_ATorreLocalizacion();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APublicador();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void ATorreLocalizacion::StaticRegisterNativesATorreLocalizacion()
	{
	}
	UClass* Z_Construct_UClass_ATorreLocalizacion_NoRegister()
	{
		return ATorreLocalizacion::StaticClass();
	}
	struct Z_Construct_UClass_ATorreLocalizacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATorreLocalizacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicador,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATorreLocalizacion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Observer/TorreLocalizacion.h" },
		{ "ModuleRelativePath", "EJEMPLO/Observer/TorreLocalizacion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATorreLocalizacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATorreLocalizacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATorreLocalizacion_Statics::ClassParams = {
		&ATorreLocalizacion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATorreLocalizacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATorreLocalizacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATorreLocalizacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATorreLocalizacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATorreLocalizacion, 2339816391);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<ATorreLocalizacion>()
	{
		return ATorreLocalizacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATorreLocalizacion(Z_Construct_UClass_ATorreLocalizacion, &ATorreLocalizacion::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("ATorreLocalizacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATorreLocalizacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
