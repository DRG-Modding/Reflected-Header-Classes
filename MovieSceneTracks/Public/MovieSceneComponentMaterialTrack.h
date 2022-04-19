#pragma once
#include "CoreMinimal.h"
#include "MovieSceneMaterialTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneComponentMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    UMovieSceneComponentMaterialTrack();
    
    // Fix for true pure virtual functions not being implemented
};

