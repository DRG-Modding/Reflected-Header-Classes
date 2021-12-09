#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosTrailingEventData.generated.h"

USTRUCT(BlueprintType)
struct FChaosTrailingEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParticleIndex;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosTrailingEventData();
};

