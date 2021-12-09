#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "UIFunctionLibrary.generated.h"

class UPlayerCharacterID;
class UObject;
class UNewsTextLists;
class UMissionNameBank;

UCLASS(BlueprintType)
class UUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex, int32 IconIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool MatchChildNotifications);
    
    UFUNCTION(BlueprintPure)
    static bool IsInItemUINotificationSet(UObject* WorldContextObject, UObject* Item);
    
    UFUNCTION(BlueprintPure)
    static int64 GetUnixTimeStamp();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex);
    
    UFUNCTION(BlueprintPure)
    static TArray<FText> FormatNewsTexts(TArray<FText> texts, int32 RandomSeed, UNewsTextLists* wordList, UMissionNameBank* MissionNameBank);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllItemUINotifications(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void CheckItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool& HasNotification, bool MatchChildNotifications);
    
    UFUNCTION(BlueprintCallable)
    static void AddItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item);
    
    UUIFunctionLibrary();
};

