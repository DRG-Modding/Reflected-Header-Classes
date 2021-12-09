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
    UPROPERTY()
    UGeometryCollection* GeometryCollection;
    
    UPROPERTY()
    UGeometryCollection* OriginalGeometryCollection;
    
    UPROPERTY()
    int32 GeometryCollectionLODIndex;
    
public:
    UEditableGeometryCollectionAdapter();
};

