#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GeometryCacheCodecBase.generated.h"

UCLASS()
class GEOMETRYCACHE_API UGeometryCacheCodecBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<int32> TopologyRanges;
    
public:
    UGeometryCacheCodecBase();
};

