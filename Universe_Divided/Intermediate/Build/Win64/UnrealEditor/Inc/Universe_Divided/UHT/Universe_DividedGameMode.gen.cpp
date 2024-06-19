// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Universe_Divided/Universe_DividedGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniverse_DividedGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNIVERSE_DIVIDED_API UClass* Z_Construct_UClass_AUniverse_DividedGameMode();
UNIVERSE_DIVIDED_API UClass* Z_Construct_UClass_AUniverse_DividedGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Universe_Divided();
// End Cross Module References

// Begin Class AUniverse_DividedGameMode
void AUniverse_DividedGameMode::StaticRegisterNativesAUniverse_DividedGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUniverse_DividedGameMode);
UClass* Z_Construct_UClass_AUniverse_DividedGameMode_NoRegister()
{
	return AUniverse_DividedGameMode::StaticClass();
}
struct Z_Construct_UClass_AUniverse_DividedGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Universe_DividedGameMode.h" },
		{ "ModuleRelativePath", "Universe_DividedGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniverse_DividedGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUniverse_DividedGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Universe_Divided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUniverse_DividedGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniverse_DividedGameMode_Statics::ClassParams = {
	&AUniverse_DividedGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUniverse_DividedGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUniverse_DividedGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUniverse_DividedGameMode()
{
	if (!Z_Registration_Info_UClass_AUniverse_DividedGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniverse_DividedGameMode.OuterSingleton, Z_Construct_UClass_AUniverse_DividedGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUniverse_DividedGameMode.OuterSingleton;
}
template<> UNIVERSE_DIVIDED_API UClass* StaticClass<AUniverse_DividedGameMode>()
{
	return AUniverse_DividedGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUniverse_DividedGameMode);
AUniverse_DividedGameMode::~AUniverse_DividedGameMode() {}
// End Class AUniverse_DividedGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nsost_Documents_Unreal_Projects_Universe_Divided_Source_Universe_Divided_Universe_DividedGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUniverse_DividedGameMode, AUniverse_DividedGameMode::StaticClass, TEXT("AUniverse_DividedGameMode"), &Z_Registration_Info_UClass_AUniverse_DividedGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniverse_DividedGameMode), 733486181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nsost_Documents_Unreal_Projects_Universe_Divided_Source_Universe_Divided_Universe_DividedGameMode_h_2754633613(TEXT("/Script/Universe_Divided"),
	Z_CompiledInDeferFile_FID_Users_nsost_Documents_Unreal_Projects_Universe_Divided_Source_Universe_Divided_Universe_DividedGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nsost_Documents_Unreal_Projects_Universe_Divided_Source_Universe_Divided_Universe_DividedGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
