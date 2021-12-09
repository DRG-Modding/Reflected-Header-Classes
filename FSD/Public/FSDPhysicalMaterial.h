#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine PhysicalMaterial
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
#include "DecalData.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FSDPhysicalMaterial.generated.h"

class UFXSystemAsset;
class UObject;
class USoundCue;
class UReactiveTerrain;
class UNiagaraSystem;
class UMaterialInstance;
class UFXSystemComponent;
class UFSDPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(CollapseCategories)
class UFSDPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BreakingDecelerationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BreakingFrictionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAccelerationScale;
    
    UPROPERTY(EditAnywhere)
    bool RepulsePlayer;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval RepulsePlayerVelocity;
    
    UPROPERTY(EditAnywhere)
    float RepulsePlayerRandomDegreeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* RepulsePlayerSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* RepulsePlayerParticle;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* ImpactParticles;
    
    UPROPERTY(VisibleAnywhere)
    UNiagaraSystem* ImpactNParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* ImpactMaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* MeleeImpactSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseImpactDecalOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FDecalData> ImpactDecals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* FirstPersonDamageIndicatorSound;
    
    UPROPERTY(EditAnywhere)
    bool IsWeakPoint;
    
    UPROPERTY(EditAnywhere)
    bool IsSubhealthCollider;
    
    UPROPERTY(EditAnywhere)
    float DamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* FootstepParticle;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* FootstepMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    FDecalData LeftFootprintDecal;
    
    UPROPERTY(EditAnywhere)
    FDecalData RightFootprintDecal;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FootstepSound;
    
    UPROPERTY(EditAnywhere)
    float ExtraFallVelocity;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* FallImpactEffect;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FallImpactSound;
    
    UPROPERTY(EditAnywhere)
    bool AlwaysPenetrate;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UReactiveTerrain> ReactiveTerrain;
    
public:
    UFUNCTION(BlueprintCallable)
    static UFXSystemComponent* SpawnImpactParticlesFromHit(UObject* WorldContextObject, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFXSystemComponent* SpawnImpactParticles(UObject* WorldContextObject, FVector Location, FVector Normal) const;
    
    UFUNCTION(BlueprintPure)
    static UFSDPhysicalMaterial* GetPhysicalMaterialFromPrimitive(UPrimitiveComponent* Component);
    
    UFSDPhysicalMaterial();
};

