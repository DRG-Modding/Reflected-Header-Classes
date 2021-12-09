#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MineralTradeData.generated.h"

UCLASS(BlueprintType)
class UMineralTradeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> MineralTradeTickerTexts;
    
    UMineralTradeData();
};

