#pragma once
#include "CoreMinimal.h"
#include "EasingComponentData.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FEasingComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Section;
    
    MOVIESCENE_API FEasingComponentData();
};

