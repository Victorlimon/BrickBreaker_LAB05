// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrickBreaker/Pila01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePila01() {}
// Cross Module References
	BRICKBREAKER_API UClass* Z_Construct_UClass_APila01_NoRegister();
	BRICKBREAKER_API UClass* Z_Construct_UClass_APila01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BrickBreaker();
// End Cross Module References
	void APila01::StaticRegisterNativesAPila01()
	{
	}
	UClass* Z_Construct_UClass_APila01_NoRegister()
	{
		return APila01::StaticClass();
	}
	struct Z_Construct_UClass_APila01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APila01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BrickBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APila01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pila01.h" },
		{ "ModuleRelativePath", "Pila01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APila01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APila01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APila01_Statics::ClassParams = {
		&APila01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APila01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APila01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APila01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APila01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APila01, 3096698135);
	template<> BRICKBREAKER_API UClass* StaticClass<APila01>()
	{
		return APila01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APila01(Z_Construct_UClass_APila01, &APila01::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APila01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APila01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
