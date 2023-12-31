// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_generated_h
#error "PVZ_USFX_LAB_0Q1_AVGameStateBase.generated.h already included, missing '#pragma once' in PVZ_USFX_LAB_0Q1_AVGameStateBase.h"
#endif
#define PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_generated_h

#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_SPARSE_DATA
#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSetScore);


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSetScore);


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPVZ_USFX_LAB_0Q1_AVGameStateBase(); \
	friend struct Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics; \
public: \
	DECLARE_CLASS(APVZ_USFX_LAB_0Q1_AVGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB_01_AV"), NO_API) \
	DECLARE_SERIALIZER(APVZ_USFX_LAB_0Q1_AVGameStateBase)


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPVZ_USFX_LAB_0Q1_AVGameStateBase(); \
	friend struct Z_Construct_UClass_APVZ_USFX_LAB_0Q1_AVGameStateBase_Statics; \
public: \
	DECLARE_CLASS(APVZ_USFX_LAB_0Q1_AVGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB_01_AV"), NO_API) \
	DECLARE_SERIALIZER(APVZ_USFX_LAB_0Q1_AVGameStateBase)


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APVZ_USFX_LAB_0Q1_AVGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APVZ_USFX_LAB_0Q1_AVGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_USFX_LAB_0Q1_AVGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_USFX_LAB_0Q1_AVGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_USFX_LAB_0Q1_AVGameStateBase(APVZ_USFX_LAB_0Q1_AVGameStateBase&&); \
	NO_API APVZ_USFX_LAB_0Q1_AVGameStateBase(const APVZ_USFX_LAB_0Q1_AVGameStateBase&); \
public:


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_USFX_LAB_0Q1_AVGameStateBase(APVZ_USFX_LAB_0Q1_AVGameStateBase&&); \
	NO_API APVZ_USFX_LAB_0Q1_AVGameStateBase(const APVZ_USFX_LAB_0Q1_AVGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_USFX_LAB_0Q1_AVGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_USFX_LAB_0Q1_AVGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APVZ_USFX_LAB_0Q1_AVGameStateBase)


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentScore() { return STRUCT_OFFSET(APVZ_USFX_LAB_0Q1_AVGameStateBase, CurrentScore); }


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_12_PROLOG
#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_SPARSE_DATA \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_RPC_WRAPPERS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_INCLASS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_SPARSE_DATA \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<class APVZ_USFX_LAB_0Q1_AVGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_0Q1_AVGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
