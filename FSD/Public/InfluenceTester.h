#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "InfluenceTester.generated.h"

class UCaveInfluencer;
class USphereComponent;

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

