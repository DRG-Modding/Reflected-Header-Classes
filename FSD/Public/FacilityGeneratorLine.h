#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FacilityGeneratorLine.generated.h"

class USplineComponent;
class USplineDecoratorComponent;
class UStaticMesh;
class UMaterialInterface;
class ATetherStation;

UCLASS()
class FSD_API AFacilityGeneratorLine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTransform> EndTransforms;
    
    UPROPERTY(EditAnywhere)
    float HeightOffsetMin;
    
    UPROPERTY(EditAnywhere)
    float HeightOffsetMax;
    
    UPROPERTY(EditAnywhere)
    float MaxSegmentLength;
    
    UPROPERTY(EditAnywhere)
    float CarveRadius;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineDecoratorComponent* SplineDecorator;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> LineMeshPtr;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> MaterialConnected;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> MaterialUnconnected;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ATetherStation* Station;
    
    UPROPERTY(Transient)
    UStaticMesh* MeshInstance;
    
    UPROPERTY(ReplicatedUsing=OnRep_Path)
    TArray<FVector> ReplicatedPath;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Connected)
    bool Connected;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetConnected(bool InConnected);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginPathFinding();
    
    UFUNCTION()
    void OnRep_Path();
    
    UFUNCTION()
    void OnRep_Connected();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityGeneratorLine();
};

