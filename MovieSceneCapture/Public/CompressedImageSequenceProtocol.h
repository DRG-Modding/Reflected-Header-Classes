#pragma once
#include "CoreMinimal.h"
#include "ImageSequenceProtocol.h"
#include "CompressedImageSequenceProtocol.generated.h"

UCLASS(Abstract)
class MOVIESCENECAPTURE_API UCompressedImageSequenceProtocol : public UImageSequenceProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 CompressionQuality;
    
    UCompressedImageSequenceProtocol();
};

