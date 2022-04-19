#pragma once
#include "CoreMinimal.h"
#include "EliminationTarget.generated.h"

class AFSDPawn;

USTRUCT(BlueprintType)
struct FEliminationTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFSDPawn*> Targets;
    
    FSD_API FEliminationTarget();
};

