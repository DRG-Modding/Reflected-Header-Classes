#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Renderer LightPropagationVolumeSettings
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine BlendableInterface
#include "LightPropagationVolumeBlendable.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class ULightPropagationVolumeBlendable : public UObject, public IBlendableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLightPropagationVolumeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendWeight;
    
    ULightPropagationVolumeBlendable();
};

