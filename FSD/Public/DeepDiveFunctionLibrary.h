#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "DeepDiveFunctionLibrary.generated.h"

class UObject;
class UDeepDive;
class UDeepDiveTemplate;

UCLASS(BlueprintType)
class UDeepDiveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeepDiveElite(UObject* WorldContextObject, UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive);
    
    UDeepDiveFunctionLibrary();
};

