#pragma once
#include "CoreMinimal.h"
#include "EClothingWindMethod_Legacy.h"
#include "ClothConstraintSetup_Legacy.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ClothConfig_Legacy.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothConfig_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY()
    EClothingWindMethod_Legacy WindMethod;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy VerticalConstraintConfig;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy BendConstraintConfig;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy ShearConstraintConfig;
    
    UPROPERTY()
    float SelfCollisionRadius;
    
    UPROPERTY()
    float SelfCollisionStiffness;
    
    UPROPERTY()
    float SelfCollisionCullScale;
    
    UPROPERTY()
    FVector Damping;
    
    UPROPERTY()
    float Friction;
    
    UPROPERTY()
    float WindDragCoefficient;
    
    UPROPERTY()
    float WindLiftCoefficient;
    
    UPROPERTY()
    FVector LinearDrag;
    
    UPROPERTY()
    FVector AngularDrag;
    
    UPROPERTY()
    FVector LinearInertiaScale;
    
    UPROPERTY()
    FVector AngularInertiaScale;
    
    UPROPERTY()
    FVector CentrifugalInertiaScale;
    
    UPROPERTY()
    float SolverFrequency;
    
    UPROPERTY()
    float StiffnessFrequency;
    
    UPROPERTY()
    float GravityScale;
    
    UPROPERTY()
    FVector GravityOverride;
    
    UPROPERTY()
    bool bUseGravityOverride;
    
    UPROPERTY()
    float TetherStiffness;
    
    UPROPERTY()
    float TetherLimit;
    
    UPROPERTY()
    float CollisionThickness;
    
    UPROPERTY()
    float AnimDriveSpringStiffness;
    
    UPROPERTY()
    float AnimDriveDamperStiffness;
    
    FClothConfig_Legacy();
};

