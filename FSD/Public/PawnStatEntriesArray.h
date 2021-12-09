#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine FastArraySerializer
#include "PawnStatEntry.h"
#include "PawnStatEntriesArray.generated.h"

class UPawnStatsComponent;

USTRUCT(BlueprintType)
struct FPawnStatEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPawnStatEntry> Items;
    
    UPROPERTY(Export, NotReplicated)
    UPawnStatsComponent* Owner;
    
    FSD_API FPawnStatEntriesArray();
};

