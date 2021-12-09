#pragma once
#include "CoreMinimal.h"
#include "CSGRandomizeTransformProperties.h"
#include "CSGSingleChildBase.h"
#include "CSGRandomizeTransform.generated.h"

UCLASS(BlueprintType)
class UCSGRandomizeTransform : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGRandomizeTransformProperties Properties;
    
    UCSGRandomizeTransform();
};

