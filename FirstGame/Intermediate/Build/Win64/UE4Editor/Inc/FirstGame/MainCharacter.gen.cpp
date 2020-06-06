// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/MainCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	FIRSTGAME_API UFunction* Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
	FIRSTGAME_API UFunction* Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature();
	FIRSTGAME_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_AMainCharacter();
	FIRSTGAME_API UClass* Z_Construct_UClass_ABaseCharacter();
	FIRSTGAME_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics
	{
		struct _Script_FirstGame_eventDynamicMulticastRotateDelegate_Parms
		{
			bool bPlaySound;
		};
		static void NewProp_bPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaySound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::NewProp_bPlaySound_SetBit(void* Obj)
	{
		((_Script_FirstGame_eventDynamicMulticastRotateDelegate_Parms*)Obj)->bPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::NewProp_bPlaySound = { "bPlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FirstGame_eventDynamicMulticastRotateDelegate_Parms), &Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::NewProp_bPlaySound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::NewProp_bPlaySound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstGame, nullptr, "DynamicMulticastRotateDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirstGame_eventDynamicMulticastRotateDelegate_Parms), Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics
	{
		struct _Script_FirstGame_eventDynamicRotateDelegate_Parms
		{
			float RotationSpeed;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirstGame_eventDynamicRotateDelegate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirstGame_eventDynamicRotateDelegate_Parms, RotationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::NewProp_RotationSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstGame, nullptr, "DynamicRotateDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirstGame_eventDynamicRotateDelegate_Parms), Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMainCharacter::execPlaySoundAtRotatingActors)
	{
		P_GET_UBOOL(Z_Param_PlaySound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundAtRotatingActors(Z_Param_PlaySound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execSetRotatingActorRates)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotatingActorRates(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execToggleAllRotators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleAllRotators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &AMainCharacter::execLoadGame },
			{ "PlaySoundAtRotatingActors", &AMainCharacter::execPlaySoundAtRotatingActors },
			{ "SaveGame", &AMainCharacter::execSaveGame },
			{ "SetRotatingActorRates", &AMainCharacter::execSetRotatingActorRates },
			{ "ToggleAllRotators", &AMainCharacter::execToggleAllRotators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCharacter_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacter_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics
	{
		struct MainCharacter_eventPlaySoundAtRotatingActors_Parms
		{
			bool PlaySound;
		};
		static void NewProp_PlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlaySound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::NewProp_PlaySound_SetBit(void* Obj)
	{
		((MainCharacter_eventPlaySoundAtRotatingActors_Parms*)Obj)->PlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::NewProp_PlaySound = { "PlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainCharacter_eventPlaySoundAtRotatingActors_Parms), &Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::NewProp_PlaySound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::NewProp_PlaySound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "PlaySoundAtRotatingActors", nullptr, nullptr, sizeof(MainCharacter_eventPlaySoundAtRotatingActors_Parms), Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacter_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics
	{
		struct MainCharacter_eventSetRotatingActorRates_Parms
		{
			float Rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainCharacter_eventSetRotatingActorRates_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SetRotatingActorRates", nullptr, nullptr, sizeof(MainCharacter_eventSetRotatingActorRates_Parms), Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_ToggleAllRotators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_ToggleAllRotators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_ToggleAllRotators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "ToggleAllRotators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_ToggleAllRotators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_ToggleAllRotators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_ToggleAllRotators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainCharacter_ToggleAllRotators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatingActorRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotatingActorRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRotatorsPlaySound_MetaData[];
#endif
		static void NewProp_bShouldRotatorsPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRotatorsPlaySound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMulticastRotateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DynamicMulticastRotateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicRotateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_DynamicRotateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_LoadGame, "LoadGame" }, // 4116711686
		{ &Z_Construct_UFunction_AMainCharacter_PlaySoundAtRotatingActors, "PlaySoundAtRotatingActors" }, // 294019381
		{ &Z_Construct_UFunction_AMainCharacter_SaveGame, "SaveGame" }, // 2885945418
		{ &Z_Construct_UFunction_AMainCharacter_SetRotatingActorRates, "SetRotatingActorRates" }, // 2963734408
		{ &Z_Construct_UFunction_AMainCharacter_ToggleAllRotators, "ToggleAllRotators" }, // 2867732618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_RotatingActorRotate_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_RotatingActorRotate = { "RotatingActorRotate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, RotatingActorRotate), METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_RotatingActorRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_RotatingActorRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "/** Reference to the Player Controller */" },
		{ "ModuleRelativePath", "MainCharacter.h" },
		{ "ToolTip", "Reference to the Player Controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController = { "MainPlayerController", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, MainPlayerController), Z_Construct_UClass_AMainPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound_SetBit(void* Obj)
	{
		((AMainCharacter*)Obj)->bShouldRotatorsPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound = { "bShouldRotatorsPlaySound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicMulticastRotateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicMulticastRotateDelegate = { "DynamicMulticastRotateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, DynamicMulticastRotateDelegate), Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicMulticastRotateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicMulticastRotateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicRotateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicRotateDelegate = { "DynamicRotateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, DynamicRotateDelegate), Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicRotateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicRotateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_RotatingActorRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_bShouldRotatorsPlaySound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicMulticastRotateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_DynamicRotateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainCharacter, 4118312860);
	template<> FIRSTGAME_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainCharacter(Z_Construct_UClass_AMainCharacter, &AMainCharacter::StaticClass, TEXT("/Script/FirstGame"), TEXT("AMainCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
