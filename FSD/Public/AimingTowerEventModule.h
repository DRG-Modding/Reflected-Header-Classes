#pragma once
#include "CoreMinimal.h"
#include "TowerEventModule.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AimingTowerEventModule.generated.h"

class AActor;

UCLASS()
class AAimingTowerEventModule : public ATowerEventModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FRotator AimRotation;
    
    UPROPERTY(Transient)
    AActor* CurrentTarget;
    
public:
    AAimingTowerEventModule();
};

