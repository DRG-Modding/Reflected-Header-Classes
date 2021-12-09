#pragma once
#include "CoreMinimal.h"
#include "ElementID.generated.h"

USTRUCT(BlueprintType)
struct FElementID {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 IDValue;
    
public:
    MESHDESCRIPTION_API FElementID();
};

