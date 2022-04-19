#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetup_Legacy.h"
#include "EClothingWindMethod_Legacy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothConfig_Legacy.generated.h"

USTRUCT()
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothConfig_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EClothingWindMethod_Legacy WindMethod;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy VerticalConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy BendConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy ShearConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SelfCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SelfCollisionStiffness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SelfCollisionCullScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Damping;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Friction;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float WindDragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float WindLiftCoefficient;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector LinearDrag;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector AngularDrag;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector LinearInertiaScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector AngularInertiaScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CentrifugalInertiaScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SolverFrequency;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StiffnessFrequency;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector GravityOverride;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseGravityOverride;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TetherStiffness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TetherLimit;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CollisionThickness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AnimDriveSpringStiffness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AnimDriveDamperStiffness;
    
    FClothConfig_Legacy();
};

