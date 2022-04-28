#pragma once
#include "CoreMinimal.h"
#include "SpiderAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ShootingSpiderAnimInstance.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class UShootingSpiderAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float LookAtBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckCurve;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
public:
    UShootingSpiderAnimInstance();
};

