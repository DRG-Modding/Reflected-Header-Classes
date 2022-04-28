#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PawnStatEntry.h"
#include "PawnStatEntriesArray.generated.h"

class UPawnStatsComponent;

USTRUCT(BlueprintType)
struct FPawnStatEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnStatEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* Owner;
    
    FSD_API FPawnStatEntriesArray();
};

