#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptorItem.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "RandInterval.h"
#include "EnemyGroupDescriptor.generated.h"

UCLASS(BlueprintType)
class FSD_API UEnemyGroupDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FEnemyGroupDescriptorItem> Enemies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandInterval Diversity;
    
public:
    UEnemyGroupDescriptor();
};

