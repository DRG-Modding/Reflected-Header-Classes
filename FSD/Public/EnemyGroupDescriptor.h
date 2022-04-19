#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EnemyGroupDescriptorItem.h"
#include "RandInterval.h"
#include "EnemyGroupDescriptor.generated.h"

UCLASS(BlueprintType)
class FSD_API UEnemyGroupDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyGroupDescriptorItem> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval Diversity;
    
public:
    UEnemyGroupDescriptor();
};

