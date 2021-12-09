#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "FSDFindSteamSessions.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDFindSteamSessionsOnFindResult, bool, success, const TArray<FBlueprintSessionResult>&, Results);

UCLASS()
class UFSDFindSteamSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFSDFindSteamSessionsOnFindResult OnFindResult;
    
    UFSDFindSteamSessions();
};

