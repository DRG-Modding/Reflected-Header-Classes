#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshComponent -FallbackName=SplineMeshComponent
#include "TerrainScannerSplineMesh.generated.h"

class UHealthComponentBase;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class FSD_API UTerrainScannerSplineMesh : public USplineMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFogOfWar;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleOnScanner;
    
public:
    UTerrainScannerSplineMesh();
    UFUNCTION(BlueprintCallable)
    void SetVisibleOnScanner(bool InShowOnScanner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
    
};

