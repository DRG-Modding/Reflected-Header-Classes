#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FakeFallComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFakeFallComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFakeFallComponent();
    UFUNCTION(BlueprintCallable)
    void StartFakeFall();
    
};

