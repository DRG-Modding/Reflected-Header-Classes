#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "GravityChangedComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class UGravityChangedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAwakeOnGravityChanged;
    
protected:
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
    UFUNCTION()
    void OnGravityChanged(float Gravity, float Change);
    
public:
    UGravityChangedComponent();
};

