#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTaskResource.generated.h"

UCLASS(Abstract, BlueprintType, HideDropdown, Config=Game)
class GAMEPLAYTASKS_API UGameplayTaskResource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 ManualResourceID;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int8 AutoResourceID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bManuallySetID: 1;
    
    UGameplayTaskResource();
};

