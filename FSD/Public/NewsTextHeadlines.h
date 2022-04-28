#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "NewsTextHeadlines.generated.h"

UCLASS(Blueprintable)
class UNewsTextHeadlines : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MineralTradeTicker;
    
    UNewsTextHeadlines();
};

