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
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UEnvQueryGenerator*> generators;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bAllowDifferentItemTypes: 1;
    
    UPROPERTY()
    uint8 bHasMatchingItemType: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TSubclassOf<UEnvQueryItemType> ForcedItemType;
    
    UEnvQueryGenerator_Composite();
};

