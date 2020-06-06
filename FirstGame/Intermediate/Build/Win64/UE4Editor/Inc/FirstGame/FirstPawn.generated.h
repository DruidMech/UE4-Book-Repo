// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstPawn_generated_h
#error "FirstPawn.generated.h already included, missing '#pragma once' in FirstPawn.h"
#endif
#define FIRSTGAME_FirstPawn_generated_h

#define FirstGame_Source_FirstGame_FirstPawn_h_12_SPARSE_DATA
#define FirstGame_Source_FirstGame_FirstPawn_h_12_RPC_WRAPPERS
#define FirstGame_Source_FirstGame_FirstPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstGame_Source_FirstGame_FirstPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPawn(); \
	friend struct Z_Construct_UClass_AFirstPawn_Statics; \
public: \
	DECLARE_CLASS(AFirstPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPawn)


#define FirstGame_Source_FirstGame_FirstPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPawn(); \
	friend struct Z_Construct_UClass_AFirstPawn_Statics; \
public: \
	DECLARE_CLASS(AFirstPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPawn)


#define FirstGame_Source_FirstGame_FirstPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPawn(AFirstPawn&&); \
	NO_API AFirstPawn(const AFirstPawn&); \
public:


#define FirstGame_Source_FirstGame_FirstPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPawn(AFirstPawn&&); \
	NO_API AFirstPawn(const AFirstPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPawn)


#define FirstGame_Source_FirstGame_FirstPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AFirstPawn, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFirstPawn, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFirstPawn, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AFirstPawn, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(AFirstPawn, Direction); }


#define FirstGame_Source_FirstGame_FirstPawn_h_9_PROLOG
#define FirstGame_Source_FirstGame_FirstPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstPawn_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_FirstPawn_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_FirstPawn_h_12_INCLASS \
	FirstGame_Source_FirstGame_FirstPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_FirstPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstPawn_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_FirstPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstPawn_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFirstPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_FirstPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
