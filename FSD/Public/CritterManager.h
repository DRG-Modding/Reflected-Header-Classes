#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "CritterManager.generated.h"

UCLASS()
class UCritterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool DisableCritters;
    
    UPROPERTY(EditAnywhere)
    float ActivationRange;
    
public:
    UCritterManager();
};

