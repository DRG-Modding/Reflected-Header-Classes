#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
//CROSS-MODULE INCLUDE: InputCore EControllerHand
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ETrackingStatus.h"
#include "MotionControllerComponent.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(Blueprintable)
class HEADMOUNTEDDISPLAY_API UMotionControllerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite)
    EControllerHand hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MotionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableLowLatencyUpdate: 1;
    
    UPROPERTY(BlueprintReadOnly)
    ETrackingStatus CurrentTrackingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisplayDeviceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DisplayModelSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* CustomDisplayMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> DisplayMeshMaterialOverrides;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* DisplayComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrackingSource(const EControllerHand NewSource);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackingMotionSource(const FName NewSource);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDeviceModel(const bool bShowControllerModel);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMotionControllerUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetTrackingSource() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetParameterValue(FName InName, bool& bValueFound);
    
    UFUNCTION(BlueprintCallable)
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
    
public:
    UMotionControllerComponent();
};

