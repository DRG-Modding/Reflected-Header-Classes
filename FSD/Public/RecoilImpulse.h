#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RecoilImpulse.generated.h"

USTRUCT(BlueprintType)
struct FRecoilImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Impulse;
    
    FSD_API FRecoilImpulse();
};

