// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/FirstActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstActor() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_AFirstActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstActor::execCheckLifetime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckLifetime();
		P_NATIVE_END;
	}
	static FName NAME_AFirstActor_PrintLevel = FName(TEXT("PrintLevel"));
	void AFirstActor::PrintLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirstActor_PrintLevel),NULL);
	}
	void AFirstActor::StaticRegisterNativesAFirstActor()
	{
		UClass* Class = AFirstActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckLifetime", &AFirstActor::execCheckLifetime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstActor_CheckLifetime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstActor_CheckLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstActor_CheckLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstActor, nullptr, "CheckLifetime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstActor_CheckLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstActor_CheckLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstActor_CheckLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstActor_CheckLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstActor_PrintLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstActor, nullptr, "PrintLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstActor_PrintLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstActor_NoRegister()
	{
		return AFirstActor::StaticClass();
	}
	struct Z_Construct_UClass_AFirstActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstActorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstActorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActorLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorLifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstActor_CheckLifetime, "CheckLifetime" }, // 1362534575
		{ &Z_Construct_UFunction_AFirstActor_PrintLevel, "PrintLevel" }, // 661961713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirstActor.h" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh_MetaData[] = {
		{ "Category", "Learning About Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh = { "FirstActorMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, FirstActorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel_MetaData[] = {
		{ "Category", "Learning About Specifiers" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel = { "ActorLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, ActorLevel), METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime_MetaData[] = {
		{ "Category", "Learning About Specifiers" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime = { "ActorLifetime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstActor, ActorLifetime), METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstActor_Statics::ClassParams = {
		&AFirstActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstActor, 2760356973);
	template<> FIRSTGAME_API UClass* StaticClass<AFirstActor>()
	{
		return AFirstActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstActor(Z_Construct_UClass_AFirstActor, &AFirstActor::StaticClass, TEXT("/Script/FirstGame"), TEXT("AFirstActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
