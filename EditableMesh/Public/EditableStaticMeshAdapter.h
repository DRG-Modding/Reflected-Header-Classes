#pragma once
#include "CoreMinimal.h"
#include "EditableMeshAdapter.h"
#include "EditableStaticMeshAdapter.generated.h"

class UStaticMesh;

UCLASS(MinimalAPI)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UPROPERTY()
    UStaticMesh* OriginalStaticMesh;
    
    UPROPERTY()
    int32 StaticMeshLODIndex;
    
public:
    UEditableStaticMeshAdapter();
};

