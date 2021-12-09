#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ProceduralTunnelComponent.generated.h"

class UTunnelParameters;
class UCaveInfluencer;

UCLASS()
class UProceduralTunnelComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTunnelParameters* TunnelParameters;
    
    UPROPERTY(EditAnywhere)
    bool CreateDirt;
    
    UPROPERTY(EditAnywhere)
    UCaveInfluencer* DirtInfluencer;
    
    UPROPERTY(EditAnywhere)
    float DirtInfluencerRange;
    
public:
    UProceduralTunnelComponent();
};

