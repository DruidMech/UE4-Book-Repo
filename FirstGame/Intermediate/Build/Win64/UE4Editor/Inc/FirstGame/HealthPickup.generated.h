// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_HealthPickup_generated_h
#error "HealthPickup.generated.h already included, missing '#pragma once' in HealthPickup.h"
#endif
#define FIRSTGAME_HealthPickup_generated_h

#define FirstGame_Source_FirstGame_HealthPickup_h_15_SPARSE_DATA
#define FirstGame_Source_FirstGame_HealthPickup_h_15_RPC_WRAPPERS
#define FirstGame_Source_FirstGame_HealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstGame_Source_FirstGame_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define FirstGame_Source_FirstGame_HealthPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define FirstGame_Source_FirstGame_HealthPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public:


#define FirstGame_Source_FirstGame_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickup)


#define FirstGame_Source_FirstGame_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_HealthPickup_h_12_PROLOG
#define FirstGame_Source_FirstGame_HealthPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_HealthPickup_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_HealthPickup_h_15_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_HealthPickup_h_15_INCLASS \
	FirstGame_Source_FirstGame_HealthPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_HealthPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_HealthPickup_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_HealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AHealthPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_HealthPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
