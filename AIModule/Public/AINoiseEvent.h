#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AINoiseEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAINoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NoiseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    FAINoiseEvent();
};

