#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
#include "MovieScenePrimitiveMaterialSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectPathChannel MaterialChannel;
    
    UMovieScenePrimitiveMaterialSection();
};

