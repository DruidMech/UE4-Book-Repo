// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_RotatingActor_generated_h
#error "RotatingActor.generated.h already included, missing '#pragma once' in RotatingActor.h"
#endif
#define FIRSTGAME_RotatingActor_generated_h

#define FirstGame_Source_FirstGame_RotatingActor_h_12_SPARSE_DATA
#define FirstGame_Source_FirstGame_RotatingActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRotationRate);


#define FirstGame_Source_FirstGame_RotatingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRotationRate);


#define FirstGame_Source_FirstGame_RotatingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotatingActor(); \
	friend struct Z_Construct_UClass_ARotatingActor_Statics; \
public: \
	DECLARE_CLASS(ARotatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ARotatingActor)


#define FirstGame_Source_FirstGame_RotatingActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARotatingActor(); \
	friend struct Z_Construct_UClass_ARotatingActor_Statics; \
public: \
	DECLARE_CLASS(ARotatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ARotatingActor)


#define FirstGame_Source_FirstGame_RotatingActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARotatingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARotatingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotatingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARotatingActor(ARotatingActor&&); \
	NO_API ARotatingActor(const ARotatingActor&); \
public:


#define FirstGame_Source_FirstGame_RotatingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARotatingActor(ARotatingActor&&); \
	NO_API ARotatingActor(const ARotatingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotatingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotatingActor)


#define FirstGame_Source_FirstGame_RotatingActor_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_RotatingActor_h_9_PROLOG
#define FirstGame_Source_FirstGame_RotatingActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_RotatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_RotatingActor_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_RotatingActor_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_RotatingActor_h_12_INCLASS \
	FirstGame_Source_FirstGame_RotatingActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_RotatingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_RotatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_RotatingActor_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_RotatingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_RotatingActor_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_RotatingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class ARotatingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_RotatingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
