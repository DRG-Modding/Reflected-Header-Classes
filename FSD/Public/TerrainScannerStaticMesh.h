#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "TerrainScannerStaticMesh.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTerrainScannerStaticMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFogOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleOnScanner;
    
public:
    UTerrainScannerStaticMesh();
    UFUNCTION(BlueprintCallable)
    void SetVisibleOnScanner(bool InShowOnScanner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
    
};

