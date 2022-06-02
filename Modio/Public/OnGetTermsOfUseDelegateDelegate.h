#pragma once
#include "CoreMinimal.h"
#include "ModioOptionalTerms.h"
#include "ModioErrorCode.h"
#include "OnGetTermsOfUseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetTermsOfUseDelegate, FModioErrorCode, ErrorCode, FModioOptionalTerms, Terms);

