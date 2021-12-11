#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ExtruderPlant.generated.h"

class UAnimationAsset;
class USkeletalMeshComponent;
class UAudioComponent;

UCLASS(Abstract)
class AExtruderPlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* ExtrudeAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* RetractAnimation;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* Audio;
    
public:
    AExtruderPlant();
};

