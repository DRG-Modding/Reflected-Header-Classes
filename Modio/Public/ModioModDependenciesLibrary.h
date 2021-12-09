#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioModDependencyList.h"
#include "ModioModDependency.h"
#include "ModioModDependenciesLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModDependenciesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    
    UFUNCTION(BlueprintPure)
    static TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
    
public:
    UModioModDependenciesLibrary();
};

