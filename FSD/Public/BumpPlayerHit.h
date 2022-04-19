#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "BumpPlayerHit.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FBumpPlayerHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize force;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Player;
    
    FSD_API FBumpPlayerHit();
};

