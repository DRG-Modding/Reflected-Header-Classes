#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TracerManager.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
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
    UTracerManager();
    UFUNCTION(BlueprintCallable)
    void AddTracer(FVector Origin, const FVector& Destination, float Speed, UParticleSystem* particle, float MinDistance, float Offset, UParticleSystem* Trail);
    
};

