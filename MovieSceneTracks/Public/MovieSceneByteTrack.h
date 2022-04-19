#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneByteTrack.generated.h"

class UEnum;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneByteTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    UMovieSceneByteTrack();
};

