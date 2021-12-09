#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "LandscapeWeightmapUsage.generated.h"

class ULandscapeComponent;

UCLASS(MinimalAPI)
class ULandscapeWeightmapUsage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    ULandscapeComponent* ChannelUsage[4];
    
    UPROPERTY()
    FGuid LayerGuid;
    
    ULandscapeWeightmapUsage();
};

