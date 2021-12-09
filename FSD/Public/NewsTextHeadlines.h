#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "NewsTextHeadlines.generated.h"

UCLASS(BlueprintType)
class UNewsTextHeadlines : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> MineralTradeTicker;
    
    UNewsTextHeadlines();
};

