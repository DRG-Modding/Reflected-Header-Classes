#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DanceItem.h"
#include "DanceSettings.generated.h"

UCLASS(BlueprintType)
class UDanceSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDanceItem> DanceMoves;
    
    UDanceSettings();
};

