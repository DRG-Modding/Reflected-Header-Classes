#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EClothingWindMethod_Legacy.h"
#include "ClothConstraintSetup_Legacy.h"
#include "ClothConfig_Legacy.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothConfig_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothingWindMethod_Legacy WindMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy VerticalConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy BendConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetup_Legacy ShearConstraintConfig;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionStiffness;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionCullScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Damping;
    
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY(EditAnywhere)
    float WindDragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float WindLiftCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearInertiaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularInertiaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CentrifugalInertiaScale;
    
    UPROPERTY(EditAnywhere)
    float SolverFrequency;
    
    UPROPERTY(EditAnywhere)
    float StiffnessFrequency;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGravityOverride;
    
    UPROPERTY(EditAnywhere)
    float TetherStiffness;
    
    UPROPERTY(EditAnywhere)
    float TetherLimit;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveSpringStiffness;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveDamperStiffness;
    
    FClothConfig_Legacy();
};

