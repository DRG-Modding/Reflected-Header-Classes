#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AudioImpulseResponse.generated.h"

UCLASS(BlueprintType)
class SYNTHESIS_API UAudioImpulseResponse : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> ImpulseResponse;
    
    UPROPERTY()
    int32 NumChannels;
    
    UPROPERTY()
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalizationVolumeDb;
    
    UPROPERTY()
    TArray<float> IRData;
    
    UAudioImpulseResponse();
};

