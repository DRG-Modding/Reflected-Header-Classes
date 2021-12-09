#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieSceneTracks MovieSceneMaterialTrack
#include "MovieSceneWidgetMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FName> BrushPropertyNamePath;
    
    UPROPERTY()
    FName TrackName;
    
public:
    UMovieSceneWidgetMaterialTrack();
};

