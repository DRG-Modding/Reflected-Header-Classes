#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FSDReverbVolume.generated.h"

class USphereComponent;
class UReverbEffect;

UCLASS()
class AFSDReverbVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* Collision;
    
    UPROPERTY(Transient)
    UReverbEffect* Reverb;
    
    UPROPERTY(Transient)
    float Priority;
    
    AFSDReverbVolume();
};

