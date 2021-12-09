#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GeometryCacheTrack.generated.h"

UCLASS(CollapseCategories)
class GEOMETRYCACHE_API UGeometryCacheTrack : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    float Duration;
    
public:
    UGeometryCacheTrack();
};

