#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTaskResource.generated.h"

UCLASS(Abstract, BlueprintType, HideDropdown, Config=Game)
class GAMEPLAYTASKS_API UGameplayTaskResource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    int32 ManualResourceID;
    
private:
    UPROPERTY()
    int8 AutoResourceID;
    
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bManuallySetID: 1;
    
    UGameplayTaskResource();
};

