#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundWaveProcedural
#include "SynthSound.generated.h"

class USynthComponent;

UCLASS(EditInlineNew)
class AUDIOMIXER_API USynthSound : public USoundWaveProcedural {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    USynthComponent* OwningSynthComponent;
    
public:
    USynthSound();
};

