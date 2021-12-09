#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SeasonSaveEntry.h"
#include "SeasonSave.generated.h"

USTRUCT(BlueprintType)
struct FSeasonSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FGuid, FSeasonSaveEntry> Seasons;
    
public:
    FSD_API FSeasonSave();
};

