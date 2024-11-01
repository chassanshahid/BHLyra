// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Accolades/LyraAccoladeDefinition.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAccoladeDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_ULyraAccoladeDefinition();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_ULyraAccoladeDefinition_NoRegister();
SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References

// Begin ScriptStruct FLyraAccoladeDefinitionRow
static_assert(std::is_polymorphic<FLyraAccoladeDefinitionRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLyraAccoladeDefinitionRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow;
class UScriptStruct* FLyraAccoladeDefinitionRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow, (UObject*)Z_Construct_UPackage__Script_ShooterCoreRuntime(), TEXT("LyraAccoladeDefinitionRow"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UScriptStruct* StaticStruct<FLyraAccoladeDefinitionRow>()
{
	return FLyraAccoladeDefinitionRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The message to display\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The message to display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The sound to play\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowedClasses", "Texture,MaterialInterface,SlateTextureAtlasInterface" },
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The icon to display\x09\n" },
#endif
		{ "DisallowedClasses", "MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The icon to display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration (in seconds) to display this accolade\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration (in seconds) to display this accolade" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationTag_MetaData[] = {
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Location to display this accolade\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location to display this accolade" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccoladeTags_MetaData[] = {
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags associated with this accolade\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags associated with this accolade" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAccoladesWithTag_MetaData[] = {
		{ "Category", "LyraAccoladeDefinitionRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When this accolade is displayed, any existing displayed/pending accolades with any of\n// these tags will be removed (e.g., getting a triple-elim will suppress a double-elim)\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When this accolade is displayed, any existing displayed/pending accolades with any of\nthese tags will be removed (e.g., getting a triple-elim will suppress a double-elim)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccoladeTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelAccoladesWithTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAccoladeDefinitionRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, Icon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, DisplayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDuration_MetaData), NewProp_DisplayDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_LocationTag = { "LocationTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, LocationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationTag_MetaData), NewProp_LocationTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_AccoladeTags = { "AccoladeTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, AccoladeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccoladeTags_MetaData), NewProp_AccoladeTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_CancelAccoladesWithTag = { "CancelAccoladesWithTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraAccoladeDefinitionRow, CancelAccoladesWithTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAccoladesWithTag_MetaData), NewProp_CancelAccoladesWithTag_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_DisplayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_LocationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_AccoladeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewProp_CancelAccoladesWithTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"LyraAccoladeDefinitionRow",
	Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::PropPointers),
	sizeof(FLyraAccoladeDefinitionRow),
	alignof(FLyraAccoladeDefinitionRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow.InnerSingleton, Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow.InnerSingleton;
}
// End ScriptStruct FLyraAccoladeDefinitionRow

// Begin Class ULyraAccoladeDefinition
void ULyraAccoladeDefinition::StaticRegisterNativesULyraAccoladeDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAccoladeDefinition);
UClass* Z_Construct_UClass_ULyraAccoladeDefinition_NoRegister()
{
	return ULyraAccoladeDefinition::StaticClass();
}
struct Z_Construct_UClass_ULyraAccoladeDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Accolades/LyraAccoladeDefinition.h" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "LyraAccoladeDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The sound to play\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowedClasses", "Texture,MaterialInterface,SlateTextureAtlasInterface" },
		{ "Category", "LyraAccoladeDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The icon to display\x09\n" },
#endif
		{ "DisallowedClasses", "MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The icon to display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccoladeTags_MetaData[] = {
		{ "Category", "LyraAccoladeDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags associated with this accolade\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags associated with this accolade" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAccoladesWithTag_MetaData[] = {
		{ "Category", "LyraAccoladeDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When this accolade is displayed, any existing displayed/pending accolades with any of\n// these tags will be removed (e.g., getting a triple-elim will suppress a double-elim)\n" },
#endif
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When this accolade is displayed, any existing displayed/pending accolades with any of\nthese tags will be removed (e.g., getting a triple-elim will suppress a double-elim)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccoladeTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelAccoladesWithTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAccoladeDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeDefinition, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeDefinition, Icon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_AccoladeTags = { "AccoladeTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeDefinition, AccoladeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccoladeTags_MetaData), NewProp_AccoladeTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_CancelAccoladesWithTag = { "CancelAccoladesWithTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAccoladeDefinition, CancelAccoladesWithTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAccoladesWithTag_MetaData), NewProp_CancelAccoladesWithTag_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAccoladeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_AccoladeTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeDefinition_Statics::NewProp_CancelAccoladesWithTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAccoladeDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAccoladeDefinition_Statics::ClassParams = {
	&ULyraAccoladeDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAccoladeDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeDefinition_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAccoladeDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAccoladeDefinition()
{
	if (!Z_Registration_Info_UClass_ULyraAccoladeDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAccoladeDefinition.OuterSingleton, Z_Construct_UClass_ULyraAccoladeDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAccoladeDefinition.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UClass* StaticClass<ULyraAccoladeDefinition>()
{
	return ULyraAccoladeDefinition::StaticClass();
}
ULyraAccoladeDefinition::ULyraAccoladeDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAccoladeDefinition);
ULyraAccoladeDefinition::~ULyraAccoladeDefinition() {}
// End Class ULyraAccoladeDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeDefinition_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraAccoladeDefinitionRow::StaticStruct, Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow_Statics::NewStructOps, TEXT("LyraAccoladeDefinitionRow"), &Z_Registration_Info_UScriptStruct_LyraAccoladeDefinitionRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAccoladeDefinitionRow), 1787614283U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAccoladeDefinition, ULyraAccoladeDefinition::StaticClass, TEXT("ULyraAccoladeDefinition"), &Z_Registration_Info_UClass_ULyraAccoladeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAccoladeDefinition), 1453977109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeDefinition_h_1012295428(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeDefinition_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeDefinition_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS