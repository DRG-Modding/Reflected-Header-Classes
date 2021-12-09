#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "StickyFlameSpawner.generated.h"

class AStickyFlame;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStickyFlameSpawnerOnStickyFlameSpawned, AStickyFlame*, StickyFlame);

UCLASS(BlueprintType)
class UStickyFlameSpawner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStickyFlameSpawnerOnStickyFlameSpawned OnStickyFlameSpawned;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AStickyFlame> StickyFlameActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlameLifetime;
    
    UPROPERTY(EditAnywhere)
    float StickyFlameIntervals;
    
    UPROPERTY(EditAnywhere)
    float StickyFlameMinDistance;
    
    UPROPERTY(Transient)
    float StickyFlameLastTime;
    
    UPROPERTY(Transient)
    FVector StickyFlameLastLocation;
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySpawnStickyFlameHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    bool TrySpawnStickyFlame(FVector Location, FVector Normal);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnStickyFlame(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
    
public:
    UStickyFlameSpawner();
};

