#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "CarriableItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ResourcePouch.generated.h"

class UCarriableInstantUsable;
class USoundCue;
class AActor;

UCLASS()
class AResourcePouch : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
    UFUNCTION()
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    AResourcePouch();
};

