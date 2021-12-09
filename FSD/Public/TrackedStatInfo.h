#pragma once
#include "CoreMinimal.h"
#include "TrackedStatInfo.generated.h"

class UDataAsset;
class UMissionStat;
class UTexture2D;

USTRUCT(BlueprintType)
struct FTrackedStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMissionStat* Stat;
    
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(EditAnywhere)
    UDataAsset* assetReference;
    
    FSD_API FTrackedStatInfo();
};

