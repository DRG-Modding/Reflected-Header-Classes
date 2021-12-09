#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderSegment.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "FuelLineSegment.generated.h"

class USplineMeshComponent;
class USimpleHealthComponent;
class USplineComponent;
class UStaticMeshComponent;
class USceneComponent;
class UHealthComponentBase;

UCLASS(Abstract)
class FSD_API AFuelLineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* FuelLineSplineMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* FuelLineSplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* FuelLineEndPostMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* DeconstructHealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* PreviewEndPostLocation;
    
    UPROPERTY(EditAnywhere)
    float EndPostHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxLength;
    
    UPROPERTY()
    bool bHasMaxTurnAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxTurnAngle;
    
    UFUNCTION(Client, Unreliable, WithValidation)
    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    
    UFUNCTION()
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    
    UFUNCTION()
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
    
public:
    AFuelLineSegment();
};

