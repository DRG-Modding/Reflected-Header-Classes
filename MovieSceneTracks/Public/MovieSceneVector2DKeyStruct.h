#pragma once
#include "CoreMinimal.h"
#include "MovieSceneVectorKeyStructBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "MovieSceneVector2DKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector2DKeyStruct();
};

