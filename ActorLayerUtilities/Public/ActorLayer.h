#pragma once
#include "CoreMinimal.h"
#include "ActorLayer.generated.h"

USTRUCT(BlueprintType)
struct FActorLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ACTORLAYERUTILITIES_API FActorLayer();
};

