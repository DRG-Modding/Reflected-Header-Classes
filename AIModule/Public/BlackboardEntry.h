#pragma once
#include "CoreMinimal.h"
#include "BlackboardEntry.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct FBlackboardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EntryName;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBlackboardKeyType* KeyType;
    
    UPROPERTY(EditAnywhere)
    uint8 bInstanceSynced: 1;
    
    AIMODULE_API FBlackboardEntry();
};

