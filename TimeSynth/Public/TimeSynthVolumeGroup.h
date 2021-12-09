#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TimeSynthVolumeGroup.generated.h"

UCLASS(BlueprintType)
class TIMESYNTH_API UTimeSynthVolumeGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultVolume;
    
    UTimeSynthVolumeGroup();
};

