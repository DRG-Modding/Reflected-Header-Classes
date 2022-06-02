#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TrackPositionList.h"
#include "GemProximityTracker.generated.h"

class UGemTracker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGemProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTrackPositionList> TrackerLists;
    
    UGemProximityTracker();
};

