#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "ImgMediaSettings.generated.h"

UCLASS(Blueprintable)
class IMGMEDIAFACTORY_API UImgMediaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate DefaultFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    float CacheBehindPercentage;
    
    UPROPERTY(Config, EditAnywhere)
    float CacheSizeGB;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CacheThreads;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CacheThreadStackSizeKB;
    
    UPROPERTY(Config, EditAnywhere)
    float GlobalCacheSizeGB;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseGlobalCache;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 ExrDecoderThreads;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultProxy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultProxy;
    
public:
    UImgMediaSettings();
};

