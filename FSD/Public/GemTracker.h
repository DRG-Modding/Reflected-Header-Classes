#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "GemTracker.generated.h"

UCLASS()
class UGemTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TrackName;
    
    UGemTracker();
};

