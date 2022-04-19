#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneVectorTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumChannelsUsed;
    
public:
    UMovieSceneVectorTrack();
};

