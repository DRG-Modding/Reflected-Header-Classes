#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine HitResult
#include "Skinnable.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "Magazine.generated.h"

class USoundCue;
class USkinEffect;

UCLASS()
class AMagazine : public AActor, public ISkinnable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemSkinned(USkinEffect* Skin);
    
    UFUNCTION()
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    AMagazine();
};

