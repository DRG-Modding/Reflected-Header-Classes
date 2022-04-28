#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ReactiveTerrainTrackerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReactiveTerrainTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UReactiveTerrainTrackerComponent();
};

