#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "GrowthComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UGrowthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ScaleComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CurrentGrowthCurve;
    
public:
    UGrowthComponent();
    UFUNCTION(BlueprintCallable)
    void StopGrow();
    
    UFUNCTION(BlueprintCallable)
    void StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve);
    
};

