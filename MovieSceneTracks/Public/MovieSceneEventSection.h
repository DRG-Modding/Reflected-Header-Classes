#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneEventSectionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NameCurve -FallbackName=NameCurve
#include "MovieSceneEventSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNameCurve Events;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEventSectionData EventData;
    
public:
    UMovieSceneEventSection();
};

