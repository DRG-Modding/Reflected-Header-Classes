#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CharacterShouts.h"
#include "CharacterShoutsData.generated.h"

UCLASS(BlueprintType)
class UCharacterShoutsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCharacterShouts Shouts;
    
    UCharacterShoutsData();
};

