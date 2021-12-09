#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "TriggerItem.generated.h"

class ASpawnTrigger;

USTRUCT(BlueprintType)
struct FTriggerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<ASpawnTrigger> TriggerClass;
    
    UPROPERTY(VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(VisibleAnywhere)
    FName Message;
    
    FSD_API FTriggerItem();
};

