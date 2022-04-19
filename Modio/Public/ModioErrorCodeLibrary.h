#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioErrorCodeLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioErrorCodeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioErrorCodeLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsError(const FModioErrorCode& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValue(const FModioErrorCode& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMessage(const FModioErrorCode& Error);
    
};

