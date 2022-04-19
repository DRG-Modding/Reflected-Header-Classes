#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FSDPhysicsActor.generated.h"

UCLASS()
class AFSDPhysicsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MovementUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MovementUpdateEventTriggeredFrequency;
    
    AFSDPhysicsActor();
    UFUNCTION(BlueprintCallable)
    void ForceMovementUpdate();
    
};

