#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FuelLineStart.generated.h"

class AFuelLineStart;
class UStaticMeshComponent;
class ATrackBuilderSegment;
class UOutlineComponent;
class UTrackBuilderUsable;
class USimpleObjectInfoComponent;
class UFuelLineStartUsable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuelLineStartOnFuelLineConnected, AFuelLineStart*, InFuelLineStart);

UCLASS(Abstract)
class FSD_API AFuelLineStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFuelLineStartOnFuelLineConnected OnFuelLineConnected;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* ObjectInfoComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFuelLineStartUsable* UsableStartFuelLine;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FuelLineConnected)
    bool bFuelLineConnected;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveFuelLineConnected();
    
    UFUNCTION()
    void OnRep_FuelLineConnected();
    
    UFUNCTION()
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFuelLineStart();
};

