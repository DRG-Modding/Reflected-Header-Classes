#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FSDEngine TerrainMaterialCore
#include "DecalData.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TerrainMaterial.generated.h"

class UFXSystemAsset;
class UResourceData;
class UTerrainType;
class UDialogDataAsset;
class UMaterialInstance;
class USoundCue;
class UFXSystemComponent;
class UObject;

UCLASS()
class FSD_API UTerrainMaterial : public UTerrainMaterialCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Collide: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Diggable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CanBeDrilled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ExplosionProof: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 MeltsInFire: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 PlatformDissolvable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* ResourceData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HitsNeededToMine;
    
    UPROPERTY(EditAnywhere)
    TArray<FDecalData> HitDecal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanHaveDecals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PickAxeDigSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RemoveDebrisOnFirstHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutLookAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutOnDig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainType* TerrainType;
    
protected:
    UPROPERTY(EditAnywhere)
    FText InGameName;
    
    UPROPERTY(EditAnywhere)
    FText InGameDescription;
    
    UPROPERTY(EditAnywhere)
    uint8 Precious: 1;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFXSystemAsset> DigParticles;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> DigParticlesMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFXSystemAsset> PartialDigParticles;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> PartialDigParticlesMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> CrumbleSound;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> PartialMineSound;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFXSystemComponent* SpawnPartialDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFXSystemComponent* SpawnDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPrecious() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstance* GetObjectMaterial() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInGameName() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstance* GetDigParticlesMaterialOverride() const;
    
    UTerrainMaterial();
};

