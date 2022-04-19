#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneColorTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsSlateColor;
    
public:
    UMovieSceneColorTrack();
};

