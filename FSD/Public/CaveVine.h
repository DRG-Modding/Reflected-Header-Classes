#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "CaveVine.generated.h"

class UHealthComponent;
class USceneComponent;
class USplineMeshComponent;

UCLASS(Abstract, Blueprintable)
class ACaveVine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> GroundCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    float IdleSwingSpeed;
    
    UPROPERTY(EditAnywhere)
    float ChaseSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxReach;
    
    UPROPERTY(EditAnywhere)
    float GroundOffset;
    
    UPROPERTY(EditAnywhere)
    float NoiseRadius;
    
    UPROPERTY(EditAnywhere)
    float NoiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* VineHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VineVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VineLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VineStartLocation;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UHealthComponent> Target;
    
public:
    ACaveVine();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTargetChanged(UHealthComponent* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitialized();
    
};

