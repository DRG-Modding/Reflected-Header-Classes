#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CSGBuilderBaseSceneComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCSGBuilderBaseSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCSGBuilderBaseSceneComponent();
};

