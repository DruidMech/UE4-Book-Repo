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
struct FHitResult;
#ifdef FIRSTGAME_FloorSwitch_generated_h
#error "FloorSwitch.generated.h already included, missing '#pragma once' in FloorSwitch.h"
#endif
#define FIRSTGAME_FloorSwitch_generated_h

#define FirstGame_Source_FirstGame_FloorSwitch_h_12_SPARSE_DATA
#define FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateFloorSwitchLocations); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execActivateSwitchTargets);


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateFloorSwitchLocations); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execActivateSwitchTargets);


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_EVENT_PARMS
#define FirstGame_Source_FirstGame_FloorSwitch_h_12_CALLBACK_WRAPPERS
#define FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorSwitch(); \
	friend struct Z_Construct_UClass_AFloorSwitch_Statics; \
public: \
	DECLARE_CLASS(AFloorSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFloorSwitch)


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloorSwitch(); \
	friend struct Z_Construct_UClass_AFloorSwitch_Statics; \
public: \
	DECLARE_CLASS(AFloorSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFloorSwitch)


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorSwitch(AFloorSwitch&&); \
	NO_API AFloorSwitch(const AFloorSwitch&); \
public:


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorSwitch(AFloorSwitch&&); \
	NO_API AFloorSwitch(const AFloorSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorSwitch)


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_FloorSwitch_h_9_PROLOG \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_EVENT_PARMS


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_SPARSE_DATA \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFloorSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_FloorSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
