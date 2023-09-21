// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_generated_h
#error "PVZ_USFX_LAB_01_AVProjectile.generated.h already included, missing '#pragma once' in PVZ_USFX_LAB_01_AVProjectile.h"
#endif
#define PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_generated_h

#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_SPARSE_DATA
#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPVZ_USFX_LAB_01_AVProjectile(); \
	friend struct Z_Construct_UClass_APVZ_USFX_LAB_01_AVProjectile_Statics; \
public: \
	DECLARE_CLASS(APVZ_USFX_LAB_01_AVProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB_01_AV"), NO_API) \
	DECLARE_SERIALIZER(APVZ_USFX_LAB_01_AVProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPVZ_USFX_LAB_01_AVProjectile(); \
	friend struct Z_Construct_UClass_APVZ_USFX_LAB_01_AVProjectile_Statics; \
public: \
	DECLARE_CLASS(APVZ_USFX_LAB_01_AVProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB_01_AV"), NO_API) \
	DECLARE_SERIALIZER(APVZ_USFX_LAB_01_AVProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APVZ_USFX_LAB_01_AVProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APVZ_USFX_LAB_01_AVProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_USFX_LAB_01_AVProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_USFX_LAB_01_AVProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_USFX_LAB_01_AVProjectile(APVZ_USFX_LAB_01_AVProjectile&&); \
	NO_API APVZ_USFX_LAB_01_AVProjectile(const APVZ_USFX_LAB_01_AVProjectile&); \
public:


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_USFX_LAB_01_AVProjectile(APVZ_USFX_LAB_01_AVProjectile&&); \
	NO_API APVZ_USFX_LAB_01_AVProjectile(const APVZ_USFX_LAB_01_AVProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_USFX_LAB_01_AVProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_USFX_LAB_01_AVProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APVZ_USFX_LAB_01_AVProjectile)


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APVZ_USFX_LAB_01_AVProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APVZ_USFX_LAB_01_AVProjectile, ProjectileMovement); }


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_12_PROLOG
#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_SPARSE_DATA \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_RPC_WRAPPERS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_INCLASS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_SPARSE_DATA \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB_01_AV_API UClass* StaticClass<class APVZ_USFX_LAB_01_AVProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB_01_AV_Source_PVZ_USFX_LAB_01_AV_PVZ_USFX_LAB_01_AVProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
