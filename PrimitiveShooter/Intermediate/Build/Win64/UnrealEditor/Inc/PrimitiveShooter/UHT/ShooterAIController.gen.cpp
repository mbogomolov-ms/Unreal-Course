// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimitiveShooter/ShooterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	PRIMITIVESHOOTER_API UClass* Z_Construct_UClass_AShooterAIController();
	PRIMITIVESHOOTER_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PrimitiveShooter();
// End Cross Module References
	void AShooterAIController::StaticRegisterNativesAShooterAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterAIController);
	UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
	{
		return AShooterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimitiveShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterAIController.h" },
		{ "ModuleRelativePath", "ShooterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior_MetaData[] = {
		{ "Category", "ShooterAIController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere)\n\x09""float AcceptanceRadius = 200;*/" },
#endif
		{ "ModuleRelativePath", "ShooterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\n       float AcceptanceRadius = 200;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAIController, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior_MetaData), Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
		&AShooterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterAIController()
	{
		if (!Z_Registration_Info_UClass_AShooterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAIController.OuterSingleton, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterAIController.OuterSingleton;
	}
	template<> PRIMITIVESHOOTER_API UClass* StaticClass<AShooterAIController>()
	{
		return AShooterAIController::StaticClass();
	}
	AShooterAIController::AShooterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
	AShooterAIController::~AShooterAIController() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_ShooterAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_ShooterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAIController, AShooterAIController::StaticClass, TEXT("AShooterAIController"), &Z_Registration_Info_UClass_AShooterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAIController), 2005846846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_ShooterAIController_h_154582179(TEXT("/Script/PrimitiveShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_ShooterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_ShooterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
