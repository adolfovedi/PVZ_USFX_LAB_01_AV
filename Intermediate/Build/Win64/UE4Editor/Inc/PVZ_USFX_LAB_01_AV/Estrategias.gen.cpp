// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/Estrategias.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategias() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UEstrategias();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void UEstrategias::StaticRegisterNativesUEstrategias()
	{
	}
	UClass* Z_Construct_UClass_UEstrategias_NoRegister()
	{
		return UEstrategias::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategias_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategias_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategias_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EJEMPLO/Estrategy/Estrategias.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategias_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategias>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategias_Statics::ClassParams = {
		&UEstrategias::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstrategias_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategias_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategias()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategias_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategias, 344622939);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<UEstrategias>()
	{
		return UEstrategias::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategias(Z_Construct_UClass_UEstrategias, &UEstrategias::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("UEstrategias"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategias);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
