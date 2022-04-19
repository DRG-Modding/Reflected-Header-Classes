#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_SimpleGrid.h"
#include "AIDataProviderBoolValue.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator_PathingGrid.generated.h"

class UNavigationQueryFilter;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue PathToItem;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScanRangeMultiplier;
    
    UEnvQueryGenerator_PathingGrid();
};

