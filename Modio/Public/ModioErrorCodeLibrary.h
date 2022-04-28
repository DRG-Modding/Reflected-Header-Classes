#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioErrorCode.h"
#include "ModioErrorCodeLibrary.generated.h"

UCLASS(Blueprintable)
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

