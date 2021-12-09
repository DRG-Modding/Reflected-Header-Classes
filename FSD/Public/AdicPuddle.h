#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine HitResult
#include "AdicPuddle.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class USoundBase;
class UStatusEffect;

UCLASS()
class AAdicPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UStatusEffect> InflictedStatusEffect;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float LifeTime;
    
protected:
    UFUNCTION()
    void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    AAdicPuddle();
};
