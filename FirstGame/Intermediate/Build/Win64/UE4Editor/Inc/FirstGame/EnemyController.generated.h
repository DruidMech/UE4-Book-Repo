// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define FIRSTGAME_EnemyController_generated_h

#define FirstGame_Source_FirstGame_EnemyController_h_15_SPARSE_DATA
#define FirstGame_Source_FirstGame_EnemyController_h_15_RPC_WRAPPERS
#define FirstGame_Source_FirstGame_EnemyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstGame_Source_FirstGame_EnemyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define FirstGame_Source_FirstGame_EnemyController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define FirstGame_Source_FirstGame_EnemyController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define FirstGame_Source_FirstGame_EnemyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyController)


#define FirstGame_Source_FirstGame_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardComponent() { return STRUCT_OFFSET(AEnemyController, BlackboardComponent); } \
	FORCEINLINE static uint32 __PPO__BehaviorTreeComponent() { return STRUCT_OFFSET(AEnemyController, BehaviorTreeComponent); }


#define FirstGame_Source_FirstGame_EnemyController_h_12_PROLOG
#define FirstGame_Source_FirstGame_EnemyController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_EnemyController_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_EnemyController_h_15_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_EnemyController_h_15_INCLASS \
	FirstGame_Source_FirstGame_EnemyController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_EnemyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_EnemyController_h_15_SPARSE_DATA \
	FirstGame_Source_FirstGame_EnemyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_EnemyController_h_15_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_EnemyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
