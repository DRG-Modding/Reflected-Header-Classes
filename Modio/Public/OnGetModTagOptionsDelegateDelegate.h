#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalModTagOptions.h"
#include "OnGetModTagOptionsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetModTagOptionsDelegate, FModioErrorCode, ErrorCode, FModioOptionalModTagOptions, ModTagOptions);

