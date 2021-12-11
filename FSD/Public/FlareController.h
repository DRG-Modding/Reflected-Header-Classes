#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "FlareMeta.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FlareController.generated.h"

class AFlareGunProjectile;
class AFlare;
class AActor;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFlareControllerOnShadowQualityChanged);

UCLASS(BlueprintType)
class UFlareController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFlareControllerOnShadowQualityChanged OnShadowQualityChanged;
    
protected:
    UPROPERTY(Transient)
    TArray<FFlareMeta> FlaresMeta;
    
public:
    UFUNCTION(BlueprintCallable)
    static void UnregisterFlareGunProjectile(AFlareGunProjectile* flareprj);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterFlare(AFlare* Flare);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterFlareGunProjectile(AFlareGunProjectile* flareprj);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterFlare(AFlare* Flare);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindFlareNear(UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction);
    
    UFlareController();
};

