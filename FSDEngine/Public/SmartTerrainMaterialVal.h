#pragma once
#include "CoreMinimal.h"
#include "SmartTerrainMaterialVal.generated.h"

USTRUCT(BlueprintType)
struct FSmartTerrainMaterialVal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 IfEmpty;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 IfSolid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> OverrideKeys;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> OverrideValues;
    
    FSDENGINE_API FSmartTerrainMaterialVal();
};

