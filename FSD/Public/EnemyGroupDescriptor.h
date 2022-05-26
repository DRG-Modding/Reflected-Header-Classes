#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptorItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "RandInterval.h"
#include "EnemyGroupDescriptor.generated.h"

UCLASS(Blueprintable)
class FSD_API UEnemyGroupDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyGroupDescriptorItem> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomDiversity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval Diversity;
    
public:
    UEnemyGroupDescriptor();
};

