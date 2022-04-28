#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TunnelParameters.generated.h"

class UFloodFillSettings;

UCLASS(Blueprintable)
class UTunnelParameters : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(EditAnywhere)
    float PathZPenalty;
    
    UPROPERTY(EditAnywhere)
    float PathDirectionPenalty;
    
    UPROPERTY(EditAnywhere)
    float PathEntranceAnglePenalty;
    
    UPROPERTY(EditAnywhere)
    float ObstacleCostScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowBlockedEntrances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PickBestMatchingEntrance;
    
    UTunnelParameters();
};

