#pragma once
#include "CoreMinimal.h"
#include "GenericTeamId.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FGenericTeamId {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 TeamID;
    
public:
    FGenericTeamId();
};

