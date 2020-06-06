// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstGameCharacter_generated_h
#error "FirstGameCharacter.generated.h already included, missing '#pragma once' in FirstGameCharacter.h"
#endif
#define FIRSTGAME_FirstGameCharacter_generated_h

#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_SPARSE_DATA
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_RPC_WRAPPERS
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameCharacter)


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameCharacter)


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameCharacter(AFirstGameCharacter&&); \
	NO_API AFirstGameCharacter(const AFirstGameCharacter&); \
public:


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameCharacter(AFirstGameCharacter&&); \
	NO_API AFirstGameCharacter(const AFirstGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameCharacter)


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFirstGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFirstGameCharacter, FollowCamera); }


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_9_PROLOG
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_INCLASS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFirstGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_FirstGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
