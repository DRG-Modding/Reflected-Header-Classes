#pragma once
#include "CoreMinimal.h"
#include "ARVideoFormat.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARVideoFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FPS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Height;
    
    FARVideoFormat();
};

