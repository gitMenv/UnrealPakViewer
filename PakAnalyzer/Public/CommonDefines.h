// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Launch/Resources/Version.h"
#include "Logging/LogMacros.h"

#define ENABLE_IO_STORE_ANALYZER (ENGINE_MAJOR_VERSION >= 5 || ENGINE_MINOR_VERSION >= 26)

DECLARE_LOG_CATEGORY_EXTERN(LogPakAnalyzer, Log, All);

class FPakAnalyzerDelegates
{
public:
	DECLARE_DELEGATE_RetVal_OneParam(FString, FOnGetAESKey, bool& /*bCancel*/);
	DECLARE_DELEGATE_OneParam(FOnLoadPakFailed, const FString&)
	DECLARE_DELEGATE_ThreeParams(FOnUpdateExtractProgress, int32 /*CompleteCount*/, int32 /*ErrorCount*/, int32 /*TotalCount*/);
	DECLARE_DELEGATE(FOnExtractStart);

public:
	static FOnGetAESKey OnGetAESKey;
	static FOnLoadPakFailed OnLoadPakFailed;
	static FOnUpdateExtractProgress OnUpdateExtractProgress;
	static FOnExtractStart OnExtractStart;
}; 
