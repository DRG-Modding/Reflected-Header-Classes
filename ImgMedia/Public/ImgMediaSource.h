#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MediaAssets BaseMediaSource
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
//CROSS-MODULE INCLUDE: Engine DirectoryPath
#include "ImgMediaSource.generated.h"

UCLASS(EditInlineNew)
class IMGMEDIA_API UImgMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FFrameRate FrameRateOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString ProxyOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDirectoryPath SequencePath;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSequencePath(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSequencePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProxies(TArray<FString>& OutProxies) const;
    
    UImgMediaSource();
};

