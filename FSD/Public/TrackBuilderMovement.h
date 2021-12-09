#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "TrackBuilderMovement.generated.h"

UCLASS(Abstract, BlueprintType)
class FSD_API UTrackBuilderMovement : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementSpeed;
    
public:
    UTrackBuilderMovement();
};

