#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavigationFilterArea.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct NAVIGATIONSYSTEM_API FNavigationFilterArea {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(EditAnywhere)
    float TravelCostOverride;
    
    UPROPERTY(EditAnywhere)
    float EnteringCostOverride;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsExcluded: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideTravelCost: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideEnteringCost: 1;
    
    FNavigationFilterArea();
};

