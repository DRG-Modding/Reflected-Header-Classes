#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
#include "ModioModDependency.h"
#include "ModioModDependencyList.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModDependencyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioPagedResult PagedResult;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FModioModDependency> InternalList;
    
    FModioModDependencyList();
};

