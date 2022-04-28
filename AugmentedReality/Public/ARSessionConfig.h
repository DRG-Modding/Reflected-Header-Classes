#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EARWorldAlignment.h"
#include "EARPlaneDetectionMode.h"
#include "EARSessionType.h"
#include "EAREnvironmentCaptureProbeType.h"
#include "EARFrameSyncMode.h"
#include "EARLightEstimationMode.h"
#include "ARVideoFormat.h"
#include "EARFaceTrackingDirection.h"
#include "EARFaceTrackingUpdate.h"
#include "EARSessionTrackingFeature.h"
#include "EARSceneReconstruction.h"
#include "ARSessionConfig.generated.h"

class UAREnvironmentProbeComponent;
class UARCandidateImage;
class UARObjectComponent;
class UARCandidateObject;
class UMaterialInterface;
class UARPlaneComponent;
class UARPointComponent;
class UARFaceComponent;
class UARImageComponent;
class UARQRCodeComponent;
class UARPoseComponent;
class UARMeshComponent;
class UARGeoAnchorComponent;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARSessionConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateMeshDataFromTrackedGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateCollisionForMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateNavMeshForMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMeshDataForOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderMeshDataInWireframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackSceneObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePersonSegmentationForOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSceneDepthForOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutomaticImageScaleEstimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStandardOnboardingUX;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARWorldAlignment WorldAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARSessionType SessionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARPlaneDetectionMode PlaneDetectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHorizontalPlaneDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerticalPlaneDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARLightEstimationMode LightEstimationMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARFrameSyncMode FrameSyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticCameraOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticCameraTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetCameraTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetTrackedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UARCandidateImage*> CandidateImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumSimultaneousImagesTracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UARCandidateObject*> CandidateObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARVideoFormat DesiredVideoFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOptimalVideoFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARFaceTrackingDirection FaceTrackingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARFaceTrackingUpdate FaceTrackingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfTrackedFaces;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> SerializedARCandidateImageDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARSessionTrackingFeature EnabledSessionTrackingFeature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARSceneReconstruction SceneReconstructionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARPlaneComponent> PlaneComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARPointComponent> PointComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARFaceComponent> FaceComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARImageComponent> ImageComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARQRCodeComponent> QRCodeComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARPoseComponent> PoseComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARObjectComponent> ObjectComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARMeshComponent> MeshComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARGeoAnchorComponent> GeoAnchorComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultWireframeMeshMaterial;
    
public:
    UARSessionConfig();
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
    void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARWorldAlignment GetWorldAlignment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARSceneReconstruction GetSceneReconstructionMethod() const;
    
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
    
};

