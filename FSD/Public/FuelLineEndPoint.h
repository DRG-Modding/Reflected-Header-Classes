#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FuelLineEndPoint.generated.h"

class UFuelLineConnectPoint;
class UTrackBuilderConnectPoint;
class UStaticMeshComponent;
class ATrackBuilderSegment;

UCLASS(Abstract)
class FSD_API AFuelLineEndPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFuelLineConnectPoint* ConnectPoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePing(bool InValidPlacement);
    
protected:
    UFUNCTION()
    void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
public:
    AFuelLineEndPoint();
};

