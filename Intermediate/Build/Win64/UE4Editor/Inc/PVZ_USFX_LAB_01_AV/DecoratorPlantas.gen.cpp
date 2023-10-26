// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Decorator/DecoratorPlantas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorPlantas() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_ADecoratorPlantas_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_ADecoratorPlantas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void ADecoratorPlantas::StaticRegisterNativesADecoratorPlantas()
	{
	}
	UClass* Z_Construct_UClass_ADecoratorPlantas_NoRegister()
	{
		return ADecoratorPlantas::StaticClass();
	}
	struct Z_Construct_UClass_ADecoratorPlantas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoratorPlantas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoratorPlantas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Decorator/DecoratorPlantas.h" },
		{ "ModuleRelativePath", "EJEMPLO/Decorator/DecoratorPlantas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoratorPlantas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoratorPlantas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoratorPlantas_Statics::ClassParams = {
		&ADecoratorPlantas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecoratorPlantas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoratorPlantas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoratorPlantas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoratorPlantas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoratorPlantas, 1543584806);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<ADecoratorPlantas>()
	{
		return ADecoratorPlantas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoratorPlantas(Z_Construct_UClass_ADecoratorPlantas, &ADecoratorPlantas::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("ADecoratorPlantas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoratorPlantas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
