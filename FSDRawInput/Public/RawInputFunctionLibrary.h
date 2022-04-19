#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RegisteredDeviceInfo.h"
#include "RawInputFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URawInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

