#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BasicParticleData.generated.h"

USTRUCT(BlueprintType)
struct FBasicParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Position;
    
    UPROPERTY(BlueprintReadOnly)
    float Size;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    NIAGARA_API FBasicParticleData();
};

