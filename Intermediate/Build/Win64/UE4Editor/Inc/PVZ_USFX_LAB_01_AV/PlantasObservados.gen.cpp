// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/PlantasObservados.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlantasObservados() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantasObservados_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantasObservados();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APlantas();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_ATorreLocalizacion_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_UCambioDestino_NoRegister();
// End Cross Module References
	void APlantasObservados::StaticRegisterNativesAPlantasObservados()
	{
	}
	UClass* Z_Construct_UClass_APlantasObservados_NoRegister()
	{
		return APlantasObservados::StaticClass();
	}
	struct Z_Construct_UClass_APlantasObservados_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorreLocalizacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TorreLocalizacion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlantasObservados_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantas,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlantasObservados_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EJEMPLO/Observer/PlantasObservados.h" },
		{ "ModuleRelativePath", "EJEMPLO/Observer/PlantasObservados.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlantasObservados_Statics::NewProp_TorreLocalizacion_MetaData[] = {
		{ "Comment", "//El zombie de este suscriptor\n" },
		{ "ModuleRelativePath", "EJEMPLO/Observer/PlantasObservados.h" },
		{ "ToolTip", "El zombie de este suscriptor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlantasObservados_Statics::NewProp_TorreLocalizacion = { "TorreLocalizacion", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlantasObservados, TorreLocalizacion), Z_Construct_UClass_ATorreLocalizacion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlantasObservados_Statics::NewProp_TorreLocalizacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlantasObservados_Statics::NewProp_TorreLocalizacion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlantasObservados_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlantasObservados_Statics::NewProp_TorreLocalizacion,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlantasObservados_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USuscriptor_NoRegister, (int32)VTABLE_OFFSET(APlantasObservados, ISuscriptor), false },
			{ Z_Construct_UClass_UCambioDestino_NoRegister, (int32)VTABLE_OFFSET(APlantasObservados, ICambioDestino), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlantasObservados_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlantasObservados>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlantasObservados_Statics::ClassParams = {
		&APlantasObservados::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlantasObservados_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlantasObservados_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlantasObservados_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlantasObservados_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlantasObservados()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlantasObservados_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlantasObservados, 649752320);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APlantasObservados>()
	{
		return APlantasObservados::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlantasObservados(Z_Construct_UClass_APlantasObservados, &APlantasObservados::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APlantasObservados"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlantasObservados);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
