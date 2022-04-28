#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HydraWeedSpawnProjectile.generated.h"

UCLASS(Blueprintable)
class AHydraWeedSpawnProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    AHydraWeedSpawnProjectile();
};

