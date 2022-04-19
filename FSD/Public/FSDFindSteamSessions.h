#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "indSteamSessionsResultDelegate.h"
#include "FSDFindSteamSessions.generated.h"

UCLASS()
class UFSDFindSteamSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FindSteamSessionsResult OnFindResult;
    
    UFSDFindSteamSessions();
};

