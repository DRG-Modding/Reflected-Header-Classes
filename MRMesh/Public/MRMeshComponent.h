#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "MRMeshComponent.generated.h"

class UMaterialInterface;
class UBodySetup;

UCLASS()
class MRMESH_API UMRMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    bool bCreateMeshProxySections;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateNavMeshOnMeshUpdate;
    
    UPROPERTY(EditAnywhere)
    bool bNeverCreateCollisionMesh;
    
    UPROPERTY(Transient)
    UBodySetup* CachedBodySetup;
    
    UPROPERTY(Transient)
    TArray<UBodySetup*> BodySetups;
    
    UPROPERTY()
    UMaterialInterface* WireframeMaterial;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNavMeshUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UMRMeshComponent();
};

