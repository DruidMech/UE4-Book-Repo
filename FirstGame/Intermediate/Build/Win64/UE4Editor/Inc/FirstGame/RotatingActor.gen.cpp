// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/RotatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingActor() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_ARotatingActor_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_ARotatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARotatingActor::execSetRotationRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetRotationRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	void ARotatingActor::StaticRegisterNativesARotatingActor()
	{
		UClass* Class = ARotatingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRotationRate", &ARotatingActor::execSetRotationRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics
	{
		struct RotatingActor_eventSetRotationRate_Parms
		{
			float Rate;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotatingActor_eventSetRotationRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotatingActor_eventSetRotationRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARotatingActor, nullptr, "SetRotationRate", nullptr, nullptr, sizeof(RotatingActor_eventSetRotationRate_Parms), Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARotatingActor_SetRotationRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARotatingActor_SetRotationRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARotatingActor_NoRegister()
	{
		return ARotatingActor::StaticClass();
	}
	struct Z_Construct_UClass_ARotatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotate_MetaData[];
#endif
		static void NewProp_bRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARotatingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARotatingActor_SetRotationRate, "SetRotationRate" }, // 419299109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingActor.h" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Item | ItemProperties" },
		{ "Comment", "/** Rate at which the mesh should rotate */" },
		{ "ModuleRelativePath", "RotatingActor.h" },
		{ "ToolTip", "Rate at which the mesh should rotate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotatingActor, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate_MetaData[] = {
		{ "Category", "Item | ItemProperties" },
		{ "Comment", "/** Toggles on/off rotating */" },
		{ "ModuleRelativePath", "RotatingActor.h" },
		{ "ToolTip", "Toggles on/off rotating" },
	};
#endif
	void Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate_SetBit(void* Obj)
	{
		((ARotatingActor*)Obj)->bRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate = { "bRotate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARotatingActor), &Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Item | Mesh" },
		{ "Comment", "/** Base Mesh Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotatingActor.h" },
		{ "ToolTip", "Base Mesh Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotatingActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_bRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotatingActor_Statics::ClassParams = {
		&ARotatingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARotatingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotatingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotatingActor, 938870866);
	template<> FIRSTGAME_API UClass* StaticClass<ARotatingActor>()
	{
		return ARotatingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotatingActor(Z_Construct_UClass_ARotatingActor, &ARotatingActor::StaticClass, TEXT("/Script/FirstGame"), TEXT("ARotatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
