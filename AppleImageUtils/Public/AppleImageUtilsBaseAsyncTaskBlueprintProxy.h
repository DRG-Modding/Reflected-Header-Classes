#pragma once
#include "CoreMinimal.h"
#include "AppleImageUtilsImageConversionResult.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ETextureRotationDirection.h"
#include "AppleImageUtilsBaseAsyncTaskBlueprintProxy.generated.h"

class UTexture;
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnSuccess, const FAppleImageUtilsImageConversionResult&, ConversionResult);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnFailure, const FAppleImageUtilsImageConversionResult&, ConversionResult);

UCLASS(BlueprintType, MinimalAPI)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnFailure OnFailure;
    
    UPROPERTY(BlueprintReadOnly)
    FAppleImageUtilsImageConversionResult ConversionResult;
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UFUNCTION(BlueprintCallable)
    static UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    
    UAppleImageUtilsBaseAsyncTaskBlueprintProxy();
};

