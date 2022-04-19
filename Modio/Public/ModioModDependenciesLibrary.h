#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioModDependencyList.h"
#include "ModioPagedResult.h"
#include "ModioModDependency.h"
#include "ModioModDependenciesLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModDependenciesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModDependenciesLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
    
};

