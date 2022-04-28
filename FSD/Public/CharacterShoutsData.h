#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CharacterShouts.h"
#include "CharacterShoutsData.generated.h"

UCLASS(Blueprintable)
class UCharacterShoutsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterShouts Shouts;
    
    UCharacterShoutsData();
};

