#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnIsFallingToTerrainChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DropToTerrainComponent.generated.h"

class UTerrainDetectComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDropToTerrainComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainDetectComponent*> TerrainPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainTraceMaxDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsFallingToTerrainChanged OnFallToTerrainStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDetecting;
    
public:
    UDropToTerrainComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void StopDropDetection(bool stopFalling);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void SetParentPositionOnAll(FVector CurrentParentLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnTerrainRemoved(USceneComponent* Point);
    
    UFUNCTION(BlueprintCallable)
    void BeginDropDetection();
    
};

