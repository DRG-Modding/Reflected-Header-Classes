#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "FakeFallComponent.generated.h"

UCLASS(BlueprintType)
class UFakeFallComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StartFakeFall();
    
    UFakeFallComponent();
};

