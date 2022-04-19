#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TimeSynthVolumeGroup.generated.h"

UCLASS(BlueprintType)
class TIMESYNTH_API UTimeSynthVolumeGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVolume;
    
    UTimeSynthVolumeGroup();
};

