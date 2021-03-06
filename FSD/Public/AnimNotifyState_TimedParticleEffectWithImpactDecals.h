#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState_TimedParticleEffect -FallbackName=AnimNotifyState_TimedParticleEffect
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNotifyState_TimedParticleEffectWithImpactDecals.generated.h"

class UMaterialInterface;
class UPhysicalMaterial;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_TimedParticleEffectWithImpactDecals : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
public:
    UAnimNotifyState_TimedParticleEffectWithImpactDecals();
protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) const;
    
};

