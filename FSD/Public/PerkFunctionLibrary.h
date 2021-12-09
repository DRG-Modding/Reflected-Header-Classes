#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EPerkSlotType.h"
#include "EPerkUsageType.h"
#include "PerkFunctionLibrary.generated.h"

class UPerkAsset;
class UObject;
class APlayerCharacter;

UCLASS(BlueprintType)
class UPerkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SplitPerksByUsage(const TArray<UPerkAsset*>& perks, TArray<UPerkAsset*>& OutPassivePerks, TArray<UPerkAsset*>& OutActivePerks);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPerkAsset*> SortPerksByUsage(UPARAM(Ref) TArray<UPerkAsset*>& perks);
    
    UFUNCTION(BlueprintPure)
    static void GetPerkEquipSlots(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<APlayerCharacter> InCharacterClass, int32& OutAvailableSlots, int32& OutUnavailableSlots, int32& OutPromotionLockedSlots);
    
    UFUNCTION(BlueprintPure)
    static TArray<EPerkSlotType> GetPerkEquipSlotLayout(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<APlayerCharacter> InCharacterClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<UPerkAsset*> GetOwnedPerksByType(UObject* WorldContext, EPerkUsageType InType);
    
    UFUNCTION(BlueprintPure)
    static TArray<UPerkAsset*> GetOwnedPerks(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static FText FormatRichText(const FText& SourceText, bool UpperCase, const TMap<FString, FString> CharTagMap);
    
    UPerkFunctionLibrary();
};

