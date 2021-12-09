#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlackboardKeySelector.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct AIMODULE_API FBlackboardKeySelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TArray<UBlackboardKeyType*> AllowedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName SelectedKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient)
    TSubclassOf<UBlackboardKeyType> SelectedKeyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient)
    uint8 SelectedKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNoneIsAllowedValue: 1;
    
public:
    FBlackboardKeySelector();
};

