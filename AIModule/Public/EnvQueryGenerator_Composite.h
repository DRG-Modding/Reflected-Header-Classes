#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.h"
#include "EnvQueryGenerator_Composite.generated.h"

class UEnvQueryItemType;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_Composite : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    TArray<UEnvQueryGenerator*> generators;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bAllowDifferentItemTypes: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bHasMatchingItemType: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ForcedItemType;
    
    UEnvQueryGenerator_Composite();
};

