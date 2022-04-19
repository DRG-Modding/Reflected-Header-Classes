#pragma once
#include "CoreMinimal.h"
#include "EditableMeshAdapter.h"
#include "EditableGeometryCollectionAdapter.generated.h"

class UGeometryCollection;

UCLASS(MinimalAPI)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGeometryCollection* GeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGeometryCollection* OriginalGeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 GeometryCollectionLODIndex;
    
public:
    UEditableGeometryCollectionAdapter();
};

