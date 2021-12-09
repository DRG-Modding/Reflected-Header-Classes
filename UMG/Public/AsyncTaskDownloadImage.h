#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "AsyncTaskDownloadImage.generated.h"

class UTexture2DDynamic;
class UAsyncTaskDownloadImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskDownloadImageOnSuccess, UTexture2DDynamic*, Texture);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskDownloadImageOnFail, UTexture2DDynamic*, Texture);

UCLASS()
class UMG_API UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskDownloadImageOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskDownloadImageOnFail OnFail;
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskDownloadImage* DownloadImage(const FString& URL);
    
    UAsyncTaskDownloadImage();
};

