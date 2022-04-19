#pragma once
#include "CoreMinimal.h"
#include "SelectionSet.h"
#include "MeshSelectionSet.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSelectionSet : public USelectionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> Vertices;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> Edges;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> Faces;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> Groups;
    
    UMeshSelectionSet();
};

