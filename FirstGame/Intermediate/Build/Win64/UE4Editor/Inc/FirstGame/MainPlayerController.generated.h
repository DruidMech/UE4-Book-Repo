// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define FIRSTGAME_MainPlayerController_generated_h

#define FirstGame_Source_FirstGame_MainPlayerController_h_15_SPARSE_DATA
#define FirstGame_Source_FirstGame_MainPlayerController_h_15_RPC_WRAPPERS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
 \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu);


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
 \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu);


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_EVENT_PARMS
#define FirstGame_Source_FirstGame_MainPlayerController_h_15_CALLBACK_WRAPPERS
#define FirstGame_Source_FirstGame_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public:


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController)


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_MainPlayerController_h_12_PROLOG \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_EVENT_PARMS


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_INCLASS \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_MainPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
