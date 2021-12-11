#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EARSessionType.h"
#include "EARWorldAlignment.h"
#include "EARPlaneDetectionMode.h"
#include "EARFrameSyncMode.h"
#include "EARLightEstimationMode.h"
#include "EAREnvironmentCaptureProbeType.h"
#include "ARVideoFormat.h"
#include "EARFaceTrackingDirection.h"
#include "EARFaceTrackingUpdate.h"
#include "EARSessionTrackingFeature.h"
#include "ARSessionConfig.generated.h"

class UARCandidateObject;
class UARCandidateImage;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARSessionConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bGenerateMeshDataFromTrackedGeometry;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateCollisionForMeshData;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateNavMeshForMeshData;
    
    UPROPERTY(EditAnywhere)
    bool bUseMeshDataForOcclusion;
    
    UPROPERTY(EditAnywhere)
    bool bRenderMeshDataInWireframe;
    
    UPROPERTY(EditAnywhere)
    bool bTrackSceneObjects;
    
    UPROPERTY(EditAnywhere)
    bool bUsePersonSegmentationForOcclusion;
    
protected:
    UPROPERTY(EditAnywhere)
    EARWorldAlignment WorldAlignment;
    
    UPROPERTY(EditAnywhere)
    EARSessionType SessionType;
    
    UPROPERTY()
    EARPlaneDetectionMode PlaneDetectionMode;
    
    UPROPERTY(EditAnywhere)
    bool bHorizontalPlaneDetection;
    
    UPROPERTY(EditAnywhere)
    bool bVerticalPlaneDetection;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutoFocus;
    
    UPROPERTY(EditAnywhere)
    EARLightEstimationMode LightEstimationMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EARFrameSyncMode FrameSyncMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutomaticCameraOverlay;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutomaticCameraTracking;
    
    UPROPERTY(EditAnywhere)
    bool bResetCameraTracking;
    
    UPROPERTY(EditAnywhere)
    bool bResetTrackedObjects;
    
    UPROPERTY(EditAnywhere)
    TArray<UARCandidateImage*> CandidateImages;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumSimultaneousImagesTracked;
    
    UPROPERTY(EditAnywhere)
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;
    
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> WorldMapData;
    
    UPROPERTY(EditAnywhere)
    TArray<UARCandidateObject*> CandidateObjects;
    
    UPROPERTY(EditAnywhere)
    FARVideoFormat DesiredVideoFormat;
    
    UPROPERTY(EditAnywhere)
    EARFaceTrackingDirection FaceTrackingDirection;
    
    UPROPERTY(EditAnywhere)
    EARFaceTrackingUpdate FaceTrackingUpdate;
    
    UPROPERTY()
    TArray<uint8> SerializedARCandidateImageDatabase;
    
    UPROPERTY(EditAnywhere)
    EARSessionTrackingFeature EnabledSessionTrackingFeature;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldResetTrackedObjects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldResetCameraTracking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRenderCameraOverlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEnableCameraTracking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEnableAutoFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWorldMapData(TArray<uint8> NewWorldMapData);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    
    UFUNCTION(BlueprintCallable)
    void SetResetTrackedObjects(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResetCameraTracking(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAutoFocus(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    
    UFUNCTION(BlueprintCallable)
    void SetCandidateObjectList(const TArray<UARCandidateObject*>& InCandidateObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetWorldMapData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARWorldAlignment GetWorldAlignment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARPlaneDetectionMode GetPlaneDetectionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumSimultaneousImagesTracked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARLightEstimationMode GetLightEstimationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARFrameSyncMode GetFrameSyncMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARFaceTrackingUpdate GetFaceTrackingUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARFaceTrackingDirection GetFaceTrackingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FARVideoFormat GetDesiredVideoFormat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UARCandidateObject*> GetCandidateObjectList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UARCandidateImage*> GetCandidateImageList() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCandidateObject(UARCandidateObject* CandidateObject);
    
    UFUNCTION(BlueprintCallable)
    void AddCandidateImage(UARCandidateImage* NewCandidateImage);
    
    UARSessionConfig();
};

