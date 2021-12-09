#pragma once
#include "CoreMinimal.h"
#include "NodeChain.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FNodeChain {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> Nodes;
    
    FNodeChain();
};

