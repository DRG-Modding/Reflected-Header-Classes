#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ElevatorPlant.generated.h"

class USceneComponent;
class UAudioComponent;
class USoundCue;
class UCurveFloat;
class USplineMeshComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FElevatorPlantOnStartTimelineEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElevatorPlantCOnStateChangedEvent, bool, IsIdling);

UCLASS()
class AElevatorPlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FElevatorPlantOnStartTimelineEvent OnStartTimelineEvent;
    
    UPROPERTY(BlueprintAssignable)
    FElevatorPlantCOnStateChangedEvent COnStateChangedEvent;
    
    UPROPERTY(Export)
    UAudioComponent* MovingSoundComponent;
    
    UPROPERTY(EditAnywhere)
    USoundCue* GrabSound;
    
    UPROPERTY(EditAnywhere)
    FVector RestPositionOffset;
    
    UPROPERTY(EditAnywhere, Replicated)
    FVector RelativeRestLocation;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_RelavtiveDestinationLocation)
    FVector RelativeDestinationLocation;
    
    UPROPERTY(EditAnywhere)
    FVector BaseTangentDirectionOffset;
    
    UPROPERTY(EditAnywhere)
    FVector LeafTangentDirectionOffset;
    
    UPROPERTY(EditAnywhere)
    FVector LeafLocationNoise;
    
    UPROPERTY(EditAnywhere)
    FRotator LeafNoiseRotator;
    
    UPROPERTY(EditAnywhere)
    float BaseTangentLength;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USplineMeshComponent* CSplineMesh;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* CVineBase;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* CVineLeaf;
    
    UPROPERTY(EditAnywhere, Replicated)
    float InitialBaseTangentLength;
    
    UPROPERTY(EditAnywhere)
    float LeafLocationNoiseSize;
    
    UPROPERTY(EditAnywhere)
    float VineMovementAlpha;
    
    UPROPERTY(EditAnywhere)
    bool IsMoving;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Open)
    bool IsOpen;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool Extend;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DipOffsetCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LocationLerpCurve;
    
    UFUNCTION(BlueprintCallable)
    void SetLeafNoiseRotator(const FRotator& aRotator);
    
    UFUNCTION(BlueprintCallable)
    void SetLeafLocationNoise(const FVector& aVector);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpen(bool aValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExtended(bool aValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseTangentLength(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseTangentDirectionOffset(const FVector& aVector);
    
    UFUNCTION()
    void OnRep_RelavtiveDestinationLocation();
    
    UFUNCTION()
    void OnRep_Open();
    
    UFUNCTION()
    void OnMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void MoreTick(const FVector& DipOffset, float aValue);
    
    UFUNCTION(BlueprintPure)
    float GetVineMovementAlpha() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRelativeRestLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRelativeDestinationLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeafLocationNoiseSize() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsExtended() const;
    
    UFUNCTION(BlueprintPure)
    float GetInitialTangentLenth() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AElevatorPlant();
};

