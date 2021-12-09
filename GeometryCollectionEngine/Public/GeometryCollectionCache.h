#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: GeometryCollectionCore RecordedTransformTrack
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "GeometryCollectionCache.generated.h"

class UGeometryCollection;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRecordedTransformTrack RecordedData;
    
    UPROPERTY()
    UGeometryCollection* SupportedCollection;
    
    UPROPERTY()
    FGuid CompatibleCollectionState;
    
public:
    UGeometryCollectionCache();
};

