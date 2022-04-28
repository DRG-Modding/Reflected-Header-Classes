#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSpawnTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneSpawnTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ObjectGuid;
    
public:
    UMovieSceneSpawnTrack();
};

