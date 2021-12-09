#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE: Engine IntegralCurve
#include "MovieSceneActorReferenceSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneActorReferenceSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneActorReferenceData ActorReferenceData;
    
    UPROPERTY()
    FIntegralCurve ActorGuidIndexCurve;
    
    UPROPERTY()
    TArray<FString> ActorGuidStrings;
    
public:
    UMovieSceneActorReferenceSection();
};

