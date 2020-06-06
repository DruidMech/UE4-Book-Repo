// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/SwitchTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchTarget() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_ASwitchTarget_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_ASwitchTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_USwitchInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASwitchTarget::execUpdateSwitchLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSwitchLocation(Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	static FName NAME_ASwitchTarget_ActivateSwitchTarget = FName(TEXT("ActivateSwitchTarget"));
	void ASwitchTarget::ActivateSwitchTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASwitchTarget_ActivateSwitchTarget),NULL);
	}
	void ASwitchTarget::StaticRegisterNativesASwitchTarget()
	{
		UClass* Class = ASwitchTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSwitchLocation", &ASwitchTarget::execUpdateSwitchLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switch Target" },
		{ "ModuleRelativePath", "SwitchTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchTarget, nullptr, "ActivateSwitchTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics
	{
		struct SwitchTarget_eventUpdateSwitchLocation_Parms
		{
			float Location;
			float Rotation;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchTarget_eventUpdateSwitchLocation_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchTarget_eventUpdateSwitchLocation_Parms, Location), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "SwitchTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchTarget, nullptr, "UpdateSwitchLocation", nullptr, nullptr, sizeof(SwitchTarget_eventUpdateSwitchLocation_Parms), Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwitchTarget_NoRegister()
	{
		return ASwitchTarget::StaticClass();
	}
	struct Z_Construct_UClass_ASwitchTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwitchTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwitchTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwitchTarget_ActivateSwitchTarget, "ActivateSwitchTarget" }, // 4222072795
		{ &Z_Construct_UFunction_ASwitchTarget_UpdateSwitchLocation, "UpdateSwitchLocation" }, // 2796658975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwitchTarget.h" },
		{ "ModuleRelativePath", "SwitchTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchTarget_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "Category", "SwitchTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwitchTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchTarget_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchTarget, TargetMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitchTarget_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchTarget_Statics::NewProp_TargetMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwitchTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchTarget_Statics::NewProp_TargetMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASwitchTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USwitchInterface_NoRegister, (int32)VTABLE_OFFSET(ASwitchTarget, ISwitchInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwitchTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwitchTarget_Statics::ClassParams = {
		&ASwitchTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwitchTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwitchTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwitchTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwitchTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwitchTarget, 3557638687);
	template<> FIRSTGAME_API UClass* StaticClass<ASwitchTarget>()
	{
		return ASwitchTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwitchTarget(Z_Construct_UClass_ASwitchTarget, &ASwitchTarget::StaticClass, TEXT("/Script/FirstGame"), TEXT("ASwitchTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
