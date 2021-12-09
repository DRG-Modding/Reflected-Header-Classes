#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "InfluencerSpawnComponent.generated.h"

class UCaveInfluencer;

UCLASS()
class UInfluencerSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCaveInfluencer* Influencer;
    
    UPROPERTY(EditAnywhere)
    float range;
    
public:
    UInfluencerSpawnComponent();
};

