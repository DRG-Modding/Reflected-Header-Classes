#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeaponAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BeltDrivenAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBeltDrivenAnimInstance : public UAmmoDrivenWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BarrelSpinRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentBarrelSpinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    float ExternalForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExternalForceBoneName;
    
public:
    UBeltDrivenAnimInstance();
};

