// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/SwitchInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchInterface() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_USwitchInterface_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_USwitchInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	DEFINE_FUNCTION(ISwitchInterface::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate_Implementation();
		P_NATIVE_END;
	}
	void ISwitchInterface::Activate()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Activate instead.");
	}
	void USwitchInterface::StaticRegisterNativesUSwitchInterface()
	{
		UClass* Class = USwitchInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &ISwitchInterface::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USwitchInterface_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitchInterface_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interfaces" },
		{ "ModuleRelativePath", "SwitchInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitchInterface_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitchInterface, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitchInterface_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitchInterface_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitchInterface_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitchInterface_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USwitchInterface_NoRegister()
	{
		return USwitchInterface::StaticClass();
	}
	struct Z_Construct_UClass_USwitchInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USwitchInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USwitchInterface_Activate, "Activate" }, // 4219635254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwitchInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISwitchInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwitchInterface_Statics::ClassParams = {
		&USwitchInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USwitchInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwitchInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwitchInterface, 4526279);
	template<> FIRSTGAME_API UClass* StaticClass<USwitchInterface>()
	{
		return USwitchInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwitchInterface(Z_Construct_UClass_USwitchInterface, &USwitchInterface::StaticClass, TEXT("/Script/FirstGame"), TEXT("USwitchInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchInterface);
	static FName NAME_USwitchInterface_Activate = FName(TEXT("Activate"));
	void ISwitchInterface::Execute_Activate(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USwitchInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USwitchInterface_Activate);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISwitchInterface*)(O->GetNativeInterfaceAddress(USwitchInterface::StaticClass())))
		{
			I->Activate_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
