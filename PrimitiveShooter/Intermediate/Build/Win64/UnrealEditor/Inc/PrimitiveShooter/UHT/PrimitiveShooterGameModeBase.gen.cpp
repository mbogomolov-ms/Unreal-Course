// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimitiveShooter/PrimitiveShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitiveShooterGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PRIMITIVESHOOTER_API UClass* Z_Construct_UClass_APrimitiveShooterGameModeBase();
	PRIMITIVESHOOTER_API UClass* Z_Construct_UClass_APrimitiveShooterGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PrimitiveShooter();
// End Cross Module References
	void APrimitiveShooterGameModeBase::StaticRegisterNativesAPrimitiveShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimitiveShooterGameModeBase);
	UClass* Z_Construct_UClass_APrimitiveShooterGameModeBase_NoRegister()
	{
		return APrimitiveShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimitiveShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrimitiveShooterGameModeBase.h" },
		{ "ModuleRelativePath", "PrimitiveShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimitiveShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::ClassParams = {
		&APrimitiveShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APrimitiveShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APrimitiveShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimitiveShooterGameModeBase.OuterSingleton, Z_Construct_UClass_APrimitiveShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrimitiveShooterGameModeBase.OuterSingleton;
	}
	template<> PRIMITIVESHOOTER_API UClass* StaticClass<APrimitiveShooterGameModeBase>()
	{
		return APrimitiveShooterGameModeBase::StaticClass();
	}
	APrimitiveShooterGameModeBase::APrimitiveShooterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimitiveShooterGameModeBase);
	APrimitiveShooterGameModeBase::~APrimitiveShooterGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_PrimitiveShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_PrimitiveShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrimitiveShooterGameModeBase, APrimitiveShooterGameModeBase::StaticClass, TEXT("APrimitiveShooterGameModeBase"), &Z_Registration_Info_UClass_APrimitiveShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimitiveShooterGameModeBase), 4160733040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_PrimitiveShooterGameModeBase_h_1218067592(TEXT("/Script/PrimitiveShooter"),
		Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_PrimitiveShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PrimitiveShooter_Source_PrimitiveShooter_PrimitiveShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
