// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB_01_AV/PVZ_USFX_LAB_0Q1_AVGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVZ_USFX_LAB_0Q1_AVGameStateBase() {}
// Cross Module References
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_NoRegister();
	PVZ_USFX_LAB_01_AV_API UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV();
// End Cross Module References
	DEFINE_FUNCTION(APVZ_USFX_LAB_0Q1_AVGameStateBase::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APVZ_USFX_LAB_0Q1_AVGameStateBase::execSetScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScore(Z_Param_NewScore);
		P_NATIVE_END;
	}
	void APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticRegisterNativesAPVZ_USFX_LAB_0Q1_AVGameStateBase()
	{
		UClass* Class = APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &APVZ_USFX_LAB_0Q1_AVGameStateBase::execGetScore },
			{ "SetScore", &APVZ_USFX_LAB_0Q1_AVGameStateBase::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics
	{
		struct PVZ_USFX_LAB_0Q1_AVGameStateBase_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVZ_USFX_LAB_0Q1_AVGameStateBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase, nullptr, "GetScore", nullptr, nullptr, sizeof(PVZ_USFX_LAB_0Q1_AVGameStateBase_eventGetScore_Parms), Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics
	{
		struct PVZ_USFX_LAB_0Q1_AVGameStateBase_eventSetScore_Parms
		{
			int32 NewScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVZ_USFX_LAB_0Q1_AVGameStateBase_eventSetScore_Parms, NewScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase, nullptr, "SetScore", nullptr, nullptr, sizeof(PVZ_USFX_LAB_0Q1_AVGameStateBase_eventSetScore_Parms), Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_NoRegister()
	{
		return APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB_01_AV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_GetScore, "GetScore" }, // 2792992388
		{ &Z_Construct_UFunction_APVZ_USFX_LAB_0Q1_AVGameStateBase_SetScore, "SetScore" }, // 1786015157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "ModuleRelativePath", "PVZ_USFX_LAB_0Q1_AVGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB_0Q1_AVGameStateBase, CurrentScore), METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::NewProp_CurrentScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::NewProp_CurrentScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::NewProp_CurrentScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVZ_USFX_LAB_0Q1_AVGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::ClassParams = {
		&APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVZ_USFX_LAB_0Q1_AVGameStateBase, 3807775148);
	template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<APVZ_USFX_LAB_0Q1_AVGameStateBase>()
	{
		return APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase(Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase, &APVZ_USFX_LAB_0Q1_AVGameStateBase::StaticClass, TEXT("/Script/PVZ_USFX_LAB_01_AV"), TEXT("APVZ_USFX_LAB_0Q1_AVGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVZ_USFX_LAB_0Q1_AVGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
