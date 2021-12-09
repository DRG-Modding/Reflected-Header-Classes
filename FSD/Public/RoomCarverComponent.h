#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "RoomCarverComponent.generated.h"

class URoomGenerator;

UCLASS()
class URoomCarverComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URoomGenerator* RoomGenerator;
    
public:
    URoomCarverComponent();
};

