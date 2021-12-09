#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SpawnTriggerFeature.generated.h"

class AActor;

UCLASS(EditInlineNew)
class USpawnTriggerFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<AActor> TriggerClass;
    
    UPROPERTY(VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(VisibleAnywhere)
    FName Message;
    
public:
    USpawnTriggerFeature();
};

