#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCapture2D -FallbackName=SceneCapture2D
#include "OculusMR_CastingCameraActor.generated.h"

class UVRNotificationsComponent;
class UTexture2D;
class UOculusMR_PlaneMeshComponent;
class UMaterial;
class UOculusMR_Settings;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;
class UOculusMR_State;

UCLASS(NotPlaceable)
class AOculusMR_CastingCameraActor : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UVRNotificationsComponent* VRNotificationComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* CameraColorTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* CameraDepthTexture;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UOculusMR_PlaneMeshComponent* PlaneMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterial* ChromaKeyMaterial;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterial* OpaqueColoredMaterial;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ChromaKeyMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CameraFrameMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BackdropMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultTexture_White;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> BackgroundRenderTargets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* ForegroundCaptureActor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> ForegroundRenderTargets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<double> PoseTimes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UOculusMR_Settings* MRSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UOculusMR_State* MRState;
    
public:
    AOculusMR_CastingCameraActor();
};

