#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AvfMediaSettings.generated.h"

UCLASS()
class AVFMEDIAFACTORY_API UAvfMediaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool NativeAudioOut;
    
    UAvfMediaSettings();
};

