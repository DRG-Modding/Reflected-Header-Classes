#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryNode.h"
#include "EnvQueryGenerator.generated.h"

class UEnvQueryItemType;

UCLASS(Abstract, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator : public UEnvQueryNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString OptionName;
    
    UPROPERTY()
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bAutoSortTests: 1;
    
    UEnvQueryGenerator();
};

