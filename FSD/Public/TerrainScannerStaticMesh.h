#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
#include "TerrainScannerStaticMesh.generated.h"

class UHealthComponentBase;

UCLASS(EditInlineNew)
class FSD_API UTerrainScannerStaticMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bVisibleAtBeginPlay;
    
    UPROPERTY(EditAnywhere)
    bool bHideOnDeath;
    
    UPROPERTY(EditAnywhere)
    bool bUseFogOfWar;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bVisibleOnScanner;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleOnScanner(bool InShowOnScanner);
    
protected:
    UFUNCTION()
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
    
public:
    UTerrainScannerStaticMesh();
};

