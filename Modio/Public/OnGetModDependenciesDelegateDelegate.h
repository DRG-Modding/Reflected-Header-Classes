#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalModDependencyList.h"
#include "OnGetModDependenciesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetModDependenciesDelegate, FModioErrorCode, ErrorCode, FModioOptionalModDependencyList, Dependencies);

