#pragma once
#include "CoreMinimal.h"
#include "NavigationData.h"
#include "NavigationGraph.generated.h"

UCLASS(Abstract, MinimalAPI)
class ANavigationGraph : public ANavigationData {
    GENERATED_BODY()
public:
    ANavigationGraph();
};

