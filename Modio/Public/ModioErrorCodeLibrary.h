#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioErrorCode.h"
#include "ModioErrorCodeLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioErrorCodeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsError(const FModioErrorCode& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValue(const FModioErrorCode& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMessage(const FModioErrorCode& Error);
    
    UModioErrorCodeLibrary();
};

