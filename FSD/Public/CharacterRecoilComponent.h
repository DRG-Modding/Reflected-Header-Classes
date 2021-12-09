#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CharacterRecoilComponent.generated.h"

UCLASS(MinimalAPI)
class UCharacterRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FVector Recoil;
    
    UPROPERTY(Transient)
    FVector RecoilVelocity;
    
    UPROPERTY()
    FVector PrevError;
    
public:
    UCharacterRecoilComponent();
};

