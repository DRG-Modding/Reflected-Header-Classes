#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "FormationDataItem.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "FormationData.generated.h"

UCLASS(Abstract)
class UFormationData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FFormationDataItem> FormationItems;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery LeaderQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery MemberQuery;
    
public:
    UFormationData();
};

