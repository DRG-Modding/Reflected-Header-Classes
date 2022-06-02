#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderSegment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "FuelLineSegment.generated.h"

class USceneComponent;
class USplineMeshComponent;
class USplineComponent;
class UStaticMeshComponent;
class USimpleHealthComponent;
class UHealthComponentBase;

UCLASS(Abstract, Blueprintable)
class FSD_API AFuelLineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* FuelLineSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* FuelLineSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FuelLineEndPostMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* DeconstructHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* PreviewEndPostLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPostHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMaxTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnAngle;
    
public:
    AFuelLineSegment();
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
    
};

