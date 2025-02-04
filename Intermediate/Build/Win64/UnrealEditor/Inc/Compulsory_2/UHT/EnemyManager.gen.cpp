// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Compulsory_2/Public/EnemyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	COMPULSORY_2_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
	COMPULSORY_2_API UClass* Z_Construct_UClass_AEnemyManager();
	COMPULSORY_2_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Compulsory_2();
// End Cross Module References
	void AEnemyManager::StaticRegisterNativesAEnemyManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyManager);
	UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
	{
		return AEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Compulsory_2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass_MetaData), Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_EnemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
		&AEnemyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyManager()
	{
		if (!Z_Registration_Info_UClass_AEnemyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyManager.OuterSingleton, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyManager.OuterSingleton;
	}
	template<> COMPULSORY_2_API UClass* StaticClass<AEnemyManager>()
	{
		return AEnemyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
	AEnemyManager::~AEnemyManager() {}
	struct Z_CompiledInDeferFile_FID_Users_andze_OneDrive_Pulpit__Programming_2_Compulsory_2_Source_Compulsory_2_Public_EnemyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andze_OneDrive_Pulpit__Programming_2_Compulsory_2_Source_Compulsory_2_Public_EnemyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyManager, AEnemyManager::StaticClass, TEXT("AEnemyManager"), &Z_Registration_Info_UClass_AEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyManager), 1865150394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andze_OneDrive_Pulpit__Programming_2_Compulsory_2_Source_Compulsory_2_Public_EnemyManager_h_4255053060(TEXT("/Script/Compulsory_2"),
		Z_CompiledInDeferFile_FID_Users_andze_OneDrive_Pulpit__Programming_2_Compulsory_2_Source_Compulsory_2_Public_EnemyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andze_OneDrive_Pulpit__Programming_2_Compulsory_2_Source_Compulsory_2_Public_EnemyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
