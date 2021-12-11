#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeCommon ClothSharedConfigCommon
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ChaosClothSharedSimConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothSharedSimConfig : public UClothSharedConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 IterationCount;
    
    UPROPERTY(EditAnywhere)
    int32 SubdivisionCount;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionThickness;
    
    UPROPERTY()
    float CollisionThickness;
    
    UPROPERTY()
    bool bUseDampingOverride;
    
    UPROPERTY()
    float Damping;
    
    UPROPERTY(EditAnywhere)
    bool bUseGravityOverride;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(EditAnywhere)
    bool bUseLocalSpaceSimulation;
    
    UPROPERTY()
    bool bUseXPBDConstraints;
    
    UChaosClothSharedSimConfig();
};

