#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "InfluenceTester.generated.h"

class USphereComponent;
class UCaveInfluencer;

UCLASS()
class AInfluenceTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCaveInfluencer* Influencer;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* Sphere;
    
    AInfluenceTester();
};

