#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EImpulseDirectionSource.h"
#include "DamageImpulse.generated.h"

UCLASS(Blueprintable)
class UDamageImpulse : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ImpactForce;
    
    UPROPERTY(EditAnywhere)
    float UpwardForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImpulseDirectionSource ImpulseSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyImpulseToWholeBody;
    
    UDamageImpulse();
};

