#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NavigationGraphNode.generated.h"

UCLASS(Abstract, MinimalAPI)
class ANavigationGraphNode : public AActor {
    GENERATED_BODY()
public:
    ANavigationGraphNode();
};

