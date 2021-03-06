#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_CompositionMethod.h"
#include "EOculusMR_PostProcessEffects.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EOculusMR_ClippingReference.h"
#include "EOculusMR_CameraDeviceEnum.h"
#include "OculusMR_Settings.generated.h"

UCLASS(Blueprintable)
class UOculusMR_Settings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOculusMR_ClippingReference ClippingReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTrackedCameraResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidthPerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeightPerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CastingLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BackdropColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandPoseStateLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ChromaKeyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChromaKeySimilarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChromaKeySmoothRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChromaKeySpillRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCasting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOculusMR_CompositionMethod CompositionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOculusMR_CameraDeviceEnum CapturingCamera;
    
public:
    UOculusMR_Settings();
    UFUNCTION(BlueprintCallable)
    void SetIsCasting(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetCompositionMethod(EOculusMR_CompositionMethod Val);
    
    UFUNCTION(BlueprintCallable)
    void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToIni() const;
    
    UFUNCTION(BlueprintCallable)
    void LoadFromIni();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsCasting();
    
    UFUNCTION(BlueprintCallable)
    EOculusMR_CompositionMethod GetCompositionMethod();
    
    UFUNCTION(BlueprintCallable)
    EOculusMR_CameraDeviceEnum GetCapturingCamera();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBindToTrackedCameraIndex();
    
    UFUNCTION(BlueprintCallable)
    void BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex);
    
};

