#pragma once
#include "CoreMinimal.h"
#include "AITouchEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAITouchEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* TouchReceiver;
    
    UPROPERTY()
    AActor* OtherActor;
    
    FAITouchEvent();
};

