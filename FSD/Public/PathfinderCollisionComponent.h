#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=PFCollisionType -FallbackName=PFCollisionType
#include "PathfinderCollisionComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPathfinderCollisionComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivatePFCollisionAtInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PFCollisionType PFColiType;
    
    UPathfinderCollisionComponent();
    UFUNCTION(BlueprintCallable)
    void DisablePFCollision();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePFCollision();
    
};

