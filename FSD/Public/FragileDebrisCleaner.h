#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "FragileDebrisCleaner.generated.h"

UCLASS()
class UFragileDebrisCleaner : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CleanRadius;
    
    UFragileDebrisCleaner();
};

