#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TrackBuilderMovement.generated.h"

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class FSD_API UTrackBuilderMovement : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
public:
    UTrackBuilderMovement();
};

