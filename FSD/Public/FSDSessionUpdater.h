#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "FSDSessionUpdater.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSessionUpdaterOnNewFSDSessionID, const FString&, sessionId);

UCLASS()
class UFSDSessionUpdater : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFSDSessionUpdaterOnNewFSDSessionID OnNewFSDSessionID;
    
    UFSDSessionUpdater();
};

