// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/PlayerControllerCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerCamera() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlayerControllerCamera_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlayerControllerCamera();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	void APlayerControllerCamera::StaticRegisterNativesAPlayerControllerCamera()
	{
	}
	UClass* Z_Construct_UClass_APlayerControllerCamera_NoRegister()
	{
		return APlayerControllerCamera::StaticClass();
	}
	struct Z_Construct_UClass_APlayerControllerCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerControllerCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerCamera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EJEMPLO/Factory_Method/PlayerControllerCamera.h" },
		{ "ModuleRelativePath", "EJEMPLO/Factory_Method/PlayerControllerCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerControllerCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerCamera_Statics::ClassParams = {
		&APlayerControllerCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerControllerCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerControllerCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerControllerCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerCamera, 1010493755);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APlayerControllerCamera>()
	{
		return APlayerControllerCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerCamera(Z_Construct_UClass_APlayerControllerCamera, &APlayerControllerCamera::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APlayerControllerCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
