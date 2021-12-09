#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "InfluencerComponent.generated.h"

UCLASS()
class UInfluencerComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ProbabilityCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleCurve;
    
public:
    UInfluencerComponent();
};

