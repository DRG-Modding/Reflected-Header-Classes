#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackIdentifier.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneFrameRange.h"
#include "MovieSceneTemplateGenerationLedger.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTemplateGenerationLedger {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneTrackIdentifier LastTrackIdentifier;
    
    UPROPERTY()
    TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
    
    UPROPERTY()
    TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges;
    
    MOVIESCENE_API FMovieSceneTemplateGenerationLedger();
};

