#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OculusSplashDesc.h"
#include "EFixedFoveatedRenderingLevel.h"
#include "OculusHMDRuntimeSettings.generated.h"

UCLASS(DefaultConfig)
class OCULUSHMD_API UOculusHMDRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bAutoEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FOculusSplashDesc> SplashDescs;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsDash;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCompositesDepth;
    
    UPROPERTY(Config, EditAnywhere)
    bool bHQDistortion;
    
    UPROPERTY(Config, EditAnywhere)
    float PixelDensityMin;
    
    UPROPERTY(Config, EditAnywhere)
    float PixelDensityMax;
    
    UPROPERTY(Config, EditAnywhere)
    int32 CPULevel;
    
    UPROPERTY(Config, EditAnywhere)
    int32 GPULevel;
    
    UPROPERTY(Config, EditAnywhere)
    EFixedFoveatedRenderingLevel FFRLevel;
    
    UPROPERTY(Config, EditAnywhere)
    bool bChromaCorrection;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRecenterHMDWithController;
    
    UOculusHMDRuntimeSettings();
};

