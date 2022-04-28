#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChaosPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PHYSICSCORE_API UChaosPhysicalMaterial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY(EditAnywhere)
    float StaticFriction;
    
    UPROPERTY(EditAnywhere)
    float Restitution;
    
    UPROPERTY(EditAnywhere)
    float LinearEtherDrag;
    
    UPROPERTY(EditAnywhere)
    float AngularEtherDrag;
    
    UPROPERTY(EditAnywhere)
    float SleepingLinearVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float SleepingAngularVelocityThreshold;
    
    UChaosPhysicalMaterial();
};

