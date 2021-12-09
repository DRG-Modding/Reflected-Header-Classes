#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
//CROSS-MODULE INCLUDE: FSDEngine PFCollisionType
#include "PathfinderCollisionComponent.generated.h"

UCLASS(EditInlineNew)
class UPathfinderCollisionComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ActivatePFCollisionAtInit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    PFCollisionType PFColiType;
    
    UFUNCTION(BlueprintCallable)
    void DisablePFCollision();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePFCollision();
    
    UPathfinderCollisionComponent();
};

