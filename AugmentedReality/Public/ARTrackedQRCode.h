#pragma once
#include "CoreMinimal.h"
#include "ARTrackedImage.h"
#include "ARTrackedQRCode.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARTrackedQRCode : public UARTrackedImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString QRCode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UARTrackedQRCode();
};

