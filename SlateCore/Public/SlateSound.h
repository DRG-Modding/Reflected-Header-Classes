#pragma once
#include "CoreMinimal.h"
#include "SlateSound.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateSound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* ResourceObject;
    
public:
    FSlateSound();
};

