// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/TanksGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanksGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOONTANKS_API UClass* Z_Construct_UClass_ATanksGameMode();
	TOONTANKS_API UClass* Z_Construct_UClass_ATanksGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	struct TanksGameMode_eventGameOver_Parms
	{
		bool bWonGame;
	};
	struct TanksGameMode_eventOnTankGunLoadStatusChanged_Parms
	{
		bool Loaded;
	};
	static FName NAME_ATanksGameMode_GameOver = FName(TEXT("GameOver"));
	void ATanksGameMode::GameOver(bool bWonGame)
	{
		TanksGameMode_eventGameOver_Parms Parms;
		Parms.bWonGame=bWonGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATanksGameMode_GameOver),&Parms);
	}
	static FName NAME_ATanksGameMode_OnTankGunLoadStatusChanged = FName(TEXT("OnTankGunLoadStatusChanged"));
	void ATanksGameMode::OnTankGunLoadStatusChanged(bool Loaded)
	{
		TanksGameMode_eventOnTankGunLoadStatusChanged_Parms Parms;
		Parms.Loaded=Loaded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATanksGameMode_OnTankGunLoadStatusChanged),&Parms);
	}
	static FName NAME_ATanksGameMode_StartGame = FName(TEXT("StartGame"));
	void ATanksGameMode::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATanksGameMode_StartGame),NULL);
	}
	void ATanksGameMode::StaticRegisterNativesATanksGameMode()
	{
	}
	struct Z_Construct_UFunction_ATanksGameMode_GameOver_Statics
	{
		static void NewProp_bWonGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWonGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::NewProp_bWonGame_SetBit(void* Obj)
	{
		((TanksGameMode_eventGameOver_Parms*)Obj)->bWonGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::NewProp_bWonGame = { "bWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TanksGameMode_eventGameOver_Parms), &Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::NewProp_bWonGame_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::NewProp_bWonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksGameMode, nullptr, "GameOver", nullptr, nullptr, Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::PropPointers), sizeof(TanksGameMode_eventGameOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::PropPointers) < 2048);
	static_assert(sizeof(TanksGameMode_eventGameOver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATanksGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATanksGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics
	{
		static void NewProp_Loaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Loaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::NewProp_Loaded_SetBit(void* Obj)
	{
		((TanksGameMode_eventOnTankGunLoadStatusChanged_Parms*)Obj)->Loaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TanksGameMode_eventOnTankGunLoadStatusChanged_Parms), &Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::NewProp_Loaded_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksGameMode, nullptr, "OnTankGunLoadStatusChanged", nullptr, nullptr, Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::PropPointers), sizeof(TanksGameMode_eventOnTankGunLoadStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(TanksGameMode_eventOnTankGunLoadStatusChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATanksGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATanksGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATanksGameMode);
	UClass* Z_Construct_UClass_ATanksGameMode_NoRegister()
	{
		return ATanksGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATanksGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATanksGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATanksGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATanksGameMode_GameOver, "GameOver" }, // 2909193918
		{ &Z_Construct_UFunction_ATanksGameMode_OnTankGunLoadStatusChanged, "OnTankGunLoadStatusChanged" }, // 297852221
		{ &Z_Construct_UFunction_ATanksGameMode_StartGame, "StartGame" }, // 4255767912
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TanksGameMode.h" },
		{ "ModuleRelativePath", "TanksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATanksGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanksGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATanksGameMode_Statics::ClassParams = {
		&ATanksGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATanksGameMode()
	{
		if (!Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton, Z_Construct_UClass_ATanksGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<ATanksGameMode>()
	{
		return ATanksGameMode::StaticClass();
	}
	ATanksGameMode::ATanksGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATanksGameMode);
	ATanksGameMode::~ATanksGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATanksGameMode, ATanksGameMode::StaticClass, TEXT("ATanksGameMode"), &Z_Registration_Info_UClass_ATanksGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATanksGameMode), 1945084821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ToonTanks_Source_ToonTanks_TanksGameMode_h_2194576693(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_UnrealProjects_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
