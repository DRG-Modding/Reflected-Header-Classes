#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneBinding.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FMovieSceneBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ObjectGuid;
    
    UPROPERTY()
    FString BindingName;
    
    UPROPERTY(Export)
    TArray<UMovieSceneTrack*> Tracks;
    
public:
    MOVIESCENE_API FMovieSceneBinding();
};

