#pragma once
#include "CoreMinimal.h"
#include "NavGraphNode.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNavGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Owner;
    
    NAVIGATIONSYSTEM_API FNavGraphNode();
};

