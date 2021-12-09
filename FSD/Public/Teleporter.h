#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "CustomItemPlacementHandling.h"
#include "Teleporter.generated.h"

class ATeleporter;

UCLASS(Abstract)
class ATeleporter : public AActor, public ICustomItemPlacementHandling {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ATeleporter* ConnectedTeleporter;
    
    UPROPERTY(EditAnywhere)
    float MinTeleporterRange;
    
    UPROPERTY(EditAnywhere)
    float MaxTeleporterRange;
    
public:
    ATeleporter();
};
