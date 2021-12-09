#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FindPointKeepingDistanceProbe.generated.h"

UCLASS()
class AFindPointKeepingDistanceProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    AActor* Target;
    
    UPROPERTY(EditAnywhere)
    float IdealTargetDist;
    
    AFindPointKeepingDistanceProbe();
};

