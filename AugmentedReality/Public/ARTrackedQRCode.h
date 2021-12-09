#pragma once
#include "CoreMinimal.h"
#include "ARTrackedImage.h"
#include "ARTrackedQRCode.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARTrackedQRCode : public UARTrackedImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString QRCode;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Version;
    
    UARTrackedQRCode();
};

