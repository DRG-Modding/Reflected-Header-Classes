#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TrackPositionList.h"
#include "GemProximityTracker.generated.h"

class UGemTracker;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGemProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTrackPositionList> TrackerLists;
    
    UGemProximityTracker();
};

