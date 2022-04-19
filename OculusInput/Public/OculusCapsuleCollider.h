#pragma once
#include "CoreMinimal.h"
#include "EBone.h"
#include "OculusCapsuleCollider.generated.h"

class UCapsuleComponent;

USTRUCT(BlueprintType)
struct OCULUSINPUT_API FOculusCapsuleCollider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EBone BoneId;
    
    FOculusCapsuleCollider();
};

