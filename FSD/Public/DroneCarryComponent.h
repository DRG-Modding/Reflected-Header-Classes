#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DroneCarryComponent.generated.h"

class ACarriableItem;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneCarryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACarriableItem* CurrentCarried;
    
public:
    UDroneCarryComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCarriedUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedDropped();
    
};

