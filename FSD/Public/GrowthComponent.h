#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "GrowthComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType)
class UGrowthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    USceneComponent* ScaleComponent;
    
    UPROPERTY(Transient)
    FRuntimeFloatCurve CurrentGrowthCurve;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopGrow();
    
    UFUNCTION(BlueprintCallable)
    void StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve);
    
    UGrowthComponent();
};

