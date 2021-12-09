#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine KeyHandleLookupTable
#include "MovieSceneKeyHandleMap.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable {
    GENERATED_BODY()
public:
    MOVIESCENE_API FMovieSceneKeyHandleMap();
};

