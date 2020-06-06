// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/CountessSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountessSaveGame() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_UCountessSaveGame_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_UCountessSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UCountessSaveGame::StaticRegisterNativesUCountessSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UCountessSaveGame_NoRegister()
	{
		return UCountessSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UCountessSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCountessSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CountessSaveGame.h" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldRotation_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountessSaveGame, WorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountessSaveGame, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountessSaveGame, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountessSaveGame, Health), METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_UserSlot_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_UserSlot = { "UserSlot", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountessSaveGame, UserSlot), METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_UserSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_UserSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "CountessSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountessSaveGame, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCountessSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_UserSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountessSaveGame_Statics::NewProp_PlayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCountessSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCountessSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCountessSaveGame_Statics::ClassParams = {
		&UCountessSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCountessSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCountessSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCountessSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCountessSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCountessSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCountessSaveGame, 3530741227);
	template<> FIRSTGAME_API UClass* StaticClass<UCountessSaveGame>()
	{
		return UCountessSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCountessSaveGame(Z_Construct_UClass_UCountessSaveGame, &UCountessSaveGame::StaticClass, TEXT("/Script/FirstGame"), TEXT("UCountessSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCountessSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
