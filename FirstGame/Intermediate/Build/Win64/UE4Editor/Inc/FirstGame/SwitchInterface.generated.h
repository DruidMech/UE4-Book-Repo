// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_SwitchInterface_generated_h
#error "SwitchInterface.generated.h already included, missing '#pragma once' in SwitchInterface.h"
#endif
#define FIRSTGAME_SwitchInterface_generated_h

#define FirstGame_Source_FirstGame_SwitchInterface_h_13_SPARSE_DATA
#define FirstGame_Source_FirstGame_SwitchInterface_h_13_RPC_WRAPPERS \
	virtual void Activate_Implementation() {}; \
 \
	DECLARE_FUNCTION(execActivate);


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Activate_Implementation() {}; \
 \
	DECLARE_FUNCTION(execActivate);


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_EVENT_PARMS
#define FirstGame_Source_FirstGame_SwitchInterface_h_13_CALLBACK_WRAPPERS
#define FirstGame_Source_FirstGame_SwitchInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTGAME_API USwitchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwitchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTGAME_API, USwitchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwitchInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIRSTGAME_API USwitchInterface(USwitchInterface&&); \
	FIRSTGAME_API USwitchInterface(const USwitchInterface&); \
public:


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTGAME_API USwitchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIRSTGAME_API USwitchInterface(USwitchInterface&&); \
	FIRSTGAME_API USwitchInterface(const USwitchInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTGAME_API, USwitchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwitchInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwitchInterface)


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSwitchInterface(); \
	friend struct Z_Construct_UClass_USwitchInterface_Statics; \
public: \
	DECLARE_CLASS(USwitchInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FirstGame"), FIRSTGAME_API) \
	DECLARE_SERIALIZER(USwitchInterface)


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISwitchInterface() {} \
public: \
	typedef USwitchInterface UClassType; \
	typedef ISwitchInterface ThisClass; \
	static void Execute_Activate(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FirstGame_Source_FirstGame_SwitchInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISwitchInterface() {} \
public: \
	typedef USwitchInterface UClassType; \
	typedef ISwitchInterface ThisClass; \
	static void Execute_Activate(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FirstGame_Source_FirstGame_SwitchInterface_h_10_PROLOG \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_EVENT_PARMS


#define FirstGame_Source_FirstGame_SwitchInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_SPARSE_DATA \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_SwitchInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_SPARSE_DATA \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_SwitchInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class USwitchInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_SwitchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
