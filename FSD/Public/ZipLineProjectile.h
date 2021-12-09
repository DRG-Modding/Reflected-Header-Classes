#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ZipLineProjectile.generated.h"

class UTimelineComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UPointLightComponent;
class UStatusEffect;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FZipLineProjectileCallback, float, Output);

UCLASS(Abstract)
class AZipLineProjectile : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTimelineComponent* Timeline;
    
    UPROPERTY(EditAnywhere)
    float LightIntensity;
    
    UPROPERTY(EditAnywhere)
    float MaterialGlow;
    
    UPROPERTY()
    FZipLineProjectileCallback Callback;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LightCurve;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UPointLightComponent*> PointLights;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UStatusEffect> OnUseStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UStatusEffect> OnReleaseStatusEffect;
    
    UFUNCTION()
    void OnTimelineTick(float NewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShoot(FVector Origin, FVector EndLocation);
    
public:
    AZipLineProjectile();
};

