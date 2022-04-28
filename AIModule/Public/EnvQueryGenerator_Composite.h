#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.h"
#include "EnvQueryGenerator_Composite.generated.h"

class UEnvQueryItemType;

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_Composite : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UEnvQueryGenerator*> generators;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowDifferentItemTypes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasMatchingItemType: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ForcedItemType;
    
    UEnvQueryGenerator_Composite();
};

