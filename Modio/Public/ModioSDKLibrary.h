#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioInitializeOptions.h"
#include "ModioGameID.h"
#include "EModioEnvironment.h"
#include "EFileSizeUnit.h"
#include "ModioApiKey.h"
#include "ModioSDKLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UModioSDKLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static float Pct_Int64Int64(int64 Dividend, int64 Divisor);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidSecurityCodeFormat(const FString& String);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidEmailAddressFormat(const FString& String);
    
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions GetProjectInitializeOptions();
    
    UFUNCTION(BlueprintPure)
    static FModioGameID GetProjectGameId();
    
    UFUNCTION(BlueprintPure)
    static EModioEnvironment GetProjectEnvironment();
    
    UFUNCTION(BlueprintPure)
    static FModioApiKey GetProjectApiKey();
    
    UFUNCTION(BlueprintPure)
    static FText Filesize_ToString(int64 Filesize, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_Int64ToString(int64 inInt);
    
    UModioSDKLibrary();
};

