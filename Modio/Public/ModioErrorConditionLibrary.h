#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioErrorCode.h"
#include "EModioErrorCondition.h"
#include "ModioErrorConditionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioErrorConditionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
    
    UModioErrorConditionLibrary();
};

