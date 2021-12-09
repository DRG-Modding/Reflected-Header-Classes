#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneCapture2D
#include "OculusMR_CastingCameraActor.generated.h"

class UMaterialInstanceDynamic;
class UVRNotificationsComponent;
class UTexture2D;
class UOculusMR_PlaneMeshComponent;
class UMaterial;
class AOculusMR_BoundaryActor;
class UTextureRenderTarget2D;
class UOculusMR_Settings;
class UOculusMR_State;

UCLASS(NotPlaceable)
class AOculusMR_CastingCameraActor : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UVRNotificationsComponent* VRNotificationComponent;
    
    UPROPERTY()
    UTexture2D* CameraColorTexture;
    
    UPROPERTY()
    UTexture2D* CameraDepthTexture;
    
    UPROPERTY(Export)
    UOculusMR_PlaneMeshComponent* PlaneMeshComponent;
    
    UPROPERTY()
    UMaterial* ChromaKeyMaterial;
    
    UPROPERTY()
    UMaterial* ChromaKeyLitMaterial;
    
    UPROPERTY()
    UMaterial* OpaqueColoredMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ChromaKeyMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ChromaKeyLitMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* CameraFrameMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* BackdropMaterialInstance;
    
    UPROPERTY()
    AOculusMR_BoundaryActor* BoundaryActor;
    
    UPROPERTY()
    ASceneCapture2D* BoundarySceneCaptureActor;
    
    UPROPERTY()
    UTexture2D* DefaultTexture_White;
    
private:
    UPROPERTY()
    TArray<UTextureRenderTarget2D*> BackgroundRenderTargets;
    
    UPROPERTY()
    ASceneCapture2D* ForegroundCaptureActor;
    
    UPROPERTY()
    TArray<UTextureRenderTarget2D*> ForegroundRenderTargets;
    
    UPROPERTY()
    UOculusMR_Settings* MRSettings;
    
    UPROPERTY()
    UOculusMR_State* MRState;
    
public:
    AOculusMR_CastingCameraActor();
};

