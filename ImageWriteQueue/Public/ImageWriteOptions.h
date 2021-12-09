#pragma once
#include "CoreMinimal.h"
#include "EDesiredImageFormat.h"
#include "ImageWriteOptions.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FImageWriteOptionsOnComplete, bool, bSuccess);

USTRUCT(BlueprintType)
struct FImageWriteOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDesiredImageFormat Format;
    
    UPROPERTY(BlueprintReadWrite)
    FImageWriteOptionsOnComplete OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CompressionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverwriteFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAsync;
    
    IMAGEWRITEQUEUE_API FImageWriteOptions();
};

