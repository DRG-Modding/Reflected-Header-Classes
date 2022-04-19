#pragma once
#include "CoreMinimal.h"
#include "VanityEventSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VanityEventSourceDataAsset.generated.h"

UCLASS(BlueprintType)
class UVanityEventSourceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityEventSource EventSource;
    
    UVanityEventSourceDataAsset();
};

