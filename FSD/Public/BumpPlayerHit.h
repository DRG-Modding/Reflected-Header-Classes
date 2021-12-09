#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "BumpPlayerHit.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FBumpPlayerHit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize force;
    
    UPROPERTY()
    APlayerCharacter* Player;
    
    FSD_API FBumpPlayerHit();
};

