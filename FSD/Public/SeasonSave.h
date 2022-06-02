#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SeasonSaveEntry.h"
#include "SeasonSave.generated.h"

USTRUCT(BlueprintType)
struct FSeasonSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSeasonSaveEntry> Seasons;
    
public:
    FSD_API FSeasonSave();
};

