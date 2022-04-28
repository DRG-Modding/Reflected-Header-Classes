#pragma once
#include "CoreMinimal.h"
#include "AIRequestID.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIRequestID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 RequestID;
    
public:
    FAIRequestID();
};

