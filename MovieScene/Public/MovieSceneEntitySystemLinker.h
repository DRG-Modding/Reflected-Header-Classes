#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystemGraph.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntitySystemLinker.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneEntitySystemLinker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEntitySystemGraph SystemGraph;
    
    UMovieSceneEntitySystemLinker();
};

