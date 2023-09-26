// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/Fenix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFenix() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AFenix_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_AFenix();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFenix::StaticRegisterNativesAFenix()
	{
	}
	UClass* Z_Construct_UClass_AFenix_NoRegister()
	{
		return AFenix::StaticClass();
	}
	struct Z_Construct_UClass_AFenix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlantMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlantMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFenix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFenix_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fenix.h" },
		{ "ModuleRelativePath", "Fenix.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFenix_Statics::NewProp_PlantMesh_MetaData[] = {
		{ "Category", "Fenix" },
		{ "Comment", "// Property to hold the static mesh component (assuming you're using a static mesh to represent the plant)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fenix.h" },
		{ "ToolTip", "Property to hold the static mesh component (assuming you're using a static mesh to represent the plant)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFenix_Statics::NewProp_PlantMesh = { "PlantMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFenix, PlantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFenix_Statics::NewProp_PlantMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFenix_Statics::NewProp_PlantMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFenix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFenix_Statics::NewProp_PlantMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFenix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFenix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFenix_Statics::ClassParams = {
		&AFenix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFenix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFenix_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFenix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFenix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFenix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFenix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFenix, 1220770947);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<AFenix>()
	{
		return AFenix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFenix(Z_Construct_UClass_AFenix, &AFenix::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("AFenix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFenix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
