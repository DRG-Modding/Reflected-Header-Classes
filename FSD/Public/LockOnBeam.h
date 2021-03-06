#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BeamCollision.h"
#include "LockOnBeam.generated.h"

class ALockOnWeapon;
class USplineComponent;
class USceneComponent;
class USplineMeshComponent;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class ALockOnBeam : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* BeamSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* BeamMeshComponent01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* BeamMeshComponent02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* BeamMeshComponent03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* BlockedNodeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* PreviewLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BeamMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BlockedBeamMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SeekerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeamThicknessScale;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ALockOnWeapon> Item;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeamCollision Collision;
    
public:
    ALockOnBeam();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSet();
    
};

