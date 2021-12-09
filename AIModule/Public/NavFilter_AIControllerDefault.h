#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NavigationSystem NavigationQueryFilter
#include "NavFilter_AIControllerDefault.generated.h"

UCLASS()
class AIMODULE_API UNavFilter_AIControllerDefault : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_AIControllerDefault();
};

