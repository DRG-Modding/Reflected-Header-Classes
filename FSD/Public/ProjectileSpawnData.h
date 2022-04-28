#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ProjectileSpawnData.generated.h"

class AProjectile;

USTRUCT(BlueprintType)
struct FProjectileSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval HorizontalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval VerticalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBallistic;
    
    FSD_API FProjectileSpawnData();
};

