#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TurnBasedBlueprintLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMUTILS_API UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTurnBasedBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, int32 PlayerIndex, FString& PlayerDisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, bool& bIsMyTurn);
    
};

