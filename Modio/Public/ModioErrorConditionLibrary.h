#pragma once
#include "CoreMinimal.h"
#include "EModioErrorCondition.h"
#include "ModioErrorCode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioErrorConditionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioErrorConditionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioErrorConditionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
    
};

