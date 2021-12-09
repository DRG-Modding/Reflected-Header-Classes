#pragma once
#include "CoreMinimal.h"
#include "NodeHierarchyData.h"
#include "NodeHierarchyWithUserData.generated.h"

USTRUCT()
struct FNodeHierarchyWithUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FNodeHierarchyData Hierarchy;
    
public:
    ANIMATIONCORE_API FNodeHierarchyWithUserData();
};

