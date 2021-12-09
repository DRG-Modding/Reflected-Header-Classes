#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "LeaderboardBlueprintLibrary.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class ONLINESUBSYSTEMUTILS_API ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32 StatValue);
    
    ULeaderboardBlueprintLibrary();
};

