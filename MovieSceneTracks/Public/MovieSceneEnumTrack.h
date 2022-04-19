#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneEnumTrack.generated.h"

class UEnum;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneEnumTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    UMovieSceneEnumTrack();
};

