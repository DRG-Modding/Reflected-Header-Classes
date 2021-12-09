#pragma once
#include "CoreMinimal.h"
#include "NodeObject.generated.h"

USTRUCT(BlueprintType)
struct FNodeObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName ParentName;
    
    ANIMATIONCORE_API FNodeObject();
};

