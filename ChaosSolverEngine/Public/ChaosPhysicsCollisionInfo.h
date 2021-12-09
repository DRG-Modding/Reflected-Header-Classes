#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosPhysicsCollisionInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct CHAOSSOLVERENGINE_API FChaosPhysicsCollisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPrimitiveComponent* OtherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AccumulatedImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OtherVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OtherAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OtherMass;
    
    FChaosPhysicsCollisionInfo();
};

