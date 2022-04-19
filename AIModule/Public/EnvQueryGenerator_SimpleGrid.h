#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_ProjectedPoints.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator_SimpleGrid.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SpaceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UEnvQueryGenerator_SimpleGrid();
};

