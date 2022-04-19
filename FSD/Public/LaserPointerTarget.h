#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "LaserPointerTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLaserPointerTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHitResult HitInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AActor* ExtraTarget;
    
    FSD_API FLaserPointerTarget();
};

