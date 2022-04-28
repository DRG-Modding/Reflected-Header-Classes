#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerImpactCooldownComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPlayerImpactCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CoolDownTime;
    
public:
    UPlayerImpactCooldownComponent();
    UFUNCTION(BlueprintCallable)
    bool CheckCanImpact(AActor* Actor);
    
};

