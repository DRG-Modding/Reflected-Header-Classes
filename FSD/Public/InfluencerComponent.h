#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "InfluencerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UInfluencerComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ProbabilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScaleCurve;
    
public:
    UInfluencerComponent();
};

