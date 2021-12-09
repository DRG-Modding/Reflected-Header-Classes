#pragma once
#include "CoreMinimal.h"
#include "CSGDuplicateSingleChildBase.h"
#include "CSGCircleDuplicatorProperties.h"
#include "CSGCircleDuplicator.generated.h"

UCLASS(BlueprintType)
class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGCircleDuplicatorProperties Properties;
    
    UCSGCircleDuplicator();
};

