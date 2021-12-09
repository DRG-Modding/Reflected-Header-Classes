#pragma once
#include "CoreMinimal.h"
#include "TowerModuleBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AimingTowerModule.generated.h"

class AActor;

UCLASS()
class AAimingTowerModule : public ATowerModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    AActor* Target;
    
    UPROPERTY(Replicated)
    FRotator AimRotation;
    
    UPROPERTY(EditAnywhere)
    float BurstTime;
    
    UPROPERTY(EditAnywhere)
    float AttackTime;
    
    UPROPERTY(EditAnywhere)
    int32 BurstSize;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAimingTowerModule();
};

