#pragma once
#include "CoreMinimal.h"
#include "CapturedPixelsID.generated.h"

USTRUCT(BlueprintType)
struct FCapturedPixelsID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> Identifiers;
    
    MOVIESCENECAPTURE_API FCapturedPixelsID();
};

