#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "HydraWeedSpawnProjectile.generated.h"

UCLASS()
class AHydraWeedSpawnProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FVector TargetLocation;
    
public:
    AHydraWeedSpawnProjectile();
};

