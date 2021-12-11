#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState_TimedParticleEffect
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AnimNotifyState_TimedParticleEffectWithImpactDecals.generated.h"

class UMaterialInterface;
class UPhysicalMaterial;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_TimedParticleEffectWithImpactDecals : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DecalSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeDuration;
    
    UFUNCTION(BlueprintCallable)
    void OnParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) const;
    
public:
    UAnimNotifyState_TimedParticleEffectWithImpactDecals();
};

