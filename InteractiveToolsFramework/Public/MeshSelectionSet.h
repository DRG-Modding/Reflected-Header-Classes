#pragma once
#include "CoreMinimal.h"
#include "SelectionSet.h"
#include "MeshSelectionSet.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSelectionSet : public USelectionSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> Vertices;
    
    UPROPERTY()
    TArray<int32> Edges;
    
    UPROPERTY()
    TArray<int32> Faces;
    
    UPROPERTY()
    TArray<int32> Groups;
    
    UMeshSelectionSet();
};

