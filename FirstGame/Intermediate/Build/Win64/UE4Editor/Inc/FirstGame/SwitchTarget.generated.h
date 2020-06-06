// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_SwitchTarget_generated_h
#error "SwitchTarget.generated.h already included, missing '#pragma once' in SwitchTarget.h"
#endif
#define FIRSTGAME_SwitchTarget_generated_h

#define FirstGame_Source_FirstGame_SwitchTarget_h_14_SPARSE_DATA
#define FirstGame_Source_FirstGame_SwitchTarget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSwitchLocation);


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSwitchLocation);


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_EVENT_PARMS
#define FirstGame_Source_FirstGame_SwitchTarget_h_14_CALLBACK_WRAPPERS
#define FirstGame_Source_FirstGame_SwitchTarget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwitchTarget(); \
	friend struct Z_Construct_UClass_ASwitchTarget_Statics; \
public: \
	DECLARE_CLASS(ASwitchTarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ASwitchTarget) \
	virtual UObject* _getUObject() const override { return const_cast<ASwitchTarget*>(this); }


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASwitchTarget(); \
	friend struct Z_Construct_UClass_ASwitchTarget_Statics; \
public: \
	DECLARE_CLASS(ASwitchTarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ASwitchTarget) \
	virtual UObject* _getUObject() const override { return const_cast<ASwitchTarget*>(this); }


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwitchTarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwitchTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitchTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitchTarget(ASwitchTarget&&); \
	NO_API ASwitchTarget(const ASwitchTarget&); \
public:


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitchTarget(ASwitchTarget&&); \
	NO_API ASwitchTarget(const ASwitchTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitchTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwitchTarget)


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_SwitchTarget_h_11_PROLOG \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_EVENT_PARMS


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_SPARSE_DATA \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_INCLASS \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_SwitchTarget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_SPARSE_DATA \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_SwitchTarget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class ASwitchTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_SwitchTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
