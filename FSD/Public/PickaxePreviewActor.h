#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PickaxePartEquip.h"
#include "ItemIDInterface.h"
#include "EPickaxePartLocation.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePreviewActor.generated.h"

class USceneComponent;
class UMaterialInterface;
class UItemID;
class UPickaxePart;

UCLASS()
class APickaxePreviewActor : public AActor, public IPickaxePartEquip, public IItemIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* TP_Root;
    
    UPROPERTY(Transient)
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(Transient)
    UMaterialInterface* EquippedMaterial;
    
public:
    UFUNCTION(BlueprintCallable)
    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    
    UFUNCTION(BlueprintCallable)
    void EquipParts();
    
    APickaxePreviewActor();
};

