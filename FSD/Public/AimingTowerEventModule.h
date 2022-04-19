#pragma once
#include "CoreMinimal.h"
#include "TowerEventModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AimingTowerEventModule.generated.h"

class AActor;

UCLASS()
class AAimingTowerEventModule : public ATowerEventModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AAimingTowerEventModule();
};

