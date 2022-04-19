#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAISenseNotifyType.h"
#include "AISense.generated.h"

class UAIPerceptionSystem;

UCLASS(Abstract, BlueprintType)
class AIMODULE_API UAISense : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultExpirationAge;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EAISenseNotifyType NotifyType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bWantsNewPawnNotification: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterAllPawnsAsSources: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UAIPerceptionSystem* PerceptionSystemInstance;
    
public:
    UAISense();
};

