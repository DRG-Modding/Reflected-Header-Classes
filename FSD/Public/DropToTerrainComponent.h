#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "DropToTerrainComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropToTerrainComponentOnFallToTerrainStateChanged, bool, IsFalling);

UCLASS(BlueprintType)
class UDropToTerrainComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FallVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TerrainTraceMaxDistance;
    
    UPROPERTY(BlueprintAssignable)
    FDropToTerrainComponentOnFallToTerrainStateChanged OnFallToTerrainStateChanged;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CurrentLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DropTarget;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsDetecting;
    
    UFUNCTION(BlueprintCallable)
    void StopDropDetection(bool stopFalling);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void SetParentPositionOnAll(FVector CurrentParentLocation);
    
    UFUNCTION()
    void OnTerrainRemoved();
    
    UFUNCTION(BlueprintCallable)
    void BeginDropDetection();
    
public:
    UDropToTerrainComponent();
};

