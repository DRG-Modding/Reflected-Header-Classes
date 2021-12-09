#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ProjectileSpawnData.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "MultiprojectileSpawner.generated.h"

class UMultiprojectileSpawner;
class AActor;
class UDataAsset;

UCLASS(BlueprintType)
class FSD_API UMultiprojectileSpawner : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FProjectileSpawnData> ProjectileData;
    
    UPROPERTY(EditAnywhere)
    bool ProjectilesIgnoreEachOther;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsFiring() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Fire(const FVector& Velocity, const FVector& Origin);
    
    UFUNCTION(BlueprintCallable)
    static UMultiprojectileSpawner* FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack);
    
    UMultiprojectileSpawner();
};

