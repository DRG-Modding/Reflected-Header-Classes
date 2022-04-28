#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ExplosionBaseComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ScaledEffect.h"
#include "ProjectileExplosion.generated.h"

class UForceFeedbackAttenuation;
class USoundCue;
class UForceFeedbackEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProjectileExplosion : public UExplosionBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaledEffect ExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackAttenuation* ForceFeedbackAttanuation;
    
public:
    UProjectileExplosion();
    UFUNCTION(BlueprintCallable)
    void SpawnEffectsFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEffects(FVector Location, FVector Normal);
    
};

