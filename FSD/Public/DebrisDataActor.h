#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DebrisDataActor.generated.h"

UCLASS(Abstract, Blueprintable)
class ADebrisDataActor : public AActor {
    GENERATED_BODY()
public:
    ADebrisDataActor();
};

