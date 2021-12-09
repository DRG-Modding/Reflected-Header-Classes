#pragma once
#include "CoreMinimal.h"
#include "SpecialEventSpawner.h"
#include "SimpleSpecialEventSpawner.generated.h"

class UDebrisPositioning;
class AActor;

UCLASS(EditInlineNew)
class USimpleSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> EventActor;
    
    UPROPERTY(EditAnywhere)
    float EventAvoidanceRadius;
    
public:
    USimpleSpecialEventSpawner();
};

