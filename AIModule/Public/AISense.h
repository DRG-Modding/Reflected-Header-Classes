#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EAISenseNotifyType.h"
#include "AISense.generated.h"

class UAIPerceptionSystem;

UCLASS(Abstract, BlueprintType)
class AIMODULE_API UAISense : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    float DefaultExpirationAge;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    EAISenseNotifyType NotifyType;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    uint8 bWantsNewPawnNotification: 1;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    uint8 bAutoRegisterAllPawnsAsSources: 1;
    
private:
    UPROPERTY()
    UAIPerceptionSystem* PerceptionSystemInstance;
    
public:
    UAISense();
};

