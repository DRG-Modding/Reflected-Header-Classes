#pragma once
#include "CoreMinimal.h"
#include "indSteamSessionsResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FSDFindSteamSessions.generated.h"

UCLASS(Blueprintable)
class UFSDFindSteamSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FindSteamSessionsResult OnFindResult;
    
    UFSDFindSteamSessions();
};

