#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Pawn
#include "Targetable.h"
#include "Steerable.h"
#include "PathfinderVehicle.generated.h"

class USkeletalMeshComponent;
class UDeepPathfinderMovement;
class UHealthComponent;

UCLASS()
class APathfinderVehicle : public APawn, public ITargetable, public ISteerable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
public:
    APathfinderVehicle();
};

