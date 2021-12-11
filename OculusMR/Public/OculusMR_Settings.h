#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_PostProcessEffects.h"
#include "EOculusMR_ClippingReference.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "EOculusMR_DepthQuality.h"
#include "EOculusMR_CompositionMethod.h"
#include "EOculusMR_VirtualGreenScreenType.h"
#include "EOculusMR_CameraDeviceEnum.h"
#include "OculusMR_Settings.generated.h"

UCLASS(BlueprintType)
class UOculusMR_Settings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOculusMR_ClippingReference ClippingReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTrackedCameraResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WidthPerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeightPerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CastingLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor BackdropColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HandPoseStateLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor ChromaKeyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChromaKeySimilarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChromaKeySmoothRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChromaKeySpillRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOculusMR_VirtualGreenScreenType VirtualGreenScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DynamicLightingDepthSmoothFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DynamicLightingDepthVariationClampingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects;
    
private:
    UPROPERTY()
    bool bIsCasting;
    
    UPROPERTY()
    EOculusMR_CompositionMethod CompositionMethod;
    
    UPROPERTY()
    EOculusMR_CameraDeviceEnum CapturingCamera;
    
    UPROPERTY()
    bool bUseDynamicLighting;
    
    UPROPERTY()
    EOculusMR_DepthQuality DepthQuality;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUseDynamicLighting(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCasting(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthQuality(EOculusMR_DepthQuality Val);
    
    UFUNCTION(BlueprintCallable)
    void SetCompositionMethod(EOculusMR_CompositionMethod Val);
    
    UFUNCTION(BlueprintCallable)
    void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToIni() const;
    
    UFUNCTION(BlueprintCallable)
    void LoadFromIni();
    
    UFUNCTION(BlueprintCallable)
    bool GetUseDynamicLighting();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsCasting();
    
    UFUNCTION(BlueprintCallable)
    EOculusMR_DepthQuality GetDepthQuality();
    
    UFUNCTION(BlueprintCallable)
    EOculusMR_CompositionMethod GetCompositionMethod();
    
    UFUNCTION(BlueprintCallable)
    EOculusMR_CameraDeviceEnum GetCapturingCamera();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBindToTrackedCameraIndex();
    
    UFUNCTION(BlueprintCallable)
    void BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex);
    
    UOculusMR_Settings();
};

