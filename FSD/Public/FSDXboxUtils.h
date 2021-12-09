#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "FSDXboxUtils.generated.h"

class UObject;

UCLASS(BlueprintType)
class UFSDXboxUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void ShowStoreUIForStoreItem(UObject* WorldContextObject, const FString& storeItemName);
    
    UFUNCTION(BlueprintCallable)
    static void ShowStoreUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool ShowCheatTerminal();
    
    UFUNCTION(BlueprintPure)
    static bool IsDCLCheckComplete(UObject* WorldContextObject);
    
    UFSDXboxUtils();
};

