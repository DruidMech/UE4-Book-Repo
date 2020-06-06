// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/FloorSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorSwitch() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_AFloorSwitch_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_AFloorSwitch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_ASwitchTarget_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFloorSwitch::execUpdateFloorSwitchLocations)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DoorLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SwitchLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFloorSwitchLocations(Z_Param_DoorLocation,Z_Param_SwitchLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execActivateSwitchTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSwitchTargets();
		P_NATIVE_END;
	}
	static FName NAME_AFloorSwitch_ActivateFloorSwitch = FName(TEXT("ActivateFloorSwitch"));
	void AFloorSwitch::ActivateFloorSwitch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_ActivateFloorSwitch),NULL);
	}
	static FName NAME_AFloorSwitch_DeactivateFloorSwitch = FName(TEXT("DeactivateFloorSwitch"));
	void AFloorSwitch::DeactivateFloorSwitch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_DeactivateFloorSwitch),NULL);
	}
	void AFloorSwitch::StaticRegisterNativesAFloorSwitch()
	{
		UClass* Class = AFloorSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSwitchTargets", &AFloorSwitch::execActivateSwitchTargets },
			{ "OnOverlapBegin", &AFloorSwitch::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFloorSwitch::execOnOverlapEnd },
			{ "UpdateFloorSwitchLocations", &AFloorSwitch::execUpdateFloorSwitchLocations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Called when Box Component is overlapped, used in Blueprints to start the timeline */" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Called when Box Component is overlapped, used in Blueprints to start the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "ActivateFloorSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "ActivateSwitchTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** When no longer overlapping, used in Blueprints to reverse the timeline */" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "When no longer overlapping, used in Blueprints to reverse the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "DeactivateFloorSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics
	{
		struct FloorSwitch_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FloorSwitch_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloorSwitch_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(FloorSwitch_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics
	{
		struct FloorSwitch_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(FloorSwitch_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics
	{
		struct FloorSwitch_eventUpdateFloorSwitchLocations_Parms
		{
			float DoorLocation;
			float SwitchLocation;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::NewProp_SwitchLocation = { "SwitchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateFloorSwitchLocations_Parms, SwitchLocation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::NewProp_DoorLocation = { "DoorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateFloorSwitchLocations_Parms, DoorLocation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::NewProp_SwitchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::NewProp_DoorLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Called in Blueprints to pass in data from the Timeline */" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Called in Blueprints to pass in data from the Timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateFloorSwitchLocations", nullptr, nullptr, sizeof(FloorSwitch_eventUpdateFloorSwitchLocations_Parms), Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloorSwitch_NoRegister()
	{
		return AFloorSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AFloorSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SwitchTargets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSwitchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialSwitchLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDoorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialDoorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorSwitch_ActivateFloorSwitch, "ActivateFloorSwitch" }, // 2704426477
		{ &Z_Construct_UFunction_AFloorSwitch_ActivateSwitchTargets, "ActivateSwitchTargets" }, // 208086472
		{ &Z_Construct_UFunction_AFloorSwitch_DeactivateFloorSwitch, "DeactivateFloorSwitch" }, // 3135807274
		{ &Z_Construct_UFunction_AFloorSwitch_OnOverlapBegin, "OnOverlapBegin" }, // 351380380
		{ &Z_Construct_UFunction_AFloorSwitch_OnOverlapEnd, "OnOverlapEnd" }, // 1862783755
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocations, "UpdateFloorSwitchLocations" }, // 2508207321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorSwitch.h" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets_MetaData[] = {
		{ "Category", "Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets = { "SwitchTargets", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, SwitchTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets_Inner = { "SwitchTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASwitchTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_MainPlayerController_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "/** Reference to the Player Controller */" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Reference to the Player Controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_MainPlayerController = { "MainPlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, MainPlayerController), Z_Construct_UClass_AMainPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_MainPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_MainPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Initial location for the floor switch */" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Initial location for the floor switch" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation = { "InitialSwitchLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, InitialSwitchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Initial location for the door */" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Initial location for the door" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation = { "InitialDoorLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, InitialDoorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Door to raise when the floor switch is stepped on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Door to raise when the floor switch is stepped on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Block for the character to step on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Block for the character to step on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch = { "FloorSwitch", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, FloorSwitch), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Box to trigger overlap events */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Box to trigger overlap events" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_MainPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorSwitch_Statics::ClassParams = {
		&AFloorSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorSwitch, 863036011);
	template<> FIRSTGAME_API UClass* StaticClass<AFloorSwitch>()
	{
		return AFloorSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorSwitch(Z_Construct_UClass_AFloorSwitch, &AFloorSwitch::StaticClass, TEXT("/Script/FirstGame"), TEXT("AFloorSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
