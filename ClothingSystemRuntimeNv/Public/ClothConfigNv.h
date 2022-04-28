#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=EClothingWindMethod_Legacy -FallbackName=EClothingWindMethod_Legacy
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothConstraintSetupNv.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConfigCommon -FallbackName=ClothConfigCommon
#include "EClothingWindMethodNv.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConstraintSetup_Legacy -FallbackName=ClothConstraintSetup_Legacy
#include "ClothConfigNv.generated.h"

UCLASS(Blueprintable)
class CLOTHINGSYSTEMRUNTIMENV_API UClothConfigNv : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothingWindMethodNv ClothingWindMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetupNv VerticalConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetupNv HorizontalConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetupNv BendConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothConstraintSetupNv ShearConstraint;
    
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
    
    UClothConfigNv();
};

