#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EModioEnvironment.h"
#include "ModioInitializeOptions.h"
#include "ModioApiKey.h"
#include "ModioGameID.h"
#include "EFileSizeUnit.h"
#include "ModioSDKLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModioSDKLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioSDKLibrary();
    UFUNCTION(BlueprintPure)
    static float Pct_Int64Int64(int64 Dividend, int64 Divisor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSecurityCodeFormat(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidEmailAddressFormat(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioInitializeOptions GetProjectInitializeOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioGameID GetProjectGameId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioEnvironment GetProjectEnvironment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioApiKey GetProjectApiKey();
    
    UFUNCTION(BlueprintPure)
    static FText Filesize_ToString(int64 Filesize, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_Int64ToString(int64 inInt);
    
};

