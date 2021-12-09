#pragma once
#include "CoreMinimal.h"
#include "EVanitySlot.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "VanityAnimInstance.generated.h"

UCLASS(NonTransient)
class UVanityAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EVanitySlot VanitySlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ArmorCoversBeard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector ArmorChestThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator ArmorChestRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    float ExternalForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxForce;
    
public:
    UVanityAnimInstance();
};

