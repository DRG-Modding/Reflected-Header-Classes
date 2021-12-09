#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PlayerCameraManager
#include "FSDPlayerCameraManager.generated.h"

UCLASS(MinimalAPI, NonTransient)
class AFSDPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AFSDPlayerCameraManager();
};

