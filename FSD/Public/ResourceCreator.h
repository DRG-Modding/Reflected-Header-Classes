#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ResourceCreator.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UResourceCreator : public UDataAsset {
    GENERATED_BODY()
public:
    UResourceCreator();
};

