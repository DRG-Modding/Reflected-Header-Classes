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
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString OptionName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bAutoSortTests: 1;
    
    UEnvQueryGenerator();
};

