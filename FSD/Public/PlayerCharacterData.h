#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "HeroInfo.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PlayerCharacterData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UPlayerCharacterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHeroInfo HeroInfo;
    
    UFUNCTION(BlueprintPure)
    FText GetSwitchToMessage() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetSmallIcon() const;
    
    UFUNCTION(BlueprintPure)
    FText GetShortDescription() const;
    
    UFUNCTION(BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetLongDescription() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetFullSizeImage() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetColor() const;
    
    UPlayerCharacterData();
};

