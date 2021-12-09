#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "DroneMiningToolBase.generated.h"

class UTerrainMaterial;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDroneMiningToolBaseHitSomething, UTerrainMaterial*, TerrainMaterial, const FVector&, Location);

UCLASS(BlueprintType)
class UDroneMiningToolBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDroneMiningToolBaseHitSomething HitSomething;
    
protected:
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float SameHitDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MineRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MineStrength;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopMining();
    
    UFUNCTION(BlueprintCallable)
    void StartMining();
    
    UFUNCTION(NetMulticast, Unreliable)
    void SpawnEffects(UTerrainMaterial* aTerrainMaterial, bool aParialHit, FVector_NetQuantize aLocation, FVector_NetQuantize aImpactNormal);
    
    UDroneMiningToolBase();
};

