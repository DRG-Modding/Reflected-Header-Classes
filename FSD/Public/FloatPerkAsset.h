#pragma once
#include "CoreMinimal.h"
#include "PerkAsset.h"
#include "FloatPerkRank.h"
#include "FloatPerkEffect.h"
#include "FloatPerkAsset.generated.h"

class UObject;
class UFloatPerkAsset;

UCLASS()
class UFloatPerkAsset : public UPerkAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FFloatPerkRank> Ranks;
    
    UPROPERTY(EditAnywhere)
    TArray<FFloatPerkEffect> Effects;
    
public:
    UFUNCTION(BlueprintPure)
    float GetPerkValue(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    float GetLastTierValue() const;
    
    UFUNCTION(BlueprintPure)
    static float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
    
    UFloatPerkAsset();
};

