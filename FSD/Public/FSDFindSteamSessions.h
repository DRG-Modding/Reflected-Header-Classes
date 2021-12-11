#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "FSDFindSteamSessions.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDFindSteamSessionsOnFindResult, bool, success, const TArray<FBlueprintSessionResult>&, Results);

UCLASS()
class UFSDFindSteamSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFSDFindSteamSessionsOnFindResult OnFindResult;
    
    UFSDFindSteamSessions();
};

