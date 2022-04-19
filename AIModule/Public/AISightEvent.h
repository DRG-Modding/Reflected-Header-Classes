#pragma once
#include "CoreMinimal.h"
#include "AISightEvent.generated.h"

class AActor;

USTRUCT()
struct AIMODULE_API FAISightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AActor* SeenActor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AActor* Observer;
    
    FAISightEvent();
};

