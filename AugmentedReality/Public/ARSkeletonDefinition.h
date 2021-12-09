#pragma once
#include "CoreMinimal.h"
#include "ARSkeletonDefinition.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARSkeletonDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 NumJoints;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FName> JointNames;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> ParentIndices;
    
    FARSkeletonDefinition();
};

