#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "PrePlacedEncounterItem.generated.h"

class UEnemyDescriptor;
class AEncounterActor;

USTRUCT(BlueprintType)
struct FPrePlacedEncounterItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UEnemyDescriptor* descriptor;
    
    UPROPERTY(Transient)
    FTransform Location;
    
    UPROPERTY(Transient)
    AEncounterActor* EncounterActor;
    
    FSD_API FPrePlacedEncounterItem();
};

