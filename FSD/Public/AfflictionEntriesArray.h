#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "AfflictionEntry.h"
#include "AfflictionEntriesArray.generated.h"

class UPawnAfflictionComponent;

USTRUCT(BlueprintType)
struct FAfflictionEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FAfflictionEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UPawnAfflictionComponent* Owner;
    
    FSD_API FAfflictionEntriesArray();
};

