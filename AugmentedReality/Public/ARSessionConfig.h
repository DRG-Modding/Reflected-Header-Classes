#pragma once
#include "CoreMinimal.h"
#include "EAREnvironmentCaptureProbeType.h"
#include "EARFaceTrackingUpdate.h"
#include "EARFrameSyncMode.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EARWorldAlignment.h"
#include "EARSessionType.h"
#include "EARLightEstimationMode.h"
#include "EARPlaneDetectionMode.h"
#include "ARVideoFormat.h"
#include "EARFaceTrackingDirection.h"
#include "EARSessionTrackingFeature.h"
#include "ARSessionConfig.generated.h"

class UARCandidateImage;
class UARCandidateObject;

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
    UFUNCTION(BlueprintPure)
    bool ShouldResetTrackedObjects() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldResetCameraTracking() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldRenderCameraOverlay() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldEnableCameraTracking() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetWorldMapData() const;
    
    UFUNCTION(BlueprintPure)
    EARWorldAlignment GetWorldAlignment() const;
    
    UFUNCTION(BlueprintPure)
    EARSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintPure)
    EARPlaneDetectionMode GetPlaneDetectionMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxNumSimultaneousImagesTracked() const;
    
    UFUNCTION(BlueprintPure)
    EARLightEstimationMode GetLightEstimationMode() const;
    
    UFUNCTION(BlueprintPure)
    EARFrameSyncMode GetFrameSyncMode() const;
    
    UFUNCTION(BlueprintPure)
    EARFaceTrackingUpdate GetFaceTrackingUpdate() const;
    
    UFUNCTION(BlueprintPure)
    EARFaceTrackingDirection GetFaceTrackingDirection() const;
    
    UFUNCTION(BlueprintPure)
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType() const;
    
    UFUNCTION(BlueprintPure)
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature() const;
    
    UFUNCTION(BlueprintPure)
    FARVideoFormat GetDesiredVideoFormat() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UARCandidateObject*> GetCandidateObjectList() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UARCandidateImage*> GetCandidateImageList() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCandidateObject(UARCandidateObject* CandidateObject);
    
    UFUNCTION(BlueprintCallable)
    void AddCandidateImage(UARCandidateImage* NewCandidateImage);
    
    UARSessionConfig();
};

