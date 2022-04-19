#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DeepPathfinderSceneComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeepPathfinderSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UDeepPathfinderSceneComponent();
};

