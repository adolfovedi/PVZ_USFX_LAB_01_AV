// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/Observer_Principal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver_Principal() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AObserver_Principal_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AObserver_Principal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void AObserver_Principal::StaticRegisterNativesAObserver_Principal()
	{
	}
	UClass* Z_Construct_UClass_AObserver_Principal_NoRegister()
	{
		return AObserver_Principal::StaticClass();
	}
	struct Z_Construct_UClass_AObserver_Principal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserver_Principal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserver_Principal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EJEMPLO/Observer/Observer_Principal.h" },
		{ "ModuleRelativePath", "EJEMPLO/Observer/Observer_Principal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserver_Principal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserver_Principal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserver_Principal_Statics::ClassParams = {
		&AObserver_Principal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObserver_Principal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserver_Principal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserver_Principal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserver_Principal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserver_Principal, 3566083928);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AObserver_Principal>()
	{
		return AObserver_Principal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserver_Principal(Z_Construct_UClass_AObserver_Principal, &AObserver_Principal::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AObserver_Principal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserver_Principal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
