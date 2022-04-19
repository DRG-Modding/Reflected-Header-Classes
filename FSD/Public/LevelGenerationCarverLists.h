#pragma once
#include "CoreMinimal.h"
#include "LevelGenerationCarver.h"
#include "LevelGenerationCarverLists.generated.h"

USTRUCT(BlueprintType)
struct FLevelGenerationCarverLists {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FLevelGenerationCarver> Carvers;
    
    FSD_API FLevelGenerationCarverLists();
};

