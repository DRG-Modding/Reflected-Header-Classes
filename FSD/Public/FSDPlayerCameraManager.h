#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "FSDPlayerCameraManager.generated.h"

UCLASS(MinimalAPI, NonTransient)
class AFSDPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AFSDPlayerCameraManager();
};

