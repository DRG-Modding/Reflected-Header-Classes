#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine WorldSubsystem
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TracerManager.generated.h"

class UParticleSystem;

UCLASS(Abstract, BlueprintType)
class UTracerManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartScale;
    
    UPROPERTY(EditAnywhere)
    float WhizByStartDistance;
    
    UPROPERTY(EditAnywhere)
    float WhizByMaxDistanceFromTrajectory;
    
    UPROPERTY(EditAnywhere)
    float WhizBySpeed;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTracer(FVector Origin, const FVector& Destination, float Speed, UParticleSystem* particle, float MinDistance, float Offset, UParticleSystem* Trail);
    
    UTracerManager();
};

