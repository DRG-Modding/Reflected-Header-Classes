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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMesh* OriginalStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 StaticMeshLODIndex;
    
public:
    UEditableStaticMeshAdapter();
};

