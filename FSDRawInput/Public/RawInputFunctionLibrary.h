#pragma once
#include "CoreMinimal.h"
#include "RegisteredDeviceInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RawInputFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URawInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

