#pragma once
#include "CoreMinimal.h"
#include "NavigationQueryFilter.h"
#include "RecastFilter_UseDefaultArea.generated.h"

UCLASS(MinimalAPI)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    URecastFilter_UseDefaultArea();
};

