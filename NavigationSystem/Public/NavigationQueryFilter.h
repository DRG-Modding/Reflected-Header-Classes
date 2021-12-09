#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NavigationFilterArea.h"
#include "NavigationFilterFlags.h"
#include "NavigationQueryFilter.generated.h"

UCLASS(Abstract)
class NAVIGATIONSYSTEM_API UNavigationQueryFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNavigationFilterArea> Areas;
    
    UPROPERTY(EditAnywhere)
    FNavigationFilterFlags IncludeFlags;
    
    UPROPERTY(EditAnywhere)
    FNavigationFilterFlags ExcludeFlags;
    
    UNavigationQueryFilter();
};

