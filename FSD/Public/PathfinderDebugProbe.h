#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PathfinderDebugProbe.generated.h"

UCLASS()
class APathfinderDebugProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* Dest;
    
    APathfinderDebugProbe();
};

