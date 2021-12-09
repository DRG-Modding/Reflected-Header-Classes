#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AudioComponent
//CROSS-MODULE INCLUDE: Engine CurveSourceInterface
#include "AudioCurveSourceComponent.generated.h"

UCLASS()
class FACIALANIMATION_API UAudioCurveSourceComponent : public UAudioComponent, public ICurveSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CurveSourceBindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurveSyncOffset;
    
    UAudioCurveSourceComponent();
};

