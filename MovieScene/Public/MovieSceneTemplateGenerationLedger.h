#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneFrameRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneTemplateGenerationLedger.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTemplateGenerationLedger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackIdentifier LastTrackIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges;
    
    MOVIESCENE_API FMovieSceneTemplateGenerationLedger();
};

