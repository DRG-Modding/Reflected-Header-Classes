#pragma once
#include "CoreMinimal.h"
#include "ModioImage.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ImagePath;
    
    FModioImage();
};

