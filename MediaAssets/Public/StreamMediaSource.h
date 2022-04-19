#pragma once
#include "CoreMinimal.h"
#include "BaseMediaSource.h"
#include "StreamMediaSource.generated.h"

UCLASS(EditInlineNew)
class MEDIAASSETS_API UStreamMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamUrl;
    
    UStreamMediaSource();
};

