// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_MainAnimInstance_generated_h
#error "MainAnimInstance.generated.h already included, missing '#pragma once' in MainAnimInstance.h"
#endif
#define FIRSTGAME_MainAnimInstance_generated_h

#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_SPARSE_DATA
#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainAnimInstance(); \
	friend struct Z_Construct_UClass_UMainAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMainAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(UMainAnimInstance)


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainAnimInstance(); \
	friend struct Z_Construct_UClass_UMainAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMainAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(UMainAnimInstance)


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainAnimInstance(UMainAnimInstance&&); \
	NO_API UMainAnimInstance(const UMainAnimInstance&); \
public:


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainAnimInstance(UMainAnimInstance&&); \
	NO_API UMainAnimInstance(const UMainAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainAnimInstance)


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_MainAnimInstance_h_12_PROLOG
#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_INCLASS \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_MainAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class UMainAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_MainAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
