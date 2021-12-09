#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "EDrinkableAlcoholStrength.h"
#include "DrinkableDataAsset.generated.h"

class APlayerCharacter;
class UDialogDataAsset;
class ADrinkableItem;
class UTexture2D;
class ADrinkableActor;
class UTemporaryBuff;
class UMissionStat;
class UDrinkableDataAsset;
class UDrinkEffectComponent;
class UResourceData;
class UObject;
class APlayerController;

UCLASS()
class UDrinkableDataAsset : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DrinkableName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DrinkableDescription;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DrinkablePrice;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> DrinkableIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredPlayerRank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ParticipatesInFreeBeerEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDrinkableAlcoholStrength AlcoholStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDrinkableDataAsset* SupporterEdition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlayFireworks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* StatConsumed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* StatRoundOrdered;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ADrinkableActor> DrinkableActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ADrinkableItem> DrinkableItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* OrderShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* OrderCheeringShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* DrinkSaluteShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTemporaryBuff* buff;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UDrinkEffectComponent> DrinkEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> UnlockCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> PurchaseCost;
    
    UFUNCTION(BlueprintCallable)
    static bool TryUnlockSpecialDrinks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool TryUnlockDrink(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool TryPurchaseDrink(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void OnRoundOrdered(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool MustBeUnlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnlocked(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDrinkFree(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    bool HasSupporterEdition() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetDrinkableIcon() const;
    
    UFUNCTION(BlueprintPure)
    UDrinkableDataAsset* GetDrinkableEdition(UObject* WorldContext, APlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    static bool AreSpecialDrinksUnlocked(UObject* WorldContext);
    
    UDrinkableDataAsset();
};

