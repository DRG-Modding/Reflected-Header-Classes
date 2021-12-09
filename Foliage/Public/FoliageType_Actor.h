#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoliageType.h"
#include "FoliageType_Actor.generated.h"

class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class UFoliageType_Actor : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    bool bShouldAttachToBaseComponent;
    
    UFoliageType_Actor();
};

