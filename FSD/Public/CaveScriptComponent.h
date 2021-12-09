#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "CaveScriptComponent.generated.h"

UCLASS(Abstract)
class UCaveScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCaveScriptComponent();
};

