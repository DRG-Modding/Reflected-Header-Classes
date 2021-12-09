#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ReactiveTerrainTrackerComponent.generated.h"

UCLASS(Abstract)
class UReactiveTerrainTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UReactiveTerrainTrackerComponent();
};

