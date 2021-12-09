#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "TurnBasedBlueprintLibrary.generated.h"

class UObject;
class APlayerController;

UCLASS(BlueprintType)
class ONLINESUBSYSTEMUTILS_API UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, int32 PlayerIndex, FString& PlayerDisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, bool& bIsMyTurn);
    
    UTurnBasedBlueprintLibrary();
};

