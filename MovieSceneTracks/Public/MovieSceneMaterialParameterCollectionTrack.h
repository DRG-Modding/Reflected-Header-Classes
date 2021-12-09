#pragma once
#include "CoreMinimal.h"
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneMaterialParameterCollectionTrack.generated.h"

class UMaterialParameterCollection;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* MPC;
    
    UMovieSceneMaterialParameterCollectionTrack();
};

