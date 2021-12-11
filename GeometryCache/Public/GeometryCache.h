#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine Interface_AssetUserData
#include "GeometryCache.generated.h"

class UMaterialInterface;
class UGeometryCacheTrack;

UCLASS(BlueprintType)
class GEOMETRYCACHE_API UGeometryCache : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UGeometryCacheTrack*> Tracks;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 StartFrame;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EndFrame;
    
public:
    UGeometryCache();
    
    // Fix for true pure virtual functions not being implemented
};

