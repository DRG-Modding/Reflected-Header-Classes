#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosDestructionEvent.generated.h"

USTRUCT()
struct FChaosDestructionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    FVector Normal;
    
    UPROPERTY(EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(EditAnywhere)
    FVector AngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float ExtentMin;
    
    UPROPERTY(EditAnywhere)
    float ExtentMax;
    
    UPROPERTY(EditAnywhere)
    int32 ParticleID;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    int32 Type;
    
    CHAOSNIAGARA_API FChaosDestructionEvent();
};

