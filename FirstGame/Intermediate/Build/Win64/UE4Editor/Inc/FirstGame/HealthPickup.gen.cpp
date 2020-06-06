// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/HealthPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickup() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_AHealthPickup();
	FIRSTGAME_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	void AHealthPickup::StaticRegisterNativesAHealthPickup()
	{
	}
	UClass* Z_Construct_UClass_AHealthPickup_NoRegister()
	{
		return AHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealingAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealingAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HealthPickup.h" },
		{ "ModuleRelativePath", "HealthPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingAmount_MetaData[] = {
		{ "Category", "Healing" },
		{ "Comment", "/** Amount this pickup will heal the player by */" },
		{ "ModuleRelativePath", "HealthPickup.h" },
		{ "ToolTip", "Amount this pickup will heal the player by" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingAmount = { "HealingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthPickup, HealingAmount), METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickup_Statics::ClassParams = {
		&AHealthPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthPickup, 1091491936);
	template<> FIRSTGAME_API UClass* StaticClass<AHealthPickup>()
	{
		return AHealthPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthPickup(Z_Construct_UClass_AHealthPickup, &AHealthPickup::StaticClass, TEXT("/Script/FirstGame"), TEXT("AHealthPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
