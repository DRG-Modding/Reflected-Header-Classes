#pragma once
#include "CoreMinimal.h"
#include "SocketReference.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FSocketReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    FSocketReference();
};

