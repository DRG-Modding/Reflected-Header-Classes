#pragma once
#include "CoreMinimal.h"
#include "SHAHashData.generated.h"

USTRUCT(BlueprintType)
struct FSHAHashData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Hash[20];
    
    BUILDPATCHSERVICES_API FSHAHashData();
};

