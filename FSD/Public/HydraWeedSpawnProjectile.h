#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HydraWeedSpawnProjectile.generated.h"

UCLASS()
class AHydraWeedSpawnProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    AHydraWeedSpawnProjectile();
};

