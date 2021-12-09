#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "NavigationGraphNode.generated.h"

UCLASS(Abstract, MinimalAPI)
class ANavigationGraphNode : public AActor {
    GENERATED_BODY()
public:
    ANavigationGraphNode();
};

