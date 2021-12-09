#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine FastArraySerializer
#include "SpawnEffectItem.h"
#include "SpawnEffectsArray.generated.h"

USTRUCT(BlueprintType)
struct FSpawnEffectsArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSpawnEffectItem> Items;
    
    FSD_API FSpawnEffectsArray();
};

