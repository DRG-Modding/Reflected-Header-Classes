#pragma once
#include "CoreMinimal.h"
#include "SoundMixManagerItem.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "SoundMixManagerComponent.generated.h"

UCLASS()
class USoundMixManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FSoundMixManagerItem> SoundMixes;
    
public:
    USoundMixManagerComponent();
};

