#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeCommon ClothConfigCommon
//CROSS-MODULE INCLUDE: Engine EClothMassMode
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosClothConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothConfig : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EClothMassMode MassMode;
    
    UPROPERTY(EditAnywhere)
    float UniformMass;
    
    UPROPERTY(EditAnywhere)
    float TotalMass;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY(EditAnywhere)
    float MinPerParticleMass;
    
    UPROPERTY(EditAnywhere)
    float EdgeStiffness;
    
    UPROPERTY(EditAnywhere)
    float BendingStiffness;
    
    UPROPERTY(EditAnywhere)
    float AreaStiffness;
    
    UPROPERTY()
    float VolumeStiffness;
    
    UPROPERTY(EditAnywhere)
    float StrainLimitingStiffness;
    
    UPROPERTY(EditAnywhere)
    float LimitScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseGeodesicDistance;
    
    UPROPERTY()
    float ShapeTargetStiffness;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float FrictionCoefficient;
    
    UPROPERTY(EditAnywhere)
    float DampingCoefficient;
    
    UPROPERTY(EditAnywhere)
    float DragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveSpringStiffness;
    
    UPROPERTY(EditAnywhere)
    bool bUseBendingElements;
    
    UPROPERTY()
    bool bUseTetrahedralConstraints;
    
    UPROPERTY()
    bool bUseThinShellVolumeConstraints;
    
    UPROPERTY(EditAnywhere)
    bool bUseSelfCollisions;
    
    UPROPERTY()
    bool bUseContinuousCollisionDetection;
    
    UPROPERTY(EditAnywhere)
    FVector LinearVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocityScale;
    
    UChaosClothConfig();
};

