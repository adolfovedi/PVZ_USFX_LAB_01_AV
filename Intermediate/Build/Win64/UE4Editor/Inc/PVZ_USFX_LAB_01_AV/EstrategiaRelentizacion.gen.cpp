// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/EstrategiaRelentizacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaRelentizacion() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AEstrategiaRelentizacion_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AEstrategiaRelentizacion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UEstrategias_NoRegister();
// End Cross Module References
	void AEstrategiaRelentizacion::StaticRegisterNativesAEstrategiaRelentizacion()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaRelentizacion_NoRegister()
	{
		return AEstrategiaRelentizacion::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaRelentizacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaRelentizacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaRelentizacion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Estrategy/EstrategiaRelentizacion.h" },
		{ "ModuleRelativePath", "EJEMPLO/Estrategy/EstrategiaRelentizacion.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaRelentizacion_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategias_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaRelentizacion, IEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaRelentizacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaRelentizacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaRelentizacion_Statics::ClassParams = {
		&AEstrategiaRelentizacion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaRelentizacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaRelentizacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaRelentizacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaRelentizacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaRelentizacion, 3834350996);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AEstrategiaRelentizacion>()
	{
		return AEstrategiaRelentizacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaRelentizacion(Z_Construct_UClass_AEstrategiaRelentizacion, &AEstrategiaRelentizacion::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AEstrategiaRelentizacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaRelentizacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
