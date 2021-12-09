#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine FastArraySerializerItem
#include "ECreatureSize.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "SpawnEffectItem.generated.h"

USTRUCT(BlueprintType)
struct FSpawnEffectItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECreatureSize CreatureSize;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    FSD_API FSpawnEffectItem();
};

