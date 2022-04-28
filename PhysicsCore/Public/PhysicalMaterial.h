#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPhysicalSurface.h"
#include "EFrictionCombineMode.h"
#include "PhysicalMaterial.generated.h"

class UDEPRECATED_PhysicalMaterialPropertyBase;

UCLASS(Blueprintable, CollapseCategories)
class PHYSICSCORE_API UPhysicalMaterial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY(EditAnywhere)
    float StaticFriction;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFrictionCombineMode;
    
    UPROPERTY(EditAnywhere)
    float Restitution;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRestitutionCombineMode;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY(EditAnywhere)
    float SleepLinearVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float SleepAngularVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SleepCounterThreshold;
    
    UPROPERTY(EditAnywhere)
    float RaiseMassToPower;
    
    UPROPERTY(EditAnywhere)
    float DestructibleDamageThresholdScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPhysicalMaterial();
};

